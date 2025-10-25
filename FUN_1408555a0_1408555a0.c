
void FUN_1408555a0(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  
  uVar19 = param_3 * 3;
  uVar2 = *param_4;
  if ((longlong)uVar19 < 1) {
    return;
  }
  auVar32 = ZEXT416(param_4[1]);
  auVar43 = ZEXT416(param_4[2]);
  auVar26 = ZEXT416(param_4[3]);
  if ((longlong)uVar19 < 0x10) {
LAB_140855b0f:
    uVar17 = 0;
    if (uVar19 == 0) {
      return;
    }
  }
  else {
    uVar18 = param_2 & 0x1f;
    if (uVar18 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140855b0f;
      uVar18 = 0x20 - uVar18 >> 2;
    }
    if ((longlong)uVar19 < (longlong)(uVar18 + 0x10)) goto LAB_140855b0f;
    uVar16 = 0;
    uVar17 = uVar19 - (uVar19 - uVar18 & 0xf);
    auVar38 = ZEXT416(uVar2);
    if (uVar18 != 0) {
      auVar42 = vunpcklps_avx(auVar38,auVar32);
      auVar37 = vunpcklps_avx(auVar43,auVar26);
      auVar42 = vmovlhps_avx(auVar42,auVar37);
      do {
        auVar48._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 9) + param_1) + (uint)*(byte *)(uVar16 + 9 + param_1)
                    );
        auVar48._4_12_ = in_ZMM10._4_12_;
        auVar37._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 6) + param_1) + (uint)*(byte *)(uVar16 + 6 + param_1)
                    );
        auVar37._4_8_ = SUB128(ZEXT812(0),4);
        auVar37._12_4_ = 0;
        auVar37 = vunpcklps_avx(auVar48,auVar37);
        auVar31._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 3) + param_1) + (uint)*(byte *)(uVar16 + 3 + param_1)
                    );
        auVar31._4_8_ = SUB128(ZEXT812(0),4);
        auVar31._12_4_ = 0;
        in_ZMM10 = ZEXT1664(ZEXT416((uint)(float)*(byte *)(uVar16 + param_1)));
        auVar31 = vunpcklps_avx(auVar31,ZEXT416((uint)(float)*(byte *)(uVar16 + param_1)));
        auVar37 = vmovlhps_avx(auVar37,auVar31);
        auVar37 = vdpps_avx(auVar42,auVar37,0xf1);
        *(int *)(param_2 + uVar16 * 4) = auVar37._0_4_;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar18);
    }
    auVar38 = vshufps_avx(auVar38,auVar38,0);
    auVar42 = vshufps_avx(auVar32,auVar32,0);
    auVar37 = vshufps_avx(auVar43,auVar43,0);
    auVar31 = vshufps_avx(auVar26,auVar26,0);
    do {
      auVar47._8_8_ = 0;
      auVar47._0_8_ = *(ulonglong *)((uVar18 - 9) + param_1);
      auVar48 = vpmovzxbw_avx(auVar47);
      auVar44._8_8_ = 0;
      auVar44._0_8_ = *(ulonglong *)(uVar18 + 9 + param_1);
      auVar47 = vpmovzxbw_avx(auVar44);
      auVar48 = vpaddw_avx(auVar48,auVar47);
      auVar44 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar15 = vpmovzxwd_avx(auVar48);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)((uVar18 - 1) + param_1);
      auVar48 = vpmovzxbw_avx(auVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(uVar18 + 0x11 + param_1);
      auVar47 = vpmovzxbw_avx(auVar4);
      auVar48 = vpaddw_avx(auVar48,auVar47);
      auVar47 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar48 = vpmovzxwd_avx(auVar48);
      auVar45._16_16_ = auVar15;
      auVar45._0_16_ = auVar44;
      auVar45 = vcvtdq2ps_avx(auVar45);
      fVar21 = auVar38._0_4_;
      fVar22 = auVar38._4_4_;
      fVar23 = auVar38._8_4_;
      fVar24 = auVar38._12_4_;
      auVar49._16_16_ = auVar48;
      auVar49._0_16_ = auVar47;
      auVar49 = vcvtdq2ps_avx(auVar49);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)((uVar18 - 6) + param_1);
      auVar48 = vpmovzxbw_avx(auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(uVar18 + 6 + param_1);
      auVar47 = vpmovzxbw_avx(auVar6);
      auVar48 = vpaddw_avx(auVar48,auVar47);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(uVar18 + 2 + param_1);
      auVar47 = vpmovzxbw_avx(auVar7);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(uVar18 + 0xe + param_1);
      auVar44 = vpmovzxbw_avx(auVar8);
      auVar47 = vpaddw_avx(auVar47,auVar44);
      auVar44 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar48 = vpmovzxwd_avx(auVar48);
      auVar54._16_16_ = auVar48;
      auVar54._0_16_ = auVar44;
      auVar53 = vcvtdq2ps_avx(auVar54);
      fVar25 = auVar42._0_4_;
      fVar27 = auVar42._4_4_;
      fVar28 = auVar42._8_4_;
      fVar29 = auVar42._12_4_;
      auVar44 = vpsrldq_avx(auVar47,8);
      auVar48 = vpmovzxwd_avx(auVar47);
      auVar3 = vpmovzxwd_avx(auVar44);
      auVar50._16_16_ = auVar3;
      auVar50._0_16_ = auVar48;
      auVar50 = vcvtdq2ps_avx(auVar50);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)((uVar18 - 3) + param_1);
      auVar48 = vpmovzxbw_avx(auVar9);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(uVar18 + 3 + param_1);
      auVar47 = vpmovzxbw_avx(auVar10);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(uVar18 + 0xb + param_1);
      auVar44 = vpmovzxbw_avx(auVar11);
      auVar48 = vpaddw_avx(auVar48,auVar47);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(uVar18 + 5 + param_1);
      auVar47 = vpmovzxbw_avx(auVar12);
      auVar47 = vpaddw_avx(auVar47,auVar44);
      auVar44 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar4 = vpmovzxwd_avx(auVar48);
      auVar46._16_16_ = auVar4;
      auVar46._0_16_ = auVar44;
      auVar46 = vcvtdq2ps_avx(auVar46);
      fVar30 = auVar37._0_4_;
      fVar33 = auVar37._4_4_;
      fVar34 = auVar37._8_4_;
      fVar35 = auVar37._12_4_;
      auVar48 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar47 = vpmovzxwd_avx(auVar47);
      auVar51._16_16_ = auVar47;
      auVar51._0_16_ = auVar48;
      auVar51 = vcvtdq2ps_avx(auVar51);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(uVar18 + param_1);
      auVar48 = vpmovzxbw_avx(auVar13);
      auVar47 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar44 = vpmovzxwd_avx(auVar48);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)(uVar18 + 8 + param_1);
      auVar48 = vpmovzxbw_avx(auVar14);
      auVar52._16_16_ = auVar44;
      auVar52._0_16_ = auVar47;
      auVar52 = vcvtdq2ps_avx(auVar52);
      fVar36 = auVar31._0_4_;
      fVar39 = auVar31._4_4_;
      fVar40 = auVar31._8_4_;
      fVar41 = auVar31._12_4_;
      auVar47 = vpmovzxwd_avx(auVar48);
      auVar48 = vpsrldq_avx(auVar48,8);
      auVar48 = vpmovzxwd_avx(auVar48);
      pfVar1 = (float *)(param_2 + uVar18 * 4);
      *pfVar1 = fVar21 * auVar45._0_4_ + fVar25 * auVar53._0_4_ + fVar30 * auVar46._0_4_ +
                fVar36 * auVar52._0_4_;
      pfVar1[1] = fVar22 * auVar45._4_4_ + fVar27 * auVar53._4_4_ + fVar33 * auVar46._4_4_ +
                  fVar39 * auVar52._4_4_;
      pfVar1[2] = fVar23 * auVar45._8_4_ + fVar28 * auVar53._8_4_ + fVar34 * auVar46._8_4_ +
                  fVar40 * auVar52._8_4_;
      pfVar1[3] = fVar24 * auVar45._12_4_ + fVar29 * auVar53._12_4_ + fVar35 * auVar46._12_4_ +
                  fVar41 * auVar52._12_4_;
      pfVar1[4] = fVar21 * auVar45._16_4_ + fVar25 * auVar53._16_4_ + fVar30 * auVar46._16_4_ +
                  fVar36 * auVar52._16_4_;
      pfVar1[5] = fVar22 * auVar45._20_4_ + fVar27 * auVar53._20_4_ + fVar33 * auVar46._20_4_ +
                  fVar39 * auVar52._20_4_;
      pfVar1[6] = fVar23 * auVar45._24_4_ + fVar28 * auVar53._24_4_ + fVar34 * auVar46._24_4_ +
                  fVar40 * auVar52._24_4_;
      pfVar1[7] = auVar15._12_4_ + 0.0 + auVar4._12_4_ + auVar44._12_4_;
      auVar53._16_16_ = auVar48;
      auVar53._0_16_ = auVar47;
      auVar45 = vcvtdq2ps_avx(auVar53);
      pfVar1 = (float *)(param_2 + 0x20 + uVar18 * 4);
      *pfVar1 = fVar21 * auVar49._0_4_ + fVar25 * auVar50._0_4_ + fVar30 * auVar51._0_4_ +
                fVar36 * auVar45._0_4_;
      pfVar1[1] = fVar22 * auVar49._4_4_ + fVar27 * auVar50._4_4_ + fVar33 * auVar51._4_4_ +
                  fVar39 * auVar45._4_4_;
      pfVar1[2] = fVar23 * auVar49._8_4_ + fVar28 * auVar50._8_4_ + fVar34 * auVar51._8_4_ +
                  fVar40 * auVar45._8_4_;
      pfVar1[3] = fVar24 * auVar49._12_4_ + fVar29 * auVar50._12_4_ + fVar35 * auVar51._12_4_ +
                  fVar41 * auVar45._12_4_;
      pfVar1[4] = fVar21 * auVar49._16_4_ + fVar25 * auVar50._16_4_ + fVar30 * auVar51._16_4_ +
                  fVar36 * auVar45._16_4_;
      pfVar1[5] = fVar22 * auVar49._20_4_ + fVar27 * auVar50._20_4_ + fVar33 * auVar51._20_4_ +
                  fVar39 * auVar45._20_4_;
      pfVar1[6] = fVar23 * auVar49._24_4_ + fVar28 * auVar50._24_4_ + fVar34 * auVar51._24_4_ +
                  fVar40 * auVar45._24_4_;
      pfVar1[7] = auVar3._12_4_ + 0.0 + 0.0 + 0.0;
      uVar18 = uVar18 + 0x10;
    } while (uVar18 < uVar17);
    if (uVar19 < uVar17 + 1) {
      return;
    }
    uVar19 = uVar19 - uVar17;
    if (3 < (longlong)uVar19) {
      uVar16 = 0;
      uVar18 = uVar19 & 0xfffffffffffffffc;
      puVar20 = (uint *)(uVar17 + param_1);
      do {
        auVar38 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + -9)));
        auVar42 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + 9)));
        auVar38 = vpaddw_avx(auVar38,auVar42);
        auVar38 = vpmovzxwd_avx(auVar38);
        auVar42 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + -6)));
        auVar37 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + 6)));
        auVar38 = vcvtdq2ps_avx(auVar38);
        auVar42 = vpaddw_avx(auVar42,auVar37);
        auVar42 = vpmovzxwd_avx(auVar42);
        auVar42 = vcvtdq2ps_avx(auVar42);
        auVar37 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + -3)));
        auVar31 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + 3)));
        auVar37 = vpaddw_avx(auVar37,auVar31);
        auVar37 = vpmovzxwd_avx(auVar37);
        auVar37 = vcvtdq2ps_avx(auVar37);
        auVar31 = vpmovzxbw_avx(ZEXT416(*puVar20));
        puVar20 = puVar20 + 1;
        auVar31 = vpmovzxwd_avx(auVar31);
        auVar31 = vcvtdq2ps_avx(auVar31);
        pfVar1 = (float *)(param_2 + uVar17 * 4 + uVar16 * 4);
        *pfVar1 = fVar21 * auVar38._0_4_ + fVar25 * auVar42._0_4_ + fVar30 * auVar37._0_4_ +
                  fVar36 * auVar31._0_4_;
        pfVar1[1] = fVar22 * auVar38._4_4_ + fVar27 * auVar42._4_4_ + fVar33 * auVar37._4_4_ +
                    fVar39 * auVar31._4_4_;
        pfVar1[2] = fVar23 * auVar38._8_4_ + fVar28 * auVar42._8_4_ + fVar34 * auVar37._8_4_ +
                    fVar40 * auVar31._8_4_;
        pfVar1[3] = fVar24 * auVar38._12_4_ + fVar29 * auVar42._12_4_ + fVar35 * auVar37._12_4_ +
                    fVar41 * auVar31._12_4_;
        uVar16 = uVar16 + 4;
      } while (uVar16 < uVar18);
      goto LAB_140855a2f;
    }
  }
  uVar18 = 0;
