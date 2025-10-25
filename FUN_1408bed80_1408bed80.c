
void FUN_1408bed80(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  byte *pbVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ulonglong uStack_68;
  
  param_2 = param_2 * param_3;
  pbVar27 = (byte *)(param_1 + param_2);
  uVar11 = 0;
  lVar10 = (longlong)param_6;
  lVar14 = (longlong)param_10;
  uVar26 = param_7 & 0xf;
  uVar19 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_14308cf20 + lVar10 * 8))(pbVar27,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar26 == 6) {
    uVar11 = (uint)*param_8;
  }
  lVar15 = *param_5;
  uVar22 = lVar14 - 1;
  bVar17 = (byte)uVar11;
  if (lVar15 < (longlong)uVar22) {
    lVar14 = -uVar19;
    lVar12 = 0;
    if (lVar14 < (longlong)(uVar19 + lVar15)) {
      uVar11 = param_7 & 0x80;
      uVar13 = param_7 & 0x40;
      do {
        lVar25 = lVar14;
        if (((lVar14 < 0) || (lVar15 <= lVar14)) && (param_7 != 0xf0)) {
          if (uVar26 != 6) {
            if (uVar26 == 1) {
              if (lVar14 < 0) {
                lVar25 = 0;
                if (uVar13 != 0) {
                  lVar25 = lVar14;
                }
              }
              else if (uVar11 == 0) {
                lVar25 = lVar15 + -1;
              }
            }
            else if (uVar26 == 3) {
              if (lVar15 < 2) {
                if (lVar14 < 0) {
                  if (uVar13 == 0) {
                    lVar25 = -lVar14;
                    if (uVar11 == 0) {
                      lVar25 = 0;
                    }
                  }
                }
                else if ((0 < lVar14) && (uVar11 == 0)) {
                  lVar25 = -lVar14;
                  if (uVar13 == 0) {
                    lVar25 = 0;
                  }
                }
              }
              else if ((lVar14 < 0) || (lVar15 <= lVar14)) {
                if (lVar14 < 0) goto LAB_1408c0360;
                while (uVar11 == 0) {
                  for (lVar25 = (lVar15 + -1) * 2 - lVar25; lVar25 < 0; lVar25 = -lVar25) {
LAB_1408c0360:
                    if (uVar13 != 0) goto LAB_1408c01c2;
                  }
                  if (lVar25 < lVar15) break;
                }
              }
            }
            goto LAB_1408c01c2;
          }
          uVar24 = uVar13;
          if (-1 < lVar14) {
            uVar24 = uVar11;
          }
          bVar28 = bVar17;
          if (uVar24 != 0) goto LAB_1408c01c2;
        }
        else {
LAB_1408c01c2:
          bVar28 = pbVar27[lVar25];
        }
        lVar14 = lVar14 + 1;
        *(byte *)(lVar12 + param_11) = bVar28;
        lVar12 = lVar12 + 1;
      } while (lVar14 < (longlong)(uVar19 + lVar15));
    }
    (**(code **)(&UNK_14308cf20 + lVar10 * 8))(param_11 + uVar19,param_4,lVar15,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar19 == 1) {
      bVar28 = pbVar27[1];
      if (uVar26 == 1) {
        uVar13 = (uint)bVar28 + (uint)*pbVar27;
      }
      else if (uVar26 == 3) {
        uVar13 = (uint)bVar28 * 2;
      }
      else {
        uVar13 = (uint)bVar28;
        if (uVar26 == 6) {
          uVar13 = bVar28 + uVar11;
        }
      }
      auVar34._0_4_ = (float)*pbVar27;
      auVar34._4_8_ = SUB128(ZEXT812(0),4);
      auVar34._12_4_ = 0;
      pbVar27 = (byte *)(param_1 + 1 + param_2);
      lVar15 = lVar15 + -1;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar13 * *param_9)),auVar34,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar46._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar19 == 2) {
      bVar28 = pbVar27[1];
      uVar24 = (uint)pbVar27[2];
      bVar4 = *pbVar27;
      bVar5 = pbVar27[3];
      uVar13 = (uint)bVar28;
      if (uVar26 == 1) {
        uVar21 = (uint)bVar4;
        auVar31._0_4_ = (float)(bVar5 + uVar21);
        auVar31._4_8_ = SUB128(ZEXT812(0),4);
        auVar31._12_4_ = 0;
        auVar46._0_4_ = (float)uVar21;
        auVar46._4_8_ = SUB128(ZEXT812(0),4);
        auVar46._12_4_ = 0;
        auVar49._0_4_ = (float)(uVar24 + uVar21);
        auVar49._4_8_ = SUB128(ZEXT812(0),4);
        auVar49._12_4_ = 0;
        auVar36._0_4_ = (float)uVar13;
        auVar36._4_8_ = SUB128(ZEXT812(0),4);
        auVar36._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar21 + uVar13) * param_9[1])),auVar46,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar49,ZEXT416((uint)*param_9));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)(auVar49._0_4_ * param_9[1])),auVar36,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar31,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      else if (uVar26 == 3) {
        auVar35._0_4_ = (float)bVar28;
        auVar35._4_8_ = SUB128(ZEXT812(0),4);
        auVar35._12_4_ = 0;
        auVar44._0_4_ = (float)bVar4;
        auVar44._4_8_ = SUB128(ZEXT812(0),4);
        auVar44._12_4_ = 0;
        auVar29._0_4_ = (float)((uint)bVar5 + (uint)bVar28);
        auVar29._4_8_ = SUB128(ZEXT812(0),4);
        auVar29._12_4_ = 0;
        auVar47._0_4_ = (float)(uVar24 * 2);
        auVar47._4_8_ = SUB128(ZEXT812(0),4);
        auVar47._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)bVar28 * 2) * param_9[1])),auVar44,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar47,ZEXT416((uint)*param_9));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar4 + uVar24) * param_9[1])),auVar35,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar29,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      else if (uVar26 == 6) {
        auVar45._0_4_ = (float)(bVar5 + uVar11);
        auVar45._4_8_ = SUB128(ZEXT812(0),4);
        auVar45._12_4_ = 0;
        auVar48._0_4_ = (float)bVar4;
        auVar48._4_8_ = SUB128(ZEXT812(0),4);
        auVar48._12_4_ = 0;
        auVar40._0_4_ = (float)uVar13;
        auVar40._4_8_ = SUB128(ZEXT812(0),4);
        auVar40._12_4_ = 0;
        auVar30._0_4_ = (float)(bVar28 + uVar11);
        auVar30._4_8_ = SUB128(ZEXT812(0),4);
        auVar30._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar24 + uVar11) * *param_9)),auVar48,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar30,ZEXT416((uint)param_9[1]));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar4 + uVar24) * param_9[1])),auVar40,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar45,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      param_4 = param_4 + 2;
      pbVar27 = (byte *)(param_1 + 2 + param_2);
      lVar15 = lVar15 + -2;
    }
    else {
      if (0 < (longlong)uVar22) {
        if (6 < (longlong)uVar22) {
          lVar12 = (param_11 + uVar19) - (longlong)pbVar27;
          if ((lVar14 + -1 <= lVar12) || (lVar14 + -1 <= -lVar12)) {
            if ((longlong)uVar22 < 0x20) {
              uVar16 = 0;
            }
            else {
              uVar18 = param_11 + uVar19;
              if ((longlong)uVar22 < 0xa91) {
                uVar23 = 0;
                uVar16 = uVar22 & 0xffffffffffffffe0;
              }
              else {
                uVar23 = uVar18 & 0x1f;
                if (uVar23 != 0) {
                  uVar23 = 0x20 - uVar23;
                }
                if ((longlong)uVar22 < (longlong)(uVar23 + 0x20)) {
                  uVar16 = 0;
                  goto LAB_1408bf155;
                }
                uVar16 = uVar22 - (uVar22 - uVar23 & 0x1f);
                uVar20 = 0;
                if (uVar23 != 0) {
                  do {
                    *(byte *)(uVar20 + uVar18) = pbVar27[uVar20];
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uVar23);
                }
              }
              do {
                pbVar1 = pbVar27 + uVar23;
                uVar7 = *(undefined8 *)(pbVar1 + 8);
                uVar8 = *(undefined8 *)(pbVar1 + 0x10);
                uVar9 = *(undefined8 *)(pbVar1 + 0x18);
                puVar2 = (undefined8 *)(uVar23 + uVar18);
                *puVar2 = *(undefined8 *)pbVar1;
                puVar2[1] = uVar7;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                uVar23 = uVar23 + 0x20;
              } while (uVar23 < uVar16);
            }
LAB_1408bf155:
            if (uVar16 + 1 <= uVar22) {
              uVar18 = uVar22 - uVar16;
              if ((longlong)uVar18 < 8) {
                uVar23 = 0;
              }
              else {
                uVar20 = 0;
                uVar23 = uVar18 & 0xfffffffffffffff8;
                do {
                  *(undefined8 *)(uVar20 + uVar16 + param_11 + uVar19) =
                       *(undefined8 *)(pbVar27 + uVar20 + uVar16);
                  uVar20 = uVar20 + 8;
                } while (uVar20 < uVar23);
              }
              if (uVar23 < uVar18) {
                do {
                  *(byte *)(uVar23 + uVar16 + param_11 + uVar19) = pbVar27[uVar23 + uVar16];
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar18);
              }
            }
            goto LAB_1408bf25f;
          }
        }
        uStack_68 = lVar14 - 1;
        lVar25 = 1;
        lVar12 = param_11 + uVar19;
        uVar16 = 0;
        if (uStack_68 >> 1 != 0) {
          do {
            uVar18 = uVar16;
            *(byte *)(lVar12 + uVar18 * 2) = pbVar27[uVar18 * 2];
            *(byte *)(lVar12 + 1 + uVar18 * 2) = pbVar27[uVar18 * 2 + 1];
            uVar16 = uVar18 + 1;
          } while (uVar16 < uStack_68 >> 1);
          lVar25 = uVar18 + 2 + uVar16;
        }
        uVar16 = lVar25 - 1;
        if (uVar16 < uStack_68) {
          *(byte *)(lVar12 + uVar16) = pbVar27[uVar16];
        }
      }
LAB_1408bf25f:
      if (uVar26 == 1) {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 7) {
            lVar12 = 1;
            uVar16 = 0;
            if (uVar19 >> 1 != 0) {
              do {
                uVar18 = uVar16;
                *(undefined1 *)(param_11 + uVar18 * 2) = *(undefined1 *)(param_11 + uVar19);
                *(undefined1 *)(param_11 + 1 + uVar18 * 2) = *(undefined1 *)(param_11 + uVar19);
                uVar16 = uVar18 + 1;
              } while (uVar16 < uVar19 >> 1);
              lVar12 = uVar18 + 2 + uVar16;
            }
            if (lVar12 - 1U < uVar19) {
              *(undefined1 *)((lVar12 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar19);
            }
          }
          else {
            uVar6 = *(undefined1 *)(param_11 + uVar19);
            if ((longlong)uVar19 < 0x20) {
LAB_1408c0284:
              uVar18 = 0;
            }
            else {
              if ((longlong)uVar19 < 0x671) {
                uVar16 = 0;
                uVar18 = uVar19 & 0xffffffffffffffe0;
              }
              else {
                uVar16 = param_11 & 0x1f;
                if (uVar16 != 0) {
                  uVar16 = 0x20 - uVar16;
                }
                if ((longlong)uVar19 < (longlong)(uVar16 + 0x20)) goto LAB_1408c0284;
                uVar23 = 0;
                uVar18 = uVar19 - (uVar19 - uVar16 & 0x1f);
                if (uVar16 != 0) {
                  do {
                    *(undefined1 *)(uVar23 + param_11) = uVar6;
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < uVar16);
                }
              }
              do {
                puVar3 = (undefined1 *)(uVar16 + param_11);
                *puVar3 = uVar6;
                puVar3[1] = uVar6;
                puVar3[2] = uVar6;
                puVar3[3] = uVar6;
                puVar3[4] = uVar6;
                puVar3[5] = uVar6;
                puVar3[6] = uVar6;
                puVar3[7] = uVar6;
                puVar3[8] = uVar6;
                puVar3[9] = uVar6;
                puVar3[10] = uVar6;
                puVar3[0xb] = uVar6;
                puVar3[0xc] = uVar6;
                puVar3[0xd] = uVar6;
                puVar3[0xe] = uVar6;
                puVar3[0xf] = uVar6;
                puVar3[0x10] = uVar6;
                puVar3[0x11] = uVar6;
                puVar3[0x12] = uVar6;
                puVar3[0x13] = uVar6;
                puVar3[0x14] = uVar6;
                puVar3[0x15] = uVar6;
                puVar3[0x16] = uVar6;
                puVar3[0x17] = uVar6;
                puVar3[0x18] = uVar6;
                puVar3[0x19] = uVar6;
                puVar3[0x1a] = uVar6;
                puVar3[0x1b] = uVar6;
                puVar3[0x1c] = uVar6;
                puVar3[0x1d] = uVar6;
                puVar3[0x1e] = uVar6;
                puVar3[0x1f] = uVar6;
                uVar16 = uVar16 + 0x20;
              } while (uVar16 < uVar18);
            }
            if (uVar18 + 1 <= uVar19) {
              uVar16 = uVar19 - uVar18;
              if ((longlong)uVar16 < 8) {
                uVar23 = 0;
              }
              else {
                uVar23 = uVar16 & 0xfffffffffffffff8;
                uVar20 = 0;
                do {
                  *(ulonglong *)(uVar20 + param_11 + uVar18) =
                       CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(uVar6,
                                                  CONCAT12(uVar6,CONCAT11(uVar6,uVar6)))))));
                  uVar20 = uVar20 + 8;
                } while (uVar20 < uVar23);
              }
              if (uVar23 < uVar16) {
                do {
                  *(undefined1 *)(uVar23 + uVar18 + param_11) = uVar6;
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar16);
              }
            }
          }
        }
      }
      else if (uVar26 == 3) {
        if (0 < (longlong)uVar19) {
          uVar16 = 0;
          lVar12 = 1;
          if (uVar19 >> 1 != 0) {
            uVar18 = uVar16;
            do {
              uVar23 = uVar18;
              *(undefined1 *)(param_11 + uVar23 * 2) =
                   *(undefined1 *)((uVar16 - 1) + param_11 + lVar14);
              lVar12 = uVar16 - 2;
              uVar16 = uVar16 - 2;
              *(undefined1 *)(param_11 + 1 + uVar23 * 2) =
                   *(undefined1 *)(lVar12 + param_11 + lVar14);
              uVar18 = uVar23 + 1;
            } while (uVar18 < uVar19 >> 1);
            lVar12 = uVar23 + 2 + uVar18;
          }
          uVar16 = lVar12 - 1;
          if (uVar16 < uVar19) {
            *(undefined1 *)(uVar16 + param_11) =
                 *(undefined1 *)(((param_11 + lVar14) - uVar16) + -1);
          }
        }
      }
      else if ((uVar26 == 6) && (0 < (longlong)uVar19)) {
        if ((longlong)uVar19 < 0x20) {
LAB_1408c0265:
          uVar18 = 0;
        }
        else {
          if ((longlong)uVar19 < 0x671) {
            uVar16 = 0;
            uVar18 = uVar19 & 0xffffffffffffffe0;
          }
          else {
            uVar16 = param_11 & 0x1f;
            if (uVar16 != 0) {
              uVar16 = 0x20 - uVar16;
            }
            if ((longlong)uVar19 < (longlong)(uVar16 + 0x20)) goto LAB_1408c0265;
            uVar23 = 0;
            uVar18 = uVar19 - (uVar19 - uVar16 & 0x1f);
            if (uVar16 != 0) {
              do {
                *(byte *)(uVar23 + param_11) = bVar17;
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar16);
            }
          }
          do {
            pbVar1 = (byte *)(uVar16 + param_11);
            *pbVar1 = bVar17;
            pbVar1[1] = bVar17;
            pbVar1[2] = bVar17;
            pbVar1[3] = bVar17;
            pbVar1[4] = bVar17;
            pbVar1[5] = bVar17;
            pbVar1[6] = bVar17;
            pbVar1[7] = bVar17;
            pbVar1[8] = bVar17;
            pbVar1[9] = bVar17;
            pbVar1[10] = bVar17;
            pbVar1[0xb] = bVar17;
            pbVar1[0xc] = bVar17;
            pbVar1[0xd] = bVar17;
            pbVar1[0xe] = bVar17;
            pbVar1[0xf] = bVar17;
            pbVar1[0x10] = bVar17;
            pbVar1[0x11] = bVar17;
            pbVar1[0x12] = bVar17;
            pbVar1[0x13] = bVar17;
            pbVar1[0x14] = bVar17;
            pbVar1[0x15] = bVar17;
            pbVar1[0x16] = bVar17;
            pbVar1[0x17] = bVar17;
            pbVar1[0x18] = bVar17;
            pbVar1[0x19] = bVar17;
            pbVar1[0x1a] = bVar17;
            pbVar1[0x1b] = bVar17;
            pbVar1[0x1c] = bVar17;
            pbVar1[0x1d] = bVar17;
            pbVar1[0x1e] = bVar17;
            pbVar1[0x1f] = bVar17;
            uVar16 = uVar16 + 0x20;
          } while (uVar16 < uVar18);
        }
        if (uVar18 + 1 <= uVar19) {
          uVar16 = uVar19 - uVar18;
          if ((longlong)uVar16 < 8) {
            uVar23 = 0;
          }
          else {
            uVar23 = uVar16 & 0xfffffffffffffff8;
            uVar20 = 0;
            do {
              *(ulonglong *)(uVar20 + param_11 + uVar18) =
                   CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17)))))));
              uVar20 = uVar20 + 8;
            } while (uVar20 < uVar23);
          }
          if (uVar23 < uVar16) {
            do {
              *(byte *)(uVar23 + uVar18 + param_11) = bVar17;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar16);
          }
        }
      }
      (**(code **)(&UNK_14308cf20 + lVar10 * 8))(param_11 + uVar19,param_4,uVar19,param_9,param_10);
      pbVar27 = pbVar27 + uVar19;
      lVar15 = lVar15 - uVar19;
      param_4 = param_4 + uVar19;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (**(code **)(&UNK_14308cf20 + lVar10 * 8))(pbVar27,param_4,lVar15,param_9,param_10);
    return;
  }
  if ((longlong)uVar19 < lVar15) {
    lVar15 = lVar15 - uVar19;
    (**(code **)(&UNK_14308cf20 + lVar10 * 8))(pbVar27,param_4,lVar15,param_9,param_10);
    pbVar27 = pbVar27 + lVar15;
    param_4 = param_4 + lVar15;
  }
  if (uVar19 == 1) {
    uVar13 = (uint)pbVar27[-1];
    if (uVar26 == 1) {
      uVar13 = uVar13 + *pbVar27;
    }
    else if (uVar26 == 3) {
      uVar13 = uVar13 * 2;
    }
    else if (uVar26 == 6) {
      uVar13 = uVar11 + uVar13;
    }
    auVar37._0_4_ = (float)*pbVar27;
    auVar37._4_8_ = SUB128(ZEXT812(0),4);
    auVar37._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar13 * *param_9)),auVar37,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar46._0_4_;
    return;
  }
  if (uVar19 == 2) {
    bVar17 = pbVar27[-2];
    bVar28 = pbVar27[-1];
    bVar4 = *pbVar27;
    bVar5 = pbVar27[1];
    uVar13 = (uint)bVar4;
    if (uVar26 == 1) {
      uVar11 = (uint)bVar5;
      auVar43._0_4_ = (float)uVar13;
      auVar43._4_8_ = SUB128(ZEXT812(0),4);
      auVar43._12_4_ = 0;
      auVar32._0_4_ = (float)(bVar28 + uVar11);
      auVar32._4_8_ = SUB128(ZEXT812(0),4);
      auVar32._12_4_ = 0;
      auVar52._0_4_ = (float)uVar11;
      auVar52._4_8_ = SUB128(ZEXT812(0),4);
      auVar52._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar17 + uVar11) * *param_9)),auVar43,
                                ZEXT416((uint)param_9[2]));
      auVar46 = vfmadd231ss_fma(auVar46,auVar32,ZEXT416((uint)param_9[1]));
      *param_4 = auVar46._0_4_;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar11 + uVar13) * param_9[1])),auVar32,
                                ZEXT416((uint)*param_9));
      auVar46 = vfmadd231ss_fma(auVar46,auVar52,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar46._0_4_;
      return;
    }
    if (uVar26 != 3) {
      if (uVar26 != 6) {
        return;
      }
      auVar39._0_4_ = (float)uVar13;
      auVar39._4_8_ = SUB128(ZEXT812(0),4);
      auVar39._12_4_ = 0;
      auVar42._0_4_ = (float)(bVar17 + uVar11);
      auVar42._4_8_ = SUB128(ZEXT812(0),4);
      auVar42._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)bVar28 + (uint)bVar5) * param_9[1])),
                                auVar39,ZEXT416((uint)param_9[2]));
      auVar51._0_4_ = (float)bVar5;
      auVar51._4_8_ = SUB128(ZEXT812(0),4);
      auVar51._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(auVar46,auVar42,ZEXT416((uint)*param_9));
      *param_4 = auVar46._0_4_;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar28 + uVar11) * *param_9)),auVar51,
                                ZEXT416((uint)param_9[2]));
      auVar46 = vfmadd231ss_fma(auVar46,ZEXT416((uint)(float)(uVar13 + uVar11)),
                                ZEXT416((uint)param_9[1]));
      param_4[1] = auVar46._0_4_;
      return;
    }
    auVar38._0_4_ = (float)((uint)bVar17 + (uint)bVar4);
    auVar38._4_8_ = SUB128(ZEXT812(0),4);
    auVar38._12_4_ = 0;
    auVar41._0_4_ = (float)((uint)bVar28 + (uint)bVar5);
    auVar41._4_8_ = SUB128(ZEXT812(0),4);
    auVar41._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)bVar4 * param_9[2])),auVar38,
                              ZEXT416((uint)*param_9));
    auVar50._0_4_ = (float)((uint)bVar28 * 2);
    auVar50._4_8_ = SUB128(ZEXT812(0),4);
    auVar50._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(auVar46,auVar41,ZEXT416((uint)param_9[1]));
    *param_4 = auVar46._0_4_;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)bVar4 * 2) * param_9[1])),auVar50,
                              ZEXT416((uint)*param_9));
    auVar46 = vfmadd231ss_fma(auVar46,ZEXT416((uint)(float)bVar5),ZEXT416((uint)param_9[2]));
    param_4[1] = auVar46._0_4_;
    return;
  }
  if (0 < (longlong)uVar22) {
    if (6 < (longlong)uVar22) {
      lVar15 = param_11 - ((longlong)pbVar27 - uVar19);
      if ((lVar14 + -1 <= lVar15) || (lVar14 + -1 <= -lVar15)) {
        if ((longlong)uVar22 < 0x20) {
LAB_1408c02a2:
          uVar18 = 0;
        }
        else {
          if ((longlong)uVar22 < 0xa71) {
            uVar16 = 0;
            uVar18 = uVar22 & 0xffffffffffffffe0;
          }
          else {
            uVar16 = param_11 & 0x1f;
            if (uVar16 != 0) {
              uVar16 = 0x20 - uVar16;
            }
            if ((longlong)uVar22 < (longlong)(uVar16 + 0x20)) goto LAB_1408c02a2;
            uVar18 = uVar22 - (uVar22 - uVar16 & 0x1f);
            uVar23 = 0;
            if (uVar16 != 0) {
              do {
                *(byte *)(uVar23 + param_11) = pbVar27[uVar23 - uVar19];
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar16);
            }
          }
          do {
            pbVar1 = pbVar27 + (uVar16 - uVar19);
            uVar7 = *(undefined8 *)(pbVar1 + 8);
            uVar8 = *(undefined8 *)(pbVar1 + 0x10);
            uVar9 = *(undefined8 *)(pbVar1 + 0x18);
            puVar2 = (undefined8 *)(uVar16 + param_11);
            *puVar2 = *(undefined8 *)pbVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            uVar16 = uVar16 + 0x20;
          } while (uVar16 < uVar18);
        }
        if (uVar18 + 1 <= uVar22) {
          uVar22 = uVar22 - uVar18;
          if ((longlong)uVar22 < 8) {
            uVar16 = 0;
          }
          else {
            uVar23 = 0;
            uVar16 = uVar22 & 0xfffffffffffffff8;
            do {
              *(undefined8 *)(uVar23 + param_11 + uVar18) =
                   *(undefined8 *)(pbVar27 + uVar23 + (uVar18 - uVar19));
              uVar23 = uVar23 + 8;
            } while (uVar23 < uVar16);
          }
          if (uVar16 < uVar22) {
            do {
              *(byte *)(uVar16 + param_11 + uVar18) = pbVar27[uVar16 + (uVar18 - uVar19)];
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar22);
          }
        }
        goto LAB_1408bfac4;
      }
    }
    lVar15 = 1;
    uVar16 = lVar14 - 1U >> 1;
    uVar22 = 0;
    if (uVar16 != 0) {
      do {
        uVar18 = uVar22;
        lVar15 = uVar18 * 2 - uVar19;
        *(byte *)(param_11 + uVar18 * 2) = pbVar27[lVar15];
        *(byte *)(param_11 + 1 + uVar18 * 2) = pbVar27[lVar15 + 1];
        uVar22 = uVar18 + 1;
      } while (uVar22 < uVar16);
      lVar15 = uVar18 + 2 + uVar22;
    }
    uVar22 = lVar15 - 1;
    if (uVar22 < lVar14 - 1U) {
      *(byte *)(uVar22 + param_11) = pbVar27[uVar22 - uVar19];
    }
  }
