
void FUN_140852a40(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar14;
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
  float fVar57;
  float fVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  
  uVar14 = param_3 * 3;
  if ((longlong)uVar14 < 1) {
    return;
  }
  auVar65 = ZEXT416(param_4[1]);
  auVar66 = ZEXT416(*param_4);
  auVar63 = ZEXT416(param_4[3]);
  auVar64 = ZEXT416(param_4[2]);
  if (7 < (longlong)uVar14) {
    uVar61 = param_2 & 0x1f;
    if (uVar61 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140852c87;
      uVar61 = 0x20 - uVar61 >> 2;
    }
    if ((longlong)(uVar61 + 8) <= (longlong)uVar14) {
      uVar60 = 0;
      uVar59 = uVar14 - (uVar14 - uVar61 & 7);
      if (uVar61 != 0) {
        auVar11 = vunpcklps_avx(auVar66,auVar65);
        auVar12 = vunpcklps_avx(auVar64,auVar63);
        auVar11 = vmovlhps_avx(auVar11,auVar12);
        do {
          auVar13 = vunpcklps_avx(ZEXT416((uint)(*(float *)(param_1 + -0x24 + uVar60 * 4) +
                                                *(float *)(param_1 + 0x24 + uVar60 * 4))),
                                  ZEXT416((uint)(*(float *)(param_1 + -0x18 + uVar60 * 4) +
                                                *(float *)(param_1 + 0x18 + uVar60 * 4))));
          auVar12 = vinsertps_avx(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar60 * 4) +
                                                *(float *)(param_1 + 0xc + uVar60 * 4))),
                                  ZEXT416(*(uint *)(param_1 + uVar60 * 4)),0x10);
          auVar12 = vmovlhps_avx(auVar13,auVar12);
          auVar12 = vdpps_avx(auVar11,auVar12,0xf1);
          *(int *)(param_2 + uVar60 * 4) = auVar12._0_4_;
          uVar60 = uVar60 + 1;
        } while (uVar60 < uVar61);
      }
      auVar11 = vshufps_avx(auVar66,auVar66,0);
      auVar12 = vshufps_avx(auVar65,auVar65,0);
      auVar13 = vshufps_avx(auVar64,auVar64,0);
      auVar10 = vshufps_avx(auVar63,auVar63,0);
      do {
        pfVar3 = (float *)(param_1 + -0xc + uVar61 * 4);
        fVar15 = pfVar3[1];
        fVar16 = pfVar3[2];
        fVar17 = pfVar3[3];
        fVar18 = pfVar3[4];
        fVar19 = pfVar3[5];
        fVar20 = pfVar3[6];
        fVar21 = pfVar3[7];
        pfVar4 = (float *)(param_1 + -0x18 + uVar61 * 4);
        fVar22 = pfVar4[1];
        fVar23 = pfVar4[2];
        fVar24 = pfVar4[3];
        fVar25 = pfVar4[4];
        fVar26 = pfVar4[5];
        fVar27 = pfVar4[6];
        pfVar5 = (float *)(param_1 + 0xc + uVar61 * 4);
        fVar28 = pfVar5[1];
        fVar29 = pfVar5[2];
        fVar30 = pfVar5[3];
        fVar31 = pfVar5[4];
        fVar32 = pfVar5[5];
        fVar33 = pfVar5[6];
        fVar34 = pfVar5[7];
        pfVar6 = (float *)(param_1 + 0x18 + uVar61 * 4);
        fVar35 = pfVar6[1];
        fVar36 = pfVar6[2];
        fVar37 = pfVar6[3];
        fVar38 = pfVar6[4];
        fVar39 = pfVar6[5];
        fVar40 = pfVar6[6];
        pfVar7 = (float *)(param_1 + 0x24 + uVar61 * 4);
        fVar53 = pfVar7[1];
        fVar54 = pfVar7[2];
        fVar55 = pfVar7[3];
        lVar8 = param_1 + 0x34 + uVar61 * 4;
        fVar56 = *(float *)(lVar8 + 0x10);
        fVar57 = *(float *)(lVar8 + 0x14);
        fVar58 = *(float *)(lVar8 + 0x18);
        pfVar9 = (float *)(param_1 + -0x24 + uVar61 * 4);
        fVar41 = pfVar9[1];
        fVar42 = pfVar9[2];
        fVar43 = pfVar9[3];
        fVar44 = pfVar9[4];
        fVar45 = pfVar9[5];
        fVar46 = pfVar9[6];
        fVar62 = *(float *)(lVar8 + 0x1c) + pfVar9[7] + pfVar4[7];
        pfVar1 = (float *)(param_1 + uVar61 * 4);
        fVar47 = pfVar1[1];
        fVar48 = pfVar1[2];
        fVar49 = pfVar1[3];
        fVar50 = pfVar1[4];
        fVar51 = pfVar1[5];
        fVar52 = pfVar1[6];
        pfVar2 = (float *)(param_2 + uVar61 * 4);
        *pfVar2 = auVar11._0_4_ * (*pfVar7 + *pfVar9) + auVar12._0_4_ * (*pfVar4 + *pfVar6) +
                  auVar13._0_4_ * (*pfVar3 + *pfVar5) + auVar10._0_4_ * *pfVar1;
        pfVar2[1] = auVar11._4_4_ * (fVar53 + fVar41) + auVar12._4_4_ * (fVar22 + fVar35) +
                    auVar13._4_4_ * (fVar15 + fVar28) + auVar10._4_4_ * fVar47;
        pfVar2[2] = auVar11._8_4_ * (fVar54 + fVar42) + auVar12._8_4_ * (fVar23 + fVar36) +
                    auVar13._8_4_ * (fVar16 + fVar29) + auVar10._8_4_ * fVar48;
        pfVar2[3] = auVar11._12_4_ * (fVar55 + fVar43) + auVar12._12_4_ * (fVar24 + fVar37) +
                    auVar13._12_4_ * (fVar17 + fVar30) + auVar10._12_4_ * fVar49;
        pfVar2[4] = auVar11._0_4_ * (fVar56 + fVar44) + auVar12._0_4_ * (fVar25 + fVar38) +
                    auVar13._0_4_ * (fVar18 + fVar31) + auVar10._0_4_ * fVar50;
        pfVar2[5] = auVar11._4_4_ * (fVar57 + fVar45) + auVar12._4_4_ * (fVar26 + fVar39) +
                    auVar13._4_4_ * (fVar19 + fVar32) + auVar10._4_4_ * fVar51;
        pfVar2[6] = auVar11._8_4_ * (fVar58 + fVar46) + auVar12._8_4_ * (fVar27 + fVar40) +
                    auVar13._8_4_ * (fVar20 + fVar33) + auVar10._8_4_ * fVar52;
        pfVar2[7] = fVar62 + fVar21 + fVar34 + fVar62;
        uVar61 = uVar61 + 8;
      } while (uVar61 < uVar59);
      goto LAB_140852c05;
    }
  }
