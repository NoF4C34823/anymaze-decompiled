
void FUN_1407e5b40(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [32];
  
  lVar23 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar23 = 2;
  }
  lVar22 = (longlong)(int)lVar23 + 1;
  fVar7 = *param_6;
  fVar8 = param_6[1];
  if (2 < lVar22) {
    lVar22 = 0;
  }
  lVar21 = (longlong)(int)lVar22 + 1;
  if (2 < lVar21) {
    lVar21 = 0;
  }
  auVar28 = ZEXT416((uint)fVar7);
  auVar27 = ZEXT416((uint)fVar8);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 8) {
LAB_1407e6047:
      uVar19 = 0;
      if (param_5 == 0) {
        return;
      }
    }
    else {
      uVar20 = param_4 & 0x1f;
      if (uVar20 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1407e6047;
        uVar20 = 0x20 - uVar20 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar20 + 8)) goto LAB_1407e6047;
      lVar24 = param_2 * lVar23 + param_1;
      lVar26 = param_2 * lVar21 + param_1;
      lVar18 = param_2 * lVar22 + param_1;
      uVar19 = param_5 - (param_5 - uVar20 & 7);
      uVar25 = 0;
      if (uVar20 != 0) {
        do {
          *(float *)(param_4 + uVar25 * 4) =
               fVar7 * (*(float *)(lVar24 + uVar25 * 4) + *(float *)(lVar26 + uVar25 * 4)) +
               fVar8 * *(float *)(lVar18 + uVar25 * 4);
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar20);
      }
      auVar28 = vshufps_avx(auVar28,auVar28,0);
      auVar27 = vshufps_avx(auVar27,auVar27,0);
      do {
        auVar31 = *(undefined1 (*) [16])(lVar24 + uVar20 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar24 + 0x10 + uVar20 * 4);
        pfVar1 = (float *)(lVar26 + uVar20 * 4);
        lVar5 = lVar26 + 0x10 + uVar20 * 4;
        fVar30 = auVar28._0_4_;
        fVar33 = auVar28._4_4_;
        fVar35 = auVar28._8_4_;
        pfVar2 = (float *)(lVar18 + uVar20 * 4);
        lVar6 = lVar18 + 0x10 + uVar20 * 4;
        fVar38 = auVar27._0_4_;
        fVar40 = auVar27._4_4_;
        fVar42 = auVar27._8_4_;
        auVar44._0_4_ = fVar30 * (auVar31._0_4_ + *pfVar1) + fVar38 * *pfVar2;
        auVar44._4_4_ = fVar33 * (auVar31._4_4_ + pfVar1[1]) + fVar40 * pfVar2[1];
        auVar44._8_4_ = fVar35 * (auVar31._8_4_ + pfVar1[2]) + fVar42 * pfVar2[2];
        auVar44._12_4_ = auVar28._12_4_ * (auVar31._12_4_ + pfVar1[3]) + auVar27._12_4_ * pfVar2[3];
        auVar44._16_4_ =
             fVar30 * (auVar9._0_4_ + *(float *)(lVar5 + 0x10)) + fVar38 * *(float *)(lVar6 + 0x10);
        auVar44._20_4_ =
             fVar33 * (auVar9._4_4_ + *(float *)(lVar5 + 0x14)) + fVar40 * *(float *)(lVar6 + 0x14);
        auVar44._24_4_ =
             fVar35 * (auVar9._8_4_ + *(float *)(lVar5 + 0x18)) + fVar42 * *(float *)(lVar6 + 0x18);
        auVar44._28_4_ = *(float *)(lVar5 + 0x1c) + *(float *)(lVar6 + 0x1c);
        auVar44 = vmovntps_avx(auVar44);
        *(undefined1 (*) [32])(param_4 + uVar20 * 4) = auVar44;
        uVar20 = uVar20 + 8;
      } while (uVar20 < uVar19);
      if (param_5 < uVar19 + 1) {
        return;
      }
      param_5 = param_5 - uVar19;
      if (3 < (longlong)param_5) {
        uVar25 = 0;
        uVar20 = param_5 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar24 + uVar19 * 4 + uVar25 * 4);
          pfVar2 = (float *)(lVar26 + uVar19 * 4 + uVar25 * 4);
          pfVar3 = (float *)(lVar18 + uVar19 * 4 + uVar25 * 4);
          auVar31._0_4_ = fVar30 * (*pfVar1 + *pfVar2) + fVar38 * *pfVar3;
          auVar31._4_4_ = fVar33 * (pfVar1[1] + pfVar2[1]) + fVar40 * pfVar3[1];
          auVar31._8_4_ = fVar35 * (pfVar1[2] + pfVar2[2]) + fVar42 * pfVar3[2];
          auVar31._12_4_ = auVar28._12_4_ * (pfVar1[3] + pfVar2[3]) + auVar27._12_4_ * pfVar3[3];
          auVar31 = vmovntps_avx(auVar31);
          *(undefined1 (*) [16])(param_4 + uVar19 * 4 + uVar25 * 4) = auVar31;
          uVar25 = uVar25 + 4;
        } while (uVar25 < uVar20);
        goto LAB_1407e5fc9;
      }
    }
    uVar20 = 0;
