
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2df80(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  byte bVar23;
  longlong lVar24;
  ulonglong uVar25;
  ushort uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
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
  longlong lStack_60;
  
  auVar35 = _DAT_14308e940;
  auVar27 = in_ZMM16._0_16_;
  param_2 = param_2 * param_3;
  pbVar9 = (byte *)(param_1 + param_2);
  uVar22 = 0;
  lVar7 = (longlong)param_6;
  lVar24 = (longlong)param_10;
  uVar16 = param_7 & 0xf;
  uVar25 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_14308eb80 + lVar7 * 8))(pbVar9,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar16 == 6) {
    uVar22 = (uint)*param_8;
  }
  lVar13 = *param_5;
  uVar15 = lVar24 - 1;
  if (lVar13 < (longlong)uVar15) {
    lVar24 = -uVar25;
    lVar8 = 0;
    if (lVar24 < (longlong)(uVar25 + lVar13)) {
      uVar11 = param_7 & 0x80;
      uVar19 = param_7 & 0x40;
      do {
        lVar21 = lVar24;
        if (((lVar24 < 0) || (lVar13 <= lVar24)) && (param_7 != 0xf0)) {
          if (uVar16 != 6) {
            if (uVar16 == 1) {
              if (lVar24 < 0) {
                lVar21 = 0;
                if (uVar19 != 0) {
                  lVar21 = lVar24;
                }
              }
              else if (uVar11 == 0) {
                lVar21 = lVar13 + -1;
              }
            }
            else if (uVar16 == 3) {
              if (lVar13 < 2) {
                if (lVar24 < 0) {
                  if (uVar19 == 0) {
                    lVar21 = -lVar24;
                    if (uVar11 == 0) {
                      lVar21 = 0;
                    }
                  }
                }
                else if ((0 < lVar24) && (uVar11 == 0)) {
                  lVar21 = -lVar24;
                  if (uVar19 == 0) {
                    lVar21 = 0;
                  }
                }
              }
              else if ((lVar24 < 0) || (lVar13 <= lVar24)) {
                if (lVar24 < 0) goto LAB_140a2f620;
                while (uVar11 == 0) {
                  for (lVar21 = (lVar13 + -1) * 2 - lVar21; lVar21 < 0; lVar21 = -lVar21) {
LAB_140a2f620:
                    if (uVar19 != 0) goto LAB_140a2f4c3;
                  }
                  if (lVar21 < lVar13) break;
                }
              }
            }
            goto LAB_140a2f4c3;
          }
          uVar17 = uVar19;
          if (-1 < lVar24) {
            uVar17 = uVar11;
          }
          if (uVar17 != 0) goto LAB_140a2f4c3;
          bVar23 = (byte)uVar22;
        }
        else {
LAB_140a2f4c3:
          bVar23 = pbVar9[lVar21];
        }
        lVar24 = lVar24 + 1;
        *(byte *)(lVar8 + param_11) = bVar23;
        lVar8 = lVar8 + 1;
      } while (lVar24 < (longlong)(uVar25 + lVar13));
    }
    (**(code **)(&UNK_14308eb80 + lVar7 * 8))(param_11 + uVar25,param_4,lVar13,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar25 == 1) {
      bVar23 = pbVar9[1];
      if (uVar16 == 1) {
        uVar11 = (uint)bVar23 + (uint)*pbVar9;
      }
      else if (uVar16 == 3) {
        uVar11 = (uint)bVar23 * 2;
      }
      else {
        uVar11 = (uint)bVar23;
        if (uVar16 == 6) {
          uVar11 = bVar23 + uVar22;
        }
      }
      auVar37._0_4_ = (float)*pbVar9;
      auVar37._4_8_ = SUB128(ZEXT812(0),4);
      auVar37._12_4_ = 0;
      pbVar9 = (byte *)(param_1 + 1 + param_2);
      lVar13 = lVar13 + -1;
      auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar11 * *param_9)),auVar37,
                                ZEXT416((uint)param_9[1]));
      *param_4 = auVar28._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar25 == 2) {
      bVar23 = pbVar9[2];
      uVar11 = (uint)pbVar9[1];
      bVar2 = *pbVar9;
      bVar3 = pbVar9[3];
      uVar19 = (uint)bVar23;
      if (uVar16 == 1) {
        uVar17 = (uint)bVar2;
        auVar59._0_4_ = (float)(bVar3 + uVar17);
        auVar59._4_8_ = SUB128(ZEXT812(0),4);
        auVar59._12_4_ = 0;
        auVar27._0_4_ = (float)uVar17;
        auVar27._4_8_ = SUB128(ZEXT812(0),4);
        auVar27._12_4_ = 0;
        auVar49._0_4_ = (float)(uVar19 + uVar17);
        auVar49._4_8_ = SUB128(ZEXT812(0),4);
        auVar49._12_4_ = 0;
        auVar53._0_4_ = (float)uVar11;
        auVar53._4_8_ = SUB128(ZEXT812(0),4);
        auVar53._12_4_ = 0;
        auVar27 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar17 + uVar11) * param_9[1])),auVar27,
                                  ZEXT416((uint)param_9[2]));
        auVar27 = vfmadd231ss_fma(auVar27,auVar49,ZEXT416((uint)*param_9));
        *param_4 = auVar27._0_4_;
        auVar27 = vmulss_avx512f(auVar49,ZEXT416((uint)param_9[1]));
        auVar27 = vfmadd231ss_avx512f(auVar27,auVar53,ZEXT416((uint)param_9[2]));
        auVar27 = vfmadd231ss_avx512f(auVar27,auVar59,ZEXT416((uint)*param_9));
        param_4[1] = auVar27._0_4_;
      }
      else if (uVar16 == 3) {
        auVar57._0_4_ = (float)uVar11;
        auVar57._4_8_ = SUB128(ZEXT812(0),4);
        auVar57._12_4_ = 0;
        auVar38._0_4_ = (float)bVar2;
        auVar38._4_8_ = SUB128(ZEXT812(0),4);
        auVar38._12_4_ = 0;
        auVar27 = vxorps_avx512vl(auVar27,auVar27);
        auVar27 = vcvtsi2ss_avx512f(auVar27,bVar3 + uVar11);
        auVar45._0_4_ = (float)(uVar19 * 2);
        auVar45._4_8_ = SUB128(ZEXT812(0),4);
        auVar45._12_4_ = 0;
        auVar51._0_4_ = (float)(bVar2 + uVar19);
        auVar51._4_8_ = SUB128(ZEXT812(0),4);
        auVar51._12_4_ = 0;
        auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)(uVar11 * 2) * param_9[1])),auVar38,
                                  ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_fma(auVar28,auVar45,ZEXT416((uint)*param_9));
        *param_4 = auVar28._0_4_;
        auVar28 = vmulss_avx512f(auVar51,ZEXT416((uint)param_9[1]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar57,ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar27,ZEXT416((uint)*param_9));
        param_4[1] = auVar28._0_4_;
      }
      else if (uVar16 == 6) {
        auVar27 = vxorps_avx512vl(auVar27,auVar27);
        auVar27 = vcvtsi2ss_avx512f(auVar27,bVar3 + uVar22);
        auVar39._0_4_ = (float)bVar2;
        auVar39._4_8_ = SUB128(ZEXT812(0),4);
        auVar39._12_4_ = 0;
        auVar52._0_4_ = (float)((uint)bVar2 + (uint)bVar23);
        auVar52._4_8_ = SUB128(ZEXT812(0),4);
        auVar52._12_4_ = 0;
        auVar58._0_4_ = (float)uVar11;
        auVar58._4_8_ = SUB128(ZEXT812(0),4);
        auVar58._12_4_ = 0;
        auVar46._0_4_ = (float)(uVar11 + uVar22);
        auVar46._4_8_ = SUB128(ZEXT812(0),4);
        auVar46._12_4_ = 0;
        auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar23 + uVar22) * *param_9)),auVar39,
                                  ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_fma(auVar28,auVar46,ZEXT416((uint)param_9[1]));
        *param_4 = auVar28._0_4_;
        auVar28 = vmulss_avx512f(auVar52,ZEXT416((uint)param_9[1]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar58,ZEXT416((uint)param_9[2]));
        auVar28 = vfmadd231ss_avx512f(auVar28,auVar27,ZEXT416((uint)*param_9));
        param_4[1] = auVar28._0_4_;
      }
      param_4 = param_4 + 2;
      pbVar9 = (byte *)(param_1 + 2 + param_2);
      lVar13 = lVar13 + -2;
    }
    else {
      if (0 < (longlong)uVar15) {
        if (6 < (longlong)uVar15) {
          lVar8 = (param_11 + uVar25) - (longlong)pbVar9;
          if ((lVar24 + -1 <= lVar8) || (lVar24 + -1 <= -lVar8)) {
            if ((longlong)uVar15 < 0x40) {
              uVar12 = 0;
            }
            else {
              uVar10 = param_11 + uVar25;
              if ((longlong)uVar15 < 0x116) {
                uVar18 = 0;
                uVar12 = uVar15 & 0xffffffffffffffc0;
              }
              else {
                uVar12 = uVar10 & 0x3f;
                uVar18 = uVar12;
                if ((uVar12 != 0) &&
                   (uVar18 = 0x40 - uVar12, (longlong)uVar15 < (longlong)(0x40 - uVar12))) {
                  uVar18 = uVar15;
                }
                uVar12 = uVar15 - (uVar15 - uVar18 & 0x3f);
                if (uVar18 != 0) {
                  uVar20 = 0;
                  auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
                  auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
                  auVar34 = vpbroadcastq_avx512f();
                  do {
                    uVar5 = vpcmpgtq_avx512f(auVar34,auVar32);
                    uVar6 = vpcmpgtq_avx512f(auVar34,auVar33);
                    bVar23 = (byte)uVar6;
                    auVar32 = vpaddq_avx512f(auVar32,auVar35);
                    auVar33 = vpaddq_avx512f(auVar33,auVar35);
                    uVar26 = CONCAT11(bVar23,(byte)uVar5);
                    auVar28 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pbVar9 + uVar20));
                    auVar29[1] = ((byte)(uVar26 >> 1) & 1) * auVar28[1];
                    auVar29[0] = ((byte)uVar5 & 1) * auVar28[0];
                    auVar29[2] = ((byte)(uVar26 >> 2) & 1) * auVar28[2];
                    auVar29[3] = ((byte)(uVar26 >> 3) & 1) * auVar28[3];
                    auVar29[4] = ((byte)(uVar26 >> 4) & 1) * auVar28[4];
                    auVar29[5] = ((byte)(uVar26 >> 5) & 1) * auVar28[5];
                    auVar29[6] = ((byte)(uVar26 >> 6) & 1) * auVar28[6];
                    auVar29[7] = ((byte)(uVar26 >> 7) & 1) * auVar28[7];
                    auVar29[8] = (bVar23 & 1) * auVar28[8];
                    auVar29[9] = (bVar23 >> 1 & 1) * auVar28[9];
                    auVar29[10] = (bVar23 >> 2 & 1) * auVar28[10];
                    auVar29[0xb] = (bVar23 >> 3 & 1) * auVar28[0xb];
                    auVar29[0xc] = (bVar23 >> 4 & 1) * auVar28[0xc];
                    auVar29[0xd] = (bVar23 >> 5 & 1) * auVar28[0xd];
                    auVar29[0xe] = (bVar23 >> 6 & 1) * auVar28[0xe];
                    auVar29[0xf] = -((char)bVar23 >> 7) * auVar28[0xf];
                    auVar28 = vmovdqu8_avx512vl(auVar29);
                    *(undefined1 (*) [16])(uVar20 + uVar10) = auVar28;
                    uVar20 = uVar20 + 0x10;
                  } while (uVar20 < uVar18);
                  if (uVar15 == uVar18) goto LAB_140a2e4a7;
                }
              }
              if ((longlong)(uVar18 + 0x40) <= (longlong)uVar12) {
                do {
                  auVar35 = vmovdqu32_avx512f(*(undefined1 (*) [64])(pbVar9 + uVar18));
                  *(undefined1 (*) [64])(uVar18 + uVar10) = auVar35;
                  uVar18 = uVar18 + 0x40;
                } while (uVar18 < uVar12);
              }
            }
            auVar35 = _DAT_14308e940;
            lStack_60 = param_11 + uVar25;
            if (uVar12 + 1 <= uVar15) {
              uVar10 = 0;
              auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar34 = vpbroadcastq_avx512f();
              do {
                uVar5 = vpcmpgtq_avx512f(auVar34,auVar32);
                uVar6 = vpcmpgtq_avx512f(auVar34,auVar33);
                bVar23 = (byte)uVar6;
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                uVar26 = CONCAT11(bVar23,(byte)uVar5);
                auVar29 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pbVar9 + uVar10 + uVar12));
                auVar28[1] = ((byte)(uVar26 >> 1) & 1) * auVar29[1];
                auVar28[0] = ((byte)uVar5 & 1) * auVar29[0];
                auVar28[2] = ((byte)(uVar26 >> 2) & 1) * auVar29[2];
                auVar28[3] = ((byte)(uVar26 >> 3) & 1) * auVar29[3];
                auVar28[4] = ((byte)(uVar26 >> 4) & 1) * auVar29[4];
                auVar28[5] = ((byte)(uVar26 >> 5) & 1) * auVar29[5];
                auVar28[6] = ((byte)(uVar26 >> 6) & 1) * auVar29[6];
                auVar28[7] = ((byte)(uVar26 >> 7) & 1) * auVar29[7];
                auVar28[8] = (bVar23 & 1) * auVar29[8];
                auVar28[9] = (bVar23 >> 1 & 1) * auVar29[9];
                auVar28[10] = (bVar23 >> 2 & 1) * auVar29[10];
                auVar28[0xb] = (bVar23 >> 3 & 1) * auVar29[0xb];
                auVar28[0xc] = (bVar23 >> 4 & 1) * auVar29[0xc];
                auVar28[0xd] = (bVar23 >> 5 & 1) * auVar29[0xd];
                auVar28[0xe] = (bVar23 >> 6 & 1) * auVar29[0xe];
                auVar28[0xf] = -((char)bVar23 >> 7) * auVar29[0xf];
                auVar28 = vmovdqu8_avx512vl(auVar28);
                *(undefined1 (*) [16])(uVar10 + lStack_60 + uVar12) = auVar28;
                uVar10 = uVar10 + 0x10;
              } while (uVar10 < uVar15 - uVar12);
            }
            goto LAB_140a2e4a7;
          }
        }
        lVar8 = 1;
        lVar21 = param_11 + uVar25;
        uVar10 = lVar24 - 1U >> 1;
        uVar12 = 0;
        if (uVar10 != 0) {
          do {
            uVar18 = uVar12;
            *(byte *)(lVar21 + uVar18 * 2) = pbVar9[uVar18 * 2];
            *(byte *)(lVar21 + 1 + uVar18 * 2) = pbVar9[uVar18 * 2 + 1];
            uVar12 = uVar18 + 1;
          } while (uVar12 < uVar10);
          lVar8 = uVar18 + 2 + uVar12;
        }
        uVar12 = lVar8 - 1;
        if (uVar12 < lVar24 - 1U) {
          *(byte *)(lVar21 + uVar12) = pbVar9[uVar12];
        }
      }
