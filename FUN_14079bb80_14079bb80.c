
void FUN_14079bb80(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  uVar5 = param_3 * 3;
  if ((longlong)uVar5 < 1) {
    return;
  }
  uVar8 = param_2;
  if (3 < (longlong)uVar5) {
    uVar6 = param_2 & 0xf;
    if (uVar6 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14079bd56;
      uVar6 = 0x10 - uVar6 >> 2;
    }
    uVar8 = uVar6 + 4;
    if ((longlong)uVar8 <= (longlong)uVar5) {
      uVar7 = 0;
      uVar8 = uVar5 - (uVar5 - uVar6 & 3);
      if (uVar6 != 0) {
        do {
          *(float *)(param_2 + uVar7 * 4) =
               (float)((int)*(short *)(param_1 + -0xc + uVar7 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar7 * 2)) * fVar2 +
               (float)((int)*(short *)(param_1 + -6 + uVar7 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar7 * 2)) * fVar3 +
               (float)(int)*(short *)(param_1 + uVar7 * 2) * fVar4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      do {
        auVar10 = pmovsxwd(unaff_XMM7,*(undefined8 *)(param_1 + -0xc + uVar6 * 2));
        auVar9 = pmovsxwd(unaff_XMM6,*(undefined8 *)(param_1 + 0xc + uVar6 * 2));
        auVar11._0_4_ = auVar10._0_4_ + auVar9._0_4_;
        auVar11._4_4_ = auVar10._4_4_ + auVar9._4_4_;
        auVar11._8_4_ = auVar10._8_4_ + auVar9._8_4_;
        auVar11._12_4_ = auVar10._12_4_ + auVar9._12_4_;
        auVar9 = pmovsxwd(auVar9,*(undefined8 *)(param_1 + 6 + uVar6 * 2));
        auVar10 = pmovsxwd(auVar11,*(undefined8 *)(param_1 + -6 + uVar6 * 2));
        auVar12._0_4_ = auVar10._0_4_ + auVar9._0_4_;
        auVar12._4_4_ = auVar10._4_4_ + auVar9._4_4_;
        auVar12._8_4_ = auVar10._8_4_ + auVar9._8_4_;
        auVar12._12_4_ = auVar10._12_4_ + auVar9._12_4_;
        unaff_XMM7 = pmovsxwd(auVar12,*(undefined8 *)(param_1 + uVar6 * 2));
        unaff_XMM6._0_4_ = (float)unaff_XMM7._0_4_ * fVar4;
        unaff_XMM6._4_4_ = (float)unaff_XMM7._4_4_ * fVar4;
        unaff_XMM6._8_4_ = (float)unaff_XMM7._8_4_ * fVar4;
        unaff_XMM6._12_4_ = (float)unaff_XMM7._12_4_ * fVar4;
        pfVar1 = (float *)(param_2 + uVar6 * 4);
        *pfVar1 = (float)auVar11._0_4_ * fVar2 + (float)auVar12._0_4_ * fVar3 + unaff_XMM6._0_4_;
        pfVar1[1] = (float)auVar11._4_4_ * fVar2 + (float)auVar12._4_4_ * fVar3 + unaff_XMM6._4_4_;
        pfVar1[2] = (float)auVar11._8_4_ * fVar2 + (float)auVar12._8_4_ * fVar3 + unaff_XMM6._8_4_;
        pfVar1[3] = (float)auVar11._12_4_ * fVar2 + (float)auVar12._12_4_ * fVar3 +
                    unaff_XMM6._12_4_;
        uVar6 = uVar6 + 4;
      } while (uVar6 < uVar8);
      for (; uVar8 < uVar5; uVar8 = uVar8 + 1) {
        *(float *)(param_2 + uVar8 * 4) =
             (float)((int)*(short *)(param_1 + -0xc + uVar8 * 2) +
                    (int)*(short *)(param_1 + 0xc + uVar8 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -6 + uVar8 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar8 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar8 * 2) * fVar4;
      }
      return;
    }
  }
LAB_14079bd56:
  FUN_14079bce4(fVar4,uVar8,0);
  return;
}