LAB_1407e5fc9:
    if (param_5 <= uVar20) {
      return;
    }
    do {
      *(float *)(param_4 + uVar19 * 4 + uVar20 * 4) =
           fVar7 * (*(float *)(lVar23 * param_2 + param_1 + uVar19 * 4 + uVar20 * 4) +
                   *(float *)(lVar21 * param_2 + param_1 + uVar19 * 4 + uVar20 * 4)) +
           fVar8 * *(float *)(param_1 + param_2 * lVar22 + uVar19 * 4 + uVar20 * 4);
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_1407e6038:
    uVar19 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar20 = param_4 & 0x1f;
    if (uVar20 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1407e6038;
      uVar20 = 0x20 - uVar20 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar20 + 0x10)) goto LAB_1407e6038;
    lVar24 = param_2 * lVar23 + param_1;
    lVar26 = param_2 * lVar21 + param_1;
    lVar18 = param_2 * lVar22 + param_1;
    uVar19 = param_5 - (param_5 - uVar20 & 0xf);
    uVar25 = 0;
    if (uVar20 != 0) {
      do {
        *(float *)(param_4 + uVar25 * 4) =
             fVar7 * (*(float *)(lVar24 + uVar25 * 4) + *(float *)(lVar26 + uVar25 * 4)) +
             fVar8 * *(float *)(lVar18 + uVar25 * 4);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar20);
    }
    auVar28 = vshufps_avx(auVar28,auVar28,0);
    auVar27 = vshufps_avx(auVar27,auVar27,0);
    do {
      auVar31 = *(undefined1 (*) [16])(lVar24 + uVar20 * 4);
      auVar9 = *(undefined1 (*) [16])(lVar24 + 0x10 + uVar20 * 4);
      pfVar1 = (float *)(lVar26 + uVar20 * 4);
      fVar30 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar35 = pfVar1[3];
      lVar5 = lVar26 + 0x10 + uVar20 * 4;
      fVar38 = *(float *)(lVar5 + 0x10);
      fVar40 = *(float *)(lVar5 + 0x14);
      fVar42 = *(float *)(lVar5 + 0x18);
      fVar10 = *(float *)(lVar5 + 0x1c);
      fVar29 = auVar28._0_4_;
      fVar32 = auVar28._4_4_;
      fVar34 = auVar28._8_4_;
      fVar36 = auVar28._12_4_;
      pfVar2 = (float *)(lVar18 + uVar20 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      lVar5 = lVar18 + 0x10 + uVar20 * 4;
      fVar14 = *(float *)(lVar5 + 0x10);
      fVar15 = *(float *)(lVar5 + 0x14);
      fVar16 = *(float *)(lVar5 + 0x18);
      fVar17 = *(float *)(lVar5 + 0x1c);
      fVar37 = auVar27._0_4_;
      fVar39 = auVar27._4_4_;
      fVar41 = auVar27._8_4_;
      fVar43 = auVar27._12_4_;
      pfVar3 = (float *)(param_4 + uVar20 * 4);
      *pfVar3 = fVar29 * (auVar31._0_4_ + *pfVar1) + fVar37 * *pfVar2;
      pfVar3[1] = fVar32 * (auVar31._4_4_ + fVar30) + fVar39 * fVar11;
      pfVar3[2] = fVar34 * (auVar31._8_4_ + fVar33) + fVar41 * fVar12;
      pfVar3[3] = fVar36 * (auVar31._12_4_ + fVar35) + fVar43 * fVar13;
      pfVar3[4] = fVar29 * (auVar9._0_4_ + fVar38) + fVar37 * fVar14;
      pfVar3[5] = fVar32 * (auVar9._4_4_ + fVar40) + fVar39 * fVar15;
      pfVar3[6] = fVar34 * (auVar9._8_4_ + fVar42) + fVar41 * fVar16;
      pfVar3[7] = fVar10 + fVar17;
      auVar31 = *(undefined1 (*) [16])(lVar24 + 0x20 + uVar20 * 4);
      auVar9 = *(undefined1 (*) [16])(lVar24 + 0x30 + uVar20 * 4);
      pfVar1 = (float *)(lVar26 + 0x20 + uVar20 * 4);
      fVar30 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar35 = pfVar1[3];
      lVar5 = lVar26 + 0x30 + uVar20 * 4;
      fVar38 = *(float *)(lVar5 + 0x10);
      fVar40 = *(float *)(lVar5 + 0x14);
      fVar42 = *(float *)(lVar5 + 0x18);
      fVar10 = *(float *)(lVar5 + 0x1c);
      pfVar2 = (float *)(lVar18 + 0x20 + uVar20 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      lVar5 = lVar18 + 0x30 + uVar20 * 4;
      fVar14 = *(float *)(lVar5 + 0x10);
      fVar15 = *(float *)(lVar5 + 0x14);
      fVar16 = *(float *)(lVar5 + 0x18);
      fVar17 = *(float *)(lVar5 + 0x1c);
      pfVar3 = (float *)(param_4 + 0x20 + uVar20 * 4);
      *pfVar3 = fVar29 * (auVar31._0_4_ + *pfVar1) + fVar37 * *pfVar2;
      pfVar3[1] = fVar32 * (auVar31._4_4_ + fVar30) + fVar39 * fVar11;
      pfVar3[2] = fVar34 * (auVar31._8_4_ + fVar33) + fVar41 * fVar12;
      pfVar3[3] = fVar36 * (auVar31._12_4_ + fVar35) + fVar43 * fVar13;
      pfVar3[4] = fVar29 * (auVar9._0_4_ + fVar38) + fVar37 * fVar14;
      pfVar3[5] = fVar32 * (auVar9._4_4_ + fVar40) + fVar39 * fVar15;
      pfVar3[6] = fVar34 * (auVar9._8_4_ + fVar42) + fVar41 * fVar16;
      pfVar3[7] = fVar10 + fVar17;
      uVar20 = uVar20 + 0x10;
    } while (uVar20 < uVar19);
    if (param_5 < uVar19 + 1) {
      return;
    }
    param_5 = param_5 - uVar19;
    if (3 < (longlong)param_5) {
      uVar25 = 0;
      uVar20 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar1 = (float *)(lVar24 + uVar19 * 4 + uVar25 * 4);
        fVar30 = pfVar1[1];
        fVar33 = pfVar1[2];
        fVar35 = pfVar1[3];
        pfVar2 = (float *)(lVar26 + uVar19 * 4 + uVar25 * 4);
        fVar38 = pfVar2[1];
        fVar40 = pfVar2[2];
        fVar42 = pfVar2[3];
        pfVar3 = (float *)(lVar18 + uVar19 * 4 + uVar25 * 4);
        fVar10 = pfVar3[1];
        fVar11 = pfVar3[2];
        fVar12 = pfVar3[3];
        pfVar4 = (float *)(param_4 + uVar19 * 4 + uVar25 * 4);
        *pfVar4 = fVar29 * (*pfVar1 + *pfVar2) + fVar37 * *pfVar3;
        pfVar4[1] = fVar32 * (fVar30 + fVar38) + fVar39 * fVar10;
        pfVar4[2] = fVar34 * (fVar33 + fVar40) + fVar41 * fVar11;
        pfVar4[3] = fVar36 * (fVar35 + fVar42) + fVar43 * fVar12;
        uVar25 = uVar25 + 4;
      } while (uVar25 < uVar20);
      goto LAB_1407e5da9;
    }
  }
  uVar20 = 0;
LAB_1407e5da9:
  if (uVar20 < param_5) {
    do {
      *(float *)(param_4 + uVar19 * 4 + uVar20 * 4) =
           fVar7 * (*(float *)(lVar23 * param_2 + param_1 + uVar19 * 4 + uVar20 * 4) +
                   *(float *)(lVar21 * param_2 + param_1 + uVar19 * 4 + uVar20 * 4)) +
           fVar8 * *(float *)(param_1 + param_2 * lVar22 + uVar19 * 4 + uVar20 * 4);
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_5);
  }
  return;
}