LAB_140a2e4a7:
      auVar35 = _DAT_14308e940;
      lStack_60 = param_11 + uVar25;
      if (uVar16 == 1) {
        if (0 < (longlong)uVar25) {
          if ((longlong)uVar25 < 7) {
            lVar8 = 1;
            uVar12 = 0;
            if (uVar25 >> 1 != 0) {
              do {
                uVar10 = uVar12;
                *(undefined1 *)(param_11 + uVar10 * 2) = *(undefined1 *)(param_11 + uVar25);
                *(undefined1 *)(param_11 + 1 + uVar10 * 2) = *(undefined1 *)(param_11 + uVar25);
                uVar12 = uVar10 + 1;
              } while (uVar12 < uVar25 >> 1);
              lVar8 = uVar10 + 2 + uVar12;
            }
            if (lVar8 - 1U < uVar25) {
              *(undefined1 *)((lVar8 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar25);
            }
          }
          else {
            uVar1 = *(undefined1 *)(param_11 + uVar25);
            if ((longlong)uVar25 < 0x40) {
              uVar12 = 0;
            }
            else {
              if ((longlong)uVar25 < 0x96) {
                uVar10 = 0;
                uVar12 = uVar25 & 0xffffffffffffffc0;
              }
              else {
                uVar12 = param_11 & 0x3f;
                uVar10 = uVar12;
                if ((uVar12 != 0) &&
                   (uVar10 = 0x40 - uVar12, (longlong)uVar25 < (longlong)(0x40 - uVar12))) {
                  uVar10 = uVar25;
                }
                uVar12 = uVar25 - (uVar25 - uVar10 & 0x3f);
                if (uVar10 != 0) {
                  uVar18 = 0;
                  auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
                  auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
                  auVar34 = vpbroadcastq_avx512f();
                  auVar36[1] = uVar1;
                  auVar36[0] = uVar1;
                  auVar36[2] = uVar1;
                  auVar36[3] = uVar1;
                  auVar36[4] = uVar1;
                  auVar36[5] = uVar1;
                  auVar36[6] = uVar1;
                  auVar36[7] = uVar1;
                  auVar36[8] = uVar1;
                  auVar36[9] = uVar1;
                  auVar36[10] = uVar1;
                  auVar36[0xb] = uVar1;
                  auVar36[0xc] = uVar1;
                  auVar36[0xd] = uVar1;
                  auVar36[0xe] = uVar1;
                  auVar36[0xf] = uVar1;
                  do {
                    vpcmpgtq_avx512f(auVar34,auVar32);
                    vpcmpgtq_avx512f(auVar34,auVar33);
                    auVar32 = vpaddq_avx512f(auVar32,auVar35);
                    auVar33 = vpaddq_avx512f(auVar33,auVar35);
                    auVar28 = vmovdqu8_avx512vl(auVar36);
                    *(undefined1 (*) [16])(uVar18 + param_11) = auVar28;
                    uVar18 = uVar18 + 0x10;
                  } while (uVar18 < uVar10);
                  if (uVar25 == uVar10) goto LAB_140a2e916;
                }
              }
              if ((longlong)(uVar10 + 0x40) <= (longlong)uVar12) {
                auVar35 = vpbroadcastb_avx512bw(ZEXT116((byte)param_5));
                do {
                  auVar32 = vmovdqu32_avx512f(auVar35);
                  *(undefined1 (*) [64])(uVar10 + param_11) = auVar32;
                  uVar10 = uVar10 + 0x40;
                } while (uVar10 < uVar12);
              }
            }
            auVar35 = _DAT_14308e940;
            if (uVar12 + 1 <= uVar25) {
              uVar10 = 0;
              auVar40[1] = uVar1;
              auVar40[0] = uVar1;
              auVar40[2] = uVar1;
              auVar40[3] = uVar1;
              auVar40[4] = uVar1;
              auVar40[5] = uVar1;
              auVar40[6] = uVar1;
              auVar40[7] = uVar1;
              auVar40[8] = uVar1;
              auVar40[9] = uVar1;
              auVar40[10] = uVar1;
              auVar40[0xb] = uVar1;
              auVar40[0xc] = uVar1;
              auVar40[0xd] = uVar1;
              auVar40[0xe] = uVar1;
              auVar40[0xf] = uVar1;
              auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar34 = vpbroadcastq_avx512f();
              do {
                vpcmpgtq_avx512f(auVar34,auVar32);
                vpcmpgtq_avx512f(auVar34,auVar33);
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                auVar28 = vmovdqu8_avx512vl(auVar40);
                *(undefined1 (*) [16])(uVar10 + uVar12 + param_11) = auVar28;
                uVar10 = uVar10 + 0x10;
              } while (uVar10 < uVar25 - uVar12);
            }
          }
        }
      }
      else if (uVar16 == 3) {
        if (0 < (longlong)uVar25) {
          lVar8 = 1;
          lVar21 = 0;
          if (uVar25 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar10 = uVar12;
              *(undefined1 *)(param_11 + uVar10 * 2) =
                   *(undefined1 *)(lVar21 + -1 + param_11 + lVar24);
              lVar8 = lVar21 + -2;
              lVar21 = lVar21 + -2;
              *(undefined1 *)(param_11 + 1 + uVar10 * 2) =
                   *(undefined1 *)(lVar8 + param_11 + lVar24);
              uVar12 = uVar10 + 1;
            } while (uVar12 < uVar25 >> 1);
            lVar8 = uVar10 + 2 + uVar12;
          }
          uVar12 = lVar8 - 1;
          if (uVar12 < uVar25) {
            *(undefined1 *)(uVar12 + param_11) =
                 *(undefined1 *)(((param_11 + lVar24) - uVar12) + -1);
          }
        }
      }
      else if ((uVar16 == 6) && (0 < (longlong)uVar25)) {
        if ((longlong)uVar25 < 0x40) {
          uVar12 = 0;
        }
        else {
          if ((longlong)uVar25 < 0x96) {
            uVar10 = 0;
            uVar12 = uVar25 & 0xffffffffffffffc0;
          }
          else {
            uVar12 = param_11 & 0x3f;
            uVar10 = uVar12;
            if ((uVar12 != 0) &&
               (uVar10 = 0x40 - uVar12, (longlong)uVar25 < (longlong)(0x40 - uVar12))) {
              uVar10 = uVar25;
            }
            uVar12 = uVar25 - (uVar25 - uVar10 & 0x3f);
            if (uVar10 != 0) {
              uVar18 = 0;
              auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar28 = vpbroadcastb_avx512vl();
              auVar34 = vpbroadcastq_avx512f();
              do {
                vpcmpgtq_avx512f(auVar34,auVar32);
                vpcmpgtq_avx512f(auVar34,auVar33);
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                auVar29 = vmovdqu8_avx512vl(auVar28);
                *(undefined1 (*) [16])(uVar18 + param_11) = auVar29;
                uVar18 = uVar18 + 0x10;
              } while (uVar18 < uVar10);
              if (uVar25 == uVar10) goto LAB_140a2e916;
            }
          }
          if ((longlong)(uVar10 + 0x40) <= (longlong)uVar12) {
            auVar35 = vpbroadcastb_avx512bw();
            do {
              auVar32 = vmovdqu32_avx512f(auVar35);
              *(undefined1 (*) [64])(uVar10 + param_11) = auVar32;
              uVar10 = uVar10 + 0x40;
            } while (uVar10 < uVar12);
          }
        }
        auVar35 = _DAT_14308e940;
        if (uVar12 + 1 <= uVar25) {
          uVar10 = 0;
          auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
          auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
          auVar28 = vpbroadcastb_avx512vl();
          auVar34 = vpbroadcastq_avx512f();
          do {
            vpcmpgtq_avx512f(auVar34,auVar32);
            vpcmpgtq_avx512f(auVar34,auVar33);
            auVar32 = vpaddq_avx512f(auVar32,auVar35);
            auVar33 = vpaddq_avx512f(auVar33,auVar35);
            auVar29 = vmovdqu8_avx512vl(auVar28);
            *(undefined1 (*) [16])(uVar10 + uVar12 + param_11) = auVar29;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar25 - uVar12);
        }
      }
