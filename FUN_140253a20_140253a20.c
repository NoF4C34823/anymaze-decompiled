
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140253a20(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ushort *puVar26;
  ushort uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
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
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 in_ZMM16 [64];
  undefined1 auVar33 [32];
  
  auVar39 = _DAT_143088900;
  auVar28 = in_ZMM16._0_16_;
  param_2 = param_2 * param_3;
  puVar26 = (ushort *)(param_1 + param_2);
  uVar25 = 0;
  lVar8 = (longlong)param_6;
  lVar14 = (longlong)param_10;
  uVar17 = param_7 & 0xf;
  uVar15 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_143088b80 + lVar8 * 8))(puVar26,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar17 == 6) {
    uVar25 = (uint)*param_8;
  }
  lVar19 = *param_5;
  uVar18 = lVar14 - 1;
  if (lVar19 < (longlong)uVar18) {
    lVar14 = -uVar15;
    lVar12 = 0;
    if (lVar14 < (longlong)(uVar15 + lVar19)) {
      uVar16 = param_7 & 0x80;
      uVar23 = param_7 & 0x40;
      do {
        lVar10 = lVar14;
        if (((lVar14 < 0) || (lVar19 <= lVar14)) && (param_7 != 0xf0)) {
          if (uVar17 != 6) {
            if (uVar17 == 1) {
              if (lVar14 < 0) {
                lVar10 = 0;
                if (uVar23 != 0) {
                  lVar10 = lVar14;
                }
              }
              else if (uVar16 == 0) {
                lVar10 = lVar19 + -1;
              }
            }
            else if (uVar17 == 3) {
              if (lVar19 < 2) {
                if (lVar14 < 0) {
                  if (uVar23 == 0) {
                    lVar10 = -lVar14;
                    if (uVar16 == 0) {
                      lVar10 = 0;
                    }
                  }
                }
                else if ((0 < lVar14) && (uVar16 == 0)) {
                  lVar10 = -lVar14;
                  if (uVar23 == 0) {
                    lVar10 = 0;
                  }
                }
              }
              else if ((lVar14 < 0) || (lVar19 <= lVar14)) {
                if (lVar14 < 0) goto LAB_140254f00;
                while (uVar16 == 0) {
                  for (lVar10 = (lVar19 + -1) * 2 - lVar10; lVar10 < 0; lVar10 = -lVar10) {
LAB_140254f00:
                    if (uVar23 != 0) goto LAB_140254dc3;
                  }
                  if (lVar10 < lVar19) break;
                }
              }
            }
            goto LAB_140254dc3;
          }
          uVar21 = uVar23;
          if (-1 < lVar14) {
            uVar21 = uVar16;
          }
          if (uVar21 != 0) goto LAB_140254dc3;
          uVar27 = (ushort)uVar25;
        }
        else {
LAB_140254dc3:
          uVar27 = puVar26[lVar10];
        }
        lVar14 = lVar14 + 1;
        *(ushort *)(param_11 + lVar12 * 2) = uVar27;
        lVar12 = lVar12 + 1;
      } while (lVar14 < (longlong)(uVar15 + lVar19));
    }
    (**(code **)(&UNK_143088b80 + lVar8 * 8))(param_11 + uVar15 * 2,param_4,lVar19,param_9,param_10)
    ;
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar15 == 1) {
      uVar27 = puVar26[1];
      if (uVar17 == 1) {
        uVar16 = (uint)uVar27 + (uint)*puVar26;
      }
      else if (uVar17 == 3) {
        uVar16 = (uint)uVar27 * 2;
      }
      else {
        uVar16 = (uint)uVar27;
        if (uVar17 == 6) {
          uVar16 = uVar27 + uVar25;
        }
      }
      auVar40._0_4_ = (float)*puVar26;
      auVar40._4_8_ = SUB128(ZEXT812(0),4);
      auVar40._12_4_ = 0;
      puVar26 = (ushort *)(param_1 + 2 + param_2);
      lVar19 = lVar19 + -1;
      auVar29 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar16 * *param_9)),auVar40,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar29._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar15 == 2) {
      uVar27 = puVar26[1];
      uVar23 = (uint)puVar26[2];
      uVar2 = *puVar26;
      uVar3 = puVar26[3];
      uVar16 = (uint)uVar27;
      if (uVar17 == 1) {
        uVar21 = (uint)uVar2;
        auVar59._0_4_ = (float)(uVar3 + uVar21);
        auVar59._4_8_ = SUB128(ZEXT812(0),4);
        auVar59._12_4_ = 0;
        auVar28._0_4_ = (float)uVar21;
        auVar28._4_8_ = SUB128(ZEXT812(0),4);
        auVar28._12_4_ = 0;
        auVar29._0_4_ = (float)(uVar23 + uVar21);
        auVar29._4_8_ = SUB128(ZEXT812(0),4);
        auVar29._12_4_ = 0;
        auVar30._0_4_ = (float)uVar16;
        auVar30._4_8_ = SUB128(ZEXT812(0),4);
        auVar30._12_4_ = 0;
        auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar21 + uVar16) * param_9[1])),auVar28,
                                  ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_fma(auVar28,auVar29,ZEXT416((uint)*param_9));
        *param_4 = auVar28._0_4_;
        auVar28 = vmulss_avx512f(auVar29,ZEXT416((uint)param_9[1]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar30,ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar59,ZEXT416((uint)*param_9));
        param_4[1] = auVar28._0_4_;
      }
      else if (uVar17 == 3) {
        auVar57._0_4_ = (float)uVar27;
        auVar57._4_8_ = SUB128(ZEXT812(0),4);
        auVar57._12_4_ = 0;
        auVar41._0_4_ = (float)uVar2;
        auVar41._4_8_ = SUB128(ZEXT812(0),4);
        auVar41._12_4_ = 0;
        auVar28 = vxorps_avx512vl(auVar28,auVar28);
        auVar28 = vcvtsi2ss_avx512f(auVar28,(uint)uVar3 + (uint)uVar27);
        auVar47._0_4_ = (float)(uVar23 * 2);
        auVar47._4_8_ = SUB128(ZEXT812(0),4);
        auVar47._12_4_ = 0;
        auVar52._0_4_ = (float)(uVar2 + uVar23);
        auVar52._4_8_ = SUB128(ZEXT812(0),4);
        auVar52._12_4_ = 0;
        auVar29 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)uVar27 * 2) * param_9[1])),auVar41,
                                  ZEXT416((uint)param_9[2]));
        auVar29 = vfmadd231ss_fma(auVar29,auVar47,ZEXT416((uint)*param_9));
        *param_4 = auVar29._0_4_;
        auVar29 = vmulss_avx512f(auVar52,ZEXT416((uint)param_9[1]));
        auVar29 = vfmadd231ss_avx512f(auVar29,auVar57,ZEXT416((uint)param_9[2]));
        auVar29 = vfmadd231ss_avx512f(auVar29,auVar28,ZEXT416((uint)*param_9));
        param_4[1] = auVar29._0_4_;
      }
      else if (uVar17 == 6) {
        auVar28 = vxorps_avx512vl(auVar28,auVar28);
        auVar28 = vcvtsi2ss_avx512f(auVar28,uVar3 + uVar25);
        auVar42._0_4_ = (float)uVar2;
        auVar42._4_8_ = SUB128(ZEXT812(0),4);
        auVar42._12_4_ = 0;
        auVar53._0_4_ = (float)(uVar2 + uVar23);
        auVar53._4_8_ = SUB128(ZEXT812(0),4);
        auVar53._12_4_ = 0;
        auVar58._0_4_ = (float)uVar16;
        auVar58._4_8_ = SUB128(ZEXT812(0),4);
        auVar58._12_4_ = 0;
        auVar48._0_4_ = (float)(uVar27 + uVar25);
        auVar48._4_8_ = SUB128(ZEXT812(0),4);
        auVar48._12_4_ = 0;
        auVar29 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar23 + uVar25) * *param_9)),auVar42,
                                  ZEXT416((uint)param_9[2]));
        auVar29 = vfmadd231ss_fma(auVar29,auVar48,ZEXT416((uint)param_9[1]));
        *param_4 = auVar29._0_4_;
        auVar29 = vmulss_avx512f(auVar53,ZEXT416((uint)param_9[1]));
        auVar29 = vfmadd231ss_avx512f(auVar29,auVar58,ZEXT416((uint)param_9[2]));
        auVar29 = vfmadd231ss_avx512f(auVar29,auVar28,ZEXT416((uint)*param_9));
        param_4[1] = auVar29._0_4_;
      }
      param_4 = param_4 + 2;
      puVar26 = (ushort *)(param_1 + 4 + param_2);
      lVar19 = lVar19 + -2;
    }
    else {
      uVar9 = param_11 + uVar15 * 2;
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar12 = lVar14 * 2 + -2;
          if ((lVar12 <= (longlong)(uVar9 - (longlong)puVar26)) ||
             (lVar12 <= (longlong)-(uVar9 - (longlong)puVar26))) {
            if ((longlong)uVar18 < 0x20) {
              uVar24 = 0;
            }
            else {
              if ((longlong)uVar18 < 0x76) {
                uVar22 = 0;
                uVar24 = uVar18 & 0xffffffffffffffe0;
              }
              else {
                uVar22 = uVar9 & 0x3f;
                if ((uVar9 & 1) == 0) {
                  if ((uVar22 != 0) &&
                     (uVar22 = 0x40 - uVar22 >> 1, (longlong)uVar18 < (longlong)uVar22)) {
                    uVar22 = uVar18;
                  }
                }
                else {
                  uVar22 = 0;
                }
                uVar24 = uVar18 - (uVar18 - uVar22 & 0x1f);
                if (uVar22 != 0) {
                  uVar13 = 0;
                  lVar12 = 0;
                  auVar36 = vmovdqu32_avx512f(_DAT_143088940);
                  auVar37 = vmovdqu32_avx512f(_DAT_143088980);
                  auVar38 = vpbroadcastq_avx512f();
                  do {
                    uVar5 = vpcmpgtq_avx512f(auVar38,auVar36);
                    uVar13 = uVar13 + 0x10;
                    uVar6 = vpcmpgtq_avx512f(auVar38,auVar37);
                    bVar7 = (byte)uVar6;
                    auVar36 = vpaddq_avx512f(auVar36,auVar39);
                    auVar37 = vpaddq_avx512f(auVar37,auVar39);
                    uVar27 = CONCAT11(bVar7,(byte)uVar5);
                    auVar33 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar12 + (longlong)puVar26))
                    ;
                    auVar31._2_2_ = (ushort)((byte)(uVar27 >> 1) & 1) * auVar33._2_2_;
                    auVar31._0_2_ = (ushort)((byte)uVar5 & 1) * auVar33._0_2_;
                    auVar31._4_2_ = (ushort)((byte)(uVar27 >> 2) & 1) * auVar33._4_2_;
                    auVar31._6_2_ = (ushort)((byte)(uVar27 >> 3) & 1) * auVar33._6_2_;
                    auVar31._8_2_ = (ushort)((byte)(uVar27 >> 4) & 1) * auVar33._8_2_;
                    auVar31._10_2_ = (ushort)((byte)(uVar27 >> 5) & 1) * auVar33._10_2_;
                    auVar31._12_2_ = (ushort)((byte)(uVar27 >> 6) & 1) * auVar33._12_2_;
                    auVar31._14_2_ = (ushort)((byte)(uVar27 >> 7) & 1) * auVar33._14_2_;
                    auVar31._16_2_ = (ushort)(bVar7 & 1) * auVar33._16_2_;
                    auVar31._18_2_ = (ushort)(bVar7 >> 1 & 1) * auVar33._18_2_;
                    auVar31._20_2_ = (ushort)(bVar7 >> 2 & 1) * auVar33._20_2_;
                    auVar31._22_2_ = (ushort)(bVar7 >> 3 & 1) * auVar33._22_2_;
                    auVar31._24_2_ = (ushort)(bVar7 >> 4 & 1) * auVar33._24_2_;
                    auVar31._26_2_ = (ushort)(bVar7 >> 5 & 1) * auVar33._26_2_;
                    auVar31._28_2_ = (ushort)(bVar7 >> 6 & 1) * auVar33._28_2_;
                    auVar31._30_2_ = (ushort)(bVar7 >> 7) * auVar33._30_2_;
                    auVar33 = vmovdqu16_avx512vl(auVar31);
                    *(undefined1 (*) [32])(lVar12 + uVar9) = auVar33;
                    lVar12 = lVar12 + 0x20;
                  } while (uVar13 < uVar22);
                  if (uVar18 == uVar22) goto LAB_140253f63;
                }
              }
              if ((longlong)(uVar22 + 0x20) <= (longlong)uVar24) {
                do {
                  auVar39 = vmovdqu32_avx512f(*(undefined1 (*) [64])(puVar26 + uVar22));
                  *(undefined1 (*) [64])(uVar9 + uVar22 * 2) = auVar39;
                  uVar22 = uVar22 + 0x20;
                } while (uVar22 < uVar24);
              }
            }
            auVar39 = _DAT_143088900;
            if (uVar24 + 1 <= uVar18) {
              uVar22 = 0;
              auVar36 = vpbroadcastq_avx512f();
              auVar37 = vmovdqu32_avx512f(_DAT_143088940);
              auVar38 = vmovdqu32_avx512f(_DAT_143088980);
              lVar12 = 0;
              do {
                uVar5 = vpcmpgtq_avx512f(auVar36,auVar37);
                uVar22 = uVar22 + 0x10;
                uVar6 = vpcmpgtq_avx512f(auVar36,auVar38);
                bVar7 = (byte)uVar6;
                auVar37 = vpaddq_avx512f(auVar37,auVar39);
                auVar38 = vpaddq_avx512f(auVar38,auVar39);
                uVar27 = CONCAT11(bVar7,(byte)uVar5);
                auVar33 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                              ((longlong)puVar26 + lVar12 + uVar24 * 2));
                auVar32._2_2_ = (ushort)((byte)(uVar27 >> 1) & 1) * auVar33._2_2_;
                auVar32._0_2_ = (ushort)((byte)uVar5 & 1) * auVar33._0_2_;
                auVar32._4_2_ = (ushort)((byte)(uVar27 >> 2) & 1) * auVar33._4_2_;
                auVar32._6_2_ = (ushort)((byte)(uVar27 >> 3) & 1) * auVar33._6_2_;
                auVar32._8_2_ = (ushort)((byte)(uVar27 >> 4) & 1) * auVar33._8_2_;
                auVar32._10_2_ = (ushort)((byte)(uVar27 >> 5) & 1) * auVar33._10_2_;
                auVar32._12_2_ = (ushort)((byte)(uVar27 >> 6) & 1) * auVar33._12_2_;
                auVar32._14_2_ = (ushort)((byte)(uVar27 >> 7) & 1) * auVar33._14_2_;
                auVar32._16_2_ = (ushort)(bVar7 & 1) * auVar33._16_2_;
                auVar32._18_2_ = (ushort)(bVar7 >> 1 & 1) * auVar33._18_2_;
                auVar32._20_2_ = (ushort)(bVar7 >> 2 & 1) * auVar33._20_2_;
                auVar32._22_2_ = (ushort)(bVar7 >> 3 & 1) * auVar33._22_2_;
                auVar32._24_2_ = (ushort)(bVar7 >> 4 & 1) * auVar33._24_2_;
                auVar32._26_2_ = (ushort)(bVar7 >> 5 & 1) * auVar33._26_2_;
                auVar32._28_2_ = (ushort)(bVar7 >> 6 & 1) * auVar33._28_2_;
                auVar32._30_2_ = (ushort)(bVar7 >> 7) * auVar33._30_2_;
                auVar33 = vmovdqu16_avx512vl(auVar32);
                *(undefined1 (*) [32])(lVar12 + uVar9 + uVar24 * 2) = auVar33;
                lVar12 = lVar12 + 0x20;
              } while (uVar22 < uVar18 - uVar24);
            }
            goto LAB_140253f63;
          }
        }
        lVar12 = 1;
        uVar22 = lVar14 - 1U >> 1;
        uVar24 = 0;
        if (uVar22 != 0) {
          do {
            uVar13 = uVar24;
            *(ushort *)(uVar9 + uVar13 * 4) = puVar26[uVar13 * 2];
            *(ushort *)(uVar9 + 2 + uVar13 * 4) = puVar26[uVar13 * 2 + 1];
            uVar24 = uVar13 + 1;
          } while (uVar24 < uVar22);
          lVar12 = uVar13 + 2 + uVar24;
        }
        if (lVar12 - 1U < lVar14 - 1U) {
          *(ushort *)(param_11 + ((uVar15 - 1) + lVar12) * 2) = puVar26[lVar12 - 1U];
        }
      }
