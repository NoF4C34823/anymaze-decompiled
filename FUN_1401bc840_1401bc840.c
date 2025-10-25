
void FUN_1401bc840(longlong param_1,ulonglong param_2,longlong param_3,undefined1 (*param_4) [16])

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
  ulonglong uVar11;
  uint *puVar12;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
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
  undefined1 auVar30 [16];
  
  uVar11 = param_3 * 3;
  fVar3 = *(float *)*param_4;
  fVar4 = *(float *)(*param_4 + 4);
  fVar5 = *(float *)(*param_4 + 8);
  auVar20 = ZEXT416((uint)fVar5);
  fVar6 = *(float *)(*param_4 + 0xc);
  auVar7 = *param_4;
  auVar14 = *param_4;
  auVar13 = *param_4;
  auVar17 = ZEXT416((uint)fVar6);
  if ((longlong)uVar11 < 1) {
    return;
  }
  if ((longlong)uVar11 < 0x10) {
LAB_1401bce52:
    uVar10 = 0;
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    uVar8 = param_2 & 0xf;
    if (uVar8 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401bce52;
      uVar8 = 0x10 - uVar8 >> 2;
    }
    if ((longlong)uVar11 < (longlong)(uVar8 + 0x10)) goto LAB_1401bce52;
    uVar9 = 0;
    uVar10 = uVar11 - (uVar11 - uVar8 & 0xf);
    if (uVar8 != 0) {
      do {
        auVar15._0_4_ =
             (float)((uint)*(byte *)((uVar9 - 9) + param_1) + (uint)*(byte *)(uVar9 + 9 + param_1));
        auVar15._4_4_ =
             (float)((uint)*(byte *)((uVar9 - 6) + param_1) + (uint)*(byte *)(uVar9 + 6 + param_1));
        auVar15._12_4_ = (float)*(byte *)(uVar9 + param_1);
        auVar15._8_4_ =
             (float)((uint)*(byte *)((uVar9 - 3) + param_1) + (uint)*(byte *)(uVar9 + 3 + param_1));
        in_XMM0 = dpps(auVar14,auVar15,0xf1);
        *(int *)(param_2 + uVar9 * 4) = in_XMM0._0_4_;
        uVar9 = uVar9 + 1;
        in_XMM2 = auVar13;
      } while (uVar9 < uVar8);
    }
    auVar14 = ZEXT416((uint)fVar3);
    auVar27._4_4_ = fVar4;
    auVar27._0_4_ = fVar4;
    auVar27._8_4_ = fVar4;
    auVar27._12_4_ = fVar4;
    auVar25._4_4_ = fVar5;
    auVar25._0_4_ = fVar5;
    auVar25._8_4_ = fVar5;
    auVar25._12_4_ = fVar5;
    auVar13 = auVar27;
    do {
      auVar15 = pmovzxbw(in_XMM2,*(undefined8 *)((uVar8 - 9) + param_1));
      auVar28 = pmovzxbw(auVar13,*(undefined8 *)(uVar8 + 9 + param_1));
      auVar29._0_2_ = auVar15._0_2_ + auVar28._0_2_;
      auVar29._2_2_ = auVar15._2_2_ + auVar28._2_2_;
      auVar29._4_2_ = auVar15._4_2_ + auVar28._4_2_;
      auVar29._6_2_ = auVar15._6_2_ + auVar28._6_2_;
      auVar29._8_2_ = auVar15._8_2_ + auVar28._8_2_;
      auVar29._10_2_ = auVar15._10_2_ + auVar28._10_2_;
      auVar29._12_2_ = auVar15._12_2_ + auVar28._12_2_;
      auVar29._14_2_ = auVar15._14_2_ + auVar28._14_2_;
      auVar13 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar8 + 6 + param_1));
      auVar22 = pmovzxwd(auVar20,auVar29);
      auVar20 = pmovzxbw(auVar17,*(undefined8 *)((uVar8 - 1) + param_1));
      auVar16 = pmovzxwd(auVar29 >> 0x40,auVar29 >> 0x40);
      auVar25 = pmovzxbw(auVar25,*(undefined8 *)(uVar8 + 0x11 + param_1));
      auVar17 = pmovzxbw(auVar16,*(undefined8 *)((uVar8 - 6) + param_1));
      auVar15 = pmovzxbw(auVar22,*(undefined8 *)(uVar8 + 2 + param_1));
      auVar29 = pmovzxbw(auVar28,*(undefined8 *)(uVar8 + 0xe + param_1));
      auVar28._0_2_ = auVar17._0_2_ + auVar13._0_2_;
      auVar28._2_2_ = auVar17._2_2_ + auVar13._2_2_;
      auVar28._4_2_ = auVar17._4_2_ + auVar13._4_2_;
      auVar28._6_2_ = auVar17._6_2_ + auVar13._6_2_;
      auVar28._8_2_ = auVar17._8_2_ + auVar13._8_2_;
      auVar28._10_2_ = auVar17._10_2_ + auVar13._10_2_;
      auVar28._12_2_ = auVar17._12_2_ + auVar13._12_2_;
      auVar28._14_2_ = auVar17._14_2_ + auVar13._14_2_;
      auVar21._0_2_ = auVar20._0_2_ + auVar25._0_2_;
      auVar21._2_2_ = auVar20._2_2_ + auVar25._2_2_;
      auVar21._4_2_ = auVar20._4_2_ + auVar25._4_2_;
      auVar21._6_2_ = auVar20._6_2_ + auVar25._6_2_;
      auVar21._8_2_ = auVar20._8_2_ + auVar25._8_2_;
      auVar21._10_2_ = auVar20._10_2_ + auVar25._10_2_;
      auVar21._12_2_ = auVar20._12_2_ + auVar25._12_2_;
      auVar21._14_2_ = auVar20._14_2_ + auVar25._14_2_;
      auVar26 = pmovzxwd(auVar25,auVar28);
      auVar23._0_2_ = auVar15._0_2_ + auVar29._0_2_;
      auVar23._2_2_ = auVar15._2_2_ + auVar29._2_2_;
      auVar23._4_2_ = auVar15._4_2_ + auVar29._4_2_;
      auVar23._6_2_ = auVar15._6_2_ + auVar29._6_2_;
      auVar23._8_2_ = auVar15._8_2_ + auVar29._8_2_;
      auVar23._10_2_ = auVar15._10_2_ + auVar29._10_2_;
      auVar23._12_2_ = auVar15._12_2_ + auVar29._12_2_;
      auVar23._14_2_ = auVar15._14_2_ + auVar29._14_2_;
      auVar30 = pmovzxbw(auVar29,*(undefined8 *)(uVar8 + 3 + param_1));
      auVar29 = pmovzxwd(auVar14,auVar21);
      auVar15 = pmovzxwd(auVar13,auVar23);
      auVar18 = pmovzxwd(auVar28 >> 0x40,auVar28 >> 0x40);
      auVar23 = pmovzxwd(auVar23 >> 0x40,auVar23 >> 0x40);
      auVar21 = pmovzxwd(auVar21 >> 0x40,auVar21 >> 0x40);
      auVar14 = pmovzxbw(auVar29,*(undefined8 *)((uVar8 - 3) + param_1));
      auVar13 = pmovzxbw(auVar15,*(undefined8 *)(uVar8 + 0xb + param_1));
      auVar17 = pmovzxbw(auVar18,*(undefined8 *)(uVar8 + 5 + param_1));
      auVar20._0_2_ = auVar14._0_2_ + auVar30._0_2_;
      auVar20._2_2_ = auVar14._2_2_ + auVar30._2_2_;
      auVar20._4_2_ = auVar14._4_2_ + auVar30._4_2_;
      auVar20._6_2_ = auVar14._6_2_ + auVar30._6_2_;
      auVar20._8_2_ = auVar14._8_2_ + auVar30._8_2_;
      auVar20._10_2_ = auVar14._10_2_ + auVar30._10_2_;
      auVar20._12_2_ = auVar14._12_2_ + auVar30._12_2_;
      auVar20._14_2_ = auVar14._14_2_ + auVar30._14_2_;
      auVar19._0_2_ = auVar17._0_2_ + auVar13._0_2_;
      auVar19._2_2_ = auVar17._2_2_ + auVar13._2_2_;
      auVar19._4_2_ = auVar17._4_2_ + auVar13._4_2_;
      auVar19._6_2_ = auVar17._6_2_ + auVar13._6_2_;
      auVar19._8_2_ = auVar17._8_2_ + auVar13._8_2_;
      auVar19._10_2_ = auVar17._10_2_ + auVar13._10_2_;
      auVar19._12_2_ = auVar17._12_2_ + auVar13._12_2_;
      auVar19._14_2_ = auVar17._14_2_ + auVar13._14_2_;
      auVar14 = pmovzxwd(auVar13,auVar20);
      auVar13 = pmovzxwd(auVar20 >> 0x40,auVar20 >> 0x40);
      auVar28 = pmovzxwd(auVar13,auVar19);
      auVar19 = pmovzxwd(auVar19 >> 0x40,auVar19 >> 0x40);
      auVar24._0_4_ = (float)auVar13._0_4_ * fVar5;
      auVar24._4_4_ = (float)auVar13._4_4_ * fVar5;
      auVar24._8_4_ = (float)auVar13._8_4_ * fVar5;
      auVar24._12_4_ = (float)auVar13._12_4_ * fVar5;
      auVar17 = pmovzxbw(auVar24,*(undefined8 *)(uVar8 + param_1));
      auVar13 = pmovzxwd(auVar21,auVar17);
      auVar20 = pmovzxwd(auVar17 >> 0x40,auVar17 >> 0x40);
      in_XMM2._0_4_ = (float)auVar13._0_4_ * fVar6;
      in_XMM2._4_4_ = (float)auVar13._4_4_ * fVar6;
      in_XMM2._8_4_ = (float)auVar13._8_4_ * fVar6;
      in_XMM2._12_4_ = (float)auVar13._12_4_ * fVar6;
      auVar17._0_4_ = (float)auVar20._0_4_ * fVar6;
      auVar17._4_4_ = (float)auVar20._4_4_ * fVar6;
      auVar17._8_4_ = (float)auVar20._8_4_ * fVar6;
      auVar17._12_4_ = (float)auVar20._12_4_ * fVar6;
      auVar25 = pmovzxbw(auVar27,*(undefined8 *)(uVar8 + 8 + param_1));
      auVar13 = pmovzxwd(auVar30,auVar25);
      auVar25 = pmovzxwd(auVar25 >> 0x40,auVar25 >> 0x40);
      pfVar2 = (float *)(param_2 + uVar8 * 4);
      *pfVar2 = (float)auVar22._0_4_ * fVar3 + (float)auVar26._0_4_ * fVar4 +
                (float)auVar14._0_4_ * fVar5 + in_XMM2._0_4_;
      pfVar2[1] = (float)auVar22._4_4_ * fVar3 + (float)auVar26._4_4_ * fVar4 +
                  (float)auVar14._4_4_ * fVar5 + in_XMM2._4_4_;
      pfVar2[2] = (float)auVar22._8_4_ * fVar3 + (float)auVar26._8_4_ * fVar4 +
                  (float)auVar14._8_4_ * fVar5 + in_XMM2._8_4_;
      pfVar2[3] = (float)auVar22._12_4_ * fVar3 + (float)auVar26._12_4_ * fVar4 +
                  (float)auVar14._12_4_ * fVar5 + in_XMM2._12_4_;
      pfVar2 = (float *)(param_2 + 0x10 + uVar8 * 4);
      *pfVar2 = (float)auVar16._0_4_ * fVar3 + (float)auVar18._0_4_ * fVar4 + auVar24._0_4_ +
                auVar17._0_4_;
      pfVar2[1] = (float)auVar16._4_4_ * fVar3 + (float)auVar18._4_4_ * fVar4 + auVar24._4_4_ +
                  auVar17._4_4_;
      pfVar2[2] = (float)auVar16._8_4_ * fVar3 + (float)auVar18._8_4_ * fVar4 + auVar24._8_4_ +
                  auVar17._8_4_;
      pfVar2[3] = (float)auVar16._12_4_ * fVar3 + (float)auVar18._12_4_ * fVar4 + auVar24._12_4_ +
                  auVar17._12_4_;
      auVar14._0_4_ = (float)auVar28._0_4_ * fVar5;
      auVar14._4_4_ = (float)auVar28._4_4_ * fVar5;
      auVar14._8_4_ = (float)auVar28._8_4_ * fVar5;
      auVar14._12_4_ = (float)auVar28._12_4_ * fVar5;
      in_XMM0._0_4_ = (float)auVar19._0_4_ * fVar5;
      in_XMM0._4_4_ = (float)auVar19._4_4_ * fVar5;
      in_XMM0._8_4_ = (float)auVar19._8_4_ * fVar5;
      in_XMM0._12_4_ = (float)auVar19._12_4_ * fVar5;
      pfVar2 = (float *)(param_2 + 0x20 + uVar8 * 4);
      *pfVar2 = (float)auVar29._0_4_ * fVar3 + (float)auVar15._0_4_ * fVar4 + auVar14._0_4_ +
                (float)auVar13._0_4_ * fVar6;
      pfVar2[1] = (float)auVar29._4_4_ * fVar3 + (float)auVar15._4_4_ * fVar4 + auVar14._4_4_ +
                  (float)auVar13._4_4_ * fVar6;
      pfVar2[2] = (float)auVar29._8_4_ * fVar3 + (float)auVar15._8_4_ * fVar4 + auVar14._8_4_ +
                  (float)auVar13._8_4_ * fVar6;
      pfVar2[3] = (float)auVar29._12_4_ * fVar3 + (float)auVar15._12_4_ * fVar4 + auVar14._12_4_ +
                  (float)auVar13._12_4_ * fVar6;
      pfVar2 = (float *)(param_2 + 0x30 + uVar8 * 4);
      *pfVar2 = (float)auVar21._0_4_ * fVar3 + (float)auVar23._0_4_ * fVar4 + in_XMM0._0_4_ +
                (float)auVar25._0_4_ * fVar6;
      pfVar2[1] = (float)auVar21._4_4_ * fVar3 + (float)auVar23._4_4_ * fVar4 + in_XMM0._4_4_ +
                  (float)auVar25._4_4_ * fVar6;
      pfVar2[2] = (float)auVar21._8_4_ * fVar3 + (float)auVar23._8_4_ * fVar4 + in_XMM0._8_4_ +
                  (float)auVar25._8_4_ * fVar6;
      pfVar2[3] = (float)auVar21._12_4_ * fVar3 + (float)auVar23._12_4_ * fVar4 + in_XMM0._12_4_ +
                  (float)auVar25._12_4_ * fVar6;
      uVar8 = uVar8 + 0x10;
    } while (uVar8 < uVar10);
    if (uVar11 < uVar10 + 1) {
      return;
    }
    uVar11 = uVar11 - uVar10;
    if (3 < (longlong)uVar11) {
      uVar9 = 0;
      puVar12 = (uint *)(uVar10 + param_1);
      uVar8 = uVar11 & 0xfffffffffffffffc;
      do {
        auVar13 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar12 + -9)),
                           ZEXT416(*(uint *)((longlong)puVar12 + -9)));
        auVar14 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar12 + 9)),
                           ZEXT416(*(uint *)((longlong)puVar12 + 9)));
        auVar16._0_2_ = auVar13._0_2_ + auVar14._0_2_;
        auVar16._2_2_ = auVar13._2_2_ + auVar14._2_2_;
        auVar16._4_2_ = auVar13._4_2_ + auVar14._4_2_;
        auVar16._6_2_ = auVar13._6_2_ + auVar14._6_2_;
        auVar16._8_2_ = auVar13._8_2_ + auVar14._8_2_;
        auVar16._10_2_ = auVar13._10_2_ + auVar14._10_2_;
        auVar16._12_2_ = auVar13._12_2_ + auVar14._12_2_;
        auVar16._14_2_ = auVar13._14_2_ + auVar14._14_2_;
        auVar17 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar12 + 6)),
                           ZEXT416(*(uint *)((longlong)puVar12 + 6)));
        auVar14 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar12 + -6)),
                           ZEXT416(*(uint *)((longlong)puVar12 + -6)));
        auVar13 = pmovzxwd(auVar16,auVar16);
        auVar22._0_2_ = auVar14._0_2_ + auVar17._0_2_;
        auVar22._2_2_ = auVar14._2_2_ + auVar17._2_2_;
        auVar22._4_2_ = auVar14._4_2_ + auVar17._4_2_;
        auVar22._6_2_ = auVar14._6_2_ + auVar17._6_2_;
        auVar22._8_2_ = auVar14._8_2_ + auVar17._8_2_;
        auVar22._10_2_ = auVar14._10_2_ + auVar17._10_2_;
        auVar22._12_2_ = auVar14._12_2_ + auVar17._12_2_;
        auVar22._14_2_ = auVar14._14_2_ + auVar17._14_2_;
        auVar17 = pmovzxwd(auVar22,auVar22);
        auVar14 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar12 + -3)),
                           ZEXT416(*(uint *)((longlong)puVar12 + -3)));
        puVar1 = (uint *)((longlong)puVar12 + 3);
        auVar15 = pmovzxbw(ZEXT416(*puVar12),ZEXT416(*puVar12));
        puVar12 = puVar12 + 1;
        auVar20 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
        auVar15 = pmovzxwd(auVar15,auVar15);
        auVar18._0_2_ = auVar14._0_2_ + auVar20._0_2_;
        auVar18._2_2_ = auVar14._2_2_ + auVar20._2_2_;
        auVar18._4_2_ = auVar14._4_2_ + auVar20._4_2_;
        auVar18._6_2_ = auVar14._6_2_ + auVar20._6_2_;
        auVar18._8_2_ = auVar14._8_2_ + auVar20._8_2_;
        auVar18._10_2_ = auVar14._10_2_ + auVar20._10_2_;
        auVar18._12_2_ = auVar14._12_2_ + auVar20._12_2_;
        auVar18._14_2_ = auVar14._14_2_ + auVar20._14_2_;
        auVar14 = pmovzxwd(auVar18,auVar18);
        pfVar2 = (float *)(param_2 + uVar10 * 4 + uVar9 * 4);
        *pfVar2 = (float)auVar13._0_4_ * fVar3 + (float)auVar17._0_4_ * fVar4 +
                  (float)auVar14._0_4_ * fVar5 + (float)auVar15._0_4_ * fVar6;
        pfVar2[1] = (float)auVar13._4_4_ * fVar3 + (float)auVar17._4_4_ * fVar4 +
                    (float)auVar14._4_4_ * fVar5 + (float)auVar15._4_4_ * fVar6;
        pfVar2[2] = (float)auVar13._8_4_ * fVar3 + (float)auVar17._8_4_ * fVar4 +
                    (float)auVar14._8_4_ * fVar5 + (float)auVar15._8_4_ * fVar6;
        pfVar2[3] = (float)auVar13._12_4_ * fVar3 + (float)auVar17._12_4_ * fVar4 +
                    (float)auVar14._12_4_ * fVar5 + (float)auVar15._12_4_ * fVar6;
        uVar9 = uVar9 + 4;
      } while (uVar9 < uVar8);
      goto LAB_1401bcda5;
    }
  }
  uVar8 = 0;
LAB_1401bcda5:
  if (uVar8 < uVar11) {
    param_1 = param_1 + uVar10;
    do {
      auVar13._0_4_ =
           (float)((uint)*(byte *)((uVar8 - 9) + param_1) + (uint)*(byte *)(uVar8 + 9 + param_1));
      auVar13._4_4_ =
           (float)((uint)*(byte *)((uVar8 - 6) + param_1) + (uint)*(byte *)(uVar8 + 6 + param_1));
      auVar13._12_4_ = (float)*(byte *)(uVar8 + param_1);
      auVar13._8_4_ =
           (float)((uint)*(byte *)((uVar8 - 3) + param_1) + (uint)*(byte *)(uVar8 + 3 + param_1));
      auVar13 = dpps(auVar7,auVar13,0xf1);
      *(int *)(param_2 + uVar10 * 4 + uVar8 * 4) = auVar13._0_4_;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar11);
  }
  return;
}

