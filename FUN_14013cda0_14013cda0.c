
undefined8
FUN_14013cda0(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4,byte param_5,
             double *param_6,ulonglong param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  byte *pbVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  byte bVar53;
  undefined1 auVar46 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iStack_80;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  iVar8 = (int)param_3;
  uVar17 = param_4 & 0xffffffff;
  lVar35 = (longlong)param_2;
  if (((param_1 == 0) || (param_6 == (double *)0x0)) || (param_7 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar8 < 1) || (uVar27 = (uint)((ulonglong)param_3 >> 0x20), (int)uVar27 < 1)) {
    return 0xfffffffa;
  }
  if (lVar35 < iVar8) {
    return 0xfffffff0;
  }
  uVar15 = (uint)param_4;
  if ((-1 < (int)uVar15) && ((int)uVar15 < iVar8)) {
    uVar33 = param_4 >> 0x20;
    uVar20 = (uint)(param_4 >> 0x20);
    if ((-1 < (longlong)param_4) && ((int)uVar20 < (int)uVar27)) {
      lVar9 = (longlong)(int)uVar15;
      lVar25 = (int)(param_2 * uVar20) + param_1;
      bVar1 = *(byte *)(lVar9 + lVar25);
      if (param_5 == *(byte *)(lVar9 + lVar25)) {
        return 0;
      }
      puVar23 = (uint *)(param_7 + (-(param_7 & 7) & 7));
      param_4 = param_4 & 0xffffffff;
      bVar53 = (char)param_5 >> 7;
      auVar52._0_14_ = ZEXT114(bVar53) << 0x38;
      auVar52[0xe] = bVar53;
      auVar52[0xf] = bVar53;
      auVar51._14_2_ = auVar52._14_2_;
      auVar51._0_13_ = ZEXT113(bVar53) << 0x38;
      auVar51[0xd] = bVar53;
      auVar50._13_3_ = auVar51._13_3_;
      auVar50._0_12_ = ZEXT112(bVar53) << 0x38;
      auVar50[0xc] = bVar53;
      auVar49._12_4_ = auVar50._12_4_;
      auVar49._0_11_ = ZEXT111(bVar53) << 0x38;
      auVar49[0xb] = bVar53;
      auVar48._11_5_ = auVar49._11_5_;
      auVar48._0_10_ = (unkuint10)bVar53 << 0x38;
      auVar48[10] = bVar53;
      auVar47._10_6_ = auVar48._10_6_;
      auVar47._0_9_ = (unkuint9)bVar53 << 0x38;
      auVar47[9] = bVar53;
      auVar7._1_8_ = (longlong)(CONCAT72(auVar47._9_7_,CONCAT11(bVar53,bVar53)) >> 8);
      auVar7[0] = bVar53;
      auVar7._9_7_ = 0;
      auVar6._10_6_ = 0;
      auVar6._0_10_ = SUB1610(auVar7 << 0x38,6);
      auVar5._11_5_ = 0;
      auVar5._0_11_ = SUB1611(auVar6 << 0x30,5);
      auVar46._4_12_ = SUB1612(auVar5 << 0x28,4);
      auVar46[3] = param_5;
      auVar46[2] = param_5;
      auVar46[1] = param_5;
      auVar46[0] = param_5;
      *(byte *)(lVar9 + lVar25) = param_5;
      uVar43 = auVar46._0_4_;
      uVar10 = uVar15;
      for (lVar41 = lVar9;
          (uVar12 = (uint)param_4, 0 < (int)uVar10 && (bVar1 == *(byte *)(lVar41 + -1 + lVar25)));
          lVar41 = lVar41 + -1) {
        *(byte *)((longlong)(int)uVar12 + -1 + lVar25) = param_5;
        uVar10 = uVar12 - 1;
        param_4 = (ulonglong)uVar10;
      }
      for (; (uVar10 = (uint)uVar17, (int)uVar15 < iVar8 + -1 &&
             (bVar1 == *(byte *)(lVar9 + 1 + lVar25))); lVar9 = lVar9 + 1) {
        *(byte *)((longlong)(int)uVar10 + 1 + lVar25) = param_5;
        uVar15 = uVar10 + 1;
        uVar17 = (ulonglong)uVar15;
      }
      iStack_80 = (uVar10 - uVar12) + 1;
      uVar15 = uVar20;
      if (1 < (int)uVar27) {
        puVar23[3] = uVar10 + 1;
        uVar44 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
        uVar45 = CONCAT44(uVar44,uVar44);
        uVar15 = 0xffffffff;
        if (uVar20 != uVar27 - 1) {
          uVar15 = 1;
        }
        *puVar23 = uVar20;
        puVar23[1] = uVar12;
        puVar23[2] = uVar10;
        puVar23[4] = uVar10;
        puVar23[5] = uVar15;
        lVar9 = 1;
        lVar25 = 0x18;
        do {
          lVar41 = lVar25 + -0x18;
          lVar9 = lVar9 + -1;
          uVar2 = *(uint *)(lVar25 + -0x10 + (longlong)puVar23);
          if ((int)uVar17 <= *(int *)(lVar25 + -0x10 + (longlong)puVar23)) {
            uVar17 = (ulonglong)uVar2;
          }
          uVar3 = *(uint *)(lVar25 + -0x14 + (longlong)puVar23);
          if (*(int *)(lVar25 + -0x14 + (longlong)puVar23) <= (int)param_4) {
            param_4 = (ulonglong)uVar3;
          }
          uVar38 = *(uint *)(lVar41 + (longlong)puVar23);
          iVar36 = *(int *)(lVar25 + -0xc + (longlong)puVar23);
          if ((int)uVar20 <= *(int *)(lVar41 + (longlong)puVar23)) {
            uVar20 = uVar38;
          }
          iVar19 = *(int *)(lVar25 + -8 + (longlong)puVar23);
          iVar4 = *(int *)(lVar25 + -4 + (longlong)puVar23);
          if (*(int *)(lVar41 + (longlong)puVar23) <= (int)uVar33) {
            uVar33 = (ulonglong)uVar38;
          }
          uVar15 = (uint)uVar33;
          uVar10 = (uint)uVar17;
          uVar12 = (uint)param_4;
          if (uVar38 - iVar4 < uVar27) {
            lVar24 = (int)((uVar38 - iVar4) * param_2) + param_1;
            iVar32 = uVar3 - 1;
            if (iVar32 < 1) {
              iVar32 = 0;
            }
            iVar22 = uVar2 + 2;
            if (iVar8 <= (int)(uVar2 + 2)) {
              iVar22 = iVar8;
            }
            if (iVar32 < iVar22) {
              lVar25 = ((longlong)*(int *)(lVar41 + (longlong)puVar23) -
                       (longlong)*(int *)(lVar25 + -4 + (longlong)puVar23)) * lVar35 + param_1;
              do {
                lVar30 = (longlong)iVar32;
                if (bVar1 == *(byte *)(lVar24 + lVar30)) {
                  *(byte *)(lVar24 + lVar30) = param_5;
                  lVar40 = 0;
                  iVar16 = iVar32;
                  if (0 < iVar32) {
                    lVar39 = lVar24 + iVar32;
                    uVar21 = 0;
                    do {
                      if (bVar1 != *(byte *)(lVar40 + -1 + lVar39)) break;
                      uVar42 = uVar21 + 1;
                      *(byte *)(lVar40 + -1 + lVar39) = param_5;
                      iVar16 = (iVar32 - (int)uVar21) + -1;
                      lVar40 = lVar40 + -1;
                      uVar21 = uVar42;
                    } while (uVar42 < (ulonglong)(longlong)iVar32);
                  }
                  if (iVar22 - iVar32 < 0x10) {
                    iVar11 = iVar32;
                    if (iVar32 < iVar8 + -1) {
                      pbVar31 = (byte *)(iVar32 + lVar24);
                      uVar21 = 0;
                      do {
                        pbVar31 = pbVar31 + 1;
                        if (bVar1 != *pbVar31) break;
                        uVar42 = uVar21 + 1;
                        *pbVar31 = param_5;
                        iVar11 = (int)uVar21 + iVar32 + 1;
                        uVar21 = uVar42;
                      } while (uVar42 < ((longlong)iVar8 - (longlong)iVar32) - 1U);
                    }
                  }
                  else {
                    iVar11 = 0;
                    iVar28 = iVar32;
                    if (iVar32 <= iVar8 + -0x11) {
                      lVar40 = (longlong)iVar32;
                      lVar39 = lVar40 + lVar24;
                      uVar37 = 0;
LAB_14013d2c0:
                      auVar54[0] = -(*(byte *)(lVar39 + 1) == bVar1);
                      auVar54[1] = -(*(byte *)(lVar39 + 2) == bVar1);
                      auVar54[2] = -(*(byte *)(lVar39 + 3) == bVar1);
                      auVar54[3] = -(*(byte *)(lVar39 + 4) == bVar1);
                      auVar54[4] = -(*(byte *)(lVar39 + 5) == bVar1);
                      auVar54[5] = -(*(byte *)(lVar39 + 6) == bVar1);
                      auVar54[6] = -(*(byte *)(lVar39 + 7) == bVar1);
                      auVar54[7] = -(*(byte *)(lVar39 + 8) == bVar1);
                      auVar54[8] = -(*(byte *)(lVar39 + 9) == bVar1);
                      auVar54[9] = -(*(byte *)(lVar39 + 10) == bVar1);
                      auVar54[10] = -(*(byte *)(lVar39 + 0xb) == bVar1);
                      auVar54[0xb] = -(*(byte *)(lVar39 + 0xc) == bVar1);
                      auVar54[0xc] = -(*(byte *)(lVar39 + 0xd) == bVar1);
                      auVar54[0xd] = -(*(byte *)(lVar39 + 0xe) == bVar1);
                      auVar54[0xe] = -(*(byte *)(lVar39 + 0xf) == bVar1);
                      auVar54[0xf] = -(*(byte *)(lVar39 + 0x10) == bVar1);
                      uVar34 = (uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(auVar54[0xf] >> 7) << 0xf);
                      if (uVar34 == 0xffff) goto code_r0x00014013d2db;
                      uVar34 = ~uVar34;
                      iVar28 = 0;
                      if (uVar34 != 0) {
                        for (; (uVar34 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
                        }
                      }
                      iVar11 = iVar28 + iVar32 + iVar11;
                      goto LAB_14013d361;
                    }
LAB_14013d2f2:
                    uVar37 = 0;
                    iVar11 = iVar28;
                    if (iVar28 < iVar8 + -1) {
                      lVar40 = 0;
                      do {
                        if (bVar1 != *(byte *)(lVar40 + 1 + iVar28 + lVar24)) break;
                        lVar40 = lVar40 + 1;
                        iVar11 = iVar28 + 1 + uVar37;
                        uVar37 = uVar37 + 1;
                      } while (uVar37 < (iVar8 - iVar28) - 1U);
                    }
LAB_14013d361:
                    if (iVar32 <= iVar11 + -8) {
                      uVar37 = 0;
                      puVar26 = (undefined8 *)(lVar30 + lVar25 + 1);
                      do {
                        uVar37 = uVar37 + 1;
                        *puVar26 = CONCAT44(uVar43,uVar43);
                        puVar26 = puVar26 + 1;
                      } while (uVar37 < (uint)(iVar11 - iVar32) >> 3);
                      iVar32 = iVar32 + uVar37 * 8;
                    }
                    lVar30 = (longlong)iVar32;
                    if (iVar32 < iVar11) {
                      uVar21 = ((longlong)iVar11 - (lVar30 + 1)) + 1;
                      if ((longlong)uVar21 < 0x10) {
LAB_14013df67:
                        uVar18 = 0;
                      }
                      else {
                        lVar40 = lVar25 + lVar30;
                        uVar42 = lVar40 + 1U & 0xf;
                        if (uVar42 != 0) {
                          uVar42 = 0x10 - uVar42;
                        }
                        if ((longlong)uVar21 < (longlong)(uVar42 + 0x10)) goto LAB_14013df67;
                        uVar13 = 0;
                        uVar18 = (ulonglong)(int)((int)uVar21 - ((int)uVar21 - (int)uVar42 & 0xfU));
                        if (uVar42 != 0) {
                          do {
                            *(byte *)(uVar13 + 1 + lVar40) = param_5;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 < uVar42);
                        }
                        do {
                          puVar26 = (undefined8 *)(uVar42 + 1 + lVar40);
                          *puVar26 = uVar45;
                          puVar26[1] = uVar45;
                          uVar42 = uVar42 + 0x10;
                        } while (uVar42 < uVar18);
                      }
                      if (uVar18 < uVar21) {
                        do {
                          *(byte *)(uVar18 + 1 + lVar30 + lVar25) = param_5;
                          uVar18 = uVar18 + 1;
                        } while (uVar18 < uVar21);
                      }
                    }
                  }
                  lVar9 = lVar9 + 1;
                  *(uint *)(lVar41 + (longlong)puVar23) = uVar38 - iVar4;
                  iVar32 = iVar11 + 1;
                  *(int *)(lVar41 + 4 + (longlong)puVar23) = iVar16;
                  *(int *)(lVar41 + 8 + (longlong)puVar23) = iVar11;
                  iStack_80 = iStack_80 + (iVar32 - iVar16);
                  *(uint *)(lVar41 + 0xc + (longlong)puVar23) = uVar3;
                  *(uint *)(lVar41 + 0x10 + (longlong)puVar23) = uVar2;
                  *(int *)(lVar41 + 0x14 + (longlong)puVar23) = iVar4;
                  lVar41 = lVar41 + 0x18;
                }
                iVar32 = iVar32 + 1;
              } while (iVar32 < iVar22);
            }
          }
          iVar22 = uVar38 + iVar4;
          iVar32 = uVar3 - 1;
          lVar25 = param_2 * iVar22 + param_1;
          if (iVar32 < 1) {
            iVar32 = 0;
          }
          if (iVar32 < iVar36) {
            lVar24 = ((longlong)(int)uVar38 + (longlong)iVar4) * lVar35 + param_1;
            do {
              lVar30 = (longlong)iVar32;
              if (bVar1 == *(byte *)(lVar30 + lVar25)) {
                *(byte *)(lVar30 + lVar25) = param_5;
                lVar40 = 0;
                iVar16 = iVar32;
                if (0 < iVar32) {
                  lVar39 = lVar25 + iVar32;
                  uVar21 = 0;
                  do {
                    if (bVar1 != *(byte *)(lVar40 + -1 + lVar39)) break;
                    uVar42 = uVar21 + 1;
                    *(byte *)(lVar40 + -1 + lVar39) = param_5;
                    iVar16 = (iVar32 - (int)uVar21) + -1;
                    lVar40 = lVar40 + -1;
                    uVar21 = uVar42;
                  } while (uVar42 < (ulonglong)(longlong)iVar32);
                }
                if (iVar36 - iVar32 < 0x10) {
                  iVar11 = iVar32;
                  if (iVar32 < iVar8 + -1) {
                    pbVar31 = (byte *)(lVar25 + iVar32);
                    uVar21 = 0;
                    do {
                      pbVar31 = pbVar31 + 1;
                      if (bVar1 != *pbVar31) break;
                      uVar42 = uVar21 + 1;
                      *pbVar31 = param_5;
                      iVar11 = (int)uVar21 + iVar32 + 1;
                      uVar21 = uVar42;
                    } while (uVar42 < ((longlong)iVar8 - (longlong)iVar32) - 1U);
                  }
                }
                else {
                  uVar37 = 0;
                  iVar28 = iVar32;
                  if (iVar32 <= iVar8 + -0x11) {
                    lVar39 = (longlong)iVar32;
                    lVar40 = lVar25 + lVar39;
                    uVar34 = uVar37;
LAB_14013d7a0:
                    auVar55[0] = -(*(byte *)(lVar40 + 1) == bVar1);
                    auVar55[1] = -(*(byte *)(lVar40 + 2) == bVar1);
                    auVar55[2] = -(*(byte *)(lVar40 + 3) == bVar1);
                    auVar55[3] = -(*(byte *)(lVar40 + 4) == bVar1);
                    auVar55[4] = -(*(byte *)(lVar40 + 5) == bVar1);
                    auVar55[5] = -(*(byte *)(lVar40 + 6) == bVar1);
                    auVar55[6] = -(*(byte *)(lVar40 + 7) == bVar1);
                    auVar55[7] = -(*(byte *)(lVar40 + 8) == bVar1);
                    auVar55[8] = -(*(byte *)(lVar40 + 9) == bVar1);
                    auVar55[9] = -(*(byte *)(lVar40 + 10) == bVar1);
                    auVar55[10] = -(*(byte *)(lVar40 + 0xb) == bVar1);
                    auVar55[0xb] = -(*(byte *)(lVar40 + 0xc) == bVar1);
                    auVar55[0xc] = -(*(byte *)(lVar40 + 0xd) == bVar1);
                    auVar55[0xd] = -(*(byte *)(lVar40 + 0xe) == bVar1);
                    auVar55[0xe] = -(*(byte *)(lVar40 + 0xf) == bVar1);
                    auVar55[0xf] = -(*(byte *)(lVar40 + 0x10) == bVar1);
                    uVar29 = (uint)(ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar55[0xf] >> 7) << 0xf);
                    if (uVar29 == 0xffff) goto code_r0x00014013d7bc;
                    uVar29 = ~uVar29;
                    iVar28 = 0;
                    if (uVar29 != 0) {
                      for (; (uVar29 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
                      }
                    }
                    iVar11 = iVar28 + iVar32 + uVar37;
                    goto LAB_14013d841;
                  }
LAB_14013d7d3:
                  uVar37 = 0;
                  iVar11 = iVar28;
                  if (iVar28 < iVar8 + -1) {
                    lVar40 = 0;
                    do {
                      if (bVar1 != *(byte *)(lVar40 + 1 + iVar28 + lVar25)) break;
                      lVar40 = lVar40 + 1;
                      iVar11 = iVar28 + 1 + uVar37;
                      uVar37 = uVar37 + 1;
                    } while (uVar37 < (iVar8 - iVar28) - 1U);
                  }
LAB_14013d841:
                  if (iVar32 <= iVar11 + -8) {
                    uVar37 = 0;
                    puVar26 = (undefined8 *)(lVar30 + lVar24 + 1);
                    do {
                      uVar37 = uVar37 + 1;
                      *puVar26 = CONCAT44(uVar43,uVar43);
                      puVar26 = puVar26 + 1;
                    } while (uVar37 < (uint)(iVar11 - iVar32) >> 3);
                    iVar32 = iVar32 + uVar37 * 8;
                  }
                  lVar30 = (longlong)iVar32;
                  if (iVar32 < iVar11) {
                    uVar21 = ((longlong)iVar11 - (lVar30 + 1)) + 1;
                    if ((longlong)uVar21 < 0x10) {
LAB_14013df4d:
                      uVar18 = 0;
                    }
                    else {
                      lVar40 = lVar24 + lVar30;
                      uVar42 = lVar40 + 1U & 0xf;
                      if (uVar42 != 0) {
                        uVar42 = 0x10 - uVar42;
                      }
                      if ((longlong)uVar21 < (longlong)(uVar42 + 0x10)) goto LAB_14013df4d;
                      uVar13 = 0;
                      uVar18 = (ulonglong)(int)((int)uVar21 - ((int)uVar21 - (int)uVar42 & 0xfU));
                      if (uVar42 != 0) {
                        do {
                          *(byte *)(uVar13 + 1 + lVar40) = param_5;
                          uVar13 = uVar13 + 1;
                        } while (uVar13 < uVar42);
                      }
                      do {
                        puVar26 = (undefined8 *)(uVar42 + 1 + lVar40);
                        *puVar26 = uVar45;
                        puVar26[1] = uVar45;
                        uVar42 = uVar42 + 0x10;
                      } while (uVar42 < uVar18);
                    }
                    if (uVar18 < uVar21) {
                      do {
                        *(byte *)(uVar18 + 1 + lVar30 + lVar24) = param_5;
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar21);
                    }
                  }
                }
                lVar9 = lVar9 + 1;
                *(int *)(lVar41 + (longlong)puVar23) = iVar22;
                iVar32 = iVar11 + 1;
                *(int *)(lVar41 + 4 + (longlong)puVar23) = iVar16;
                *(int *)(lVar41 + 8 + (longlong)puVar23) = iVar11;
                iStack_80 = iStack_80 + (iVar32 - iVar16);
                *(uint *)(lVar41 + 0xc + (longlong)puVar23) = uVar3;
                *(uint *)(lVar41 + 0x10 + (longlong)puVar23) = uVar2;
                *(int *)(lVar41 + 0x14 + (longlong)puVar23) = -iVar4;
                lVar41 = lVar41 + 0x18;
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < iVar36);
          }
          uVar37 = iVar19 + 1;
          iVar36 = iVar8;
          if ((int)(uVar2 + 2) < iVar8) {
            iVar36 = uVar2 + 2;
          }
          if ((int)uVar37 < iVar36) {
            lVar24 = ((longlong)(int)uVar38 + (longlong)iVar4) * lVar35 + param_1;
            do {
              uVar21 = (ulonglong)uVar37;
              lVar30 = (longlong)(int)uVar37;
              uVar38 = uVar37;
              if (bVar1 == *(byte *)(lVar30 + lVar25)) {
                *(byte *)(lVar30 + lVar25) = param_5;
                iVar19 = iVar8 + -1;
                lVar40 = 0;
                uVar42 = uVar21;
                uVar34 = uVar37;
                if (0 < (int)uVar37) {
                  uVar42 = (ulonglong)(int)uVar37;
                  uVar18 = 0;
                  uVar13 = uVar21;
                  do {
                    uVar34 = (uint)uVar13;
                    if (bVar1 != *(byte *)(lVar40 + -1 + lVar25 + uVar42)) break;
                    uVar14 = uVar18 + 1;
                    *(byte *)(lVar40 + -1 + lVar25 + uVar42) = param_5;
                    uVar34 = (uVar37 - (int)uVar18) - 1;
                    uVar13 = (ulonglong)uVar34;
                    lVar40 = lVar40 + -1;
                    uVar18 = uVar14;
                  } while (uVar14 < uVar42);
                }
                iVar32 = (int)uVar42;
                if (iVar36 - iVar32 < 0x10) {
                  if (iVar32 < iVar19) {
                    pbVar31 = (byte *)(lVar25 + iVar32);
                    uVar42 = 0;
                    do {
                      uVar37 = (uint)uVar21;
                      pbVar31 = pbVar31 + 1;
                      if (bVar1 != *pbVar31) break;
                      uVar18 = uVar42 + 1;
                      *pbVar31 = param_5;
                      uVar37 = (int)uVar42 + iVar32 + 1;
                      uVar21 = (ulonglong)uVar37;
                      uVar42 = uVar18;
                    } while (uVar18 < (ulonglong)((longlong)iVar19 - (longlong)iVar32));
                  }
                }
                else {
                  iVar16 = 0;
                  uVar42 = uVar42 & 0xffffffff;
                  if (iVar32 <= iVar8 + -0x11) {
                    lVar40 = lVar25 + iVar32;
                    lVar39 = ((longlong)iVar19 + -0x10) - (longlong)iVar32;
                    uVar38 = 0;
LAB_14013dc60:
                    auVar56[0] = -(*(byte *)(lVar40 + 1) == bVar1);
                    auVar56[1] = -(*(byte *)(lVar40 + 2) == bVar1);
                    auVar56[2] = -(*(byte *)(lVar40 + 3) == bVar1);
                    auVar56[3] = -(*(byte *)(lVar40 + 4) == bVar1);
                    auVar56[4] = -(*(byte *)(lVar40 + 5) == bVar1);
                    auVar56[5] = -(*(byte *)(lVar40 + 6) == bVar1);
                    auVar56[6] = -(*(byte *)(lVar40 + 7) == bVar1);
                    auVar56[7] = -(*(byte *)(lVar40 + 8) == bVar1);
                    auVar56[8] = -(*(byte *)(lVar40 + 9) == bVar1);
                    auVar56[9] = -(*(byte *)(lVar40 + 10) == bVar1);
                    auVar56[10] = -(*(byte *)(lVar40 + 0xb) == bVar1);
                    auVar56[0xb] = -(*(byte *)(lVar40 + 0xc) == bVar1);
                    auVar56[0xc] = -(*(byte *)(lVar40 + 0xd) == bVar1);
                    auVar56[0xd] = -(*(byte *)(lVar40 + 0xe) == bVar1);
                    auVar56[0xe] = -(*(byte *)(lVar40 + 0xf) == bVar1);
                    auVar56[0xf] = -(*(byte *)(lVar40 + 0x10) == bVar1);
                    uVar37 = (uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar56[0xf] >> 7) << 0xf);
                    if (uVar37 == 0xffff) goto code_r0x00014013dc7c;
                    uVar37 = ~uVar37;
                    iVar19 = 0;
                    if (uVar37 != 0) {
                      for (; (uVar37 >> iVar19 & 1) == 0; iVar19 = iVar19 + 1) {
                      }
                    }
                    uVar37 = iVar19 + iVar32 + iVar16;
                    goto LAB_14013dcd7;
                  }
LAB_14013dc93:
                  uVar38 = 0;
                  uVar29 = (uint)uVar42;
                  lVar40 = 0;
                  uVar37 = uVar29;
                  if ((int)uVar29 < iVar19) {
                    do {
                      uVar37 = (uint)uVar42;
                      if (bVar1 != *(byte *)(lVar40 + 1 + (int)uVar29 + lVar25)) break;
                      lVar40 = lVar40 + 1;
                      uVar37 = uVar29 + 1 + uVar38;
                      uVar42 = (ulonglong)uVar37;
                      uVar38 = uVar38 + 1;
                    } while (uVar38 < iVar19 - uVar29);
                  }
LAB_14013dcd7:
                  uVar38 = 0;
                  if (iVar32 <= (int)(uVar37 - 8)) {
                    puVar26 = (undefined8 *)(lVar30 + lVar24 + 1);
                    do {
                      uVar38 = uVar38 + 1;
                      *puVar26 = CONCAT44(uVar43,uVar43);
                      puVar26 = puVar26 + 1;
                    } while (uVar38 < uVar37 - iVar32 >> 3);
                    iVar32 = iVar32 + uVar38 * 8;
                  }
                  lVar30 = (longlong)iVar32;
                  if (iVar32 < (int)uVar37) {
                    uVar21 = ((longlong)(int)uVar37 - (lVar30 + 1)) + 1;
                    if ((longlong)uVar21 < 0x10) {
LAB_14013df34:
                      uVar18 = 0;
                    }
                    else {
                      lVar40 = lVar24 + lVar30;
                      uVar42 = lVar40 + 1U & 0xf;
                      if (uVar42 != 0) {
                        uVar42 = 0x10 - uVar42;
                      }
                      if ((longlong)uVar21 < (longlong)(uVar42 + 0x10)) goto LAB_14013df34;
                      uVar13 = 0;
                      uVar18 = (ulonglong)(int)((int)uVar21 - ((int)uVar21 - (int)uVar42 & 0xfU));
                      if (uVar42 != 0) {
                        do {
                          *(byte *)(uVar13 + 1 + lVar40) = param_5;
                          uVar13 = uVar13 + 1;
                        } while (uVar13 < uVar42);
                      }
                      do {
                        puVar26 = (undefined8 *)(uVar42 + 1 + lVar40);
                        *puVar26 = uVar45;
                        puVar26[1] = uVar45;
                        uVar42 = uVar42 + 0x10;
                      } while (uVar42 < uVar18);
                    }
                    if (uVar18 < uVar21) {
                      do {
                        *(byte *)(uVar18 + 1 + lVar30 + lVar24) = param_5;
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar21);
                    }
                  }
                }
                lVar9 = lVar9 + 1;
                *(int *)(lVar41 + (longlong)puVar23) = iVar22;
                uVar38 = uVar37 + 1;
                *(uint *)(lVar41 + 4 + (longlong)puVar23) = uVar34;
                *(uint *)(lVar41 + 8 + (longlong)puVar23) = uVar37;
                iStack_80 = iStack_80 + (uVar38 - uVar34);
                *(uint *)(lVar41 + 0xc + (longlong)puVar23) = uVar3;
                *(uint *)(lVar41 + 0x10 + (longlong)puVar23) = uVar2;
                *(int *)(lVar41 + 0x14 + (longlong)puVar23) = -iVar4;
                lVar41 = lVar41 + 0x18;
              }
              uVar37 = uVar38 + 1;
            } while ((int)uVar37 < iVar36);
          }
          lVar25 = lVar41;
        } while (lVar9 != 0);
      }
      *param_6 = (double)iStack_80;
      *(uint *)(param_6 + 4) = uVar12;
      *(uint *)((longlong)param_6 + 0x24) = uVar15;
      *(uint *)(param_6 + 5) = (uVar10 - uVar12) + 1;
      *(uint *)((longlong)param_6 + 0x2c) = (uVar20 - uVar15) + 1;
      param_6[1] = (double)param_5;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      return 0;
    }
  }
  return 0xfffffff5;
code_r0x00014013d2db:
  uVar37 = uVar37 + 1;
  iVar28 = iVar32 + 0x10 + iVar11;
  iVar11 = iVar11 + 0x10;
  lVar39 = lVar39 + 0x10;
  if ((uint)(((ulonglong)((iVar8 - lVar40) + -1 >> 3) >> 0x3c) + (((longlong)iVar8 + -1) - lVar40)
            >> 4) <= uVar37) goto LAB_14013d2f2;
  goto LAB_14013d2c0;
code_r0x00014013d7bc:
  uVar34 = uVar34 + 1;
  iVar28 = iVar32 + 0x10 + uVar37;
  uVar37 = uVar37 + 0x10;
  lVar40 = lVar40 + 0x10;
  if ((uint)(((ulonglong)((iVar8 - lVar39) + -1 >> 3) >> 0x3c) + (((longlong)iVar8 + -1) - lVar39)
            >> 4) <= uVar34) goto LAB_14013d7d3;
  goto LAB_14013d7a0;
code_r0x00014013dc7c:
  uVar38 = uVar38 + 1;
  uVar42 = (ulonglong)(uint)(iVar32 + 0x10 + iVar16);
  iVar16 = iVar16 + 0x10;
  lVar40 = lVar40 + 0x10;
  if ((uint)(lVar39 + ((ulonglong)(lVar39 + 0x10 >> 3) >> 0x3c) + 0x10 >> 4) <= uVar38)
  goto LAB_14013dc93;
  goto LAB_14013dc60;
}

