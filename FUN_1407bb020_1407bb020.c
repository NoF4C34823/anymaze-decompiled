
void FUN_1407bb020(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  
  uVar9 = param_3 * 3;
  fVar2 = *param_4;
  auVar13 = ZEXT416((uint)fVar2);
  fVar3 = param_4[1];
  auVar16 = ZEXT416((uint)fVar3);
  fVar4 = param_4[2];
  auVar12 = ZEXT416((uint)fVar4);
  if ((longlong)uVar9 < 1) {
    return;
  }
  if (0xf < (longlong)uVar9) {
    uVar6 = param_2 & 0xf;
    if (uVar6 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407bb65e;
      uVar6 = 0x10 - uVar6 >> 2;
    }
    if ((longlong)(uVar6 + 0x10) <= (longlong)uVar9) {
      uVar7 = 0;
      uVar8 = uVar9 - (uVar9 - uVar6 & 0xf);
      if (uVar6 != 0) {
        do {
          *(float *)(param_2 + uVar7 * 4) =
               (float)((uint)*(byte *)((uVar7 - 6) + param_1) + (uint)*(byte *)(uVar7 + 6 + param_1)
                      ) * fVar2 +
               (float)((uint)*(byte *)((uVar7 - 3) + param_1) + (uint)*(byte *)(uVar7 + 3 + param_1)
                      ) * fVar3 + (float)*(byte *)(uVar7 + param_1) * fVar4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      if ((param_1 + uVar6 & 0xf) == 0) {
        do {
          auVar13 = pmovzxbw(auVar13,*(undefined8 *)((uVar6 - 6) + param_1));
          auVar14 = pmovzxbw(unaff_XMM7,*(undefined8 *)(uVar6 + 6 + param_1));
          auVar22 = pmovzxbw(unaff_XMM6,*(undefined8 *)(uVar6 + 2 + param_1));
          auVar19._0_2_ = auVar13._0_2_ + auVar14._0_2_;
          auVar19._2_2_ = auVar13._2_2_ + auVar14._2_2_;
          auVar19._4_2_ = auVar13._4_2_ + auVar14._4_2_;
          auVar19._6_2_ = auVar13._6_2_ + auVar14._6_2_;
          auVar19._8_2_ = auVar13._8_2_ + auVar14._8_2_;
          auVar19._10_2_ = auVar13._10_2_ + auVar14._10_2_;
          auVar19._12_2_ = auVar13._12_2_ + auVar14._12_2_;
          auVar19._14_2_ = auVar13._14_2_ + auVar14._14_2_;
          auVar13 = pmovzxbw(auVar16,*(undefined8 *)(uVar6 + 0xe + param_1));
          auVar11 = pmovzxwd(auVar12,auVar19);
          auVar12._0_2_ = auVar22._0_2_ + auVar13._0_2_;
          auVar12._2_2_ = auVar22._2_2_ + auVar13._2_2_;
          auVar12._4_2_ = auVar22._4_2_ + auVar13._4_2_;
          auVar12._6_2_ = auVar22._6_2_ + auVar13._6_2_;
          auVar12._8_2_ = auVar22._8_2_ + auVar13._8_2_;
          auVar12._10_2_ = auVar22._10_2_ + auVar13._10_2_;
          auVar12._12_2_ = auVar22._12_2_ + auVar13._12_2_;
          auVar12._14_2_ = auVar22._14_2_ + auVar13._14_2_;
          auVar15 = pmovzxwd(auVar19 >> 0x40,auVar19 >> 0x40);
          auVar16 = pmovzxbw(auVar13,*(undefined8 *)((uVar6 - 3) + param_1));
          auVar21 = pmovzxwd(auVar14,auVar12);
          auVar13 = pmovzxbw(auVar15,*(undefined8 *)(uVar6 + 3 + param_1));
          auVar18 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
          auVar12 = pmovzxbw(auVar11,*(undefined8 *)(uVar6 + 5 + param_1));
          auVar19 = pmovzxbw(auVar18,*(undefined8 *)(uVar6 + 0xb + param_1));
          auVar22._0_2_ = auVar16._0_2_ + auVar13._0_2_;
          auVar22._2_2_ = auVar16._2_2_ + auVar13._2_2_;
          auVar22._4_2_ = auVar16._4_2_ + auVar13._4_2_;
          auVar22._6_2_ = auVar16._6_2_ + auVar13._6_2_;
          auVar22._8_2_ = auVar16._8_2_ + auVar13._8_2_;
          auVar22._10_2_ = auVar16._10_2_ + auVar13._10_2_;
          auVar22._12_2_ = auVar16._12_2_ + auVar13._12_2_;
          auVar22._14_2_ = auVar16._14_2_ + auVar13._14_2_;
          auVar16._0_2_ = auVar12._0_2_ + auVar19._0_2_;
          auVar16._2_2_ = auVar12._2_2_ + auVar19._2_2_;
          auVar16._4_2_ = auVar12._4_2_ + auVar19._4_2_;
          auVar16._6_2_ = auVar12._6_2_ + auVar19._6_2_;
          auVar16._8_2_ = auVar12._8_2_ + auVar19._8_2_;
          auVar16._10_2_ = auVar12._10_2_ + auVar19._10_2_;
          auVar16._12_2_ = auVar12._12_2_ + auVar19._12_2_;
          auVar16._14_2_ = auVar12._14_2_ + auVar19._14_2_;
          auVar20 = pmovzxwd(auVar19,auVar22);
          auVar14 = pmovzxwd(auVar22 >> 0x40,auVar22 >> 0x40);
          auVar17 = pmovzxwd(auVar14,auVar16);
          auVar19 = pmovzxwd(auVar16 >> 0x40,auVar16 >> 0x40);
          auVar12 = pmovzxbw(auVar19,*(undefined8 *)(uVar6 + param_1));
          unaff_XMM7 = pmovzxwd(auVar21,auVar12);
          auVar22 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
          auVar13 = pmovzxbw(auVar17,*(undefined8 *)(uVar6 + 8 + param_1));
          auVar12 = pmovzxwd(auVar22,auVar13);
          auVar16 = pmovzxwd(auVar13 >> 0x40,auVar13 >> 0x40);
          auVar13._0_4_ = (float)auVar12._0_4_ * fVar4;
          auVar13._4_4_ = (float)auVar12._4_4_ * fVar4;
          auVar13._8_4_ = (float)auVar12._8_4_ * fVar4;
          auVar13._12_4_ = (float)auVar12._12_4_ * fVar4;
          unaff_XMM6._0_4_ = (float)auVar16._0_4_ * fVar4;
          unaff_XMM6._4_4_ = (float)auVar16._4_4_ * fVar4;
          unaff_XMM6._8_4_ = (float)auVar16._8_4_ * fVar4;
          unaff_XMM6._12_4_ = (float)auVar16._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + uVar6 * 4);
          *pfVar1 = (float)auVar11._0_4_ * fVar2 + (float)auVar20._0_4_ * fVar3 +
                    (float)unaff_XMM7._0_4_ * fVar4;
          pfVar1[1] = (float)auVar11._4_4_ * fVar2 + (float)auVar20._4_4_ * fVar3 +
                      (float)unaff_XMM7._4_4_ * fVar4;
          pfVar1[2] = (float)auVar11._8_4_ * fVar2 + (float)auVar20._8_4_ * fVar3 +
                      (float)unaff_XMM7._8_4_ * fVar4;
          pfVar1[3] = (float)auVar11._12_4_ * fVar2 + (float)auVar20._12_4_ * fVar3 +
                      (float)unaff_XMM7._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + 0x10 + uVar6 * 4);
          *pfVar1 = (float)auVar15._0_4_ * fVar2 + (float)auVar14._0_4_ * fVar3 +
                    (float)auVar22._0_4_ * fVar4;
          pfVar1[1] = (float)auVar15._4_4_ * fVar2 + (float)auVar14._4_4_ * fVar3 +
                      (float)auVar22._4_4_ * fVar4;
          pfVar1[2] = (float)auVar15._8_4_ * fVar2 + (float)auVar14._8_4_ * fVar3 +
                      (float)auVar22._8_4_ * fVar4;
          pfVar1[3] = (float)auVar15._12_4_ * fVar2 + (float)auVar14._12_4_ * fVar3 +
                      (float)auVar22._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + 0x20 + uVar6 * 4);
          *pfVar1 = (float)auVar21._0_4_ * fVar2 + (float)auVar17._0_4_ * fVar3 + auVar13._0_4_;
          pfVar1[1] = (float)auVar21._4_4_ * fVar2 + (float)auVar17._4_4_ * fVar3 + auVar13._4_4_;
          pfVar1[2] = (float)auVar21._8_4_ * fVar2 + (float)auVar17._8_4_ * fVar3 + auVar13._8_4_;
          pfVar1[3] = (float)auVar21._12_4_ * fVar2 + (float)auVar17._12_4_ * fVar3 + auVar13._12_4_
          ;
          pfVar1 = (float *)(param_2 + 0x30 + uVar6 * 4);
          *pfVar1 = (float)auVar18._0_4_ * fVar2 + (float)auVar19._0_4_ * fVar3 + unaff_XMM6._0_4_;
          pfVar1[1] = (float)auVar18._4_4_ * fVar2 + (float)auVar19._4_4_ * fVar3 + unaff_XMM6._4_4_
          ;
          pfVar1[2] = (float)auVar18._8_4_ * fVar2 + (float)auVar19._8_4_ * fVar3 + unaff_XMM6._8_4_
          ;
          pfVar1[3] = (float)auVar18._12_4_ * fVar2 + (float)auVar19._12_4_ * fVar3 +
                      unaff_XMM6._12_4_;
          uVar6 = uVar6 + 0x10;
        } while (uVar6 < uVar8);
      }
      else {
        do {
          auVar13 = pmovzxbw(auVar13,*(undefined8 *)((uVar6 - 6) + param_1));
          auVar22 = pmovzxbw(unaff_XMM7,*(undefined8 *)(uVar6 + 6 + param_1));
          auVar19 = pmovzxbw(unaff_XMM6,*(undefined8 *)(uVar6 + 2 + param_1));
          auVar14._0_2_ = auVar13._0_2_ + auVar22._0_2_;
          auVar14._2_2_ = auVar13._2_2_ + auVar22._2_2_;
          auVar14._4_2_ = auVar13._4_2_ + auVar22._4_2_;
          auVar14._6_2_ = auVar13._6_2_ + auVar22._6_2_;
          auVar14._8_2_ = auVar13._8_2_ + auVar22._8_2_;
          auVar14._10_2_ = auVar13._10_2_ + auVar22._10_2_;
          auVar14._12_2_ = auVar13._12_2_ + auVar22._12_2_;
          auVar14._14_2_ = auVar13._14_2_ + auVar22._14_2_;
          auVar13 = pmovzxbw(auVar16,*(undefined8 *)(uVar6 + 0xe + param_1));
          auVar11 = pmovzxwd(auVar12,auVar14);
          auVar18._0_2_ = auVar19._0_2_ + auVar13._0_2_;
          auVar18._2_2_ = auVar19._2_2_ + auVar13._2_2_;
          auVar18._4_2_ = auVar19._4_2_ + auVar13._4_2_;
          auVar18._6_2_ = auVar19._6_2_ + auVar13._6_2_;
          auVar18._8_2_ = auVar19._8_2_ + auVar13._8_2_;
          auVar18._10_2_ = auVar19._10_2_ + auVar13._10_2_;
          auVar18._12_2_ = auVar19._12_2_ + auVar13._12_2_;
          auVar18._14_2_ = auVar19._14_2_ + auVar13._14_2_;
          auVar14 = pmovzxwd(auVar14 >> 0x40,auVar14 >> 0x40);
          auVar16 = pmovzxbw(auVar13,*(undefined8 *)((uVar6 - 3) + param_1));
          auVar23 = pmovzxwd(auVar22,auVar18);
          auVar13 = pmovzxbw(auVar14,*(undefined8 *)(uVar6 + 3 + param_1));
          auVar20 = pmovzxwd(auVar18 >> 0x40,auVar18 >> 0x40);
          auVar12 = pmovzxbw(auVar11,*(undefined8 *)(uVar6 + 5 + param_1));
          auVar19 = pmovzxbw(auVar20,*(undefined8 *)(uVar6 + 0xb + param_1));
          auVar17._0_2_ = auVar16._0_2_ + auVar13._0_2_;
          auVar17._2_2_ = auVar16._2_2_ + auVar13._2_2_;
          auVar17._4_2_ = auVar16._4_2_ + auVar13._4_2_;
          auVar17._6_2_ = auVar16._6_2_ + auVar13._6_2_;
          auVar17._8_2_ = auVar16._8_2_ + auVar13._8_2_;
          auVar17._10_2_ = auVar16._10_2_ + auVar13._10_2_;
          auVar17._12_2_ = auVar16._12_2_ + auVar13._12_2_;
          auVar17._14_2_ = auVar16._14_2_ + auVar13._14_2_;
          auVar15._0_2_ = auVar12._0_2_ + auVar19._0_2_;
          auVar15._2_2_ = auVar12._2_2_ + auVar19._2_2_;
          auVar15._4_2_ = auVar12._4_2_ + auVar19._4_2_;
          auVar15._6_2_ = auVar12._6_2_ + auVar19._6_2_;
          auVar15._8_2_ = auVar12._8_2_ + auVar19._8_2_;
          auVar15._10_2_ = auVar12._10_2_ + auVar19._10_2_;
          auVar15._12_2_ = auVar12._12_2_ + auVar19._12_2_;
          auVar15._14_2_ = auVar12._14_2_ + auVar19._14_2_;
          auVar21 = pmovzxwd(auVar19,auVar17);
          auVar17 = pmovzxwd(auVar17 >> 0x40,auVar17 >> 0x40);
          auVar18 = pmovzxwd(auVar17,auVar15);
          auVar19 = pmovzxwd(auVar15 >> 0x40,auVar15 >> 0x40);
          auVar12 = pmovzxbw(auVar19,*(undefined8 *)(uVar6 + param_1));
          unaff_XMM7 = pmovzxwd(auVar23,auVar12);
          auVar22 = pmovzxwd(auVar12 >> 0x40,auVar12 >> 0x40);
          auVar13 = pmovzxbw(auVar18,*(undefined8 *)(uVar6 + 8 + param_1));
          auVar12 = pmovzxwd(auVar22,auVar13);
          auVar16 = pmovzxwd(auVar13 >> 0x40,auVar13 >> 0x40);
          auVar13._0_4_ = (float)auVar12._0_4_ * fVar4;
          auVar13._4_4_ = (float)auVar12._4_4_ * fVar4;
          auVar13._8_4_ = (float)auVar12._8_4_ * fVar4;
          auVar13._12_4_ = (float)auVar12._12_4_ * fVar4;
          unaff_XMM6._0_4_ = (float)auVar16._0_4_ * fVar4;
          unaff_XMM6._4_4_ = (float)auVar16._4_4_ * fVar4;
          unaff_XMM6._8_4_ = (float)auVar16._8_4_ * fVar4;
          unaff_XMM6._12_4_ = (float)auVar16._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + uVar6 * 4);
          *pfVar1 = (float)auVar11._0_4_ * fVar2 + (float)auVar21._0_4_ * fVar3 +
                    (float)unaff_XMM7._0_4_ * fVar4;
          pfVar1[1] = (float)auVar11._4_4_ * fVar2 + (float)auVar21._4_4_ * fVar3 +
                      (float)unaff_XMM7._4_4_ * fVar4;
          pfVar1[2] = (float)auVar11._8_4_ * fVar2 + (float)auVar21._8_4_ * fVar3 +
                      (float)unaff_XMM7._8_4_ * fVar4;
          pfVar1[3] = (float)auVar11._12_4_ * fVar2 + (float)auVar21._12_4_ * fVar3 +
                      (float)unaff_XMM7._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + 0x10 + uVar6 * 4);
          *pfVar1 = (float)auVar14._0_4_ * fVar2 + (float)auVar17._0_4_ * fVar3 +
                    (float)auVar22._0_4_ * fVar4;
          pfVar1[1] = (float)auVar14._4_4_ * fVar2 + (float)auVar17._4_4_ * fVar3 +
                      (float)auVar22._4_4_ * fVar4;
          pfVar1[2] = (float)auVar14._8_4_ * fVar2 + (float)auVar17._8_4_ * fVar3 +
                      (float)auVar22._8_4_ * fVar4;
          pfVar1[3] = (float)auVar14._12_4_ * fVar2 + (float)auVar17._12_4_ * fVar3 +
                      (float)auVar22._12_4_ * fVar4;
          pfVar1 = (float *)(param_2 + 0x20 + uVar6 * 4);
          *pfVar1 = (float)auVar23._0_4_ * fVar2 + (float)auVar18._0_4_ * fVar3 + auVar13._0_4_;
          pfVar1[1] = (float)auVar23._4_4_ * fVar2 + (float)auVar18._4_4_ * fVar3 + auVar13._4_4_;
          pfVar1[2] = (float)auVar23._8_4_ * fVar2 + (float)auVar18._8_4_ * fVar3 + auVar13._8_4_;
          pfVar1[3] = (float)auVar23._12_4_ * fVar2 + (float)auVar18._12_4_ * fVar3 + auVar13._12_4_
          ;
          pfVar1 = (float *)(param_2 + 0x30 + uVar6 * 4);
          *pfVar1 = (float)auVar20._0_4_ * fVar2 + (float)auVar19._0_4_ * fVar3 + unaff_XMM6._0_4_;
          pfVar1[1] = (float)auVar20._4_4_ * fVar2 + (float)auVar19._4_4_ * fVar3 + unaff_XMM6._4_4_
          ;
          pfVar1[2] = (float)auVar20._8_4_ * fVar2 + (float)auVar19._8_4_ * fVar3 + unaff_XMM6._8_4_
          ;
          pfVar1[3] = (float)auVar20._12_4_ * fVar2 + (float)auVar19._12_4_ * fVar3 +
                      unaff_XMM6._12_4_;
          uVar6 = uVar6 + 0x10;
        } while (uVar6 < uVar8);
      }
      if (uVar9 < uVar8 + 1) {
        return;
      }
      uVar9 = uVar9 - uVar8;
      if ((longlong)uVar9 < 4) {
        FUN_1407bb5f3(param_1,0,uVar9,param_2,CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc),
                      CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da),CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc));
        return;
      }
      uVar7 = 0;
      puVar10 = (uint *)(param_1 + uVar8);
      uVar6 = uVar9 & 0xfffffffffffffffc;
      do {
        auVar12 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar10 + -6)),
                           ZEXT416(*(uint *)((longlong)puVar10 + -6)));
        auVar13 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar10 + 6)),
                           ZEXT416(*(uint *)((longlong)puVar10 + 6)));
        auVar11._0_2_ = auVar12._0_2_ + auVar13._0_2_;
        auVar11._2_2_ = auVar12._2_2_ + auVar13._2_2_;
        auVar11._4_2_ = auVar12._4_2_ + auVar13._4_2_;
        auVar11._6_2_ = auVar12._6_2_ + auVar13._6_2_;
        auVar11._8_2_ = auVar12._8_2_ + auVar13._8_2_;
        auVar11._10_2_ = auVar12._10_2_ + auVar13._10_2_;
        auVar11._12_2_ = auVar12._12_2_ + auVar13._12_2_;
        auVar11._14_2_ = auVar12._14_2_ + auVar13._14_2_;
        auVar12 = pmovzxwd(auVar11,auVar11);
        auVar16 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar10 + 3)),
                           ZEXT416(*(uint *)((longlong)puVar10 + 3)));
        auVar13 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar10 + -3)),
                           ZEXT416(*(uint *)((longlong)puVar10 + -3)));
        auVar20._0_2_ = auVar13._0_2_ + auVar16._0_2_;
        auVar20._2_2_ = auVar13._2_2_ + auVar16._2_2_;
        auVar20._4_2_ = auVar13._4_2_ + auVar16._4_2_;
        auVar20._6_2_ = auVar13._6_2_ + auVar16._6_2_;
        auVar20._8_2_ = auVar13._8_2_ + auVar16._8_2_;
        auVar20._10_2_ = auVar13._10_2_ + auVar16._10_2_;
        auVar20._12_2_ = auVar13._12_2_ + auVar16._12_2_;
        auVar20._14_2_ = auVar13._14_2_ + auVar16._14_2_;
        uVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        auVar13 = pmovzxwd(auVar20,auVar20);
        auVar16 = pmovzxbw(ZEXT416(uVar5),ZEXT416(uVar5));
        auVar16 = pmovzxwd(auVar16,auVar16);
        pfVar1 = (float *)(param_2 + uVar8 * 4 + uVar7 * 4);
        *pfVar1 = (float)auVar12._0_4_ * fVar2 + (float)auVar13._0_4_ * fVar3 +
                  (float)auVar16._0_4_ * fVar4;
        pfVar1[1] = (float)auVar12._4_4_ * fVar2 + (float)auVar13._4_4_ * fVar3 +
                    (float)auVar16._4_4_ * fVar4;
        pfVar1[2] = (float)auVar12._8_4_ * fVar2 + (float)auVar13._8_4_ * fVar3 +
                    (float)auVar16._8_4_ * fVar4;
        pfVar1[3] = (float)auVar12._12_4_ * fVar2 + (float)auVar13._12_4_ * fVar3 +
                    (float)auVar16._12_4_ * fVar4;
        uVar7 = uVar7 + 4;
      } while (uVar7 < uVar6);
      goto code_r0x0001407bb5f3;
    }
  }
LAB_1407bb65e:
  uVar8 = 0;
  uVar6 = 0;
  if (uVar9 == 0) {
    return;
  }
code_r0x0001407bb5f3:
  if (uVar6 < uVar9) {
    param_1 = param_1 + uVar8;
    do {
      *(float *)(param_2 + uVar8 * 4 + uVar6 * 4) =
           (float)((uint)*(byte *)((uVar6 - 6) + param_1) + (uint)*(byte *)(uVar6 + 6 + param_1)) *
           fVar2 + (float)((uint)*(byte *)((uVar6 - 3) + param_1) +
                          (uint)*(byte *)(uVar6 + 3 + param_1)) * fVar3 +
           (float)*(byte *)(uVar6 + param_1) * fVar4;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar9);
  }
  return;
}

