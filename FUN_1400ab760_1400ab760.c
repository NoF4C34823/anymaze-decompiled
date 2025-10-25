
void FUN_1400ab760(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
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
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  uVar32 = param_3 * 3;
  fVar5 = *param_4;
  fVar6 = param_4[1];
  if ((longlong)uVar32 < 1) {
    return;
  }
  if (0xf < (longlong)uVar32) {
    uVar30 = param_2 & 0x1f;
    if (uVar30 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1400ab954;
      uVar30 = 0x20 - uVar30 >> 2;
    }
    if ((longlong)(uVar30 + 0x10) <= (longlong)uVar32) {
      uVar29 = 0;
      uVar31 = uVar32 - (uVar32 - uVar30 & 0xf);
      if (uVar30 != 0) {
        do {
          *(float *)(param_2 + uVar29 * 4) =
               fVar5 * (*(float *)(param_1 + -0xc + uVar29 * 4) +
                       *(float *)(param_1 + 0xc + uVar29 * 4)) +
               fVar6 * *(float *)(param_1 + uVar29 * 4);
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar30);
      }
      auVar7 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
      auVar8 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      do {
        pfVar3 = (float *)(param_1 + -0xc + uVar30 * 4);
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        fVar12 = pfVar3[4];
        fVar13 = pfVar3[5];
        fVar14 = pfVar3[6];
        fVar15 = pfVar3[7];
        pfVar4 = (float *)(param_1 + 0xc + uVar30 * 4);
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        fVar19 = pfVar4[4];
        fVar20 = pfVar4[5];
        fVar21 = pfVar4[6];
        fVar22 = pfVar4[7];
        fVar37 = auVar7._0_4_;
        fVar38 = auVar7._4_4_;
        fVar39 = auVar7._8_4_;
        fVar40 = auVar7._12_4_;
        pfVar1 = (float *)(param_1 + uVar30 * 4);
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        fVar26 = pfVar1[4];
        fVar27 = pfVar1[5];
        fVar28 = pfVar1[6];
        fVar33 = auVar8._0_4_;
        fVar34 = auVar8._4_4_;
        fVar35 = auVar8._8_4_;
        fVar36 = auVar8._12_4_;
        pfVar2 = (float *)(param_2 + uVar30 * 4);
        *pfVar2 = fVar37 * (*pfVar3 + *pfVar4) + fVar33 * *pfVar1;
        pfVar2[1] = fVar38 * (fVar9 + fVar16) + fVar34 * fVar23;
        pfVar2[2] = fVar39 * (fVar10 + fVar17) + fVar35 * fVar24;
        pfVar2[3] = fVar40 * (fVar11 + fVar18) + fVar36 * fVar25;
        pfVar2[4] = fVar37 * (fVar12 + fVar19) + fVar33 * fVar26;
        pfVar2[5] = fVar38 * (fVar13 + fVar20) + fVar34 * fVar27;
        pfVar2[6] = fVar39 * (fVar14 + fVar21) + fVar35 * fVar28;
        pfVar2[7] = fVar15 + fVar15 + fVar22;
        pfVar1 = (float *)(param_1 + 0x14 + uVar30 * 4);
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        fVar12 = pfVar1[4];
        fVar13 = pfVar1[5];
        fVar14 = pfVar1[6];
        fVar15 = pfVar1[7];
        pfVar2 = (float *)(param_1 + 0x2c + uVar30 * 4);
        fVar16 = pfVar2[1];
        fVar17 = pfVar2[2];
        fVar18 = pfVar2[3];
        fVar19 = pfVar2[4];
        fVar20 = pfVar2[5];
        fVar21 = pfVar2[6];
        fVar22 = pfVar2[7];
        pfVar3 = (float *)(param_1 + 0x20 + uVar30 * 4);
        fVar23 = pfVar3[1];
        fVar24 = pfVar3[2];
        fVar25 = pfVar3[3];
        fVar26 = pfVar3[4];
        fVar27 = pfVar3[5];
        fVar28 = pfVar3[6];
        pfVar4 = (float *)(param_2 + 0x20 + uVar30 * 4);
        *pfVar4 = fVar37 * (*pfVar1 + *pfVar2) + fVar33 * *pfVar3;
        pfVar4[1] = fVar38 * (fVar9 + fVar16) + fVar34 * fVar23;
        pfVar4[2] = fVar39 * (fVar10 + fVar17) + fVar35 * fVar24;
        pfVar4[3] = fVar40 * (fVar11 + fVar18) + fVar36 * fVar25;
        pfVar4[4] = fVar37 * (fVar12 + fVar19) + fVar33 * fVar26;
        pfVar4[5] = fVar38 * (fVar13 + fVar20) + fVar34 * fVar27;
        pfVar4[6] = fVar39 * (fVar14 + fVar21) + fVar35 * fVar28;
        pfVar4[7] = fVar15 + fVar15 + fVar22;
        uVar30 = uVar30 + 0x10;
      } while (uVar30 < uVar31);
      if (uVar32 < uVar31 + 1) {
        return;
      }
      uVar32 = uVar32 - uVar31;
      if (3 < (longlong)uVar32) {
        uVar30 = 0;
        uVar29 = uVar32 & 0xfffffffffffffffc;
        do {
          pfVar3 = (float *)(param_1 + -0xc + (uVar30 + uVar31) * 4);
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          pfVar1 = (float *)(param_1 + (uVar30 + uVar31) * 4);
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar4 = (float *)(param_1 + uVar31 * 4 + 0xc + uVar30 * 4);
          fVar15 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar17 = pfVar4[3];
          pfVar2 = (float *)(param_2 + uVar31 * 4 + uVar30 * 4);
          *pfVar2 = fVar37 * (*pfVar3 + *pfVar4) + fVar33 * *pfVar1;
          pfVar2[1] = fVar38 * (fVar9 + fVar15) + fVar34 * fVar12;
          pfVar2[2] = fVar39 * (fVar10 + fVar16) + fVar35 * fVar13;
          pfVar2[3] = fVar40 * (fVar11 + fVar17) + fVar36 * fVar14;
          uVar30 = uVar30 + 4;
        } while (uVar30 < uVar29);
        if (uVar32 <= uVar29) {
          return;
        }
        param_1 = param_1 + uVar31 * 4;
        do {
          *(float *)(param_2 + uVar31 * 4 + uVar29 * 4) =
               fVar5 * (*(float *)(param_1 + -0xc + uVar29 * 4) +
                       *(float *)(param_1 + 0xc + uVar29 * 4)) +
               fVar6 * *(float *)(param_1 + uVar29 * 4);
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar32);
        return;
      }
      goto LAB_1400ab95d;
    }
  }
LAB_1400ab954:
  if (uVar32 == 0) {
    return;
  }
LAB_1400ab95d:
  FUN_1400ab913(fVar6,fVar5,param_3,0);
  return;
}

