
void FUN_1401e55c0(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  
  if ((longlong)param_3 < 1) {
    return;
  }
  auVar19 = ZEXT416(param_4[1]);
  auVar20 = ZEXT416(*param_4);
  auVar21 = ZEXT416(param_4[3]);
  auVar22 = ZEXT416(param_4[2]);
  if (7 < (longlong)param_3) {
    uVar18 = param_2 & 0x1f;
    if (uVar18 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401e5914;
      uVar18 = 0x20 - uVar18 >> 2;
    }
    if ((longlong)(uVar18 + 8) <= (longlong)param_3) {
      uVar16 = 0;
      uVar17 = param_3 - (param_3 - uVar18 & 7);
      if (uVar18 != 0) {
        auVar23 = vunpcklps_avx(auVar20,auVar19);
        auVar28 = vunpcklps_avx(auVar22,auVar21);
        auVar23 = vmovlhps_avx(auVar23,auVar28);
        do {
          auVar29._0_4_ =
               (float)((int)*(short *)(param_1 + -6 + uVar16 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar16 * 2));
          auVar29._4_12_ = auVar28._4_12_;
          auVar28._0_4_ =
               (float)((int)*(short *)(param_1 + -4 + uVar16 * 2) +
                      (int)*(short *)(param_1 + 4 + uVar16 * 2));
          auVar28._4_8_ = SUB128(ZEXT812(0),4);
          auVar28._12_4_ = 0;
          auVar29 = vunpcklps_avx(auVar29,auVar28);
          auVar24._0_4_ =
               (float)((int)*(short *)(param_1 + -2 + uVar16 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar16 * 2));
          auVar24._4_8_ = SUB128(ZEXT812(0),4);
          auVar24._12_4_ = 0;
          auVar28 = ZEXT416((uint)(float)(int)*(short *)(param_1 + uVar16 * 2));
          auVar24 = vunpcklps_avx(auVar24,auVar28);
          auVar29 = vmovlhps_avx(auVar29,auVar24);
          auVar29 = vdpps_avx(auVar23,auVar29,0xf1);
          *(int *)(param_2 + uVar16 * 4) = auVar29._0_4_;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
      auVar23 = vshufps_avx(auVar20,auVar20,0);
      auVar28 = vshufps_avx(auVar19,auVar19,0);
      auVar29 = vshufps_avx(auVar22,auVar22,0);
      auVar24 = vshufps_avx(auVar21,auVar21,0);
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1 + -6 + uVar18 * 2);
        auVar2 = vpmovsxwd_avx(auVar2);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(param_1 + 6 + uVar18 * 2);
        auVar3 = vpmovsxwd_avx(auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(param_1 + 2 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar4);
        auVar2 = vpaddd_avx(auVar2,auVar3);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + 0xe + uVar18 * 2);
        auVar3 = vpmovsxwd_avx(auVar5);
        auVar3 = vpaddd_avx(auVar4,auVar3);
        auVar25._16_16_ = auVar3;
        auVar25._0_16_ = auVar2;
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + -4 + uVar18 * 2);
        auVar2 = vpmovsxwd_avx(auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + 4 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar7);
        auVar2 = vpaddd_avx(auVar2,auVar4);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + 4 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(param_1 + 0xc + uVar18 * 2);
        auVar5 = vpmovsxwd_avx(auVar9);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar26._16_16_ = auVar4;
        auVar26._0_16_ = auVar2;
        auVar26 = vcvtdq2ps_avx(auVar26);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + 2 + uVar18 * 2);
        auVar2 = vpmovsxwd_avx(auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + -2 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + 10 + uVar18 * 2);
        auVar5 = vpmovsxwd_avx(auVar12);
        auVar2 = vpaddd_avx(auVar4,auVar2);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 6 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar13);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar27._16_16_ = auVar4;
        auVar27._0_16_ = auVar2;
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + uVar18 * 2);
        auVar2 = vpmovsxwd_avx(auVar14);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + 8 + uVar18 * 2);
        auVar4 = vpmovsxwd_avx(auVar15);
        auVar30._16_16_ = auVar4;
        auVar30._0_16_ = auVar2;
        auVar30 = vcvtdq2ps_avx(auVar30);
        pfVar1 = (float *)(param_2 + uVar18 * 4);
        *pfVar1 = auVar23._0_4_ * auVar25._0_4_ + auVar28._0_4_ * auVar26._0_4_ +
                  auVar29._0_4_ * auVar27._0_4_ + auVar24._0_4_ * auVar30._0_4_;
        pfVar1[1] = auVar23._4_4_ * auVar25._4_4_ + auVar28._4_4_ * auVar26._4_4_ +
                    auVar29._4_4_ * auVar27._4_4_ + auVar24._4_4_ * auVar30._4_4_;
        pfVar1[2] = auVar23._8_4_ * auVar25._8_4_ + auVar28._8_4_ * auVar26._8_4_ +
                    auVar29._8_4_ * auVar27._8_4_ + auVar24._8_4_ * auVar30._8_4_;
        pfVar1[3] = auVar23._12_4_ * auVar25._12_4_ + auVar28._12_4_ * auVar26._12_4_ +
                    auVar29._12_4_ * auVar27._12_4_ + auVar24._12_4_ * auVar30._12_4_;
        pfVar1[4] = auVar23._0_4_ * auVar25._16_4_ + auVar28._0_4_ * auVar26._16_4_ +
                    auVar29._0_4_ * auVar27._16_4_ + auVar24._0_4_ * auVar30._16_4_;
        pfVar1[5] = auVar23._4_4_ * auVar25._20_4_ + auVar28._4_4_ * auVar26._20_4_ +
                    auVar29._4_4_ * auVar27._20_4_ + auVar24._4_4_ * auVar30._20_4_;
        pfVar1[6] = auVar23._8_4_ * auVar25._24_4_ + auVar28._8_4_ * auVar26._24_4_ +
                    auVar29._8_4_ * auVar27._24_4_ + auVar24._8_4_ * auVar30._24_4_;
        pfVar1[7] = auVar3._12_4_ + 0.0 + 0.0 + 0.0;
        uVar18 = uVar18 + 8;
      } while (uVar18 < uVar17);
      goto LAB_1401e586b;
    }
  }
