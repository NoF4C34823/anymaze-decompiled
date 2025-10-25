
void FUN_1409700a0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  short *psVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  short sVar27;
  longlong lVar28;
  longlong lVar29;
  short sVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar53 [16];
  
  param_2 = param_2 * param_3;
  psVar22 = (short *)(param_1 + param_2);
  lVar8 = (longlong)param_6;
  sVar30 = 0;
  lVar28 = (longlong)param_10;
  uVar23 = param_7 & 0xf;
  uVar15 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(psVar22,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar23 == 6) {
    sVar30 = *param_8;
  }
  lVar17 = *param_5;
  uVar10 = lVar28 - 1;
  if (lVar17 < (longlong)uVar10) {
    lVar28 = -uVar15;
    lVar13 = 0;
    if (lVar28 < (longlong)(uVar15 + lVar17)) {
      uVar11 = param_7 & 0x80;
      uVar14 = param_7 & 0x40;
      do {
        lVar29 = lVar28;
        if (((lVar28 < 0) || (lVar17 <= lVar28)) && (param_7 != 0xf0)) {
          if (uVar23 != 6) {
            if (uVar23 == 1) {
              if (lVar28 < 0) {
                lVar29 = 0;
                if (uVar14 != 0) {
                  lVar29 = lVar28;
                }
              }
              else if (uVar11 == 0) {
                lVar29 = lVar17 + -1;
              }
            }
            else if (uVar23 == 3) {
              if (lVar17 < 2) {
                if (lVar28 < 0) {
                  if (uVar14 == 0) {
                    lVar29 = -lVar28;
                    if (uVar11 == 0) {
                      lVar29 = 0;
                    }
                  }
                }
                else if ((0 < lVar28) && (uVar11 == 0)) {
                  lVar29 = -lVar28;
                  if (uVar14 == 0) {
                    lVar29 = 0;
                  }
                }
              }
              else if ((lVar28 < 0) || (lVar17 <= lVar28)) {
                if (lVar28 < 0) goto LAB_140971220;
                while (uVar11 == 0) {
                  for (lVar29 = (lVar17 + -1) * 2 - lVar29; lVar29 < 0; lVar29 = -lVar29) {
LAB_140971220:
                    if (uVar14 != 0) goto LAB_1409710c2;
                  }
                  if (lVar29 < lVar17) break;
                }
              }
            }
            goto LAB_1409710c2;
          }
          uVar7 = uVar14;
          if (-1 < lVar28) {
            uVar7 = uVar11;
          }
          sVar27 = sVar30;
          if (uVar7 != 0) goto LAB_1409710c2;
        }
        else {
LAB_1409710c2:
          sVar27 = psVar22[lVar29];
        }
        lVar28 = lVar28 + 1;
        *(short *)(param_11 + lVar13 * 2) = sVar27;
        lVar13 = lVar13 + 1;
      } while (lVar28 < (longlong)(uVar15 + lVar17));
    }
    (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(param_11 + uVar15 * 2,param_4,lVar17,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar15 == 1) {
      iVar20 = (int)psVar22[1];
      if (uVar23 == 1) {
        iVar20 = iVar20 + *psVar22;
      }
      else if (uVar23 == 3) {
        iVar20 = iVar20 * 2;
      }
      else if (uVar23 == 6) {
        iVar20 = sVar30 + iVar20;
      }
      auVar35._0_4_ = (float)(int)*psVar22;
      auVar35._4_8_ = SUB128(ZEXT812(0),4);
      auVar35._12_4_ = 0;
      psVar22 = (short *)(param_1 + 2 + param_2);
      lVar17 = lVar17 + -1;
      auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar20 * *param_9)),auVar35,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar47._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar15 == 2) {
      iVar21 = (int)psVar22[1];
      iVar16 = (int)*psVar22;
      iVar24 = (int)psVar22[2];
      iVar20 = (int)psVar22[3];
      if (uVar23 == 1) {
        auVar33._0_4_ = (float)(iVar20 + iVar16);
        auVar33._4_8_ = SUB128(ZEXT812(0),4);
        auVar33._12_4_ = 0;
        auVar47._0_4_ = (float)iVar16;
        auVar47._4_8_ = SUB128(ZEXT812(0),4);
        auVar47._12_4_ = 0;
        auVar50._0_4_ = (float)(iVar24 + iVar16);
        auVar50._4_8_ = SUB128(ZEXT812(0),4);
        auVar50._12_4_ = 0;
        auVar37._0_4_ = (float)iVar21;
        auVar37._4_8_ = SUB128(ZEXT812(0),4);
        auVar37._12_4_ = 0;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar16 + iVar21) * param_9[1])),auVar47,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar50,ZEXT416((uint)*param_9));
        *param_4 = auVar47._0_4_;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)(auVar50._0_4_ * param_9[1])),auVar37,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar33,ZEXT416((uint)*param_9));
        param_4[1] = auVar47._0_4_;
      }
      else if (uVar23 == 3) {
        auVar36._0_4_ = (float)iVar21;
        auVar36._4_8_ = SUB128(ZEXT812(0),4);
        auVar36._12_4_ = 0;
        auVar45._0_4_ = (float)iVar16;
        auVar45._4_8_ = SUB128(ZEXT812(0),4);
        auVar45._12_4_ = 0;
        auVar31._0_4_ = (float)(iVar20 + iVar21);
        auVar31._4_8_ = SUB128(ZEXT812(0),4);
        auVar31._12_4_ = 0;
        auVar48._0_4_ = (float)(iVar24 * 2);
        auVar48._4_8_ = SUB128(ZEXT812(0),4);
        auVar48._12_4_ = 0;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar21 * 2) * param_9[1])),auVar45,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar48,ZEXT416((uint)*param_9));
        *param_4 = auVar47._0_4_;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar16 + iVar24) * param_9[1])),auVar36,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar31,ZEXT416((uint)*param_9));
        param_4[1] = auVar47._0_4_;
      }
      else if (uVar23 == 6) {
        auVar46._0_4_ = (float)(iVar20 + sVar30);
        auVar46._4_8_ = SUB128(ZEXT812(0),4);
        auVar46._12_4_ = 0;
        auVar41._0_4_ = (float)iVar21;
        auVar41._4_8_ = SUB128(ZEXT812(0),4);
        auVar41._12_4_ = 0;
        auVar49._0_4_ = (float)iVar16;
        auVar49._4_8_ = SUB128(ZEXT812(0),4);
        auVar49._12_4_ = 0;
        auVar32._0_4_ = (float)(iVar21 + sVar30);
        auVar32._4_8_ = SUB128(ZEXT812(0),4);
        auVar32._12_4_ = 0;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(sVar30 + iVar24) * *param_9)),auVar49,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar32,ZEXT416((uint)param_9[1]));
        *param_4 = auVar47._0_4_;
        auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar24 + iVar16) * param_9[1])),auVar41,
                                  ZEXT416((uint)param_9[2]));
        auVar47 = vfmadd231ss_fma(auVar47,auVar46,ZEXT416((uint)*param_9));
        param_4[1] = auVar47._0_4_;
      }
      param_4 = param_4 + 2;
      psVar22 = (short *)(param_1 + 4 + param_2);
      lVar17 = lVar17 + -2;
    }
    else {
      uVar9 = param_11 + uVar15 * 2;
      if (0 < (longlong)uVar10) {
        if (6 < (longlong)uVar10) {
          lVar13 = lVar28 * 2 + -2;
          if ((lVar13 <= (longlong)(uVar9 - (longlong)psVar22)) ||
             (lVar13 <= (longlong)-(uVar9 - (longlong)psVar22))) {
            if ((longlong)uVar10 < 0x10) {
LAB_140971131:
              uVar19 = 0;
            }
            else {
              if ((longlong)uVar10 < 0x2b9) {
                uVar12 = 0;
                uVar19 = uVar10 & 0xfffffffffffffff0;
              }
              else {
                uVar12 = uVar9 & 0x1f;
                if (uVar12 != 0) {
                  if ((uVar9 & 1) != 0) goto LAB_140971131;
                  uVar12 = 0x20 - uVar12 >> 1;
                }
                if ((longlong)uVar10 < (longlong)(uVar12 + 0x10)) goto LAB_140971131;
                uVar19 = uVar10 - (uVar10 - uVar12 & 0xf);
                uVar26 = 0;
                if (uVar12 != 0) {
                  do {
                    *(short *)(uVar9 + uVar26 * 2) = psVar22[uVar26];
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uVar12);
                }
              }
              do {
                psVar18 = psVar22 + uVar12;
                uVar4 = *(undefined8 *)(psVar18 + 4);
                uVar5 = *(undefined8 *)(psVar18 + 8);
                uVar6 = *(undefined8 *)(psVar18 + 0xc);
                puVar1 = (undefined8 *)(uVar9 + uVar12 * 2);
                *puVar1 = *(undefined8 *)psVar18;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar19);
            }
            if (uVar19 + 1 <= uVar10) {
              uVar12 = uVar10 - uVar19;
              if ((longlong)uVar12 < 4) {
                uVar26 = 0;
              }
              else {
                uVar26 = uVar12 & 0xfffffffffffffffc;
                uVar25 = 0;
                do {
                  *(undefined8 *)(uVar9 + uVar19 * 2 + uVar25 * 2) =
                       *(undefined8 *)(psVar22 + uVar19 + uVar25);
                  uVar25 = uVar25 + 4;
                } while (uVar25 < uVar26);
              }
              if (uVar26 < uVar12) {
                do {
                  *(short *)(uVar9 + uVar19 * 2 + uVar26 * 2) = psVar22[uVar19 + uVar26];
                  uVar26 = uVar26 + 1;
                } while (uVar26 < uVar12);
              }
            }
            goto LAB_140970583;
          }
        }
        lVar13 = 1;
        uVar19 = lVar28 - 1U >> 1;
        uVar12 = 0;
        if (uVar19 != 0) {
          do {
            uVar26 = uVar12;
            *(short *)(uVar9 + uVar26 * 4) = psVar22[uVar26 * 2];
            *(short *)(uVar9 + 2 + uVar26 * 4) = psVar22[uVar26 * 2 + 1];
            uVar12 = uVar26 + 1;
          } while (uVar12 < uVar19);
          lVar13 = uVar26 + 2 + uVar12;
        }
        if (lVar13 - 1U < lVar28 - 1U) {
          *(short *)(param_11 + ((uVar15 - 1) + lVar13) * 2) = psVar22[lVar13 - 1U];
        }
      }
LAB_140970583:
      if (uVar23 == 1) {
        if (0 < (longlong)uVar15) {
          uVar3 = *(undefined2 *)(param_11 + uVar15 * 2);
          if ((longlong)uVar15 < 0x10) {
LAB_1409711e4:
            uVar12 = 0;
          }
          else {
            if ((longlong)uVar15 < 0x1b9) {
              uVar19 = 0;
              uVar12 = uVar15 & 0xfffffffffffffff0;
            }
            else {
              uVar19 = param_11 & 0x1f;
              if (uVar19 != 0) {
                if ((param_11 & 1) != 0) goto LAB_1409711e4;
                uVar19 = 0x20 - uVar19 >> 1;
              }
              if ((longlong)uVar15 < (longlong)(uVar19 + 0x10)) goto LAB_1409711e4;
              uVar26 = 0;
              uVar12 = uVar15 - (uVar15 - uVar19 & 0xf);
              if (uVar19 != 0) {
                do {
                  *(undefined2 *)(param_11 + uVar26 * 2) = uVar3;
                  uVar26 = uVar26 + 1;
                } while (uVar26 < uVar19);
              }
            }
            do {
              puVar2 = (undefined2 *)(param_11 + uVar19 * 2);
              *puVar2 = uVar3;
              puVar2[1] = uVar3;
              puVar2[2] = uVar3;
              puVar2[3] = uVar3;
              puVar2[4] = uVar3;
              puVar2[5] = uVar3;
              puVar2[6] = uVar3;
              puVar2[7] = uVar3;
              puVar2[8] = uVar3;
              puVar2[9] = uVar3;
              puVar2[10] = uVar3;
              puVar2[0xb] = uVar3;
              puVar2[0xc] = uVar3;
              puVar2[0xd] = uVar3;
              puVar2[0xe] = uVar3;
              puVar2[0xf] = uVar3;
              uVar19 = uVar19 + 0x10;
            } while (uVar19 < uVar12);
          }
          for (; uVar12 < uVar15; uVar12 = uVar12 + 1) {
            *(undefined2 *)(param_11 + uVar12 * 2) = uVar3;
          }
        }
      }
      else if (uVar23 == 3) {
        if (0 < (longlong)uVar15) {
          uVar12 = 0;
          lVar13 = 1;
          if (uVar15 >> 1 != 0) {
            lVar13 = param_11 + lVar28 * 2;
            uVar19 = uVar12;
            do {
              uVar26 = uVar19;
              *(undefined2 *)(param_11 + uVar26 * 4) = *(undefined2 *)((uVar12 - 2) + lVar13);
              lVar29 = uVar12 - 4;
              uVar12 = uVar12 - 4;
              *(undefined2 *)(param_11 + 2 + uVar26 * 4) = *(undefined2 *)(lVar29 + lVar13);
              uVar19 = uVar26 + 1;
            } while (uVar19 < uVar15 >> 1);
            lVar13 = uVar26 + 2 + uVar19;
          }
          uVar12 = lVar13 - 1;
          if (uVar12 < uVar15) {
            *(undefined2 *)(param_11 + uVar12 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar28 - uVar12) * 2);
          }
        }
      }
      else if ((uVar23 == 6) && (0 < (longlong)uVar15)) {
        if ((longlong)uVar15 < 0x10) {
LAB_14097114a:
          uVar12 = 0;
        }
        else {
          if ((longlong)uVar15 < 0x1b9) {
            uVar19 = 0;
            uVar12 = uVar15 & 0xfffffffffffffff0;
          }
          else {
            uVar19 = param_11 & 0x1f;
            if (uVar19 != 0) {
              if ((param_11 & 1) != 0) goto LAB_14097114a;
              uVar19 = 0x20 - uVar19 >> 1;
            }
            if ((longlong)uVar15 < (longlong)(uVar19 + 0x10)) goto LAB_14097114a;
            uVar26 = 0;
            uVar12 = uVar15 - (uVar15 - uVar19 & 0xf);
            if (uVar19 != 0) {
              do {
                *(short *)(param_11 + uVar26 * 2) = sVar30;
                uVar26 = uVar26 + 1;
              } while (uVar26 < uVar19);
            }
          }
          do {
            psVar18 = (short *)(param_11 + uVar19 * 2);
            *psVar18 = sVar30;
            psVar18[1] = sVar30;
            psVar18[2] = sVar30;
            psVar18[3] = sVar30;
            psVar18[4] = sVar30;
            psVar18[5] = sVar30;
            psVar18[6] = sVar30;
            psVar18[7] = sVar30;
            psVar18[8] = sVar30;
            psVar18[9] = sVar30;
            psVar18[10] = sVar30;
            psVar18[0xb] = sVar30;
            psVar18[0xc] = sVar30;
            psVar18[0xd] = sVar30;
            psVar18[0xe] = sVar30;
            psVar18[0xf] = sVar30;
            uVar19 = uVar19 + 0x10;
          } while (uVar19 < uVar12);
        }
        for (; uVar12 < uVar15; uVar12 = uVar12 + 1) {
          *(short *)(param_11 + uVar12 * 2) = sVar30;
        }
      }
      (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(uVar9,param_4,uVar15,param_9,param_10);
      psVar22 = psVar22 + uVar15;
      lVar17 = lVar17 - uVar15;
      param_4 = param_4 + uVar15;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(psVar22,param_4,lVar17,param_9,param_10);
    return;
  }
  if ((longlong)uVar15 < lVar17) {
    lVar17 = lVar17 - uVar15;
    (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(psVar22,param_4,lVar17,param_9,param_10);
    psVar22 = psVar22 + lVar17;
    param_4 = param_4 + lVar17;
  }
  if (uVar15 == 1) {
    iVar20 = (int)psVar22[-1];
    if (uVar23 == 1) {
      iVar20 = iVar20 + *psVar22;
    }
    else if (uVar23 == 3) {
      iVar20 = iVar20 * 2;
    }
    else if (uVar23 == 6) {
      iVar20 = sVar30 + iVar20;
    }
    auVar38._0_4_ = (float)(int)*psVar22;
    auVar38._4_8_ = SUB128(ZEXT812(0),4);
    auVar38._12_4_ = 0;
    auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar20 * *param_9)),auVar38,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar47._0_4_;
    return;
  }
  if (uVar15 == 2) {
    iVar20 = (int)psVar22[-2];
    iVar16 = (int)psVar22[-1];
    iVar24 = (int)*psVar22;
    iVar21 = (int)psVar22[1];
    if (uVar23 == 1) {
      auVar44._0_4_ = (float)iVar24;
      auVar44._4_8_ = SUB128(ZEXT812(0),4);
      auVar44._12_4_ = 0;
      auVar34._0_4_ = (float)(iVar16 + iVar21);
      auVar34._4_8_ = SUB128(ZEXT812(0),4);
      auVar34._12_4_ = 0;
      auVar53._0_4_ = (float)iVar21;
      auVar53._4_8_ = SUB128(ZEXT812(0),4);
      auVar53._12_4_ = 0;
      auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar20 + iVar21) * *param_9)),auVar44,
                                ZEXT416((uint)param_9[2]));
      auVar47 = vfmadd231ss_fma(auVar47,auVar34,ZEXT416((uint)param_9[1]));
      *param_4 = auVar47._0_4_;
      auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar21 + iVar24) * param_9[1])),auVar34,
                                ZEXT416((uint)*param_9));
      auVar47 = vfmadd231ss_fma(auVar47,auVar53,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar47._0_4_;
      return;
    }
    if (uVar23 != 3) {
      if (uVar23 != 6) {
        return;
      }
      auVar43._0_4_ = (float)(iVar20 + sVar30);
      auVar43._4_8_ = SUB128(ZEXT812(0),4);
      auVar43._12_4_ = 0;
      auVar40._0_4_ = (float)iVar24;
      auVar40._4_8_ = SUB128(ZEXT812(0),4);
      auVar40._12_4_ = 0;
      auVar52._0_4_ = (float)iVar21;
      auVar52._4_8_ = SUB128(ZEXT812(0),4);
      auVar52._12_4_ = 0;
      auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar16 + iVar21) * param_9[1])),auVar40,
                                ZEXT416((uint)param_9[2]));
      auVar47 = vfmadd231ss_fma(auVar47,auVar43,ZEXT416((uint)*param_9));
      *param_4 = auVar47._0_4_;
      auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar16 + sVar30) * *param_9)),auVar52,
                                ZEXT416((uint)param_9[2]));
      auVar47 = vfmadd231ss_fma(auVar47,ZEXT416((uint)(float)(iVar24 + sVar30)),
                                ZEXT416((uint)param_9[1]));
      param_4[1] = auVar47._0_4_;
      return;
    }
    auVar39._0_4_ = (float)(iVar20 + iVar24);
    auVar39._4_8_ = SUB128(ZEXT812(0),4);
    auVar39._12_4_ = 0;
    auVar42._0_4_ = (float)(iVar16 + iVar21);
    auVar42._4_8_ = SUB128(ZEXT812(0),4);
    auVar42._12_4_ = 0;
    auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar24 * param_9[2])),auVar39,
                              ZEXT416((uint)*param_9));
    auVar51._0_4_ = (float)(iVar16 * 2);
    auVar51._4_8_ = SUB128(ZEXT812(0),4);
    auVar51._12_4_ = 0;
    auVar47 = vfmadd231ss_fma(auVar47,auVar42,ZEXT416((uint)param_9[1]));
    *param_4 = auVar47._0_4_;
    auVar47 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar24 * 2) * param_9[1])),auVar51,
                              ZEXT416((uint)*param_9));
    auVar47 = vfmadd231ss_fma(auVar47,ZEXT416((uint)(float)iVar21),ZEXT416((uint)param_9[2]));
    param_4[1] = auVar47._0_4_;
    return;
  }
  if (0 < (longlong)uVar10) {
    if (6 < (longlong)uVar10) {
      psVar18 = psVar22 + -uVar15;
      lVar17 = lVar28 * 2 + -2;
      if ((lVar17 <= (longlong)(param_11 - (longlong)psVar18)) ||
         (lVar17 <= (longlong)-(param_11 - (longlong)psVar18))) {
        if ((longlong)uVar10 < 0x10) {
LAB_140971168:
          uVar12 = 0;
        }
        else {
          if ((longlong)uVar10 < 0x2b9) {
            uVar9 = 0;
            uVar12 = uVar10 & 0xfffffffffffffff0;
          }
          else {
            uVar9 = param_11 & 0x1f;
            if (uVar9 != 0) {
              if ((param_11 & 1) != 0) goto LAB_140971168;
              uVar9 = 0x20 - uVar9 >> 1;
            }
            if ((longlong)uVar10 < (longlong)(uVar9 + 0x10)) goto LAB_140971168;
            uVar12 = uVar10 - (uVar10 - uVar9 & 0xf);
            uVar19 = 0;
            if (uVar9 != 0) {
              do {
                *(short *)(param_11 + uVar19 * 2) = psVar18[uVar19];
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar9);
            }
          }
          do {
            psVar22 = psVar18 + uVar9;
            uVar4 = *(undefined8 *)(psVar22 + 4);
            uVar5 = *(undefined8 *)(psVar22 + 8);
            uVar6 = *(undefined8 *)(psVar22 + 0xc);
            puVar1 = (undefined8 *)(param_11 + uVar9 * 2);
            *puVar1 = *(undefined8 *)psVar22;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            uVar9 = uVar9 + 0x10;
          } while (uVar9 < uVar12);
        }
        if (uVar12 + 1 <= uVar10) {
          uVar10 = uVar10 - uVar12;
          if ((longlong)uVar10 < 4) {
            uVar9 = 0;
          }
          else {
            uVar19 = 0;
            uVar9 = uVar10 & 0xfffffffffffffffc;
            do {
              *(undefined8 *)(param_11 + uVar12 * 2 + uVar19 * 2) =
                   *(undefined8 *)(psVar18 + uVar12 + uVar19);
              uVar19 = uVar19 + 4;
            } while (uVar19 < uVar9);
          }
          if (uVar9 < uVar10) {
            do {
              *(short *)(param_11 + uVar12 * 2 + uVar9 * 2) = psVar18[uVar12 + uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
        }
        goto LAB_140970c83;
      }
    }
    lVar17 = 1;
    uVar9 = lVar28 - 1U >> 1;
    uVar10 = 0;
    if (uVar9 != 0) {
      do {
        uVar12 = uVar10;
        *(short *)(param_11 + uVar12 * 4) = psVar22[uVar12 * 2 - uVar15];
        *(short *)(param_11 + 2 + uVar12 * 4) = psVar22[(uVar12 * 2 + 1) - uVar15];
        uVar10 = uVar12 + 1;
      } while (uVar10 < uVar9);
      lVar17 = uVar12 + 2 + uVar10;
    }
    uVar10 = lVar17 - 1;
    if (uVar10 < lVar28 - 1U) {
      *(short *)(param_11 + uVar10 * 2) = psVar22[uVar10 - uVar15];
    }
  }
LAB_140970c83:
  if (uVar23 == 1) {
    if ((longlong)uVar15 < 1) goto LAB_140970f7f;
    if (6 < (longlong)uVar15) {
      lVar17 = param_11 + lVar28 * 2;
      uVar10 = lVar17 - 2;
      lVar13 = uVar10 - (lVar17 + -4);
      if ((1 < lVar13) || ((longlong)(uVar15 * 2) <= -lVar13)) {
        uVar3 = *(undefined2 *)(lVar17 + -4);
        if ((longlong)uVar15 < 0x10) {
LAB_140971194:
          uVar10 = 0;
        }
        else {
          if ((longlong)uVar15 < 0x1b9) {
            uVar9 = 0;
            uVar10 = uVar15 & 0xfffffffffffffff0;
          }
          else {
            uVar9 = uVar10 & 0x1f;
            if (uVar9 != 0) {
              if ((uVar10 & 1) != 0) goto LAB_140971194;
              uVar9 = 0x20 - uVar9 >> 1;
            }
            if ((longlong)uVar15 < (longlong)(uVar9 + 0x10)) goto LAB_140971194;
            uVar12 = 0;
            uVar10 = uVar15 - (uVar15 - uVar9 & 0xf);
            if (uVar9 != 0) {
              do {
                *(undefined2 *)(lVar17 + -2 + uVar12 * 2) = uVar3;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar9);
            }
          }
          do {
            puVar2 = (undefined2 *)(lVar17 + -2 + uVar9 * 2);
            *puVar2 = uVar3;
            puVar2[1] = uVar3;
            puVar2[2] = uVar3;
            puVar2[3] = uVar3;
            puVar2[4] = uVar3;
            puVar2[5] = uVar3;
            puVar2[6] = uVar3;
            puVar2[7] = uVar3;
            puVar2[8] = uVar3;
            puVar2[9] = uVar3;
            puVar2[10] = uVar3;
            puVar2[0xb] = uVar3;
            puVar2[0xc] = uVar3;
            puVar2[0xd] = uVar3;
            puVar2[0xe] = uVar3;
            puVar2[0xf] = uVar3;
            uVar9 = uVar9 + 0x10;
          } while (uVar9 < uVar10);
        }
        for (; uVar10 < uVar15; uVar10 = uVar10 + 1) {
          *(undefined2 *)(lVar17 + -2 + uVar10 * 2) = uVar3;
        }
        goto LAB_140970f7f;
      }
    }
    lVar17 = 1;
    if (uVar15 >> 1 != 0) {
      lVar17 = param_11 + lVar28 * 2;
      uVar10 = 0;
      do {
        uVar9 = uVar10;
        *(undefined2 *)(lVar17 + -2 + uVar9 * 4) = *(undefined2 *)(lVar17 + -4);
        *(undefined2 *)(lVar17 + uVar9 * 4) = *(undefined2 *)(lVar17 + -4);
        uVar10 = uVar9 + 1;
      } while (uVar10 < uVar15 >> 1);
      lVar17 = uVar9 + 2 + uVar10;
    }
    if (lVar17 - 1U < uVar15) {
      *(undefined2 *)((param_11 - 2) + (lVar28 + -1 + lVar17) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar28 * 2);
    }
    goto LAB_140970f7f;
  }
  if (uVar23 == 3) {
    if (0 < (longlong)uVar15) {
      lVar17 = 1;
      lVar13 = 0;
      if (uVar15 >> 1 != 0) {
        lVar17 = param_11 + lVar28 * 2;
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          *(undefined2 *)(lVar17 + -2 + uVar9 * 4) = *(undefined2 *)(lVar13 + -6 + lVar17);
          lVar29 = lVar13 + -8;
          lVar13 = lVar13 + -4;
          *(undefined2 *)(lVar17 + uVar9 * 4) = *(undefined2 *)(lVar29 + lVar17);
          uVar10 = uVar9 + 1;
        } while (uVar10 < uVar15 >> 1);
        lVar17 = uVar9 + 2 + uVar10;
      }
      if (lVar17 - 1U < uVar15) {
        *(undefined2 *)((param_11 - 2) + (lVar28 + -1 + lVar17) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar28 - (lVar17 - 1U)) * 2);
      }
    }
    goto LAB_140970f7f;
  }
  if ((uVar23 != 6) || ((longlong)uVar15 < 1)) goto LAB_140970f7f;
  if ((longlong)uVar15 < 0x10) {
LAB_14097117f:
    uVar9 = 0;
  }
  else {
    lVar17 = param_11 + lVar28 * 2;
    if ((longlong)uVar15 < 0x1b9) {
      uVar10 = 0;
      uVar9 = uVar15 & 0xfffffffffffffff0;
    }
    else {
      uVar10 = lVar17 - 2U & 0x1f;
      if (uVar10 != 0) {
        if ((lVar17 - 2U & 1) != 0) goto LAB_14097117f;
        uVar10 = 0x20 - uVar10 >> 1;
      }
      if ((longlong)uVar15 < (longlong)(uVar10 + 0x10)) goto LAB_14097117f;
      uVar12 = 0;
      uVar9 = uVar15 - (uVar15 - uVar10 & 0xf);
      if (uVar10 != 0) {
        do {
          *(short *)(lVar17 + -2 + uVar12 * 2) = sVar30;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar10);
      }
    }
    do {
      psVar22 = (short *)(lVar17 + -2 + uVar10 * 2);
      *psVar22 = sVar30;
      psVar22[1] = sVar30;
      psVar22[2] = sVar30;
      psVar22[3] = sVar30;
      psVar22[4] = sVar30;
      psVar22[5] = sVar30;
      psVar22[6] = sVar30;
      psVar22[7] = sVar30;
      psVar22[8] = sVar30;
      psVar22[9] = sVar30;
      psVar22[10] = sVar30;
      psVar22[0xb] = sVar30;
      psVar22[0xc] = sVar30;
      psVar22[0xd] = sVar30;
      psVar22[0xe] = sVar30;
      psVar22[0xf] = sVar30;
      uVar10 = uVar10 + 0x10;
    } while (uVar10 < uVar9);
  }
  if (uVar9 < uVar15) {
    do {
      *(short *)(param_11 + lVar28 * 2 + -2 + uVar9 * 2) = sVar30;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar15);
  }
LAB_140970f7f:
  (*(code *)(&PTR_FUN_14308d9e0)[lVar8])(param_11 + uVar15 * 2,param_4,uVar15,param_9,param_10);
  return;
}