LAB_140253f63:
      auVar39 = _DAT_143088b00;
      if (uVar17 == 1) {
        if (0 < (longlong)uVar15) {
          if ((longlong)uVar15 < 0x20) {
            uVar24 = 0;
          }
          else {
            if ((longlong)uVar15 < 0x4b) {
              uVar22 = 0;
              uVar24 = uVar15 & 0xffffffffffffffe0;
            }
            else {
              uVar22 = param_11 & 0x3f;
              if ((param_11 & 1) == 0) {
                if ((uVar22 != 0) &&
                   (uVar22 = 0x40 - uVar22 >> 1, (longlong)uVar15 < (longlong)uVar22)) {
                  uVar22 = uVar15;
                }
              }
              else {
                uVar22 = 0;
              }
              uVar24 = uVar15 - (uVar15 - uVar22 & 0x1f);
              if (uVar22 != 0) {
                uVar11 = 0;
                auVar36 = vmovdqu32_avx512f(_DAT_143088940);
                auVar37 = vpbroadcastq_avx512f();
                auVar29 = vpbroadcastw_avx512vl();
                uVar13 = uVar11;
                do {
                  vpcmpgtq_avx512f(auVar37,auVar36);
                  uVar13 = uVar13 + 8;
                  auVar36 = vpaddq_avx512f(auVar36,auVar39);
                  auVar30 = vmovdqu16_avx512vl(auVar29);
                  *(undefined1 (*) [16])(uVar11 + param_11) = auVar30;
                  uVar11 = uVar11 + 0x10;
                } while (uVar13 < uVar22);
                if (uVar15 == uVar22) goto LAB_140254300;
              }
            }
            if ((longlong)(uVar22 + 0x20) <= (longlong)uVar24) {
              auVar39 = vpbroadcastw_avx512bw();
              do {
                auVar36 = vmovdqu32_avx512f(auVar39);
                *(undefined1 (*) [64])(param_11 + uVar22 * 2) = auVar36;
                uVar22 = uVar22 + 0x20;
              } while (uVar22 < uVar24);
            }
          }
          auVar39 = _DAT_143088b00;
          if (uVar24 + 1 <= uVar15) {
            uVar22 = 0;
            auVar29 = vpbroadcastw_avx512vl();
            auVar36 = vmovdqu32_avx512f(_DAT_143088940);
            lVar12 = 0;
            auVar37 = vpbroadcastq_avx512f();
            do {
              vpcmpgtq_avx512f(auVar37,auVar36);
              uVar22 = uVar22 + 8;
              auVar36 = vpaddq_avx512f(auVar36,auVar39);
              auVar30 = vmovdqu16_avx512vl(auVar29);
              *(undefined1 (*) [16])(lVar12 + param_11 + uVar24 * 2) = auVar30;
              lVar12 = lVar12 + 0x10;
            } while (uVar22 < uVar15 - uVar24);
          }
        }
      }
      else if (uVar17 == 3) {
        if (0 < (longlong)uVar15) {
          lVar12 = 1;
          lVar10 = 0;
          if (uVar15 >> 1 != 0) {
            lVar12 = param_11 + lVar14 * 2;
            uVar24 = 0;
            do {
              uVar22 = uVar24;
              *(undefined2 *)(param_11 + uVar22 * 4) = *(undefined2 *)(lVar10 + -2 + lVar12);
              lVar1 = lVar10 + -4;
              lVar10 = lVar10 + -4;
              *(undefined2 *)(param_11 + 2 + uVar22 * 4) = *(undefined2 *)(lVar1 + lVar12);
              uVar24 = uVar22 + 1;
            } while (uVar24 < uVar15 >> 1);
            lVar12 = uVar22 + 2 + uVar24;
          }
          uVar24 = lVar12 - 1;
          if (uVar24 < uVar15) {
            *(undefined2 *)(param_11 + uVar24 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar14 - uVar24) * 2);
          }
        }
      }
      else if ((uVar17 == 6) && (0 < (longlong)uVar15)) {
        if ((longlong)uVar15 < 0x20) {
          uVar24 = 0;
        }
        else {
          if ((longlong)uVar15 < 0x4b) {
            uVar22 = 0;
            uVar24 = uVar15 & 0xffffffffffffffe0;
          }
          else {
            uVar22 = param_11 & 0x3f;
            if ((param_11 & 1) == 0) {
              if ((uVar22 != 0) &&
                 (uVar22 = 0x40 - uVar22 >> 1, (longlong)uVar15 < (longlong)uVar22)) {
                uVar22 = uVar15;
              }
            }
            else {
              uVar22 = 0;
            }
            uVar24 = uVar15 - (uVar15 - uVar22 & 0x1f);
            if (uVar22 != 0) {
              uVar13 = 0;
              lVar12 = 0;
              auVar36 = vmovdqu32_avx512f(_DAT_143088940);
              auVar29 = vpbroadcastw_avx512vl();
              auVar37 = vpbroadcastq_avx512f();
              do {
                vpcmpgtq_avx512f(auVar37,auVar36);
                uVar13 = uVar13 + 8;
                auVar36 = vpaddq_avx512f(auVar36,auVar39);
                auVar30 = vmovdqu16_avx512vl(auVar29);
                *(undefined1 (*) [16])(lVar12 + param_11) = auVar30;
                lVar12 = lVar12 + 0x10;
              } while (uVar13 < uVar22);
              if (uVar15 == uVar22) goto LAB_140254300;
            }
          }
          if ((longlong)(uVar22 + 0x20) <= (longlong)uVar24) {
            auVar39 = vpbroadcastw_avx512bw();
            do {
              auVar36 = vmovdqu32_avx512f(auVar39);
              *(undefined1 (*) [64])(param_11 + uVar22 * 2) = auVar36;
              uVar22 = uVar22 + 0x20;
            } while (uVar22 < uVar24);
          }
        }
        auVar39 = _DAT_143088b00;
        if (uVar24 + 1 <= uVar15) {
          uVar22 = 0;
          auVar36 = vmovdqu32_avx512f(_DAT_143088940);
          auVar29 = vpbroadcastw_avx512vl();
          lVar12 = 0;
          auVar37 = vpbroadcastq_avx512f();
          do {
            vpcmpgtq_avx512f(auVar37,auVar36);
            uVar22 = uVar22 + 8;
            auVar36 = vpaddq_avx512f(auVar36,auVar39);
            auVar30 = vmovdqu16_avx512vl(auVar29);
            *(undefined1 (*) [16])(lVar12 + param_11 + uVar24 * 2) = auVar30;
            lVar12 = lVar12 + 0x10;
          } while (uVar22 < uVar15 - uVar24);
        }
      }
