
void FUN_1400aa620(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
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
  
  fVar6 = *param_4;
  fVar7 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    uVar31 = param_2 & 0x1f;
    if (uVar31 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1400aa812;
      uVar31 = 0x20 - uVar31 >> 2;
    }
    if ((longlong)(uVar31 + 0x10) <= (longlong)param_3) {
      uVar30 = 0;
      uVar32 = param_3 - (param_3 - uVar31 & 0xf);
      if (uVar31 != 0) {
        do {
          *(float *)(param_2 + uVar30 * 4) =
               fVar6 * (*(float *)(param_1 + -4 + uVar30 * 4) + *(float *)(param_1 + 4 + uVar30 * 4)
                       ) + fVar7 * *(float *)(param_1 + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar31);
      }
      auVar8 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      auVar9 = vshufps_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),0);
      do {
        pfVar4 = (float *)(param_1 + -4 + uVar31 * 4);
        fVar10 = pfVar4[1];
        fVar11 = pfVar4[2];
        fVar12 = pfVar4[3];
        fVar13 = pfVar4[4];
        fVar14 = pfVar4[5];
        fVar15 = pfVar4[6];
        fVar16 = pfVar4[7];
        pfVar5 = (float *)(param_1 + 4 + uVar31 * 4);
        fVar17 = pfVar5[1];
        fVar18 = pfVar5[2];
        fVar19 = pfVar5[3];
        fVar20 = pfVar5[4];
        fVar21 = pfVar5[5];
        fVar22 = pfVar5[6];
        fVar23 = pfVar5[7];
        fVar37 = auVar8._0_4_;
        fVar38 = auVar8._4_4_;
        fVar39 = auVar8._8_4_;
        fVar40 = auVar8._12_4_;
        pfVar1 = (float *)(param_1 + uVar31 * 4);
        fVar24 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar26 = pfVar1[3];
        fVar27 = pfVar1[4];
        fVar28 = pfVar1[5];
        fVar29 = pfVar1[6];
        fVar33 = auVar9._0_4_;
        fVar34 = auVar9._4_4_;
        fVar35 = auVar9._8_4_;
        fVar36 = auVar9._12_4_;
        pfVar2 = (float *)(param_2 + uVar31 * 4);
        *pfVar2 = fVar37 * (*pfVar4 + *pfVar5) + fVar33 * *pfVar1;
        pfVar2[1] = fVar38 * (fVar10 + fVar17) + fVar34 * fVar24;
        pfVar2[2] = fVar39 * (fVar11 + fVar18) + fVar35 * fVar25;
        pfVar2[3] = fVar40 * (fVar12 + fVar19) + fVar36 * fVar26;
        pfVar2[4] = fVar37 * (fVar13 + fVar20) + fVar33 * fVar27;
        pfVar2[5] = fVar38 * (fVar14 + fVar21) + fVar34 * fVar28;
        pfVar2[6] = fVar39 * (fVar15 + fVar22) + fVar35 * fVar29;
        pfVar2[7] = fVar16 + fVar16 + fVar23;
        pfVar1 = (float *)(param_1 + 0x1c + uVar31 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        fVar13 = pfVar1[4];
        fVar14 = pfVar1[5];
        fVar15 = pfVar1[6];
        fVar16 = pfVar1[7];
        pfVar2 = (float *)(param_1 + 0x24 + uVar31 * 4);
        fVar17 = pfVar2[1];
        fVar18 = pfVar2[2];
        fVar19 = pfVar2[3];
        fVar20 = pfVar2[4];
        fVar21 = pfVar2[5];
        fVar22 = pfVar2[6];
        fVar23 = pfVar2[7];
        pfVar4 = (float *)(param_1 + 0x20 + uVar31 * 4);
        fVar24 = pfVar4[1];
        fVar25 = pfVar4[2];
        fVar26 = pfVar4[3];
        fVar27 = pfVar4[4];
        fVar28 = pfVar4[5];
        fVar29 = pfVar4[6];
        pfVar5 = (float *)(param_2 + 0x20 + uVar31 * 4);
        *pfVar5 = fVar37 * (*pfVar1 + *pfVar2) + fVar33 * *pfVar4;
        pfVar5[1] = fVar38 * (fVar10 + fVar17) + fVar34 * fVar24;
        pfVar5[2] = fVar39 * (fVar11 + fVar18) + fVar35 * fVar25;
        pfVar5[3] = fVar40 * (fVar12 + fVar19) + fVar36 * fVar26;
        pfVar5[4] = fVar37 * (fVar13 + fVar20) + fVar33 * fVar27;
        pfVar5[5] = fVar38 * (fVar14 + fVar21) + fVar34 * fVar28;
        pfVar5[6] = fVar39 * (fVar15 + fVar22) + fVar35 * fVar29;
        pfVar5[7] = fVar16 + fVar16 + fVar23;
        uVar31 = uVar31 + 0x10;
      } while (uVar31 < uVar32);
      if (param_3 < uVar32 + 1) {
        return;
      }
      param_3 = param_3 - uVar32;
      if (3 < (longlong)param_3) {
        uVar31 = 0;
        uVar30 = param_3 & 0xfffffffffffffffc;
        do {
          lVar3 = uVar31 + uVar32;
          pfVar4 = (float *)(param_1 + -4 + lVar3 * 4);
          fVar10 = pfVar4[1];
          fVar11 = pfVar4[2];
          fVar12 = pfVar4[3];
          pfVar1 = (float *)(param_1 + lVar3 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar5 = (float *)(param_1 + 4 + lVar3 * 4);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          fVar18 = pfVar5[3];
          pfVar2 = (float *)(param_2 + uVar32 * 4 + uVar31 * 4);
          *pfVar2 = fVar37 * (*pfVar4 + *pfVar5) + fVar33 * *pfVar1;
          pfVar2[1] = fVar38 * (fVar10 + fVar16) + fVar34 * fVar13;
          pfVar2[2] = fVar39 * (fVar11 + fVar17) + fVar35 * fVar14;
          pfVar2[3] = fVar40 * (fVar12 + fVar18) + fVar36 * fVar15;
          uVar31 = uVar31 + 4;
        } while (uVar31 < uVar30);
        if (param_3 <= uVar30) {
          return;
        }
        param_1 = param_1 + uVar32 * 4;
        do {
          *(float *)(param_2 + uVar32 * 4 + uVar30 * 4) =
               fVar6 * (*(float *)(param_1 + -4 + uVar30 * 4) + *(float *)(param_1 + 4 + uVar30 * 4)
                       ) + fVar7 * *(float *)(param_1 + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar30 < param_3);
        return;
      }
      goto LAB_1400aa81b;
    }
  }
LAB_1400aa812:
  if (param_3 == 0) {
    return;
  }
LAB_1400aa81b:
  FUN_1400aa7d3(fVar7,fVar6,param_3,0);
  return;
}

