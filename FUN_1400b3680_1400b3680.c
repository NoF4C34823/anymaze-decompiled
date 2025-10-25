
void FUN_1400b3680(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  
  uVar16 = param_3 * 3;
  if ((longlong)uVar16 < 1) {
    return;
  }
  auVar20 = ZEXT416(param_4[1]);
  auVar21 = ZEXT416(*param_4);
  auVar22 = ZEXT416(param_4[3]);
  auVar23 = ZEXT416(param_4[2]);
  if (7 < (longlong)uVar16) {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1400b39d5;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 8) <= (longlong)uVar16) {
      uVar17 = 0;
      uVar18 = uVar16 - (uVar16 - uVar19 & 7);
      if (uVar19 != 0) {
        auVar24 = vunpcklps_avx(auVar21,auVar20);
        auVar27 = vunpcklps_avx(auVar23,auVar22);
        auVar24 = vmovlhps_avx(auVar24,auVar27);
        do {
          auVar30._0_4_ =
               (float)((int)*(short *)(param_1 + -0x12 + uVar17 * 2) +
                      (int)*(short *)(param_1 + 0x12 + uVar17 * 2));
          auVar30._4_12_ = auVar27._4_12_;
          auVar27._0_4_ =
               (float)((int)*(short *)(param_1 + -0xc + uVar17 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar17 * 2));
          auVar27._4_8_ = SUB128(ZEXT812(0),4);
          auVar27._12_4_ = 0;
          auVar30 = vunpcklps_avx(auVar30,auVar27);
          auVar25._0_4_ =
               (float)((int)*(short *)(param_1 + -6 + uVar17 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar17 * 2));
          auVar25._4_8_ = SUB128(ZEXT812(0),4);
          auVar25._12_4_ = 0;
          auVar27 = ZEXT416((uint)(float)(int)*(short *)(param_1 + uVar17 * 2));
          auVar25 = vunpcklps_avx(auVar25,auVar27);
          auVar30 = vmovlhps_avx(auVar30,auVar25);
          auVar30 = vdpps_avx(auVar24,auVar30,0xf1);
          *(int *)(param_2 + uVar17 * 4) = auVar30._0_4_;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      auVar24 = vshufps_avx(auVar21,auVar21,0);
      auVar27 = vshufps_avx(auVar20,auVar20,0);
      auVar30 = vshufps_avx(auVar23,auVar23,0);
      auVar25 = vshufps_avx(auVar22,auVar22,0);
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1 + -0x12 + uVar19 * 2);
        auVar2 = vpmovsxwd_avx(auVar2);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(param_1 + 0x12 + uVar19 * 2);
        auVar3 = vpmovsxwd_avx(auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(param_1 + -10 + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar4);
        auVar2 = vpaddd_avx(auVar2,auVar3);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + 0x1a + uVar19 * 2);
        auVar3 = vpmovsxwd_avx(auVar5);
        auVar3 = vpaddd_avx(auVar4,auVar3);
        auVar26._16_16_ = auVar3;
        auVar26._0_16_ = auVar2;
        auVar26 = vcvtdq2ps_avx(auVar26);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + -0xc + uVar19 * 2);
        auVar2 = vpmovsxwd_avx(auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + 0xc + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar7);
        auVar2 = vpaddd_avx(auVar2,auVar4);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + -4 + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(param_1 + 0x14 + uVar19 * 2);
        auVar5 = vpmovsxwd_avx(auVar9);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar28._16_16_ = auVar4;
        auVar28._0_16_ = auVar2;
        auVar28 = vcvtdq2ps_avx(auVar28);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + 6 + uVar19 * 2);
        auVar2 = vpmovsxwd_avx(auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + -6 + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + 0xe + uVar19 * 2);
        auVar5 = vpmovsxwd_avx(auVar12);
        auVar2 = vpaddd_avx(auVar4,auVar2);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 2 + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar13);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar29._16_16_ = auVar4;
        auVar29._0_16_ = auVar2;
        auVar29 = vcvtdq2ps_avx(auVar29);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + uVar19 * 2);
        auVar2 = vpmovsxwd_avx(auVar14);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + 8 + uVar19 * 2);
        auVar4 = vpmovsxwd_avx(auVar15);
        auVar31._16_16_ = auVar4;
        auVar31._0_16_ = auVar2;
        auVar31 = vcvtdq2ps_avx(auVar31);
        pfVar1 = (float *)(param_2 + uVar19 * 4);
        *pfVar1 = auVar24._0_4_ * auVar26._0_4_ + auVar27._0_4_ * auVar28._0_4_ +
                  auVar30._0_4_ * auVar29._0_4_ + auVar25._0_4_ * auVar31._0_4_;
        pfVar1[1] = auVar24._4_4_ * auVar26._4_4_ + auVar27._4_4_ * auVar28._4_4_ +
                    auVar30._4_4_ * auVar29._4_4_ + auVar25._4_4_ * auVar31._4_4_;
        pfVar1[2] = auVar24._8_4_ * auVar26._8_4_ + auVar27._8_4_ * auVar28._8_4_ +
                    auVar30._8_4_ * auVar29._8_4_ + auVar25._8_4_ * auVar31._8_4_;
        pfVar1[3] = auVar24._12_4_ * auVar26._12_4_ + auVar27._12_4_ * auVar28._12_4_ +
                    auVar30._12_4_ * auVar29._12_4_ + auVar25._12_4_ * auVar31._12_4_;
        pfVar1[4] = auVar24._0_4_ * auVar26._16_4_ + auVar27._0_4_ * auVar28._16_4_ +
                    auVar30._0_4_ * auVar29._16_4_ + auVar25._0_4_ * auVar31._16_4_;
        pfVar1[5] = auVar24._4_4_ * auVar26._20_4_ + auVar27._4_4_ * auVar28._20_4_ +
                    auVar30._4_4_ * auVar29._20_4_ + auVar25._4_4_ * auVar31._20_4_;
        pfVar1[6] = auVar24._8_4_ * auVar26._24_4_ + auVar27._8_4_ * auVar28._24_4_ +
                    auVar30._8_4_ * auVar29._24_4_ + auVar25._8_4_ * auVar31._24_4_;
        pfVar1[7] = auVar3._12_4_ + 0.0 + 0.0 + 0.0;
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar18);
      goto LAB_1400b3925;
    }
  }