LAB_140254300:
      (**(code **)(&UNK_143088b80 + lVar8 * 8))(uVar9,param_4,uVar15,param_9,param_10);
      puVar26 = puVar26 + uVar15;
      lVar19 = lVar19 - uVar15;
      param_4 = param_4 + uVar15;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (**(code **)(&UNK_143088b80 + lVar8 * 8))(puVar26,param_4,lVar19,param_9,param_10);
    return;
  }
  if ((longlong)uVar15 < lVar19) {
    lVar19 = lVar19 - uVar15;
    (**(code **)(&UNK_143088b80 + lVar8 * 8))(puVar26,param_4,lVar19,param_9,param_10);
    puVar26 = puVar26 + lVar19;
    param_4 = param_4 + lVar19;
  }
  auVar39 = _DAT_143088900;
  if (uVar15 == 1) {
    uVar16 = (uint)puVar26[-1];
    if (uVar17 == 1) {
      uVar16 = uVar16 + *puVar26;
    }
    else if (uVar17 == 3) {
      uVar16 = uVar16 * 2;
    }
    else if (uVar17 == 6) {
      uVar16 = uVar25 + uVar16;
    }
    auVar43._0_4_ = (float)*puVar26;
    auVar43._4_8_ = SUB128(ZEXT812(0),4);
    auVar43._12_4_ = 0;
    auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar16 * *param_9)),auVar43,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar28._0_4_;
    return;
  }
  if (uVar15 == 2) {
    uVar27 = puVar26[-2];
    uVar2 = puVar26[-1];
    uVar3 = *puVar26;
    uVar4 = puVar26[1];
    uVar16 = (uint)uVar3;
    if (uVar17 == 1) {
      uVar17 = (uint)uVar4;
      auVar46._0_4_ = (float)uVar16;
      auVar46._4_8_ = SUB128(ZEXT812(0),4);
      auVar46._12_4_ = 0;
      auVar56._0_4_ = (float)(uVar2 + uVar17);
      auVar56._4_8_ = SUB128(ZEXT812(0),4);
      auVar56._12_4_ = 0;
      auVar62._0_4_ = (float)uVar17;
      auVar62._4_8_ = SUB128(ZEXT812(0),4);
      auVar62._12_4_ = 0;
      auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar27 + uVar17) * *param_9)),auVar46,
                                ZEXT416((uint)param_9[2]));
      auVar51._0_4_ = (float)(uVar17 + uVar16);
      auVar51._4_8_ = SUB128(ZEXT812(0),4);
      auVar51._12_4_ = 0;
      auVar28 = vfmadd231ss_fma(auVar28,auVar56,ZEXT416((uint)param_9[1]));
      *param_4 = auVar28._0_4_;
      auVar28 = vmulss_avx512f(auVar51,ZEXT416((uint)param_9[1]));
      auVar28 = vfmadd231ss_avx512f(auVar28,auVar56,ZEXT416((uint)*param_9));
      auVar28 = vfmadd231ss_avx512f(auVar28,auVar62,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar28._0_4_;
      return;
    }
    if (uVar17 != 3) {
      if (uVar17 != 6) {
        return;
      }
      auVar45._0_4_ = (float)uVar16;
      auVar45._4_8_ = SUB128(ZEXT812(0),4);
      auVar45._12_4_ = 0;
      auVar50._0_4_ = (float)(uVar27 + uVar25);
      auVar50._4_8_ = SUB128(ZEXT812(0),4);
      auVar50._12_4_ = 0;
      auVar55._0_4_ = (float)(uVar2 + uVar25);
      auVar55._4_8_ = SUB128(ZEXT812(0),4);
      auVar55._12_4_ = 0;
      auVar29 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)uVar2 + (uint)uVar4) * param_9[1])),
                                auVar45,ZEXT416((uint)param_9[2]));
      auVar30 = vxorps_avx512vl(auVar28,auVar28);
      auVar61._0_4_ = (float)uVar4;
      auVar61._4_8_ = SUB128(ZEXT812(0),4);
      auVar61._12_4_ = 0;
      auVar28 = vfmadd231ss_fma(auVar29,auVar50,ZEXT416((uint)*param_9));
      *param_4 = auVar28._0_4_;
      auVar29 = vmulss_avx512f(auVar55,ZEXT416((uint)*param_9));
      auVar28 = vcvtsi2ss_avx512f(auVar30,uVar16 + uVar25);
      auVar29 = vfmadd231ss_avx512f(auVar29,auVar61,ZEXT416((uint)param_9[2]));
      auVar28 = vfmadd231ss_avx512f(auVar29,auVar28,ZEXT416((uint)param_9[1]));
      param_4[1] = auVar28._0_4_;
      return;
    }
    auVar44._0_4_ = (float)((uint)uVar27 + (uint)uVar3);
    auVar44._4_8_ = SUB128(ZEXT812(0),4);
    auVar44._12_4_ = 0;
    auVar49._0_4_ = (float)((uint)uVar2 + (uint)uVar4);
    auVar49._4_8_ = SUB128(ZEXT812(0),4);
    auVar49._12_4_ = 0;
    auVar54._0_4_ = (float)((uint)uVar3 * 2);
    auVar54._4_8_ = SUB128(ZEXT812(0),4);
    auVar54._12_4_ = 0;
    auVar29 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar3 * param_9[2])),auVar44,
                              ZEXT416((uint)*param_9));
    auVar28 = vxorps_avx512vl(auVar28,auVar28);
    auVar60._0_4_ = (float)((uint)uVar2 * 2);
    auVar60._4_8_ = SUB128(ZEXT812(0),4);
    auVar60._12_4_ = 0;
    auVar28 = vcvtsi2ss_avx512f(auVar28,(uint)uVar4);
    auVar29 = vfmadd231ss_fma(auVar29,auVar49,ZEXT416((uint)param_9[1]));
    *param_4 = auVar29._0_4_;
    auVar29 = vmulss_avx512f(auVar54,ZEXT416((uint)param_9[1]));
    auVar29 = vfmadd231ss_avx512f(auVar29,auVar60,ZEXT416((uint)*param_9));
    auVar28 = vfmadd231ss_avx512f(auVar29,auVar28,ZEXT416((uint)param_9[2]));
    param_4[1] = auVar28._0_4_;
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      puVar20 = puVar26 + -uVar15;
      lVar19 = lVar14 * 2 + -2;
      if ((lVar19 <= (longlong)(param_11 - (longlong)puVar20)) ||
         (lVar19 <= (longlong)-(param_11 - (longlong)puVar20))) {
        if ((longlong)uVar18 < 0x20) {
          uVar9 = 0;
        }
        else {
          if ((longlong)uVar18 < 0x76) {
            uVar24 = 0;
            uVar9 = uVar18 & 0xffffffffffffffe0;
          }
          else {
            uVar24 = param_11 & 0x3f;
            if ((param_11 & 1) == 0) {
              if ((uVar24 != 0) &&
                 (uVar24 = 0x40 - uVar24 >> 1, (longlong)uVar18 < (longlong)uVar24)) {
                uVar24 = uVar18;
              }
            }
            else {
              uVar24 = 0;
            }
            uVar9 = uVar18 - (uVar18 - uVar24 & 0x1f);
            if (uVar24 != 0) {
              uVar22 = 0;
              lVar19 = 0;
              auVar36 = vmovdqu32_avx512f(_DAT_143088940);
              auVar37 = vmovdqu32_avx512f(_DAT_143088980);
              auVar38 = vpbroadcastq_avx512f();
              do {
                uVar5 = vpcmpgtq_avx512f(auVar38,auVar36);
                uVar22 = uVar22 + 0x10;
                uVar6 = vpcmpgtq_avx512f(auVar38,auVar37);
                bVar7 = (byte)uVar6;
                auVar36 = vpaddq_avx512f(auVar36,auVar39);
                auVar37 = vpaddq_avx512f(auVar37,auVar39);
                uVar27 = CONCAT11(bVar7,(byte)uVar5);
                auVar33 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar19 + (longlong)puVar20));
                auVar34._2_2_ = (ushort)((byte)(uVar27 >> 1) & 1) * auVar33._2_2_;
                auVar34._0_2_ = (ushort)((byte)uVar5 & 1) * auVar33._0_2_;
                auVar34._4_2_ = (ushort)((byte)(uVar27 >> 2) & 1) * auVar33._4_2_;
                auVar34._6_2_ = (ushort)((byte)(uVar27 >> 3) & 1) * auVar33._6_2_;
                auVar34._8_2_ = (ushort)((byte)(uVar27 >> 4) & 1) * auVar33._8_2_;
                auVar34._10_2_ = (ushort)((byte)(uVar27 >> 5) & 1) * auVar33._10_2_;
                auVar34._12_2_ = (ushort)((byte)(uVar27 >> 6) & 1) * auVar33._12_2_;
                auVar34._14_2_ = (ushort)((byte)(uVar27 >> 7) & 1) * auVar33._14_2_;
                auVar34._16_2_ = (ushort)(bVar7 & 1) * auVar33._16_2_;
                auVar34._18_2_ = (ushort)(bVar7 >> 1 & 1) * auVar33._18_2_;
                auVar34._20_2_ = (ushort)(bVar7 >> 2 & 1) * auVar33._20_2_;
                auVar34._22_2_ = (ushort)(bVar7 >> 3 & 1) * auVar33._22_2_;
                auVar34._24_2_ = (ushort)(bVar7 >> 4 & 1) * auVar33._24_2_;
                auVar34._26_2_ = (ushort)(bVar7 >> 5 & 1) * auVar33._26_2_;
                auVar34._28_2_ = (ushort)(bVar7 >> 6 & 1) * auVar33._28_2_;
                auVar34._30_2_ = (ushort)(bVar7 >> 7) * auVar33._30_2_;
                auVar33 = vmovdqu16_avx512vl(auVar34);
                *(undefined1 (*) [32])(lVar19 + param_11) = auVar33;
                lVar19 = lVar19 + 0x20;
              } while (uVar22 < uVar24);
              if (uVar18 == uVar24) goto LAB_140254804;
            }
          }
          if ((longlong)(uVar24 + 0x20) <= (longlong)uVar9) {
            do {
              auVar39 = vmovdqu32_avx512f(*(undefined1 (*) [64])(puVar20 + uVar24));
              *(undefined1 (*) [64])(param_11 + uVar24 * 2) = auVar39;
              uVar24 = uVar24 + 0x20;
            } while (uVar24 < uVar9);
          }
        }
        auVar39 = _DAT_143088900;
        if (uVar9 + 1 <= uVar18) {
          uVar24 = 0;
          auVar36 = vmovdqu32_avx512f(_DAT_143088940);
          auVar37 = vmovdqu32_avx512f(_DAT_143088980);
          auVar38 = vpbroadcastq_avx512f();
          lVar19 = 0;
          do {
            uVar5 = vpcmpgtq_avx512f(auVar38,auVar36);
            uVar24 = uVar24 + 0x10;
            uVar6 = vpcmpgtq_avx512f(auVar38,auVar37);
            bVar7 = (byte)uVar6;
            auVar36 = vpaddq_avx512f(auVar36,auVar39);
            auVar37 = vpaddq_avx512f(auVar37,auVar39);
            uVar27 = CONCAT11(bVar7,(byte)uVar5);
            auVar33 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                          ((longlong)puVar20 + lVar19 + uVar9 * 2));
            auVar35._2_2_ = (ushort)((byte)(uVar27 >> 1) & 1) * auVar33._2_2_;
            auVar35._0_2_ = (ushort)((byte)uVar5 & 1) * auVar33._0_2_;
            auVar35._4_2_ = (ushort)((byte)(uVar27 >> 2) & 1) * auVar33._4_2_;
            auVar35._6_2_ = (ushort)((byte)(uVar27 >> 3) & 1) * auVar33._6_2_;
            auVar35._8_2_ = (ushort)((byte)(uVar27 >> 4) & 1) * auVar33._8_2_;
            auVar35._10_2_ = (ushort)((byte)(uVar27 >> 5) & 1) * auVar33._10_2_;
            auVar35._12_2_ = (ushort)((byte)(uVar27 >> 6) & 1) * auVar33._12_2_;
            auVar35._14_2_ = (ushort)((byte)(uVar27 >> 7) & 1) * auVar33._14_2_;
            auVar35._16_2_ = (ushort)(bVar7 & 1) * auVar33._16_2_;
            auVar35._18_2_ = (ushort)(bVar7 >> 1 & 1) * auVar33._18_2_;
            auVar35._20_2_ = (ushort)(bVar7 >> 2 & 1) * auVar33._20_2_;
            auVar35._22_2_ = (ushort)(bVar7 >> 3 & 1) * auVar33._22_2_;
            auVar35._24_2_ = (ushort)(bVar7 >> 4 & 1) * auVar33._24_2_;
            auVar35._26_2_ = (ushort)(bVar7 >> 5 & 1) * auVar33._26_2_;
            auVar35._28_2_ = (ushort)(bVar7 >> 6 & 1) * auVar33._28_2_;
            auVar35._30_2_ = (ushort)(bVar7 >> 7) * auVar33._30_2_;
            auVar33 = vmovdqu16_avx512vl(auVar35);
            *(undefined1 (*) [32])(lVar19 + param_11 + uVar9 * 2) = auVar33;
            lVar19 = lVar19 + 0x20;
          } while (uVar24 < uVar18 - uVar9);
        }
        goto LAB_140254804;
      }
    }
    lVar19 = 1;
    uVar9 = lVar14 - 1U >> 1;
    uVar18 = 0;
    if (uVar9 != 0) {
      do {
        uVar24 = uVar18;
        *(ushort *)(param_11 + uVar24 * 4) = puVar26[uVar24 * 2 - uVar15];
        *(ushort *)(param_11 + 2 + uVar24 * 4) = puVar26[(uVar24 * 2 + 1) - uVar15];
        uVar18 = uVar24 + 1;
      } while (uVar18 < uVar9);
      lVar19 = uVar24 + 2 + uVar18;
    }
    uVar18 = lVar19 - 1;
    if (uVar18 < lVar14 - 1U) {
      *(ushort *)(param_11 + uVar18 * 2) = puVar26[uVar18 - uVar15];
    }
  }
