
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140998920(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  short sVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  short sVar27;
  short *psVar28;
  ushort uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar31 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
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
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 in_ZMM16 [64];
  undefined1 auVar34 [32];
  
  auVar40 = _DAT_14308dc40;
  auVar30 = in_ZMM16._0_16_;
  param_2 = param_2 * param_3;
  psVar28 = (short *)(param_1 + param_2);
  lVar6 = (longlong)param_6;
  sVar27 = 0;
  lVar13 = (longlong)param_10;
  uVar17 = param_7 & 0xf;
  uVar14 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308df00)[lVar6])(psVar28,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar17 == 6) {
    sVar27 = *param_8;
  }
  lVar20 = *param_5;
  uVar18 = lVar13 - 1;
  if (lVar20 < (longlong)uVar18) {
    lVar13 = -uVar14;
    lVar10 = 0;
    if (lVar13 < (longlong)(uVar14 + lVar20)) {
      uVar16 = param_7 & 0x80;
      uVar25 = param_7 & 0x40;
      do {
        lVar8 = lVar13;
        if (((lVar13 < 0) || (lVar20 <= lVar13)) && (param_7 != 0xf0)) {
          if (uVar17 != 6) {
            if (uVar17 == 1) {
              if (lVar13 < 0) {
                lVar8 = 0;
                if (uVar25 != 0) {
                  lVar8 = lVar13;
                }
              }
              else if (uVar16 == 0) {
                lVar8 = lVar20 + -1;
              }
            }
            else if (uVar17 == 3) {
              if (lVar20 < 2) {
                if (lVar13 < 0) {
                  if (uVar25 == 0) {
                    lVar8 = -lVar13;
                    if (uVar16 == 0) {
                      lVar8 = 0;
                    }
                  }
                }
                else if ((0 < lVar13) && (uVar16 == 0)) {
                  lVar8 = -lVar13;
                  if (uVar25 == 0) {
                    lVar8 = 0;
                  }
                }
              }
              else if ((lVar13 < 0) || (lVar20 <= lVar13)) {
                if (lVar13 < 0) goto LAB_140999e20;
                while (uVar16 == 0) {
                  for (lVar8 = (lVar20 + -1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_140999e20:
                    if (uVar25 != 0) goto LAB_140999ce3;
                  }
                  if (lVar8 < lVar20) break;
                }
              }
            }
            goto LAB_140999ce3;
          }
          uVar5 = uVar25;
          if (-1 < lVar13) {
            uVar5 = uVar16;
          }
          sVar12 = sVar27;
          if (uVar5 != 0) goto LAB_140999ce3;
        }
        else {
LAB_140999ce3:
          sVar12 = psVar28[lVar8];
        }
        lVar13 = lVar13 + 1;
        *(short *)(param_11 + lVar10 * 2) = sVar12;
        lVar10 = lVar10 + 1;
      } while (lVar13 < (longlong)(uVar14 + lVar20));
    }
    (*(code *)(&PTR_LAB_14308df00)[lVar6])(param_11 + uVar14 * 2,param_4,lVar20,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar14 == 1) {
      iVar23 = (int)psVar28[1];
      if (uVar17 == 1) {
        iVar23 = iVar23 + *psVar28;
      }
      else if (uVar17 == 3) {
        iVar23 = iVar23 * 2;
      }
      else if (uVar17 == 6) {
        iVar23 = sVar27 + iVar23;
      }
      auVar41._0_4_ = (float)(int)*psVar28;
      auVar41._4_8_ = SUB128(ZEXT812(0),4);
      auVar41._12_4_ = 0;
      psVar28 = (short *)(param_1 + 2 + param_2);
      lVar20 = lVar20 + -1;
      auVar31 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar23 * *param_9)),auVar41,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar31._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar14 == 2) {
      iVar19 = (int)psVar28[1];
      iVar15 = (int)*psVar28;
      iVar22 = (int)psVar28[2];
      iVar23 = (int)psVar28[3];
      if (uVar17 == 1) {
        auVar61._0_4_ = (float)(iVar23 + iVar15);
        auVar61._4_8_ = SUB128(ZEXT812(0),4);
        auVar61._12_4_ = 0;
        auVar30._0_4_ = (float)iVar15;
        auVar30._4_8_ = SUB128(ZEXT812(0),4);
        auVar30._12_4_ = 0;
        auVar31._0_4_ = (float)(iVar22 + iVar15);
        auVar31._4_8_ = SUB128(ZEXT812(0),4);
        auVar31._12_4_ = 0;
        auVar55._0_4_ = (float)iVar19;
        auVar55._4_8_ = SUB128(ZEXT812(0),4);
        auVar55._12_4_ = 0;
        auVar30 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar15 + iVar19) * param_9[1])),auVar30,
                                  ZEXT416((uint)param_9[2]));
        auVar30 = vfmadd231ss_fma(auVar30,auVar31,ZEXT416((uint)*param_9));
        *param_4 = auVar30._0_4_;
        auVar30 = vmulss_avx512f(auVar31,ZEXT416((uint)param_9[1]));
        auVar30 = vfmadd231ss_avx512f(auVar30,auVar55,ZEXT416((uint)param_9[2]));
        auVar30 = vfmadd231ss_avx512f(auVar30,auVar61,ZEXT416((uint)*param_9));
        param_4[1] = auVar30._0_4_;
      }
      else if (uVar17 == 3) {
        auVar59._0_4_ = (float)iVar19;
        auVar59._4_8_ = SUB128(ZEXT812(0),4);
        auVar59._12_4_ = 0;
        auVar42._0_4_ = (float)iVar15;
        auVar42._4_8_ = SUB128(ZEXT812(0),4);
        auVar42._12_4_ = 0;
        auVar30 = vxorps_avx512vl(auVar30,auVar30);
        auVar30 = vcvtsi2ss_avx512f(auVar30,iVar23 + iVar19);
        auVar48._0_4_ = (float)(iVar22 * 2);
        auVar48._4_8_ = SUB128(ZEXT812(0),4);
        auVar48._12_4_ = 0;
        auVar53._0_4_ = (float)(iVar15 + iVar22);
        auVar53._4_8_ = SUB128(ZEXT812(0),4);
        auVar53._12_4_ = 0;
        auVar31 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar19 * 2) * param_9[1])),auVar42,
                                  ZEXT416((uint)param_9[2]));
        auVar31 = vfmadd231ss_fma(auVar31,auVar48,ZEXT416((uint)*param_9));
        *param_4 = auVar31._0_4_;
        auVar31 = vmulss_avx512f(auVar53,ZEXT416((uint)param_9[1]));
        auVar31 = vfmadd231ss_avx512f(auVar31,auVar59,ZEXT416((uint)param_9[2]));
        auVar31 = vfmadd231ss_avx512f(auVar31,auVar30,ZEXT416((uint)*param_9));
        param_4[1] = auVar31._0_4_;
      }
      else if (uVar17 == 6) {
        auVar30 = vxorps_avx512vl(auVar30,auVar30);
        auVar30 = vcvtsi2ss_avx512f(auVar30,iVar23 + sVar27);
        auVar60._0_4_ = (float)iVar19;
        auVar60._4_8_ = SUB128(ZEXT812(0),4);
        auVar60._12_4_ = 0;
        auVar43._0_4_ = (float)iVar15;
        auVar43._4_8_ = SUB128(ZEXT812(0),4);
        auVar43._12_4_ = 0;
        auVar49._0_4_ = (float)(iVar19 + sVar27);
        auVar49._4_8_ = SUB128(ZEXT812(0),4);
        auVar49._12_4_ = 0;
        auVar54._0_4_ = (float)(iVar22 + iVar15);
        auVar54._4_8_ = SUB128(ZEXT812(0),4);
        auVar54._12_4_ = 0;
        auVar31 = vfmadd231ss_fma(ZEXT416((uint)((float)(sVar27 + iVar22) * *param_9)),auVar43,
                                  ZEXT416((uint)param_9[2]));
        auVar31 = vfmadd231ss_fma(auVar31,auVar49,ZEXT416((uint)param_9[1]));
        *param_4 = auVar31._0_4_;
        auVar31 = vmulss_avx512f(auVar54,ZEXT416((uint)param_9[1]));
        auVar31 = vfmadd231ss_avx512f(auVar31,auVar60,ZEXT416((uint)param_9[2]));
        auVar31 = vfmadd231ss_avx512f(auVar31,auVar30,ZEXT416((uint)*param_9));
        param_4[1] = auVar31._0_4_;
      }
      param_4 = param_4 + 2;
      psVar28 = (short *)(param_1 + 4 + param_2);
      lVar20 = lVar20 + -2;
    }
    else {
      uVar7 = param_11 + uVar14 * 2;
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar10 = lVar13 * 2 + -2;
          if ((lVar10 <= (longlong)(uVar7 - (longlong)psVar28)) ||
             (lVar10 <= (longlong)-(uVar7 - (longlong)psVar28))) {
            if ((longlong)uVar18 < 0x20) {
              uVar26 = 0;
            }
            else {
              if ((longlong)uVar18 < 0x76) {
                uVar24 = 0;
                uVar26 = uVar18 & 0xffffffffffffffe0;
              }
              else {
                uVar24 = uVar7 & 0x3f;
                if ((uVar7 & 1) == 0) {
                  if ((uVar24 != 0) &&
                     (uVar24 = 0x40 - uVar24 >> 1, (longlong)uVar18 < (longlong)uVar24)) {
                    uVar24 = uVar18;
                  }
                }
                else {
                  uVar24 = 0;
                }
                uVar26 = uVar18 - (uVar18 - uVar24 & 0x1f);
                if (uVar24 != 0) {
                  uVar11 = 0;
                  lVar10 = 0;
                  auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
                  auVar38 = vmovdqu32_avx512f(_DAT_14308dcc0);
                  auVar39 = vpbroadcastq_avx512f();
                  do {
                    uVar2 = vpcmpgtq_avx512f(auVar39,auVar37);
                    uVar11 = uVar11 + 0x10;
                    uVar3 = vpcmpgtq_avx512f(auVar39,auVar38);
                    bVar4 = (byte)uVar3;
                    auVar37 = vpaddq_avx512f(auVar37,auVar40);
                    auVar38 = vpaddq_avx512f(auVar38,auVar40);
                    uVar29 = CONCAT11(bVar4,(byte)uVar2);
                    auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar10 + (longlong)psVar28))
                    ;
                    auVar32._2_2_ = (ushort)((byte)(uVar29 >> 1) & 1) * auVar34._2_2_;
                    auVar32._0_2_ = (ushort)((byte)uVar2 & 1) * auVar34._0_2_;
                    auVar32._4_2_ = (ushort)((byte)(uVar29 >> 2) & 1) * auVar34._4_2_;
                    auVar32._6_2_ = (ushort)((byte)(uVar29 >> 3) & 1) * auVar34._6_2_;
                    auVar32._8_2_ = (ushort)((byte)(uVar29 >> 4) & 1) * auVar34._8_2_;
                    auVar32._10_2_ = (ushort)((byte)(uVar29 >> 5) & 1) * auVar34._10_2_;
                    auVar32._12_2_ = (ushort)((byte)(uVar29 >> 6) & 1) * auVar34._12_2_;
                    auVar32._14_2_ = (ushort)((byte)(uVar29 >> 7) & 1) * auVar34._14_2_;
                    auVar32._16_2_ = (ushort)(bVar4 & 1) * auVar34._16_2_;
                    auVar32._18_2_ = (ushort)(bVar4 >> 1 & 1) * auVar34._18_2_;
                    auVar32._20_2_ = (ushort)(bVar4 >> 2 & 1) * auVar34._20_2_;
                    auVar32._22_2_ = (ushort)(bVar4 >> 3 & 1) * auVar34._22_2_;
                    auVar32._24_2_ = (ushort)(bVar4 >> 4 & 1) * auVar34._24_2_;
                    auVar32._26_2_ = (ushort)(bVar4 >> 5 & 1) * auVar34._26_2_;
                    auVar32._28_2_ = (ushort)(bVar4 >> 6 & 1) * auVar34._28_2_;
                    auVar32._30_2_ = (ushort)(bVar4 >> 7) * auVar34._30_2_;
                    auVar34 = vmovdqu16_avx512vl(auVar32);
                    *(undefined1 (*) [32])(lVar10 + uVar7) = auVar34;
                    lVar10 = lVar10 + 0x20;
                  } while (uVar11 < uVar24);
                  if (uVar18 == uVar24) goto LAB_140998e63;
                }
              }
              if ((longlong)(uVar24 + 0x20) <= (longlong)uVar26) {
                do {
                  auVar40 = vmovdqu32_avx512f(*(undefined1 (*) [64])(psVar28 + uVar24));
                  *(undefined1 (*) [64])(uVar7 + uVar24 * 2) = auVar40;
                  uVar24 = uVar24 + 0x20;
                } while (uVar24 < uVar26);
              }
            }
            auVar40 = _DAT_14308dc40;
            if (uVar26 + 1 <= uVar18) {
              uVar24 = 0;
              auVar37 = vpbroadcastq_avx512f();
              auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar39 = vmovdqu32_avx512f(_DAT_14308dcc0);
              lVar10 = 0;
              do {
                uVar2 = vpcmpgtq_avx512f(auVar37,auVar38);
                uVar24 = uVar24 + 0x10;
                uVar3 = vpcmpgtq_avx512f(auVar37,auVar39);
                bVar4 = (byte)uVar3;
                auVar38 = vpaddq_avx512f(auVar38,auVar40);
                auVar39 = vpaddq_avx512f(auVar39,auVar40);
                uVar29 = CONCAT11(bVar4,(byte)uVar2);
                auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                              ((longlong)psVar28 + lVar10 + uVar26 * 2));
                auVar33._2_2_ = (ushort)((byte)(uVar29 >> 1) & 1) * auVar34._2_2_;
                auVar33._0_2_ = (ushort)((byte)uVar2 & 1) * auVar34._0_2_;
                auVar33._4_2_ = (ushort)((byte)(uVar29 >> 2) & 1) * auVar34._4_2_;
                auVar33._6_2_ = (ushort)((byte)(uVar29 >> 3) & 1) * auVar34._6_2_;
                auVar33._8_2_ = (ushort)((byte)(uVar29 >> 4) & 1) * auVar34._8_2_;
                auVar33._10_2_ = (ushort)((byte)(uVar29 >> 5) & 1) * auVar34._10_2_;
                auVar33._12_2_ = (ushort)((byte)(uVar29 >> 6) & 1) * auVar34._12_2_;
                auVar33._14_2_ = (ushort)((byte)(uVar29 >> 7) & 1) * auVar34._14_2_;
                auVar33._16_2_ = (ushort)(bVar4 & 1) * auVar34._16_2_;
                auVar33._18_2_ = (ushort)(bVar4 >> 1 & 1) * auVar34._18_2_;
                auVar33._20_2_ = (ushort)(bVar4 >> 2 & 1) * auVar34._20_2_;
                auVar33._22_2_ = (ushort)(bVar4 >> 3 & 1) * auVar34._22_2_;
                auVar33._24_2_ = (ushort)(bVar4 >> 4 & 1) * auVar34._24_2_;
                auVar33._26_2_ = (ushort)(bVar4 >> 5 & 1) * auVar34._26_2_;
                auVar33._28_2_ = (ushort)(bVar4 >> 6 & 1) * auVar34._28_2_;
                auVar33._30_2_ = (ushort)(bVar4 >> 7) * auVar34._30_2_;
                auVar34 = vmovdqu16_avx512vl(auVar33);
                *(undefined1 (*) [32])(lVar10 + uVar7 + uVar26 * 2) = auVar34;
                lVar10 = lVar10 + 0x20;
              } while (uVar24 < uVar18 - uVar26);
            }
            goto LAB_140998e63;
          }
        }
        lVar10 = 1;
        uVar24 = lVar13 - 1U >> 1;
        uVar26 = 0;
        if (uVar24 != 0) {
          do {
            uVar11 = uVar26;
            *(short *)(uVar7 + uVar11 * 4) = psVar28[uVar11 * 2];
            *(short *)(uVar7 + 2 + uVar11 * 4) = psVar28[uVar11 * 2 + 1];
            uVar26 = uVar11 + 1;
          } while (uVar26 < uVar24);
          lVar10 = uVar11 + 2 + uVar26;
        }
        if (lVar10 - 1U < lVar13 - 1U) {
          *(short *)(param_11 + ((uVar14 - 1) + lVar10) * 2) = psVar28[lVar10 - 1U];
        }
      }
