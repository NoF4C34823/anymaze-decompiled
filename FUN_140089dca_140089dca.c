
void FUN_140089dca(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  uint *puVar4;
  ulonglong uVar5;
  float in_XMM0_Da;
  float in_XMM2_Da;
  undefined1 in_XMM4 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  do {
    auVar9 = pmovzxbw(unaff_XMM6,*(undefined8 *)((in_RAX - 3) + param_1));
    auVar6 = pmovzxbw(in_XMM4,*(undefined8 *)(in_RAX + 3 + param_1));
    auVar11 = pmovzxbw(unaff_XMM7,*(undefined8 *)(in_RAX + 5 + param_1));
    auVar8._0_2_ = auVar9._0_2_ + auVar6._0_2_;
    auVar8._2_2_ = auVar9._2_2_ + auVar6._2_2_;
    auVar8._4_2_ = auVar9._4_2_ + auVar6._4_2_;
    auVar8._6_2_ = auVar9._6_2_ + auVar6._6_2_;
    auVar8._8_2_ = auVar9._8_2_ + auVar6._8_2_;
    auVar8._10_2_ = auVar9._10_2_ + auVar6._10_2_;
    auVar8._12_2_ = auVar9._12_2_ + auVar6._12_2_;
    auVar8._14_2_ = auVar9._14_2_ + auVar6._14_2_;
    auVar7 = pmovzxbw(in_XMM5,*(undefined8 *)(in_RAX + 0xb + param_1));
    auVar6 = pmovzxwd(auVar6,auVar8);
    auVar12._0_2_ = auVar11._0_2_ + auVar7._0_2_;
    auVar12._2_2_ = auVar11._2_2_ + auVar7._2_2_;
    auVar12._4_2_ = auVar11._4_2_ + auVar7._4_2_;
    auVar12._6_2_ = auVar11._6_2_ + auVar7._6_2_;
    auVar12._8_2_ = auVar11._8_2_ + auVar7._8_2_;
    auVar12._10_2_ = auVar11._10_2_ + auVar7._10_2_;
    auVar12._12_2_ = auVar11._12_2_ + auVar7._12_2_;
    auVar12._14_2_ = auVar11._14_2_ + auVar7._14_2_;
    auVar9 = pmovzxbw(auVar6,*(undefined8 *)(in_RAX + param_1));
    auVar11 = pmovzxwd(auVar8 >> 0x40,auVar8 >> 0x40);
    auVar7 = pmovzxwd(auVar7,auVar12);
    auVar10 = pmovzxbw(auVar11,*(undefined8 *)(in_RAX + 8 + param_1));
    auVar12 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
    auVar8 = pmovzxwd(auVar7,auVar9);
    auVar9 = pmovzxwd(auVar9 >> 0x40,auVar9 >> 0x40);
    in_XMM5 = pmovzxwd(auVar8,auVar10);
    unaff_XMM6 = pmovzxwd(auVar10 >> 0x40,auVar10 >> 0x40);
    unaff_XMM7._0_4_ = (float)auVar8._0_4_ * in_XMM0_Da;
    unaff_XMM7._4_4_ = (float)auVar8._4_4_ * in_XMM0_Da;
    unaff_XMM7._8_4_ = (float)auVar8._8_4_ * in_XMM0_Da;
    unaff_XMM7._12_4_ = (float)auVar8._12_4_ * in_XMM0_Da;
    in_XMM4._0_4_ = (float)auVar9._0_4_ * in_XMM0_Da;
    in_XMM4._4_4_ = (float)auVar9._4_4_ * in_XMM0_Da;
    in_XMM4._8_4_ = (float)auVar9._8_4_ * in_XMM0_Da;
    in_XMM4._12_4_ = (float)auVar9._12_4_ * in_XMM0_Da;
    pfVar1 = (float *)(param_4 + in_RAX * 4);
    *pfVar1 = (float)auVar6._0_4_ * in_XMM2_Da + unaff_XMM7._0_4_;
    pfVar1[1] = (float)auVar6._4_4_ * in_XMM2_Da + unaff_XMM7._4_4_;
    pfVar1[2] = (float)auVar6._8_4_ * in_XMM2_Da + unaff_XMM7._8_4_;
    pfVar1[3] = (float)auVar6._12_4_ * in_XMM2_Da + unaff_XMM7._12_4_;
    pfVar1 = (float *)(param_4 + 0x10 + in_RAX * 4);
    *pfVar1 = (float)auVar11._0_4_ * in_XMM2_Da + in_XMM4._0_4_;
    pfVar1[1] = (float)auVar11._4_4_ * in_XMM2_Da + in_XMM4._4_4_;
    pfVar1[2] = (float)auVar11._8_4_ * in_XMM2_Da + in_XMM4._8_4_;
    pfVar1[3] = (float)auVar11._12_4_ * in_XMM2_Da + in_XMM4._12_4_;
    pfVar1 = (float *)(param_4 + 0x20 + in_RAX * 4);
    *pfVar1 = (float)auVar7._0_4_ * in_XMM2_Da + (float)in_XMM5._0_4_ * in_XMM0_Da;
    pfVar1[1] = (float)auVar7._4_4_ * in_XMM2_Da + (float)in_XMM5._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar7._8_4_ * in_XMM2_Da + (float)in_XMM5._8_4_ * in_XMM0_Da;
    pfVar1[3] = (float)auVar7._12_4_ * in_XMM2_Da + (float)in_XMM5._12_4_ * in_XMM0_Da;
    pfVar1 = (float *)(param_4 + 0x30 + in_RAX * 4);
    *pfVar1 = (float)auVar12._0_4_ * in_XMM2_Da + (float)unaff_XMM6._0_4_ * in_XMM0_Da;
    pfVar1[1] = (float)auVar12._4_4_ * in_XMM2_Da + (float)unaff_XMM6._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar12._8_4_ * in_XMM2_Da + (float)unaff_XMM6._8_4_ * in_XMM0_Da;
    pfVar1[3] = (float)auVar12._12_4_ * in_XMM2_Da + (float)unaff_XMM6._12_4_ * in_XMM0_Da;
    in_RAX = in_RAX + 0x10;
  } while (in_RAX < unaff_RDI);
  if (unaff_RDI + 1 <= param_3) {
    param_3 = param_3 - unaff_RDI;
    if ((longlong)param_3 < 4) {
      uVar3 = 0;
    }
    else {
      uVar5 = 0;
      puVar4 = (uint *)(param_1 + unaff_RDI);
      uVar3 = param_3 & 0xfffffffffffffffc;
      do {
        auVar9 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -3)),
                          ZEXT416(*(uint *)((longlong)puVar4 + -3)));
        auVar6 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 3)),
                          ZEXT416(*(uint *)((longlong)puVar4 + 3)));
        auVar7._0_2_ = auVar9._0_2_ + auVar6._0_2_;
        auVar7._2_2_ = auVar9._2_2_ + auVar6._2_2_;
        auVar7._4_2_ = auVar9._4_2_ + auVar6._4_2_;
        auVar7._6_2_ = auVar9._6_2_ + auVar6._6_2_;
        auVar7._8_2_ = auVar9._8_2_ + auVar6._8_2_;
        auVar7._10_2_ = auVar9._10_2_ + auVar6._10_2_;
        auVar7._12_2_ = auVar9._12_2_ + auVar6._12_2_;
        auVar7._14_2_ = auVar9._14_2_ + auVar6._14_2_;
        auVar6 = pmovzxwd(auVar7,auVar7);
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        auVar9 = pmovzxbw(ZEXT416(uVar2),ZEXT416(uVar2));
        auVar9 = pmovzxwd(auVar9,auVar9);
        pfVar1 = (float *)(param_4 + unaff_RDI * 4 + uVar5 * 4);
        *pfVar1 = (float)auVar6._0_4_ * in_XMM2_Da + (float)auVar9._0_4_ * in_XMM0_Da;
        pfVar1[1] = (float)auVar6._4_4_ * in_XMM2_Da + (float)auVar9._4_4_ * in_XMM0_Da;
        pfVar1[2] = (float)auVar6._8_4_ * in_XMM2_Da + (float)auVar9._8_4_ * in_XMM0_Da;
        pfVar1[3] = (float)auVar6._12_4_ * in_XMM2_Da + (float)auVar9._12_4_ * in_XMM0_Da;
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar3);
    }
    if (uVar3 < param_3) {
      param_1 = param_1 + unaff_RDI;
      do {
        *(float *)(param_4 + unaff_RDI * 4 + uVar3 * 4) =
             (float)((uint)*(byte *)((uVar3 - 3) + param_1) + (uint)*(byte *)(uVar3 + 3 + param_1))
             * in_XMM2_Da + (float)*(byte *)(uVar3 + param_1) * in_XMM0_Da;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
  }
  return;
}

