
void FUN_14075058f(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  float *pfVar1;
  ulonglong in_RAX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM4_Da;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar2 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  do {
    *(float *)(in_R10 + param_2 * 4) =
         (float)((uint)*(ushort *)(param_1 + -4 + param_2 * 2) +
                (uint)*(ushort *)(param_1 + 4 + param_2 * 2)) * in_XMM2_Da +
         (float)((uint)*(ushort *)(param_1 + -2 + param_2 * 2) +
                (uint)*(ushort *)(param_1 + 2 + param_2 * 2)) * in_XMM4_Da +
         (float)*(ushort *)(param_1 + param_2 * 2) * in_XMM0_Da;
    param_2 = param_2 + 1;
  } while (param_2 < in_RAX);
  do {
    auVar3 = pmovzxwd(unaff_XMM7,*(undefined8 *)(param_1 + -4 + in_RAX * 2));
    auVar2 = pmovzxwd(unaff_XMM6,*(undefined8 *)(param_1 + 4 + in_RAX * 2));
    auVar4._0_4_ = auVar3._0_4_ + auVar2._0_4_;
    auVar4._4_4_ = auVar3._4_4_ + auVar2._4_4_;
    auVar4._8_4_ = auVar3._8_4_ + auVar2._8_4_;
    auVar4._12_4_ = auVar3._12_4_ + auVar2._12_4_;
    auVar2 = pmovzxwd(auVar2,*(undefined8 *)(param_1 + 2 + in_RAX * 2));
    auVar3 = pmovzxwd(auVar4,*(undefined8 *)(param_1 + -2 + in_RAX * 2));
    auVar5._0_4_ = auVar3._0_4_ + auVar2._0_4_;
    auVar5._4_4_ = auVar3._4_4_ + auVar2._4_4_;
    auVar5._8_4_ = auVar3._8_4_ + auVar2._8_4_;
    auVar5._12_4_ = auVar3._12_4_ + auVar2._12_4_;
    unaff_XMM7 = pmovzxwd(auVar5,*(undefined8 *)(param_1 + in_RAX * 2));
    unaff_XMM6._0_4_ = (float)unaff_XMM7._0_4_ * in_XMM0_Da;
    unaff_XMM6._4_4_ = (float)unaff_XMM7._4_4_ * in_XMM0_Da;
    unaff_XMM6._8_4_ = (float)unaff_XMM7._8_4_ * in_XMM0_Da;
    unaff_XMM6._12_4_ = (float)unaff_XMM7._12_4_ * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + in_RAX * 4);
    *pfVar1 = (float)auVar4._0_4_ * in_XMM2_Da + (float)auVar5._0_4_ * in_XMM4_Da + unaff_XMM6._0_4_
    ;
    pfVar1[1] = (float)auVar4._4_4_ * in_XMM2_Da + (float)auVar5._4_4_ * in_XMM4_Da +
                unaff_XMM6._4_4_;
    pfVar1[2] = (float)auVar4._8_4_ * in_XMM2_Da + (float)auVar5._8_4_ * in_XMM4_Da +
                unaff_XMM6._8_4_;
    pfVar1[3] = (float)auVar4._12_4_ * in_XMM2_Da + (float)auVar5._12_4_ * in_XMM4_Da +
                unaff_XMM6._12_4_;
    in_RAX = in_RAX + 4;
  } while (in_RAX < param_4);
  if (param_4 < param_3) {
    do {
      *(float *)(in_R10 + param_4 * 4) =
           (float)((uint)*(ushort *)(param_1 + -4 + param_4 * 2) +
                  (uint)*(ushort *)(param_1 + 4 + param_4 * 2)) * in_XMM2_Da +
           (float)((uint)*(ushort *)(param_1 + -2 + param_4 * 2) +
                  (uint)*(ushort *)(param_1 + 2 + param_4 * 2)) * in_XMM4_Da +
           (float)*(ushort *)(param_1 + param_4 * 2) * in_XMM0_Da;
      param_4 = param_4 + 1;
    } while (param_4 < param_3);
  }
  return;
}

