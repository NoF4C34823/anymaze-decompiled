
void FUN_1407533c0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 in_XMM4 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar7 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)uVar7 < 1) {
    return;
  }
  if ((longlong)uVar7 < 8) {
LAB_1407535d9:
    uVar6 = 0;
    if (uVar7 == 0) {
      return;
    }
  }
  else {
    uVar4 = param_2 & 0xf;
    if (uVar4 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407535d9;
      uVar4 = 0x10 - uVar4 >> 2;
    }
    if ((longlong)uVar7 < (longlong)(uVar4 + 8)) goto LAB_1407535d9;
    uVar5 = 0;
    uVar6 = uVar7 - (uVar7 - uVar4 & 7);
    if (uVar4 != 0) {
      do {
        *(float *)(param_2 + uVar5 * 4) =
             (float)((int)*(short *)(param_1 + -6 + uVar5 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar5 * 2)) * fVar2 +
             (float)(int)*(short *)(param_1 + uVar5 * 2) * fVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    do {
      auVar10 = pmovsxwd(in_XMM5,*(undefined8 *)(param_1 + -6 + uVar4 * 2));
      auVar8 = pmovsxwd(in_XMM4,*(undefined8 *)(param_1 + 6 + uVar4 * 2));
      auVar9 = pmovsxwd(auVar8,*(undefined8 *)(param_1 + uVar4 * 2));
      auVar11._0_4_ = (float)auVar9._0_4_ * fVar3;
      auVar11._4_4_ = (float)auVar9._4_4_ * fVar3;
      auVar11._8_4_ = (float)auVar9._8_4_ * fVar3;
      auVar11._12_4_ = (float)auVar9._12_4_ * fVar3;
      auVar9._0_4_ = (float)(auVar10._0_4_ + auVar8._0_4_) * fVar2 + auVar11._0_4_;
      auVar9._4_4_ = (float)(auVar10._4_4_ + auVar8._4_4_) * fVar2 + auVar11._4_4_;
      auVar9._8_4_ = (float)(auVar10._8_4_ + auVar8._8_4_) * fVar2 + auVar11._8_4_;
      auVar9._12_4_ = (float)(auVar10._12_4_ + auVar8._12_4_) * fVar2 + auVar11._12_4_;
      *(undefined1 (*) [16])(param_2 + uVar4 * 4) = auVar9;
      auVar8 = pmovsxwd(auVar11,*(undefined8 *)(param_1 + 2 + uVar4 * 2));
      auVar9 = pmovsxwd(auVar9,*(undefined8 *)(param_1 + 0xe + uVar4 * 2));
      auVar11 = pmovsxwd(auVar9,*(undefined8 *)(param_1 + 8 + uVar4 * 2));
      in_XMM5._0_4_ = (float)auVar11._0_4_ * fVar3;
      in_XMM5._4_4_ = (float)auVar11._4_4_ * fVar3;
      in_XMM5._8_4_ = (float)auVar11._8_4_ * fVar3;
      in_XMM5._12_4_ = (float)auVar11._12_4_ * fVar3;
      in_XMM4._0_4_ = (float)(auVar8._0_4_ + auVar9._0_4_) * fVar2 + in_XMM5._0_4_;
      in_XMM4._4_4_ = (float)(auVar8._4_4_ + auVar9._4_4_) * fVar2 + in_XMM5._4_4_;
      in_XMM4._8_4_ = (float)(auVar8._8_4_ + auVar9._8_4_) * fVar2 + in_XMM5._8_4_;
      in_XMM4._12_4_ = (float)(auVar8._12_4_ + auVar9._12_4_) * fVar2 + in_XMM5._12_4_;
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar4 * 4) = in_XMM4;
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar6);
    if (uVar7 < uVar6 + 1) {
      return;
    }
    uVar7 = uVar7 - uVar6;
    if (3 < (longlong)uVar7) {
      uVar5 = 0;
      lVar1 = param_1 + uVar6 * 2;
      uVar4 = uVar7 & 0xfffffffffffffffc;
      do {
        auVar8 = pmovsxwd(in_XMM4,*(undefined8 *)(lVar1 + -6 + uVar5 * 2));
        auVar9 = pmovsxwd(in_XMM5,*(undefined8 *)(lVar1 + 6 + uVar5 * 2));
        auVar11 = pmovsxwd(auVar9,*(undefined8 *)(lVar1 + uVar5 * 2));
        in_XMM5._0_4_ = (float)auVar11._0_4_ * fVar3;
        in_XMM5._4_4_ = (float)auVar11._4_4_ * fVar3;
        in_XMM5._8_4_ = (float)auVar11._8_4_ * fVar3;
        in_XMM5._12_4_ = (float)auVar11._12_4_ * fVar3;
        in_XMM4._0_4_ = (float)(auVar8._0_4_ + auVar9._0_4_) * fVar2 + in_XMM5._0_4_;
        in_XMM4._4_4_ = (float)(auVar8._4_4_ + auVar9._4_4_) * fVar2 + in_XMM5._4_4_;
        in_XMM4._8_4_ = (float)(auVar8._8_4_ + auVar9._8_4_) * fVar2 + in_XMM5._8_4_;
        in_XMM4._12_4_ = (float)(auVar8._12_4_ + auVar9._12_4_) * fVar2 + in_XMM5._12_4_;
        *(undefined1 (*) [16])(param_2 + uVar6 * 4 + uVar5 * 4) = in_XMM4;
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar4);
      goto LAB_140753575;
    }
  }
  uVar4 = 0;
LAB_140753575:
  if (uVar4 < uVar7) {
    param_1 = param_1 + uVar6 * 2;
    do {
      *(float *)(param_2 + uVar6 * 4 + uVar4 * 4) =
           (float)((int)*(short *)(param_1 + -6 + uVar4 * 2) +
                  (int)*(short *)(param_1 + 6 + uVar4 * 2)) * fVar2 +
           (float)(int)*(short *)(param_1 + uVar4 * 2) * fVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  return;
}

