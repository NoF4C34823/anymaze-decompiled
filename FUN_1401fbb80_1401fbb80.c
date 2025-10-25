
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401fbb80(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  byte bVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  byte *pbVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte abStack_78 [8];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  int iStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  iVar34 = param_10 >> 1;
  lVar47 = 0;
  lStack_50 = param_2;
  if (iVar34 < 1) {
    if ((param_7 & 0x10) != 0) {
      return;
    }
  }
  else {
    uStack_48 = (ulonglong)iVar34;
    puVar32 = (undefined4 *)(param_4 * uStack_48 + (longlong)param_3);
    iStack_58 = param_10;
    lStack_70 = param_1;
    do {
      lStack_68 = *param_5;
      lStack_60 = param_5[1];
      FUN_140819800(lStack_70,lStack_50,lVar47,puVar32);
      uVar33 = uStack_48;
      lVar47 = lVar47 + 1;
      puVar32 = (undefined4 *)((longlong)puVar32 + param_4);
    } while (lVar47 < (longlong)uStack_48);
    param_1 = lStack_70;
    param_10 = iStack_58;
    if ((param_7 & 0x10) != 0) {
      lVar37 = (longlong)iStack_58;
      pcVar7 = *(code **)(&DAT_143088220 + (longlong)param_6 * 8);
      lVar12 = lVar37 * 3;
      uVar16 = param_7 & 0xf;
      lStack_70 = lStack_70 - lStack_50 * uStack_48;
      uVar25 = (lVar12 - 1U) / 3;
      uVar24 = (longlong)(lVar12 - 1U) / 3;
      lVar14 = uStack_48 * 3;
      lVar19 = -uStack_48;
      lVar47 = param_11 + lVar12;
      uVar1 = lVar12 - 3;
      uVar44 = lVar14 + 2;
      uVar13 = (longlong)uVar44 / 3;
      puVar2 = (undefined1 *)(param_11 + lVar14);
      uVar26 = uVar44 / 3;
      uVar17 = param_7 & 0x80;
      lVar20 = uStack_48 * -3;
      uVar44 = uVar44 / 6;
      uVar23 = param_7 & 0x40;
      uVar18 = (longlong)(iStack_58 * 3) - 3;
      uVar27 = uVar18 >> 1;
      uVar42 = (ulonglong)puVar2 & 0xf;
      uVar48 = uVar13 & 0xfffffffffffffff0;
      uVar28 = ((longlong)(iStack_58 * 3) - 1U) / 6;
      uVar40 = 0;
      lVar36 = 0;
      uVar49 = uStack_48;
      do {
        abStack_78[0] = 0;
        abStack_78[1] = 0;
        abStack_78[2] = 0;
        puVar32 = (undefined4 *)(param_4 * uVar40 + (longlong)param_3);
        lVar38 = lStack_50 * uVar40 + lStack_70;
        if ((param_7 & 0xf0) == 0xf0) {
          (*pcVar7)(lVar38,puVar32,*param_5,param_9);
        }
        else {
          pbVar46 = abStack_78;
          if (uVar16 == 6) {
            pbVar46 = param_8;
          }
          lVar35 = *param_5;
          if (lVar35 < lVar37 + -1) {
            uVar21 = 0;
            lVar43 = -uVar49;
            lVar36 = 0;
            if (lVar19 < (longlong)(uVar49 + lVar35)) {
              lVar29 = uVar49 * 2;
              do {
                lVar30 = lVar43;
                if (lVar43 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar16 == 6) {
                      if (uVar23 == 0) goto LAB_1401fd5b5;
                    }
                    else {
                      if (uVar16 != 1) goto LAB_1401fd52c;
LAB_1401fd69e:
                      lVar30 = 0;
                      if (uVar23 != 0) {
                        lVar30 = lVar43;
                      }
                    }
                  }
LAB_1401fd59c:
                  lVar30 = lVar30 * 3;
                  bVar22 = *(byte *)(lVar30 + lVar38);
                  bVar31 = *(byte *)(lVar30 + 1 + lVar38);
                  bVar39 = *(byte *)(lVar30 + 2 + lVar38);
                }
                else {
                  if ((lVar43 < lVar35) || (param_7 == 0xf0)) goto LAB_1401fd59c;
                  if (uVar16 != 6) {
                    if (uVar16 == 1) {
                      if (lVar43 < 0) goto LAB_1401fd69e;
                      if (uVar17 == 0) {
                        lVar30 = lVar35 + -1;
                      }
                    }
                    else {
LAB_1401fd52c:
                      if (uVar16 == 3) {
                        if (lVar35 < 2) {
                          if (lVar43 < 0) {
                            if (uVar23 == 0) {
                              lVar30 = -lVar43;
                              if (uVar17 == 0) {
                                lVar30 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar43) && (uVar17 == 0)) &&
                                  (lVar30 = -lVar43, uVar23 == 0)) {
                            lVar30 = 0;
                          }
                        }
                        else {
                          if (lVar43 < 0) goto LAB_1401fd6c0;
                          if (lVar35 <= lVar43) {
                            while (uVar17 == 0) {
                              for (lVar30 = (lVar35 + -1) * 2 - lVar30; lVar30 < 0; lVar30 = -lVar30
                                  ) {
LAB_1401fd6c0:
                                if (uVar23 != 0) goto LAB_1401fd59c;
                              }
                              if (lVar30 < lVar35) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1401fd59c;
                  }
                  if (uVar17 != 0) goto LAB_1401fd59c;
LAB_1401fd5b5:
                  bVar22 = *pbVar46;
                  bVar31 = pbVar46[1];
                  bVar39 = pbVar46[2];
                }
                uVar21 = uVar21 + 1;
                lVar43 = lVar43 + 1;
                *(byte *)(lVar36 + param_11) = bVar22;
                *(byte *)(lVar36 + 1 + param_11) = bVar31;
                *(byte *)(lVar36 + 2 + param_11) = bVar39;
                lVar36 = lVar36 + 3;
                uVar49 = uStack_48;
              } while (uVar21 < (ulonglong)(lVar35 + lVar29));
            }
            (*pcVar7)(puVar2,puVar32,lVar35,param_9);
          }
          else {
            if (uVar23 == 0) {
              if (0 < (longlong)uVar1) {
                if (6 < (longlong)uVar1) {
                  lVar43 = lStack_50 * lVar36 + lStack_70;
                  if ((lVar12 + -3 <= (longlong)puVar2 - lVar43) ||
                     (lVar12 + -3 <= -((longlong)puVar2 - lVar43))) {
                    if ((longlong)uVar1 < 0x10) {
LAB_1401fd659:
                      uVar41 = 0;
                    }
                    else {
                      uVar21 = uVar42;
                      if (uVar42 != 0) {
                        uVar21 = 0x10 - uVar42;
                      }
                      if ((longlong)uVar1 < (longlong)(uVar21 + 0x10)) goto LAB_1401fd659;
                      uVar41 = uVar1 - (uVar1 - uVar21 & 0xf);
                      uVar45 = 0;
                      if (uVar21 != 0) {
                        do {
                          puVar2[uVar45] = *(undefined1 *)(uVar45 + lVar43);
                          uVar45 = uVar45 + 1;
                        } while (uVar45 < uVar21);
                      }
                      do {
                        uVar15 = ((undefined8 *)(uVar21 + lVar43))[1];
                        *(undefined8 *)(puVar2 + uVar21) = *(undefined8 *)(uVar21 + lVar43);
                        *(undefined8 *)((longlong)(puVar2 + uVar21) + 8) = uVar15;
                        uVar21 = uVar21 + 0x10;
                      } while (uVar21 < uVar41);
                    }
                    for (; uVar41 < uVar1; uVar41 = uVar41 + 1) {
                      puVar2[uVar41] = *(undefined1 *)(uVar41 + lVar43);
                    }
                    goto LAB_1401fc7ed;
                  }
                }
                lVar43 = 1;
                if (uVar27 != 0) {
                  lVar43 = lStack_50 * lVar36 + lStack_70;
                  uVar21 = 0;
                  do {
                    uVar41 = uVar21;
                    puVar2[uVar41 * 2] = *(undefined1 *)(lVar43 + uVar41 * 2);
                    puVar2[uVar41 * 2 + 1] = *(undefined1 *)(lVar43 + 1 + uVar41 * 2);
                    uVar21 = uVar41 + 1;
                  } while (uVar21 < uVar27);
                  lVar43 = uVar41 + 2 + uVar21;
                }
                uVar21 = lVar43 - 1;
                if (uVar21 < uVar18) {
                  puVar2[uVar21] = *(undefined1 *)(uVar21 + lVar36 * lStack_50 + lStack_70);
                }
              }
LAB_1401fc7ed:
              if (uVar16 == 1) {
                if (0 < lVar14) {
                  lVar36 = 1;
                  uVar21 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar41 = uVar21;
                      *(undefined1 *)(param_11 + uVar41 * 6) = *puVar2;
                      uVar21 = uVar41 + 1;
                      uVar4 = puVar2[2];
                      *(undefined1 *)(param_11 + 1 + uVar41 * 6) = puVar2[1];
                      *(undefined1 *)(param_11 + 2 + uVar41 * 6) = uVar4;
                      *(undefined1 *)(param_11 + 3 + uVar41 * 6) = *puVar2;
                      uVar4 = puVar2[2];
                      *(undefined1 *)(param_11 + 4 + uVar41 * 6) = puVar2[1];
                      *(undefined1 *)(param_11 + 5 + uVar41 * 6) = uVar4;
                    } while (uVar21 < uVar44);
                    lVar36 = uVar41 + 2 + uVar21;
                  }
                  if (lVar36 - 1U < uVar26) {
                    lVar36 = lVar36 * 3;
                    *(undefined1 *)(lVar36 + -3 + param_11) = *puVar2;
                    uVar4 = puVar2[2];
                    *(undefined1 *)(lVar36 + -2 + param_11) = puVar2[1];
                    *(undefined1 *)(lVar36 + -1 + param_11) = uVar4;
                  }
                }
              }
              else if (uVar16 == 3) {
                if (0 < lVar14) {
                  lVar36 = 1;
                  lVar29 = 0;
                  lVar43 = 0;
                  uVar21 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar41 = uVar21;
                      uVar21 = uVar41 + 1;
                      *(undefined1 *)(lVar29 + param_11) = *(undefined1 *)(lVar43 + -3 + lVar47);
                      *(undefined1 *)(lVar29 + 1 + param_11) = *(undefined1 *)(lVar43 + -2 + lVar47)
                      ;
                      *(undefined1 *)(lVar29 + 2 + param_11) = *(undefined1 *)(lVar43 + -1 + lVar47)
                      ;
                      *(undefined1 *)(lVar29 + 3 + param_11) = *(undefined1 *)(lVar43 + -6 + lVar47)
                      ;
                      *(undefined1 *)(lVar29 + 4 + param_11) = *(undefined1 *)(lVar43 + -5 + lVar47)
                      ;
                      lVar36 = lVar43 + -4;
                      lVar43 = lVar43 + -6;
                      *(undefined1 *)(lVar29 + 5 + param_11) = *(undefined1 *)(lVar36 + lVar47);
                      lVar29 = lVar29 + 6;
                    } while (uVar21 < uVar44);
                    lVar36 = uVar41 + 2 + uVar21;
                  }
                  if (lVar36 - 1U < uVar26) {
                    lVar36 = lVar36 * 3;
                    lVar43 = -(lVar36 + -3);
                    *(undefined1 *)(lVar36 + -3 + param_11) = *(undefined1 *)(lVar43 + -3 + lVar47);
                    *(undefined1 *)(lVar36 + -2 + param_11) = *(undefined1 *)(lVar43 + -2 + lVar47);
                    *(undefined1 *)(lVar36 + -1 + param_11) = *(undefined1 *)(lVar43 + -1 + lVar47);
                  }
                }
              }
              else if ((uVar16 == 6) && (0 < lVar14)) {
                lVar36 = 1;
                uVar21 = 0;
                if (uVar44 != 0) {
                  do {
                    uVar41 = uVar21;
                    *(byte *)(param_11 + uVar41 * 6) = *pbVar46;
                    uVar21 = uVar41 + 1;
                    *(byte *)(param_11 + 1 + uVar41 * 6) = pbVar46[1];
                    *(byte *)(param_11 + 2 + uVar41 * 6) = pbVar46[2];
                    *(byte *)(param_11 + 3 + uVar41 * 6) = *pbVar46;
                    *(byte *)(param_11 + 4 + uVar41 * 6) = pbVar46[1];
                    *(byte *)(param_11 + 5 + uVar41 * 6) = pbVar46[2];
                  } while (uVar21 < uVar44);
                  lVar36 = uVar41 + 2 + uVar21;
                }
                if (lVar36 - 1U < uVar26) {
                  lVar36 = lVar36 * 3;
                  *(byte *)(lVar36 + -3 + param_11) = *pbVar46;
                  *(byte *)(lVar36 + -2 + param_11) = pbVar46[1];
                  *(byte *)(lVar36 + -1 + param_11) = pbVar46[2];
                }
              }
              (*pcVar7)(puVar2,puVar32,uVar49);
              lVar35 = lVar35 - uVar49;
              lVar38 = lVar38 + lVar14;
              puVar32 = puVar32 + uVar33 * 3;
            }
            if (uVar17 == 0) {
              if ((longlong)uVar49 < lVar35) {
                lVar35 = lVar35 - uVar49;
                (*pcVar7)(lVar38,puVar32,lVar35);
                lVar38 = lVar38 + lVar35 * 3;
                puVar32 = puVar32 + lVar35 * 3;
              }
              if (0 < (longlong)uVar1) {
                lVar35 = lVar20 + lVar38;
                lVar36 = uVar24 * 3;
                if ((lVar36 <= param_11 - lVar35) || (lVar36 + -2 <= -(param_11 - lVar35))) {
                  lVar43 = (param_11 + 1) - lVar35;
                  if (((lVar36 <= lVar43) || (lVar36 + -1 <= -lVar43)) &&
                     ((lVar43 = (param_11 + 1) - param_11, lVar36 + -2 <= lVar43 ||
                      (lVar36 + -1 <= -lVar43)))) {
                    lVar36 = 1;
                    uVar21 = 0;
                    if (uVar28 != 0) {
                      do {
                        uVar41 = uVar21;
                        uVar21 = uVar41 + 1;
                        *(undefined1 *)(param_11 + uVar41 * 6) =
                             *(undefined1 *)(lVar35 + uVar41 * 6);
                        *(undefined1 *)(param_11 + 3 + uVar41 * 6) =
                             *(undefined1 *)(lVar35 + 3 + uVar41 * 6);
                      } while (uVar21 < uVar28);
                      lVar36 = uVar41 + 2 + uVar21;
                    }
                    if (lVar36 - 1U < uVar25) {
                      lVar36 = lVar36 * 3 + -3;
                      *(undefined1 *)(lVar36 + param_11) = *(undefined1 *)(lVar35 + lVar36);
                    }
                    auVar55 = _DAT_143088310;
                    if ((longlong)uVar24 < 0x10) {
                      uVar21 = 0;
                    }
                    else {
                      uVar41 = 0;
                      lVar36 = uVar49 * -3;
                      lVar43 = 0;
                      do {
                        uVar41 = uVar41 + 0x10;
                        puVar3 = (ushort *)(lVar43 + 1 + lVar38 + lVar36);
                        auVar56 = vpinsrw_avx(ZEXT216(*puVar3),
                                              (uint)*(ushort *)((longlong)puVar3 + 3),1);
                        auVar56 = vpinsrw_avx(auVar56,(uint)puVar3[3],2);
                        auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)((longlong)puVar3 + 9),3);
                        auVar56 = vpinsrw_avx(auVar56,(uint)puVar3[6],4);
                        auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)((longlong)puVar3 + 0xf),5);
                        auVar52 = vpinsrw_avx(ZEXT216(puVar3[0xc]),
                                              (uint)*(ushort *)((longlong)puVar3 + 0x1b),1);
                        auVar56 = vpinsrw_avx(auVar56,(uint)puVar3[9],6);
                        auVar52 = vpinsrw_avx(auVar52,(uint)puVar3[0xf],2);
                        auVar10 = vpinsrw_avx(auVar56,(uint)*(ushort *)((longlong)puVar3 + 0x15),7);
                        auVar52 = vpinsrw_avx(auVar52,(uint)*(ushort *)((longlong)puVar3 + 0x21),3);
                        auVar56 = vpand_avx(auVar55,auVar10);
                        auVar51 = vpsrlw_avx(auVar10,8);
                        auVar52 = vpinsrw_avx(auVar52,(uint)puVar3[0x12],4);
                        auVar52 = vpinsrw_avx(auVar52,(uint)*(ushort *)((longlong)puVar3 + 0x27),5);
                        auVar52 = vpinsrw_avx(auVar52,(uint)puVar3[0x15],6);
                        auVar10 = vpinsrw_avx(auVar52,(uint)*(ushort *)((longlong)puVar3 + 0x2d),7);
                        auVar52 = vpand_avx(auVar55,auVar10);
                        auVar56 = vpackuswb_avx(auVar56,auVar52);
                        auVar52 = vpsrlw_avx(auVar10,8);
                        auVar52 = vpackuswb_avx(auVar51,auVar52);
                        *(char *)(lVar43 + 2 + param_11) = auVar52[0];
                        *(char *)(lVar43 + 5 + param_11) = auVar52[1];
                        *(char *)(lVar43 + 8 + param_11) = auVar52[2];
                        *(char *)(lVar43 + 0xb + param_11) = auVar52[3];
                        *(char *)(lVar43 + 0xe + param_11) = auVar52[4];
                        *(char *)(lVar43 + 0x11 + param_11) = auVar52[5];
                        *(char *)(lVar43 + 0x14 + param_11) = auVar52[6];
                        *(char *)(lVar43 + 0x17 + param_11) = auVar52[7];
                        *(char *)(lVar43 + 0x1a + param_11) = auVar52[0];
                        *(char *)(lVar43 + 0x1d + param_11) = auVar52[1];
                        *(char *)(lVar43 + 0x20 + param_11) = auVar52[2];
                        *(char *)(lVar43 + 0x23 + param_11) = auVar52[3];
                        *(char *)(lVar43 + 0x26 + param_11) = auVar52[4];
                        *(char *)(lVar43 + 0x29 + param_11) = auVar52[5];
                        *(char *)(lVar43 + 0x2c + param_11) = auVar52[6];
                        *(char *)(lVar43 + 0x2f + param_11) = auVar52[7];
                        *(char *)(lVar43 + 1 + param_11) = auVar56[0];
                        *(char *)(lVar43 + 4 + param_11) = auVar56[1];
                        *(char *)(lVar43 + 7 + param_11) = auVar56[2];
                        *(char *)(lVar43 + 10 + param_11) = auVar56[3];
                        *(char *)(lVar43 + 0xd + param_11) = auVar56[4];
                        *(char *)(lVar43 + 0x10 + param_11) = auVar56[5];
                        *(char *)(lVar43 + 0x13 + param_11) = auVar56[6];
                        *(char *)(lVar43 + 0x16 + param_11) = auVar56[7];
                        *(char *)(lVar43 + 0x19 + param_11) = auVar56[0];
                        *(char *)(lVar43 + 0x1c + param_11) = auVar56[1];
                        *(char *)(lVar43 + 0x1f + param_11) = auVar56[2];
                        *(char *)(lVar43 + 0x22 + param_11) = auVar56[3];
                        *(char *)(lVar43 + 0x25 + param_11) = auVar56[4];
                        *(char *)(lVar43 + 0x28 + param_11) = auVar56[5];
                        *(char *)(lVar43 + 0x2b + param_11) = auVar56[6];
                        *(char *)(lVar43 + 0x2e + param_11) = auVar56[7];
                        lVar43 = lVar43 + 0x30;
                        uVar21 = uVar24 & 0xfffffffffffffff0;
                        uVar49 = uStack_48;
                      } while (uVar41 < (uVar24 & 0xfffffffffffffff0));
                    }
                    lVar36 = uVar21 * 3;
                    for (; uVar21 < uVar24; uVar21 = uVar21 + 1) {
                      uVar4 = *(undefined1 *)(lVar36 + 2 + lVar35);
                      *(undefined1 *)(lVar36 + 1 + param_11) = *(undefined1 *)(lVar36 + 1 + lVar35);
                      *(undefined1 *)(lVar36 + 2 + param_11) = uVar4;
                      lVar36 = lVar36 + 3;
                    }
                    goto LAB_1401fcf20;
                  }
                }
                lVar36 = 1;
                uVar21 = 0;
                if (uVar28 != 0) {
                  do {
                    uVar41 = uVar21;
                    uVar21 = uVar41 + 1;
                    *(undefined1 *)(param_11 + uVar41 * 6) = *(undefined1 *)(lVar35 + uVar41 * 6);
                    *(undefined1 *)(param_11 + 1 + uVar41 * 6) =
                         *(undefined1 *)(lVar35 + 1 + uVar41 * 6);
                    *(undefined1 *)(param_11 + 2 + uVar41 * 6) =
                         *(undefined1 *)(lVar35 + 2 + uVar41 * 6);
                    *(undefined1 *)(param_11 + 3 + uVar41 * 6) =
                         *(undefined1 *)(lVar35 + 3 + uVar41 * 6);
                    *(undefined1 *)(param_11 + 4 + uVar41 * 6) =
                         *(undefined1 *)(lVar35 + 4 + uVar41 * 6);
                    *(undefined1 *)(param_11 + 5 + uVar41 * 6) =
                         *(undefined1 *)(lVar35 + 5 + uVar41 * 6);
                  } while (uVar21 < uVar28);
                  lVar36 = uVar41 + 2 + uVar21;
                }
                if (lVar36 - 1U < uVar25) {
                  lVar36 = lVar36 * 3;
                  lVar38 = lVar36 + -3;
                  *(undefined1 *)(lVar38 + param_11) = *(undefined1 *)(lVar35 + lVar38);
                  *(undefined1 *)(lVar36 + -2 + param_11) = *(undefined1 *)(lVar35 + 1 + lVar38);
                  *(undefined1 *)(lVar36 + -1 + param_11) = *(undefined1 *)(lVar35 + 2 + lVar38);
                }
              }
LAB_1401fcf20:
              if (uVar16 == 1) {
                if (0 < lVar14) {
                  if ((longlong)uVar13 < 7) {
                    lVar36 = 1;
                    uVar21 = 0;
                    if (uVar44 != 0) {
                      do {
                        uVar41 = uVar21;
                        *(undefined1 *)(lVar47 + -3 + uVar41 * 6) = *(undefined1 *)(lVar47 + -6);
                        uVar21 = uVar41 + 1;
                        *(undefined1 *)(lVar47 + -2 + uVar41 * 6) = *(undefined1 *)(lVar47 + -5);
                        *(undefined1 *)(lVar47 + -1 + uVar41 * 6) = *(undefined1 *)(lVar47 + -4);
                        *(undefined1 *)(lVar47 + uVar41 * 6) = *(undefined1 *)(lVar47 + -6);
                        *(undefined1 *)(lVar47 + 1 + uVar41 * 6) = *(undefined1 *)(lVar47 + -5);
                        *(undefined1 *)(lVar47 + 2 + uVar41 * 6) = *(undefined1 *)(lVar47 + -4);
                      } while (uVar21 < uVar44);
                      lVar36 = uVar41 + 2 + uVar21;
                    }
                    if (lVar36 - 1U < uVar26) {
                      lVar36 = lVar36 * 3;
                      *(undefined1 *)(lVar36 + -6 + lVar47) = *(undefined1 *)(lVar47 + -6);
                      *(undefined1 *)(lVar36 + -5 + lVar47) = *(undefined1 *)(lVar47 + -5);
                      *(undefined1 *)(lVar36 + -4 + lVar47) = *(undefined1 *)(lVar47 + -4);
                    }
                  }
                  else {
                    bVar22 = *(byte *)(lVar47 + -6);
                    bVar31 = *(byte *)(lVar47 + -5);
                    bVar39 = *(byte *)(lVar47 + -4);
                    if ((longlong)uVar13 < 0x10) {
                      uVar21 = 0;
                    }
                    else {
                      auVar55 = vpunpcklbw_avx(ZEXT116(bVar22),ZEXT116(bVar22));
                      auVar55 = vpunpcklwd_avx(auVar55,auVar55);
                      uVar41 = 0;
                      auVar56 = vpunpckldq_avx(auVar55,auVar55);
                      lVar36 = 0;
                      auVar55 = vpunpcklbw_avx(ZEXT116(bVar39),ZEXT116(bVar39));
                      auVar11 = vpunpcklqdq_avx(auVar56,auVar56);
                      auVar56 = vpunpcklbw_avx(ZEXT116(bVar31),ZEXT116(bVar31));
                      auVar55 = vpunpcklwd_avx(auVar55,auVar55);
                      auVar56 = vpunpcklwd_avx(auVar56,auVar56);
                      auVar55 = vpunpckldq_avx(auVar55,auVar55);
                      auVar56 = vpunpckldq_avx(auVar56,auVar56);
                      auVar9 = vpunpcklqdq_avx(auVar55,auVar55);
                      auVar51 = vpunpcklqdq_avx(auVar56,auVar56);
                      auVar55 = vpunpcklbw_avx(auVar11,auVar9);
                      auVar55 = vpshufb_avx(auVar55,_DAT_143088320);
                      auVar56 = vpshufb_avx(auVar51,_DAT_143088330);
                      auVar52 = vpshufb_avx(auVar11,_DAT_143088340);
                      auVar10 = vpshufb_avx(auVar51,_DAT_143088350);
                      auVar51 = vpshufb_avx(auVar51,_DAT_143088380);
                      auVar8 = vpunpckhbw_avx(auVar11,auVar9);
                      auVar55 = vpor_avx(auVar55,auVar56);
                      auVar11 = vpshufb_avx(auVar9,_DAT_143088360);
                      auVar8 = vpshufb_avx(auVar8,_DAT_143088370);
                      auVar56 = vpor_avx(auVar52,auVar10);
                      auVar52 = vpor_avx(auVar8,auVar51);
                      auVar56 = vpor_avx(auVar56,auVar11);
                      do {
                        uVar41 = uVar41 + 0x10;
                        *(undefined1 (*) [16])(lVar36 + -3 + lVar47) = auVar55;
                        *(undefined1 (*) [16])(lVar36 + 0xd + lVar47) = auVar56;
                        *(undefined1 (*) [16])(lVar36 + 0x1d + lVar47) = auVar52;
                        lVar36 = lVar36 + 0x30;
                        uVar21 = uVar48;
                      } while (uVar41 < uVar48);
                    }
                    lVar36 = uVar21 * 3;
                    for (; uVar21 < uVar13; uVar21 = uVar21 + 1) {
                      *(byte *)(lVar36 + -3 + lVar47) = bVar22;
                      *(byte *)(lVar36 + -2 + lVar47) = bVar31;
                      *(byte *)(lVar36 + -1 + lVar47) = bVar39;
                      lVar36 = lVar36 + 3;
                    }
                  }
                }
              }
              else if (uVar16 == 3) {
                if (0 < lVar14) {
                  lVar36 = 1;
                  lVar38 = 0;
                  lVar35 = 0;
                  uVar21 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar41 = uVar21;
                      uVar21 = uVar41 + 1;
                      *(undefined1 *)(lVar38 + -3 + lVar47) = *(undefined1 *)(lVar35 + -9 + lVar47);
                      *(undefined1 *)(lVar38 + lVar47) = *(undefined1 *)(lVar35 + -0xc + lVar47);
                      *(undefined1 *)(lVar38 + 1 + lVar47) = *(undefined1 *)(lVar35 + -0xb + lVar47)
                      ;
                      lVar36 = lVar35 + -8;
                      uVar4 = *(undefined1 *)(lVar35 + -7 + lVar47);
                      uVar5 = *(undefined1 *)(lVar35 + -10 + lVar47);
                      lVar35 = lVar35 + -6;
                      *(undefined1 *)(lVar38 + -2 + lVar47) = *(undefined1 *)(lVar36 + lVar47);
                      *(undefined1 *)(lVar38 + -1 + lVar47) = uVar4;
                      *(undefined1 *)(lVar38 + 2 + lVar47) = uVar5;
                      lVar38 = lVar38 + 6;
                    } while (uVar21 < uVar44);
                    lVar36 = uVar41 + 2 + uVar21;
                  }
                  if (lVar36 - 1U < uVar26) {
                    lVar36 = lVar36 * 3;
                    lVar38 = -(lVar36 + -3);
                    uVar4 = *(undefined1 *)(lVar38 + -8 + lVar47);
                    uVar5 = *(undefined1 *)(lVar38 + -7 + lVar47);
                    *(undefined1 *)(lVar36 + -6 + lVar47) = *(undefined1 *)(lVar38 + -9 + lVar47);
                    *(undefined1 *)(lVar36 + -5 + lVar47) = uVar4;
                    *(undefined1 *)(lVar36 + -4 + lVar47) = uVar5;
                  }
                }
              }
              else if ((uVar16 == 6) && (0 < lVar14)) {
                if (((longlong)uVar13 < 7) ||
                   ((lVar36 = (param_11 + -3 + lVar12) - (longlong)pbVar46, lVar36 < 3 &&
                    (-lVar36 < (longlong)(uVar13 * 3))))) {
                  lVar36 = 1;
                  uVar21 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar41 = uVar21;
                      *(byte *)(lVar47 + -3 + uVar41 * 6) = *pbVar46;
                      uVar21 = uVar41 + 1;
                      *(byte *)(lVar47 + -2 + uVar41 * 6) = pbVar46[1];
                      *(byte *)(lVar47 + -1 + uVar41 * 6) = pbVar46[2];
                      *(byte *)(lVar47 + uVar41 * 6) = *pbVar46;
                      *(byte *)(lVar47 + 1 + uVar41 * 6) = pbVar46[1];
                      *(byte *)(lVar47 + 2 + uVar41 * 6) = pbVar46[2];
                    } while (uVar21 < uVar44);
                    lVar36 = uVar41 + 2 + uVar21;
                  }
                  if (lVar36 - 1U < uVar26) {
                    lVar36 = lVar36 * 3;
                    *(byte *)(lVar36 + -6 + lVar47) = *pbVar46;
                    *(byte *)(lVar36 + -5 + lVar47) = pbVar46[1];
                    *(byte *)(lVar36 + -4 + lVar47) = pbVar46[2];
                  }
                }
                else {
                  bVar22 = *pbVar46;
                  bVar31 = pbVar46[1];
                  bVar39 = pbVar46[2];
                  if ((longlong)uVar13 < 0x10) {
                    uVar21 = 0;
                  }
                  else {
                    auVar55 = vpunpcklbw_avx(ZEXT116(bVar22),ZEXT116(bVar22));
                    auVar55 = vpunpcklwd_avx(auVar55,auVar55);
                    uVar41 = 0;
                    auVar56 = vpunpckldq_avx(auVar55,auVar55);
                    lVar36 = 0;
                    auVar55 = vpunpcklbw_avx(ZEXT116(bVar39),ZEXT116(bVar39));
                    auVar11 = vpunpcklqdq_avx(auVar56,auVar56);
                    auVar56 = vpunpcklbw_avx(ZEXT116(bVar31),ZEXT116(bVar31));
                    auVar55 = vpunpcklwd_avx(auVar55,auVar55);
                    auVar56 = vpunpcklwd_avx(auVar56,auVar56);
                    auVar55 = vpunpckldq_avx(auVar55,auVar55);
                    auVar56 = vpunpckldq_avx(auVar56,auVar56);
                    auVar9 = vpunpcklqdq_avx(auVar55,auVar55);
                    auVar51 = vpunpcklqdq_avx(auVar56,auVar56);
                    auVar55 = vpunpcklbw_avx(auVar11,auVar9);
                    auVar55 = vpshufb_avx(auVar55,_DAT_143088320);
                    auVar56 = vpshufb_avx(auVar51,_DAT_143088330);
                    auVar52 = vpshufb_avx(auVar11,_DAT_143088340);
                    auVar10 = vpshufb_avx(auVar51,_DAT_143088350);
                    auVar51 = vpshufb_avx(auVar51,_DAT_143088380);
                    auVar8 = vpunpckhbw_avx(auVar11,auVar9);
                    auVar55 = vpor_avx(auVar55,auVar56);
                    auVar11 = vpshufb_avx(auVar9,_DAT_143088360);
                    auVar8 = vpshufb_avx(auVar8,_DAT_143088370);
                    auVar56 = vpor_avx(auVar52,auVar10);
                    auVar52 = vpor_avx(auVar8,auVar51);
                    auVar56 = vpor_avx(auVar56,auVar11);
                    do {
                      uVar41 = uVar41 + 0x10;
                      *(undefined1 (*) [16])(lVar36 + -3 + lVar47) = auVar55;
                      *(undefined1 (*) [16])(lVar36 + 0xd + lVar47) = auVar56;
                      *(undefined1 (*) [16])(lVar36 + 0x1d + lVar47) = auVar52;
                      lVar36 = lVar36 + 0x30;
                      uVar21 = uVar48;
                    } while (uVar41 < uVar48);
                  }
                  lVar36 = uVar21 * 3;
                  for (; uVar21 < uVar13; uVar21 = uVar21 + 1) {
                    *(byte *)(lVar36 + -3 + lVar47) = bVar22;
                    *(byte *)(lVar36 + -2 + lVar47) = bVar31;
                    *(byte *)(lVar36 + -1 + lVar47) = bVar39;
                    lVar36 = lVar36 + 3;
                  }
                }
              }
              (*pcVar7)(puVar2,puVar32,uVar49,param_9);
            }
            else {
              (*pcVar7)(lVar38,puVar32,lVar35,param_9);
            }
          }
        }
        iVar34 = (int)uVar40;
        uVar40 = uVar40 + 1;
        lVar36 = (longlong)iVar34 + 1;
        if (uVar49 <= uVar40) {
          return;
        }
      } while( true );
    }
  }
  param_7 = param_7 & 0xf;
  if (param_7 == 6) {
    uVar33 = 0;
    auVar52._0_4_ = (float)*param_8;
    auVar52._4_8_ = SUB128(ZEXT812(0),4);
    auVar52._12_4_ = 0;
    auVar56._0_4_ = (float)param_8[1];
    auVar56._4_8_ = SUB128(ZEXT812(0),4);
    auVar56._12_4_ = 0;
    auVar55._0_4_ = (float)param_8[2];
    auVar55._4_8_ = SUB128(ZEXT812(0),4);
    auVar55._12_4_ = 0;
    if (0 < iVar34) {
      lVar47 = *param_5;
      auVar10 = vshufps_avx(auVar52,auVar52,0);
      auVar51 = vshufps_avx(auVar56,auVar56,0);
      auVar11 = vshufps_avx(auVar55,auVar55,0);
      uVar1 = (lVar47 * 3 + 2) / 3;
      do {
        if (0 < lVar47 * 3) {
          if ((longlong)uVar1 < 0x10) {
            uVar44 = 0;
          }
          else {
            uVar18 = 0;
            puVar32 = param_3;
            do {
              uVar18 = uVar18 + 0x10;
              uVar50 = auVar10._0_4_;
              *puVar32 = uVar50;
              uVar6 = vextractps_avx(auVar10,1);
              puVar32[3] = uVar6;
              uVar6 = vextractps_avx(auVar10,2);
              puVar32[6] = uVar6;
              uVar6 = vextractps_avx(auVar10,3);
              puVar32[9] = uVar6;
              puVar32[0xc] = uVar50;
              uVar6 = vextractps_avx(auVar10,1);
              puVar32[0xf] = uVar6;
              uVar6 = vextractps_avx(auVar10,2);
              puVar32[0x12] = uVar6;
              uVar6 = vextractps_avx(auVar10,3);
              puVar32[0x15] = uVar6;
              puVar32[0x18] = uVar50;
              uVar6 = vextractps_avx(auVar10,1);
              puVar32[0x1b] = uVar6;
              uVar6 = vextractps_avx(auVar10,2);
              puVar32[0x1e] = uVar6;
              uVar6 = vextractps_avx(auVar10,3);
              puVar32[0x21] = uVar6;
              puVar32[0x24] = uVar50;
              uVar6 = vextractps_avx(auVar10,1);
              puVar32[0x27] = uVar6;
              uVar6 = vextractps_avx(auVar10,2);
              puVar32[0x2a] = uVar6;
              uVar6 = vextractps_avx(auVar10,3);
              puVar32[0x2d] = uVar6;
              uVar50 = auVar51._0_4_;
              puVar32[1] = uVar50;
              uVar6 = vextractps_avx(auVar51,1);
              puVar32[4] = uVar6;
              uVar6 = vextractps_avx(auVar51,2);
              puVar32[7] = uVar6;
              uVar6 = vextractps_avx(auVar51,3);
              puVar32[10] = uVar6;
              puVar32[0xd] = uVar50;
              uVar6 = vextractps_avx(auVar51,1);
              puVar32[0x10] = uVar6;
              uVar6 = vextractps_avx(auVar51,2);
              puVar32[0x13] = uVar6;
              uVar6 = vextractps_avx(auVar51,3);
              puVar32[0x16] = uVar6;
              puVar32[0x19] = uVar50;
              uVar6 = vextractps_avx(auVar51,1);
              puVar32[0x1c] = uVar6;
              uVar6 = vextractps_avx(auVar51,2);
              puVar32[0x1f] = uVar6;
              uVar6 = vextractps_avx(auVar51,3);
              puVar32[0x22] = uVar6;
              puVar32[0x25] = uVar50;
              uVar6 = vextractps_avx(auVar51,1);
              puVar32[0x28] = uVar6;
              uVar6 = vextractps_avx(auVar51,2);
              puVar32[0x2b] = uVar6;
              uVar6 = vextractps_avx(auVar51,3);
              puVar32[0x2e] = uVar6;
              uVar50 = auVar11._0_4_;
              puVar32[2] = uVar50;
              uVar6 = vextractps_avx(auVar11,1);
              puVar32[5] = uVar6;
              uVar6 = vextractps_avx(auVar11,2);
              puVar32[8] = uVar6;
              uVar6 = vextractps_avx(auVar11,3);
              puVar32[0xb] = uVar6;
              puVar32[0xe] = uVar50;
              uVar6 = vextractps_avx(auVar11,1);
              puVar32[0x11] = uVar6;
              uVar6 = vextractps_avx(auVar11,2);
              puVar32[0x14] = uVar6;
              uVar6 = vextractps_avx(auVar11,3);
              puVar32[0x17] = uVar6;
              puVar32[0x1a] = uVar50;
              uVar6 = vextractps_avx(auVar11,1);
              puVar32[0x1d] = uVar6;
              uVar6 = vextractps_avx(auVar11,2);
              puVar32[0x20] = uVar6;
              uVar6 = vextractps_avx(auVar11,3);
              puVar32[0x23] = uVar6;
              puVar32[0x26] = uVar50;
              uVar6 = vextractps_avx(auVar11,1);
              puVar32[0x29] = uVar6;
              uVar6 = vextractps_avx(auVar11,2);
              puVar32[0x2c] = uVar6;
              uVar6 = vextractps_avx(auVar11,3);
              puVar32[0x2f] = uVar6;
              puVar32 = puVar32 + 0x30;
              uVar44 = uVar1 & 0xfffffffffffffff0;
            } while (uVar18 < (uVar1 & 0xfffffffffffffff0));
          }
          if (uVar44 + 1 <= uVar1) {
            uVar18 = uVar1 - uVar44;
            if ((longlong)uVar18 < 2) {
              uVar40 = 0;
            }
            else {
              uVar24 = 0;
              uVar40 = uVar18 & 0xfffffffffffffffe;
              lVar36 = 0;
              do {
                uVar24 = uVar24 + 2;
                *(float *)((longlong)param_3 + lVar36 + 8 + uVar44 * 0xc) = auVar55._0_4_;
                *(float *)((longlong)param_3 + lVar36 + 0x14 + uVar44 * 0xc) = auVar55._0_4_;
                *(float *)((longlong)param_3 + lVar36 + 4 + uVar44 * 0xc) = auVar56._0_4_;
                *(float *)((longlong)param_3 + lVar36 + 0x10 + uVar44 * 0xc) = auVar56._0_4_;
                *(float *)((longlong)param_3 + lVar36 + uVar44 * 0xc) = auVar52._0_4_;
                *(float *)((longlong)param_3 + lVar36 + 0xc + uVar44 * 0xc) = auVar52._0_4_;
                lVar36 = lVar36 + 0x18;
              } while (uVar24 < uVar40);
            }
            lVar36 = uVar40 * 0xc;
            for (; uVar40 < uVar18; uVar40 = uVar40 + 1) {
              *(float *)((longlong)param_3 + lVar36 + uVar44 * 0xc) = auVar52._0_4_;
              *(float *)((longlong)param_3 + lVar36 + 4 + uVar44 * 0xc) = auVar56._0_4_;
              *(float *)((longlong)param_3 + lVar36 + 8 + uVar44 * 0xc) = auVar55._0_4_;
              lVar36 = lVar36 + 0xc;
            }
          }
        }
        uVar33 = uVar33 + 1;
        param_3 = (undefined4 *)((longlong)param_3 + param_4);
      } while (uVar33 < (ulonglong)(longlong)iVar34);
    }
    return;
  }
  if (param_7 == 1) {
    uVar33 = 0;
    if (0 < iVar34) {
      lVar47 = param_4 * iVar34;
      uVar1 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar1) {
          if ((longlong)uVar1 < 8) {
LAB_1401fc004:
            uVar18 = 0;
          }
          else {
            puVar32 = (undefined4 *)(param_4 * uVar33 + (longlong)param_3);
            uVar44 = (ulonglong)puVar32 & 0x1f;
            if (uVar44 != 0) {
              if (((ulonglong)puVar32 & 3) != 0) goto LAB_1401fc004;
              uVar44 = 0x20 - uVar44 >> 2;
            }
            if ((longlong)uVar1 < (longlong)(uVar44 + 8)) goto LAB_1401fc004;
            uVar40 = 0;
            uVar18 = uVar1 - (uVar1 - uVar44 & 7);
            if (uVar44 != 0) {
              do {
                puVar32[uVar40] = *(undefined4 *)((longlong)param_3 + uVar40 * 4 + lVar47);
                uVar40 = uVar40 + 1;
              } while (uVar40 < uVar44);
            }
            do {
              auVar54._16_16_ =
                   *(undefined1 (*) [16])((longlong)param_3 + uVar44 * 4 + lVar47 + 0x10);
              auVar54._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar44 * 4 + lVar47);
              *(undefined1 (*) [32])(puVar32 + uVar44) = auVar54;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar18);
          }
          if (uVar18 < uVar1) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar18 * 4 + param_4 * uVar33) =
                   *(undefined4 *)((longlong)param_3 + uVar18 * 4 + lVar47);
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar1);
          }
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < (ulonglong)(longlong)iVar34);
    }
  }
  else if (param_7 == 3) {
    FUN_140819800(param_1,lStack_50,(longlong)iVar34,param_3);
    lVar47 = 1;
    uVar33 = 0;
    if (1 < iVar34) {
      lVar36 = ((longlong)param_10 + -1) * param_4;
      uVar1 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar1) {
          if ((longlong)uVar1 < 8) {
LAB_1401fbea5:
            uVar18 = 0;
          }
          else {
            puVar32 = (undefined4 *)((longlong)param_3 + param_4 * lVar47);
            uVar44 = (ulonglong)puVar32 & 0x1f;
            if (uVar44 != 0) {
              if (((ulonglong)puVar32 & 3) != 0) goto LAB_1401fbea5;
              uVar44 = 0x20 - uVar44 >> 2;
            }
            if ((longlong)uVar1 < (longlong)(uVar44 + 8)) goto LAB_1401fbea5;
            lVar12 = lVar36 - param_4 * lVar47;
            uVar40 = 0;
            uVar18 = uVar1 - (uVar1 - uVar44 & 7);
            if (uVar44 != 0) {
              do {
                puVar32[uVar40] = *(undefined4 *)((longlong)param_3 + uVar40 * 4 + lVar12);
                uVar40 = uVar40 + 1;
              } while (uVar40 < uVar44);
            }
            do {
              auVar53._16_16_ =
                   *(undefined1 (*) [16])((longlong)param_3 + uVar44 * 4 + lVar12 + 0x10);
              auVar53._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar44 * 4 + lVar12);
              *(undefined1 (*) [32])(puVar32 + uVar44) = auVar53;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar18);
          }
          if (uVar18 < uVar1) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar18 * 4 + lVar47 * param_4) =
                   *(undefined4 *)((longlong)param_3 + uVar18 * 4 + (lVar36 - lVar47 * param_4));
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar1);
          }
        }
        lVar47 = uVar33 + 2;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (ulonglong)(longlong)(iVar34 + -1));
    }
  }
  return;
}

