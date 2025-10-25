
void FUN_14072c260(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  fVar2 = *(float *)*param_4;
  fVar3 = *(float *)(*param_4 + 8);
  fVar4 = *(float *)(*param_4 + 4);
  fVar5 = *(float *)(*param_4 + 0xc);
  auVar6 = *param_4;
  auVar12 = *param_4;
  auVar10 = *param_4;
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar7 = param_2 & 0xf;
    if (uVar7 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14072c54e;
      uVar7 = 0x10 - uVar7 >> 2;
    }
    if ((longlong)(uVar7 + 4) <= (longlong)param_3) {
      uVar8 = 0;
      uVar9 = param_3 - (param_3 - uVar7 & 3);
      if (uVar7 != 0) {
        do {
          auVar13._0_4_ =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar8 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar8 * 2));
          auVar13._4_4_ =
               (float)((uint)*(ushort *)(param_1 + -4 + uVar8 * 2) +
                      (uint)*(ushort *)(param_1 + 4 + uVar8 * 2));
          auVar13._12_4_ = (float)*(ushort *)(param_1 + uVar8 * 2);
          auVar13._8_4_ =
               (float)((uint)*(ushort *)(param_1 + -2 + uVar8 * 2) +
                      (uint)*(ushort *)(param_1 + 2 + uVar8 * 2));
          in_XMM0 = dpps(auVar12,auVar13,0xf1);
          *(int *)(param_2 + uVar8 * 4) = in_XMM0._0_4_;
          uVar8 = uVar8 + 1;
          in_XMM2 = auVar10;
        } while (uVar8 < uVar7);
      }
      auVar12 = ZEXT416((uint)fVar2);
      do {
        auVar13 = pmovzxwd(in_XMM2,*(undefined8 *)(param_1 + -6 + uVar7 * 2));
        auVar12 = pmovzxwd(auVar12,*(undefined8 *)(param_1 + 6 + uVar7 * 2));
        auVar10 = pmovzxwd(in_XMM0,*(undefined8 *)(param_1 + 4 + uVar7 * 2));
        auVar14._0_4_ = auVar13._0_4_ + auVar12._0_4_;
        auVar14._4_4_ = auVar13._4_4_ + auVar12._4_4_;
        auVar14._8_4_ = auVar13._8_4_ + auVar12._8_4_;
        auVar14._12_4_ = auVar13._12_4_ + auVar12._12_4_;
        auVar13 = pmovzxwd(auVar12,*(undefined8 *)(param_1 + -4 + uVar7 * 2));
        auVar12._0_4_ = auVar13._0_4_ + auVar10._0_4_;
        auVar12._4_4_ = auVar13._4_4_ + auVar10._4_4_;
        auVar12._8_4_ = auVar13._8_4_ + auVar10._8_4_;
        auVar12._12_4_ = auVar13._12_4_ + auVar10._12_4_;
        auVar10 = pmovzxwd(auVar10,*(undefined8 *)(param_1 + -2 + uVar7 * 2));
        in_XMM2 = pmovzxwd(auVar14,*(undefined8 *)(param_1 + 2 + uVar7 * 2));
        auVar11._0_4_ = auVar10._0_4_ + in_XMM2._0_4_;
        auVar11._4_4_ = auVar10._4_4_ + in_XMM2._4_4_;
        auVar11._8_4_ = auVar10._8_4_ + in_XMM2._8_4_;
        auVar11._12_4_ = auVar10._12_4_ + in_XMM2._12_4_;
        in_XMM0 = pmovzxwd(auVar11,*(undefined8 *)(param_1 + uVar7 * 2));
        pfVar1 = (float *)(param_2 + uVar7 * 4);
        *pfVar1 = (float)auVar14._0_4_ * fVar2 + (float)auVar12._0_4_ * fVar4 +
                  (float)auVar11._0_4_ * fVar3 + (float)in_XMM0._0_4_ * fVar5;
        pfVar1[1] = (float)auVar14._4_4_ * fVar2 + (float)auVar12._4_4_ * fVar4 +
                    (float)auVar11._4_4_ * fVar3 + (float)in_XMM0._4_4_ * fVar5;
        pfVar1[2] = (float)auVar14._8_4_ * fVar2 + (float)auVar12._8_4_ * fVar4 +
                    (float)auVar11._8_4_ * fVar3 + (float)in_XMM0._8_4_ * fVar5;
        pfVar1[3] = (float)auVar14._12_4_ * fVar2 + (float)auVar12._12_4_ * fVar4 +
                    (float)auVar11._12_4_ * fVar3 + (float)in_XMM0._12_4_ * fVar5;
        uVar7 = uVar7 + 4;
      } while (uVar7 < uVar9);
      goto joined_r0x00014072c49b;
    }
  }
LAB_14072c54e:
  uVar9 = 0;
joined_r0x00014072c49b:
  for (; uVar9 < param_3; uVar9 = uVar9 + 1) {
    auVar10._0_4_ =
         (float)((uint)*(ushort *)(param_1 + -6 + uVar9 * 2) +
                (uint)*(ushort *)(param_1 + 6 + uVar9 * 2));
    auVar10._4_4_ =
         (float)((uint)*(ushort *)(param_1 + -4 + uVar9 * 2) +
                (uint)*(ushort *)(param_1 + 4 + uVar9 * 2));
    auVar10._12_4_ = (float)*(ushort *)(param_1 + uVar9 * 2);
    auVar10._8_4_ =
         (float)((uint)*(ushort *)(param_1 + -2 + uVar9 * 2) +
                (uint)*(ushort *)(param_1 + 2 + uVar9 * 2));
    auVar12 = dpps(auVar6,auVar10,0xf1);
    *(int *)(param_2 + uVar9 * 4) = auVar12._0_4_;
  }
  return;
}