LAB_140998e63:
      auVar40 = _DAT_14308de00;
      if (uVar17 == 1) {
        if (0 < (longlong)uVar14) {
          if ((longlong)uVar14 < 0x20) {
            uVar26 = 0;
          }
          else {
            if ((longlong)uVar14 < 0x4b) {
              uVar24 = 0;
              uVar26 = uVar14 & 0xffffffffffffffe0;
            }
            else {
              uVar24 = param_11 & 0x3f;
              if ((param_11 & 1) == 0) {
                if ((uVar24 != 0) &&
                   (uVar24 = 0x40 - uVar24 >> 1, (longlong)uVar14 < (longlong)uVar24)) {
                  uVar24 = uVar14;
                }
              }
              else {
                uVar24 = 0;
              }
              uVar26 = uVar14 - (uVar14 - uVar24 & 0x1f);
              if (uVar24 != 0) {
                uVar9 = 0;
                auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
                auVar38 = vpbroadcastq_avx512f();
                auVar31 = vpbroadcastw_avx512vl();
                uVar11 = uVar9;
                do {
                  vpcmpgtq_avx512f(auVar38,auVar37);
                  uVar11 = uVar11 + 8;
                  auVar37 = vpaddq_avx512f(auVar37,auVar40);
                  auVar55 = vmovdqu16_avx512vl(auVar31);
                  *(undefined1 (*) [16])(uVar9 + param_11) = auVar55;
                  uVar9 = uVar9 + 0x10;
                } while (uVar11 < uVar24);
                if (uVar14 == uVar24) goto LAB_140999200;
              }
            }
            if ((longlong)(uVar24 + 0x20) <= (longlong)uVar26) {
              auVar40 = vpbroadcastw_avx512bw();
              do {
                auVar37 = vmovdqu32_avx512f(auVar40);
                *(undefined1 (*) [64])(param_11 + uVar24 * 2) = auVar37;
                uVar24 = uVar24 + 0x20;
              } while (uVar24 < uVar26);
            }
          }
          auVar40 = _DAT_14308de00;
          if (uVar26 + 1 <= uVar14) {
            uVar24 = 0;
            auVar31 = vpbroadcastw_avx512vl();
            auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
            lVar10 = 0;
            auVar38 = vpbroadcastq_avx512f();
            do {
              vpcmpgtq_avx512f(auVar38,auVar37);
              uVar24 = uVar24 + 8;
              auVar37 = vpaddq_avx512f(auVar37,auVar40);
              auVar55 = vmovdqu16_avx512vl(auVar31);
              *(undefined1 (*) [16])(lVar10 + param_11 + uVar26 * 2) = auVar55;
              lVar10 = lVar10 + 0x10;
            } while (uVar24 < uVar14 - uVar26);
          }
        }
      }
      else if (uVar17 == 3) {
        if (0 < (longlong)uVar14) {
          lVar10 = 1;
          lVar8 = 0;
          if (uVar14 >> 1 != 0) {
            lVar10 = param_11 + lVar13 * 2;
            uVar26 = 0;
            do {
              uVar24 = uVar26;
              *(undefined2 *)(param_11 + uVar24 * 4) = *(undefined2 *)(lVar8 + -2 + lVar10);
              lVar1 = lVar8 + -4;
              lVar8 = lVar8 + -4;
              *(undefined2 *)(param_11 + 2 + uVar24 * 4) = *(undefined2 *)(lVar1 + lVar10);
              uVar26 = uVar24 + 1;
            } while (uVar26 < uVar14 >> 1);
            lVar10 = uVar24 + 2 + uVar26;
          }
          uVar26 = lVar10 - 1;
          if (uVar26 < uVar14) {
            *(undefined2 *)(param_11 + uVar26 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar13 - uVar26) * 2);
          }
        }
      }
      else if ((uVar17 == 6) && (0 < (longlong)uVar14)) {
        if ((longlong)uVar14 < 0x20) {
          uVar26 = 0;
        }
        else {
          if ((longlong)uVar14 < 0x4b) {
            uVar24 = 0;
            uVar26 = uVar14 & 0xffffffffffffffe0;
          }
          else {
            uVar24 = param_11 & 0x3f;
            if ((param_11 & 1) == 0) {
              if ((uVar24 != 0) &&
                 (uVar24 = 0x40 - uVar24 >> 1, (longlong)uVar14 < (longlong)uVar24)) {
                uVar24 = uVar14;
              }
            }
            else {
              uVar24 = 0;
            }
            uVar26 = uVar14 - (uVar14 - uVar24 & 0x1f);
            if (uVar24 != 0) {
              uVar11 = 0;
              lVar10 = 0;
              auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar31 = vpbroadcastw_avx512vl();
              auVar38 = vpbroadcastq_avx512f();
              do {
                vpcmpgtq_avx512f(auVar38,auVar37);
                uVar11 = uVar11 + 8;
                auVar37 = vpaddq_avx512f(auVar37,auVar40);
                auVar55 = vmovdqu16_avx512vl(auVar31);
                *(undefined1 (*) [16])(lVar10 + param_11) = auVar55;
                lVar10 = lVar10 + 0x10;
              } while (uVar11 < uVar24);
              if (uVar14 == uVar24) goto LAB_140999200;
            }
          }
          if ((longlong)(uVar24 + 0x20) <= (longlong)uVar26) {
            auVar40 = vpbroadcastw_avx512bw();
            do {
              auVar37 = vmovdqu32_avx512f(auVar40);
              *(undefined1 (*) [64])(param_11 + uVar24 * 2) = auVar37;
              uVar24 = uVar24 + 0x20;
            } while (uVar24 < uVar26);
          }
        }
        auVar40 = _DAT_14308de00;
        if (uVar26 + 1 <= uVar14) {
          uVar24 = 0;
          auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar31 = vpbroadcastw_avx512vl();
          lVar10 = 0;
          auVar38 = vpbroadcastq_avx512f();
          do {
            vpcmpgtq_avx512f(auVar38,auVar37);
            uVar24 = uVar24 + 8;
            auVar37 = vpaddq_avx512f(auVar37,auVar40);
            auVar55 = vmovdqu16_avx512vl(auVar31);
            *(undefined1 (*) [16])(lVar10 + param_11 + uVar26 * 2) = auVar55;
            lVar10 = lVar10 + 0x10;
          } while (uVar24 < uVar14 - uVar26);
        }
      }
