
void FUN_14074e4c0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar8 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)uVar8 < 1) {
    return;
  }
  if (0xf < (longlong)uVar8) {
    uVar5 = param_2 & 0xf;
    if (uVar5 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14074e8c4;
      uVar5 = 0x10 - uVar5 >> 2;
    }
    if ((longlong)(uVar5 + 0x10) <= (longlong)uVar8) {
      uVar6 = 0;
      uVar7 = uVar8 - (uVar8 - uVar5 & 0xf);
      if (uVar5 != 0) {
        do {
          *(float *)(param_2 + uVar6 * 4) =
               (float)((uint)*(byte *)((uVar6 - 3) + param_1) + (uint)*(byte *)(uVar6 + 3 + param_1)
                      ) * fVar2 + (float)*(byte *)(uVar6 + param_1) * fVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      if ((param_1 + uVar5 & 0xf) == 0) {
        do {
          auVar12 = pmovzxbw(unaff_XMM6,*(undefined8 *)((uVar5 - 3) + param_1));
          auVar10 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar5 + 3 + param_1));
          auVar13 = pmovzxbw(unaff_XMM7,*(undefined8 *)(uVar5 + 5 + param_1));
          auVar15._0_2_ = auVar12._0_2_ + auVar10._0_2_;
          auVar15._2_2_ = auVar12._2_2_ + auVar10._2_2_;
          auVar15._4_2_ = auVar12._4_2_ + auVar10._4_2_;
          auVar15._6_2_ = auVar12._6_2_ + auVar10._6_2_;
          auVar15._8_2_ = auVar12._8_2_ + auVar10._8_2_;
          auVar15._10_2_ = auVar12._10_2_ + auVar10._10_2_;
          auVar15._12_2_ = auVar12._12_2_ + auVar10._12_2_;
          auVar15._14_2_ = auVar12._14_2_ + auVar10._14_2_;
          auVar11 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar5 + 0xb + param_1));
          auVar10 = pmovzxwd(auVar10,auVar15);
          auVar17._0_2_ = auVar13._0_2_ + auVar11._0_2_;
          auVar17._2_2_ = auVar13._2_2_ + auVar11._2_2_;
          auVar17._4_2_ = auVar13._4_2_ + auVar11._4_2_;
          auVar17._6_2_ = auVar13._6_2_ + auVar11._6_2_;
          auVar17._8_2_ = auVar13._8_2_ + auVar11._8_2_;
          auVar17._10_2_ = auVar13._10_2_ + auVar11._10_2_;
          auVar17._12_2_ = auVar13._12_2_ + auVar11._12_2_;
          auVar17._14_2_ = auVar13._14_2_ + auVar11._14_2_;
          auVar12 = pmovzxbw(auVar10,*(undefined8 *)(uVar5 + param_1));
          auVar13 = pmovzxwd(auVar15 >> 0x40,auVar15 >> 0x40);
          auVar11 = pmovzxwd(auVar11,auVar17);
          auVar14 = pmovzxbw(auVar13,*(undefined8 *)(uVar5 + 8 + param_1));
          auVar17 = pmovzxwd(auVar17 >> 0x40,auVar17 >> 0x40);
          auVar15 = pmovzxwd(auVar11,auVar12);
          auVar12 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
          in_XMM5 = pmovzxwd(auVar15,auVar14);
          unaff_XMM6 = pmovzxwd(auVar14 >> 0x40,auVar14 >> 0x40);
          unaff_XMM7._0_4_ = (float)auVar15._0_4_ * fVar3;
          unaff_XMM7._4_4_ = (float)auVar15._4_4_ * fVar3;
          unaff_XMM7._8_4_ = (float)auVar15._8_4_ * fVar3;
          unaff_XMM7._12_4_ = (float)auVar15._12_4_ * fVar3;
          in_XMM4._0_4_ = (float)auVar12._0_4_ * fVar3;
          in_XMM4._4_4_ = (float)auVar12._4_4_ * fVar3;
          in_XMM4._8_4_ = (float)auVar12._8_4_ * fVar3;
          in_XMM4._12_4_ = (float)auVar12._12_4_ * fVar3;
          pfVar1 = (float *)(param_2 + uVar5 * 4);
          *pfVar1 = (float)auVar10._0_4_ * fVar2 + unaff_XMM7._0_4_;
          pfVar1[1] = (float)auVar10._4_4_ * fVar2 + unaff_XMM7._4_4_;
          pfVar1[2] = (float)auVar10._8_4_ * fVar2 + unaff_XMM7._8_4_;
          pfVar1[3] = (float)auVar10._12_4_ * fVar2 + unaff_XMM7._12_4_;
          pfVar1 = (float *)(param_2 + 0x10 + uVar5 * 4);
          *pfVar1 = (float)auVar13._0_4_ * fVar2 + in_XMM4._0_4_;
          pfVar1[1] = (float)auVar13._4_4_ * fVar2 + in_XMM4._4_4_;
          pfVar1[2] = (float)auVar13._8_4_ * fVar2 + in_XMM4._8_4_;
          pfVar1[3] = (float)auVar13._12_4_ * fVar2 + in_XMM4._12_4_;
          pfVar1 = (float *)(param_2 + 0x20 + uVar5 * 4);
          *pfVar1 = (float)auVar11._0_4_ * fVar2 + (float)in_XMM5._0_4_ * fVar3;
          pfVar1[1] = (float)auVar11._4_4_ * fVar2 + (float)in_XMM5._4_4_ * fVar3;
          pfVar1[2] = (float)auVar11._8_4_ * fVar2 + (float)in_XMM5._8_4_ * fVar3;
          pfVar1[3] = (float)auVar11._12_4_ * fVar2 + (float)in_XMM5._12_4_ * fVar3;
          pfVar1 = (float *)(param_2 + 0x30 + uVar5 * 4);
          *pfVar1 = (float)auVar17._0_4_ * fVar2 + (float)unaff_XMM6._0_4_ * fVar3;
          pfVar1[1] = (float)auVar17._4_4_ * fVar2 + (float)unaff_XMM6._4_4_ * fVar3;
          pfVar1[2] = (float)auVar17._8_4_ * fVar2 + (float)unaff_XMM6._8_4_ * fVar3;
          pfVar1[3] = (float)auVar17._12_4_ * fVar2 + (float)unaff_XMM6._12_4_ * fVar3;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar7);
      }
      else {
        do {
          auVar12 = pmovzxbw(unaff_XMM6,*(undefined8 *)((uVar5 - 3) + param_1));
          auVar10 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar5 + 3 + param_1));
          auVar15 = pmovzxbw(unaff_XMM7,*(undefined8 *)(uVar5 + 5 + param_1));
          auVar13._0_2_ = auVar12._0_2_ + auVar10._0_2_;
          auVar13._2_2_ = auVar12._2_2_ + auVar10._2_2_;
          auVar13._4_2_ = auVar12._4_2_ + auVar10._4_2_;
          auVar13._6_2_ = auVar12._6_2_ + auVar10._6_2_;
          auVar13._8_2_ = auVar12._8_2_ + auVar10._8_2_;
          auVar13._10_2_ = auVar12._10_2_ + auVar10._10_2_;
          auVar13._12_2_ = auVar12._12_2_ + auVar10._12_2_;
          auVar13._14_2_ = auVar12._14_2_ + auVar10._14_2_;
          auVar11 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar5 + 0xb + param_1));
          auVar10 = pmovzxwd(auVar10,auVar13);
          auVar16._0_2_ = auVar15._0_2_ + auVar11._0_2_;
          auVar16._2_2_ = auVar15._2_2_ + auVar11._2_2_;
          auVar16._4_2_ = auVar15._4_2_ + auVar11._4_2_;
          auVar16._6_2_ = auVar15._6_2_ + auVar11._6_2_;
          auVar16._8_2_ = auVar15._8_2_ + auVar11._8_2_;
          auVar16._10_2_ = auVar15._10_2_ + auVar11._10_2_;
          auVar16._12_2_ = auVar15._12_2_ + auVar11._12_2_;
          auVar16._14_2_ = auVar15._14_2_ + auVar11._14_2_;
          auVar12 = pmovzxbw(auVar10,*(undefined8 *)(uVar5 + param_1));
          auVar13 = pmovzxwd(auVar13 >> 0x40,auVar13 >> 0x40);
          auVar11 = pmovzxwd(auVar11,auVar16);
          auVar14 = pmovzxbw(auVar13,*(undefined8 *)(uVar5 + 8 + param_1));
          auVar17 = pmovzxwd(auVar16 >> 0x40,auVar16 >> 0x40);
          auVar15 = pmovzxwd(auVar11,auVar12);
          auVar12 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
          in_XMM5 = pmovzxwd(auVar15,auVar14);
          unaff_XMM6 = pmovzxwd(auVar14 >> 0x40,auVar14 >> 0x40);
          unaff_XMM7._0_4_ = (float)auVar15._0_4_ * fVar3;
          unaff_XMM7._4_4_ = (float)auVar15._4_4_ * fVar3;
          unaff_XMM7._8_4_ = (float)auVar15._8_4_ * fVar3;
          unaff_XMM7._12_4_ = (float)auVar15._12_4_ * fVar3;
          in_XMM4._0_4_ = (float)auVar12._0_4_ * fVar3;
          in_XMM4._4_4_ = (float)auVar12._4_4_ * fVar3;
          in_XMM4._8_4_ = (float)auVar12._8_4_ * fVar3;
          in_XMM4._12_4_ = (float)auVar12._12_4_ * fVar3;
          pfVar1 = (float *)(param_2 + uVar5 * 4);
          *pfVar1 = (float)auVar10._0_4_ * fVar2 + unaff_XMM7._0_4_;
          pfVar1[1] = (float)auVar10._4_4_ * fVar2 + unaff_XMM7._4_4_;
          pfVar1[2] = (float)auVar10._8_4_ * fVar2 + unaff_XMM7._8_4_;
          pfVar1[3] = (float)auVar10._12_4_ * fVar2 + unaff_XMM7._12_4_;
          pfVar1 = (float *)(param_2 + 0x10 + uVar5 * 4);
          *pfVar1 = (float)auVar13._0_4_ * fVar2 + in_XMM4._0_4_;
          pfVar1[1] = (float)auVar13._4_4_ * fVar2 + in_XMM4._4_4_;
          pfVar1[2] = (float)auVar13._8_4_ * fVar2 + in_XMM4._8_4_;
          pfVar1[3] = (float)auVar13._12_4_ * fVar2 + in_XMM4._12_4_;
          pfVar1 = (float *)(param_2 + 0x20 + uVar5 * 4);
          *pfVar1 = (float)auVar11._0_4_ * fVar2 + (float)in_XMM5._0_4_ * fVar3;
          pfVar1[1] = (float)auVar11._4_4_ * fVar2 + (float)in_XMM5._4_4_ * fVar3;
          pfVar1[2] = (float)auVar11._8_4_ * fVar2 + (float)in_XMM5._8_4_ * fVar3;
          pfVar1[3] = (float)auVar11._12_4_ * fVar2 + (float)in_XMM5._12_4_ * fVar3;
          pfVar1 = (float *)(param_2 + 0x30 + uVar5 * 4);
          *pfVar1 = (float)auVar17._0_4_ * fVar2 + (float)unaff_XMM6._0_4_ * fVar3;
          pfVar1[1] = (float)auVar17._4_4_ * fVar2 + (float)unaff_XMM6._4_4_ * fVar3;
          pfVar1[2] = (float)auVar17._8_4_ * fVar2 + (float)unaff_XMM6._8_4_ * fVar3;
          pfVar1[3] = (float)auVar17._12_4_ * fVar2 + (float)unaff_XMM6._12_4_ * fVar3;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar7);
      }
      if (uVar8 < uVar7 + 1) {
        return;
      }
      uVar8 = uVar8 - uVar7;
      if ((longlong)uVar8 < 4) {
        uVar5 = 0;
      }
      else {
        uVar6 = 0;
        puVar9 = (uint *)(param_1 + uVar7);
        uVar5 = uVar8 & 0xfffffffffffffffc;
        do {
          auVar12 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar9 + -3)),
                             ZEXT416(*(uint *)((longlong)puVar9 + -3)));
          auVar10 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar9 + 3)),
                             ZEXT416(*(uint *)((longlong)puVar9 + 3)));
          auVar11._0_2_ = auVar12._0_2_ + auVar10._0_2_;
          auVar11._2_2_ = auVar12._2_2_ + auVar10._2_2_;
          auVar11._4_2_ = auVar12._4_2_ + auVar10._4_2_;
          auVar11._6_2_ = auVar12._6_2_ + auVar10._6_2_;
          auVar11._8_2_ = auVar12._8_2_ + auVar10._8_2_;
          auVar11._10_2_ = auVar12._10_2_ + auVar10._10_2_;
          auVar11._12_2_ = auVar12._12_2_ + auVar10._12_2_;
          auVar11._14_2_ = auVar12._14_2_ + auVar10._14_2_;
          auVar10 = pmovzxwd(auVar11,auVar11);
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          auVar12 = pmovzxbw(ZEXT416(uVar4),ZEXT416(uVar4));
          auVar12 = pmovzxwd(auVar12,auVar12);
          pfVar1 = (float *)(param_2 + uVar7 * 4 + uVar6 * 4);
          *pfVar1 = (float)auVar10._0_4_ * fVar2 + (float)auVar12._0_4_ * fVar3;
          pfVar1[1] = (float)auVar10._4_4_ * fVar2 + (float)auVar12._4_4_ * fVar3;
          pfVar1[2] = (float)auVar10._8_4_ * fVar2 + (float)auVar12._8_4_ * fVar3;
          pfVar1[3] = (float)auVar10._12_4_ * fVar2 + (float)auVar12._12_4_ * fVar3;
          uVar6 = uVar6 + 4;
        } while (uVar6 < uVar5);
      }
      goto LAB_14074e86f;
    }
  }
LAB_14074e8c4:
  uVar7 = 0;
  uVar5 = 0;
  if (uVar8 == 0) {
    return;
  }
LAB_14074e86f:
  if (uVar5 < uVar8) {
    param_1 = param_1 + uVar7;
    do {
      *(float *)(param_2 + uVar7 * 4 + uVar5 * 4) =
           (float)((uint)*(byte *)((uVar5 - 3) + param_1) + (uint)*(byte *)(uVar5 + 3 + param_1)) *
           fVar2 + (float)*(byte *)(uVar5 + param_1) * fVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar8);
  }
  return;
}

