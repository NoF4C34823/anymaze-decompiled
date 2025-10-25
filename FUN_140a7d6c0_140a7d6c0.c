
undefined8
FUN_140a7d6c0(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  
  lVar16 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar16 = 1;
      break;
    case 2:
      lVar16 = 2;
      break;
    case 3:
      lVar16 = 3;
      break;
    case 4:
      lVar16 = 4;
    }
    (*(code *)(&PTR_FUN_14308f0b0)[lVar16])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar4 = FUN_140a7dbfd();
    return uVar4;
  }
  uVar10 = 0;
  if (0 < param_6._4_4_) {
    uVar9 = (int)param_6 - 4;
    do {
      iVar2 = FUN_140a7a840(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      auVar18._8_8_ = extraout_XMM0_Qb;
      auVar18._0_8_ = extraout_XMM0_Qa;
      iVar11 = 0;
      uVar5 = 0;
      if (0 < (int)param_6) {
        do {
          iVar11 = (int)uVar5 + 1;
          *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + uVar5 * 2) =
               ((ushort)*(byte *)(uVar5 + param_3) - (ushort)*(byte *)(uVar5 + 4 + param_3)) +
               ((ushort)*(byte *)(uVar5 + 1 + param_3) - (ushort)*(byte *)(uVar5 + 3 + param_3)) * 2
          ;
          uVar5 = uVar5 + 1;
          if ((ulonglong)(longlong)(int)param_6 <= uVar5) break;
        } while ((longlong)uVar5 < 2);
      }
      lVar16 = (longlong)iVar11;
      if (-1 < (int)param_6 + -5) {
        if ((int)uVar9 < 0x10) {
LAB_140a7dc0f:
          iVar17 = 0;
          if (uVar9 != 0) {
            uVar3 = 0;
            uVar5 = (longlong)(int)uVar9;
            iVar12 = iVar11;
LAB_140a7daf6:
            uVar14 = (ulonglong)(int)uVar3;
            if (uVar5 <= uVar14) goto LAB_140a7db66;
            lVar7 = (longlong)iVar17;
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + lVar7 * 2 + uVar14 * 2)
                   = ((ushort)param_1[uVar14 + lVar7] - (ushort)param_1[uVar14 + 4 + lVar7]) +
                     ((ushort)param_1[uVar14 + 1 + lVar7] - (ushort)param_1[uVar14 + 3 + lVar7]) * 2
              ;
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar5);
            lVar16 = (longlong)((int)uVar14 + iVar11 + iVar17);
          }
        }
        else {
          uVar3 = (int)*(undefined8 *)(param_2 + uVar10 * 8) + iVar11 * 2;
          uVar15 = uVar3 & 0xf;
          if (uVar15 != 0) {
            if ((uVar3 & 1) != 0) goto LAB_140a7dc0f;
            uVar15 = 0x10 - uVar15 >> 1;
          }
          uVar5 = (ulonglong)uVar15;
          if ((int)uVar9 < (int)(uVar15 + 0x10)) goto LAB_140a7dc0f;
          uVar14 = 0;
          iVar17 = uVar9 - (uVar9 - uVar15 & 0xf);
          pbVar6 = param_1;
          if (uVar15 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + uVar14 * 2) =
                   ((ushort)*pbVar6 - (ushort)pbVar6[4]) +
                   ((ushort)pbVar6[1] - (ushort)pbVar6[3]) * 2;
              uVar14 = uVar14 + 1;
              pbVar6 = pbVar6 + 1;
            } while (uVar14 < uVar5);
          }
          pbVar6 = param_1 + uVar5;
          uVar14 = (ulonglong)iVar17;
          do {
            auVar18 = pmovzxbw(auVar18,*(undefined8 *)(pbVar6 + 1));
            auVar20 = pmovzxbw(in_XMM2,*(undefined8 *)(pbVar6 + 3));
            auVar19 = psllw(auVar18,1);
            auVar22 = pmovzxbw(in_XMM5,*(undefined8 *)pbVar6);
            auVar21 = psllw(auVar20,1);
            auVar18 = pmovzxbw(in_XMM3,*(undefined8 *)(pbVar6 + 9));
            auVar20 = pmovzxbw(in_XMM1,*(undefined8 *)(pbVar6 + 0xb));
            in_XMM3 = psllw(auVar18,1);
            auVar18 = pmovzxbw(auVar19,*(undefined8 *)(pbVar6 + 4));
            in_XMM1 = psllw(auVar20,1);
            in_XMM5._0_2_ = ((auVar22._0_2_ + auVar19._0_2_) - auVar21._0_2_) - auVar18._0_2_;
            in_XMM5._2_2_ = ((auVar22._2_2_ + auVar19._2_2_) - auVar21._2_2_) - auVar18._2_2_;
            in_XMM5._4_2_ = ((auVar22._4_2_ + auVar19._4_2_) - auVar21._4_2_) - auVar18._4_2_;
            in_XMM5._6_2_ = ((auVar22._6_2_ + auVar19._6_2_) - auVar21._6_2_) - auVar18._6_2_;
            in_XMM5._8_2_ = ((auVar22._8_2_ + auVar19._8_2_) - auVar21._8_2_) - auVar18._8_2_;
            in_XMM5._10_2_ = ((auVar22._10_2_ + auVar19._10_2_) - auVar21._10_2_) - auVar18._10_2_;
            in_XMM5._12_2_ = ((auVar22._12_2_ + auVar19._12_2_) - auVar21._12_2_) - auVar18._12_2_;
            in_XMM5._14_2_ = ((auVar22._14_2_ + auVar19._14_2_) - auVar21._14_2_) - auVar18._14_2_;
            auVar19 = pmovzxbw(in_XMM4,*(undefined8 *)(pbVar6 + 8));
            in_XMM2 = pmovzxbw(auVar21,*(undefined8 *)(pbVar6 + 0xc));
            pbVar6 = pbVar6 + 0x10;
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + uVar5 * 2) =
                 in_XMM5;
            in_XMM4._0_2_ = ((auVar19._0_2_ + in_XMM3._0_2_) - in_XMM1._0_2_) - in_XMM2._0_2_;
            in_XMM4._2_2_ = ((auVar19._2_2_ + in_XMM3._2_2_) - in_XMM1._2_2_) - in_XMM2._2_2_;
            in_XMM4._4_2_ = ((auVar19._4_2_ + in_XMM3._4_2_) - in_XMM1._4_2_) - in_XMM2._4_2_;
            in_XMM4._6_2_ = ((auVar19._6_2_ + in_XMM3._6_2_) - in_XMM1._6_2_) - in_XMM2._6_2_;
            in_XMM4._8_2_ = ((auVar19._8_2_ + in_XMM3._8_2_) - in_XMM1._8_2_) - in_XMM2._8_2_;
            in_XMM4._10_2_ = ((auVar19._10_2_ + in_XMM3._10_2_) - in_XMM1._10_2_) - in_XMM2._10_2_;
            in_XMM4._12_2_ = ((auVar19._12_2_ + in_XMM3._12_2_) - in_XMM1._12_2_) - in_XMM2._12_2_;
            in_XMM4._14_2_ = ((auVar19._14_2_ + in_XMM3._14_2_) - in_XMM1._14_2_) - in_XMM2._14_2_;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + 0x10 + uVar5 * 2) = in_XMM4;
            uVar5 = uVar5 + 0x10;
          } while (uVar5 < uVar14);
          iVar12 = iVar11 + iVar17;
          if (iVar17 + 1U <= uVar9) {
            uVar5 = (longlong)(int)uVar9 - uVar14;
            if ((longlong)uVar5 < 4) {
              uVar3 = 0;
            }
            else {
              uVar13 = 0;
              puVar8 = (uint *)(param_1 + uVar14);
              uVar3 = (uint)uVar5 & 0xfffffffc;
              lVar7 = 0;
              do {
                uVar13 = uVar13 + 4;
                auVar18 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar8 + 1)),
                                   ZEXT416(*(uint *)((longlong)puVar8 + 1)));
                auVar19 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar8 + 3)),
                                   ZEXT416(*(uint *)((longlong)puVar8 + 3)));
                in_XMM2 = psllw(auVar18,1);
                auVar18 = pmovzxbw(ZEXT416(*puVar8),ZEXT416(*puVar8));
                in_XMM3 = psllw(auVar19,1);
                puVar1 = puVar8 + 1;
                puVar8 = puVar8 + 1;
                in_XMM1 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
                *(ulonglong *)
                 (*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + uVar14 * 2 + lVar7) =
                     CONCAT26(((auVar18._6_2_ + in_XMM2._6_2_) - in_XMM3._6_2_) - in_XMM1._6_2_,
                              CONCAT24(((auVar18._4_2_ + in_XMM2._4_2_) - in_XMM3._4_2_) -
                                       in_XMM1._4_2_,
                                       CONCAT22(((auVar18._2_2_ + in_XMM2._2_2_) - in_XMM3._2_2_) -
                                                in_XMM1._2_2_,
                                                ((auVar18._0_2_ + in_XMM2._0_2_) - in_XMM3._0_2_) -
                                                in_XMM1._0_2_)));
                lVar7 = lVar7 + 8;
              } while (uVar13 < (ulonglong)(longlong)(int)uVar3);
              iVar12 = uVar3 + iVar11 + iVar17;
            }
            goto LAB_140a7daf6;
          }
LAB_140a7db66:
          lVar16 = (longlong)iVar12;
        }
      }
      uVar5 = 0;
      lVar7 = iVar2 + param_3;
      do {
        if ((longlong)((longlong)(int)param_6 - 2U) <= (longlong)uVar5) break;
        *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + lVar16 * 2 + uVar5 * 2) =
             ((ushort)*(byte *)(uVar5 + lVar7) - (ushort)*(byte *)(uVar5 + 4 + lVar7)) +
             ((ushort)*(byte *)(uVar5 + 1 + lVar7) - (ushort)*(byte *)(uVar5 + 3 + lVar7)) * 2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      uVar10 = uVar10 + 1;
      param_1 = param_1 + param_4;
    } while (uVar10 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

