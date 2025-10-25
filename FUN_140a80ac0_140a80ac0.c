
undefined8
FUN_140a80ac0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             ulonglong param_6,uint param_7,undefined1 param_8)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM5 [16];
  
  lVar12 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar12 = 1;
      break;
    case 2:
      lVar12 = 2;
      break;
    case 3:
      lVar12 = 3;
      break;
    case 4:
      lVar12 = 4;
    }
    (*(code *)(&PTR_FUN_14308f0e0)[lVar12])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar3 = FUN_140a80f45();
    return uVar3;
  }
  uVar8 = 0;
  if (0 < param_6._4_4_) {
    uVar9 = (ulonglong)(int)param_6;
    lVar12 = (longlong)param_5;
    uVar1 = uVar9 - 4;
    uVar5 = uVar9;
    uVar15 = uVar8;
    do {
      lVar7 = param_1 + uVar8;
      iVar2 = FUN_140a7dc40(lVar7,param_3,uVar5,5,param_5,param_7,param_8);
      auVar16._8_8_ = extraout_XMM0_Qb;
      auVar16._0_8_ = extraout_XMM0_Qa;
      iVar10 = 0;
      uVar5 = 0;
      if (0 < (int)param_6) {
        do {
          if (lVar12 <= (longlong)uVar5) break;
          *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + uVar5 * 2) =
               (ushort)*(byte *)(uVar5 + param_3) + (ushort)*(byte *)(uVar5 + 2 + param_3) * -2 +
               (ushort)*(byte *)(uVar5 + 4 + param_3);
          uVar4 = uVar5 + 1;
          iVar10 = (int)uVar5 + 1;
          uVar5 = uVar4;
        } while (uVar4 < uVar9);
      }
      lVar13 = (longlong)iVar10;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar1 < 0x10) {
LAB_140a80f5e:
          iVar14 = 0;
          iVar11 = iVar10;
        }
        else {
          uVar5 = *(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2;
          uVar4 = uVar5 & 0xf;
          if ((int)uVar4 != 0) {
            if ((uVar5 & 1) != 0) goto LAB_140a80f5e;
            uVar4 = (ulonglong)(0x10U - (int)uVar4 >> 1);
          }
          if ((longlong)uVar1 < (longlong)(uVar4 + 0x10)) goto LAB_140a80f5e;
          uVar5 = 0;
          iVar14 = (int)uVar1 - ((int)uVar1 - (int)uVar4 & 0xfU);
          if ((int)uVar4 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2 + uVar5 * 2) =
                   (ushort)*(byte *)(uVar5 + lVar7) + (ushort)*(byte *)(uVar5 + 2 + lVar7) * -2 +
                   (ushort)*(byte *)(uVar5 + 4 + lVar7);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
          }
          lVar6 = uVar4 + uVar8;
          do {
            auVar16 = pmovzxbw(auVar16,*(undefined8 *)(lVar6 + 2 + param_1));
            auVar16 = psllw(auVar16,1);
            auVar18 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar6 + param_1));
            auVar17 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar6 + 10 + param_1));
            in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar6 + 4 + param_1));
            in_XMM2 = psllw(auVar17,1);
            in_XMM4._0_2_ = (auVar18._0_2_ - auVar16._0_2_) + in_XMM1._0_2_;
            in_XMM4._2_2_ = (auVar18._2_2_ - auVar16._2_2_) + in_XMM1._2_2_;
            in_XMM4._4_2_ = (auVar18._4_2_ - auVar16._4_2_) + in_XMM1._4_2_;
            in_XMM4._6_2_ = (auVar18._6_2_ - auVar16._6_2_) + in_XMM1._6_2_;
            in_XMM4._8_2_ = (auVar18._8_2_ - auVar16._8_2_) + in_XMM1._8_2_;
            in_XMM4._10_2_ = (auVar18._10_2_ - auVar16._10_2_) + in_XMM1._10_2_;
            in_XMM4._12_2_ = (auVar18._12_2_ - auVar16._12_2_) + in_XMM1._12_2_;
            in_XMM4._14_2_ = (auVar18._14_2_ - auVar16._14_2_) + in_XMM1._14_2_;
            auVar17 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar6 + 8 + param_1));
            in_XMM3 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar6 + 0xc + param_1));
            lVar6 = lVar6 + 0x10;
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2 + uVar4 * 2) =
                 in_XMM4;
            in_XMM5._0_2_ = (auVar17._0_2_ - in_XMM2._0_2_) + in_XMM3._0_2_;
            in_XMM5._2_2_ = (auVar17._2_2_ - in_XMM2._2_2_) + in_XMM3._2_2_;
            in_XMM5._4_2_ = (auVar17._4_2_ - in_XMM2._4_2_) + in_XMM3._4_2_;
            in_XMM5._6_2_ = (auVar17._6_2_ - in_XMM2._6_2_) + in_XMM3._6_2_;
            in_XMM5._8_2_ = (auVar17._8_2_ - in_XMM2._8_2_) + in_XMM3._8_2_;
            in_XMM5._10_2_ = (auVar17._10_2_ - in_XMM2._10_2_) + in_XMM3._10_2_;
            in_XMM5._12_2_ = (auVar17._12_2_ - in_XMM2._12_2_) + in_XMM3._12_2_;
            in_XMM5._14_2_ = (auVar17._14_2_ - in_XMM2._14_2_) + in_XMM3._14_2_;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2 + 0x10 + uVar4 * 2) = in_XMM5;
            uVar4 = uVar4 + 0x10;
          } while (uVar4 < (ulonglong)(longlong)iVar14);
          iVar11 = iVar10 + iVar14;
        }
        uVar5 = (ulonglong)iVar14;
        if (uVar5 < uVar1) {
          do {
            *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2 + uVar5 * 2) =
                 (ushort)*(byte *)(uVar5 + lVar7) + (ushort)*(byte *)(uVar5 + 2 + lVar7) * -2 +
                 (ushort)*(byte *)(uVar5 + 4 + lVar7);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
          lVar13 = (longlong)((int)uVar5 + iVar10);
        }
        else {
          lVar13 = (longlong)iVar11;
        }
      }
      uVar5 = param_6 & 0xffffffff;
      uVar4 = 0;
      if (0 < 5 - (param_5 + 1)) {
        lVar7 = iVar2 + param_3;
        do {
          if ((longlong)(uVar9 - lVar12) <= (longlong)uVar4) break;
          *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + lVar13 * 2 + uVar4 * 2) =
               (ushort)*(byte *)(uVar4 + lVar7) + (ushort)*(byte *)(uVar4 + 2 + lVar7) * -2 +
               (ushort)*(byte *)(uVar4 + 4 + lVar7);
          uVar4 = uVar4 + 1;
        } while (uVar4 < 4U - lVar12);
      }
      uVar15 = uVar15 + 1;
      uVar8 = uVar8 + (longlong)param_4;
    } while (uVar15 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

