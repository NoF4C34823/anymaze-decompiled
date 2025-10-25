
void FUN_14087ae60(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

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
  uint *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  
  uVar2 = *param_4;
  if ((longlong)param_3 < 1) {
    return;
  }
  auVar31 = ZEXT416(param_4[1]);
  auVar45 = ZEXT416(param_4[2]);
  auVar25 = ZEXT416(param_4[3]);
  if ((longlong)param_3 < 0x10) {
LAB_14087b3af:
    uVar17 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar18 = param_2 & 0x1f;
    if (uVar18 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14087b3af;
      uVar18 = 0x20 - uVar18 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar18 + 0x10)) goto LAB_14087b3af;
    uVar16 = 0;
    uVar17 = param_3 - (param_3 - uVar18 & 0xf);
    auVar36 = ZEXT416(uVar2);
    if (uVar18 != 0) {
      auVar38 = vunpcklps_avx(auVar36,auVar31);
      auVar35 = vunpcklps_avx(auVar45,auVar25);
      auVar38 = vmovlhps_avx(auVar38,auVar35);
      do {
        auVar47._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 3) + param_1) + (uint)*(byte *)(uVar16 + 3 + param_1)
                    );
        auVar47._4_12_ = in_ZMM12._4_12_;
        auVar35._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 2) + param_1) + (uint)*(byte *)(uVar16 + 2 + param_1)
                    );
        auVar35._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar35 = vunpcklps_avx(auVar47,auVar35);
        auVar30._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 1) + param_1) + (uint)*(byte *)(uVar16 + 1 + param_1)
                    );
        auVar30._4_8_ = SUB128(ZEXT812(0),4);
        auVar30._12_4_ = 0;
        in_ZMM12 = ZEXT1664(ZEXT416((uint)(float)*(byte *)(uVar16 + param_1)));
        auVar30 = vunpcklps_avx(auVar30,ZEXT416((uint)(float)*(byte *)(uVar16 + param_1)));
        auVar35 = vmovlhps_avx(auVar35,auVar30);
        auVar35 = vdpps_avx(auVar38,auVar35,0xf1);
        *(int *)(param_2 + uVar16 * 4) = auVar35._0_4_;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar18);
    }
    auVar36 = vshufps_avx(auVar36,auVar36,0);
    auVar38 = vshufps_avx(auVar31,auVar31,0);
    auVar35 = vshufps_avx(auVar45,auVar45,0);
    auVar30 = vshufps_avx(auVar25,auVar25,0);
    do {
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *(ulonglong *)((uVar18 - 3) + param_1);
      auVar47 = vpmovzxbw_avx(auVar46);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = *(ulonglong *)(uVar18 + 3 + param_1);
      auVar46 = vpmovzxbw_avx(auVar42);
      auVar47 = vpaddw_avx(auVar47,auVar46);
      auVar42 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar15 = vpmovzxwd_avx(auVar47);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(uVar18 + 5 + param_1);
      auVar47 = vpmovzxbw_avx(auVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(uVar18 + 0xb + param_1);
      auVar46 = vpmovzxbw_avx(auVar4);
      auVar47 = vpaddw_avx(auVar47,auVar46);
      auVar46 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar47 = vpmovzxwd_avx(auVar47);
      auVar43._16_16_ = auVar15;
      auVar43._0_16_ = auVar42;
      auVar43 = vcvtdq2ps_avx(auVar43);
      fVar20 = auVar36._0_4_;
      fVar21 = auVar36._4_4_;
      fVar22 = auVar36._8_4_;
      fVar23 = auVar36._12_4_;
      auVar48._16_16_ = auVar47;
      auVar48._0_16_ = auVar46;
      auVar48 = vcvtdq2ps_avx(auVar48);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)((uVar18 - 2) + param_1);
      auVar47 = vpmovzxbw_avx(auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(uVar18 + 2 + param_1);
      auVar46 = vpmovzxbw_avx(auVar6);
      auVar47 = vpaddw_avx(auVar47,auVar46);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(uVar18 + 6 + param_1);
      auVar46 = vpmovzxbw_avx(auVar7);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(uVar18 + 10 + param_1);
      auVar42 = vpmovzxbw_avx(auVar8);
      auVar46 = vpaddw_avx(auVar46,auVar42);
      auVar42 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar47 = vpmovzxwd_avx(auVar47);
      auVar53._16_16_ = auVar47;
      auVar53._0_16_ = auVar42;
      auVar52 = vcvtdq2ps_avx(auVar53);
      fVar24 = auVar38._0_4_;
      fVar26 = auVar38._4_4_;
      fVar27 = auVar38._8_4_;
      fVar28 = auVar38._12_4_;
      auVar42 = vpsrldq_avx(auVar46,8);
      auVar47 = vpmovzxwd_avx(auVar46);
      auVar3 = vpmovzxwd_avx(auVar42);
      auVar49._16_16_ = auVar3;
      auVar49._0_16_ = auVar47;
      auVar49 = vcvtdq2ps_avx(auVar49);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)((uVar18 - 1) + param_1);
      auVar47 = vpmovzxbw_avx(auVar9);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(uVar18 + 1 + param_1);
      auVar46 = vpmovzxbw_avx(auVar10);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(uVar18 + 9 + param_1);
      auVar42 = vpmovzxbw_avx(auVar11);
      auVar47 = vpaddw_avx(auVar47,auVar46);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(uVar18 + 7 + param_1);
      auVar46 = vpmovzxbw_avx(auVar12);
      auVar46 = vpaddw_avx(auVar46,auVar42);
      auVar42 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar4 = vpmovzxwd_avx(auVar47);
      auVar44._16_16_ = auVar4;
      auVar44._0_16_ = auVar42;
      auVar44 = vcvtdq2ps_avx(auVar44);
      fVar29 = auVar35._0_4_;
      fVar32 = auVar35._4_4_;
      fVar33 = auVar35._8_4_;
      fVar34 = auVar35._12_4_;
      auVar47 = vpmovzxwd_avx(auVar46);
      auVar46 = vpsrldq_avx(auVar46,8);
      auVar46 = vpmovzxwd_avx(auVar46);
      auVar50._16_16_ = auVar46;
      auVar50._0_16_ = auVar47;
      auVar50 = vcvtdq2ps_avx(auVar50);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(uVar18 + param_1);
      auVar47 = vpmovzxbw_avx(auVar13);
      auVar46 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar42 = vpmovzxwd_avx(auVar47);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)(uVar18 + 8 + param_1);
      auVar47 = vpmovzxbw_avx(auVar14);
      auVar51._16_16_ = auVar42;
      auVar51._0_16_ = auVar46;
      auVar51 = vcvtdq2ps_avx(auVar51);
      fVar37 = auVar30._0_4_;
      fVar39 = auVar30._4_4_;
      fVar40 = auVar30._8_4_;
      fVar41 = auVar30._12_4_;
      auVar46 = vpmovzxwd_avx(auVar47);
      auVar47 = vpsrldq_avx(auVar47,8);
      auVar47 = vpmovzxwd_avx(auVar47);
      pfVar1 = (float *)(param_2 + uVar18 * 4);
      *pfVar1 = fVar20 * auVar43._0_4_ + fVar24 * auVar52._0_4_ + fVar29 * auVar44._0_4_ +
                fVar37 * auVar51._0_4_;
      pfVar1[1] = fVar21 * auVar43._4_4_ + fVar26 * auVar52._4_4_ + fVar32 * auVar44._4_4_ +
                  fVar39 * auVar51._4_4_;
      pfVar1[2] = fVar22 * auVar43._8_4_ + fVar27 * auVar52._8_4_ + fVar33 * auVar44._8_4_ +
                  fVar40 * auVar51._8_4_;
      pfVar1[3] = fVar23 * auVar43._12_4_ + fVar28 * auVar52._12_4_ + fVar34 * auVar44._12_4_ +
                  fVar41 * auVar51._12_4_;
      pfVar1[4] = fVar20 * auVar43._16_4_ + fVar24 * auVar52._16_4_ + fVar29 * auVar44._16_4_ +
                  fVar37 * auVar51._16_4_;
      pfVar1[5] = fVar21 * auVar43._20_4_ + fVar26 * auVar52._20_4_ + fVar32 * auVar44._20_4_ +
                  fVar39 * auVar51._20_4_;
      pfVar1[6] = fVar22 * auVar43._24_4_ + fVar27 * auVar52._24_4_ + fVar33 * auVar44._24_4_ +
                  fVar40 * auVar51._24_4_;
      pfVar1[7] = auVar15._12_4_ + 0.0 + auVar4._12_4_ + auVar42._12_4_;
      auVar52._16_16_ = auVar47;
      auVar52._0_16_ = auVar46;
      auVar43 = vcvtdq2ps_avx(auVar52);
      pfVar1 = (float *)(param_2 + 0x20 + uVar18 * 4);
      *pfVar1 = fVar20 * auVar48._0_4_ + fVar24 * auVar49._0_4_ + fVar29 * auVar50._0_4_ +
                fVar37 * auVar43._0_4_;
      pfVar1[1] = fVar21 * auVar48._4_4_ + fVar26 * auVar49._4_4_ + fVar32 * auVar50._4_4_ +
                  fVar39 * auVar43._4_4_;
      pfVar1[2] = fVar22 * auVar48._8_4_ + fVar27 * auVar49._8_4_ + fVar33 * auVar50._8_4_ +
                  fVar40 * auVar43._8_4_;
      pfVar1[3] = fVar23 * auVar48._12_4_ + fVar28 * auVar49._12_4_ + fVar34 * auVar50._12_4_ +
                  fVar41 * auVar43._12_4_;
      pfVar1[4] = fVar20 * auVar48._16_4_ + fVar24 * auVar49._16_4_ + fVar29 * auVar50._16_4_ +
                  fVar37 * auVar43._16_4_;
      pfVar1[5] = fVar21 * auVar48._20_4_ + fVar26 * auVar49._20_4_ + fVar32 * auVar50._20_4_ +
                  fVar39 * auVar43._20_4_;
      pfVar1[6] = fVar22 * auVar48._24_4_ + fVar27 * auVar49._24_4_ + fVar33 * auVar50._24_4_ +
                  fVar40 * auVar43._24_4_;
      pfVar1[7] = auVar3._12_4_ + 0.0 + 0.0 + 0.0;
      uVar18 = uVar18 + 0x10;
    } while (uVar18 < uVar17);
    if (param_3 < uVar17 + 1) {
      return;
    }
    param_3 = param_3 - uVar17;
    if (3 < (longlong)param_3) {
      uVar16 = 0;
      uVar18 = param_3 & 0xfffffffffffffffc;
      puVar19 = (uint *)(uVar17 + param_1);
      do {
        auVar36 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + -3)));
        auVar38 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + 3)));
        auVar36 = vpaddw_avx(auVar36,auVar38);
        auVar36 = vpmovzxwd_avx(auVar36);
        auVar38 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + -2)));
        auVar35 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + 2)));
        auVar36 = vcvtdq2ps_avx(auVar36);
        auVar38 = vpaddw_avx(auVar38,auVar35);
        auVar38 = vpmovzxwd_avx(auVar38);
        auVar38 = vcvtdq2ps_avx(auVar38);
        auVar35 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + -1)));
        auVar30 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar19 + 1)));
        auVar35 = vpaddw_avx(auVar35,auVar30);
        auVar35 = vpmovzxwd_avx(auVar35);
        auVar35 = vcvtdq2ps_avx(auVar35);
        auVar30 = vpmovzxbw_avx(ZEXT416(*puVar19));
        puVar19 = puVar19 + 1;
        auVar30 = vpmovzxwd_avx(auVar30);
        auVar30 = vcvtdq2ps_avx(auVar30);
        pfVar1 = (float *)(param_2 + uVar17 * 4 + uVar16 * 4);
        *pfVar1 = fVar20 * auVar36._0_4_ + fVar24 * auVar38._0_4_ + fVar29 * auVar35._0_4_ +
                  fVar37 * auVar30._0_4_;
        pfVar1[1] = fVar21 * auVar36._4_4_ + fVar26 * auVar38._4_4_ + fVar32 * auVar35._4_4_ +
                    fVar39 * auVar30._4_4_;
        pfVar1[2] = fVar22 * auVar36._8_4_ + fVar27 * auVar38._8_4_ + fVar33 * auVar35._8_4_ +
                    fVar40 * auVar30._8_4_;
        pfVar1[3] = fVar23 * auVar36._12_4_ + fVar28 * auVar38._12_4_ + fVar34 * auVar35._12_4_ +
                    fVar41 * auVar30._12_4_;
        uVar16 = uVar16 + 4;
      } while (uVar16 < uVar18);
      goto LAB_14087b2cf;
    }
  }
  uVar18 = 0;
