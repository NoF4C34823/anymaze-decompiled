
void FUN_1401ba96a(longlong param_1,float param_2,ulonglong param_3,undefined8 param_4)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong in_R9;
  uint *puVar4;
  ulonglong uVar5;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = 0;
  puVar4 = (uint *)(param_1 + unaff_RDI);
  uVar3 = param_3 & 0xfffffffffffffffc;
  do {
    auVar6 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -2)),
                      ZEXT416(*(uint *)((longlong)puVar4 + -2)));
    auVar8 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 2)),
                      ZEXT416(*(uint *)((longlong)puVar4 + 2)));
    auVar7._0_2_ = auVar6._0_2_ + auVar8._0_2_;
    auVar7._2_2_ = auVar6._2_2_ + auVar8._2_2_;
    auVar7._4_2_ = auVar6._4_2_ + auVar8._4_2_;
    auVar7._6_2_ = auVar6._6_2_ + auVar8._6_2_;
    auVar7._8_2_ = auVar6._8_2_ + auVar8._8_2_;
    auVar7._10_2_ = auVar6._10_2_ + auVar8._10_2_;
    auVar7._12_2_ = auVar6._12_2_ + auVar8._12_2_;
    auVar7._14_2_ = auVar6._14_2_ + auVar8._14_2_;
    auVar6 = pmovzxwd(auVar7,auVar7);
    auVar9 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 1)),
                      ZEXT416(*(uint *)((longlong)puVar4 + 1)));
    auVar7 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -1)),
                      ZEXT416(*(uint *)((longlong)puVar4 + -1)));
    auVar8._0_2_ = auVar7._0_2_ + auVar9._0_2_;
    auVar8._2_2_ = auVar7._2_2_ + auVar9._2_2_;
    auVar8._4_2_ = auVar7._4_2_ + auVar9._4_2_;
    auVar8._6_2_ = auVar7._6_2_ + auVar9._6_2_;
    auVar8._8_2_ = auVar7._8_2_ + auVar9._8_2_;
    auVar8._10_2_ = auVar7._10_2_ + auVar9._10_2_;
    auVar8._12_2_ = auVar7._12_2_ + auVar9._12_2_;
    auVar8._14_2_ = auVar7._14_2_ + auVar9._14_2_;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    auVar7 = pmovzxwd(auVar8,auVar8);
    auVar8 = pmovzxbw(ZEXT416(uVar2),ZEXT416(uVar2));
    auVar8 = pmovzxwd(auVar8,auVar8);
    pfVar1 = (float *)(in_R9 + unaff_RDI * 4 + uVar5 * 4);
    *pfVar1 = (float)auVar6._0_4_ * in_XMM5_Da + (float)auVar7._0_4_ * in_XMM4_Da +
              (float)auVar8._0_4_ * (float)param_4;
    pfVar1[1] = (float)auVar6._4_4_ * in_XMM5_Db + (float)auVar7._4_4_ * in_XMM4_Db +
                (float)auVar8._4_4_ * (float)((ulonglong)param_4 >> 0x20);
    pfVar1[2] = (float)auVar6._8_4_ * in_XMM5_Dc + (float)auVar7._8_4_ * in_XMM4_Dc +
                (float)auVar8._8_4_ * in_XMM3_Dc;
    pfVar1[3] = (float)auVar6._12_4_ * in_XMM5_Dd + (float)auVar7._12_4_ * in_XMM4_Dd +
                (float)auVar8._12_4_ * in_XMM3_Dd;
    uVar5 = uVar5 + 4;
  } while (uVar5 < uVar3);
  if (uVar3 < param_3) {
    param_1 = param_1 + unaff_RDI;
    do {
      *(float *)(in_R9 + unaff_RDI * 4 + uVar3 * 4) =
           (float)((uint)*(byte *)((uVar3 - 2) + param_1) + (uint)*(byte *)(uVar3 + 2 + param_1)) *
           param_2 + (float)((uint)*(byte *)((uVar3 - 1) + param_1) +
                            (uint)*(byte *)(uVar3 + 1 + param_1)) * in_XMM2_Da +
           (float)*(byte *)(uVar3 + param_1) * in_XMM0_Da;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}

