
undefined8 FUN_140a80bac(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int in_R10D;
  longlong lVar9;
  int iVar10;
  longlong in_R11;
  ulonglong unaff_R15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  longlong lStack0000000000000060;
  ulonglong uStack0000000000000068;
  longlong lStack0000000000000078;
  ulonglong uStack0000000000000080;
  int iStack0000000000000088;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  longlong lStack00000000000000a0;
  undefined4 in_stack_000000f0;
  int iStack00000000000000f8;
  int iStack00000000000000fc;
  undefined4 in_stack_00000100;
  byte in_stack_00000108;
  
  iStack0000000000000088 = param_3 + -5;
  uVar6 = (ulonglong)param_3;
  lStack0000000000000060 = (longlong)in_R10D;
  lStack0000000000000078 = uVar6 - lStack0000000000000060;
  uVar1 = uVar6 - 4;
  uStack0000000000000080 = 4 - lStack0000000000000060;
  uStack0000000000000068 = uVar6;
  lStack0000000000000090 = param_1;
  lStack0000000000000098 = param_4;
  lStack00000000000000a0 = in_RAX;
  do {
    lVar5 = lStack0000000000000090 + in_R11;
    uStack0000000000000028 = in_stack_00000100;
    uStack0000000000000030 = (uint)in_stack_00000108;
    iVar2 = FUN_140a7dc40(lVar5,lStack00000000000000a0,uVar6,5,in_stack_000000f0);
    auVar11._8_8_ = extraout_XMM0_Qb;
    auVar11._0_8_ = extraout_XMM0_Qa;
    iVar7 = 0;
    uVar6 = 0;
    if (0 < iStack00000000000000f8) {
      do {
        if (lStack0000000000000060 <= (longlong)uVar6) break;
        *(ushort *)(*(longlong *)(param_2 + unaff_R15 * 8) + uVar6 * 2) =
             (ushort)*(byte *)(uVar6 + lStack00000000000000a0) +
             (ushort)*(byte *)(uVar6 + 2 + lStack00000000000000a0) * -2 +
             (ushort)*(byte *)(uVar6 + 4 + lStack00000000000000a0);
        uVar3 = uVar6 + 1;
        iVar7 = (int)uVar6 + 1;
        uVar6 = uVar3;
      } while (uVar3 < uStack0000000000000068);
    }
    lVar9 = (longlong)iVar7;
    if (-1 < iStack0000000000000088) {
      if ((longlong)uVar1 < 0x10) {
LAB_140a80f5e:
        iVar10 = 0;
        iVar8 = iVar7;
      }
      else {
        uVar6 = *(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2;
        uVar3 = uVar6 & 0xf;
        if ((int)uVar3 != 0) {
          if ((uVar6 & 1) != 0) goto LAB_140a80f5e;
          uVar3 = (ulonglong)(0x10U - (int)uVar3 >> 1);
        }
        if ((longlong)uVar1 < (longlong)(uVar3 + 0x10)) goto LAB_140a80f5e;
        uVar6 = 0;
        iVar10 = (int)uVar1 - ((int)uVar1 - (int)uVar3 & 0xfU);
        if ((int)uVar3 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2 + uVar6 * 2) =
                 (ushort)*(byte *)(uVar6 + lVar5) + (ushort)*(byte *)(uVar6 + 2 + lVar5) * -2 +
                 (ushort)*(byte *)(uVar6 + 4 + lVar5);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
        lVar4 = uVar3 + in_R11;
        do {
          auVar11 = pmovzxbw(auVar11,*(undefined8 *)(lVar4 + 2 + lStack0000000000000090));
          auVar11 = psllw(auVar11,1);
          auVar13 = pmovzxbw(in_XMM4,*(undefined8 *)(lVar4 + lStack0000000000000090));
          auVar12 = pmovzxbw(in_XMM2,*(undefined8 *)(lVar4 + 10 + lStack0000000000000090));
          in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(lVar4 + 4 + lStack0000000000000090));
          in_XMM2 = psllw(auVar12,1);
          in_XMM4._0_2_ = (auVar13._0_2_ - auVar11._0_2_) + in_XMM1._0_2_;
          in_XMM4._2_2_ = (auVar13._2_2_ - auVar11._2_2_) + in_XMM1._2_2_;
          in_XMM4._4_2_ = (auVar13._4_2_ - auVar11._4_2_) + in_XMM1._4_2_;
          in_XMM4._6_2_ = (auVar13._6_2_ - auVar11._6_2_) + in_XMM1._6_2_;
          in_XMM4._8_2_ = (auVar13._8_2_ - auVar11._8_2_) + in_XMM1._8_2_;
          in_XMM4._10_2_ = (auVar13._10_2_ - auVar11._10_2_) + in_XMM1._10_2_;
          in_XMM4._12_2_ = (auVar13._12_2_ - auVar11._12_2_) + in_XMM1._12_2_;
          in_XMM4._14_2_ = (auVar13._14_2_ - auVar11._14_2_) + in_XMM1._14_2_;
          auVar12 = pmovzxbw(in_XMM5,*(undefined8 *)(lVar4 + 8 + lStack0000000000000090));
          in_XMM3 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar4 + 0xc + lStack0000000000000090));
          lVar4 = lVar4 + 0x10;
          *(undefined1 (*) [16])(*(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2 + uVar3 * 2) =
               in_XMM4;
          in_XMM5._0_2_ = (auVar12._0_2_ - in_XMM2._0_2_) + in_XMM3._0_2_;
          in_XMM5._2_2_ = (auVar12._2_2_ - in_XMM2._2_2_) + in_XMM3._2_2_;
          in_XMM5._4_2_ = (auVar12._4_2_ - in_XMM2._4_2_) + in_XMM3._4_2_;
          in_XMM5._6_2_ = (auVar12._6_2_ - in_XMM2._6_2_) + in_XMM3._6_2_;
          in_XMM5._8_2_ = (auVar12._8_2_ - in_XMM2._8_2_) + in_XMM3._8_2_;
          in_XMM5._10_2_ = (auVar12._10_2_ - in_XMM2._10_2_) + in_XMM3._10_2_;
          in_XMM5._12_2_ = (auVar12._12_2_ - in_XMM2._12_2_) + in_XMM3._12_2_;
          in_XMM5._14_2_ = (auVar12._14_2_ - in_XMM2._14_2_) + in_XMM3._14_2_;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2 + 0x10 + uVar3 * 2) = in_XMM5;
          uVar3 = uVar3 + 0x10;
        } while (uVar3 < (ulonglong)(longlong)iVar10);
        iVar8 = iVar7 + iVar10;
      }
      uVar6 = (ulonglong)iVar10;
      if (uVar6 < uVar1) {
        do {
          *(ushort *)(*(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2 + uVar6 * 2) =
               (ushort)*(byte *)(uVar6 + lVar5) + (ushort)*(byte *)(uVar6 + 2 + lVar5) * -2 +
               (ushort)*(byte *)(uVar6 + 4 + lVar5);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
        lVar9 = (longlong)((int)uVar6 + iVar7);
      }
      else {
        lVar9 = (longlong)iVar8;
      }
    }
    uVar6 = _iStack00000000000000f8 & 0xffffffff;
    uVar3 = 0;
    if (0 < 5 - (in_R10D + 1)) {
      lVar5 = iVar2 + lStack00000000000000a0;
      do {
        if (lStack0000000000000078 <= (longlong)uVar3) break;
        *(ushort *)(*(longlong *)(param_2 + unaff_R15 * 8) + lVar9 * 2 + uVar3 * 2) =
             (ushort)*(byte *)(uVar3 + lVar5) + (ushort)*(byte *)(uVar3 + 2 + lVar5) * -2 +
             (ushort)*(byte *)(uVar3 + 4 + lVar5);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uStack0000000000000080);
    }
    unaff_R15 = unaff_R15 + 1;
    in_R11 = in_R11 + lStack0000000000000098;
    if ((ulonglong)(longlong)iStack00000000000000fc <= unaff_R15) {
      return 0;
    }
  } while( true );
}

