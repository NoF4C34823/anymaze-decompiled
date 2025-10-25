
undefined8
FUN_140a8b520(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             ulonglong param_6,uint param_7,undefined1 param_8)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  
  lVar13 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar13 = 1;
      break;
    case 2:
      lVar13 = 2;
      break;
    case 3:
      lVar13 = 3;
      break;
    case 4:
      lVar13 = 4;
    }
    (*(code *)(&PTR_FUN_14308f188)[lVar13])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar3 = FUN_140a8b9fc();
    return uVar3;
  }
  lVar13 = 0;
  if (0 < param_6._4_4_) {
    uVar8 = (ulonglong)(int)param_6;
    uVar1 = uVar8 - 4;
    uVar7 = 0;
    uVar4 = uVar8;
    do {
      lVar6 = param_1 + lVar13;
      iVar2 = FUN_140a886a0(lVar6,param_3,uVar4,5,param_5,param_7,param_8);
      auVar19._8_8_ = extraout_XMM0_Qb;
      auVar19._0_8_ = extraout_XMM0_Qa;
      iVar9 = 0;
      uVar4 = 0;
      if (0 < (int)param_6) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar7 * 8) + uVar4 * 2) =
               (ushort)*(byte *)(uVar4 + param_3) + (ushort)*(byte *)(uVar4 + 1 + param_3) +
               (ushort)*(byte *)(uVar4 + 2 + param_3) +
               (ushort)*(byte *)(uVar4 + 3 + param_3) + (ushort)*(byte *)(uVar4 + 4 + param_3);
          uVar14 = uVar4 + 1;
          iVar9 = (int)uVar4 + 1;
          if (uVar8 <= uVar14) break;
          uVar4 = uVar14;
        } while ((longlong)uVar14 < 2);
      }
      lVar11 = (longlong)iVar9;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar1 < 0x10) {
LAB_140a8ba13:
          iVar12 = 0;
          iVar10 = iVar9;
        }
        else {
          uVar4 = *(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2;
          uVar14 = uVar4 & 0xf;
          if ((int)uVar14 != 0) {
            if ((uVar4 & 1) != 0) goto LAB_140a8ba13;
            uVar14 = (ulonglong)(0x10U - (int)uVar14 >> 1);
          }
          if ((longlong)uVar1 < (longlong)(uVar14 + 0x10)) goto LAB_140a8ba13;
          uVar4 = 0;
          iVar12 = (int)uVar1 - ((int)uVar1 - (int)uVar14 & 0xfU);
          if ((int)uVar14 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2 + uVar4 * 2) =
                   (ushort)*(byte *)(uVar4 + lVar6) + (ushort)*(byte *)(uVar4 + 1 + lVar6) +
                   (ushort)*(byte *)(uVar4 + 2 + lVar6) +
                   (ushort)*(byte *)(uVar4 + 3 + lVar6) + (ushort)*(byte *)(uVar4 + 4 + lVar6);
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar14);
          }
          lVar5 = uVar14 + lVar13;
          do {
            auVar16 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar5 + param_1));
            auVar17 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar5 + 1 + param_1));
            auVar20 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar5 + 2 + param_1));
            auVar18 = pmovzxbw(auVar17,*(undefined8 *)(lVar5 + 3 + param_1));
            auVar15 = pmovzxbw(auVar19,*(undefined8 *)(lVar5 + 8 + param_1));
            in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar5 + 9 + param_1));
            auVar19 = pmovzxbw(auVar18,*(undefined8 *)(lVar5 + 4 + param_1));
            in_XMM3._0_2_ =
                 auVar16._0_2_ + auVar17._0_2_ + auVar20._0_2_ + auVar18._0_2_ + auVar19._0_2_;
            in_XMM3._2_2_ =
                 auVar16._2_2_ + auVar17._2_2_ + auVar20._2_2_ + auVar18._2_2_ + auVar19._2_2_;
            in_XMM3._4_2_ =
                 auVar16._4_2_ + auVar17._4_2_ + auVar20._4_2_ + auVar18._4_2_ + auVar19._4_2_;
            in_XMM3._6_2_ =
                 auVar16._6_2_ + auVar17._6_2_ + auVar20._6_2_ + auVar18._6_2_ + auVar19._6_2_;
            in_XMM3._8_2_ =
                 auVar16._8_2_ + auVar17._8_2_ + auVar20._8_2_ + auVar18._8_2_ + auVar19._8_2_;
            in_XMM3._10_2_ =
                 auVar16._10_2_ + auVar17._10_2_ + auVar20._10_2_ + auVar18._10_2_ + auVar19._10_2_;
            in_XMM3._12_2_ =
                 auVar16._12_2_ + auVar17._12_2_ + auVar20._12_2_ + auVar18._12_2_ + auVar19._12_2_;
            in_XMM3._14_2_ =
                 auVar16._14_2_ + auVar17._14_2_ + auVar20._14_2_ + auVar18._14_2_ + auVar19._14_2_;
            in_XMM2 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar5 + 10 + param_1));
            in_XMM5 = pmovzxbw(auVar20,*(undefined8 *)(lVar5 + 0xb + param_1));
            in_XMM4 = pmovzxbw(auVar19,*(undefined8 *)(lVar5 + 0xc + param_1));
            lVar5 = lVar5 + 0x10;
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2 + uVar14 * 2) =
                 in_XMM3;
            auVar19._0_2_ =
                 auVar15._0_2_ + in_XMM1._0_2_ + in_XMM2._0_2_ + in_XMM5._0_2_ + in_XMM4._0_2_;
            auVar19._2_2_ =
                 auVar15._2_2_ + in_XMM1._2_2_ + in_XMM2._2_2_ + in_XMM5._2_2_ + in_XMM4._2_2_;
            auVar19._4_2_ =
                 auVar15._4_2_ + in_XMM1._4_2_ + in_XMM2._4_2_ + in_XMM5._4_2_ + in_XMM4._4_2_;
            auVar19._6_2_ =
                 auVar15._6_2_ + in_XMM1._6_2_ + in_XMM2._6_2_ + in_XMM5._6_2_ + in_XMM4._6_2_;
            auVar19._8_2_ =
                 auVar15._8_2_ + in_XMM1._8_2_ + in_XMM2._8_2_ + in_XMM5._8_2_ + in_XMM4._8_2_;
            auVar19._10_2_ =
                 auVar15._10_2_ + in_XMM1._10_2_ + in_XMM2._10_2_ + in_XMM5._10_2_ + in_XMM4._10_2_;
            auVar19._12_2_ =
                 auVar15._12_2_ + in_XMM1._12_2_ + in_XMM2._12_2_ + in_XMM5._12_2_ + in_XMM4._12_2_;
            auVar19._14_2_ =
                 auVar15._14_2_ + in_XMM1._14_2_ + in_XMM2._14_2_ + in_XMM5._14_2_ + in_XMM4._14_2_;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2 + 0x10 + uVar14 * 2) = auVar19;
            uVar14 = uVar14 + 0x10;
          } while (uVar14 < (ulonglong)(longlong)iVar12);
          iVar10 = iVar9 + iVar12;
        }
        uVar4 = (ulonglong)iVar12;
        if (uVar4 < uVar1) {
          do {
            *(ushort *)(*(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2 + uVar4 * 2) =
                 (ushort)*(byte *)(uVar4 + lVar6) + (ushort)*(byte *)(uVar4 + 1 + lVar6) +
                 (ushort)*(byte *)(uVar4 + 2 + lVar6) +
                 (ushort)*(byte *)(uVar4 + 3 + lVar6) + (ushort)*(byte *)(uVar4 + 4 + lVar6);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
          lVar11 = (longlong)((int)uVar4 + iVar9);
        }
        else {
          lVar11 = (longlong)iVar10;
        }
      }
      uVar4 = param_6 & 0xffffffff;
      uVar14 = 0;
      lVar6 = iVar2 + param_3;
      do {
        if ((longlong)(uVar8 - 2) <= (longlong)uVar14) break;
        *(ushort *)(*(longlong *)(param_2 + uVar7 * 8) + lVar11 * 2 + uVar14 * 2) =
             (ushort)*(byte *)(uVar14 + lVar6) + (ushort)*(byte *)(uVar14 + 1 + lVar6) +
             (ushort)*(byte *)(uVar14 + 2 + lVar6) +
             (ushort)*(byte *)(uVar14 + 3 + lVar6) + (ushort)*(byte *)(uVar14 + 4 + lVar6);
        uVar14 = uVar14 + 1;
      } while (uVar14 < 2);
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + param_4;
    } while (uVar7 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

