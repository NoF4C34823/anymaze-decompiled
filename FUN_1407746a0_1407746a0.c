
void FUN_1407746a0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_1407748b9:
    uVar6 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar4 = param_2 & 0xf;
    if (uVar4 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407748b9;
      uVar4 = 0x10 - uVar4 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar4 + 8)) goto LAB_1407748b9;
    uVar5 = 0;
    uVar6 = param_3 - (param_3 - uVar4 & 7);
    if (uVar4 != 0) {
      do {
        *(float *)(param_2 + uVar5 * 4) =
             (float)((uint)*(ushort *)(param_1 + -2 + uVar5 * 2) +
                    (uint)*(ushort *)(param_1 + 2 + uVar5 * 2)) * fVar2 +
             (float)*(ushort *)(param_1 + uVar5 * 2) * fVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    do {
      auVar9 = pmovzxwd(in_XMM5,*(undefined8 *)(param_1 + -2 + uVar4 * 2));
      auVar7 = pmovzxwd(in_XMM4,*(undefined8 *)(param_1 + 2 + uVar4 * 2));
      auVar8 = pmovzxwd(auVar7,*(undefined8 *)(param_1 + uVar4 * 2));
      auVar10._0_4_ = (float)auVar8._0_4_ * fVar3;
      auVar10._4_4_ = (float)auVar8._4_4_ * fVar3;
      auVar10._8_4_ = (float)auVar8._8_4_ * fVar3;
      auVar10._12_4_ = (float)auVar8._12_4_ * fVar3;
      auVar8._0_4_ = (float)(auVar9._0_4_ + auVar7._0_4_) * fVar2 + auVar10._0_4_;
      auVar8._4_4_ = (float)(auVar9._4_4_ + auVar7._4_4_) * fVar2 + auVar10._4_4_;
      auVar8._8_4_ = (float)(auVar9._8_4_ + auVar7._8_4_) * fVar2 + auVar10._8_4_;
      auVar8._12_4_ = (float)(auVar9._12_4_ + auVar7._12_4_) * fVar2 + auVar10._12_4_;
      *(undefined1 (*) [16])(param_2 + uVar4 * 4) = auVar8;
      auVar7 = pmovzxwd(auVar10,*(undefined8 *)(param_1 + 6 + uVar4 * 2));
      auVar8 = pmovzxwd(auVar8,*(undefined8 *)(param_1 + 10 + uVar4 * 2));
      auVar10 = pmovzxwd(auVar8,*(undefined8 *)(param_1 + 8 + uVar4 * 2));
      in_XMM5._0_4_ = (float)auVar10._0_4_ * fVar3;
      in_XMM5._4_4_ = (float)auVar10._4_4_ * fVar3;
      in_XMM5._8_4_ = (float)auVar10._8_4_ * fVar3;
      in_XMM5._12_4_ = (float)auVar10._12_4_ * fVar3;
      in_XMM4._0_4_ = (float)(auVar7._0_4_ + auVar8._0_4_) * fVar2 + in_XMM5._0_4_;
      in_XMM4._4_4_ = (float)(auVar7._4_4_ + auVar8._4_4_) * fVar2 + in_XMM5._4_4_;
      in_XMM4._8_4_ = (float)(auVar7._8_4_ + auVar8._8_4_) * fVar2 + in_XMM5._8_4_;
      in_XMM4._12_4_ = (float)(auVar7._12_4_ + auVar8._12_4_) * fVar2 + in_XMM5._12_4_;
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar4 * 4) = in_XMM4;
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar6);
    if (param_3 < uVar6 + 1) {
      return;
    }
    param_3 = param_3 - uVar6;
    if (3 < (longlong)param_3) {
      uVar5 = 0;
      lVar1 = param_1 + uVar6 * 2;
      uVar4 = param_3 & 0xfffffffffffffffc;
      do {
        auVar7 = pmovzxwd(in_XMM4,*(undefined8 *)(lVar1 + -2 + uVar5 * 2));
        auVar8 = pmovzxwd(in_XMM5,*(undefined8 *)(lVar1 + 2 + uVar5 * 2));
        auVar10 = pmovzxwd(auVar8,*(undefined8 *)(lVar1 + uVar5 * 2));
        in_XMM5._0_4_ = (float)auVar10._0_4_ * fVar3;
        in_XMM5._4_4_ = (float)auVar10._4_4_ * fVar3;
        in_XMM5._8_4_ = (float)auVar10._8_4_ * fVar3;
        in_XMM5._12_4_ = (float)auVar10._12_4_ * fVar3;
        in_XMM4._0_4_ = (float)(auVar7._0_4_ + auVar8._0_4_) * fVar2 + in_XMM5._0_4_;
        in_XMM4._4_4_ = (float)(auVar7._4_4_ + auVar8._4_4_) * fVar2 + in_XMM5._4_4_;
        in_XMM4._8_4_ = (float)(auVar7._8_4_ + auVar8._8_4_) * fVar2 + in_XMM5._8_4_;
        in_XMM4._12_4_ = (float)(auVar7._12_4_ + auVar8._12_4_) * fVar2 + in_XMM5._12_4_;
        *(undefined1 (*) [16])(param_2 + uVar6 * 4 + uVar5 * 4) = in_XMM4;
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar4);
      goto LAB_140774855;
    }
  }
  uVar4 = 0;
LAB_140774855:
  if (uVar4 < param_3) {
    param_1 = param_1 + uVar6 * 2;
    do {
      *(float *)(param_2 + uVar6 * 4 + uVar4 * 4) =
           (float)((uint)*(ushort *)(param_1 + -2 + uVar4 * 2) +
                  (uint)*(ushort *)(param_1 + 2 + uVar4 * 2)) * fVar2 +
           (float)*(ushort *)(param_1 + uVar4 * 2) * fVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