LAB_140a2e916:
      (**(code **)(&UNK_14308eb80 + lVar7 * 8))(lStack_60,param_4,uVar25,param_9,param_10);
      pbVar9 = pbVar9 + uVar25;
      lVar13 = lVar13 - uVar25;
      param_4 = param_4 + uVar25;
    }
  }
  if ((param_7 & 0x80) != 0) {
    (**(code **)(&UNK_14308eb80 + lVar7 * 8))(pbVar9,param_4,lVar13,param_9,param_10);
    return;
  }
  if ((longlong)uVar25 < lVar13) {
    lVar13 = lVar13 - uVar25;
    (**(code **)(&UNK_14308eb80 + lVar7 * 8))(pbVar9,param_4,lVar13,param_9,param_10);
    pbVar9 = pbVar9 + lVar13;
    param_4 = param_4 + lVar13;
  }
  auVar35 = _DAT_14308e940;
  if (uVar25 == 1) {
    uVar11 = (uint)pbVar9[-1];
    if (uVar16 == 1) {
      uVar11 = uVar11 + *pbVar9;
    }
    else if (uVar16 == 3) {
      uVar11 = uVar11 * 2;
    }
    else if (uVar16 == 6) {
      uVar11 = uVar22 + uVar11;
    }
    auVar41._0_4_ = (float)*pbVar9;
    auVar41._4_8_ = SUB128(ZEXT812(0),4);
    auVar41._12_4_ = 0;
    auVar27 = vfmadd231ss_fma(ZEXT416((uint)((float)uVar11 * *param_9)),auVar41,
                              ZEXT416((uint)param_9[1]));
    *param_4 = auVar27._0_4_;
    return;
  }
  if (uVar25 == 2) {
    bVar23 = pbVar9[-2];
    bVar2 = pbVar9[-1];
    bVar3 = *pbVar9;
    bVar4 = pbVar9[1];
    uVar11 = (uint)bVar3;
    if (uVar16 == 1) {
      uVar16 = (uint)bVar4;
      auVar44._0_4_ = (float)uVar11;
      auVar44._4_8_ = SUB128(ZEXT812(0),4);
      auVar44._12_4_ = 0;
      auVar56._0_4_ = (float)(bVar2 + uVar16);
      auVar56._4_8_ = SUB128(ZEXT812(0),4);
      auVar56._12_4_ = 0;
      auVar62._0_4_ = (float)uVar16;
      auVar62._4_8_ = SUB128(ZEXT812(0),4);
      auVar62._12_4_ = 0;
      auVar27 = vfmadd231ss_fma(ZEXT416((uint)((float)(bVar23 + uVar16) * *param_9)),auVar44,
                                ZEXT416((uint)param_9[2]));
      auVar50._0_4_ = (float)(uVar16 + uVar11);
      auVar50._4_8_ = SUB128(ZEXT812(0),4);
      auVar50._12_4_ = 0;
      auVar27 = vfmadd231ss_fma(auVar27,auVar56,ZEXT416((uint)param_9[1]));
      *param_4 = auVar27._0_4_;
      auVar27 = vmulss_avx512f(auVar50,ZEXT416((uint)param_9[1]));
      auVar27 = vfmadd231ss_avx512f(auVar27,auVar56,ZEXT416((uint)*param_9));
      auVar27 = vfmadd231ss_avx512f(auVar27,auVar62,ZEXT416((uint)param_9[2]));
      param_4[1] = auVar27._0_4_;
      return;
    }
    if (uVar16 != 3) {
      if (uVar16 != 6) {
        return;
      }
      auVar43._0_4_ = (float)uVar11;
      auVar43._4_8_ = SUB128(ZEXT812(0),4);
      auVar43._12_4_ = 0;
      auVar48._0_4_ = (float)(bVar23 + uVar22);
      auVar48._4_8_ = SUB128(ZEXT812(0),4);
      auVar48._12_4_ = 0;
      auVar55._0_4_ = (float)(bVar2 + uVar22);
      auVar55._4_8_ = SUB128(ZEXT812(0),4);
      auVar55._12_4_ = 0;
      auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)((uint)bVar2 + (uint)bVar4) * param_9[1])),
                                auVar43,ZEXT416((uint)param_9[2]));
      auVar29 = vxorps_avx512vl(auVar27,auVar27);
      auVar61._0_4_ = (float)bVar4;
      auVar61._4_8_ = SUB128(ZEXT812(0),4);
      auVar61._12_4_ = 0;
      auVar27 = vfmadd231ss_fma(auVar28,auVar48,ZEXT416((uint)*param_9));
      *param_4 = auVar27._0_4_;
      auVar28 = vmulss_avx512f(auVar55,ZEXT416((uint)*param_9));
      auVar27 = vcvtsi2ss_avx512f(auVar29,uVar11 + uVar22);
      auVar28 = vfmadd231ss_avx512f(auVar28,auVar61,ZEXT416((uint)param_9[2]));
      auVar27 = vfmadd231ss_avx512f(auVar28,auVar27,ZEXT416((uint)param_9[1]));
      param_4[1] = auVar27._0_4_;
      return;
    }
    auVar42._0_4_ = (float)((uint)bVar23 + (uint)bVar3);
    auVar42._4_8_ = SUB128(ZEXT812(0),4);
    auVar42._12_4_ = 0;
    auVar47._0_4_ = (float)((uint)bVar2 + (uint)bVar4);
    auVar47._4_8_ = SUB128(ZEXT812(0),4);
    auVar47._12_4_ = 0;
    auVar54._0_4_ = (float)((uint)bVar3 * 2);
    auVar54._4_8_ = SUB128(ZEXT812(0),4);
    auVar54._12_4_ = 0;
    auVar28 = vfmadd231ss_fma(ZEXT416((uint)((float)bVar3 * param_9[2])),auVar42,
                              ZEXT416((uint)*param_9));
    auVar27 = vxorps_avx512vl(auVar27,auVar27);
    auVar60._0_4_ = (float)((uint)bVar2 * 2);
    auVar60._4_8_ = SUB128(ZEXT812(0),4);
    auVar60._12_4_ = 0;
    auVar27 = vcvtsi2ss_avx512f(auVar27,(uint)bVar4);
    auVar28 = vfmadd231ss_fma(auVar28,auVar47,ZEXT416((uint)param_9[1]));
    *param_4 = auVar28._0_4_;
    auVar28 = vmulss_avx512f(auVar54,ZEXT416((uint)param_9[1]));
    auVar28 = vfmadd231ss_avx512f(auVar28,auVar60,ZEXT416((uint)*param_9));
    auVar27 = vfmadd231ss_avx512f(auVar28,auVar27,ZEXT416((uint)param_9[2]));
    param_4[1] = auVar27._0_4_;
    return;
  }
  if (0 < (longlong)uVar15) {
    if (6 < (longlong)uVar15) {
      lVar13 = param_11 - ((longlong)pbVar9 - uVar25);
      if ((lVar24 + -1 <= lVar13) || (lVar24 + -1 <= -lVar13)) {
        if ((longlong)uVar15 < 0x40) {
          uVar12 = 0;
        }
        else {
          if ((longlong)uVar15 < 0xeb) {
            uVar10 = 0;
            uVar12 = uVar15 & 0xffffffffffffffc0;
          }
          else {
            uVar12 = param_11 & 0x3f;
            uVar10 = uVar12;
            if ((uVar12 != 0) &&
               (uVar10 = 0x40 - uVar12, (longlong)uVar15 < (longlong)(0x40 - uVar12))) {
              uVar10 = uVar15;
            }
            uVar12 = uVar15 - (uVar15 - uVar10 & 0x3f);
            if (uVar10 != 0) {
              uVar18 = 0;
              pauVar14 = (undefined1 (*) [16])(pbVar9 + -uVar25);
              auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar34 = vpbroadcastq_avx512f();
              do {
                uVar5 = vpcmpgtq_avx512f(auVar34,auVar32);
                uVar6 = vpcmpgtq_avx512f(auVar34,auVar33);
                bVar23 = (byte)uVar6;
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                uVar26 = CONCAT11(bVar23,(byte)uVar5);
                auVar27 = vmovdqu8_avx512vl(*pauVar14);
                auVar30[1] = ((byte)(uVar26 >> 1) & 1) * auVar27[1];
                auVar30[0] = ((byte)uVar5 & 1) * auVar27[0];
                auVar30[2] = ((byte)(uVar26 >> 2) & 1) * auVar27[2];
                auVar30[3] = ((byte)(uVar26 >> 3) & 1) * auVar27[3];
                auVar30[4] = ((byte)(uVar26 >> 4) & 1) * auVar27[4];
                auVar30[5] = ((byte)(uVar26 >> 5) & 1) * auVar27[5];
                auVar30[6] = ((byte)(uVar26 >> 6) & 1) * auVar27[6];
                auVar30[7] = ((byte)(uVar26 >> 7) & 1) * auVar27[7];
                auVar30[8] = (bVar23 & 1) * auVar27[8];
                auVar30[9] = (bVar23 >> 1 & 1) * auVar27[9];
                auVar30[10] = (bVar23 >> 2 & 1) * auVar27[10];
                auVar30[0xb] = (bVar23 >> 3 & 1) * auVar27[0xb];
                auVar30[0xc] = (bVar23 >> 4 & 1) * auVar27[0xc];
                auVar30[0xd] = (bVar23 >> 5 & 1) * auVar27[0xd];
                auVar30[0xe] = (bVar23 >> 6 & 1) * auVar27[0xe];
                auVar30[0xf] = -((char)bVar23 >> 7) * auVar27[0xf];
                pauVar14 = pauVar14 + 1;
                auVar27 = vmovdqu8_avx512vl(auVar30);
                *(undefined1 (*) [16])(uVar18 + param_11) = auVar27;
                uVar18 = uVar18 + 0x10;
              } while (uVar18 < uVar10);
              if (uVar15 == uVar10) goto LAB_140a2ee03;
            }
          }
          if ((longlong)(uVar10 + 0x40) <= (longlong)uVar12) {
            do {
              auVar35 = vmovdqu32_avx512f(*(undefined1 (*) [64])(pbVar9 + (uVar10 - uVar25)));
              *(undefined1 (*) [64])(uVar10 + param_11) = auVar35;
              uVar10 = uVar10 + 0x40;
            } while (uVar10 < uVar12);
          }
        }
        auVar35 = _DAT_14308e940;
        if (uVar12 + 1 <= uVar15) {
          pauVar14 = (undefined1 (*) [16])(pbVar9 + (uVar12 - uVar25));
          auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
          auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
          auVar34 = vpbroadcastq_avx512f();
          uVar10 = 0;
          do {
            uVar5 = vpcmpgtq_avx512f(auVar34,auVar32);
            uVar6 = vpcmpgtq_avx512f(auVar34,auVar33);
            bVar23 = (byte)uVar6;
            auVar32 = vpaddq_avx512f(auVar32,auVar35);
            auVar33 = vpaddq_avx512f(auVar33,auVar35);
            uVar26 = CONCAT11(bVar23,(byte)uVar5);
            auVar27 = vmovdqu8_avx512vl(*pauVar14);
            auVar31[1] = ((byte)(uVar26 >> 1) & 1) * auVar27[1];
            auVar31[0] = ((byte)uVar5 & 1) * auVar27[0];
            auVar31[2] = ((byte)(uVar26 >> 2) & 1) * auVar27[2];
            auVar31[3] = ((byte)(uVar26 >> 3) & 1) * auVar27[3];
            auVar31[4] = ((byte)(uVar26 >> 4) & 1) * auVar27[4];
            auVar31[5] = ((byte)(uVar26 >> 5) & 1) * auVar27[5];
            auVar31[6] = ((byte)(uVar26 >> 6) & 1) * auVar27[6];
            auVar31[7] = ((byte)(uVar26 >> 7) & 1) * auVar27[7];
            auVar31[8] = (bVar23 & 1) * auVar27[8];
            auVar31[9] = (bVar23 >> 1 & 1) * auVar27[9];
            auVar31[10] = (bVar23 >> 2 & 1) * auVar27[10];
            auVar31[0xb] = (bVar23 >> 3 & 1) * auVar27[0xb];
            auVar31[0xc] = (bVar23 >> 4 & 1) * auVar27[0xc];
            auVar31[0xd] = (bVar23 >> 5 & 1) * auVar27[0xd];
            auVar31[0xe] = (bVar23 >> 6 & 1) * auVar27[0xe];
            auVar31[0xf] = -((char)bVar23 >> 7) * auVar27[0xf];
            pauVar14 = pauVar14 + 1;
            auVar27 = vmovdqu8_avx512vl(auVar31);
            *(undefined1 (*) [16])(uVar10 + uVar12 + param_11) = auVar27;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar15 - uVar12);
        }
        goto LAB_140a2ee03;
      }
    }
    lVar13 = 1;
    uVar12 = lVar24 - 1U >> 1;
    uVar15 = 0;
    if (uVar12 != 0) {
      do {
        uVar10 = uVar15;
        lVar13 = uVar10 * 2 - uVar25;
        *(byte *)(param_11 + uVar10 * 2) = pbVar9[lVar13];
        *(byte *)(param_11 + 1 + uVar10 * 2) = pbVar9[lVar13 + 1];
        uVar15 = uVar10 + 1;
      } while (uVar15 < uVar12);
      lVar13 = uVar10 + 2 + uVar15;
    }
    uVar15 = lVar13 - 1;
    if (uVar15 < lVar24 - 1U) {
      *(byte *)(uVar15 + param_11) = pbVar9[uVar15 - uVar25];
    }
  }
