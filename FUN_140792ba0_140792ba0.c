
void FUN_140792ba0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
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
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  fVar9 = *(float *)*param_4;
  fVar10 = *(float *)(*param_4 + 4);
  fVar11 = *(float *)(*param_4 + 8);
  fVar12 = *(float *)(*param_4 + 0xc);
  auVar42 = *param_4;
  uVar13 = *(undefined8 *)(*param_4 + 8);
  auVar14 = *(undefined1 (*) [12])*param_4;
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar38 = param_2 & 0xf;
    if (uVar38 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140792e0d;
      uVar38 = 0x10 - uVar38 >> 2;
    }
    if ((longlong)(uVar38 + 4) <= (longlong)param_3) {
      uVar37 = 0;
      uVar36 = param_3 - (param_3 - uVar38 & 3);
      if (uVar38 != 0) {
        do {
          auVar40._0_4_ =
               *(float *)(param_1 + -0xc + uVar37 * 4) + *(float *)(param_1 + 0xc + uVar37 * 4);
          auVar40._4_4_ =
               *(float *)(param_1 + -8 + uVar37 * 4) + *(float *)(param_1 + 8 + uVar37 * 4);
          auVar39 = insertps(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar37 * 4) +
                                           *(float *)(param_1 + 4 + uVar37 * 4))),
                             *(undefined4 *)(param_1 + uVar37 * 4),0x10);
          auVar40._8_8_ = auVar39._0_8_;
          auVar39 = dpps(auVar42,auVar40,0xf1);
          *(int *)(param_2 + uVar37 * 4) = auVar39._0_4_;
          uVar37 = uVar37 + 1;
        } while (uVar37 < uVar38);
      }
      do {
        pfVar3 = (float *)(param_1 + -0xc + uVar38 * 4);
        fVar15 = pfVar3[1];
        fVar16 = pfVar3[2];
        fVar17 = pfVar3[3];
        pfVar4 = (float *)(param_1 + 0xc + uVar38 * 4);
        fVar18 = pfVar4[1];
        fVar19 = pfVar4[2];
        fVar20 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -8 + uVar38 * 4);
        fVar21 = pfVar5[1];
        fVar22 = pfVar5[2];
        fVar23 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 8 + uVar38 * 4);
        fVar24 = pfVar6[1];
        fVar25 = pfVar6[2];
        fVar26 = pfVar6[3];
        pfVar7 = (float *)(param_1 + -4 + uVar38 * 4);
        fVar27 = pfVar7[1];
        fVar28 = pfVar7[2];
        fVar29 = pfVar7[3];
        pfVar1 = (float *)(param_1 + uVar38 * 4);
        fVar30 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar32 = pfVar1[3];
        pfVar8 = (float *)(param_1 + 4 + uVar38 * 4);
        fVar33 = pfVar8[1];
        fVar34 = pfVar8[2];
        fVar35 = pfVar8[3];
        pfVar2 = (float *)(param_2 + uVar38 * 4);
        *pfVar2 = (*pfVar3 + *pfVar4) * fVar9 + (*pfVar5 + *pfVar6) * fVar10 +
                  (*pfVar7 + *pfVar8) * fVar11 + *pfVar1 * fVar12;
        pfVar2[1] = (fVar15 + fVar18) * fVar9 + (fVar21 + fVar24) * fVar10 +
                    (fVar27 + fVar33) * fVar11 + fVar30 * fVar12;
        pfVar2[2] = (fVar16 + fVar19) * fVar9 + (fVar22 + fVar25) * fVar10 +
                    (fVar28 + fVar34) * fVar11 + fVar31 * fVar12;
        pfVar2[3] = (fVar17 + fVar20) * fVar9 + (fVar23 + fVar26) * fVar10 +
                    (fVar29 + fVar35) * fVar11 + fVar32 * fVar12;
        uVar38 = uVar38 + 4;
      } while (uVar38 < uVar36);
      goto joined_r0x000140792d92;
    }
  }
LAB_140792e0d:
  uVar36 = 0;
joined_r0x000140792d92:
  for (; uVar36 < param_3; uVar36 = uVar36 + 1) {
    auVar41._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
    auVar41._0_12_ = auVar14;
    auVar42._0_4_ = *(float *)(param_1 + -0xc + uVar36 * 4) + *(float *)(param_1 + 0xc + uVar36 * 4)
    ;
    auVar42._4_4_ = *(float *)(param_1 + -8 + uVar36 * 4) + *(float *)(param_1 + 8 + uVar36 * 4);
    auVar39 = insertps(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar36 * 4) +
                                     *(float *)(param_1 + 4 + uVar36 * 4))),
                       *(undefined4 *)(param_1 + uVar36 * 4),0x10);
    auVar42._8_8_ = auVar39._0_8_;
    auVar42 = dpps(auVar41,auVar42,0xf1);
    *(int *)(param_2 + uVar36 * 4) = auVar42._0_4_;
  }
  return;
}