LAB_14087b2cf:
  if (uVar18 < param_3) {
    auVar31 = vunpcklps_avx(ZEXT416(uVar2),auVar31);
    auVar45 = vunpcklps_avx(auVar45,auVar25);
    param_1 = param_1 + uVar17;
    auVar45 = vmovlhps_avx(auVar31,auVar45);
    do {
      auVar25._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 3) + param_1) + (uint)*(byte *)(uVar18 + 3 + param_1));
      auVar25._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
      auVar31._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 2) + param_1) + (uint)*(byte *)(uVar18 + 2 + param_1));
      auVar31._4_8_ = SUB128(ZEXT812(0),4);
      auVar31._12_4_ = 0;
      auVar36._0_4_ =
           (float)((uint)*(byte *)((uVar18 - 1) + param_1) + (uint)*(byte *)(uVar18 + 1 + param_1));
      auVar36._4_8_ = SUB128(ZEXT812(0),4);
      auVar36._12_4_ = 0;
      auVar38._0_4_ = (float)*(byte *)(uVar18 + param_1);
      auVar38._4_8_ = SUB128(ZEXT812(0),4);
      auVar38._12_4_ = 0;
      auVar25 = vunpcklps_avx(auVar25,auVar31);
      auVar31 = vunpcklps_avx(auVar36,auVar38);
      auVar25 = vmovlhps_avx(auVar25,auVar31);
      auVar25 = vdpps_avx(auVar45,auVar25,0xf1);
      *(int *)(param_2 + uVar17 * 4 + uVar18 * 4) = auVar25._0_4_;
      uVar18 = uVar18 + 1;
    } while (uVar18 < param_3);
  }
  return;
}