LAB_140999200:
      (*(code *)(&PTR_LAB_14308df00)[lVar6])(uVar7,param_4,uVar14,param_9,param_10);
      psVar28 = psVar28 + uVar14;
      lVar20 = lVar20 - uVar14;
      param_4 = param_4 + uVar14;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (*(code *)(&PTR_LAB_14308df00)[lVar6])(psVar28,param_4,lVar20,param_9,param_10);
    return;
  }
  if ((longlong)uVar14 < lVar20) {
    lVar20 = lVar20 - uVar14;
    (*(code *)(&PTR_LAB_14308df00)[lVar6])(psVar28,param_4,lVar20,param_9,param_10);
    psVar28 = psVar28 + lVar20;
    param_4 = param_4 + lVar20;
  }
  auVar40 = _DAT_14308dc40;
  if (uVar14 == 1) {
    iVar23 = (int)psVar28[-1];
    if (uVar17 == 1) {
      iVar23 = iVar23 + *psVar28;
    }
    else if (uVar17 == 3) {
      iVar23 = iVar23 * 2;
    }
    else if (uVar17 == 6) {
      iVar23 = sVar27 + iVar23;
    }
    auVar44._0_4_ = (float)(int)*psVar28;
    auVar44._4_8_ = SUB128(ZEXT812(0),4);
    auVar44._12_4_ = 0;
    auVar30 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar23 * *param_9)),auVar44,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar30._0_4_;
    return;
  }
  if (uVar14 == 2) {
    iVar23 = (int)psVar28[-2];
    iVar15 = (int)psVar28[-1];
    iVar19 = (int)*psVar28;
    iVar22 = (int)psVar28[1];
    if (uVar17 == 1) {
      auVar47._0_4_ = (float)iVar19;
      auVar47._4_8_ = SUB128(ZEXT812(0),4);
      auVar47._12_4_ = 0;
      auVar58._0_4_ = (float)(iVar15 + iVar22);
      auVar58._4_8_ = SUB128(ZEXT812(0),4);
      auVar58._12_4_ = 0;
      auVar64._0_4_ = (float)iVar22;
      auVar64._4_8_ = SUB128(ZEXT812(0),4);
      auVar64._12_4_ = 0;
      auVar30 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar23 + iVar22) * *param_9)),auVar47,
                                ZEXT416((uint)param_9[2]));
      auVar52._0_4_ = (float)(iVar22 + iVar19);
      auVar52._4_8_ = SUB128(ZEXT812(0),4);
      auVar52._12_4_ = 0;
      auVar30 = vfmadd231ss_fma(auVar30,auVar58,ZEXT416((uint)param_9[1]));
      *param_4 = auVar30._0_4_;
      auVar30 = vmulss_avx512f(auVar52,ZEXT416((uint)param_9[1]));
      auVar30 = vfmadd231ss_avx512f(auVar30,auVar58,ZEXT416((uint)*param_9));
      auVar30 = vfmadd231ss_avx512f(auVar30,auVar64,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar30._0_4_;
      return;
    }
    if (uVar17 != 3) {
      if (uVar17 != 6) {
        return;
      }
      auVar51._0_4_ = (float)(iVar23 + sVar27);
      auVar51._4_8_ = SUB128(ZEXT812(0),4);
      auVar51._12_4_ = 0;
      auVar30 = vxorps_avx512vl(auVar30,auVar30);
      auVar46._0_4_ = (float)iVar19;
      auVar46._4_8_ = SUB128(ZEXT812(0),4);
      auVar46._12_4_ = 0;
      auVar57._0_4_ = (float)(iVar15 + sVar27);
      auVar57._4_8_ = SUB128(ZEXT812(0),4);
      auVar57._12_4_ = 0;
      auVar63._0_4_ = (float)iVar22;
      auVar63._4_8_ = SUB128(ZEXT812(0),4);
      auVar63._12_4_ = 0;
      auVar31 = vfmadd231ss_fma(ZEXT416((uint)((float)(iVar15 + iVar22) * param_9[1])),auVar46,
                                ZEXT416((uint)param_9[2]));
      auVar30 = vcvtsi2ss_avx512f(auVar30,iVar19 + sVar27);
      auVar31 = vfmadd231ss_fma(auVar31,auVar51,ZEXT416((uint)*param_9));
      *param_4 = auVar31._0_4_;
      auVar31 = vmulss_avx512f(auVar57,ZEXT416((uint)*param_9));
      auVar31 = vfmadd231ss_avx512f(auVar31,auVar63,ZEXT416((uint)param_9[2]));
      auVar30 = vfmadd231ss_avx512f(auVar31,auVar30,ZEXT416((uint)param_9[1]));
      param_4[1] = auVar30._0_4_;
      return;
    }
    auVar45._0_4_ = (float)(iVar23 + iVar19);
    auVar45._4_8_ = SUB128(ZEXT812(0),4);
    auVar45._12_4_ = 0;
    auVar50._0_4_ = (float)(iVar15 + iVar22);
    auVar50._4_8_ = SUB128(ZEXT812(0),4);
    auVar50._12_4_ = 0;
    auVar56._0_4_ = (float)(iVar19 * 2);
    auVar56._4_8_ = SUB128(ZEXT812(0),4);
    auVar56._12_4_ = 0;
    auVar31 = vfmadd231ss_fma(ZEXT416((uint)((float)iVar19 * param_9[2])),auVar45,
                              ZEXT416((uint)*param_9));
    auVar30 = vxorps_avx512vl(auVar30,auVar30);
    auVar62._0_4_ = (float)(iVar15 * 2);
    auVar62._4_8_ = SUB128(ZEXT812(0),4);
    auVar62._12_4_ = 0;
    auVar30 = vcvtsi2ss_avx512f(auVar30,iVar22);
    auVar31 = vfmadd231ss_fma(auVar31,auVar50,ZEXT416((uint)param_9[1]));
    *param_4 = auVar31._0_4_;
    auVar31 = vmulss_avx512f(auVar56,ZEXT416((uint)param_9[1]));
    auVar31 = vfmadd231ss_avx512f(auVar31,auVar62,ZEXT416((uint)*param_9));
    auVar30 = vfmadd231ss_avx512f(auVar31,auVar30,ZEXT416((uint)param_9[2]));
    param_4[1] = auVar30._0_4_;
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      psVar21 = psVar28 + -uVar14;
      lVar20 = lVar13 * 2 + -2;
      if ((lVar20 <= (longlong)(param_11 - (longlong)psVar21)) ||
         (lVar20 <= (longlong)-(param_11 - (longlong)psVar21))) {
        if ((longlong)uVar18 < 0x20) {
          uVar7 = 0;
        }
        else {
          if ((longlong)uVar18 < 0x76) {
            uVar26 = 0;
            uVar7 = uVar18 & 0xffffffffffffffe0;
          }
          else {
            uVar26 = param_11 & 0x3f;
            if ((param_11 & 1) == 0) {
              if ((uVar26 != 0) &&
                 (uVar26 = 0x40 - uVar26 >> 1, (longlong)uVar18 < (longlong)uVar26)) {
                uVar26 = uVar18;
              }
            }
            else {
              uVar26 = 0;
            }
            uVar7 = uVar18 - (uVar18 - uVar26 & 0x1f);
            if (uVar26 != 0) {
              uVar24 = 0;
              lVar20 = 0;
              auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar38 = vmovdqu32_avx512f(_DAT_14308dcc0);
              auVar39 = vpbroadcastq_avx512f();
              do {
                uVar2 = vpcmpgtq_avx512f(auVar39,auVar37);
                uVar24 = uVar24 + 0x10;
                uVar3 = vpcmpgtq_avx512f(auVar39,auVar38);
                bVar4 = (byte)uVar3;
                auVar37 = vpaddq_avx512f(auVar37,auVar40);
                auVar38 = vpaddq_avx512f(auVar38,auVar40);
                uVar29 = CONCAT11(bVar4,(byte)uVar2);
                auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar20 + (longlong)psVar21));
                auVar35._2_2_ = (ushort)((byte)(uVar29 >> 1) & 1) * auVar34._2_2_;
                auVar35._0_2_ = (ushort)((byte)uVar2 & 1) * auVar34._0_2_;
                auVar35._4_2_ = (ushort)((byte)(uVar29 >> 2) & 1) * auVar34._4_2_;
                auVar35._6_2_ = (ushort)((byte)(uVar29 >> 3) & 1) * auVar34._6_2_;
                auVar35._8_2_ = (ushort)((byte)(uVar29 >> 4) & 1) * auVar34._8_2_;
                auVar35._10_2_ = (ushort)((byte)(uVar29 >> 5) & 1) * auVar34._10_2_;
                auVar35._12_2_ = (ushort)((byte)(uVar29 >> 6) & 1) * auVar34._12_2_;
                auVar35._14_2_ = (ushort)((byte)(uVar29 >> 7) & 1) * auVar34._14_2_;
                auVar35._16_2_ = (ushort)(bVar4 & 1) * auVar34._16_2_;
                auVar35._18_2_ = (ushort)(bVar4 >> 1 & 1) * auVar34._18_2_;
                auVar35._20_2_ = (ushort)(bVar4 >> 2 & 1) * auVar34._20_2_;
                auVar35._22_2_ = (ushort)(bVar4 >> 3 & 1) * auVar34._22_2_;
                auVar35._24_2_ = (ushort)(bVar4 >> 4 & 1) * auVar34._24_2_;
                auVar35._26_2_ = (ushort)(bVar4 >> 5 & 1) * auVar34._26_2_;
                auVar35._28_2_ = (ushort)(bVar4 >> 6 & 1) * auVar34._28_2_;
                auVar35._30_2_ = (ushort)(bVar4 >> 7) * auVar34._30_2_;
                auVar34 = vmovdqu16_avx512vl(auVar35);
                *(undefined1 (*) [32])(lVar20 + param_11) = auVar34;
                lVar20 = lVar20 + 0x20;
              } while (uVar24 < uVar26);
              if (uVar18 == uVar26) goto LAB_140999724;
            }
          }
          if ((longlong)(uVar26 + 0x20) <= (longlong)uVar7) {
            do {
              auVar40 = vmovdqu32_avx512f(*(undefined1 (*) [64])(psVar21 + uVar26));
              *(undefined1 (*) [64])(param_11 + uVar26 * 2) = auVar40;
              uVar26 = uVar26 + 0x20;
            } while (uVar26 < uVar7);
          }
        }
        auVar40 = _DAT_14308dc40;
        if (uVar7 + 1 <= uVar18) {
          uVar26 = 0;
          auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar38 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar39 = vpbroadcastq_avx512f();
          lVar20 = 0;
          do {
            uVar2 = vpcmpgtq_avx512f(auVar39,auVar37);
            uVar26 = uVar26 + 0x10;
            uVar3 = vpcmpgtq_avx512f(auVar39,auVar38);
            bVar4 = (byte)uVar3;
            auVar37 = vpaddq_avx512f(auVar37,auVar40);
            auVar38 = vpaddq_avx512f(auVar38,auVar40);
            uVar29 = CONCAT11(bVar4,(byte)uVar2);
            auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                          ((longlong)psVar21 + lVar20 + uVar7 * 2));
            auVar36._2_2_ = (ushort)((byte)(uVar29 >> 1) & 1) * auVar34._2_2_;
            auVar36._0_2_ = (ushort)((byte)uVar2 & 1) * auVar34._0_2_;
            auVar36._4_2_ = (ushort)((byte)(uVar29 >> 2) & 1) * auVar34._4_2_;
            auVar36._6_2_ = (ushort)((byte)(uVar29 >> 3) & 1) * auVar34._6_2_;
            auVar36._8_2_ = (ushort)((byte)(uVar29 >> 4) & 1) * auVar34._8_2_;
            auVar36._10_2_ = (ushort)((byte)(uVar29 >> 5) & 1) * auVar34._10_2_;
            auVar36._12_2_ = (ushort)((byte)(uVar29 >> 6) & 1) * auVar34._12_2_;
            auVar36._14_2_ = (ushort)((byte)(uVar29 >> 7) & 1) * auVar34._14_2_;
            auVar36._16_2_ = (ushort)(bVar4 & 1) * auVar34._16_2_;
            auVar36._18_2_ = (ushort)(bVar4 >> 1 & 1) * auVar34._18_2_;
            auVar36._20_2_ = (ushort)(bVar4 >> 2 & 1) * auVar34._20_2_;
            auVar36._22_2_ = (ushort)(bVar4 >> 3 & 1) * auVar34._22_2_;
            auVar36._24_2_ = (ushort)(bVar4 >> 4 & 1) * auVar34._24_2_;
            auVar36._26_2_ = (ushort)(bVar4 >> 5 & 1) * auVar34._26_2_;
            auVar36._28_2_ = (ushort)(bVar4 >> 6 & 1) * auVar34._28_2_;
            auVar36._30_2_ = (ushort)(bVar4 >> 7) * auVar34._30_2_;
            auVar34 = vmovdqu16_avx512vl(auVar36);
            *(undefined1 (*) [32])(lVar20 + param_11 + uVar7 * 2) = auVar34;
            lVar20 = lVar20 + 0x20;
          } while (uVar26 < uVar18 - uVar7);
        }
        goto LAB_140999724;
      }
    }
    lVar20 = 1;
    uVar7 = lVar13 - 1U >> 1;
    uVar18 = 0;
    if (uVar7 != 0) {
      do {
        uVar26 = uVar18;
        *(short *)(param_11 + uVar26 * 4) = psVar28[uVar26 * 2 - uVar14];
        *(short *)(param_11 + 2 + uVar26 * 4) = psVar28[(uVar26 * 2 + 1) - uVar14];
        uVar18 = uVar26 + 1;
      } while (uVar18 < uVar7);
      lVar20 = uVar26 + 2 + uVar18;
    }
    uVar18 = lVar20 - 1;
    if (uVar18 < lVar13 - 1U) {
      *(short *)(param_11 + uVar18 * 2) = psVar28[uVar18 - uVar14];
    }
  }
