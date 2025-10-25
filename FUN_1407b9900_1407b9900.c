
void FUN_1407b9900(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  fVar3 = *(float *)*param_4;
  fVar4 = *(float *)(*param_4 + 4);
  fVar5 = *(float *)(*param_4 + 8);
  auVar19 = ZEXT416((uint)fVar5);
  fVar6 = *(float *)(*param_4 + 0xc);
  auVar7 = *param_4;
  auVar13 = *param_4;
  auVar12 = *param_4;
  auVar16 = ZEXT416((uint)fVar6);
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1407b9f12:
    uVar10 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar8 = param_2 & 0xf;
    if (uVar8 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407b9f12;
      uVar8 = 0x10 - uVar8 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar8 + 0x10)) goto LAB_1407b9f12;
    uVar9 = 0;
    uVar10 = param_3 - (param_3 - uVar8 & 0xf);
    if (uVar8 != 0) {
      do {
        auVar14._0_4_ =
             (float)((uint)*(byte *)((uVar9 - 3) + param_1) + (uint)*(byte *)(uVar9 + 3 + param_1));
        auVar14._4_4_ =
             (float)((uint)*(byte *)((uVar9 - 2) + param_1) + (uint)*(byte *)(uVar9 + 2 + param_1));
        auVar14._12_4_ = (float)*(byte *)(uVar9 + param_1);
        auVar14._8_4_ =
             (float)((uint)*(byte *)((uVar9 - 1) + param_1) + (uint)*(byte *)(uVar9 + 1 + param_1));
        in_XMM0 = dpps(auVar13,auVar14,0xf1);
        *(int *)(param_2 + uVar9 * 4) = in_XMM0._0_4_;
        uVar9 = uVar9 + 1;
        in_XMM2 = auVar12;
      } while (uVar9 < uVar8);
    }
    auVar13 = ZEXT416((uint)fVar3);
    auVar26._4_4_ = fVar4;
    auVar26._0_4_ = fVar4;
    auVar26._8_4_ = fVar4;
    auVar26._12_4_ = fVar4;
    auVar24._4_4_ = fVar5;
    auVar24._0_4_ = fVar5;
    auVar24._8_4_ = fVar5;
    auVar24._12_4_ = fVar5;
    auVar12 = auVar26;
    do {
      auVar14 = pmovzxbw(in_XMM2,*(undefined8 *)((uVar8 - 3) + param_1));
      auVar27 = pmovzxbw(auVar12,*(undefined8 *)(uVar8 + 3 + param_1));
      auVar28._0_2_ = auVar14._0_2_ + auVar27._0_2_;
      auVar28._2_2_ = auVar14._2_2_ + auVar27._2_2_;
      auVar28._4_2_ = auVar14._4_2_ + auVar27._4_2_;
      auVar28._6_2_ = auVar14._6_2_ + auVar27._6_2_;
      auVar28._8_2_ = auVar14._8_2_ + auVar27._8_2_;
      auVar28._10_2_ = auVar14._10_2_ + auVar27._10_2_;
      auVar28._12_2_ = auVar14._12_2_ + auVar27._12_2_;
      auVar28._14_2_ = auVar14._14_2_ + auVar27._14_2_;
      auVar12 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar8 + 2 + param_1));
      auVar21 = pmovzxwd(auVar19,auVar28);
      auVar19 = pmovzxbw(auVar16,*(undefined8 *)(uVar8 + 5 + param_1));
      auVar15 = pmovzxwd(auVar28 >> 0x40,auVar28 >> 0x40);
      auVar24 = pmovzxbw(auVar24,*(undefined8 *)(uVar8 + 0xb + param_1));
      auVar16 = pmovzxbw(auVar15,*(undefined8 *)((uVar8 - 2) + param_1));
      auVar14 = pmovzxbw(auVar21,*(undefined8 *)(uVar8 + 6 + param_1));
      auVar28 = pmovzxbw(auVar27,*(undefined8 *)(uVar8 + 10 + param_1));
      auVar27._0_2_ = auVar16._0_2_ + auVar12._0_2_;
      auVar27._2_2_ = auVar16._2_2_ + auVar12._2_2_;
      auVar27._4_2_ = auVar16._4_2_ + auVar12._4_2_;
      auVar27._6_2_ = auVar16._6_2_ + auVar12._6_2_;
      auVar27._8_2_ = auVar16._8_2_ + auVar12._8_2_;
      auVar27._10_2_ = auVar16._10_2_ + auVar12._10_2_;
      auVar27._12_2_ = auVar16._12_2_ + auVar12._12_2_;
      auVar27._14_2_ = auVar16._14_2_ + auVar12._14_2_;
      auVar20._0_2_ = auVar19._0_2_ + auVar24._0_2_;
      auVar20._2_2_ = auVar19._2_2_ + auVar24._2_2_;
      auVar20._4_2_ = auVar19._4_2_ + auVar24._4_2_;
      auVar20._6_2_ = auVar19._6_2_ + auVar24._6_2_;
      auVar20._8_2_ = auVar19._8_2_ + auVar24._8_2_;
      auVar20._10_2_ = auVar19._10_2_ + auVar24._10_2_;
      auVar20._12_2_ = auVar19._12_2_ + auVar24._12_2_;
      auVar20._14_2_ = auVar19._14_2_ + auVar24._14_2_;
      auVar25 = pmovzxwd(auVar24,auVar27);
      auVar22._0_2_ = auVar14._0_2_ + auVar28._0_2_;
      auVar22._2_2_ = auVar14._2_2_ + auVar28._2_2_;
      auVar22._4_2_ = auVar14._4_2_ + auVar28._4_2_;
      auVar22._6_2_ = auVar14._6_2_ + auVar28._6_2_;
      auVar22._8_2_ = auVar14._8_2_ + auVar28._8_2_;
      auVar22._10_2_ = auVar14._10_2_ + auVar28._10_2_;
      auVar22._12_2_ = auVar14._12_2_ + auVar28._12_2_;
      auVar22._14_2_ = auVar14._14_2_ + auVar28._14_2_;
      auVar29 = pmovzxbw(auVar28,*(undefined8 *)(uVar8 + 1 + param_1));
      auVar28 = pmovzxwd(auVar13,auVar20);
      auVar14 = pmovzxwd(auVar12,auVar22);
      auVar17 = pmovzxwd(auVar27 >> 0x40,auVar27 >> 0x40);
      auVar22 = pmovzxwd(auVar22 >> 0x40,auVar22 >> 0x40);
      auVar20 = pmovzxwd(auVar20 >> 0x40,auVar20 >> 0x40);
      auVar13 = pmovzxbw(auVar28,*(undefined8 *)((uVar8 - 1) + param_1));
      auVar12 = pmovzxbw(auVar14,*(undefined8 *)(uVar8 + 9 + param_1));
      auVar16 = pmovzxbw(auVar17,*(undefined8 *)(uVar8 + 7 + param_1));
      auVar19._0_2_ = auVar13._0_2_ + auVar29._0_2_;
      auVar19._2_2_ = auVar13._2_2_ + auVar29._2_2_;
      auVar19._4_2_ = auVar13._4_2_ + auVar29._4_2_;
      auVar19._6_2_ = auVar13._6_2_ + auVar29._6_2_;
      auVar19._8_2_ = auVar13._8_2_ + auVar29._8_2_;
      auVar19._10_2_ = auVar13._10_2_ + auVar29._10_2_;
      auVar19._12_2_ = auVar13._12_2_ + auVar29._12_2_;
      auVar19._14_2_ = auVar13._14_2_ + auVar29._14_2_;
      auVar18._0_2_ = auVar16._0_2_ + auVar12._0_2_;
      auVar18._2_2_ = auVar16._2_2_ + auVar12._2_2_;
      auVar18._4_2_ = auVar16._4_2_ + auVar12._4_2_;
      auVar18._6_2_ = auVar16._6_2_ + auVar12._6_2_;
      auVar18._8_2_ = auVar16._8_2_ + auVar12._8_2_;
      auVar18._10_2_ = auVar16._10_2_ + auVar12._10_2_;
      auVar18._12_2_ = auVar16._12_2_ + auVar12._12_2_;
      auVar18._14_2_ = auVar16._14_2_ + auVar12._14_2_;
      auVar13 = pmovzxwd(auVar12,auVar19);
      auVar12 = pmovzxwd(auVar19 >> 0x40,auVar19 >> 0x40);
      auVar27 = pmovzxwd(auVar12,auVar18);
      auVar18 = pmovzxwd(auVar18 >> 0x40,auVar18 >> 0x40);
      auVar23._0_4_ = (float)auVar12._0_4_ * fVar5;
      auVar23._4_4_ = (float)auVar12._4_4_ * fVar5;
      auVar23._8_4_ = (float)auVar12._8_4_ * fVar5;
      auVar23._12_4_ = (float)auVar12._12_4_ * fVar5;
      auVar16 = pmovzxbw(auVar23,*(undefined8 *)(uVar8 + param_1));
      auVar12 = pmovzxwd(auVar20,auVar16);
      auVar19 = pmovzxwd(auVar16 >> 0x40,auVar16 >> 0x40);
      in_XMM2._0_4_ = (float)auVar12._0_4_ * fVar6;
      in_XMM2._4_4_ = (float)auVar12._4_4_ * fVar6;
      in_XMM2._8_4_ = (float)auVar12._8_4_ * fVar6;
      in_XMM2._12_4_ = (float)auVar12._12_4_ * fVar6;
      auVar16._0_4_ = (float)auVar19._0_4_ * fVar6;
      auVar16._4_4_ = (float)auVar19._4_4_ * fVar6;
      auVar16._8_4_ = (float)auVar19._8_4_ * fVar6;
      auVar16._12_4_ = (float)auVar19._12_4_ * fVar6;
      auVar24 = pmovzxbw(auVar26,*(undefined8 *)(uVar8 + 8 + param_1));
      auVar12 = pmovzxwd(auVar29,auVar24);
      auVar24 = pmovzxwd(auVar24 >> 0x40,auVar24 >> 0x40);
      pfVar2 = (float *)(param_2 + uVar8 * 4);
      *pfVar2 = (float)auVar21._0_4_ * fVar3 + (float)auVar25._0_4_ * fVar4 +
                (float)auVar13._0_4_ * fVar5 + in_XMM2._0_4_;
      pfVar2[1] = (float)auVar21._4_4_ * fVar3 + (float)auVar25._4_4_ * fVar4 +
                  (float)auVar13._4_4_ * fVar5 + in_XMM2._4_4_;
      pfVar2[2] = (float)auVar21._8_4_ * fVar3 + (float)auVar25._8_4_ * fVar4 +
                  (float)auVar13._8_4_ * fVar5 + in_XMM2._8_4_;
      pfVar2[3] = (float)auVar21._12_4_ * fVar3 + (float)auVar25._12_4_ * fVar4 +
                  (float)auVar13._12_4_ * fVar5 + in_XMM2._12_4_;
      pfVar2 = (float *)(param_2 + 0x10 + uVar8 * 4);
      *pfVar2 = (float)auVar15._0_4_ * fVar3 + (float)auVar17._0_4_ * fVar4 + auVar23._0_4_ +
                auVar16._0_4_;
      pfVar2[1] = (float)auVar15._4_4_ * fVar3 + (float)auVar17._4_4_ * fVar4 + auVar23._4_4_ +
                  auVar16._4_4_;
      pfVar2[2] = (float)auVar15._8_4_ * fVar3 + (float)auVar17._8_4_ * fVar4 + auVar23._8_4_ +
                  auVar16._8_4_;
      pfVar2[3] = (float)auVar15._12_4_ * fVar3 + (float)auVar17._12_4_ * fVar4 + auVar23._12_4_ +
                  auVar16._12_4_;
      auVar13._0_4_ = (float)auVar27._0_4_ * fVar5;
      auVar13._4_4_ = (float)auVar27._4_4_ * fVar5;
      auVar13._8_4_ = (float)auVar27._8_4_ * fVar5;
      auVar13._12_4_ = (float)auVar27._12_4_ * fVar5;
      in_XMM0._0_4_ = (float)auVar18._0_4_ * fVar5;
      in_XMM0._4_4_ = (float)auVar18._4_4_ * fVar5;
      in_XMM0._8_4_ = (float)auVar18._8_4_ * fVar5;
      in_XMM0._12_4_ = (float)auVar18._12_4_ * fVar5;
      pfVar2 = (float *)(param_2 + 0x20 + uVar8 * 4);
      *pfVar2 = (float)auVar28._0_4_ * fVar3 + (float)auVar14._0_4_ * fVar4 + auVar13._0_4_ +
                (float)auVar12._0_4_ * fVar6;
      pfVar2[1] = (float)auVar28._4_4_ * fVar3 + (float)auVar14._4_4_ * fVar4 + auVar13._4_4_ +
                  (float)auVar12._4_4_ * fVar6;
      pfVar2[2] = (float)auVar28._8_4_ * fVar3 + (float)auVar14._8_4_ * fVar4 + auVar13._8_4_ +
                  (float)auVar12._8_4_ * fVar6;
      pfVar2[3] = (float)auVar28._12_4_ * fVar3 + (float)auVar14._12_4_ * fVar4 + auVar13._12_4_ +
                  (float)auVar12._12_4_ * fVar6;
      pfVar2 = (float *)(param_2 + 0x30 + uVar8 * 4);
      *pfVar2 = (float)auVar20._0_4_ * fVar3 + (float)auVar22._0_4_ * fVar4 + in_XMM0._0_4_ +
                (float)auVar24._0_4_ * fVar6;
      pfVar2[1] = (float)auVar20._4_4_ * fVar3 + (float)auVar22._4_4_ * fVar4 + in_XMM0._4_4_ +
                  (float)auVar24._4_4_ * fVar6;
      pfVar2[2] = (float)auVar20._8_4_ * fVar3 + (float)auVar22._8_4_ * fVar4 + in_XMM0._8_4_ +
                  (float)auVar24._8_4_ * fVar6;
      pfVar2[3] = (float)auVar20._12_4_ * fVar3 + (float)auVar22._12_4_ * fVar4 + in_XMM0._12_4_ +
                  (float)auVar24._12_4_ * fVar6;
      uVar8 = uVar8 + 0x10;
    } while (uVar8 < uVar10);
    if (param_3 < uVar10 + 1) {
      return;
    }
    param_3 = param_3 - uVar10;
    if (3 < (longlong)param_3) {
      uVar9 = 0;
      puVar11 = (uint *)(uVar10 + param_1);
      uVar8 = param_3 & 0xfffffffffffffffc;
      do {
        auVar13 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar11 + -3)),
                           ZEXT416(*(uint *)((longlong)puVar11 + -3)));
        auVar12 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar11 + 3)),
                           ZEXT416(*(uint *)((longlong)puVar11 + 3)));
        auVar17._0_2_ = auVar13._0_2_ + auVar12._0_2_;
        auVar17._2_2_ = auVar13._2_2_ + auVar12._2_2_;
        auVar17._4_2_ = auVar13._4_2_ + auVar12._4_2_;
        auVar17._6_2_ = auVar13._6_2_ + auVar12._6_2_;
        auVar17._8_2_ = auVar13._8_2_ + auVar12._8_2_;
        auVar17._10_2_ = auVar13._10_2_ + auVar12._10_2_;
        auVar17._12_2_ = auVar13._12_2_ + auVar12._12_2_;
        auVar17._14_2_ = auVar13._14_2_ + auVar12._14_2_;
        auVar13 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar11 + 2)),
                           ZEXT416(*(uint *)((longlong)puVar11 + 2)));
        auVar12 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar11 + -2)),
                           ZEXT416(*(uint *)((longlong)puVar11 + -2)));
        auVar16 = pmovzxwd(auVar17,auVar17);
        auVar15._0_2_ = auVar12._0_2_ + auVar13._0_2_;
        auVar15._2_2_ = auVar12._2_2_ + auVar13._2_2_;
        auVar15._4_2_ = auVar12._4_2_ + auVar13._4_2_;
        auVar15._6_2_ = auVar12._6_2_ + auVar13._6_2_;
        auVar15._8_2_ = auVar12._8_2_ + auVar13._8_2_;
        auVar15._10_2_ = auVar12._10_2_ + auVar13._10_2_;
        auVar15._12_2_ = auVar12._12_2_ + auVar13._12_2_;
        auVar15._14_2_ = auVar12._14_2_ + auVar13._14_2_;
        auVar12 = pmovzxwd(auVar15,auVar15);
        auVar19 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar11 + -1)),
                           ZEXT416(*(uint *)((longlong)puVar11 + -1)));
        puVar1 = (uint *)((longlong)puVar11 + 1);
        auVar14 = pmovzxbw(ZEXT416(*puVar11),ZEXT416(*puVar11));
        puVar11 = puVar11 + 1;
        auVar13 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
        auVar14 = pmovzxwd(auVar14,auVar14);
        auVar21._0_2_ = auVar19._0_2_ + auVar13._0_2_;
        auVar21._2_2_ = auVar19._2_2_ + auVar13._2_2_;
        auVar21._4_2_ = auVar19._4_2_ + auVar13._4_2_;
        auVar21._6_2_ = auVar19._6_2_ + auVar13._6_2_;
        auVar21._8_2_ = auVar19._8_2_ + auVar13._8_2_;
        auVar21._10_2_ = auVar19._10_2_ + auVar13._10_2_;
        auVar21._12_2_ = auVar19._12_2_ + auVar13._12_2_;
        auVar21._14_2_ = auVar19._14_2_ + auVar13._14_2_;
        auVar13 = pmovzxwd(auVar21,auVar21);
        pfVar2 = (float *)(param_2 + uVar10 * 4 + uVar9 * 4);
        *pfVar2 = (float)auVar16._0_4_ * fVar3 + (float)auVar12._0_4_ * fVar4 +
                  (float)auVar13._0_4_ * fVar5 + (float)auVar14._0_4_ * fVar6;
        pfVar2[1] = (float)auVar16._4_4_ * fVar3 + (float)auVar12._4_4_ * fVar4 +
                    (float)auVar13._4_4_ * fVar5 + (float)auVar14._4_4_ * fVar6;
        pfVar2[2] = (float)auVar16._8_4_ * fVar3 + (float)auVar12._8_4_ * fVar4 +
                    (float)auVar13._8_4_ * fVar5 + (float)auVar14._8_4_ * fVar6;
        pfVar2[3] = (float)auVar16._12_4_ * fVar3 + (float)auVar12._12_4_ * fVar4 +
                    (float)auVar13._12_4_ * fVar5 + (float)auVar14._12_4_ * fVar6;
        uVar9 = uVar9 + 4;
      } while (uVar9 < uVar8);
      goto LAB_1407b9e65;
    }
  }
  uVar8 = 0;
LAB_1407b9e65:
  if (uVar8 < param_3) {
    param_1 = param_1 + uVar10;
    do {
      auVar12._0_4_ =
           (float)((uint)*(byte *)((uVar8 - 3) + param_1) + (uint)*(byte *)(uVar8 + 3 + param_1));
      auVar12._4_4_ =
           (float)((uint)*(byte *)((uVar8 - 2) + param_1) + (uint)*(byte *)(uVar8 + 2 + param_1));
      auVar12._12_4_ = (float)*(byte *)(uVar8 + param_1);
      auVar12._8_4_ =
           (float)((uint)*(byte *)((uVar8 - 1) + param_1) + (uint)*(byte *)(uVar8 + 1 + param_1));
      auVar12 = dpps(auVar7,auVar12,0xf1);
      *(int *)(param_2 + uVar10 * 4 + uVar8 * 4) = auVar12._0_4_;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  return;
}