LAB_1408bfac4:
  if (uVar26 == 1) {
    if ((longlong)uVar19 < 1) goto LAB_1408c0075;
    if ((longlong)uVar19 < 7) {
      lVar15 = 1;
      if (uVar19 >> 1 != 0) {
        lVar15 = param_11 + lVar14;
        uVar22 = 0;
        do {
          uVar16 = uVar22;
          *(undefined1 *)(lVar15 + -1 + uVar16 * 2) = *(undefined1 *)(lVar15 + -2);
          *(undefined1 *)(lVar15 + uVar16 * 2) = *(undefined1 *)(lVar15 + -2);
          uVar22 = uVar16 + 1;
        } while (uVar22 < uVar19 >> 1);
        lVar15 = uVar16 + 2 + uVar22;
      }
      if (lVar15 - 1U < uVar19) {
        *(undefined1 *)(lVar14 + param_11 + -1 + (lVar15 - 1U)) =
             *(undefined1 *)(lVar14 + param_11 + -2);
      }
      goto LAB_1408c0075;
    }
    lVar15 = param_11 + lVar14;
    uVar6 = *(undefined1 *)(lVar15 + -2);
    if ((longlong)uVar19 < 0x20) {
LAB_1408c02fb:
      uVar16 = 0;
    }
    else {
      if ((longlong)uVar19 < 0x6a1) {
        uVar22 = 0;
        uVar16 = uVar19 & 0xffffffffffffffe0;
      }
      else {
        uVar22 = lVar14 + -1 + param_11 & 0x1f;
        if (uVar22 != 0) {
          uVar22 = 0x20 - uVar22;
        }
        if ((longlong)uVar19 < (longlong)(uVar22 + 0x20)) goto LAB_1408c02fb;
        uVar18 = 0;
        uVar16 = uVar19 - (uVar19 - uVar22 & 0x1f);
        if (uVar22 != 0) {
          do {
            *(undefined1 *)((uVar18 - 1) + lVar15) = uVar6;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar22);
        }
      }
      do {
        puVar3 = (undefined1 *)((uVar22 - 1) + lVar15);
        *puVar3 = uVar6;
        puVar3[1] = uVar6;
        puVar3[2] = uVar6;
        puVar3[3] = uVar6;
        puVar3[4] = uVar6;
        puVar3[5] = uVar6;
        puVar3[6] = uVar6;
        puVar3[7] = uVar6;
        puVar3[8] = uVar6;
        puVar3[9] = uVar6;
        puVar3[10] = uVar6;
        puVar3[0xb] = uVar6;
        puVar3[0xc] = uVar6;
        puVar3[0xd] = uVar6;
        puVar3[0xe] = uVar6;
        puVar3[0xf] = uVar6;
        puVar3[0x10] = uVar6;
        puVar3[0x11] = uVar6;
        puVar3[0x12] = uVar6;
        puVar3[0x13] = uVar6;
        puVar3[0x14] = uVar6;
        puVar3[0x15] = uVar6;
        puVar3[0x16] = uVar6;
        puVar3[0x17] = uVar6;
        puVar3[0x18] = uVar6;
        puVar3[0x19] = uVar6;
        puVar3[0x1a] = uVar6;
        puVar3[0x1b] = uVar6;
        puVar3[0x1c] = uVar6;
        puVar3[0x1d] = uVar6;
        puVar3[0x1e] = uVar6;
        puVar3[0x1f] = uVar6;
        uVar22 = uVar22 + 0x20;
      } while (uVar22 < uVar16);
    }
    if (uVar16 + 1 <= uVar19) {
      uVar22 = uVar19 - uVar16;
      if ((longlong)uVar22 < 8) {
        uVar18 = 0;
      }
      else {
        uVar23 = 0;
        uVar18 = uVar22 & 0xfffffffffffffff8;
        do {
          *(ulonglong *)((uVar23 - 1) + uVar16 + lVar15) =
               CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(uVar6,CONCAT12(
                                                  uVar6,CONCAT11(uVar6,uVar6)))))));
          uVar23 = uVar23 + 8;
        } while (uVar23 < uVar18);
      }
      if (uVar18 < uVar22) {
        do {
          *(undefined1 *)((uVar18 - 1) + uVar16 + lVar15) = uVar6;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar22);
      }
    }
    goto LAB_1408c0075;
  }
  if (uVar26 != 3) {
    if ((uVar26 != 6) || ((longlong)uVar19 < 1)) goto LAB_1408c0075;
    if ((longlong)uVar19 < 0x20) {
LAB_1408c02dd:
      uVar16 = 0;
    }
    else {
      if ((longlong)uVar19 < 0x6a1) {
        uVar22 = 0;
        uVar16 = uVar19 & 0xffffffffffffffe0;
      }
      else {
        uVar22 = lVar14 + -1 + param_11 & 0x1f;
        if (uVar22 != 0) {
          uVar22 = 0x20 - uVar22;
        }
        if ((longlong)uVar19 < (longlong)(uVar22 + 0x20)) goto LAB_1408c02dd;
        uVar18 = 0;
        uVar16 = uVar19 - (uVar19 - uVar22 & 0x1f);
        if (uVar22 != 0) {
          do {
            *(byte *)((uVar18 - 1) + param_11 + lVar14) = bVar17;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar22);
        }
      }
      do {
        pbVar27 = (byte *)((uVar22 - 1) + param_11 + lVar14);
        *pbVar27 = bVar17;
        pbVar27[1] = bVar17;
        pbVar27[2] = bVar17;
        pbVar27[3] = bVar17;
        pbVar27[4] = bVar17;
        pbVar27[5] = bVar17;
        pbVar27[6] = bVar17;
        pbVar27[7] = bVar17;
        pbVar27[8] = bVar17;
        pbVar27[9] = bVar17;
        pbVar27[10] = bVar17;
        pbVar27[0xb] = bVar17;
        pbVar27[0xc] = bVar17;
        pbVar27[0xd] = bVar17;
        pbVar27[0xe] = bVar17;
        pbVar27[0xf] = bVar17;
        pbVar27[0x10] = bVar17;
        pbVar27[0x11] = bVar17;
        pbVar27[0x12] = bVar17;
        pbVar27[0x13] = bVar17;
        pbVar27[0x14] = bVar17;
        pbVar27[0x15] = bVar17;
        pbVar27[0x16] = bVar17;
        pbVar27[0x17] = bVar17;
        pbVar27[0x18] = bVar17;
        pbVar27[0x19] = bVar17;
        pbVar27[0x1a] = bVar17;
        pbVar27[0x1b] = bVar17;
        pbVar27[0x1c] = bVar17;
        pbVar27[0x1d] = bVar17;
        pbVar27[0x1e] = bVar17;
        pbVar27[0x1f] = bVar17;
        uVar22 = uVar22 + 0x20;
      } while (uVar22 < uVar16);
    }
    if (uVar16 + 1 <= uVar19) {
      uVar22 = uVar19 - uVar16;
      if ((longlong)uVar22 < 8) {
        uVar18 = 0;
      }
      else {
        uVar23 = 0;
        uVar18 = uVar22 & 0xfffffffffffffff8;
        do {
          *(ulonglong *)((uVar23 - 1) + param_11 + lVar14 + uVar16) =
               CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17)))))));
          uVar23 = uVar23 + 8;
        } while (uVar23 < uVar18);
      }
      if (uVar18 < uVar22) {
        do {
          *(byte *)((uVar18 - 1) + uVar16 + lVar14 + param_11) = bVar17;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar22);
      }
    }
    goto LAB_1408c0075;
  }
  if ((longlong)uVar19 < 1) goto LAB_1408c0075;
  if ((longlong)uVar19 < 0x20) {
LAB_1408c02c0:
    uVar16 = 0;
  }
  else {
    lVar15 = param_11 + lVar14;
    if ((longlong)uVar19 < 0xaa1) {
      uVar22 = 0;
      uVar16 = uVar19 & 0xffffffffffffffe0;
    }
    else {
      uVar22 = lVar14 + -1 + param_11 & 0x1f;
      if (uVar22 != 0) {
        uVar22 = 0x20 - uVar22;
      }
      if ((longlong)uVar19 < (longlong)(uVar22 + 0x20)) goto LAB_1408c02c0;
      uVar18 = 0;
      lVar12 = 0;
      uVar16 = uVar19 - (uVar19 - uVar22 & 0x1f);
      if (uVar22 != 0) {
        do {
          lVar25 = lVar12 + -3;
          lVar12 = lVar12 + -1;
          *(undefined1 *)((uVar18 - 1) + lVar15) = *(undefined1 *)(lVar25 + lVar15);
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar22);
      }
    }
    lVar12 = -uVar22;
    do {
      auVar46 = vpinsrb_avx(ZEXT116(*(byte *)(lVar12 + -3 + lVar15)),
                            (uint)*(byte *)(lVar12 + -4 + lVar15),1);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -5 + lVar15),2);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -6 + lVar15),3);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -7 + lVar15),4);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -8 + lVar15),5);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -9 + lVar15),6);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -10 + lVar15),7);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0xb + lVar15),8);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0xc + lVar15),9);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0xd + lVar15),10);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0xe + lVar15),0xb);
      auVar31 = vpinsrb_avx(ZEXT116(*(byte *)(lVar12 + -0x13 + lVar15)),
                            (uint)*(byte *)(lVar12 + -0x14 + lVar15),0x11);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0xf + lVar15),0xc);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0x10 + lVar15),0xd);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x15 + lVar15),0x12);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0x11 + lVar15),0xe);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x16 + lVar15),0x13);
      auVar46 = vpinsrb_avx(auVar46,(uint)*(byte *)(lVar12 + -0x12 + lVar15),0xf);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x17 + lVar15),0x14);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x18 + lVar15),0x15);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x19 + lVar15),0x16);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1a + lVar15),0x17);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1b + lVar15),0x18);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1c + lVar15),0x19);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1d + lVar15),0x1a);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1e + lVar15),0x1b);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x1f + lVar15),0x1c);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x20 + lVar15),0x1d);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x21 + lVar15),0x1e);
      auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(lVar12 + -0x22 + lVar15),0x1f);
      lVar12 = lVar12 + -0x20;
      auVar33._0_16_ = ZEXT116(0) * auVar31 + ZEXT116(1) * auVar46;
      auVar33._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * auVar31;
      *(undefined1 (*) [32])((uVar22 - 1) + lVar15) = auVar33;
      uVar22 = uVar22 + 0x20;
    } while (uVar22 < uVar16);
  }
  if (uVar16 + 1 <= uVar19) {
    uVar22 = uVar19 - uVar16;
    if ((longlong)uVar22 < 8) {
      uVar18 = 0;
    }
    else {
      uVar23 = 0;
      uVar18 = uVar22 & 0xfffffffffffffff8;
      do {
        pbVar27 = (byte *)((((param_11 + lVar14) - uVar16) + -3) - uVar23);
        auVar46 = vpinsrb_avx(ZEXT116(*pbVar27),(uint)pbVar27[-1],1);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-2],2);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-3],3);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-4],4);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-5],5);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-6],6);
        auVar46 = vpinsrb_avx(auVar46,(uint)pbVar27[-7],7);
        *(longlong *)((uVar23 - 1) + uVar16 + param_11 + lVar14) = auVar46._0_8_;
        uVar23 = uVar23 + 8;
      } while (uVar23 < uVar18);
    }
    lVar15 = -uVar18;
    if (uVar18 < uVar22) {
      do {
        lVar12 = lVar15 + -3;
        lVar15 = lVar15 + -1;
        *(undefined1 *)((uVar18 - 1) + uVar16 + lVar14 + param_11) =
             *(undefined1 *)(lVar12 + ((lVar14 + param_11) - uVar16));
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar22);
    }
  }
LAB_1408c0075:
  (**(code **)(&UNK_14308cf20 + lVar10 * 8))(param_11 + uVar19,param_4,uVar19,param_9,param_10);
  return;
}