LAB_140a2ee03:
  auVar35 = _DAT_14308e940;
  if (uVar16 == 1) {
    if (0 < (longlong)uVar25) {
      if ((longlong)uVar25 < 7) {
        lVar13 = 1;
        if (uVar25 >> 1 != 0) {
          lVar13 = param_11 + lVar24;
          uVar15 = 0;
          do {
            uVar12 = uVar15;
            *(undefined1 *)(lVar13 + -1 + uVar12 * 2) = *(undefined1 *)(lVar13 + -2);
            *(undefined1 *)(lVar13 + uVar12 * 2) = *(undefined1 *)(lVar13 + -2);
            uVar15 = uVar12 + 1;
          } while (uVar15 < uVar25 >> 1);
          lVar13 = uVar12 + 2 + uVar15;
        }
        if (lVar13 - 1U < uVar25) {
          *(undefined1 *)(lVar24 + param_11 + -1 + (lVar13 - 1U)) =
               *(undefined1 *)(lVar24 + param_11 + -2);
        }
      }
      else {
        lVar13 = param_11 + lVar24;
        if ((longlong)uVar25 < 0x40) {
          uVar15 = 0;
        }
        else {
          if ((longlong)uVar25 < 0xd6) {
            uVar12 = 0;
            uVar15 = uVar25 & 0xffffffffffffffc0;
          }
          else {
            uVar15 = lVar24 + -1 + param_11 & 0x3f;
            uVar12 = uVar15;
            if ((uVar15 != 0) &&
               (uVar12 = 0x40 - uVar15, (longlong)uVar25 < (longlong)(0x40 - uVar15))) {
              uVar12 = uVar25;
            }
            uVar15 = uVar25 - (uVar25 - uVar12 & 0x3f);
            if (uVar12 != 0) {
              uVar10 = 0;
              auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar34 = vpbroadcastq_avx512f();
              auVar27 = vpbroadcastb_avx512vl();
              do {
                vpcmpgtq_avx512f(auVar34,auVar32);
                vpcmpgtq_avx512f(auVar34,auVar33);
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                auVar28 = vmovdqu8_avx512vl(auVar27);
                *(undefined1 (*) [16])((uVar10 - 1) + lVar13) = auVar28;
                uVar10 = uVar10 + 0x10;
              } while (uVar10 < uVar12);
              if (uVar25 == uVar12) goto LAB_140a2f37a;
            }
          }
          if ((longlong)(uVar12 + 0x40) <= (longlong)uVar15) {
            auVar35 = vpbroadcastb_avx512bw();
            do {
              auVar32 = vmovdqu32_avx512f(auVar35);
              *(undefined1 (*) [64])((uVar12 - 1) + lVar13) = auVar32;
              uVar12 = uVar12 + 0x40;
            } while (uVar12 < uVar15);
          }
        }
        auVar35 = _DAT_14308e940;
        if (uVar15 + 1 <= uVar25) {
          uVar12 = 0;
          auVar27 = vpbroadcastb_avx512vl();
          auVar32 = vpbroadcastq_avx512f();
          auVar33 = vmovdqu32_avx512f(_DAT_14308e980);
          auVar34 = vmovdqu32_avx512f(_DAT_14308e9c0);
          do {
            vpcmpgtq_avx512f(auVar32,auVar33);
            vpcmpgtq_avx512f(auVar32,auVar34);
            auVar33 = vpaddq_avx512f(auVar33,auVar35);
            auVar34 = vpaddq_avx512f(auVar34,auVar35);
            auVar28 = vmovdqu8_avx512vl(auVar27);
            *(undefined1 (*) [16])((uVar12 - 1) + lVar13 + uVar15) = auVar28;
            uVar12 = uVar12 + 0x10;
          } while (uVar12 < uVar25 - uVar15);
        }
      }
    }
    goto LAB_140a2f37a;
  }
  if (uVar16 != 3) {
    if ((uVar16 == 6) && (0 < (longlong)uVar25)) {
      if ((longlong)uVar25 < 0x40) {
        uVar15 = 0;
      }
      else {
        if ((longlong)uVar25 < 0xd6) {
          uVar12 = 0;
          uVar15 = uVar25 & 0xffffffffffffffc0;
        }
        else {
          uVar15 = lVar24 + -1 + param_11 & 0x3f;
          uVar12 = uVar15;
          if ((uVar15 != 0) &&
             (uVar12 = 0x40 - uVar15, (longlong)uVar25 < (longlong)(0x40 - uVar15))) {
            uVar12 = uVar25;
          }
          uVar15 = uVar25 - (uVar25 - uVar12 & 0x3f);
          if (uVar12 != 0) {
            uVar10 = 0;
            auVar32 = vmovdqu32_avx512f(_DAT_14308e980);
            auVar33 = vmovdqu32_avx512f(_DAT_14308e9c0);
            auVar34 = vpbroadcastq_avx512f();
            auVar27 = vpbroadcastb_avx512vl();
            do {
              vpcmpgtq_avx512f(auVar34,auVar32);
              vpcmpgtq_avx512f(auVar34,auVar33);
              auVar32 = vpaddq_avx512f(auVar32,auVar35);
              auVar33 = vpaddq_avx512f(auVar33,auVar35);
              auVar28 = vmovdqu8_avx512vl(auVar27);
              *(undefined1 (*) [16])((uVar10 - 1) + param_11 + lVar24) = auVar28;
              uVar10 = uVar10 + 0x10;
            } while (uVar10 < uVar12);
            if (uVar25 == uVar12) goto LAB_140a2f37a;
          }
        }
        if ((longlong)(uVar12 + 0x40) <= (longlong)uVar15) {
          auVar35 = vpbroadcastb_avx512bw();
          do {
            auVar32 = vmovdqu32_avx512f(auVar35);
            *(undefined1 (*) [64])((uVar12 - 1) + param_11 + lVar24) = auVar32;
            uVar12 = uVar12 + 0x40;
          } while (uVar12 < uVar15);
        }
      }
      auVar35 = _DAT_14308e940;
      if (uVar15 + 1 <= uVar25) {
        auVar27 = vpbroadcastb_avx512vl();
        uVar12 = 0;
        auVar32 = vpbroadcastq_avx512f();
        auVar33 = vmovdqu32_avx512f(_DAT_14308e980);
        auVar34 = vmovdqu32_avx512f(_DAT_14308e9c0);
        do {
          vpcmpgtq_avx512f(auVar32,auVar33);
          vpcmpgtq_avx512f(auVar32,auVar34);
          auVar33 = vpaddq_avx512f(auVar33,auVar35);
          auVar34 = vpaddq_avx512f(auVar34,auVar35);
          auVar28 = vmovdqu8_avx512vl(auVar27);
          *(undefined1 (*) [16])((uVar12 - 1) + lVar24 + param_11 + uVar15) = auVar28;
          uVar12 = uVar12 + 0x10;
        } while (uVar12 < uVar25 - uVar15);
      }
    }
    goto LAB_140a2f37a;
  }
  if ((longlong)uVar25 < 1) goto LAB_140a2f37a;
  if ((longlong)uVar25 < 0x10) {
LAB_140a2f596:
    uVar12 = 0;
  }
  else {
    lVar13 = param_11 + lVar24;
    if ((longlong)uVar25 < 0x181) {
      uVar15 = 0;
      uVar12 = uVar25 & 0xfffffffffffffff0;
    }
    else {
      uVar15 = lVar24 + -1 + param_11 & 0xf;
      if (uVar15 != 0) {
        uVar15 = 0x10 - uVar15;
      }
      if ((longlong)uVar25 < (longlong)(uVar15 + 0x10)) goto LAB_140a2f596;
      uVar10 = 0;
      lVar8 = 0;
      uVar12 = uVar25 - (uVar25 - uVar15 & 0xf);
      if (uVar15 != 0) {
        do {
          lVar21 = lVar8 + -3;
          lVar8 = lVar8 + -1;
          *(undefined1 *)((uVar10 - 1) + lVar13) = *(undefined1 *)(lVar21 + lVar13);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar15);
      }
    }
    lVar8 = -uVar15;
    do {
      auVar27 = vpinsrb_avx(ZEXT116(*(byte *)(lVar8 + -3 + lVar13)),
                            (uint)*(byte *)(lVar8 + -4 + lVar13),1);
      auVar27 = vpinsrb_avx(auVar27,(uint)*(byte *)(lVar8 + -5 + lVar13),2);
      auVar27 = vpinsrb_avx(auVar27,(uint)*(byte *)(lVar8 + -6 + lVar13),3);
      auVar27 = vpinsrb_avx(auVar27,(uint)*(byte *)(lVar8 + -7 + lVar13),4);
      auVar27 = vpinsrb_avx(auVar27,(uint)*(byte *)(lVar8 + -8 + lVar13),5);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x24 + lVar13),6);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x28 + lVar13),7);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x2c + lVar13),8);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x30 + lVar13),9);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x34 + lVar13),10);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x38 + lVar13),0xb);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x3c + lVar13),0xc);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x40 + lVar13),0xd);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x44 + lVar13),0xe);
      auVar27 = vpinsrb_avx512bw(auVar27,(uint)*(byte *)(lVar8 + -0x48 + lVar13),0xf);
      lVar8 = lVar8 + -0x10;
      auVar27 = vmovdqu32_avx512vl(auVar27);
      *(undefined1 (*) [16])((uVar15 - 1) + lVar13) = auVar27;
      uVar15 = uVar15 + 0x10;
    } while (uVar15 < uVar12);
  }
  uVar15 = 0;
  lVar13 = 0;
  if (uVar12 + 1 <= uVar25) {
    do {
      lVar8 = lVar13 + -3;
      lVar13 = lVar13 + -1;
      *(undefined1 *)((uVar15 - 1) + uVar12 + lVar24 + param_11) =
           *(undefined1 *)(lVar8 + ((lVar24 + param_11) - uVar12));
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar25 - uVar12);
  }
LAB_140a2f37a:
  (**(code **)(&UNK_14308eb80 + lVar7 * 8))(param_11 + uVar25,param_4,uVar25,param_9,param_10);
  return;
}

