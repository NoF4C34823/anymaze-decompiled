
void FUN_14072a33f(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong in_R9;
  uint *puVar4;
  ulonglong uVar5;
  float in_XMM0_Da;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (unaff_RDI + 1U <= param_3) {
    param_3 = param_3 - unaff_RDI;
    if ((longlong)param_3 < 4) {
      uVar3 = 0;
    }
    else {
      uVar5 = 0;
      puVar4 = (uint *)(param_1 + unaff_RDI);
      uVar3 = param_3 & 0xfffffffffffffffc;
      do {
        auVar7 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -3)),
                          ZEXT416(*(uint *)((longlong)puVar4 + -3)));
        auVar6 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 3)),
                          ZEXT416(*(uint *)((longlong)puVar4 + 3)));
        auVar8._0_2_ = auVar7._0_2_ + auVar6._0_2_;
        auVar8._2_2_ = auVar7._2_2_ + auVar6._2_2_;
        auVar8._4_2_ = auVar7._4_2_ + auVar6._4_2_;
        auVar8._6_2_ = auVar7._6_2_ + auVar6._6_2_;
        auVar8._8_2_ = auVar7._8_2_ + auVar6._8_2_;
        auVar8._10_2_ = auVar7._10_2_ + auVar6._10_2_;
        auVar8._12_2_ = auVar7._12_2_ + auVar6._12_2_;
        auVar8._14_2_ = auVar7._14_2_ + auVar6._14_2_;
        auVar6 = pmovzxwd(auVar8,auVar8);
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        auVar7 = pmovzxbw(ZEXT416(uVar2),ZEXT416(uVar2));
        auVar7 = pmovzxwd(auVar7,auVar7);
        pfVar1 = (float *)(in_R9 + unaff_RDI * 4 + uVar5 * 4);
        *pfVar1 = (float)auVar6._0_4_ * (float)param_2 + (float)auVar7._0_4_ * (float)param_4;
        pfVar1[1] = (float)auVar6._4_4_ * (float)((ulonglong)param_2 >> 0x20) +
                    (float)auVar7._4_4_ * (float)((ulonglong)param_4 >> 0x20);
        pfVar1[2] = (float)auVar6._8_4_ * in_XMM1_Dc + (float)auVar7._8_4_ * in_XMM3_Dc;
        pfVar1[3] = (float)auVar6._12_4_ * in_XMM1_Dd + (float)auVar7._12_4_ * in_XMM3_Dd;
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar3);
    }
    if (uVar3 < param_3) {
      param_1 = param_1 + unaff_RDI;
      do {
        *(float *)(in_R9 + unaff_RDI * 4 + uVar3 * 4) =
             (float)((uint)*(byte *)((uVar3 - 3) + param_1) + (uint)*(byte *)(uVar3 + 3 + param_1))
             * in_XMM2_Da + (float)*(byte *)(uVar3 + param_1) * in_XMM0_Da;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
  }
  return;
}

