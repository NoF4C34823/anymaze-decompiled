
undefined8
FUN_14013dfc0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,byte param_5,
             double *param_6,ulonglong param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  longlong lVar38;
  byte *pbVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  byte bVar54;
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iStack_80;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  iVar10 = (int)param_3;
  uVar19 = param_4 & 0xffffffff;
  lVar30 = (longlong)param_2;
  if (((param_1 == 0) || (param_6 == (double *)0x0)) || (param_7 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar10 < 1) || (uVar26 = (uint)(param_3 >> 0x20), (int)uVar26 < 1)) {
    return 0xfffffffa;
  }
  if (lVar30 < iVar10) {
    return 0xfffffff0;
  }
  uVar17 = (uint)param_4;
  if ((-1 < (int)uVar17) && ((int)uVar17 < iVar10)) {
    uVar28 = param_4 >> 0x20;
    uVar21 = (uint)(param_4 >> 0x20);
    if ((-1 < (longlong)param_4) && ((int)uVar21 < (int)uVar26)) {
      lVar12 = (longlong)(int)uVar17;
      lVar11 = (int)(param_2 * uVar21) + param_1;
      bVar2 = *(byte *)(lVar12 + lVar11);
      if (bVar2 == param_5) {
        return 0;
      }
      *(byte *)(lVar12 + lVar11) = param_5;
      puVar24 = (uint *)(param_7 + (-(param_7 & 7) & 7));
      param_4 = param_4 & 0xffffffff;
      bVar54 = (char)param_5 >> 7;
      auVar53._0_14_ = ZEXT114(bVar54) << 0x38;
      auVar53[0xe] = bVar54;
      auVar53[0xf] = bVar54;
      auVar52._14_2_ = auVar53._14_2_;
      auVar52._0_13_ = ZEXT113(bVar54) << 0x38;
      auVar52[0xd] = bVar54;
      auVar51._13_3_ = auVar52._13_3_;
      auVar51._0_12_ = ZEXT112(bVar54) << 0x38;
      auVar51[0xc] = bVar54;
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._0_11_ = ZEXT111(bVar54) << 0x38;
      auVar50[0xb] = bVar54;
      auVar49._11_5_ = auVar50._11_5_;
      auVar49._0_10_ = (unkuint10)bVar54 << 0x38;
      auVar49[10] = bVar54;
      auVar48._10_6_ = auVar49._10_6_;
      auVar48._0_9_ = (unkuint9)bVar54 << 0x38;
      auVar48[9] = bVar54;
      auVar9._1_8_ = (longlong)(CONCAT72(auVar48._9_7_,CONCAT11(bVar54,bVar54)) >> 8);
      auVar9[0] = bVar54;
      auVar9._9_7_ = 0;
      auVar8._10_6_ = 0;
      auVar8._0_10_ = SUB1610(auVar9 << 0x38,6);
      auVar7._11_5_ = 0;
      auVar7._0_11_ = SUB1611(auVar8 << 0x30,5);
      auVar47._4_12_ = SUB1612(auVar7 << 0x28,4);
      auVar47[3] = param_5;
      auVar47[2] = param_5;
      auVar47[1] = param_5;
      auVar47[0] = param_5;
      uVar44 = auVar47._0_4_;
      uVar13 = uVar17;
      for (lVar41 = lVar12;
          (uVar14 = (uint)param_4, 0 < (int)uVar13 && (bVar2 == *(byte *)(lVar41 + -1 + lVar11)));
          lVar41 = lVar41 + -1) {
        *(byte *)((longlong)(int)uVar14 + -1 + lVar11) = param_5;
        uVar13 = uVar14 - 1;
        param_4 = (ulonglong)uVar13;
      }
      for (; (uVar13 = (uint)uVar19, (int)uVar17 < iVar10 + -1 &&
             (bVar2 == *(byte *)(lVar12 + 1 + lVar11))); lVar12 = lVar12 + 1) {
        *(byte *)((longlong)(int)uVar13 + 1 + lVar11) = param_5;
        uVar17 = uVar13 + 1;
        uVar19 = (ulonglong)uVar17;
      }
      iStack_80 = (uVar13 - uVar14) + 1;
      uVar17 = uVar21;
      if (1 < (int)uVar26) {
        puVar24[3] = uVar13 + 1;
        *puVar24 = uVar21;
        uVar45 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
        puVar24[1] = uVar14;
        uVar17 = 0xffffffff;
        if (uVar21 != uVar26 - 1) {
          uVar17 = 1;
        }
        uVar46 = CONCAT44(uVar45,uVar45);
        puVar24[2] = uVar13;
        puVar24[4] = uVar13;
        puVar24[5] = uVar17;
        lVar11 = 1;
        lVar12 = 0x18;
        do {
          lVar41 = lVar12 + -0x18;
          lVar11 = lVar11 + -1;
          uVar33 = param_3 & 0xffffffff;
          uVar3 = *(uint *)(lVar12 + -0x10 + (longlong)puVar24);
          uVar37 = *(uint *)(lVar41 + (longlong)puVar24);
          uVar4 = *(uint *)(lVar12 + -0x14 + (longlong)puVar24);
          if ((int)uVar19 <= (int)uVar3) {
            uVar19 = (ulonglong)uVar3;
          }
          iVar5 = *(int *)(lVar12 + -0xc + (longlong)puVar24);
          iVar36 = *(int *)(lVar12 + -8 + (longlong)puVar24);
          if ((int)uVar4 <= (int)param_4) {
            param_4 = (ulonglong)uVar4;
          }
          iVar6 = *(int *)(lVar12 + -4 + (longlong)puVar24);
          if ((int)uVar21 <= (int)uVar37) {
            uVar21 = uVar37;
          }
          if ((int)uVar37 <= (int)uVar28) {
            uVar28 = (ulonglong)uVar37;
          }
          uVar14 = (uint)param_4;
          uVar17 = (uint)uVar28;
          uVar13 = (uint)uVar19;
          if (uVar37 - iVar6 < uVar26) {
            lVar12 = (int)((uVar37 - iVar6) * param_2) + param_1;
            iVar22 = uVar4 - 1;
            if ((int)(uVar4 - 1) < 1) {
              iVar22 = 0;
            }
            iVar23 = uVar3 + 2;
            if (iVar10 <= (int)(uVar3 + 2)) {
              iVar23 = iVar10;
            }
            if (iVar22 < iVar23) {
              lVar42 = ((longlong)(int)uVar37 - (longlong)iVar6) * lVar30 + param_1;
              do {
                lVar15 = (longlong)iVar22;
                if (bVar2 == *(byte *)(lVar12 + lVar15)) {
                  lVar38 = 0;
                  *(byte *)(lVar12 + lVar15) = param_5;
                  iVar20 = iVar22;
                  if (0 < iVar22) {
                    lVar32 = lVar12 + iVar22;
                    uVar16 = 0;
                    do {
                      if (bVar2 != *(byte *)(lVar38 + -1 + lVar32)) break;
                      uVar43 = uVar16 + 1;
                      *(byte *)(lVar38 + -1 + lVar32) = param_5;
                      lVar38 = lVar38 + -1;
                      iVar20 = (iVar22 - (int)uVar16) + -1;
                      uVar16 = uVar43;
                    } while (uVar43 < (ulonglong)(longlong)iVar22);
                  }
                  iVar34 = (int)uVar33;
                  if (iVar23 - iVar22 < 0x10) {
                    uVar16 = 0;
                    iVar18 = iVar22;
                    if (iVar22 < iVar34 + -1) {
                      pbVar39 = (byte *)(lVar12 + 1 + (longlong)iVar22);
                      do {
                        if (bVar2 != *pbVar39) break;
                        iVar18 = (int)uVar16 + 1 + iVar22;
                        uVar16 = uVar16 + 1;
                        *pbVar39 = param_5;
                        pbVar39 = pbVar39 + 1;
                      } while (uVar16 < ((longlong)iVar34 - (longlong)iVar22) - 1U);
                    }
                  }
                  else {
                    iVar27 = iVar22;
                    if (iVar22 <= iVar34 + -0x11) {
                      uVar33 = (ulonglong)iVar34;
                      lVar38 = (longlong)iVar22;
                      lVar32 = lVar38 + lVar12;
                      iVar18 = 0;
                      uVar35 = 0;
LAB_14013e4a0:
                      auVar55[0] = -(*(byte *)(lVar32 + 1) == bVar2);
                      auVar55[1] = -(*(byte *)(lVar32 + 2) == bVar2);
                      auVar55[2] = -(*(byte *)(lVar32 + 3) == bVar2);
                      auVar55[3] = -(*(byte *)(lVar32 + 4) == bVar2);
                      auVar55[4] = -(*(byte *)(lVar32 + 5) == bVar2);
                      auVar55[5] = -(*(byte *)(lVar32 + 6) == bVar2);
                      auVar55[6] = -(*(byte *)(lVar32 + 7) == bVar2);
                      auVar55[7] = -(*(byte *)(lVar32 + 8) == bVar2);
                      auVar55[8] = -(*(byte *)(lVar32 + 9) == bVar2);
                      auVar55[9] = -(*(byte *)(lVar32 + 10) == bVar2);
                      auVar55[10] = -(*(byte *)(lVar32 + 0xb) == bVar2);
                      auVar55[0xb] = -(*(byte *)(lVar32 + 0xc) == bVar2);
                      auVar55[0xc] = -(*(byte *)(lVar32 + 0xd) == bVar2);
                      auVar55[0xd] = -(*(byte *)(lVar32 + 0xe) == bVar2);
                      auVar55[0xe] = -(*(byte *)(lVar32 + 0xf) == bVar2);
                      auVar55[0xf] = -(*(byte *)(lVar32 + 0x10) == bVar2);
                      uVar25 = (uint)(ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
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
                      if (uVar25 == 0xffff) goto code_r0x00014013e4bb;
                      uVar25 = ~uVar25;
                      iVar34 = 0;
                      if (uVar25 != 0) {
                        for (; (uVar25 >> iVar34 & 1) == 0; iVar34 = iVar34 + 1) {
                        }
                      }
                      iVar18 = iVar34 + iVar22 + iVar18;
                      goto LAB_14013e541;
                    }
LAB_14013e4d1:
                    uVar35 = 0;
                    iVar18 = iVar27;
                    if (iVar27 < (int)uVar33 + -1) {
                      lVar38 = 0;
                      do {
                        if (bVar2 != *(byte *)(lVar38 + 1 + iVar27 + lVar12)) break;
                        iVar18 = uVar35 + 1 + iVar27;
                        uVar35 = uVar35 + 1;
                        lVar38 = lVar38 + 1;
                      } while (uVar35 < ((int)uVar33 - iVar27) - 1U);
                    }
LAB_14013e541:
                    if (iVar22 <= iVar18 + -8) {
                      lVar15 = lVar15 + lVar42;
                      uVar35 = 0;
                      do {
                        uVar35 = uVar35 + 1;
                        *(ulonglong *)(lVar15 + 1) = CONCAT44(uVar44,uVar44);
                        lVar15 = lVar15 + 8;
                      } while (uVar35 < (uint)(iVar18 - iVar22) >> 3);
                      iVar22 = iVar22 + uVar35 * 8;
                      uVar33 = param_3 & 0xffffffff;
                    }
                    lVar15 = (longlong)iVar22;
                    if (iVar22 < iVar18) {
                      uVar16 = ((longlong)iVar18 - (lVar15 + 1)) + 1;
                      if ((longlong)uVar16 < 0x10) {
LAB_14013f10a:
                        uVar40 = 0;
                      }
                      else {
                        uVar43 = lVar42 + 1 + lVar15 & 0xf;
                        if (uVar43 != 0) {
                          uVar43 = 0x10 - uVar43;
                        }
                        if ((longlong)uVar16 < (longlong)(uVar43 + 0x10)) goto LAB_14013f10a;
                        uVar31 = 0;
                        uVar40 = (ulonglong)(int)((int)uVar16 - ((int)uVar16 - (int)uVar43 & 0xfU));
                        if (uVar43 != 0) {
                          do {
                            *(byte *)(uVar31 + 1 + lVar42 + lVar15) = param_5;
                            uVar31 = uVar31 + 1;
                          } while (uVar31 < uVar43);
                        }
                        do {
                          puVar1 = (undefined8 *)(uVar43 + 1 + lVar42 + lVar15);
                          *puVar1 = uVar46;
                          puVar1[1] = uVar46;
                          uVar43 = uVar43 + 0x10;
                        } while (uVar43 < uVar40);
                      }
                      if (uVar40 < uVar16) {
                        do {
                          *(byte *)(uVar40 + 1 + lVar15 + lVar42) = param_5;
                          uVar40 = uVar40 + 1;
                        } while (uVar40 < uVar16);
                      }
                    }
                  }
                  lVar11 = lVar11 + 1;
                  *(uint *)(lVar41 + (longlong)puVar24) = uVar37 - iVar6;
                  *(int *)(lVar41 + 4 + (longlong)puVar24) = iVar20;
                  iVar22 = iVar18 + 1;
                  *(int *)(lVar41 + 8 + (longlong)puVar24) = iVar18;
                  iStack_80 = iStack_80 + (iVar22 - iVar20);
                  *(uint *)(lVar41 + 0xc + (longlong)puVar24) = uVar4;
                  *(uint *)(lVar41 + 0x10 + (longlong)puVar24) = uVar3;
                  *(int *)(lVar41 + 0x14 + (longlong)puVar24) = iVar6;
                  lVar41 = lVar41 + 0x18;
                }
                iVar22 = iVar22 + 1;
              } while (iVar22 < iVar23);
            }
          }
          iVar22 = (int)uVar33;
          iVar23 = uVar37 + iVar6;
          iVar20 = uVar4 - 1;
          lVar12 = param_2 * iVar23 + param_1;
          if (iVar20 < 1) {
            iVar20 = 0;
          }
          if (iVar20 < iVar5) {
            lVar42 = ((longlong)(int)uVar37 + (longlong)iVar6) * lVar30 + param_1;
            do {
              lVar15 = (longlong)iVar20;
              if (bVar2 == *(byte *)(lVar15 + lVar12)) {
                lVar38 = 0;
                *(byte *)(lVar15 + lVar12) = param_5;
                iVar22 = iVar20;
                if (0 < iVar20) {
                  lVar32 = lVar12 + iVar20;
                  uVar16 = 0;
                  do {
                    if (bVar2 != *(byte *)(lVar38 + -1 + lVar32)) break;
                    uVar43 = uVar16 + 1;
                    *(byte *)(lVar38 + -1 + lVar32) = param_5;
                    lVar38 = lVar38 + -1;
                    iVar22 = (iVar20 - (int)uVar16) + -1;
                    uVar16 = uVar43;
                  } while (uVar43 < (ulonglong)(longlong)iVar20);
                }
                iVar34 = (int)uVar33;
                if (iVar5 - iVar20 < 0x10) {
                  uVar16 = 0;
                  iVar18 = iVar20;
                  if (iVar20 < iVar34 + -1) {
                    pbVar39 = (byte *)(lVar12 + 1 + (longlong)iVar20);
                    do {
                      if (bVar2 != *pbVar39) break;
                      iVar18 = (int)uVar16 + 1 + iVar20;
                      uVar16 = uVar16 + 1;
                      *pbVar39 = param_5;
                      pbVar39 = pbVar39 + 1;
                    } while (uVar16 < ((longlong)iVar34 - (longlong)iVar20) - 1U);
                  }
                }
                else {
                  uVar35 = 0;
                  iVar27 = iVar20;
                  if (iVar20 <= iVar34 + -0x11) {
                    uVar33 = (ulonglong)iVar34;
                    lVar32 = (longlong)iVar20;
                    lVar38 = lVar12 + lVar32;
                    uVar25 = uVar35;
LAB_14013e980:
                    auVar56[0] = -(*(byte *)(lVar38 + 1) == bVar2);
                    auVar56[1] = -(*(byte *)(lVar38 + 2) == bVar2);
                    auVar56[2] = -(*(byte *)(lVar38 + 3) == bVar2);
                    auVar56[3] = -(*(byte *)(lVar38 + 4) == bVar2);
                    auVar56[4] = -(*(byte *)(lVar38 + 5) == bVar2);
                    auVar56[5] = -(*(byte *)(lVar38 + 6) == bVar2);
                    auVar56[6] = -(*(byte *)(lVar38 + 7) == bVar2);
                    auVar56[7] = -(*(byte *)(lVar38 + 8) == bVar2);
                    auVar56[8] = -(*(byte *)(lVar38 + 9) == bVar2);
                    auVar56[9] = -(*(byte *)(lVar38 + 10) == bVar2);
                    auVar56[10] = -(*(byte *)(lVar38 + 0xb) == bVar2);
                    auVar56[0xb] = -(*(byte *)(lVar38 + 0xc) == bVar2);
                    auVar56[0xc] = -(*(byte *)(lVar38 + 0xd) == bVar2);
                    auVar56[0xd] = -(*(byte *)(lVar38 + 0xe) == bVar2);
                    auVar56[0xe] = -(*(byte *)(lVar38 + 0xf) == bVar2);
                    auVar56[0xf] = -(*(byte *)(lVar38 + 0x10) == bVar2);
                    uVar29 = (uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
                    if (uVar29 == 0xffff) goto code_r0x00014013e99c;
                    uVar29 = ~uVar29;
                    iVar34 = 0;
                    if (uVar29 != 0) {
                      for (; (uVar29 >> iVar34 & 1) == 0; iVar34 = iVar34 + 1) {
                      }
                    }
                    iVar18 = iVar34 + iVar20 + uVar35;
                    goto LAB_14013ea20;
                  }
LAB_14013e9b2:
                  uVar35 = 0;
                  iVar18 = iVar27;
                  if (iVar27 < (int)uVar33 + -1) {
                    lVar38 = 0;
                    do {
                      if (bVar2 != *(byte *)(lVar38 + 1 + iVar27 + lVar12)) break;
                      iVar18 = uVar35 + 1 + iVar27;
                      uVar35 = uVar35 + 1;
                      lVar38 = lVar38 + 1;
                    } while (uVar35 < ((int)uVar33 - iVar27) - 1U);
                  }
LAB_14013ea20:
                  if (iVar20 <= iVar18 + -8) {
                    lVar15 = lVar15 + lVar42;
                    uVar35 = 0;
                    do {
                      uVar35 = uVar35 + 1;
                      *(ulonglong *)(lVar15 + 1) = CONCAT44(uVar44,uVar44);
                      lVar15 = lVar15 + 8;
                    } while (uVar35 < (uint)(iVar18 - iVar20) >> 3);
                    iVar20 = iVar20 + uVar35 * 8;
                    uVar33 = param_3 & 0xffffffff;
                  }
                  lVar15 = (longlong)iVar20;
                  if (iVar20 < iVar18) {
                    uVar16 = ((longlong)iVar18 - (lVar15 + 1)) + 1;
                    if ((longlong)uVar16 < 0x10) {
LAB_14013f0f0:
                      uVar40 = 0;
                    }
                    else {
                      uVar43 = lVar42 + 1 + lVar15 & 0xf;
                      if (uVar43 != 0) {
                        uVar43 = 0x10 - uVar43;
                      }
                      if ((longlong)uVar16 < (longlong)(uVar43 + 0x10)) goto LAB_14013f0f0;
                      uVar31 = 0;
                      uVar40 = (ulonglong)(int)((int)uVar16 - ((int)uVar16 - (int)uVar43 & 0xfU));
                      if (uVar43 != 0) {
                        do {
                          *(byte *)(uVar31 + 1 + lVar42 + lVar15) = param_5;
                          uVar31 = uVar31 + 1;
                        } while (uVar31 < uVar43);
                      }
                      do {
                        puVar1 = (undefined8 *)(uVar43 + 1 + lVar42 + lVar15);
                        *puVar1 = uVar46;
                        puVar1[1] = uVar46;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar40);
                    }
                    if (uVar40 < uVar16) {
                      do {
                        *(byte *)(uVar40 + 1 + lVar15 + lVar42) = param_5;
                        uVar40 = uVar40 + 1;
                      } while (uVar40 < uVar16);
                    }
                  }
                }
                lVar11 = lVar11 + 1;
                *(int *)(lVar41 + (longlong)puVar24) = iVar23;
                *(int *)(lVar41 + 4 + (longlong)puVar24) = iVar22;
                iVar20 = iVar18 + 1;
                *(int *)(lVar41 + 8 + (longlong)puVar24) = iVar18;
                iStack_80 = iStack_80 + (iVar20 - iVar22);
                *(uint *)(lVar41 + 0xc + (longlong)puVar24) = uVar4;
                *(uint *)(lVar41 + 0x10 + (longlong)puVar24) = uVar3;
                *(int *)(lVar41 + 0x14 + (longlong)puVar24) = -iVar6;
                lVar41 = lVar41 + 0x18;
              }
              iVar22 = (int)uVar33;
              iVar20 = iVar20 + 1;
            } while (iVar20 < iVar5);
          }
          uVar35 = iVar36 + 1;
          if ((int)(uVar3 + 2) < iVar22) {
            iVar22 = uVar3 + 2;
          }
          if ((int)uVar35 < iVar22) {
            lVar42 = ((longlong)(int)uVar37 + (longlong)iVar6) * lVar30 + param_1;
            do {
              uVar33 = (ulonglong)uVar35;
              lVar15 = (longlong)(int)uVar35;
              uVar37 = uVar35;
              if (bVar2 == *(byte *)(lVar15 + lVar12)) {
                lVar38 = 0;
                *(byte *)(lVar15 + lVar12) = param_5;
                iVar5 = iVar10 + -1;
                uVar16 = uVar33;
                uVar25 = uVar35;
                if (0 < (int)uVar35) {
                  uVar16 = (ulonglong)(int)uVar35;
                  uVar43 = uVar33;
                  uVar40 = 0;
                  do {
                    uVar25 = (uint)uVar43;
                    if (bVar2 != *(byte *)(lVar38 + -1 + lVar12 + uVar16)) break;
                    uVar31 = uVar40 + 1;
                    *(byte *)(lVar38 + -1 + lVar12 + uVar16) = param_5;
                    lVar38 = lVar38 + -1;
                    uVar25 = (uVar35 - (int)uVar40) - 1;
                    uVar43 = (ulonglong)uVar25;
                    uVar40 = uVar31;
                  } while (uVar31 < uVar16);
                }
                iVar36 = (int)uVar16;
                if (iVar22 - iVar36 < 0x10) {
                  uVar16 = 0;
                  if (iVar36 < iVar5) {
                    pbVar39 = (byte *)(lVar12 + 1 + (longlong)iVar36);
                    do {
                      uVar35 = (uint)uVar33;
                      if (bVar2 != *pbVar39) break;
                      uVar35 = (int)uVar16 + 1 + iVar36;
                      uVar33 = (ulonglong)uVar35;
                      uVar16 = uVar16 + 1;
                      *pbVar39 = param_5;
                      pbVar39 = pbVar39 + 1;
                    } while (uVar16 < (ulonglong)((longlong)iVar5 - (longlong)iVar36));
                  }
                }
                else {
                  uVar35 = 0;
                  uVar16 = uVar16 & 0xffffffff;
                  if (iVar36 <= iVar10 + -0x11) {
                    lVar38 = lVar12 + iVar36;
                    lVar32 = ((longlong)iVar5 + -0x10) - (longlong)iVar36;
                    uVar37 = uVar35;
LAB_14013ee00:
                    auVar57[0] = -(*(byte *)(lVar38 + 1) == bVar2);
                    auVar57[1] = -(*(byte *)(lVar38 + 2) == bVar2);
                    auVar57[2] = -(*(byte *)(lVar38 + 3) == bVar2);
                    auVar57[3] = -(*(byte *)(lVar38 + 4) == bVar2);
                    auVar57[4] = -(*(byte *)(lVar38 + 5) == bVar2);
                    auVar57[5] = -(*(byte *)(lVar38 + 6) == bVar2);
                    auVar57[6] = -(*(byte *)(lVar38 + 7) == bVar2);
                    auVar57[7] = -(*(byte *)(lVar38 + 8) == bVar2);
                    auVar57[8] = -(*(byte *)(lVar38 + 9) == bVar2);
                    auVar57[9] = -(*(byte *)(lVar38 + 10) == bVar2);
                    auVar57[10] = -(*(byte *)(lVar38 + 0xb) == bVar2);
                    auVar57[0xb] = -(*(byte *)(lVar38 + 0xc) == bVar2);
                    auVar57[0xc] = -(*(byte *)(lVar38 + 0xd) == bVar2);
                    auVar57[0xd] = -(*(byte *)(lVar38 + 0xe) == bVar2);
                    auVar57[0xe] = -(*(byte *)(lVar38 + 0xf) == bVar2);
                    auVar57[0xf] = -(*(byte *)(lVar38 + 0x10) == bVar2);
                    uVar29 = (uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar57[0xf] >> 7) << 0xf);
                    if (uVar29 == 0xffff) goto code_r0x00014013ee1c;
                    uVar29 = ~uVar29;
                    iVar5 = 0;
                    if (uVar29 != 0) {
                      for (; (uVar29 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
                      }
                    }
                    uVar35 = iVar5 + iVar36 + uVar35;
                    goto LAB_14013ee79;
                  }
LAB_14013ee32:
                  uVar29 = 0;
                  lVar38 = 0;
                  uVar37 = (uint)uVar16;
                  uVar35 = uVar37;
                  if ((int)uVar37 < iVar5) {
                    do {
                      uVar35 = (uint)uVar16;
                      if (bVar2 != *(byte *)(lVar38 + 1 + (int)uVar37 + lVar12)) break;
                      uVar35 = uVar29 + 1 + uVar37;
                      uVar16 = (ulonglong)uVar35;
                      uVar29 = uVar29 + 1;
                      lVar38 = lVar38 + 1;
                    } while (uVar29 < iVar5 - uVar37);
                  }
LAB_14013ee79:
                  uVar37 = 0;
                  if (iVar36 <= (int)(uVar35 - 8)) {
                    lVar15 = lVar15 + lVar42;
                    do {
                      uVar37 = uVar37 + 1;
                      *(ulonglong *)(lVar15 + 1) = CONCAT44(uVar44,uVar44);
                      lVar15 = lVar15 + 8;
                    } while (uVar37 < uVar35 - iVar36 >> 3);
                    iVar36 = iVar36 + uVar37 * 8;
                  }
                  lVar15 = (longlong)iVar36;
                  if (iVar36 < (int)uVar35) {
                    uVar33 = ((longlong)(int)uVar35 - (lVar15 + 1)) + 1;
                    if ((longlong)uVar33 < 0x10) {
LAB_14013f0d7:
                      uVar43 = 0;
                    }
                    else {
                      uVar16 = lVar42 + 1 + lVar15 & 0xf;
                      if (uVar16 != 0) {
                        uVar16 = 0x10 - uVar16;
                      }
                      if ((longlong)uVar33 < (longlong)(uVar16 + 0x10)) goto LAB_14013f0d7;
                      uVar40 = 0;
                      uVar43 = (ulonglong)(int)((int)uVar33 - ((int)uVar33 - (int)uVar16 & 0xfU));
                      if (uVar16 != 0) {
                        do {
                          *(byte *)(uVar40 + 1 + lVar42 + lVar15) = param_5;
                          uVar40 = uVar40 + 1;
                        } while (uVar40 < uVar16);
                      }
                      do {
                        puVar1 = (undefined8 *)(uVar16 + 1 + lVar42 + lVar15);
                        *puVar1 = uVar46;
                        puVar1[1] = uVar46;
                        uVar16 = uVar16 + 0x10;
                      } while (uVar16 < uVar43);
                    }
                    if (uVar43 < uVar33) {
                      do {
                        *(byte *)(uVar43 + 1 + lVar15 + lVar42) = param_5;
                        uVar43 = uVar43 + 1;
                      } while (uVar43 < uVar33);
                    }
                  }
                }
                lVar11 = lVar11 + 1;
                *(int *)(lVar41 + (longlong)puVar24) = iVar23;
                *(uint *)(lVar41 + 4 + (longlong)puVar24) = uVar25;
                uVar37 = uVar35 + 1;
                *(uint *)(lVar41 + 8 + (longlong)puVar24) = uVar35;
                iStack_80 = iStack_80 + (uVar37 - uVar25);
                *(uint *)(lVar41 + 0xc + (longlong)puVar24) = uVar4;
                *(uint *)(lVar41 + 0x10 + (longlong)puVar24) = uVar3;
                *(int *)(lVar41 + 0x14 + (longlong)puVar24) = -iVar6;
                lVar41 = lVar41 + 0x18;
              }
              uVar35 = uVar37 + 1;
            } while ((int)uVar35 < iVar22);
          }
          lVar12 = lVar41;
        } while (lVar11 != 0);
      }
      *(uint *)(param_6 + 4) = uVar14;
      *(uint *)((longlong)param_6 + 0x24) = uVar17;
      *param_6 = (double)iStack_80;
      *(uint *)(param_6 + 5) = (uVar13 - uVar14) + 1;
      *(uint *)((longlong)param_6 + 0x2c) = (uVar21 - uVar17) + 1;
      param_6[1] = (double)param_5;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      return 0;
    }
  }
  return 0xfffffff5;
code_r0x00014013e4bb:
  uVar35 = uVar35 + 1;
  lVar32 = lVar32 + 0x10;
  iVar27 = iVar18 + 0x10 + iVar22;
  iVar18 = iVar18 + 0x10;
  if ((uint)((uVar33 - lVar38) + -1 + ((ulonglong)((longlong)((uVar33 - lVar38) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar35) goto LAB_14013e4d1;
  goto LAB_14013e4a0;
code_r0x00014013e99c:
  uVar25 = uVar25 + 1;
  lVar38 = lVar38 + 0x10;
  iVar27 = uVar35 + 0x10 + iVar20;
  uVar35 = uVar35 + 0x10;
  if ((uint)((uVar33 - lVar32) + -1 + ((ulonglong)((longlong)((uVar33 - lVar32) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar25) goto LAB_14013e9b2;
  goto LAB_14013e980;
code_r0x00014013ee1c:
  uVar37 = uVar37 + 1;
  lVar38 = lVar38 + 0x10;
  uVar16 = (ulonglong)(uVar35 + 0x10 + iVar36);
  uVar35 = uVar35 + 0x10;
  if ((uint)(lVar32 + 0x10 + ((ulonglong)(lVar32 + 0x10 >> 3) >> 0x3c) >> 4) <= uVar37)
  goto LAB_14013ee32;
  goto LAB_14013ee00;
}

