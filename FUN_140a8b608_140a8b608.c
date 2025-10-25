
undefined8 FUN_140a8b608(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong in_R10;
  longlong lVar8;
  int iVar9;
  longlong in_R11;
  ulonglong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000068;
  longlong lStack0000000000000080;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  undefined4 in_stack_000000e0;
  int iStack00000000000000e8;
  int iStack00000000000000ec;
  undefined4 in_stack_000000f0;
  byte in_stack_000000f8;
  
  uVar5 = (ulonglong)param_3;
  lStack0000000000000080 = uVar5 - 2;
  uVar1 = uVar5 - 4;
  uStack0000000000000068 = uVar5;
  lStack0000000000000088 = param_1;
  lStack0000000000000090 = param_4;
  lStack0000000000000098 = in_RAX;
  do {
    lVar4 = lStack0000000000000088 + in_R11;
    uStack0000000000000028 = in_stack_000000f0;
    uStack0000000000000030 = (uint)in_stack_000000f8;
    iVar2 = FUN_140a886a0(lVar4,lStack0000000000000098,uVar5,5,in_stack_000000e0);
    auVar15._8_8_ = extraout_XMM0_Qb;
    auVar15._0_8_ = extraout_XMM0_Qa;
    iVar6 = 0;
    uVar5 = 0;
    if (0 < iStack00000000000000e8) {
      do {
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + uVar5 * 2) =
             (ushort)*(byte *)(uVar5 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar5 + 1 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar5 + 2 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar5 + 3 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar5 + 4 + lStack0000000000000098);
        uVar10 = uVar5 + 1;
        iVar6 = (int)uVar5 + 1;
        if (uStack0000000000000068 <= uVar10) break;
        uVar5 = uVar10;
      } while ((longlong)uVar10 < 2);
    }
    lVar8 = (longlong)iVar6;
    if (-1 < param_3 + -5) {
      if ((longlong)uVar1 < 0x10) {
LAB_140a8ba13:
        iVar9 = 0;
        iVar7 = iVar6;
      }
      else {
        uVar5 = *(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2;
        uVar10 = uVar5 & 0xf;
        if ((int)uVar10 != 0) {
          if ((uVar5 & 1) != 0) goto LAB_140a8ba13;
          uVar10 = (ulonglong)(0x10U - (int)uVar10 >> 1);
        }
        if ((longlong)uVar1 < (longlong)(uVar10 + 0x10)) goto LAB_140a8ba13;
        uVar5 = 0;
        iVar9 = (int)uVar1 - ((int)uVar1 - (int)uVar10 & 0xfU);
        if ((int)uVar10 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2 + uVar5 * 2) =
                 (ushort)*(byte *)(uVar5 + lVar4) + (ushort)*(byte *)(uVar5 + 1 + lVar4) +
                 (ushort)*(byte *)(uVar5 + 2 + lVar4) +
                 (ushort)*(byte *)(uVar5 + 3 + lVar4) + (ushort)*(byte *)(uVar5 + 4 + lVar4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar10);
        }
        lVar3 = uVar10 + in_R11;
        do {
          auVar12 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + lStack0000000000000088));
          auVar13 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar3 + 1 + lStack0000000000000088));
          auVar16 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar3 + 2 + lStack0000000000000088));
          auVar14 = pmovzxbw(auVar13,*(undefined8 *)(lVar3 + 3 + lStack0000000000000088));
          auVar11 = pmovzxbw(auVar15,*(undefined8 *)(lVar3 + 8 + lStack0000000000000088));
          in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar3 + 9 + lStack0000000000000088));
          auVar15 = pmovzxbw(auVar14,*(undefined8 *)(lVar3 + 4 + lStack0000000000000088));
          in_XMM3._0_2_ =
               auVar12._0_2_ + auVar13._0_2_ + auVar16._0_2_ + auVar14._0_2_ + auVar15._0_2_;
          in_XMM3._2_2_ =
               auVar12._2_2_ + auVar13._2_2_ + auVar16._2_2_ + auVar14._2_2_ + auVar15._2_2_;
          in_XMM3._4_2_ =
               auVar12._4_2_ + auVar13._4_2_ + auVar16._4_2_ + auVar14._4_2_ + auVar15._4_2_;
          in_XMM3._6_2_ =
               auVar12._6_2_ + auVar13._6_2_ + auVar16._6_2_ + auVar14._6_2_ + auVar15._6_2_;
          in_XMM3._8_2_ =
               auVar12._8_2_ + auVar13._8_2_ + auVar16._8_2_ + auVar14._8_2_ + auVar15._8_2_;
          in_XMM3._10_2_ =
               auVar12._10_2_ + auVar13._10_2_ + auVar16._10_2_ + auVar14._10_2_ + auVar15._10_2_;
          in_XMM3._12_2_ =
               auVar12._12_2_ + auVar13._12_2_ + auVar16._12_2_ + auVar14._12_2_ + auVar15._12_2_;
          in_XMM3._14_2_ =
               auVar12._14_2_ + auVar13._14_2_ + auVar16._14_2_ + auVar14._14_2_ + auVar15._14_2_;
          in_XMM2 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar3 + 10 + lStack0000000000000088));
          in_XMM5 = pmovzxbw(auVar16,*(undefined8 *)(lVar3 + 0xb + lStack0000000000000088));
          in_XMM4 = pmovzxbw(auVar15,*(undefined8 *)(lVar3 + 0xc + lStack0000000000000088));
          lVar3 = lVar3 + 0x10;
          *(undefined1 (*) [16])(*(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2 + uVar10 * 2) =
               in_XMM3;
          auVar15._0_2_ =
               auVar11._0_2_ + in_XMM1._0_2_ + in_XMM2._0_2_ + in_XMM5._0_2_ + in_XMM4._0_2_;
          auVar15._2_2_ =
               auVar11._2_2_ + in_XMM1._2_2_ + in_XMM2._2_2_ + in_XMM5._2_2_ + in_XMM4._2_2_;
          auVar15._4_2_ =
               auVar11._4_2_ + in_XMM1._4_2_ + in_XMM2._4_2_ + in_XMM5._4_2_ + in_XMM4._4_2_;
          auVar15._6_2_ =
               auVar11._6_2_ + in_XMM1._6_2_ + in_XMM2._6_2_ + in_XMM5._6_2_ + in_XMM4._6_2_;
          auVar15._8_2_ =
               auVar11._8_2_ + in_XMM1._8_2_ + in_XMM2._8_2_ + in_XMM5._8_2_ + in_XMM4._8_2_;
          auVar15._10_2_ =
               auVar11._10_2_ + in_XMM1._10_2_ + in_XMM2._10_2_ + in_XMM5._10_2_ + in_XMM4._10_2_;
          auVar15._12_2_ =
               auVar11._12_2_ + in_XMM1._12_2_ + in_XMM2._12_2_ + in_XMM5._12_2_ + in_XMM4._12_2_;
          auVar15._14_2_ =
               auVar11._14_2_ + in_XMM1._14_2_ + in_XMM2._14_2_ + in_XMM5._14_2_ + in_XMM4._14_2_;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2 + 0x10 + uVar10 * 2) = auVar15;
          uVar10 = uVar10 + 0x10;
        } while (uVar10 < (ulonglong)(longlong)iVar9);
        iVar7 = iVar6 + iVar9;
      }
      uVar5 = (ulonglong)iVar9;
      if (uVar5 < uVar1) {
        do {
          *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2 + uVar5 * 2) =
               (ushort)*(byte *)(uVar5 + lVar4) + (ushort)*(byte *)(uVar5 + 1 + lVar4) +
               (ushort)*(byte *)(uVar5 + 2 + lVar4) +
               (ushort)*(byte *)(uVar5 + 3 + lVar4) + (ushort)*(byte *)(uVar5 + 4 + lVar4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        lVar8 = (longlong)((int)uVar5 + iVar6);
      }
      else {
        lVar8 = (longlong)iVar7;
      }
    }
    uVar5 = _iStack00000000000000e8 & 0xffffffff;
    uVar10 = 0;
    lVar4 = iVar2 + lStack0000000000000098;
    do {
      if (lStack0000000000000080 <= (longlong)uVar10) break;
      *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar8 * 2 + uVar10 * 2) =
           (ushort)*(byte *)(uVar10 + lVar4) + (ushort)*(byte *)(uVar10 + 1 + lVar4) +
           (ushort)*(byte *)(uVar10 + 2 + lVar4) +
           (ushort)*(byte *)(uVar10 + 3 + lVar4) + (ushort)*(byte *)(uVar10 + 4 + lVar4);
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    in_R10 = in_R10 + 1;
    in_R11 = in_R11 + lStack0000000000000090;
    if ((ulonglong)(longlong)iStack00000000000000ec <= in_R10) {
      return 0;
    }
  } while( true );
}