LAB_140852c87:
  uVar59 = 0;
LAB_140852c05:
  if (uVar59 < uVar14) {
    auVar65 = vunpcklps_avx(auVar66,auVar65);
    auVar63 = vunpcklps_avx(auVar64,auVar63);
    auVar63 = vmovlhps_avx(auVar65,auVar63);
    do {
      auVar64 = vinsertps_avx(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar59 * 4) +
                                            *(float *)(param_1 + 0xc + uVar59 * 4))),
                              ZEXT416(*(uint *)(param_1 + uVar59 * 4)),0x10);
      auVar65 = vunpcklps_avx(ZEXT416((uint)(*(float *)(param_1 + -0x24 + uVar59 * 4) +
                                            *(float *)(param_1 + 0x24 + uVar59 * 4))),
                              ZEXT416((uint)(*(float *)(param_1 + -0x18 + uVar59 * 4) +
                                            *(float *)(param_1 + 0x18 + uVar59 * 4))));
      auVar64 = vmovlhps_avx(auVar65,auVar64);
      auVar64 = vdpps_avx(auVar63,auVar64,0xf1);
      *(int *)(param_2 + uVar59 * 4) = auVar64._0_4_;
      uVar59 = uVar59 + 1;
    } while (uVar59 < uVar14);
  }
  return;
}

