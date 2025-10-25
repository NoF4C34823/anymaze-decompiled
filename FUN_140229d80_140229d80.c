
void FUN_140229d80(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ushort *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ushort uVar26;
  longlong lVar27;
  longlong lVar28;
  ushort uVar29;
  undefined1 auVar30 [16];
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
  
  param_2 = param_2 * param_3;
  puVar20 = (ushort *)(param_1 + param_2);
  uVar12 = 0;
  lVar9 = (longlong)param_6;
  lVar27 = (longlong)param_10;
  uVar21 = param_7 & 0xf;
  uVar16 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_143088560 + lVar9 * 8))(puVar20,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar21 == 6) {
    uVar12 = (uint)*param_8;
  }
  lVar17 = *param_5;
  uVar11 = lVar27 - 1;
  uVar29 = (ushort)uVar12;
  if (lVar17 < (longlong)uVar11) {
    lVar27 = -uVar16;
    lVar14 = 0;
    if (lVar27 < (longlong)(uVar16 + lVar17)) {
      uVar12 = param_7 & 0x80;
      uVar15 = param_7 & 0x40;
      do {
        lVar28 = lVar27;
        if (((lVar27 < 0) || (lVar17 <= lVar27)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar27 < 0) {
                lVar28 = 0;
                if (uVar15 != 0) {
                  lVar28 = lVar27;
                }
              }
              else if (uVar12 == 0) {
                lVar28 = lVar17 + -1;
              }
            }
            else if (uVar21 == 3) {
              if (lVar17 < 2) {
                if (lVar27 < 0) {
                  if (uVar15 == 0) {
                    lVar28 = -lVar27;
                    if (uVar12 == 0) {
                      lVar28 = 0;
                    }
                  }
                }
                else if ((0 < lVar27) && (uVar12 == 0)) {
                  lVar28 = -lVar27;
                  if (uVar15 == 0) {
                    lVar28 = 0;
                  }
                }
              }
              else if ((lVar27 < 0) || (lVar17 <= lVar27)) {
                if (lVar27 < 0) goto LAB_14022af00;
                while (uVar12 == 0) {
                  for (lVar28 = (lVar17 + -1) * 2 - lVar28; lVar28 < 0; lVar28 = -lVar28) {
LAB_14022af00:
                    if (uVar15 != 0) goto LAB_14022ada2;
                  }
                  if (lVar28 < lVar17) break;
                }
              }
            }
            goto LAB_14022ada2;
          }
          uVar25 = uVar15;
          if (-1 < lVar27) {
            uVar25 = uVar12;
          }
          uVar26 = uVar29;
          if (uVar25 != 0) goto LAB_14022ada2;
        }
        else {
LAB_14022ada2:
          uVar26 = puVar20[lVar28];
        }
        lVar27 = lVar27 + 1;
        *(ushort *)(param_11 + lVar14 * 2) = uVar26;
        lVar14 = lVar14 + 1;
      } while (lVar27 < (longlong)(uVar16 + lVar17));
    }
    (**(code **)(&UNK_143088560 + lVar9 * 8))(param_11 + uVar16 * 2,param_4,lVar17,param_9,param_10)
    ;
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar16 == 1) {
      uVar26 = puVar20[1];
      if (uVar21 == 1) {
        uVar15 = (uint)uVar26 + (uint)*puVar20;
      }
      else if (uVar21 == 3) {
        uVar15 = (uint)uVar26 * 2;
      }
      else {
        uVar15 = (uint)uVar26;
        if (uVar21 == 6) {
          uVar15 = uVar26 + uVar12;
        }
      }
      auVar34._0_4_ = (float)*puVar20;
      auVar34._4_8_ = SUB128(ZEXT812(0),4);
      auVar34._12_4_ = 0;
      puVar20 = (ushort *)(param_1 + 2 + param_2);
      lVar17 = lVar17 + -1;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar15 * *param_9)),auVar34,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar46._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar16 == 2) {
      uVar26 = puVar20[2];
      uVar15 = (uint)puVar20[1];
      uVar3 = *puVar20;
      uVar4 = puVar20[3];
      uVar25 = (uint)uVar26;
      if (uVar21 == 1) {
        uVar23 = (uint)uVar3;
        auVar32._0_4_ = (float)(uVar4 + uVar23);
        auVar32._4_8_ = SUB128(ZEXT812(0),4);
        auVar32._12_4_ = 0;
        auVar46._0_4_ = (float)uVar23;
        auVar46._4_8_ = SUB128(ZEXT812(0),4);
        auVar46._12_4_ = 0;
        auVar49._0_4_ = (float)(uVar25 + uVar23);
        auVar49._4_8_ = SUB128(ZEXT812(0),4);
        auVar49._12_4_ = 0;
        auVar36._0_4_ = (float)uVar15;
        auVar36._4_8_ = SUB128(ZEXT812(0),4);
        auVar36._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar23 + uVar15) * param_9[1])),auVar46,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar49,ZEXT416((uint)*param_9));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)(auVar49._0_4_ * param_9[1])),auVar36,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar32,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      else if (uVar21 == 3) {
        auVar35._0_4_ = (float)uVar15;
        auVar35._4_8_ = SUB128(ZEXT812(0),4);
        auVar35._12_4_ = 0;
        auVar44._0_4_ = (float)uVar3;
        auVar44._4_8_ = SUB128(ZEXT812(0),4);
        auVar44._12_4_ = 0;
        auVar30._0_4_ = (float)(uVar4 + uVar15);
        auVar30._4_8_ = SUB128(ZEXT812(0),4);
        auVar30._12_4_ = 0;
        auVar47._0_4_ = (float)(uVar25 * 2);
        auVar47._4_8_ = SUB128(ZEXT812(0),4);
        auVar47._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar15 * 2) * param_9[1])),auVar44,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar47,ZEXT416((uint)*param_9));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar3 + uVar25) * param_9[1])),auVar35,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar30,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      else if (uVar21 == 6) {
        auVar45._0_4_ = (float)(uVar4 + uVar12);
        auVar45._4_8_ = SUB128(ZEXT812(0),4);
        auVar45._12_4_ = 0;
        auVar48._0_4_ = (float)uVar3;
        auVar48._4_8_ = SUB128(ZEXT812(0),4);
        auVar48._12_4_ = 0;
        auVar40._0_4_ = (float)uVar15;
        auVar40._4_8_ = SUB128(ZEXT812(0),4);
        auVar40._12_4_ = 0;
        auVar31._0_4_ = (float)(uVar15 + uVar12);
        auVar31._4_8_ = SUB128(ZEXT812(0),4);
        auVar31._12_4_ = 0;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar26 + uVar12) * *param_9)),auVar48,
                                  ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar31,ZEXT416((uint)param_9[1]));
        *param_4 = auVar46._0_4_;
        auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)uVar3 + (uint)uVar26) * param_9[1])),
                                  auVar40,ZEXT416((uint)param_9[2]));
        auVar46 = vfmadd231ss_fma(auVar46,auVar45,ZEXT416((uint)*param_9));
        param_4[1] = auVar46._0_4_;
      }
      param_4 = param_4 + 2;
      puVar20 = (ushort *)(param_1 + 4 + param_2);
      lVar17 = lVar17 + -2;
    }
    else {
      uVar10 = param_11 + uVar16 * 2;
      if (0 < (longlong)uVar11) {
        if (6 < (longlong)uVar11) {
          lVar14 = lVar27 * 2 + -2;
          if ((lVar14 <= (longlong)(uVar10 - (longlong)puVar20)) ||
             (lVar14 <= (longlong)-(uVar10 - (longlong)puVar20))) {
            if ((longlong)uVar11 < 0x10) {
LAB_14022ae11:
              uVar19 = 0;
            }
            else {
              if ((longlong)uVar11 < 0x2b9) {
                uVar13 = 0;
                uVar19 = uVar11 & 0xfffffffffffffff0;
              }
              else {
                uVar13 = uVar10 & 0x1f;
                if (uVar13 != 0) {
                  if ((uVar10 & 1) != 0) goto LAB_14022ae11;
                  uVar13 = 0x20 - uVar13 >> 1;
                }
                if ((longlong)uVar11 < (longlong)(uVar13 + 0x10)) goto LAB_14022ae11;
                uVar19 = uVar11 - (uVar11 - uVar13 & 0xf);
                uVar24 = 0;
                if (uVar13 != 0) {
                  do {
                    *(ushort *)(uVar10 + uVar24 * 2) = puVar20[uVar24];
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar13);
                }
              }
              do {
                puVar18 = puVar20 + uVar13;
                uVar6 = *(undefined8 *)(puVar18 + 4);
                uVar7 = *(undefined8 *)(puVar18 + 8);
                uVar8 = *(undefined8 *)(puVar18 + 0xc);
                puVar1 = (undefined8 *)(uVar10 + uVar13 * 2);
                *puVar1 = *(undefined8 *)puVar18;
                puVar1[1] = uVar6;
                puVar1[2] = uVar7;
                puVar1[3] = uVar8;
                uVar13 = uVar13 + 0x10;
              } while (uVar13 < uVar19);
            }
            if (uVar19 + 1 <= uVar11) {
              uVar13 = uVar11 - uVar19;
              if ((longlong)uVar13 < 4) {
                uVar24 = 0;
              }
              else {
                uVar24 = uVar13 & 0xfffffffffffffffc;
                uVar22 = 0;
                do {
                  *(undefined8 *)(uVar10 + uVar19 * 2 + uVar22 * 2) =
                       *(undefined8 *)(puVar20 + uVar19 + uVar22);
                  uVar22 = uVar22 + 4;
                } while (uVar22 < uVar24);
              }
              if (uVar24 < uVar13) {
                do {
                  *(ushort *)(uVar10 + uVar19 * 2 + uVar24 * 2) = puVar20[uVar19 + uVar24];
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar13);
              }
            }
            goto LAB_14022a263;
          }
        }
        lVar14 = 1;
        uVar19 = lVar27 - 1U >> 1;
        uVar13 = 0;
        if (uVar19 != 0) {
          do {
            uVar24 = uVar13;
            *(ushort *)(uVar10 + uVar24 * 4) = puVar20[uVar24 * 2];
            *(ushort *)(uVar10 + 2 + uVar24 * 4) = puVar20[uVar24 * 2 + 1];
            uVar13 = uVar24 + 1;
          } while (uVar13 < uVar19);
          lVar14 = uVar24 + 2 + uVar13;
        }
        if (lVar14 - 1U < lVar27 - 1U) {
          *(ushort *)(param_11 + ((uVar16 - 1) + lVar14) * 2) = puVar20[lVar14 - 1U];
        }
      }
LAB_14022a263:
      if (uVar21 == 1) {
        if (0 < (longlong)uVar16) {
          uVar5 = *(undefined2 *)(param_11 + uVar16 * 2);
          if ((longlong)uVar16 < 0x10) {
LAB_14022aec4:
            uVar13 = 0;
          }
          else {
            if ((longlong)uVar16 < 0x1b9) {
              uVar19 = 0;
              uVar13 = uVar16 & 0xfffffffffffffff0;
            }
            else {
              uVar19 = param_11 & 0x1f;
              if (uVar19 != 0) {
                if ((param_11 & 1) != 0) goto LAB_14022aec4;
                uVar19 = 0x20 - uVar19 >> 1;
              }
              if ((longlong)uVar16 < (longlong)(uVar19 + 0x10)) goto LAB_14022aec4;
              uVar24 = 0;
              uVar13 = uVar16 - (uVar16 - uVar19 & 0xf);
              if (uVar19 != 0) {
                do {
                  *(undefined2 *)(param_11 + uVar24 * 2) = uVar5;
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar19);
              }
            }
            do {
              puVar2 = (undefined2 *)(param_11 + uVar19 * 2);
              *puVar2 = uVar5;
              puVar2[1] = uVar5;
              puVar2[2] = uVar5;
              puVar2[3] = uVar5;
              puVar2[4] = uVar5;
              puVar2[5] = uVar5;
              puVar2[6] = uVar5;
              puVar2[7] = uVar5;
              puVar2[8] = uVar5;
              puVar2[9] = uVar5;
              puVar2[10] = uVar5;
              puVar2[0xb] = uVar5;
              puVar2[0xc] = uVar5;
              puVar2[0xd] = uVar5;
              puVar2[0xe] = uVar5;
              puVar2[0xf] = uVar5;
              uVar19 = uVar19 + 0x10;
            } while (uVar19 < uVar13);
          }
          for (; uVar13 < uVar16; uVar13 = uVar13 + 1) {
            *(undefined2 *)(param_11 + uVar13 * 2) = uVar5;
          }
        }
      }
      else if (uVar21 == 3) {
        if (0 < (longlong)uVar16) {
          uVar13 = 0;
          lVar14 = 1;
          if (uVar16 >> 1 != 0) {
            lVar14 = param_11 + lVar27 * 2;
            uVar19 = uVar13;
            do {
              uVar24 = uVar19;
              *(undefined2 *)(param_11 + uVar24 * 4) = *(undefined2 *)((uVar13 - 2) + lVar14);
              lVar28 = uVar13 - 4;
              uVar13 = uVar13 - 4;
              *(undefined2 *)(param_11 + 2 + uVar24 * 4) = *(undefined2 *)(lVar28 + lVar14);
              uVar19 = uVar24 + 1;
            } while (uVar19 < uVar16 >> 1);
            lVar14 = uVar24 + 2 + uVar19;
          }
          uVar13 = lVar14 - 1;
          if (uVar13 < uVar16) {
            *(undefined2 *)(param_11 + uVar13 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar27 - uVar13) * 2);
          }
        }
      }
      else if ((uVar21 == 6) && (0 < (longlong)uVar16)) {
        if ((longlong)uVar16 < 0x10) {
LAB_14022ae2a:
          uVar13 = 0;
        }
        else {
          if ((longlong)uVar16 < 0x1b9) {
            uVar19 = 0;
            uVar13 = uVar16 & 0xfffffffffffffff0;
          }
          else {
            uVar19 = param_11 & 0x1f;
            if (uVar19 != 0) {
              if ((param_11 & 1) != 0) goto LAB_14022ae2a;
              uVar19 = 0x20 - uVar19 >> 1;
            }
            if ((longlong)uVar16 < (longlong)(uVar19 + 0x10)) goto LAB_14022ae2a;
            uVar24 = 0;
            uVar13 = uVar16 - (uVar16 - uVar19 & 0xf);
            if (uVar19 != 0) {
              do {
                *(ushort *)(param_11 + uVar24 * 2) = uVar29;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar19);
            }
          }
          do {
            puVar18 = (ushort *)(param_11 + uVar19 * 2);
            *puVar18 = uVar29;
            puVar18[1] = uVar29;
            puVar18[2] = uVar29;
            puVar18[3] = uVar29;
            puVar18[4] = uVar29;
            puVar18[5] = uVar29;
            puVar18[6] = uVar29;
            puVar18[7] = uVar29;
            puVar18[8] = uVar29;
            puVar18[9] = uVar29;
            puVar18[10] = uVar29;
            puVar18[0xb] = uVar29;
            puVar18[0xc] = uVar29;
            puVar18[0xd] = uVar29;
            puVar18[0xe] = uVar29;
            puVar18[0xf] = uVar29;
            uVar19 = uVar19 + 0x10;
          } while (uVar19 < uVar13);
        }
        for (; uVar13 < uVar16; uVar13 = uVar13 + 1) {
          *(ushort *)(param_11 + uVar13 * 2) = uVar29;
        }
      }
      (**(code **)(&UNK_143088560 + lVar9 * 8))(uVar10,param_4,uVar16,param_9,param_10);
      puVar20 = puVar20 + uVar16;
      lVar17 = lVar17 - uVar16;
      param_4 = param_4 + uVar16;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (**(code **)(&UNK_143088560 + lVar9 * 8))(puVar20,param_4,lVar17,param_9,param_10);
    return;
  }
  if ((longlong)uVar16 < lVar17) {
    lVar17 = lVar17 - uVar16;
    (**(code **)(&UNK_143088560 + lVar9 * 8))(puVar20,param_4,lVar17,param_9,param_10);
    puVar20 = puVar20 + lVar17;
    param_4 = param_4 + lVar17;
  }
  if (uVar16 == 1) {
    uVar15 = (uint)puVar20[-1];
    if (uVar21 == 1) {
      uVar15 = uVar15 + *puVar20;
    }
    else if (uVar21 == 3) {
      uVar15 = uVar15 * 2;
    }
    else if (uVar21 == 6) {
      uVar15 = uVar12 + uVar15;
    }
    auVar37._0_4_ = (float)*puVar20;
    auVar37._4_8_ = SUB128(ZEXT812(0),4);
    auVar37._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar15 * *param_9)),auVar37,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar46._0_4_;
    return;
  }
  if (uVar16 == 2) {
    uVar29 = puVar20[-2];
    uVar26 = puVar20[-1];
    uVar3 = *puVar20;
    uVar4 = puVar20[1];
    uVar15 = (uint)uVar3;
    if (uVar21 == 1) {
      uVar21 = (uint)uVar4;
      auVar43._0_4_ = (float)uVar15;
      auVar43._4_8_ = SUB128(ZEXT812(0),4);
      auVar43._12_4_ = 0;
      auVar33._0_4_ = (float)(uVar26 + uVar21);
      auVar33._4_8_ = SUB128(ZEXT812(0),4);
      auVar33._12_4_ = 0;
      auVar52._0_4_ = (float)uVar21;
      auVar52._4_8_ = SUB128(ZEXT812(0),4);
      auVar52._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar29 + uVar21) * *param_9)),auVar43,
                                ZEXT416((uint)param_9[2]));
      auVar46 = vfmadd231ss_fma(auVar46,auVar33,ZEXT416((uint)param_9[1]));
      *param_4 = auVar46._0_4_;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar21 + uVar15) * param_9[1])),auVar33,
                                ZEXT416((uint)*param_9));
      auVar46 = vfmadd231ss_fma(auVar46,auVar52,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar46._0_4_;
      return;
    }
    if (uVar21 != 3) {
      if (uVar21 != 6) {
        return;
      }
      auVar39._0_4_ = (float)uVar15;
      auVar39._4_8_ = SUB128(ZEXT812(0),4);
      auVar39._12_4_ = 0;
      auVar42._0_4_ = (float)(uVar29 + uVar12);
      auVar42._4_8_ = SUB128(ZEXT812(0),4);
      auVar42._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)uVar26 + (uint)uVar4) * param_9[1])),
                                auVar39,ZEXT416((uint)param_9[2]));
      auVar51._0_4_ = (float)uVar4;
      auVar51._4_8_ = SUB128(ZEXT812(0),4);
      auVar51._12_4_ = 0;
      auVar46 = vfmadd231ss_fma(auVar46,auVar42,ZEXT416((uint)*param_9));
      *param_4 = auVar46._0_4_;
      auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar26 + uVar12) * *param_9)),auVar51,
                                ZEXT416((uint)param_9[2]));
      auVar46 = vfmadd231ss_fma(auVar46,ZEXT416((uint)(float)(uVar15 + uVar12)),
                                ZEXT416((uint)param_9[1]));
      param_4[1] = auVar46._0_4_;
      return;
    }
    auVar38._0_4_ = (float)((uint)uVar29 + (uint)uVar3);
    auVar38._4_8_ = SUB128(ZEXT812(0),4);
    auVar38._12_4_ = 0;
    auVar41._0_4_ = (float)((uint)uVar26 + (uint)uVar4);
    auVar41._4_8_ = SUB128(ZEXT812(0),4);
    auVar41._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar3 * param_9[2])),auVar38,
                              ZEXT416((uint)*param_9));
    auVar50._0_4_ = (float)((uint)uVar26 * 2);
    auVar50._4_8_ = SUB128(ZEXT812(0),4);
    auVar50._12_4_ = 0;
    auVar46 = vfmadd231ss_fma(auVar46,auVar41,ZEXT416((uint)param_9[1]));
    *param_4 = auVar46._0_4_;
    auVar46 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)uVar3 * 2) * param_9[1])),auVar50,
                              ZEXT416((uint)*param_9));
    auVar46 = vfmadd231ss_fma(auVar46,ZEXT416((uint)(float)uVar4),ZEXT416((uint)param_9[2]));
    param_4[1] = auVar46._0_4_;
    return;
  }
  if (0 < (longlong)uVar11) {
    if (6 < (longlong)uVar11) {
      puVar18 = puVar20 + -uVar16;
      lVar17 = lVar27 * 2 + -2;
      if ((lVar17 <= (longlong)(param_11 - (longlong)puVar18)) ||
         (lVar17 <= (longlong)-(param_11 - (longlong)puVar18))) {
        if ((longlong)uVar11 < 0x10) {
LAB_14022ae48:
          uVar13 = 0;
        }
        else {
          if ((longlong)uVar11 < 0x2b9) {
            uVar10 = 0;
            uVar13 = uVar11 & 0xfffffffffffffff0;
          }
          else {
            uVar10 = param_11 & 0x1f;
            if (uVar10 != 0) {
              if ((param_11 & 1) != 0) goto LAB_14022ae48;
              uVar10 = 0x20 - uVar10 >> 1;
            }
            if ((longlong)uVar11 < (longlong)(uVar10 + 0x10)) goto LAB_14022ae48;
            uVar13 = uVar11 - (uVar11 - uVar10 & 0xf);
            uVar19 = 0;
            if (uVar10 != 0) {
              do {
                *(ushort *)(param_11 + uVar19 * 2) = puVar18[uVar19];
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar10);
            }
          }
          do {
            puVar20 = puVar18 + uVar10;
            uVar6 = *(undefined8 *)(puVar20 + 4);
            uVar7 = *(undefined8 *)(puVar20 + 8);
            uVar8 = *(undefined8 *)(puVar20 + 0xc);
            puVar1 = (undefined8 *)(param_11 + uVar10 * 2);
            *puVar1 = *(undefined8 *)puVar20;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar13);
        }
        if (uVar13 + 1 <= uVar11) {
          uVar11 = uVar11 - uVar13;
          if ((longlong)uVar11 < 4) {
            uVar10 = 0;
          }
          else {
            uVar19 = 0;
            uVar10 = uVar11 & 0xfffffffffffffffc;
            do {
              *(undefined8 *)(param_11 + uVar13 * 2 + uVar19 * 2) =
                   *(undefined8 *)(puVar18 + uVar13 + uVar19);
              uVar19 = uVar19 + 4;
            } while (uVar19 < uVar10);
          }
          if (uVar10 < uVar11) {
            do {
              *(ushort *)(param_11 + uVar13 * 2 + uVar10 * 2) = puVar18[uVar13 + uVar10];
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
          }
        }
        goto LAB_14022a963;
      }
    }
    lVar17 = 1;
    uVar10 = lVar27 - 1U >> 1;
    uVar11 = 0;
    if (uVar10 != 0) {
      do {
        uVar13 = uVar11;
        *(ushort *)(param_11 + uVar13 * 4) = puVar20[uVar13 * 2 - uVar16];
        *(ushort *)(param_11 + 2 + uVar13 * 4) = puVar20[(uVar13 * 2 + 1) - uVar16];
        uVar11 = uVar13 + 1;
      } while (uVar11 < uVar10);
      lVar17 = uVar13 + 2 + uVar11;
    }
    uVar11 = lVar17 - 1;
    if (uVar11 < lVar27 - 1U) {
      *(ushort *)(param_11 + uVar11 * 2) = puVar20[uVar11 - uVar16];
    }
  }
LAB_14022a963:
  if (uVar21 == 1) {
    if ((longlong)uVar16 < 1) goto LAB_14022ac5f;
    if (6 < (longlong)uVar16) {
      lVar17 = param_11 + lVar27 * 2;
      uVar11 = lVar17 - 2;
      lVar14 = uVar11 - (lVar17 + -4);
      if ((1 < lVar14) || ((longlong)(uVar16 * 2) <= -lVar14)) {
        uVar5 = *(undefined2 *)(lVar17 + -4);
        if ((longlong)uVar16 < 0x10) {
LAB_14022ae74:
          uVar11 = 0;
        }
        else {
          if ((longlong)uVar16 < 0x1b9) {
            uVar10 = 0;
            uVar11 = uVar16 & 0xfffffffffffffff0;
          }
          else {
            uVar10 = uVar11 & 0x1f;
            if (uVar10 != 0) {
              if ((uVar11 & 1) != 0) goto LAB_14022ae74;
              uVar10 = 0x20 - uVar10 >> 1;
            }
            if ((longlong)uVar16 < (longlong)(uVar10 + 0x10)) goto LAB_14022ae74;
            uVar13 = 0;
            uVar11 = uVar16 - (uVar16 - uVar10 & 0xf);
            if (uVar10 != 0) {
              do {
                *(undefined2 *)(lVar17 + -2 + uVar13 * 2) = uVar5;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar10);
            }
          }
          do {
            puVar2 = (undefined2 *)(lVar17 + -2 + uVar10 * 2);
            *puVar2 = uVar5;
            puVar2[1] = uVar5;
            puVar2[2] = uVar5;
            puVar2[3] = uVar5;
            puVar2[4] = uVar5;
            puVar2[5] = uVar5;
            puVar2[6] = uVar5;
            puVar2[7] = uVar5;
            puVar2[8] = uVar5;
            puVar2[9] = uVar5;
            puVar2[10] = uVar5;
            puVar2[0xb] = uVar5;
            puVar2[0xc] = uVar5;
            puVar2[0xd] = uVar5;
            puVar2[0xe] = uVar5;
            puVar2[0xf] = uVar5;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar11);
        }
        for (; uVar11 < uVar16; uVar11 = uVar11 + 1) {
          *(undefined2 *)(lVar17 + -2 + uVar11 * 2) = uVar5;
        }
        goto LAB_14022ac5f;
      }
    }
    lVar17 = 1;
    if (uVar16 >> 1 != 0) {
      lVar17 = param_11 + lVar27 * 2;
      uVar11 = 0;
      do {
        uVar10 = uVar11;
        *(undefined2 *)(lVar17 + -2 + uVar10 * 4) = *(undefined2 *)(lVar17 + -4);
        *(undefined2 *)(lVar17 + uVar10 * 4) = *(undefined2 *)(lVar17 + -4);
        uVar11 = uVar10 + 1;
      } while (uVar11 < uVar16 >> 1);
      lVar17 = uVar10 + 2 + uVar11;
    }
    if (lVar17 - 1U < uVar16) {
      *(undefined2 *)((param_11 - 2) + (lVar27 + -1 + lVar17) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar27 * 2);
    }
    goto LAB_14022ac5f;
  }
  if (uVar21 == 3) {
    if (0 < (longlong)uVar16) {
      lVar17 = 1;
      lVar14 = 0;
      if (uVar16 >> 1 != 0) {
        lVar17 = param_11 + lVar27 * 2;
        uVar11 = 0;
        do {
          uVar10 = uVar11;
          *(undefined2 *)(lVar17 + -2 + uVar10 * 4) = *(undefined2 *)(lVar14 + -6 + lVar17);
          lVar28 = lVar14 + -8;
          lVar14 = lVar14 + -4;
          *(undefined2 *)(lVar17 + uVar10 * 4) = *(undefined2 *)(lVar28 + lVar17);
          uVar11 = uVar10 + 1;
        } while (uVar11 < uVar16 >> 1);
        lVar17 = uVar10 + 2 + uVar11;
      }
      if (lVar17 - 1U < uVar16) {
        *(undefined2 *)((param_11 - 2) + (lVar27 + -1 + lVar17) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar27 - (lVar17 - 1U)) * 2);
      }
    }
    goto LAB_14022ac5f;
  }
  if ((uVar21 != 6) || ((longlong)uVar16 < 1)) goto LAB_14022ac5f;
  if ((longlong)uVar16 < 0x10) {
LAB_14022ae5f:
    uVar10 = 0;
  }
  else {
    lVar17 = param_11 + lVar27 * 2;
    if ((longlong)uVar16 < 0x1b9) {
      uVar11 = 0;
      uVar10 = uVar16 & 0xfffffffffffffff0;
    }
    else {
      uVar11 = lVar17 - 2U & 0x1f;
      if (uVar11 != 0) {
        if ((lVar17 - 2U & 1) != 0) goto LAB_14022ae5f;
        uVar11 = 0x20 - uVar11 >> 1;
      }
      if ((longlong)uVar16 < (longlong)(uVar11 + 0x10)) goto LAB_14022ae5f;
      uVar13 = 0;
      uVar10 = uVar16 - (uVar16 - uVar11 & 0xf);
      if (uVar11 != 0) {
        do {
          *(ushort *)(lVar17 + -2 + uVar13 * 2) = uVar29;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
      }
    }
    do {
      puVar20 = (ushort *)(lVar17 + -2 + uVar11 * 2);
      *puVar20 = uVar29;
      puVar20[1] = uVar29;
      puVar20[2] = uVar29;
      puVar20[3] = uVar29;
      puVar20[4] = uVar29;
      puVar20[5] = uVar29;
      puVar20[6] = uVar29;
      puVar20[7] = uVar29;
      puVar20[8] = uVar29;
      puVar20[9] = uVar29;
      puVar20[10] = uVar29;
      puVar20[0xb] = uVar29;
      puVar20[0xc] = uVar29;
      puVar20[0xd] = uVar29;
      puVar20[0xe] = uVar29;
      puVar20[0xf] = uVar29;
      uVar11 = uVar11 + 0x10;
    } while (uVar11 < uVar10);
  }
  if (uVar10 < uVar16) {
    do {
      *(ushort *)(param_11 + lVar27 * 2 + -2 + uVar10 * 2) = uVar29;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar16);
  }
LAB_14022ac5f:
  (**(code **)(&UNK_143088560 + lVar9 * 8))(param_11 + uVar16 * 2,param_4,uVar16,param_9,param_10);
  return;
}

