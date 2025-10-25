
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140a83e00(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  
  auVar4 = _DAT_14308f110;
  lVar23 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar23 = 1;
      break;
    case 2:
      lVar23 = 2;
      break;
    case 3:
      lVar23 = 3;
      break;
    case 4:
      lVar23 = 4;
    }
    (*(code *)(&PTR_FUN_14308f120)[lVar23])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar7 = FUN_140a8446c();
    return uVar7;
  }
  lVar23 = 0;
  if (0 < param_6._4_4_) {
    lVar16 = (longlong)param_5;
    uVar11 = (ulonglong)((int)param_6 + -4);
    uVar10 = 0;
    uVar12 = uVar11;
    do {
      lVar13 = param_1 + lVar23;
      iVar5 = FUN_140a80f80(lVar13,param_3,(int)param_6,5,param_5,param_7,param_8);
      auVar24._8_8_ = extraout_XMM0_Qb;
      auVar24._0_8_ = extraout_XMM0_Qa;
      iVar20 = 0;
      uVar15 = 0;
      if (0 < (int)param_6) {
        do {
          if (lVar16 <= (longlong)uVar15) break;
          bVar2 = *(byte *)(uVar15 + 2 + param_3);
          *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + uVar15 * 2) =
               (ushort)*(byte *)(uVar15 + param_3) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
               (ushort)*(byte *)(uVar15 + 4 + param_3) +
               ((ushort)*(byte *)(uVar15 + 1 + param_3) + (ushort)*(byte *)(uVar15 + 3 + param_3)) *
               4;
          uVar17 = uVar15 + 1;
          iVar20 = (int)uVar15 + 1;
          uVar15 = uVar17;
        } while (uVar17 < (ulonglong)(longlong)(int)param_6);
      }
      lVar18 = (longlong)iVar20;
      if (-1 < (int)param_6 + -5) {
        uVar6 = (uint)uVar12;
        if ((int)uVar6 < 0x10) {
LAB_140a84480:
          iVar19 = 0;
          if (uVar6 != 0) {
            uVar6 = 0;
            uVar15 = uVar11;
            iVar21 = iVar20;
LAB_140a84312:
            uVar17 = (ulonglong)(int)uVar6;
            if (uVar15 <= uVar17) goto LAB_140a84396;
            lVar13 = lVar13 + iVar19;
            do {
              bVar2 = *(byte *)(uVar17 + 2 + lVar13);
              *(ushort *)
               (*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + (longlong)iVar19 * 2 + uVar17 * 2
               ) = (ushort)*(byte *)(uVar17 + lVar13) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
                   (ushort)*(byte *)(uVar17 + 4 + lVar13) +
                   ((ushort)*(byte *)(uVar17 + 1 + lVar13) + (ushort)*(byte *)(uVar17 + 3 + lVar13))
                   * 4;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar15);
            lVar18 = (longlong)((int)uVar17 + iVar20 + iVar19);
          }
        }
        else {
          uVar3 = (int)*(undefined8 *)(param_2 + uVar10 * 8) + iVar20 * 2;
          uVar14 = uVar3 & 0xf;
          if (uVar14 != 0) {
            if ((uVar3 & 1) != 0) goto LAB_140a84480;
            uVar14 = 0x10 - uVar14 >> 1;
          }
          uVar15 = (ulonglong)uVar14;
          if ((int)uVar6 < (int)(uVar14 + 0x10)) goto LAB_140a84480;
          uVar17 = 0;
          iVar19 = uVar6 - (uVar6 - uVar14 & 0xf);
          if (uVar14 != 0) {
            do {
              bVar2 = *(byte *)(uVar17 + 2 + lVar13);
              *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + uVar17 * 2) =
                   (ushort)*(byte *)(uVar17 + lVar13) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
                   (ushort)*(byte *)(uVar17 + 4 + lVar13) +
                   ((ushort)*(byte *)(uVar17 + 1 + lVar13) + (ushort)*(byte *)(uVar17 + 3 + lVar13))
                   * 4;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar15);
          }
          lVar8 = uVar15 + lVar23;
          uVar17 = (ulonglong)iVar19;
          do {
            auVar25 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar8 + 1 + param_1));
            auVar29 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar8 + 2 + param_1));
            auVar25 = psllw(auVar25,2);
            sVar32 = auVar4._0_2_;
            auVar30._0_2_ = auVar29._0_2_ * sVar32;
            sVar33 = auVar4._2_2_;
            auVar30._2_2_ = auVar29._2_2_ * sVar33;
            sVar34 = auVar4._4_2_;
            auVar30._4_2_ = auVar29._4_2_ * sVar34;
            sVar35 = auVar4._6_2_;
            auVar30._6_2_ = auVar29._6_2_ * sVar35;
            sVar36 = auVar4._8_2_;
            auVar30._8_2_ = auVar29._8_2_ * sVar36;
            sVar37 = auVar4._10_2_;
            auVar30._10_2_ = auVar29._10_2_ * sVar37;
            sVar38 = auVar4._12_2_;
            auVar30._12_2_ = auVar29._12_2_ * sVar38;
            sVar39 = auVar4._14_2_;
            auVar30._14_2_ = auVar29._14_2_ * sVar39;
            auVar26 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar8 + param_1));
            auVar29 = pmovzxbw(auVar25,*(undefined8 *)(lVar8 + 10 + param_1));
            auVar27 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar8 + 3 + param_1));
            in_XMM1._0_2_ = auVar29._0_2_ * sVar32;
            in_XMM1._2_2_ = auVar29._2_2_ * sVar33;
            in_XMM1._4_2_ = auVar29._4_2_ * sVar34;
            in_XMM1._6_2_ = auVar29._6_2_ * sVar35;
            in_XMM1._8_2_ = auVar29._8_2_ * sVar36;
            in_XMM1._10_2_ = auVar29._10_2_ * sVar37;
            in_XMM1._12_2_ = auVar29._12_2_ * sVar38;
            in_XMM1._14_2_ = auVar29._14_2_ * sVar39;
            auVar24 = pmovzxbw(auVar24,*(undefined8 *)(lVar8 + 9 + param_1));
            auVar29 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar8 + 8 + param_1));
            auVar27 = psllw(auVar27,2);
            auVar24 = psllw(auVar24,2);
            auVar31 = pmovzxbw(auVar30,*(undefined8 *)(lVar8 + 4 + param_1));
            auVar28 = pmovzxbw(auVar27,*(undefined8 *)(lVar8 + 0xb + param_1));
            in_XMM4 = psllw(auVar28,2);
            in_XMM3._0_2_ =
                 auVar26._0_2_ + auVar25._0_2_ + auVar30._0_2_ + auVar27._0_2_ + auVar31._0_2_;
            in_XMM3._2_2_ =
                 auVar26._2_2_ + auVar25._2_2_ + auVar30._2_2_ + auVar27._2_2_ + auVar31._2_2_;
            in_XMM3._4_2_ =
                 auVar26._4_2_ + auVar25._4_2_ + auVar30._4_2_ + auVar27._4_2_ + auVar31._4_2_;
            in_XMM3._6_2_ =
                 auVar26._6_2_ + auVar25._6_2_ + auVar30._6_2_ + auVar27._6_2_ + auVar31._6_2_;
            in_XMM3._8_2_ =
                 auVar26._8_2_ + auVar25._8_2_ + auVar30._8_2_ + auVar27._8_2_ + auVar31._8_2_;
            in_XMM3._10_2_ =
                 auVar26._10_2_ + auVar25._10_2_ + auVar30._10_2_ + auVar27._10_2_ + auVar31._10_2_;
            in_XMM3._12_2_ =
                 auVar26._12_2_ + auVar25._12_2_ + auVar30._12_2_ + auVar27._12_2_ + auVar31._12_2_;
            in_XMM3._14_2_ =
                 auVar26._14_2_ + auVar25._14_2_ + auVar30._14_2_ + auVar27._14_2_ + auVar31._14_2_;
            in_XMM5 = pmovzxbw(auVar31,*(undefined8 *)(lVar8 + 0xc + param_1));
            lVar8 = lVar8 + 0x10;
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + uVar15 * 2) =
                 in_XMM3;
            in_XMM2._0_2_ =
                 auVar29._0_2_ + auVar24._0_2_ + in_XMM1._0_2_ + in_XMM4._0_2_ + in_XMM5._0_2_;
            in_XMM2._2_2_ =
                 auVar29._2_2_ + auVar24._2_2_ + in_XMM1._2_2_ + in_XMM4._2_2_ + in_XMM5._2_2_;
            in_XMM2._4_2_ =
                 auVar29._4_2_ + auVar24._4_2_ + in_XMM1._4_2_ + in_XMM4._4_2_ + in_XMM5._4_2_;
            in_XMM2._6_2_ =
                 auVar29._6_2_ + auVar24._6_2_ + in_XMM1._6_2_ + in_XMM4._6_2_ + in_XMM5._6_2_;
            in_XMM2._8_2_ =
                 auVar29._8_2_ + auVar24._8_2_ + in_XMM1._8_2_ + in_XMM4._8_2_ + in_XMM5._8_2_;
            in_XMM2._10_2_ =
                 auVar29._10_2_ + auVar24._10_2_ + in_XMM1._10_2_ + in_XMM4._10_2_ + in_XMM5._10_2_;
            in_XMM2._12_2_ =
                 auVar29._12_2_ + auVar24._12_2_ + in_XMM1._12_2_ + in_XMM4._12_2_ + in_XMM5._12_2_;
            in_XMM2._14_2_ =
                 auVar29._14_2_ + auVar24._14_2_ + in_XMM1._14_2_ + in_XMM4._14_2_ + in_XMM5._14_2_;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + 0x10 + uVar15 * 2) = in_XMM2;
            uVar15 = uVar15 + 0x10;
          } while (uVar15 < uVar17);
          iVar21 = iVar20 + iVar19;
          if (iVar19 + 1U <= uVar6) {
            uVar15 = uVar11 - uVar17;
            if ((longlong)uVar15 < 4) {
              uVar6 = 0;
            }
            else {
              uVar22 = 0;
              puVar9 = (uint *)(lVar13 + uVar17);
              uVar6 = (uint)uVar15 & 0xfffffffc;
              lVar8 = 0;
              do {
                uVar22 = uVar22 + 4;
                auVar24 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar9 + 2)),
                                   ZEXT416(*(uint *)((longlong)puVar9 + 2)));
                in_XMM4._0_2_ = auVar24._0_2_ * sVar32;
                in_XMM4._2_2_ = auVar24._2_2_ * sVar33;
                in_XMM4._4_2_ = auVar24._4_2_ * sVar34;
                in_XMM4._6_2_ = auVar24._6_2_ * sVar35;
                in_XMM4._8_2_ = auVar24._8_2_ * sVar36;
                in_XMM4._10_2_ = auVar24._10_2_ * sVar37;
                in_XMM4._12_2_ = auVar24._12_2_ * sVar38;
                in_XMM4._14_2_ = auVar24._14_2_ * sVar39;
                auVar24 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar9 + 1)),
                                   ZEXT416(*(uint *)((longlong)puVar9 + 1)));
                auVar24 = psllw(auVar24,2);
                auVar25 = pmovzxbw(ZEXT416(*puVar9),ZEXT416(*puVar9));
                auVar29 = pmovzxbw(ZEXT416(*(uint *)((longlong)puVar9 + 3)),
                                   ZEXT416(*(uint *)((longlong)puVar9 + 3)));
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 1;
                in_XMM2 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
                in_XMM3 = psllw(auVar29,2);
                in_XMM1._0_8_ =
                     CONCAT26(auVar25._6_2_ + auVar24._6_2_ + in_XMM4._6_2_ + in_XMM3._6_2_ +
                              in_XMM2._6_2_,
                              CONCAT24(auVar25._4_2_ + auVar24._4_2_ + in_XMM4._4_2_ + in_XMM3._4_2_
                                       + in_XMM2._4_2_,
                                       CONCAT22(auVar25._2_2_ + auVar24._2_2_ + in_XMM4._2_2_ +
                                                in_XMM3._2_2_ + in_XMM2._2_2_,
                                                auVar25._0_2_ + auVar24._0_2_ + in_XMM4._0_2_ +
                                                in_XMM3._0_2_ + in_XMM2._0_2_)));
                in_XMM1._8_2_ =
                     auVar25._8_2_ + auVar24._8_2_ + in_XMM4._8_2_ + in_XMM3._8_2_ + in_XMM2._8_2_;
                in_XMM1._10_2_ =
                     auVar25._10_2_ + auVar24._10_2_ + in_XMM4._10_2_ + in_XMM3._10_2_ +
                     in_XMM2._10_2_;
                in_XMM1._12_2_ =
                     auVar25._12_2_ + auVar24._12_2_ + in_XMM4._12_2_ + in_XMM3._12_2_ +
                     in_XMM2._12_2_;
                in_XMM1._14_2_ =
                     auVar25._14_2_ + auVar24._14_2_ + in_XMM4._14_2_ + in_XMM3._14_2_ +
                     in_XMM2._14_2_;
                *(undefined8 *)
                 (*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + uVar17 * 2 + lVar8) =
                     in_XMM1._0_8_;
                lVar8 = lVar8 + 8;
              } while (uVar22 < (ulonglong)(longlong)(int)uVar6);
              uVar12 = uVar12 & 0xffffffff;
              iVar21 = uVar6 + iVar20 + iVar19;
            }
            goto LAB_140a84312;
          }
LAB_140a84396:
          lVar18 = (longlong)iVar21;
        }
      }
      uVar15 = 0;
      if (0 < 5 - (param_5 + 1)) {
        lVar13 = iVar5 + param_3;
        do {
          if ((int)param_6 - lVar16 <= (longlong)uVar15) break;
          bVar2 = *(byte *)(uVar15 + 2 + lVar13);
          *(ushort *)(*(longlong *)(param_2 + uVar10 * 8) + lVar18 * 2 + uVar15 * 2) =
               (ushort)*(byte *)(uVar15 + lVar13) + ((ushort)bVar2 + (ushort)bVar2 * 2) * 2 +
               (ushort)*(byte *)(uVar15 + 4 + lVar13) +
               ((ushort)*(byte *)(uVar15 + 1 + lVar13) + (ushort)*(byte *)(uVar15 + 3 + lVar13)) * 4
          ;
          uVar15 = uVar15 + 1;
        } while (uVar15 < 4U - lVar16);
      }
      uVar10 = uVar10 + 1;
      lVar23 = lVar23 + param_4;
    } while (uVar10 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

