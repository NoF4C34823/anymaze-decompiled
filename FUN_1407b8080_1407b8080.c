
void FUN_1407b8080(longlong param_1,ulonglong param_2,longlong param_3,undefined1 (*param_4) [16])

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
  ulonglong uVar13;
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
  undefined1 auVar35 [16];
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  fVar9 = *(float *)*param_4;
  uVar13 = param_3 * 3;
  fVar10 = *(float *)(*param_4 + 4);
  fVar11 = *(float *)(*param_4 + 8);
  fVar12 = *(float *)(*param_4 + 0xc);
  auVar35 = *param_4;
  auVar41 = *param_4;
  if ((longlong)uVar13 < 1) {
    return;
  }
  if (3 < (longlong)uVar13) {
    uVar38 = param_2 & 0xf;
    if (uVar38 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407b82ca;
      uVar38 = 0x10 - uVar38 >> 2;
    }
    if ((longlong)(uVar38 + 4) <= (longlong)uVar13) {
      uVar37 = 0;
      uVar36 = uVar13 - (uVar13 - uVar38 & 3);
      if (uVar38 != 0) {
        do {
          auVar39 = insertps(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar37 * 4) +
                                           *(float *)(param_1 + 0xc + uVar37 * 4))),
                             *(undefined4 *)(param_1 + uVar37 * 4),0x10);
          auVar40._4_4_ =
               *(float *)(param_1 + -0x18 + uVar37 * 4) + *(float *)(param_1 + 0x18 + uVar37 * 4);
          auVar40._0_4_ =
               *(float *)(param_1 + -0x24 + uVar37 * 4) + *(float *)(param_1 + 0x24 + uVar37 * 4);
          auVar40._8_4_ = auVar39._0_4_;
          auVar40._12_4_ = auVar39._4_4_;
          auVar40 = dpps(auVar41,auVar40,0xf1);
          *(int *)(param_2 + uVar37 * 4) = auVar40._0_4_;
          uVar37 = uVar37 + 1;
        } while (uVar37 < uVar38);
      }
      do {
        pfVar3 = (float *)(param_1 + -0x24 + uVar38 * 4);
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar4 = (float *)(param_1 + 0x24 + uVar38 * 4);
        fVar17 = pfVar4[1];
        fVar18 = pfVar4[2];
        fVar19 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -0x18 + uVar38 * 4);
        fVar20 = pfVar5[1];
        fVar21 = pfVar5[2];
        fVar22 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 0x18 + uVar38 * 4);
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        fVar25 = pfVar6[3];
        pfVar7 = (float *)(param_1 + 0xc + uVar38 * 4);
        fVar26 = pfVar7[1];
        fVar27 = pfVar7[2];
        fVar28 = pfVar7[3];
        pfVar8 = (float *)(param_1 + -0xc + uVar38 * 4);
        fVar29 = pfVar8[1];
        fVar30 = pfVar8[2];
        fVar31 = pfVar8[3];
        pfVar1 = (float *)(param_1 + uVar38 * 4);
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        fVar34 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar38 * 4);
        *pfVar2 = (*pfVar3 + *pfVar4) * fVar9 + (*pfVar5 + *pfVar6) * fVar10 +
                  (*pfVar8 + *pfVar7) * fVar11 + *pfVar1 * fVar12;
        pfVar2[1] = (fVar14 + fVar17) * fVar9 + (fVar20 + fVar23) * fVar10 +
                    (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
        pfVar2[2] = (fVar15 + fVar18) * fVar9 + (fVar21 + fVar24) * fVar10 +
                    (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
        pfVar2[3] = (fVar16 + fVar19) * fVar9 + (fVar22 + fVar25) * fVar10 +
                    (fVar31 + fVar28) * fVar11 + fVar34 * fVar12;
        uVar38 = uVar38 + 4;
      } while (uVar38 < uVar36);
      goto joined_r0x0001407b824c;
    }
  }
LAB_1407b82ca:
  uVar36 = 0;
joined_r0x0001407b824c:
  for (; uVar36 < uVar13; uVar36 = uVar36 + 1) {
    auVar41._0_4_ =
         *(float *)(param_1 + -0x24 + uVar36 * 4) + *(float *)(param_1 + 0x24 + uVar36 * 4);
    auVar41._4_4_ =
         *(float *)(param_1 + -0x18 + uVar36 * 4) + *(float *)(param_1 + 0x18 + uVar36 * 4);
    auVar40 = insertps(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar36 * 4) +
                                     *(float *)(param_1 + 0xc + uVar36 * 4))),
                       *(undefined4 *)(param_1 + uVar36 * 4),0x10);
    auVar41._8_8_ = auVar40._0_8_;
    auVar41 = dpps(auVar35,auVar41,0xf1);
    *(int *)(param_2 + uVar36 * 4) = auVar41._0_4_;
  }
  return;
}