LAB_1401e5914:
  uVar17 = 0;
LAB_1401e586b:
  if (uVar17 < param_3) {
    auVar19 = vunpcklps_avx(auVar20,auVar19);
    auVar20 = vunpcklps_avx(auVar22,auVar21);
    auVar19 = vmovlhps_avx(auVar19,auVar20);
    do {
      auVar20._0_4_ =
           (float)((int)*(short *)(param_1 + -6 + uVar17 * 2) +
                  (int)*(short *)(param_1 + 6 + uVar17 * 2));
      auVar20._4_8_ = SUB128(ZEXT812(0),4);
      auVar20._12_4_ = 0;
      auVar21._0_4_ =
           (float)((int)*(short *)(param_1 + -4 + uVar17 * 2) +
                  (int)*(short *)(param_1 + 4 + uVar17 * 2));
      auVar21._4_8_ = SUB128(ZEXT812(0),4);
      auVar21._12_4_ = 0;
      auVar22._0_4_ =
           (float)((int)*(short *)(param_1 + -2 + uVar17 * 2) +
                  (int)*(short *)(param_1 + 2 + uVar17 * 2));
      auVar22._4_8_ = SUB128(ZEXT812(0),4);
      auVar22._12_4_ = 0;
      auVar23._0_4_ = (float)(int)*(short *)(param_1 + uVar17 * 2);
      auVar23._4_8_ = SUB128(ZEXT812(0),4);
      auVar23._12_4_ = 0;
      auVar20 = vunpcklps_avx(auVar20,auVar21);
      auVar21 = vunpcklps_avx(auVar22,auVar23);
      auVar20 = vmovlhps_avx(auVar20,auVar21);
      auVar20 = vdpps_avx(auVar19,auVar20,0xf1);
      *(int *)(param_2 + uVar17 * 4) = auVar20._0_4_;
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_3);
  }
  return;
}

