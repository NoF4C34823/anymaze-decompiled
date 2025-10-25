
void FUN_14072a526(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  
  fStack00000000000000d0 = in_XMM1._0_4_;
  fStack00000000000000c8 = in_XMM2._0_4_;
  fStack00000000000000c0 = in_XMM0._0_4_;
  do {
    auVar7 = pmovzxbw(in_XMM1,*(undefined8 *)((in_RAX - 6) + param_1));
    auVar14 = pmovzxbw(unaff_XMM7,*(undefined8 *)(in_RAX + 6 + param_1));
    auVar10 = pmovzxbw(unaff_XMM6,*(undefined8 *)(in_RAX + 2 + param_1));
    auVar6._0_2_ = auVar7._0_2_ + auVar14._0_2_;
    auVar6._2_2_ = auVar7._2_2_ + auVar14._2_2_;
    auVar6._4_2_ = auVar7._4_2_ + auVar14._4_2_;
    auVar6._6_2_ = auVar7._6_2_ + auVar14._6_2_;
    auVar6._8_2_ = auVar7._8_2_ + auVar14._8_2_;
    auVar6._10_2_ = auVar7._10_2_ + auVar14._10_2_;
    auVar6._12_2_ = auVar7._12_2_ + auVar14._12_2_;
    auVar6._14_2_ = auVar7._14_2_ + auVar14._14_2_;
    auVar8 = pmovzxbw(in_XMM2,*(undefined8 *)(in_RAX + 0xe + param_1));
    auVar7 = pmovzxwd(in_XMM0,auVar6);
    auVar12._0_2_ = auVar10._0_2_ + auVar8._0_2_;
    auVar12._2_2_ = auVar10._2_2_ + auVar8._2_2_;
    auVar12._4_2_ = auVar10._4_2_ + auVar8._4_2_;
    auVar12._6_2_ = auVar10._6_2_ + auVar8._6_2_;
    auVar12._8_2_ = auVar10._8_2_ + auVar8._8_2_;
    auVar12._10_2_ = auVar10._10_2_ + auVar8._10_2_;
    auVar12._12_2_ = auVar10._12_2_ + auVar8._12_2_;
    auVar12._14_2_ = auVar10._14_2_ + auVar8._14_2_;
    auVar10 = pmovzxwd(auVar6 >> 0x40,auVar6 >> 0x40);
    auVar9 = pmovzxbw(auVar8,*(undefined8 *)((in_RAX - 3) + param_1));
    auVar15 = pmovzxwd(auVar14,auVar12);
    auVar8 = pmovzxbw(auVar10,*(undefined8 *)(in_RAX + 3 + param_1));
    auVar11 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
    auVar6 = pmovzxbw(auVar7,*(undefined8 *)(in_RAX + 5 + param_1));
    auVar12 = pmovzxbw(auVar11,*(undefined8 *)(in_RAX + 0xb + param_1));
    auVar14._0_2_ = auVar9._0_2_ + auVar8._0_2_;
    auVar14._2_2_ = auVar9._2_2_ + auVar8._2_2_;
    auVar14._4_2_ = auVar9._4_2_ + auVar8._4_2_;
    auVar14._6_2_ = auVar9._6_2_ + auVar8._6_2_;
    auVar14._8_2_ = auVar9._8_2_ + auVar8._8_2_;
    auVar14._10_2_ = auVar9._10_2_ + auVar8._10_2_;
    auVar14._12_2_ = auVar9._12_2_ + auVar8._12_2_;
    auVar14._14_2_ = auVar9._14_2_ + auVar8._14_2_;
    auVar8._0_2_ = auVar6._0_2_ + auVar12._0_2_;
    auVar8._2_2_ = auVar6._2_2_ + auVar12._2_2_;
    auVar8._4_2_ = auVar6._4_2_ + auVar12._4_2_;
    auVar8._6_2_ = auVar6._6_2_ + auVar12._6_2_;
    auVar8._8_2_ = auVar6._8_2_ + auVar12._8_2_;
    auVar8._10_2_ = auVar6._10_2_ + auVar12._10_2_;
    auVar8._12_2_ = auVar6._12_2_ + auVar12._12_2_;
    auVar8._14_2_ = auVar6._14_2_ + auVar12._14_2_;
    auVar13 = pmovzxwd(auVar12,auVar14);
    auVar9 = pmovzxwd(auVar14 >> 0x40,auVar14 >> 0x40);
    auVar14 = pmovzxwd(auVar9,auVar8);
    auVar6 = pmovzxwd(auVar8 >> 0x40,auVar8 >> 0x40);
    auVar8 = pmovzxbw(auVar6,*(undefined8 *)(in_RAX + param_1));
    unaff_XMM7 = pmovzxwd(auVar15,auVar8);
    auVar8 = pmovzxwd(auVar8 >> 0x40,auVar8 >> 0x40);
    auVar12 = pmovzxbw(auVar14,*(undefined8 *)(in_RAX + 8 + param_1));
    in_XMM0 = pmovzxwd(auVar8,auVar12);
    in_XMM2 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
    in_XMM1._0_4_ = (float)in_XMM0._0_4_ * fStack00000000000000c0;
    in_XMM1._4_4_ = (float)in_XMM0._4_4_ * fStack00000000000000c0;
    in_XMM1._8_4_ = (float)in_XMM0._8_4_ * fStack00000000000000c0;
    in_XMM1._12_4_ = (float)in_XMM0._12_4_ * fStack00000000000000c0;
    unaff_XMM6._0_4_ = (float)in_XMM2._0_4_ * fStack00000000000000c0;
    unaff_XMM6._4_4_ = (float)in_XMM2._4_4_ * fStack00000000000000c0;
    unaff_XMM6._8_4_ = (float)in_XMM2._8_4_ * fStack00000000000000c0;
    unaff_XMM6._12_4_ = (float)in_XMM2._12_4_ * fStack00000000000000c0;
    pfVar1 = (float *)(param_4 + in_RAX * 4);
    *pfVar1 = (float)auVar7._0_4_ * fStack00000000000000d0 +
              (float)auVar13._0_4_ * fStack00000000000000c8 +
              (float)unaff_XMM7._0_4_ * fStack00000000000000c0;
    pfVar1[1] = (float)auVar7._4_4_ * fStack00000000000000d0 +
                (float)auVar13._4_4_ * fStack00000000000000c8 +
                (float)unaff_XMM7._4_4_ * fStack00000000000000c0;
    pfVar1[2] = (float)auVar7._8_4_ * fStack00000000000000d0 +
                (float)auVar13._8_4_ * fStack00000000000000c8 +
                (float)unaff_XMM7._8_4_ * fStack00000000000000c0;
    pfVar1[3] = (float)auVar7._12_4_ * fStack00000000000000d0 +
                (float)auVar13._12_4_ * fStack00000000000000c8 +
                (float)unaff_XMM7._12_4_ * fStack00000000000000c0;
    pfVar1 = (float *)(param_4 + 0x10 + in_RAX * 4);
    *pfVar1 = (float)auVar10._0_4_ * fStack00000000000000d0 +
              (float)auVar9._0_4_ * fStack00000000000000c8 +
              (float)auVar8._0_4_ * fStack00000000000000c0;
    pfVar1[1] = (float)auVar10._4_4_ * fStack00000000000000d0 +
                (float)auVar9._4_4_ * fStack00000000000000c8 +
                (float)auVar8._4_4_ * fStack00000000000000c0;
    pfVar1[2] = (float)auVar10._8_4_ * fStack00000000000000d0 +
                (float)auVar9._8_4_ * fStack00000000000000c8 +
                (float)auVar8._8_4_ * fStack00000000000000c0;
    pfVar1[3] = (float)auVar10._12_4_ * fStack00000000000000d0 +
                (float)auVar9._12_4_ * fStack00000000000000c8 +
                (float)auVar8._12_4_ * fStack00000000000000c0;
    pfVar1 = (float *)(param_4 + 0x20 + in_RAX * 4);
    *pfVar1 = (float)auVar15._0_4_ * fStack00000000000000d0 +
              (float)auVar14._0_4_ * fStack00000000000000c8 + in_XMM1._0_4_;
    pfVar1[1] = (float)auVar15._4_4_ * fStack00000000000000d0 +
                (float)auVar14._4_4_ * fStack00000000000000c8 + in_XMM1._4_4_;
    pfVar1[2] = (float)auVar15._8_4_ * fStack00000000000000d0 +
                (float)auVar14._8_4_ * fStack00000000000000c8 + in_XMM1._8_4_;
    pfVar1[3] = (float)auVar15._12_4_ * fStack00000000000000d0 +
                (float)auVar14._12_4_ * fStack00000000000000c8 + in_XMM1._12_4_;
    pfVar1 = (float *)(param_4 + 0x30 + in_RAX * 4);
    *pfVar1 = (float)auVar11._0_4_ * fStack00000000000000d0 +
              (float)auVar6._0_4_ * fStack00000000000000c8 + unaff_XMM6._0_4_;
    pfVar1[1] = (float)auVar11._4_4_ * fStack00000000000000d0 +
                (float)auVar6._4_4_ * fStack00000000000000c8 + unaff_XMM6._4_4_;
    pfVar1[2] = (float)auVar11._8_4_ * fStack00000000000000d0 +
                (float)auVar6._8_4_ * fStack00000000000000c8 + unaff_XMM6._8_4_;
    pfVar1[3] = (float)auVar11._12_4_ * fStack00000000000000d0 +
                (float)auVar6._12_4_ * fStack00000000000000c8 + unaff_XMM6._12_4_;
    in_RAX = in_RAX + 0x10;
  } while (in_RAX < unaff_RDI);
  if (unaff_RDI + 1 <= param_3) {
    param_3 = param_3 - unaff_RDI;
    if ((longlong)param_3 < 4) {
      FUN_14072aa13(param_1,0);
      return;
    }
    uVar5 = 0;
    puVar4 = (uint *)(param_1 + unaff_RDI);
    uVar3 = param_3 & 0xfffffffffffffffc;
    do {
      auVar7 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -6)),
                        ZEXT416(*(uint *)((longlong)puVar4 + -6)));
      auVar6 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 6)),
                        ZEXT416(*(uint *)((longlong)puVar4 + 6)));
      auVar10._0_2_ = auVar7._0_2_ + auVar6._0_2_;
      auVar10._2_2_ = auVar7._2_2_ + auVar6._2_2_;
      auVar10._4_2_ = auVar7._4_2_ + auVar6._4_2_;
      auVar10._6_2_ = auVar7._6_2_ + auVar6._6_2_;
      auVar10._8_2_ = auVar7._8_2_ + auVar6._8_2_;
      auVar10._10_2_ = auVar7._10_2_ + auVar6._10_2_;
      auVar10._12_2_ = auVar7._12_2_ + auVar6._12_2_;
      auVar10._14_2_ = auVar7._14_2_ + auVar6._14_2_;
      auVar7 = pmovzxwd(auVar10,auVar10);
      auVar8 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + 3)),
                        ZEXT416(*(uint *)((longlong)puVar4 + 3)));
      auVar6 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar4 + -3)),
                        ZEXT416(*(uint *)((longlong)puVar4 + -3)));
      auVar9._0_2_ = auVar6._0_2_ + auVar8._0_2_;
      auVar9._2_2_ = auVar6._2_2_ + auVar8._2_2_;
      auVar9._4_2_ = auVar6._4_2_ + auVar8._4_2_;
      auVar9._6_2_ = auVar6._6_2_ + auVar8._6_2_;
      auVar9._8_2_ = auVar6._8_2_ + auVar8._8_2_;
      auVar9._10_2_ = auVar6._10_2_ + auVar8._10_2_;
      auVar9._12_2_ = auVar6._12_2_ + auVar8._12_2_;
      auVar9._14_2_ = auVar6._14_2_ + auVar8._14_2_;
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      auVar6 = pmovzxwd(auVar9,auVar9);
      auVar8 = pmovzxbw(ZEXT416(uVar2),ZEXT416(uVar2));
      auVar8 = pmovzxwd(auVar8,auVar8);
      pfVar1 = (float *)(param_4 + unaff_RDI * 4 + uVar5 * 4);
      *pfVar1 = (float)auVar7._0_4_ * fStack00000000000000d0 +
                (float)auVar6._0_4_ * fStack00000000000000c8 +
                (float)auVar8._0_4_ * fStack00000000000000c0;
      pfVar1[1] = (float)auVar7._4_4_ * fStack00000000000000d0 +
                  (float)auVar6._4_4_ * fStack00000000000000c8 +
                  (float)auVar8._4_4_ * fStack00000000000000c0;
      pfVar1[2] = (float)auVar7._8_4_ * fStack00000000000000d0 +
                  (float)auVar6._8_4_ * fStack00000000000000c8 +
                  (float)auVar8._8_4_ * fStack00000000000000c0;
      pfVar1[3] = (float)auVar7._12_4_ * fStack00000000000000d0 +
                  (float)auVar6._12_4_ * fStack00000000000000c8 +
                  (float)auVar8._12_4_ * fStack00000000000000c0;
      uVar5 = uVar5 + 4;
    } while (uVar5 < uVar3);
    if (uVar3 < param_3) {
      param_1 = param_1 + unaff_RDI;
      do {
        *(float *)(param_4 + unaff_RDI * 4 + uVar3 * 4) =
             (float)((uint)*(byte *)((uVar3 - 6) + param_1) + (uint)*(byte *)(uVar3 + 6 + param_1))
             * fStack00000000000000d0 +
             (float)((uint)*(byte *)((uVar3 - 3) + param_1) + (uint)*(byte *)(uVar3 + 3 + param_1))
             * fStack00000000000000c8 + (float)*(byte *)(uVar3 + param_1) * fStack00000000000000c0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
  }
  return;
}

