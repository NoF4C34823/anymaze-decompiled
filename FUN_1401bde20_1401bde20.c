
void FUN_1401bde20(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  uVar7 = param_2;
  if (3 < (longlong)param_3) {
    uVar5 = param_2 & 0xf;
    if (uVar5 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401bdff6;
      uVar5 = 0x10 - uVar5 >> 2;
    }
    uVar7 = uVar5 + 4;
    if ((longlong)uVar7 <= (longlong)param_3) {
      uVar6 = 0;
      uVar7 = param_3 - (param_3 - uVar5 & 3);
      if (uVar5 != 0) {
        do {
          *(float *)(param_2 + uVar6 * 4) =
               (float)((uint)*(ushort *)(param_1 + -4 + uVar6 * 2) +
                      (uint)*(ushort *)(param_1 + 4 + uVar6 * 2)) * fVar2 +
               (float)((uint)*(ushort *)(param_1 + -2 + uVar6 * 2) +
                      (uint)*(ushort *)(param_1 + 2 + uVar6 * 2)) * fVar3 +
               (float)*(ushort *)(param_1 + uVar6 * 2) * fVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      do {
        auVar9 = pmovzxwd(unaff_XMM7,*(undefined8 *)(param_1 + -4 + uVar5 * 2));
        auVar8 = pmovzxwd(unaff_XMM6,*(undefined8 *)(param_1 + 4 + uVar5 * 2));
        auVar10._0_4_ = auVar9._0_4_ + auVar8._0_4_;
        auVar10._4_4_ = auVar9._4_4_ + auVar8._4_4_;
        auVar10._8_4_ = auVar9._8_4_ + auVar8._8_4_;
        auVar10._12_4_ = auVar9._12_4_ + auVar8._12_4_;
        auVar8 = pmovzxwd(auVar8,*(undefined8 *)(param_1 + 2 + uVar5 * 2));
        auVar9 = pmovzxwd(auVar10,*(undefined8 *)(param_1 + -2 + uVar5 * 2));
        auVar11._0_4_ = auVar9._0_4_ + auVar8._0_4_;
        auVar11._4_4_ = auVar9._4_4_ + auVar8._4_4_;
        auVar11._8_4_ = auVar9._8_4_ + auVar8._8_4_;
        auVar11._12_4_ = auVar9._12_4_ + auVar8._12_4_;
        unaff_XMM7 = pmovzxwd(auVar11,*(undefined8 *)(param_1 + uVar5 * 2));
        unaff_XMM6._0_4_ = (float)unaff_XMM7._0_4_ * fVar4;
        unaff_XMM6._4_4_ = (float)unaff_XMM7._4_4_ * fVar4;
        unaff_XMM6._8_4_ = (float)unaff_XMM7._8_4_ * fVar4;
        unaff_XMM6._12_4_ = (float)unaff_XMM7._12_4_ * fVar4;
        pfVar1 = (float *)(param_2 + uVar5 * 4);
        *pfVar1 = (float)auVar10._0_4_ * fVar2 + (float)auVar11._0_4_ * fVar3 + unaff_XMM6._0_4_;
        pfVar1[1] = (float)auVar10._4_4_ * fVar2 + (float)auVar11._4_4_ * fVar3 + unaff_XMM6._4_4_;
        pfVar1[2] = (float)auVar10._8_4_ * fVar2 + (float)auVar11._8_4_ * fVar3 + unaff_XMM6._8_4_;
        pfVar1[3] = (float)auVar10._12_4_ * fVar2 + (float)auVar11._12_4_ * fVar3 +
                    unaff_XMM6._12_4_;
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar7);
      for (; uVar7 < param_3; uVar7 = uVar7 + 1) {
        *(float *)(param_2 + uVar7 * 4) =
             (float)((uint)*(ushort *)(param_1 + -4 + uVar7 * 2) +
                    (uint)*(ushort *)(param_1 + 4 + uVar7 * 2)) * fVar2 +
             (float)((uint)*(ushort *)(param_1 + -2 + uVar7 * 2) +
                    (uint)*(ushort *)(param_1 + 2 + uVar7 * 2)) * fVar3 +
             (float)*(ushort *)(param_1 + uVar7 * 2) * fVar4;
      }
      return;
    }
  }
LAB_1401bdff6:
  FUN_1401bdf84(fVar4,uVar7,fVar2,0);
  return;
}

