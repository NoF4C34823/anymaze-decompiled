
void FUN_1408525a9(ulonglong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
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
  ulonglong uVar30;
  longlong in_RDX;
  ulonglong uVar31;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong uVar32;
  longlong unaff_R12;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  auVar6._4_12_ = in_register_00001244;
  auVar6._0_4_ = param_2;
  auVar9._4_12_ = in_register_00001244;
  auVar9._0_4_ = param_2;
  auVar6 = vshufps_avx(auVar6,auVar9,0);
  auVar7._4_12_ = in_register_00001204;
  auVar7._0_4_ = in_XMM0_Da;
  auVar8._4_12_ = in_register_00001204;
  auVar8._0_4_ = in_XMM0_Da;
  auVar7 = vshufps_avx(auVar7,auVar8,0);
  do {
    pfVar4 = (float *)(unaff_R12 + -0xc + param_1 * 4);
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar12 = pfVar4[3];
    fVar13 = pfVar4[4];
    fVar14 = pfVar4[5];
    fVar15 = pfVar4[6];
    fVar16 = pfVar4[7];
    pfVar5 = (float *)(unaff_R12 + 0xc + param_1 * 4);
    fVar17 = pfVar5[1];
    fVar18 = pfVar5[2];
    fVar19 = pfVar5[3];
    fVar20 = pfVar5[4];
    fVar21 = pfVar5[5];
    fVar22 = pfVar5[6];
    fVar23 = pfVar5[7];
    fVar37 = auVar6._0_4_;
    fVar38 = auVar6._4_4_;
    fVar39 = auVar6._8_4_;
    fVar40 = auVar6._12_4_;
    pfVar1 = (float *)(unaff_R12 + param_1 * 4);
    fVar24 = pfVar1[1];
    fVar25 = pfVar1[2];
    fVar26 = pfVar1[3];
    fVar27 = pfVar1[4];
    fVar28 = pfVar1[5];
    fVar29 = pfVar1[6];
    fVar33 = auVar7._0_4_;
    fVar34 = auVar7._4_4_;
    fVar35 = auVar7._8_4_;
    fVar36 = auVar7._12_4_;
    pfVar2 = (float *)(in_RDX + param_1 * 4);
    *pfVar2 = fVar37 * (*pfVar4 + *pfVar5) + fVar33 * *pfVar1;
    pfVar2[1] = fVar38 * (fVar10 + fVar17) + fVar34 * fVar24;
    pfVar2[2] = fVar39 * (fVar11 + fVar18) + fVar35 * fVar25;
    pfVar2[3] = fVar40 * (fVar12 + fVar19) + fVar36 * fVar26;
    pfVar2[4] = fVar37 * (fVar13 + fVar20) + fVar33 * fVar27;
    pfVar2[5] = fVar38 * (fVar14 + fVar21) + fVar34 * fVar28;
    pfVar2[6] = fVar39 * (fVar15 + fVar22) + fVar35 * fVar29;
    pfVar2[7] = fVar16 + fVar16 + fVar23;
    pfVar1 = (float *)(unaff_R12 + 0x14 + param_1 * 4);
    fVar10 = pfVar1[1];
    fVar11 = pfVar1[2];
    fVar12 = pfVar1[3];
    fVar13 = pfVar1[4];
    fVar14 = pfVar1[5];
    fVar15 = pfVar1[6];
    fVar16 = pfVar1[7];
    pfVar2 = (float *)(unaff_R12 + 0x2c + param_1 * 4);
    fVar17 = pfVar2[1];
    fVar18 = pfVar2[2];
    fVar19 = pfVar2[3];
    fVar20 = pfVar2[4];
    fVar21 = pfVar2[5];
    fVar22 = pfVar2[6];
    fVar23 = pfVar2[7];
    pfVar4 = (float *)(unaff_R12 + 0x20 + param_1 * 4);
    fVar24 = pfVar4[1];
    fVar25 = pfVar4[2];
    fVar26 = pfVar4[3];
    fVar27 = pfVar4[4];
    fVar28 = pfVar4[5];
    fVar29 = pfVar4[6];
    pfVar5 = (float *)(in_RDX + 0x20 + param_1 * 4);
    *pfVar5 = fVar37 * (*pfVar1 + *pfVar2) + fVar33 * *pfVar4;
    pfVar5[1] = fVar38 * (fVar10 + fVar17) + fVar34 * fVar24;
    pfVar5[2] = fVar39 * (fVar11 + fVar18) + fVar35 * fVar25;
    pfVar5[3] = fVar40 * (fVar12 + fVar19) + fVar36 * fVar26;
    pfVar5[4] = fVar37 * (fVar13 + fVar20) + fVar33 * fVar27;
    pfVar5[5] = fVar38 * (fVar14 + fVar21) + fVar34 * fVar28;
    pfVar5[6] = fVar39 * (fVar15 + fVar22) + fVar35 * fVar29;
    pfVar5[7] = fVar16 + fVar16 + fVar23;
    param_1 = param_1 + 0x10;
  } while (param_1 < in_R10);
  if (in_R10 + 1 <= in_R11) {
    uVar32 = in_R11 - in_R10;
    if ((longlong)uVar32 < 4) {
      FUN_1408526b3(param_1,in_RDX,auVar6._0_8_,0);
      return;
    }
    uVar30 = 0;
    uVar31 = uVar32 & 0xfffffffffffffffc;
    do {
      pfVar4 = (float *)(unaff_R12 + -0xc + (uVar30 + in_R10) * 4);
      fVar10 = pfVar4[1];
      fVar11 = pfVar4[2];
      fVar12 = pfVar4[3];
      pfVar1 = (float *)(unaff_R12 + (uVar30 + in_R10) * 4);
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar5 = (float *)(unaff_R12 + in_R10 * 4 + 0xc + uVar30 * 4);
      fVar16 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar18 = pfVar5[3];
      pfVar2 = (float *)(in_RDX + in_R10 * 4 + uVar30 * 4);
      *pfVar2 = fVar37 * (*pfVar4 + *pfVar5) + fVar33 * *pfVar1;
      pfVar2[1] = fVar38 * (fVar10 + fVar16) + fVar34 * fVar13;
      pfVar2[2] = fVar39 * (fVar11 + fVar17) + fVar35 * fVar14;
      pfVar2[3] = fVar40 * (fVar12 + fVar18) + fVar36 * fVar15;
      uVar30 = uVar30 + 4;
    } while (uVar30 < uVar31);
    if (uVar31 < uVar32) {
      lVar3 = unaff_R12 + in_R10 * 4;
      do {
        *(float *)(in_RDX + in_R10 * 4 + uVar31 * 4) =
             param_2 * (*(float *)(lVar3 + -0xc + uVar31 * 4) + *(float *)(lVar3 + 0xc + uVar31 * 4)
                       ) + in_XMM0_Da * *(float *)(lVar3 + uVar31 * 4);
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar32);
    }
  }
  return;
}

