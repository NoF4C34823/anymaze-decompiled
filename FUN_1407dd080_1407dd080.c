
void FUN_1407dd080(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  
  uVar57 = param_3 * 3;
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)uVar57 < 1) {
    return;
  }
  if ((longlong)uVar57 < 0x10) {
LAB_1407dd381:
    uVar56 = 0;
    if (uVar57 == 0) {
      return;
    }
  }
  else {
    uVar55 = param_2 & 0x1f;
    if (uVar55 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407dd381;
      uVar55 = 0x20 - uVar55 >> 2;
    }
    if ((longlong)uVar57 < (longlong)(uVar55 + 0x10)) goto LAB_1407dd381;
    uVar54 = 0;
    uVar56 = uVar57 - (uVar57 - uVar55 & 0xf);
    if (uVar55 != 0) {
      do {
        *(float *)(param_2 + uVar54 * 4) =
             fVar8 * (*(float *)(param_1 + -0x18 + uVar54 * 4) +
                     *(float *)(param_1 + 0x18 + uVar54 * 4)) +
             fVar9 * (*(float *)(param_1 + -0xc + uVar54 * 4) +
                     *(float *)(param_1 + 0xc + uVar54 * 4)) +
             fVar10 * *(float *)(param_1 + uVar54 * 4);
        uVar54 = uVar54 + 1;
      } while (uVar54 < uVar55);
    }
    auVar17 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
    auVar18 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
    auVar19 = vshufps_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),0);
    do {
      pfVar3 = (float *)(param_1 + 0x18 + uVar55 * 4);
      fVar40 = pfVar3[1];
      fVar41 = pfVar3[2];
      fVar42 = pfVar3[3];
      lVar4 = param_1 + 0x28 + uVar55 * 4;
      fVar43 = *(float *)(lVar4 + 0x10);
      fVar44 = *(float *)(lVar4 + 0x14);
      fVar45 = *(float *)(lVar4 + 0x18);
      fVar46 = *(float *)(lVar4 + 0x1c);
      pfVar5 = (float *)(param_1 + -0x18 + uVar55 * 4);
      fVar20 = pfVar5[1];
      fVar21 = pfVar5[2];
      fVar22 = pfVar5[3];
      fVar23 = pfVar5[4];
      fVar24 = pfVar5[5];
      fVar25 = pfVar5[6];
      fVar26 = pfVar5[7];
      pfVar6 = (float *)(param_1 + 0xc + uVar55 * 4);
      fVar47 = pfVar6[1];
      fVar48 = pfVar6[2];
      fVar49 = pfVar6[3];
      fVar58 = auVar17._0_4_;
      fVar59 = auVar17._4_4_;
      fVar60 = auVar17._8_4_;
      fVar61 = auVar17._12_4_;
      lVar4 = param_1 + 0x1c + uVar55 * 4;
      fVar50 = *(float *)(lVar4 + 0x10);
      fVar51 = *(float *)(lVar4 + 0x14);
      fVar52 = *(float *)(lVar4 + 0x18);
      fVar53 = *(float *)(lVar4 + 0x1c);
      pfVar7 = (float *)(param_1 + -0xc + uVar55 * 4);
      fVar27 = pfVar7[1];
      fVar28 = pfVar7[2];
      fVar29 = pfVar7[3];
      fVar30 = pfVar7[4];
      fVar31 = pfVar7[5];
      fVar32 = pfVar7[6];
      fVar33 = pfVar7[7];
      fVar62 = auVar18._0_4_;
      fVar63 = auVar18._4_4_;
      fVar64 = auVar18._8_4_;
      fVar65 = auVar18._12_4_;
      pfVar1 = (float *)(param_1 + uVar55 * 4);
      fVar34 = pfVar1[1];
      fVar35 = pfVar1[2];
      fVar36 = pfVar1[3];
      fVar37 = pfVar1[4];
      fVar38 = pfVar1[5];
      fVar39 = pfVar1[6];
      fVar66 = auVar19._0_4_;
      fVar67 = auVar19._4_4_;
      fVar68 = auVar19._8_4_;
      fVar69 = auVar19._12_4_;
      pfVar2 = (float *)(param_2 + uVar55 * 4);
      *pfVar2 = fVar58 * (*pfVar3 + *pfVar5) + fVar62 * (*pfVar6 + *pfVar7) + fVar66 * *pfVar1;
      pfVar2[1] = fVar59 * (fVar40 + fVar20) + fVar63 * (fVar47 + fVar27) + fVar67 * fVar34;
      pfVar2[2] = fVar60 * (fVar41 + fVar21) + fVar64 * (fVar48 + fVar28) + fVar68 * fVar35;
      pfVar2[3] = fVar61 * (fVar42 + fVar22) + fVar65 * (fVar49 + fVar29) + fVar69 * fVar36;
      pfVar2[4] = fVar58 * (fVar43 + fVar23) + fVar62 * (fVar50 + fVar30) + fVar66 * fVar37;
      pfVar2[5] = fVar59 * (fVar44 + fVar24) + fVar63 * (fVar51 + fVar31) + fVar67 * fVar38;
      pfVar2[6] = fVar60 * (fVar45 + fVar25) + fVar64 * (fVar52 + fVar32) + fVar68 * fVar39;
      pfVar2[7] = fVar46 + fVar26 + fVar53 + fVar53 + fVar33;
      auVar11 = *(undefined1 (*) [16])(param_1 + 8 + uVar55 * 4);
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x38 + uVar55 * 4);
      auVar13 = *(undefined1 (*) [16])(param_1 + 0x18 + uVar55 * 4);
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x48 + uVar55 * 4);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x14 + uVar55 * 4);
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x24 + uVar55 * 4);
      pfVar1 = (float *)(param_1 + 0x2c + uVar55 * 4);
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      lVar4 = param_1 + 0x3c + uVar55 * 4;
      fVar23 = *(float *)(lVar4 + 0x10);
      fVar24 = *(float *)(lVar4 + 0x14);
      fVar25 = *(float *)(lVar4 + 0x18);
      fVar26 = *(float *)(lVar4 + 0x1c);
      pfVar2 = (float *)(param_1 + 0x20 + uVar55 * 4);
      fVar27 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar29 = pfVar2[3];
      lVar4 = param_1 + 0x30 + uVar55 * 4;
      fVar30 = *(float *)(lVar4 + 0x10);
      fVar31 = *(float *)(lVar4 + 0x14);
      fVar32 = *(float *)(lVar4 + 0x18);
      fVar33 = *(float *)(lVar4 + 0x1c);
      pfVar3 = (float *)(param_2 + 0x20 + uVar55 * 4);
      *pfVar3 = fVar58 * (auVar11._0_4_ + auVar12._0_4_) + fVar62 * (auVar15._0_4_ + *pfVar1) +
                fVar66 * *pfVar2;
      pfVar3[1] = fVar59 * (auVar11._4_4_ + auVar12._4_4_) + fVar63 * (auVar15._4_4_ + fVar20) +
                  fVar67 * fVar27;
      pfVar3[2] = fVar60 * (auVar11._8_4_ + auVar12._8_4_) + fVar64 * (auVar15._8_4_ + fVar21) +
                  fVar68 * fVar28;
      pfVar3[3] = fVar61 * (auVar11._12_4_ + auVar12._12_4_) + fVar65 * (auVar15._12_4_ + fVar22) +
                  fVar69 * fVar29;
      pfVar3[4] = fVar58 * (auVar13._0_4_ + auVar14._0_4_) + fVar62 * (auVar16._0_4_ + fVar23) +
                  fVar66 * fVar30;
      pfVar3[5] = fVar59 * (auVar13._4_4_ + auVar14._4_4_) + fVar63 * (auVar16._4_4_ + fVar24) +
                  fVar67 * fVar31;
      pfVar3[6] = fVar60 * (auVar13._8_4_ + auVar14._8_4_) + fVar64 * (auVar16._8_4_ + fVar25) +
                  fVar68 * fVar32;
      pfVar3[7] = fVar26 + 0.0 + fVar33;
      uVar55 = uVar55 + 0x10;
    } while (uVar55 < uVar56);
    if (uVar57 < uVar56 + 1) {
      return;
    }
    uVar57 = uVar57 - uVar56;
    if (3 < (longlong)uVar57) {
      uVar54 = 0;
      uVar55 = uVar57 & 0xfffffffffffffffc;
      do {
        lVar4 = uVar54 + uVar56;
        pfVar3 = (float *)(param_1 + -0xc + lVar4 * 4);
        fVar20 = pfVar3[1];
        fVar21 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar5 = (float *)(param_1 + 0xc + lVar4 * 4);
        fVar23 = pfVar5[1];
        fVar24 = pfVar5[2];
        fVar25 = pfVar5[3];
        pfVar6 = (float *)(param_1 + -0x18 + lVar4 * 4);
        fVar26 = pfVar6[1];
        fVar27 = pfVar6[2];
        fVar28 = pfVar6[3];
        pfVar7 = (float *)(param_1 + uVar56 * 4 + 0x18 + uVar54 * 4);
        fVar29 = pfVar7[1];
        fVar30 = pfVar7[2];
        fVar31 = pfVar7[3];
        pfVar1 = (float *)(param_1 + lVar4 * 4);
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        fVar34 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar56 * 4 + uVar54 * 4);
        *pfVar2 = fVar58 * (*pfVar6 + *pfVar7) + fVar62 * (*pfVar3 + *pfVar5) + fVar66 * *pfVar1;
        pfVar2[1] = fVar59 * (fVar26 + fVar29) + fVar63 * (fVar20 + fVar23) + fVar67 * fVar32;
        pfVar2[2] = fVar60 * (fVar27 + fVar30) + fVar64 * (fVar21 + fVar24) + fVar68 * fVar33;
        pfVar2[3] = fVar61 * (fVar28 + fVar31) + fVar65 * (fVar22 + fVar25) + fVar69 * fVar34;
        uVar54 = uVar54 + 4;
      } while (uVar54 < uVar55);
      goto LAB_1407dd30b;
    }
  }
  uVar55 = 0;
LAB_1407dd30b:
  if (uVar55 < uVar57) {
    param_1 = param_1 + uVar56 * 4;
    do {
      *(float *)(param_2 + uVar56 * 4 + uVar55 * 4) =
           fVar8 * (*(float *)(param_1 + -0x18 + uVar55 * 4) +
                   *(float *)(param_1 + 0x18 + uVar55 * 4)) +
           fVar9 * (*(float *)(param_1 + -0xc + uVar55 * 4) + *(float *)(param_1 + 0xc + uVar55 * 4)
                   ) + fVar10 * *(float *)(param_1 + uVar55 * 4);
      uVar55 = uVar55 + 1;
    } while (uVar55 < uVar57);
  }
  return;
}

