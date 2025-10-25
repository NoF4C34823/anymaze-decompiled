
void FUN_14072d2a0(longlong param_1,ulonglong param_2,longlong param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar2 = *(float *)*param_4;
  fVar3 = *(float *)(*param_4 + 0xc);
  fVar4 = *(float *)(*param_4 + 4);
  fVar5 = *(float *)(*param_4 + 8);
  auVar7 = *param_4;
  auVar13 = *param_4;
  auVar11 = *param_4;
  uVar6 = param_3 * 3;
  if ((longlong)uVar6 < 1) {
    return;
  }
  if (3 < (longlong)uVar6) {
    uVar8 = param_2 & 0xf;
    if (uVar8 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14072d58e;
      uVar8 = 0x10 - uVar8 >> 2;
    }
    if ((longlong)(uVar8 + 4) <= (longlong)uVar6) {
      uVar9 = 0;
      uVar10 = uVar6 - (uVar6 - uVar8 & 3);
      if (uVar8 != 0) {
        do {
          auVar14._0_4_ =
               (float)((uint)*(ushort *)(param_1 + -0x12 + uVar9 * 2) +
                      (uint)*(ushort *)(param_1 + 0x12 + uVar9 * 2));
          auVar14._4_4_ =
               (float)((uint)*(ushort *)(param_1 + -0xc + uVar9 * 2) +
                      (uint)*(ushort *)(param_1 + 0xc + uVar9 * 2));
          auVar14._12_4_ = (float)*(ushort *)(param_1 + uVar9 * 2);
          auVar14._8_4_ =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar9 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar9 * 2));
          in_XMM0 = dpps(auVar13,auVar14,0xf1);
          *(int *)(param_2 + uVar9 * 4) = in_XMM0._0_4_;
          uVar9 = uVar9 + 1;
          in_XMM2 = auVar11;
        } while (uVar9 < uVar8);
      }
      auVar13 = ZEXT416((uint)fVar2);
      do {
        auVar14 = pmovzxwd(in_XMM2,*(undefined8 *)(param_1 + -0x12 + uVar8 * 2));
        auVar13 = pmovzxwd(auVar13,*(undefined8 *)(param_1 + 0x12 + uVar8 * 2));
        auVar11 = pmovzxwd(in_XMM0,*(undefined8 *)(param_1 + 0xc + uVar8 * 2));
        auVar15._0_4_ = auVar14._0_4_ + auVar13._0_4_;
        auVar15._4_4_ = auVar14._4_4_ + auVar13._4_4_;
        auVar15._8_4_ = auVar14._8_4_ + auVar13._8_4_;
        auVar15._12_4_ = auVar14._12_4_ + auVar13._12_4_;
        auVar14 = pmovzxwd(auVar13,*(undefined8 *)(param_1 + -0xc + uVar8 * 2));
        auVar13._0_4_ = auVar14._0_4_ + auVar11._0_4_;
        auVar13._4_4_ = auVar14._4_4_ + auVar11._4_4_;
        auVar13._8_4_ = auVar14._8_4_ + auVar11._8_4_;
        auVar13._12_4_ = auVar14._12_4_ + auVar11._12_4_;
        auVar11 = pmovzxwd(auVar11,*(undefined8 *)(param_1 + -6 + uVar8 * 2));
        in_XMM2 = pmovzxwd(auVar15,*(undefined8 *)(param_1 + 6 + uVar8 * 2));
        auVar12._0_4_ = auVar11._0_4_ + in_XMM2._0_4_;
        auVar12._4_4_ = auVar11._4_4_ + in_XMM2._4_4_;
        auVar12._8_4_ = auVar11._8_4_ + in_XMM2._8_4_;
        auVar12._12_4_ = auVar11._12_4_ + in_XMM2._12_4_;
        in_XMM0 = pmovzxwd(auVar12,*(undefined8 *)(param_1 + uVar8 * 2));
        pfVar1 = (float *)(param_2 + uVar8 * 4);
        *pfVar1 = (float)auVar15._0_4_ * fVar2 + (float)auVar13._0_4_ * fVar4 +
                  (float)auVar12._0_4_ * fVar5 + (float)in_XMM0._0_4_ * fVar3;
        pfVar1[1] = (float)auVar15._4_4_ * fVar2 + (float)auVar13._4_4_ * fVar4 +
                    (float)auVar12._4_4_ * fVar5 + (float)in_XMM0._4_4_ * fVar3;
        pfVar1[2] = (float)auVar15._8_4_ * fVar2 + (float)auVar13._8_4_ * fVar4 +
                    (float)auVar12._8_4_ * fVar5 + (float)in_XMM0._8_4_ * fVar3;
        pfVar1[3] = (float)auVar15._12_4_ * fVar2 + (float)auVar13._12_4_ * fVar4 +
                    (float)auVar12._12_4_ * fVar5 + (float)in_XMM0._12_4_ * fVar3;
        uVar8 = uVar8 + 4;
      } while (uVar8 < uVar10);
      goto joined_r0x00014072d4db;
    }
  }
LAB_14072d58e:
  uVar10 = 0;
joined_r0x00014072d4db:
  for (; uVar10 < uVar6; uVar10 = uVar10 + 1) {
    auVar11._0_4_ =
         (float)((uint)*(ushort *)(param_1 + -0x12 + uVar10 * 2) +
                (uint)*(ushort *)(param_1 + 0x12 + uVar10 * 2));
    auVar11._4_4_ =
         (float)((uint)*(ushort *)(param_1 + -0xc + uVar10 * 2) +
                (uint)*(ushort *)(param_1 + 0xc + uVar10 * 2));
    auVar11._12_4_ = (float)*(ushort *)(param_1 + uVar10 * 2);
    auVar11._8_4_ =
         (float)((uint)*(ushort *)(param_1 + -6 + uVar10 * 2) +
                (uint)*(ushort *)(param_1 + 6 + uVar10 * 2));
    auVar13 = dpps(auVar7,auVar11,0xf1);
    *(int *)(param_2 + uVar10 * 4) = auVar13._0_4_;
  }
  return;
}