LAB_1400b39d5:
  uVar18 = 0;
LAB_1400b3925:
  if (uVar18 < uVar16) {
    auVar20 = vunpcklps_avx(auVar21,auVar20);
    auVar21 = vunpcklps_avx(auVar23,auVar22);
    auVar20 = vmovlhps_avx(auVar20,auVar21);
    do {
      auVar21._0_4_ =
           (float)((int)*(short *)(param_1 + -0x12 + uVar18 * 2) +
                  (int)*(short *)(param_1 + 0x12 + uVar18 * 2));
      auVar21._4_8_ = SUB128(ZEXT812(0),4);
      auVar21._12_4_ = 0;
      auVar22._0_4_ =
           (float)((int)*(short *)(param_1 + -0xc + uVar18 * 2) +
                  (int)*(short *)(param_1 + 0xc + uVar18 * 2));
      auVar22._4_8_ = SUB128(ZEXT812(0),4);
      auVar22._12_4_ = 0;
      auVar23._0_4_ =
           (float)((int)*(short *)(param_1 + -6 + uVar18 * 2) +
                  (int)*(short *)(param_1 + 6 + uVar18 * 2));
      auVar23._4_8_ = SUB128(ZEXT812(0),4);
      auVar23._12_4_ = 0;
      auVar24._0_4_ = (float)(int)*(short *)(param_1 + uVar18 * 2);
      auVar24._4_8_ = SUB128(ZEXT812(0),4);
      auVar24._12_4_ = 0;
      auVar21 = vunpcklps_avx(auVar21,auVar22);
      auVar22 = vunpcklps_avx(auVar23,auVar24);
      auVar21 = vmovlhps_avx(auVar21,auVar22);
      auVar21 = vdpps_avx(auVar20,auVar21,0xf1);
      *(int *)(param_2 + uVar18 * 4) = auVar21._0_4_;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar16);
  }
  return;
}

