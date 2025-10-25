
undefined8 FUN_140a9a5e1(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  int unaff_EBP;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong in_R10;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong in_R11;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  longlong lStack0000000000000068;
  ulonglong uStack0000000000000070;
  longlong lStack0000000000000078;
  ulonglong uStack0000000000000080;
  int iStack0000000000000088;
  int iStack0000000000000090;
  longlong lStack0000000000000098;
  longlong lStack00000000000000a0;
  longlong lStack00000000000000a8;
  int in_stack_000000f0;
  ulonglong in_stack_000000f8;
  undefined4 in_stack_00000100;
  byte in_stack_00000108;
  
  iStack0000000000000088 = unaff_EBP + -5;
  uVar9 = (ulonglong)unaff_EBP;
  lStack0000000000000068 = (longlong)param_1;
  lStack0000000000000078 = uVar9 - lStack0000000000000068;
  iStack0000000000000090 = 5 - (param_1 + 1);
  uVar1 = uVar9 - 4;
  uStack0000000000000080 = 4 - lStack0000000000000068;
  uStack0000000000000070 = uVar9;
  lStack0000000000000098 = param_4;
  lStack00000000000000a0 = in_R11;
  lStack00000000000000a8 = param_3;
  do {
    uStack0000000000000028 = in_stack_00000100;
    lVar15 = lStack00000000000000a0 + in_R10;
    uStack0000000000000030 = (uint)in_stack_00000108;
    iVar6 = FUN_140a97a60(lVar15,lStack00000000000000a8,uVar9 & 0xffffffff,5,param_1);
    iVar7 = 0;
    uVar13 = 0;
    if (0 < (int)uVar9) {
      do {
        if (lStack0000000000000068 <= (longlong)uVar13) break;
        *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + uVar13 * 2) =
             (ushort)*(byte *)(uVar13 + lStack00000000000000a8) +
             (ushort)*(byte *)(uVar13 + 2 + lStack00000000000000a8) * -2 +
             (ushort)*(byte *)(uVar13 + 4 + lStack00000000000000a8);
        uVar12 = uVar13 + 1;
        iVar7 = (int)uVar13 + 1;
        uVar13 = uVar12;
      } while (uVar12 < uStack0000000000000070);
    }
    lVar14 = (longlong)iVar7;
    if (-1 < iStack0000000000000088) {
      if ((longlong)uVar1 < 0x10) {
LAB_140a9a99f:
        iVar11 = 0;
        iVar8 = iVar7;
      }
      else {
        uVar13 = *(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2;
        uVar12 = uVar13 & 0xf;
        if ((int)uVar12 != 0) {
          if ((uVar13 & 1) != 0) goto LAB_140a9a99f;
          uVar12 = (ulonglong)(0x10U - (int)uVar12 >> 1);
        }
        if ((longlong)uVar1 < (longlong)(uVar12 + 0x10)) goto LAB_140a9a99f;
        uVar9 = 0;
        iVar11 = (int)uVar1 - ((int)uVar1 - (int)uVar12 & 0xfU);
        if ((int)uVar12 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2 + uVar9 * 2) =
                 (ushort)*(byte *)(uVar9 + lVar15) + (ushort)*(byte *)(uVar9 + 2 + lVar15) * -2 +
                 (ushort)*(byte *)(uVar9 + 4 + lVar15);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar12);
        }
        lVar10 = uVar12 + in_R10;
        do {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulonglong *)(lVar10 + 2 + lStack00000000000000a0);
          auVar2 = vpmovzxbw_avx(auVar2);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)(lVar10 + lStack00000000000000a0);
          auVar3 = vpmovzxbw_avx(auVar3);
          auVar16 = vpsllw_avx(auVar2,1);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = *(ulonglong *)(lVar10 + 4 + lStack00000000000000a0);
          auVar2 = vpmovzxbw_avx(auVar17);
          auVar5 = vpsubw_avx(auVar3,auVar16);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = *(ulonglong *)(lVar10 + 8 + lStack00000000000000a0);
          auVar3 = vpmovzxbw_avx(auVar16);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)(lVar10 + 10 + lStack00000000000000a0);
          auVar17 = vpmovzxbw_avx(auVar4);
          auVar2 = vpaddw_avx(auVar5,auVar2);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)(lVar10 + 0xc + lStack00000000000000a0);
          auVar16 = vpmovzxbw_avx(auVar5);
          auVar17 = vpsllw_avx(auVar17,1);
          *(undefined1 (*) [16])(*(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2 + uVar12 * 2) =
               auVar2;
          auVar2 = vpsubw_avx(auVar3,auVar17);
          auVar2 = vpaddw_avx(auVar2,auVar16);
          lVar10 = lVar10 + 0x10;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2 + 0x10 + uVar12 * 2) = auVar2;
          uVar12 = uVar12 + 0x10;
        } while (uVar12 < (ulonglong)(longlong)iVar11);
        uVar9 = in_stack_000000f8 & 0xffffffff;
        iVar8 = iVar7 + iVar11;
        param_1 = in_stack_000000f0;
      }
      uVar13 = (ulonglong)iVar11;
      if (uVar13 < uVar1) {
        do {
          *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2 + uVar13 * 2) =
               (ushort)*(byte *)(uVar13 + lVar15) + (ushort)*(byte *)(uVar13 + 2 + lVar15) * -2 +
               (ushort)*(byte *)(uVar13 + 4 + lVar15);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar1);
        lVar14 = (longlong)((int)uVar13 + iVar7);
      }
      else {
        lVar14 = (longlong)iVar8;
      }
    }
    uVar13 = 0;
    if (0 < iStack0000000000000090) {
      lVar15 = iVar6 + lStack00000000000000a8;
      do {
        if (lStack0000000000000078 <= (longlong)uVar13) break;
        *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar14 * 2 + uVar13 * 2) =
             (ushort)*(byte *)(uVar13 + lVar15) + (ushort)*(byte *)(uVar13 + 2 + lVar15) * -2 +
             (ushort)*(byte *)(uVar13 + 4 + lVar15);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uStack0000000000000080);
    }
    in_RAX = in_RAX + 1;
    in_R10 = in_R10 + lStack0000000000000098;
    if ((ulonglong)(longlong)in_stack_000000f8._4_4_ <= in_RAX) {
      return 0;
    }
  } while( true );
}