LAB_140999724:
  auVar40 = _DAT_14308de00;
  if (uVar17 == 1) {
    if (0 < (longlong)uVar14) {
      if (6 < (longlong)uVar14) {
        lVar20 = param_11 + lVar13 * 2;
        uVar18 = lVar20 - 2;
        lVar10 = uVar18 - (lVar20 + -4);
        if ((1 < lVar10) || ((longlong)(uVar14 * 2) <= -lVar10)) {
          if ((longlong)uVar14 < 0x20) {
            uVar18 = 0;
          }
          else {
            if ((longlong)uVar14 < 0x4b) {
              uVar7 = 0;
              uVar18 = uVar14 & 0xffffffffffffffe0;
            }
            else {
              uVar7 = uVar18 & 0x3f;
              if ((uVar18 & 1) == 0) {
                if ((uVar7 != 0) && (uVar7 = 0x40 - uVar7 >> 1, (longlong)uVar14 < (longlong)uVar7))
                {
                  uVar7 = uVar14;
                }
              }
              else {
                uVar7 = 0;
              }
              uVar18 = uVar14 - (uVar14 - uVar7 & 0x1f);
              if (uVar7 != 0) {
                uVar26 = 0;
                lVar13 = 0;
                auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
                auVar38 = vpbroadcastq_avx512f();
                auVar30 = vpbroadcastw_avx512vl();
                do {
                  vpcmpgtq_avx512f(auVar38,auVar37);
                  uVar26 = uVar26 + 8;
                  auVar37 = vpaddq_avx512f(auVar37,auVar40);
                  auVar31 = vmovdqu16_avx512vl(auVar30);
                  *(undefined1 (*) [16])(lVar13 + -2 + lVar20) = auVar31;
                  lVar13 = lVar13 + 0x10;
                } while (uVar26 < uVar7);
                if (uVar14 == uVar7) goto LAB_140999b83;
              }
            }
            if ((longlong)(uVar7 + 0x20) <= (longlong)uVar18) {
              auVar40 = vpbroadcastw_avx512bw();
              do {
                auVar37 = vmovdqu32_avx512f(auVar40);
                *(undefined1 (*) [64])(lVar20 + -2 + uVar7 * 2) = auVar37;
                uVar7 = uVar7 + 0x20;
              } while (uVar7 < uVar18);
            }
          }
          auVar40 = _DAT_14308de00;
          if (uVar18 + 1 <= uVar14) {
            uVar7 = 0;
            lVar13 = 0;
            auVar30 = vpbroadcastw_avx512vl();
            auVar37 = vpbroadcastq_avx512f();
            auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
            do {
              vpcmpgtq_avx512f(auVar37,auVar38);
              uVar7 = uVar7 + 8;
              auVar38 = vpaddq_avx512f(auVar38,auVar40);
              auVar31 = vmovdqu16_avx512vl(auVar30);
              *(undefined1 (*) [16])(lVar13 + -2 + lVar20 + uVar18 * 2) = auVar31;
              lVar13 = lVar13 + 0x10;
            } while (uVar7 < uVar14 - uVar18);
          }
          goto LAB_140999b83;
        }
      }
      lVar20 = 1;
      if (uVar14 >> 1 != 0) {
        lVar20 = param_11 + lVar13 * 2;
        uVar18 = 0;
        do {
          uVar7 = uVar18;
          *(undefined2 *)(lVar20 + -2 + uVar7 * 4) = *(undefined2 *)(lVar20 + -4);
          *(undefined2 *)(lVar20 + uVar7 * 4) = *(undefined2 *)(lVar20 + -4);
          uVar18 = uVar7 + 1;
        } while (uVar18 < uVar14 >> 1);
        lVar20 = uVar7 + 2 + uVar18;
      }
      if (lVar20 - 1U < uVar14) {
        *(undefined2 *)((param_11 - 2) + (lVar13 + -1 + lVar20) * 2) =
             *(undefined2 *)((param_11 - 4) + lVar13 * 2);
      }
    }
  }
  else if (uVar17 == 3) {
    if (0 < (longlong)uVar14) {
      lVar20 = 1;
      lVar10 = 0;
      if (uVar14 >> 1 != 0) {
        lVar20 = param_11 + lVar13 * 2;
        uVar18 = 0;
        do {
          uVar7 = uVar18;
          *(undefined2 *)(lVar20 + -2 + uVar7 * 4) = *(undefined2 *)(lVar10 + -6 + lVar20);
          lVar8 = lVar10 + -8;
          lVar10 = lVar10 + -4;
          *(undefined2 *)(lVar20 + uVar7 * 4) = *(undefined2 *)(lVar8 + lVar20);
          uVar18 = uVar7 + 1;
        } while (uVar18 < uVar14 >> 1);
        lVar20 = uVar7 + 2 + uVar18;
      }
      if (lVar20 - 1U < uVar14) {
        *(undefined2 *)((param_11 - 2) + (lVar13 + -1 + lVar20) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar13 - (lVar20 - 1U)) * 2);
      }
    }
  }
  else if ((uVar17 == 6) && (0 < (longlong)uVar14)) {
    if ((longlong)uVar14 < 0x20) {
      uVar18 = 0;
    }
    else {
      if ((longlong)uVar14 < 0x4b) {
        uVar7 = 0;
        uVar18 = uVar14 & 0xffffffffffffffe0;
      }
      else {
        lVar20 = param_11 + lVar13 * 2;
        uVar18 = lVar20 - 2;
        uVar7 = uVar18 & 0x3f;
        if ((uVar18 & 1) == 0) {
          if ((uVar7 != 0) && (uVar7 = 0x40 - uVar7 >> 1, (longlong)uVar14 < (longlong)uVar7)) {
            uVar7 = uVar14;
          }
        }
        else {
          uVar7 = 0;
        }
        uVar18 = uVar14 - (uVar14 - uVar7 & 0x1f);
        if (uVar7 != 0) {
          uVar26 = 0;
          lVar10 = 0;
          auVar37 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar38 = vpbroadcastq_avx512f();
          auVar30 = vpbroadcastw_avx512vl();
          do {
            vpcmpgtq_avx512f(auVar38,auVar37);
            uVar26 = uVar26 + 8;
            auVar37 = vpaddq_avx512f(auVar37,auVar40);
            auVar31 = vmovdqu16_avx512vl(auVar30);
            *(undefined1 (*) [16])(lVar10 + -2 + lVar20) = auVar31;
            lVar10 = lVar10 + 0x10;
          } while (uVar26 < uVar7);
          if (uVar14 == uVar7) goto LAB_140999b83;
        }
      }
      if ((longlong)(uVar7 + 0x20) <= (longlong)uVar18) {
        auVar40 = vpbroadcastw_avx512bw();
        do {
          auVar37 = vmovdqu32_avx512f(auVar40);
          *(undefined1 (*) [64])(param_11 + lVar13 * 2 + -2 + uVar7 * 2) = auVar37;
          uVar7 = uVar7 + 0x20;
        } while (uVar7 < uVar18);
      }
    }
    auVar40 = _DAT_14308de00;
    if (uVar18 + 1 <= uVar14) {
      uVar7 = 0;
      auVar30 = vpbroadcastw_avx512vl();
      auVar37 = vpbroadcastq_avx512f();
      auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
      lVar20 = 0;
      do {
        vpcmpgtq_avx512f(auVar37,auVar38);
        uVar7 = uVar7 + 8;
        auVar38 = vpaddq_avx512f(auVar38,auVar40);
        auVar31 = vmovdqu16_avx512vl(auVar30);
        *(undefined1 (*) [16])(lVar20 + -2 + param_11 + (lVar13 + uVar18) * 2) = auVar31;
        lVar20 = lVar20 + 0x10;
      } while (uVar7 < uVar14 - uVar18);
    }
  }
LAB_140999b83:
  (*(code *)(&PTR_LAB_14308df00)[lVar6])(param_11 + uVar14 * 2,param_4,uVar14,param_9,param_10);
  return;
}

