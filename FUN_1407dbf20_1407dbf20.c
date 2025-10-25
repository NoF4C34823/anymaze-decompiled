
void FUN_1407dbf20(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1407dc1be:
    uVar50 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar49 = param_2 & 0x1f;
    if (uVar49 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407dc1be;
      uVar49 = 0x20 - uVar49 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar49 + 0x10)) goto LAB_1407dc1be;
    uVar48 = 0;
    uVar50 = param_3 - (param_3 - uVar49 & 0xf);
    if (uVar49 != 0) {
      do {
        *(float *)(param_2 + uVar48 * 4) =
             fVar8 * (*(float *)(param_1 + -8 + uVar48 * 4) + *(float *)(param_1 + 8 + uVar48 * 4))
             + fVar9 * (*(float *)(param_1 + -4 + uVar48 * 4) + *(float *)(param_1 + 4 + uVar48 * 4)
                       ) + fVar10 * *(float *)(param_1 + uVar48 * 4);
        uVar48 = uVar48 + 1;
      } while (uVar48 < uVar49);
    }
    auVar11 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
    auVar12 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
    auVar13 = vshufps_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),0);
    do {
      pfVar4 = (float *)(param_1 + -4 + uVar49 * 4);
      fVar14 = pfVar4[1];
      fVar15 = pfVar4[2];
      fVar16 = pfVar4[3];
      fVar17 = pfVar4[4];
      fVar18 = pfVar4[5];
      fVar19 = pfVar4[6];
      fVar20 = pfVar4[7];
      pfVar5 = (float *)(param_1 + 4 + uVar49 * 4);
      fVar21 = pfVar5[1];
      fVar22 = pfVar5[2];
      fVar23 = pfVar5[3];
      fVar24 = pfVar5[4];
      fVar25 = pfVar5[5];
      fVar26 = pfVar5[6];
      fVar27 = pfVar5[7];
      pfVar6 = (float *)(param_1 + -8 + uVar49 * 4);
      fVar28 = pfVar6[1];
      fVar29 = pfVar6[2];
      fVar30 = pfVar6[3];
      fVar31 = pfVar6[4];
      fVar32 = pfVar6[5];
      fVar33 = pfVar6[6];
      fVar34 = pfVar6[7];
      fVar55 = auVar12._0_4_;
      fVar56 = auVar12._4_4_;
      fVar57 = auVar12._8_4_;
      fVar58 = auVar12._12_4_;
      pfVar7 = (float *)(param_1 + 8 + uVar49 * 4);
      fVar35 = pfVar7[1];
      fVar36 = pfVar7[2];
      fVar37 = pfVar7[3];
      fVar38 = pfVar7[4];
      fVar39 = pfVar7[5];
      fVar40 = pfVar7[6];
      fVar41 = pfVar7[7];
      fVar51 = auVar11._0_4_;
      fVar52 = auVar11._4_4_;
      fVar53 = auVar11._8_4_;
      fVar54 = auVar11._12_4_;
      pfVar1 = (float *)(param_1 + uVar49 * 4);
      fVar42 = pfVar1[1];
      fVar43 = pfVar1[2];
      fVar44 = pfVar1[3];
      fVar45 = pfVar1[4];
      fVar46 = pfVar1[5];
      fVar47 = pfVar1[6];
      fVar59 = auVar13._0_4_;
      fVar60 = auVar13._4_4_;
      fVar61 = auVar13._8_4_;
      fVar62 = auVar13._12_4_;
      pfVar2 = (float *)(param_2 + uVar49 * 4);
      *pfVar2 = fVar51 * (*pfVar6 + *pfVar7) + fVar55 * (*pfVar4 + *pfVar5) + fVar59 * *pfVar1;
      pfVar2[1] = fVar52 * (fVar28 + fVar35) + fVar56 * (fVar14 + fVar21) + fVar60 * fVar42;
      pfVar2[2] = fVar53 * (fVar29 + fVar36) + fVar57 * (fVar15 + fVar22) + fVar61 * fVar43;
      pfVar2[3] = fVar54 * (fVar30 + fVar37) + fVar58 * (fVar16 + fVar23) + fVar62 * fVar44;
      pfVar2[4] = fVar51 * (fVar31 + fVar38) + fVar55 * (fVar17 + fVar24) + fVar59 * fVar45;
      pfVar2[5] = fVar52 * (fVar32 + fVar39) + fVar56 * (fVar18 + fVar25) + fVar60 * fVar46;
      pfVar2[6] = fVar53 * (fVar33 + fVar40) + fVar57 * (fVar19 + fVar26) + fVar61 * fVar47;
      pfVar2[7] = fVar34 + fVar41 + fVar20 + fVar27 + fVar34 + fVar41;
      pfVar1 = (float *)(param_1 + 0x1c + uVar49 * 4);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_1 + 0x24 + uVar49 * 4);
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      fVar24 = pfVar2[4];
      fVar25 = pfVar2[5];
      fVar26 = pfVar2[6];
      pfVar4 = (float *)(param_1 + 0x18 + uVar49 * 4);
      fVar27 = pfVar4[1];
      fVar28 = pfVar4[2];
      fVar29 = pfVar4[3];
      fVar30 = pfVar4[4];
      fVar31 = pfVar4[5];
      fVar32 = pfVar4[6];
      fVar33 = pfVar4[7];
      pfVar5 = (float *)(param_1 + 0x28 + uVar49 * 4);
      fVar34 = pfVar5[1];
      fVar35 = pfVar5[2];
      fVar36 = pfVar5[3];
      fVar37 = pfVar5[4];
      fVar38 = pfVar5[5];
      fVar39 = pfVar5[6];
      fVar40 = pfVar5[7];
      pfVar6 = (float *)(param_1 + 0x20 + uVar49 * 4);
      fVar41 = pfVar6[1];
      fVar42 = pfVar6[2];
      fVar43 = pfVar6[3];
      fVar44 = pfVar6[4];
      fVar45 = pfVar6[5];
      fVar46 = pfVar6[6];
      pfVar7 = (float *)(param_2 + 0x20 + uVar49 * 4);
      *pfVar7 = fVar51 * (*pfVar4 + *pfVar5) + fVar55 * (*pfVar1 + *pfVar2) + fVar59 * *pfVar6;
      pfVar7[1] = fVar52 * (fVar27 + fVar34) + fVar56 * (fVar14 + fVar21) + fVar60 * fVar41;
      pfVar7[2] = fVar53 * (fVar28 + fVar35) + fVar57 * (fVar15 + fVar22) + fVar61 * fVar42;
      pfVar7[3] = fVar54 * (fVar29 + fVar36) + fVar58 * (fVar16 + fVar23) + fVar62 * fVar43;
      pfVar7[4] = fVar51 * (fVar30 + fVar37) + fVar55 * (fVar17 + fVar24) + fVar59 * fVar44;
      pfVar7[5] = fVar52 * (fVar31 + fVar38) + fVar56 * (fVar18 + fVar25) + fVar60 * fVar45;
      pfVar7[6] = fVar53 * (fVar32 + fVar39) + fVar57 * (fVar19 + fVar26) + fVar61 * fVar46;
      pfVar7[7] = fVar33 + fVar40 + fVar20 + fVar33 + fVar40;
      uVar49 = uVar49 + 0x10;
    } while (uVar49 < uVar50);
    if (param_3 < uVar50 + 1) {
      return;
    }
    param_3 = param_3 - uVar50;
    if (3 < (longlong)param_3) {
      uVar48 = 0;
      uVar49 = param_3 & 0xfffffffffffffffc;
      do {
        lVar3 = uVar48 + uVar50;
        pfVar4 = (float *)(param_1 + -4 + lVar3 * 4);
        fVar14 = pfVar4[1];
        fVar15 = pfVar4[2];
        fVar16 = pfVar4[3];
        pfVar5 = (float *)(param_1 + 4 + lVar3 * 4);
        fVar17 = pfVar5[1];
        fVar18 = pfVar5[2];
        fVar19 = pfVar5[3];
        pfVar6 = (float *)(param_1 + -8 + lVar3 * 4);
        fVar20 = pfVar6[1];
        fVar21 = pfVar6[2];
        fVar22 = pfVar6[3];
        pfVar7 = (float *)(param_1 + uVar50 * 4 + 8 + uVar48 * 4);
        fVar23 = pfVar7[1];
        fVar24 = pfVar7[2];
        fVar25 = pfVar7[3];
        pfVar1 = (float *)(param_1 + lVar3 * 4);
        fVar26 = pfVar1[1];
        fVar27 = pfVar1[2];
        fVar28 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar50 * 4 + uVar48 * 4);
        *pfVar2 = fVar51 * (*pfVar6 + *pfVar7) + fVar55 * (*pfVar4 + *pfVar5) + fVar59 * *pfVar1;
        pfVar2[1] = fVar52 * (fVar20 + fVar23) + fVar56 * (fVar14 + fVar17) + fVar60 * fVar26;
        pfVar2[2] = fVar53 * (fVar21 + fVar24) + fVar57 * (fVar15 + fVar18) + fVar61 * fVar27;
        pfVar2[3] = fVar54 * (fVar22 + fVar25) + fVar58 * (fVar16 + fVar19) + fVar62 * fVar28;
        uVar48 = uVar48 + 4;
      } while (uVar48 < uVar49);
      goto LAB_1407dc14b;
    }
  }
  uVar49 = 0;
LAB_1407dc14b:
  if (uVar49 < param_3) {
    param_1 = param_1 + uVar50 * 4;
    do {
      *(float *)(param_2 + uVar50 * 4 + uVar49 * 4) =
           fVar8 * (*(float *)(param_1 + -8 + uVar49 * 4) + *(float *)(param_1 + 8 + uVar49 * 4)) +
           fVar9 * (*(float *)(param_1 + -4 + uVar49 * 4) + *(float *)(param_1 + 4 + uVar49 * 4)) +
           fVar10 * *(float *)(param_1 + uVar49 * 4);
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_3);
  }
  return;
}

