
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a83ee9(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  longlong in_RAX;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong in_R10;
  ulonglong in_R11;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong unaff_R15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000080;
  longlong lStack0000000000000088;
  ulonglong uStack00000000000000a0;
  longlong lStack00000000000000a8;
  ulonglong uStack00000000000000b0;
  longlong lStack00000000000000b8;
  int iStack00000000000000c0;
  int iStack00000000000000c8;
  longlong lStack00000000000000d0;
  longlong lStack00000000000000d8;
  longlong lStack00000000000000e0;
  undefined4 in_stack_00000120;
  int iStack0000000000000128;
  int iStack000000000000012c;
  undefined4 in_stack_00000130;
  byte in_stack_00000138;
  
  auVar4 = _DAT_14308f110;
  iStack00000000000000c0 = param_4 + -5;
  uStack0000000000000080 = (ulonglong)param_4;
  lStack0000000000000088 = (longlong)param_3;
  iStack00000000000000c8 = 5 - (param_3 + 1);
  lStack00000000000000a8 = uStack0000000000000080 - lStack0000000000000088;
  uStack00000000000000b0 = 4 - lStack0000000000000088;
  uVar9 = (ulonglong)(param_4 + -4);
  uStack00000000000000a0 = uVar9;
  lStack00000000000000b8 = param_2;
  lStack00000000000000d0 = in_R10;
  lStack00000000000000d8 = in_RAX;
  lStack00000000000000e0 = param_1;
  do {
    lVar10 = lStack00000000000000e0 + unaff_R15;
    uStack0000000000000028 = in_stack_00000130;
    uStack0000000000000030 = (uint)in_stack_00000138;
    iVar5 = FUN_140a80f80(lVar10,lStack00000000000000d8,iStack0000000000000128,5,in_stack_00000120);
    auVar19._8_8_ = extraout_XMM0_Qb;
    auVar19._0_8_ = extraout_XMM0_Qa;
    iVar16 = 0;
    uVar12 = 0;
    if (0 < iStack0000000000000128) {
      do {
        if (lStack0000000000000088 <= (longlong)uVar12) break;
        bVar2 = *(byte *)(uVar12 + 2 + lStack00000000000000d8);
        *(ushort *)(*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + uVar12 * 2) =
             (ushort)*(byte *)(uVar12 + lStack00000000000000d8) +
             ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
             (ushort)*(byte *)(uVar12 + 4 + lStack00000000000000d8) +
             ((ushort)*(byte *)(uVar12 + 1 + lStack00000000000000d8) +
             (ushort)*(byte *)(uVar12 + 3 + lStack00000000000000d8)) * 4;
        uVar13 = uVar12 + 1;
        iVar16 = (int)uVar12 + 1;
        uVar12 = uVar13;
      } while (uVar13 < uStack0000000000000080);
    }
    lVar14 = (longlong)iVar16;
    if (-1 < iStack00000000000000c0) {
      uVar6 = (uint)uVar9;
      if ((int)uVar6 < 0x10) {
LAB_140a84480:
        iVar15 = 0;
        if (uVar6 != 0) {
          uVar6 = 0;
          uVar12 = uStack00000000000000a0;
          iVar17 = iVar16;
LAB_140a84312:
          uVar13 = (ulonglong)(int)uVar6;
          if (uVar12 <= uVar13) goto LAB_140a84396;
          lVar10 = lVar10 + iVar15;
          do {
            bVar2 = *(byte *)(uVar13 + 2 + lVar10);
            *(ushort *)
             (*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + (longlong)iVar15 * 2
             + uVar13 * 2) =
                 (ushort)*(byte *)(uVar13 + lVar10) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
                 (ushort)*(byte *)(uVar13 + 4 + lVar10) +
                 ((ushort)*(byte *)(uVar13 + 1 + lVar10) + (ushort)*(byte *)(uVar13 + 3 + lVar10)) *
                 4;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
          lVar14 = (longlong)((int)uVar13 + iVar16 + iVar15);
        }
      }
      else {
        uVar3 = (int)*(undefined8 *)(lStack00000000000000b8 + in_R11 * 8) + iVar16 * 2;
        uVar11 = uVar3 & 0xf;
        if (uVar11 != 0) {
          if ((uVar3 & 1) != 0) goto LAB_140a84480;
          uVar11 = 0x10 - uVar11 >> 1;
        }
        uVar12 = (ulonglong)uVar11;
        if ((int)uVar6 < (int)(uVar11 + 0x10)) goto LAB_140a84480;
        uVar13 = 0;
        iVar15 = uVar6 - (uVar6 - uVar11 & 0xf);
        if (uVar11 != 0) {
          do {
            bVar2 = *(byte *)(uVar13 + 2 + lVar10);
            *(ushort *)
             (*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + uVar13 * 2) =
                 (ushort)*(byte *)(uVar13 + lVar10) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
                 (ushort)*(byte *)(uVar13 + 4 + lVar10) +
                 ((ushort)*(byte *)(uVar13 + 1 + lVar10) + (ushort)*(byte *)(uVar13 + 3 + lVar10)) *
                 4;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
        }
        lVar7 = uVar12 + unaff_R15;
        uVar13 = (ulonglong)iVar15;
        do {
          auVar20 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar7 + 1 + lStack00000000000000e0));
          auVar24 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar7 + 2 + lStack00000000000000e0));
          auVar20 = psllw(auVar20,2);
          sVar27 = auVar4._0_2_;
          auVar25._0_2_ = auVar24._0_2_ * sVar27;
          sVar28 = auVar4._2_2_;
          auVar25._2_2_ = auVar24._2_2_ * sVar28;
          sVar29 = auVar4._4_2_;
          auVar25._4_2_ = auVar24._4_2_ * sVar29;
          sVar30 = auVar4._6_2_;
          auVar25._6_2_ = auVar24._6_2_ * sVar30;
          sVar31 = auVar4._8_2_;
          auVar25._8_2_ = auVar24._8_2_ * sVar31;
          sVar32 = auVar4._10_2_;
          auVar25._10_2_ = auVar24._10_2_ * sVar32;
          sVar33 = auVar4._12_2_;
          auVar25._12_2_ = auVar24._12_2_ * sVar33;
          sVar34 = auVar4._14_2_;
          auVar25._14_2_ = auVar24._14_2_ * sVar34;
          auVar21 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar7 + lStack00000000000000e0));
          auVar24 = pmovzxbw(auVar20,*(undefined8 *)(lVar7 + 10 + lStack00000000000000e0));
          auVar22 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar7 + 3 + lStack00000000000000e0));
          in_XMM1._0_2_ = auVar24._0_2_ * sVar27;
          in_XMM1._2_2_ = auVar24._2_2_ * sVar28;
          in_XMM1._4_2_ = auVar24._4_2_ * sVar29;
          in_XMM1._6_2_ = auVar24._6_2_ * sVar30;
          in_XMM1._8_2_ = auVar24._8_2_ * sVar31;
          in_XMM1._10_2_ = auVar24._10_2_ * sVar32;
          in_XMM1._12_2_ = auVar24._12_2_ * sVar33;
          in_XMM1._14_2_ = auVar24._14_2_ * sVar34;
          auVar19 = pmovzxbw(auVar19,*(undefined8 *)(lVar7 + 9 + lStack00000000000000e0));
          auVar24 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar7 + 8 + lStack00000000000000e0));
          auVar22 = psllw(auVar22,2);
          auVar19 = psllw(auVar19,2);
          auVar26 = pmovzxbw(auVar25,*(undefined8 *)(lVar7 + 4 + lStack00000000000000e0));
          auVar23 = pmovzxbw(auVar22,*(undefined8 *)(lVar7 + 0xb + lStack00000000000000e0));
          in_XMM4 = psllw(auVar23,2);
          in_XMM3._0_2_ =
               auVar21._0_2_ + auVar20._0_2_ + auVar25._0_2_ + auVar22._0_2_ + auVar26._0_2_;
          in_XMM3._2_2_ =
               auVar21._2_2_ + auVar20._2_2_ + auVar25._2_2_ + auVar22._2_2_ + auVar26._2_2_;
          in_XMM3._4_2_ =
               auVar21._4_2_ + auVar20._4_2_ + auVar25._4_2_ + auVar22._4_2_ + auVar26._4_2_;
          in_XMM3._6_2_ =
               auVar21._6_2_ + auVar20._6_2_ + auVar25._6_2_ + auVar22._6_2_ + auVar26._6_2_;
          in_XMM3._8_2_ =
               auVar21._8_2_ + auVar20._8_2_ + auVar25._8_2_ + auVar22._8_2_ + auVar26._8_2_;
          in_XMM3._10_2_ =
               auVar21._10_2_ + auVar20._10_2_ + auVar25._10_2_ + auVar22._10_2_ + auVar26._10_2_;
          in_XMM3._12_2_ =
               auVar21._12_2_ + auVar20._12_2_ + auVar25._12_2_ + auVar22._12_2_ + auVar26._12_2_;
          in_XMM3._14_2_ =
               auVar21._14_2_ + auVar20._14_2_ + auVar25._14_2_ + auVar22._14_2_ + auVar26._14_2_;
          in_XMM5 = pmovzxbw(auVar26,*(undefined8 *)(lVar7 + 0xc + lStack00000000000000e0));
          lVar7 = lVar7 + 0x10;
          *(undefined1 (*) [16])
           (*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + uVar12 * 2) = in_XMM3;
          in_XMM2._0_2_ =
               auVar24._0_2_ + auVar19._0_2_ + in_XMM1._0_2_ + in_XMM4._0_2_ + in_XMM5._0_2_;
          in_XMM2._2_2_ =
               auVar24._2_2_ + auVar19._2_2_ + in_XMM1._2_2_ + in_XMM4._2_2_ + in_XMM5._2_2_;
          in_XMM2._4_2_ =
               auVar24._4_2_ + auVar19._4_2_ + in_XMM1._4_2_ + in_XMM4._4_2_ + in_XMM5._4_2_;
          in_XMM2._6_2_ =
               auVar24._6_2_ + auVar19._6_2_ + in_XMM1._6_2_ + in_XMM4._6_2_ + in_XMM5._6_2_;
          in_XMM2._8_2_ =
               auVar24._8_2_ + auVar19._8_2_ + in_XMM1._8_2_ + in_XMM4._8_2_ + in_XMM5._8_2_;
          in_XMM2._10_2_ =
               auVar24._10_2_ + auVar19._10_2_ + in_XMM1._10_2_ + in_XMM4._10_2_ + in_XMM5._10_2_;
          in_XMM2._12_2_ =
               auVar24._12_2_ + auVar19._12_2_ + in_XMM1._12_2_ + in_XMM4._12_2_ + in_XMM5._12_2_;
          in_XMM2._14_2_ =
               auVar24._14_2_ + auVar19._14_2_ + in_XMM1._14_2_ + in_XMM4._14_2_ + in_XMM5._14_2_;
          *(undefined1 (*) [16])
           (*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + 0x10 + uVar12 * 2) =
               in_XMM2;
          uVar12 = uVar12 + 0x10;
        } while (uVar12 < uVar13);
        iVar17 = iVar16 + iVar15;
        if (iVar15 + 1U <= uVar6) {
          uVar12 = uStack00000000000000a0 - uVar13;
          if ((longlong)uVar12 < 4) {
            uVar6 = 0;
          }
          else {
            uVar18 = 0;
            puVar8 = (uint *)(lVar10 + uVar13);
            uVar6 = (uint)uVar12 & 0xfffffffc;
            lVar7 = 0;
            do {
              uVar18 = uVar18 + 4;
              auVar19 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar8 + 2)),
                                 ZEXT416(*(uint *)((longlong)puVar8 + 2)));
              in_XMM4._0_2_ = auVar19._0_2_ * sVar27;
              in_XMM4._2_2_ = auVar19._2_2_ * sVar28;
              in_XMM4._4_2_ = auVar19._4_2_ * sVar29;
              in_XMM4._6_2_ = auVar19._6_2_ * sVar30;
              in_XMM4._8_2_ = auVar19._8_2_ * sVar31;
              in_XMM4._10_2_ = auVar19._10_2_ * sVar32;
              in_XMM4._12_2_ = auVar19._12_2_ * sVar33;
              in_XMM4._14_2_ = auVar19._14_2_ * sVar34;
              auVar19 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar8 + 1)),
                                 ZEXT416(*(uint *)((longlong)puVar8 + 1)));
              auVar19 = psllw(auVar19,2);
              auVar20 = pmovzxbw(ZEXT416(*puVar8),ZEXT416(*puVar8));
              auVar24 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar8 + 3)),
                                 ZEXT416(*(uint *)((longlong)puVar8 + 3)));
              puVar1 = puVar8 + 1;
              puVar8 = puVar8 + 1;
              in_XMM2 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
              in_XMM3 = psllw(auVar24,2);
              in_XMM1._0_8_ =
                   CONCAT26(auVar20._6_2_ + auVar19._6_2_ + in_XMM4._6_2_ + in_XMM3._6_2_ +
                            in_XMM2._6_2_,
                            CONCAT24(auVar20._4_2_ + auVar19._4_2_ + in_XMM4._4_2_ + in_XMM3._4_2_ +
                                     in_XMM2._4_2_,
                                     CONCAT22(auVar20._2_2_ + auVar19._2_2_ + in_XMM4._2_2_ +
                                              in_XMM3._2_2_ + in_XMM2._2_2_,
                                              auVar20._0_2_ + auVar19._0_2_ + in_XMM4._0_2_ +
                                              in_XMM3._0_2_ + in_XMM2._0_2_)));
              in_XMM1._8_2_ =
                   auVar20._8_2_ + auVar19._8_2_ + in_XMM4._8_2_ + in_XMM3._8_2_ + in_XMM2._8_2_;
              in_XMM1._10_2_ =
                   auVar20._10_2_ + auVar19._10_2_ + in_XMM4._10_2_ + in_XMM3._10_2_ +
                   in_XMM2._10_2_;
              in_XMM1._12_2_ =
                   auVar20._12_2_ + auVar19._12_2_ + in_XMM4._12_2_ + in_XMM3._12_2_ +
                   in_XMM2._12_2_;
              in_XMM1._14_2_ =
                   auVar20._14_2_ + auVar19._14_2_ + in_XMM4._14_2_ + in_XMM3._14_2_ +
                   in_XMM2._14_2_;
              *(undefined8 *)
               (*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + uVar13 * 2 + lVar7
               ) = in_XMM1._0_8_;
              lVar7 = lVar7 + 8;
            } while (uVar18 < (ulonglong)(longlong)(int)uVar6);
            uVar9 = uVar9 & 0xffffffff;
            iVar17 = uVar6 + iVar16 + iVar15;
          }
          goto LAB_140a84312;
        }
LAB_140a84396:
        lVar14 = (longlong)iVar17;
      }
    }
    uVar12 = 0;
    if (0 < iStack00000000000000c8) {
      lVar10 = iVar5 + lStack00000000000000d8;
      do {
        if (lStack00000000000000a8 <= (longlong)uVar12) break;
        bVar2 = *(byte *)(uVar12 + 2 + lVar10);
        *(ushort *)(*(longlong *)(lStack00000000000000b8 + in_R11 * 8) + lVar14 * 2 + uVar12 * 2) =
             (ushort)*(byte *)(uVar12 + lVar10) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
             (ushort)*(byte *)(uVar12 + 4 + lVar10) +
             ((ushort)*(byte *)(uVar12 + 1 + lVar10) + (ushort)*(byte *)(uVar12 + 3 + lVar10)) * 4;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack00000000000000b0);
    }
    in_R11 = in_R11 + 1;
    unaff_R15 = unaff_R15 + lStack00000000000000d0;
    if ((ulonglong)(longlong)iStack000000000000012c <= in_R11) {
      return 0;
    }
  } while( true );
}