LAB_140254804:
  auVar39 = _DAT_143088b00;
  if (uVar17 == 1) {
    if (0 < (longlong)uVar15) {
      if (6 < (longlong)uVar15) {
        lVar19 = param_11 + lVar14 * 2;
        uVar18 = lVar19 - 2;
        lVar12 = uVar18 - (lVar19 + -4);
        if ((1 < lVar12) || ((longlong)(uVar15 * 2) <= -lVar12)) {
          if ((longlong)uVar15 < 0x20) {
            uVar18 = 0;
          }
          else {
            if ((longlong)uVar15 < 0x4b) {
              uVar9 = 0;
              uVar18 = uVar15 & 0xffffffffffffffe0;
            }
            else {
              uVar9 = uVar18 & 0x3f;
              if ((uVar18 & 1) == 0) {
                if ((uVar9 != 0) && (uVar9 = 0x40 - uVar9 >> 1, (longlong)uVar15 < (longlong)uVar9))
                {
                  uVar9 = uVar15;
                }
              }
              else {
                uVar9 = 0;
              }
              uVar18 = uVar15 - (uVar15 - uVar9 & 0x1f);
              if (uVar9 != 0) {
                uVar24 = 0;
                lVar14 = 0;
                auVar36 = vmovdqu32_avx512f(_DAT_143088940);
                auVar37 = vpbroadcastq_avx512f();
                auVar28 = vpbroadcastw_avx512vl();
                do {
                  vpcmpgtq_avx512f(auVar37,auVar36);
                  uVar24 = uVar24 + 8;
                  auVar36 = vpaddq_avx512f(auVar36,auVar39);
                  auVar29 = vmovdqu16_avx512vl(auVar28);
                  *(undefined1 (*) [16])(lVar14 + -2 + lVar19) = auVar29;
                  lVar14 = lVar14 + 0x10;
                } while (uVar24 < uVar9);
                if (uVar15 == uVar9) goto LAB_140254c63;
              }
            }
            if ((longlong)(uVar9 + 0x20) <= (longlong)uVar18) {
              auVar39 = vpbroadcastw_avx512bw();
              do {
                auVar36 = vmovdqu32_avx512f(auVar39);
                *(undefined1 (*) [64])(lVar19 + -2 + uVar9 * 2) = auVar36;
                uVar9 = uVar9 + 0x20;
              } while (uVar9 < uVar18);
            }
          }
          auVar39 = _DAT_143088b00;
          if (uVar18 + 1 <= uVar15) {
            uVar9 = 0;
            lVar14 = 0;
            auVar28 = vpbroadcastw_avx512vl();
            auVar36 = vpbroadcastq_avx512f();
            auVar37 = vmovdqu32_avx512f(_DAT_143088940);
            do {
              vpcmpgtq_avx512f(auVar36,auVar37);
              uVar9 = uVar9 + 8;
              auVar37 = vpaddq_avx512f(auVar37,auVar39);
              auVar29 = vmovdqu16_avx512vl(auVar28);
              *(undefined1 (*) [16])(lVar14 + -2 + lVar19 + uVar18 * 2) = auVar29;
              lVar14 = lVar14 + 0x10;
            } while (uVar9 < uVar15 - uVar18);
          }
          goto LAB_140254c63;
        }
      }
      lVar19 = 1;
      if (uVar15 >> 1 != 0) {
        lVar19 = param_11 + lVar14 * 2;
        uVar18 = 0;
        do {
          uVar9 = uVar18;
          *(undefined2 *)(lVar19 + -2 + uVar9 * 4) = *(undefined2 *)(lVar19 + -4);
          *(undefined2 *)(lVar19 + uVar9 * 4) = *(undefined2 *)(lVar19 + -4);
          uVar18 = uVar9 + 1;
        } while (uVar18 < uVar15 >> 1);
        lVar19 = uVar9 + 2 + uVar18;
      }
      if (lVar19 - 1U < uVar15) {
        *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar19) * 2) =
             *(undefined2 *)((param_11 - 4) + lVar14 * 2);
      }
    }
  }
  else if (uVar17 == 3) {
    if (0 < (longlong)uVar15) {
      lVar19 = 1;
      lVar12 = 0;
      if (uVar15 >> 1 != 0) {
        lVar19 = param_11 + lVar14 * 2;
        uVar18 = 0;
        do {
          uVar9 = uVar18;
          *(undefined2 *)(lVar19 + -2 + uVar9 * 4) = *(undefined2 *)(lVar12 + -6 + lVar19);
          lVar10 = lVar12 + -8;
          lVar12 = lVar12 + -4;
          *(undefined2 *)(lVar19 + uVar9 * 4) = *(undefined2 *)(lVar10 + lVar19);
          uVar18 = uVar9 + 1;
        } while (uVar18 < uVar15 >> 1);
        lVar19 = uVar9 + 2 + uVar18;
      }
      if (lVar19 - 1U < uVar15) {
        *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar19) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar14 - (lVar19 - 1U)) * 2);
      }
    }
  }
  else if ((uVar17 == 6) && (0 < (longlong)uVar15)) {
    if ((longlong)uVar15 < 0x20) {
      uVar18 = 0;
    }
    else {
      if ((longlong)uVar15 < 0x4b) {
        uVar9 = 0;
        uVar18 = uVar15 & 0xffffffffffffffe0;
      }
      else {
        lVar19 = param_11 + lVar14 * 2;
        uVar18 = lVar19 - 2;
        uVar9 = uVar18 & 0x3f;
        if ((uVar18 & 1) == 0) {
          if ((uVar9 != 0) && (uVar9 = 0x40 - uVar9 >> 1, (longlong)uVar15 < (longlong)uVar9)) {
            uVar9 = uVar15;
          }
        }
        else {
          uVar9 = 0;
        }
        uVar18 = uVar15 - (uVar15 - uVar9 & 0x1f);
        if (uVar9 != 0) {
          uVar24 = 0;
          lVar12 = 0;
          auVar36 = vmovdqu32_avx512f(_DAT_143088940);
          auVar37 = vpbroadcastq_avx512f();
          auVar28 = vpbroadcastw_avx512vl();
          do {
            vpcmpgtq_avx512f(auVar37,auVar36);
            uVar24 = uVar24 + 8;
            auVar36 = vpaddq_avx512f(auVar36,auVar39);
            auVar29 = vmovdqu16_avx512vl(auVar28);
            *(undefined1 (*) [16])(lVar12 + -2 + lVar19) = auVar29;
            lVar12 = lVar12 + 0x10;
          } while (uVar24 < uVar9);
          if (uVar15 == uVar9) goto LAB_140254c63;
        }
      }
      if ((longlong)(uVar9 + 0x20) <= (longlong)uVar18) {
        auVar39 = vpbroadcastw_avx512bw();
        do {
          auVar36 = vmovdqu32_avx512f(auVar39);
          *(undefined1 (*) [64])(param_11 + lVar14 * 2 + -2 + uVar9 * 2) = auVar36;
          uVar9 = uVar9 + 0x20;
        } while (uVar9 < uVar18);
      }
    }
    auVar39 = _DAT_143088b00;
    if (uVar18 + 1 <= uVar15) {
      uVar9 = 0;
      auVar28 = vpbroadcastw_avx512vl();
      auVar36 = vpbroadcastq_avx512f();
      auVar37 = vmovdqu32_avx512f(_DAT_143088940);
      lVar19 = 0;
      do {
        vpcmpgtq_avx512f(auVar36,auVar37);
        uVar9 = uVar9 + 8;
        auVar37 = vpaddq_avx512f(auVar37,auVar39);
        auVar29 = vmovdqu16_avx512vl(auVar28);
        *(undefined1 (*) [16])(lVar19 + -2 + param_11 + (lVar14 + uVar18) * 2) = auVar29;
        lVar19 = lVar19 + 0x10;
      } while (uVar9 < uVar15 - uVar18);
    }
  }
LAB_140254c63:
  (**(code **)(&UNK_143088b80 + lVar8 * 8))(param_11 + uVar15 * 2,param_4,uVar15,param_9,param_10);
  return;
}