LAB_140855a2f:
  if (uVar18 < uVar19) {
    auVar32 = vunpcklps_avx(ZEXT416(uVar2),auVar32);
    auVar43 = vunpcklps_avx(auVar43,auVar26);
    param_1 = param_1 + uVar17;
    auVar43 = vmovlhps_avx(auVar32,auVar43);
    do {
      auVar26._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 9) + param_1) + (uint)*(byte *)(uVar18 + 9 + param_1));
      auVar26._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
      auVar32._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 6) + param_1) + (uint)*(byte *)(uVar18 + 6 + param_1));
      auVar32._4_8_ = SUB128(ZEXT812(0),4);
      auVar32._12_4_ = 0;
      auVar38._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 3) + param_1) + (uint)*(byte *)(uVar18 + 3 + param_1));
      auVar38._4_8_ = SUB128(ZEXT812(0),4);
      auVar38._12_4_ = 0;
      auVar42._0_4_ = (float)*(byte *)(uVar18 + param_1);
      auVar42._4_8_ = SUB128(ZEXT812(0),4);
      auVar42._12_4_ = 0;
      auVar26 = vunpcklps_avx(auVar26,auVar32);
      auVar32 = vunpcklps_avx(auVar38,auVar42);
      auVar26 = vmovlhps_avx(auVar26,auVar32);
      auVar26 = vdpps_avx(auVar43,auVar26,0xf1);
      *(int *)(param_2 + uVar17 * 4 + uVar18 * 4) = auVar26._0_4_;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar19);
  }
  return;
}

