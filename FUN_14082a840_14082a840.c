
void FUN_14082a840(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  if ((longlong)param_3 < 1) {
    return;
  }
  auVar63 = ZEXT416(param_4[1]);
  auVar64 = ZEXT416(*param_4);
  auVar61 = ZEXT416(param_4[3]);
  auVar62 = ZEXT416(param_4[2]);
  if (7 < (longlong)param_3) {
    uVar59 = param_2 & 0x1f;
    if (uVar59 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14082aa87;
      uVar59 = 0x20 - uVar59 >> 2;
    }
    if ((longlong)(uVar59 + 8) <= (longlong)param_3) {
      uVar58 = 0;
      uVar57 = param_3 - (param_3 - uVar59 & 7);
      if (uVar59 != 0) {
        auVar10 = vunpcklps_avx(auVar64,auVar63);
        auVar11 = vunpcklps_avx(auVar62,auVar61);
        auVar10 = vmovlhps_avx(auVar10,auVar11);
        do {
          auVar12 = vunpcklps_avx(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar58 * 4) +
                                                *(float *)(param_1 + 0xc + uVar58 * 4))),
                                  ZEXT416((uint)(*(float *)(param_1 + -8 + uVar58 * 4) +
                                                *(float *)(param_1 + 8 + uVar58 * 4))));
          auVar11 = vinsertps_avx(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar58 * 4) +
                                                *(float *)(param_1 + 4 + uVar58 * 4))),
                                  ZEXT416(*(uint *)(param_1 + uVar58 * 4)),0x10);
          auVar11 = vmovlhps_avx(auVar12,auVar11);
          auVar11 = vdpps_avx(auVar10,auVar11,0xf1);
          *(int *)(param_2 + uVar58 * 4) = auVar11._0_4_;
          uVar58 = uVar58 + 1;
        } while (uVar58 < uVar59);
      }
      auVar10 = vshufps_avx(auVar64,auVar64,0);
      auVar11 = vshufps_avx(auVar63,auVar63,0);
      auVar12 = vshufps_avx(auVar62,auVar62,0);
      auVar9 = vshufps_avx(auVar61,auVar61,0);
      do {
        pfVar3 = (float *)(param_1 + -4 + uVar59 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        fVar16 = pfVar3[4];
        fVar17 = pfVar3[5];
        fVar18 = pfVar3[6];
        fVar19 = pfVar3[7];
        pfVar4 = (float *)(param_1 + -8 + uVar59 * 4);
        fVar20 = pfVar4[1];
        fVar21 = pfVar4[2];
        fVar22 = pfVar4[3];
        fVar23 = pfVar4[4];
        fVar24 = pfVar4[5];
        fVar25 = pfVar4[6];
        pfVar5 = (float *)(param_1 + 4 + uVar59 * 4);
        fVar26 = pfVar5[1];
        fVar27 = pfVar5[2];
        fVar28 = pfVar5[3];
        fVar29 = pfVar5[4];
        fVar30 = pfVar5[5];
        fVar31 = pfVar5[6];
        fVar32 = pfVar5[7];
        pfVar6 = (float *)(param_1 + 8 + uVar59 * 4);
        fVar33 = pfVar6[1];
        fVar34 = pfVar6[2];
        fVar35 = pfVar6[3];
        fVar36 = pfVar6[4];
        fVar37 = pfVar6[5];
        fVar38 = pfVar6[6];
        pfVar7 = (float *)(param_1 + -0xc + uVar59 * 4);
        fVar39 = pfVar7[1];
        fVar40 = pfVar7[2];
        fVar41 = pfVar7[3];
        fVar42 = pfVar7[4];
        fVar43 = pfVar7[5];
        fVar44 = pfVar7[6];
        pfVar8 = (float *)(param_1 + 0xc + uVar59 * 4);
        fVar45 = pfVar8[1];
        fVar46 = pfVar8[2];
        fVar47 = pfVar8[3];
        fVar48 = pfVar8[4];
        fVar49 = pfVar8[5];
        fVar50 = pfVar8[6];
        fVar60 = pfVar7[7] + pfVar8[7] + pfVar4[7];
        pfVar1 = (float *)(param_1 + uVar59 * 4);
        fVar51 = pfVar1[1];
        fVar52 = pfVar1[2];
        fVar53 = pfVar1[3];
        fVar54 = pfVar1[4];
        fVar55 = pfVar1[5];
        fVar56 = pfVar1[6];
        pfVar2 = (float *)(param_2 + uVar59 * 4);
        *pfVar2 = auVar10._0_4_ * (*pfVar7 + *pfVar8) + auVar11._0_4_ * (*pfVar4 + *pfVar6) +
                  auVar12._0_4_ * (*pfVar3 + *pfVar5) + auVar9._0_4_ * *pfVar1;
        pfVar2[1] = auVar10._4_4_ * (fVar39 + fVar45) + auVar11._4_4_ * (fVar20 + fVar33) +
                    auVar12._4_4_ * (fVar13 + fVar26) + auVar9._4_4_ * fVar51;
        pfVar2[2] = auVar10._8_4_ * (fVar40 + fVar46) + auVar11._8_4_ * (fVar21 + fVar34) +
                    auVar12._8_4_ * (fVar14 + fVar27) + auVar9._8_4_ * fVar52;
        pfVar2[3] = auVar10._12_4_ * (fVar41 + fVar47) + auVar11._12_4_ * (fVar22 + fVar35) +
                    auVar12._12_4_ * (fVar15 + fVar28) + auVar9._12_4_ * fVar53;
        pfVar2[4] = auVar10._0_4_ * (fVar42 + fVar48) + auVar11._0_4_ * (fVar23 + fVar36) +
                    auVar12._0_4_ * (fVar16 + fVar29) + auVar9._0_4_ * fVar54;
        pfVar2[5] = auVar10._4_4_ * (fVar43 + fVar49) + auVar11._4_4_ * (fVar24 + fVar37) +
                    auVar12._4_4_ * (fVar17 + fVar30) + auVar9._4_4_ * fVar55;
        pfVar2[6] = auVar10._8_4_ * (fVar44 + fVar50) + auVar11._8_4_ * (fVar25 + fVar38) +
                    auVar12._8_4_ * (fVar18 + fVar31) + auVar9._8_4_ * fVar56;
        pfVar2[7] = fVar60 + fVar19 + fVar32 + fVar60;
        uVar59 = uVar59 + 8;
      } while (uVar59 < uVar57);
      goto LAB_14082a9fd;
    }
  }
LAB_14082aa87:
  uVar57 = 0;
LAB_14082a9fd:
  if (uVar57 < param_3) {
    auVar63 = vunpcklps_avx(auVar64,auVar63);
    auVar61 = vunpcklps_avx(auVar62,auVar61);
    auVar61 = vmovlhps_avx(auVar63,auVar61);
    do {
      auVar62 = vinsertps_avx(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar57 * 4) +
                                            *(float *)(param_1 + 4 + uVar57 * 4))),
                              ZEXT416(*(uint *)(param_1 + uVar57 * 4)),0x10);
      auVar63 = vunpcklps_avx(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar57 * 4) +
                                            *(float *)(param_1 + 0xc + uVar57 * 4))),
                              ZEXT416((uint)(*(float *)(param_1 + -8 + uVar57 * 4) +
                                            *(float *)(param_1 + 8 + uVar57 * 4))));
      auVar62 = vmovlhps_avx(auVar63,auVar62);
      auVar62 = vdpps_avx(auVar61,auVar62,0xf1);
      *(int *)(param_2 + uVar57 * 4) = auVar62._0_4_;
      uVar57 = uVar57 + 1;
    } while (uVar57 < param_3);
  }
  return;
}

