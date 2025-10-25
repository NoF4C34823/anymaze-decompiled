
undefined8 FUN_140a7d798(byte *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int in_R10D;
  uint uVar13;
  ulonglong in_R11;
  longlong lVar14;
  int iVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000078;
  ulonglong uStack0000000000000088;
  longlong lStack0000000000000090;
  int iStack0000000000000098;
  longlong lStack00000000000000a0;
  longlong lStack00000000000000a8;
  undefined4 in_stack_000000e0;
  int iStack00000000000000e8;
  int iStack00000000000000ec;
  undefined4 in_stack_000000f0;
  byte in_stack_000000f8;
  
  iStack0000000000000098 = in_R10D + -5;
  uStack0000000000000078 = (ulonglong)in_R10D;
  lStack0000000000000090 = uStack0000000000000078 - 2;
  uVar8 = in_R10D - 4;
  uStack0000000000000088 = (ulonglong)(int)uVar8;
  lStack00000000000000a0 = param_4;
  lStack00000000000000a8 = param_3;
  do {
    uStack0000000000000028 = in_stack_000000f0;
    uStack0000000000000030 = (uint)in_stack_000000f8;
    iVar2 = FUN_140a7a840(param_1,lStack00000000000000a8,iStack00000000000000e8,5,in_stack_000000e0)
    ;
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = extraout_XMM0_Qa;
    iVar9 = 0;
    uVar4 = 0;
    if (0 < iStack00000000000000e8) {
      do {
        iVar9 = (int)uVar4 + 1;
        *(ushort *)(*(longlong *)(param_2 + in_R11 * 8) + uVar4 * 2) =
             ((ushort)*(byte *)(uVar4 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar4 + 4 + lStack00000000000000a8)) +
             ((ushort)*(byte *)(uVar4 + 1 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar4 + 3 + lStack00000000000000a8)) * 2;
        uVar4 = uVar4 + 1;
        if (uStack0000000000000078 <= uVar4) break;
      } while ((longlong)uVar4 < 2);
    }
    lVar14 = (longlong)iVar9;
    if (-1 < iStack0000000000000098) {
      if ((int)uVar8 < 0x10) {
LAB_140a7dc0f:
        iVar15 = 0;
        if (uVar8 != 0) {
          uVar3 = 0;
          uVar4 = uStack0000000000000088;
          iVar10 = iVar9;
LAB_140a7daf6:
          uVar12 = (ulonglong)(int)uVar3;
          if (uVar4 <= uVar12) goto LAB_140a7db66;
          lVar6 = (longlong)iVar15;
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + lVar6 * 2 + uVar12 * 2) =
                 ((ushort)param_1[uVar12 + lVar6] - (ushort)param_1[uVar12 + 4 + lVar6]) +
                 ((ushort)param_1[uVar12 + 1 + lVar6] - (ushort)param_1[uVar12 + 3 + lVar6]) * 2;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
          lVar14 = (longlong)((int)uVar12 + iVar9 + iVar15);
        }
      }
      else {
        uVar3 = (int)*(undefined8 *)(param_2 + in_R11 * 8) + iVar9 * 2;
        uVar13 = uVar3 & 0xf;
        if (uVar13 != 0) {
          if ((uVar3 & 1) != 0) goto LAB_140a7dc0f;
          uVar13 = 0x10 - uVar13 >> 1;
        }
        uVar4 = (ulonglong)uVar13;
        if ((int)uVar8 < (int)(uVar13 + 0x10)) goto LAB_140a7dc0f;
        uVar12 = 0;
        iVar15 = uVar8 - (uVar8 - uVar13 & 0xf);
        pbVar5 = param_1;
        if (uVar13 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + uVar12 * 2) =
                 ((ushort)*pbVar5 - (ushort)pbVar5[4]) + ((ushort)pbVar5[1] - (ushort)pbVar5[3]) * 2
            ;
            uVar12 = uVar12 + 1;
            pbVar5 = pbVar5 + 1;
          } while (uVar12 < uVar4);
        }
        pbVar5 = param_1 + uVar4;
        uVar12 = (ulonglong)iVar15;
        do {
          auVar16 = pmovzxbw(auVar16,*(undefined8 *)(pbVar5 + 1));
          auVar18 = pmovzxbw(in_XMM2,*(undefined8 *)(pbVar5 + 3));
          auVar17 = psllw(auVar16,1);
          auVar20 = pmovzxbw(in_XMM5,*(undefined8 *)pbVar5);
          auVar19 = psllw(auVar18,1);
          auVar16 = pmovzxbw(in_XMM3,*(undefined8 *)(pbVar5 + 9));
          auVar18 = pmovzxbw(in_XMM1,*(undefined8 *)(pbVar5 + 0xb));
          in_XMM3 = psllw(auVar16,1);
          auVar16 = pmovzxbw(auVar17,*(undefined8 *)(pbVar5 + 4));
          in_XMM1 = psllw(auVar18,1);
          in_XMM5._0_2_ = ((auVar20._0_2_ + auVar17._0_2_) - auVar19._0_2_) - auVar16._0_2_;
          in_XMM5._2_2_ = ((auVar20._2_2_ + auVar17._2_2_) - auVar19._2_2_) - auVar16._2_2_;
          in_XMM5._4_2_ = ((auVar20._4_2_ + auVar17._4_2_) - auVar19._4_2_) - auVar16._4_2_;
          in_XMM5._6_2_ = ((auVar20._6_2_ + auVar17._6_2_) - auVar19._6_2_) - auVar16._6_2_;
          in_XMM5._8_2_ = ((auVar20._8_2_ + auVar17._8_2_) - auVar19._8_2_) - auVar16._8_2_;
          in_XMM5._10_2_ = ((auVar20._10_2_ + auVar17._10_2_) - auVar19._10_2_) - auVar16._10_2_;
          in_XMM5._12_2_ = ((auVar20._12_2_ + auVar17._12_2_) - auVar19._12_2_) - auVar16._12_2_;
          in_XMM5._14_2_ = ((auVar20._14_2_ + auVar17._14_2_) - auVar19._14_2_) - auVar16._14_2_;
          auVar17 = pmovzxbw(in_XMM4,*(undefined8 *)(pbVar5 + 8));
          in_XMM2 = pmovzxbw(auVar19,*(undefined8 *)(pbVar5 + 0xc));
          pbVar5 = pbVar5 + 0x10;
          *(undefined1 (*) [16])(*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + uVar4 * 2) =
               in_XMM5;
          in_XMM4._0_2_ = ((auVar17._0_2_ + in_XMM3._0_2_) - in_XMM1._0_2_) - in_XMM2._0_2_;
          in_XMM4._2_2_ = ((auVar17._2_2_ + in_XMM3._2_2_) - in_XMM1._2_2_) - in_XMM2._2_2_;
          in_XMM4._4_2_ = ((auVar17._4_2_ + in_XMM3._4_2_) - in_XMM1._4_2_) - in_XMM2._4_2_;
          in_XMM4._6_2_ = ((auVar17._6_2_ + in_XMM3._6_2_) - in_XMM1._6_2_) - in_XMM2._6_2_;
          in_XMM4._8_2_ = ((auVar17._8_2_ + in_XMM3._8_2_) - in_XMM1._8_2_) - in_XMM2._8_2_;
          in_XMM4._10_2_ = ((auVar17._10_2_ + in_XMM3._10_2_) - in_XMM1._10_2_) - in_XMM2._10_2_;
          in_XMM4._12_2_ = ((auVar17._12_2_ + in_XMM3._12_2_) - in_XMM1._12_2_) - in_XMM2._12_2_;
          in_XMM4._14_2_ = ((auVar17._14_2_ + in_XMM3._14_2_) - in_XMM1._14_2_) - in_XMM2._14_2_;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + 0x10 + uVar4 * 2) = in_XMM4;
          uVar4 = uVar4 + 0x10;
        } while (uVar4 < uVar12);
        iVar10 = iVar9 + iVar15;
        if (iVar15 + 1U <= uVar8) {
          uVar4 = uStack0000000000000088 - uVar12;
          if ((longlong)uVar4 < 4) {
            uVar3 = 0;
          }
          else {
            uVar11 = 0;
            puVar7 = (uint *)(param_1 + uVar12);
            uVar3 = (uint)uVar4 & 0xfffffffc;
            lVar6 = 0;
            do {
              uVar11 = uVar11 + 4;
              auVar16 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar7 + 1)),
                                 ZEXT416(*(uint *)((longlong)puVar7 + 1)));
              auVar17 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar7 + 3)),
                                 ZEXT416(*(uint *)((longlong)puVar7 + 3)));
              in_XMM2 = psllw(auVar16,1);
              auVar16 = pmovzxbw(ZEXT416(*puVar7),ZEXT416(*puVar7));
              in_XMM3 = psllw(auVar17,1);
              puVar1 = puVar7 + 1;
              puVar7 = puVar7 + 1;
              in_XMM1 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
              *(ulonglong *)(*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + uVar12 * 2 + lVar6)
                   = CONCAT26(((auVar16._6_2_ + in_XMM2._6_2_) - in_XMM3._6_2_) - in_XMM1._6_2_,
                              CONCAT24(((auVar16._4_2_ + in_XMM2._4_2_) - in_XMM3._4_2_) -
                                       in_XMM1._4_2_,
                                       CONCAT22(((auVar16._2_2_ + in_XMM2._2_2_) - in_XMM3._2_2_) -
                                                in_XMM1._2_2_,
                                                ((auVar16._0_2_ + in_XMM2._0_2_) - in_XMM3._0_2_) -
                                                in_XMM1._0_2_)));
              lVar6 = lVar6 + 8;
            } while (uVar11 < (ulonglong)(longlong)(int)uVar3);
            iVar10 = uVar3 + iVar9 + iVar15;
          }
          goto LAB_140a7daf6;
        }
LAB_140a7db66:
        lVar14 = (longlong)iVar10;
      }
    }
    uVar4 = 0;
    lVar6 = iVar2 + lStack00000000000000a8;
    do {
      if (lStack0000000000000090 <= (longlong)uVar4) break;
      *(ushort *)(*(longlong *)(param_2 + in_R11 * 8) + lVar14 * 2 + uVar4 * 2) =
           ((ushort)*(byte *)(uVar4 + lVar6) - (ushort)*(byte *)(uVar4 + 4 + lVar6)) +
           ((ushort)*(byte *)(uVar4 + 1 + lVar6) - (ushort)*(byte *)(uVar4 + 3 + lVar6)) * 2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    in_R11 = in_R11 + 1;
    param_1 = param_1 + lStack00000000000000a0;
    if ((ulonglong)(longlong)iStack00000000000000ec <= in_R11) {
      return 0;
    }
  } while( true );
}

