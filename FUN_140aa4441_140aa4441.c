
undefined8 FUN_140aa4441(undefined4 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong in_RAX;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong in_R10;
  longlong lVar19;
  longlong in_R11;
  ulonglong uVar20;
  ulonglong uVar21;
  int unaff_R15D;
  ulonglong uVar22;
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000068;
  longlong lStack0000000000000078;
  int iStack0000000000000080;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  undefined4 in_stack_000000e0;
  ulonglong in_stack_000000e8;
  undefined4 in_stack_000000f0;
  byte in_stack_000000f8;
  
  iStack0000000000000080 = unaff_R15D + -5;
  uVar22 = (ulonglong)unaff_R15D;
  lStack0000000000000078 = uVar22 - 2;
  uVar1 = uVar22 - 4;
  uStack0000000000000068 = uVar22;
  lStack0000000000000088 = param_4;
  lStack0000000000000090 = in_R10;
  lStack0000000000000098 = param_3;
  do {
    lVar16 = lStack0000000000000090 + in_R11;
    uStack0000000000000030 = (uint)in_stack_000000f8;
    uStack0000000000000028 = param_1;
    iVar12 = FUN_140aa18c0(lVar16,lStack0000000000000098,uVar22 & 0xffffffff,5,in_stack_000000e0);
    iVar13 = 0;
    uVar21 = 0;
    if (0 < (int)uVar22) {
      do {
        *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + uVar21 * 2) =
             (ushort)*(byte *)(uVar21 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar21 + 1 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar21 + 2 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar21 + 3 + lStack0000000000000098) +
             (ushort)*(byte *)(uVar21 + 4 + lStack0000000000000098);
        uVar20 = uVar21 + 1;
        iVar13 = (int)uVar21 + 1;
        if (uStack0000000000000068 <= uVar20) break;
        uVar21 = uVar20;
      } while ((longlong)uVar20 < 2);
    }
    lVar19 = (longlong)iVar13;
    if (-1 < iStack0000000000000080) {
      if ((longlong)uVar1 < 0x10) {
LAB_140aa47cf:
        iVar18 = 0;
        iVar14 = iVar13;
      }
      else {
        uVar21 = *(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2;
        uVar15 = (uint)uVar21 & 0xf;
        if ((uVar21 & 0xf) != 0) {
          if ((uVar21 & 1) != 0) goto LAB_140aa47cf;
          uVar15 = 0x10 - uVar15 >> 1;
        }
        uVar21 = (ulonglong)uVar15;
        if ((longlong)uVar1 < (longlong)(uVar21 + 0x10)) goto LAB_140aa47cf;
        uVar22 = 0;
        iVar18 = (int)uVar1 - ((int)uVar1 - uVar15 & 0xf);
        if (uVar15 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2 + uVar22 * 2) =
                 (ushort)*(byte *)(uVar22 + lVar16) + (ushort)*(byte *)(uVar22 + 1 + lVar16) +
                 (ushort)*(byte *)(uVar22 + 2 + lVar16) +
                 (ushort)*(byte *)(uVar22 + 3 + lVar16) + (ushort)*(byte *)(uVar22 + 4 + lVar16);
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar21);
        }
        lVar17 = uVar21 + in_R11;
        do {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulonglong *)(lVar17 + lStack0000000000000090);
          auVar2 = vpmovzxbw_avx(auVar2);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)(lVar17 + 1 + lStack0000000000000090);
          auVar3 = vpmovzxbw_avx(auVar3);
          auVar2 = vpaddw_avx(auVar2,auVar3);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)(lVar17 + 2 + lStack0000000000000090);
          auVar3 = vpmovzxbw_avx(auVar4);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)(lVar17 + 3 + lStack0000000000000090);
          auVar4 = vpmovzxbw_avx(auVar5);
          auVar2 = vpaddw_avx(auVar2,auVar3);
          auVar2 = vpaddw_avx(auVar2,auVar4);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(lVar17 + 4 + lStack0000000000000090);
          auVar3 = vpmovzxbw_avx(auVar6);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(lVar17 + 8 + lStack0000000000000090);
          auVar4 = vpmovzxbw_avx(auVar7);
          auVar2 = vpaddw_avx(auVar2,auVar3);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulonglong *)(lVar17 + 9 + lStack0000000000000090);
          auVar3 = vpmovzxbw_avx(auVar8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = *(ulonglong *)(lVar17 + 10 + lStack0000000000000090);
          auVar5 = vpmovzxbw_avx(auVar9);
          auVar3 = vpaddw_avx(auVar4,auVar3);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = *(ulonglong *)(lVar17 + 0xb + lStack0000000000000090);
          auVar4 = vpmovzxbw_avx(auVar10);
          auVar3 = vpaddw_avx(auVar3,auVar5);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = *(ulonglong *)(lVar17 + 0xc + lStack0000000000000090);
          auVar5 = vpmovzxbw_avx(auVar11);
          auVar3 = vpaddw_avx(auVar3,auVar4);
          *(undefined1 (*) [16])(*(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2 + uVar21 * 2) =
               auVar2;
          auVar2 = vpaddw_avx(auVar3,auVar5);
          lVar17 = lVar17 + 0x10;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2 + 0x10 + uVar21 * 2) = auVar2;
          uVar21 = uVar21 + 0x10;
        } while (uVar21 < (ulonglong)(longlong)iVar18);
        uVar22 = in_stack_000000e8 & 0xffffffff;
        iVar14 = iVar13 + iVar18;
        param_1 = in_stack_000000f0;
      }
      uVar21 = (ulonglong)iVar18;
      if (uVar21 < uVar1) {
        do {
          *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2 + uVar21 * 2) =
               (ushort)*(byte *)(uVar21 + lVar16) + (ushort)*(byte *)(uVar21 + 1 + lVar16) +
               (ushort)*(byte *)(uVar21 + 2 + lVar16) +
               (ushort)*(byte *)(uVar21 + 3 + lVar16) + (ushort)*(byte *)(uVar21 + 4 + lVar16);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar1);
        lVar19 = (longlong)((int)uVar21 + iVar13);
      }
      else {
        lVar19 = (longlong)iVar14;
      }
    }
    uVar21 = 0;
    lVar16 = iVar12 + lStack0000000000000098;
    do {
      if (lStack0000000000000078 <= (longlong)uVar21) break;
      *(ushort *)(*(longlong *)(param_2 + in_RAX * 8) + lVar19 * 2 + uVar21 * 2) =
           (ushort)*(byte *)(uVar21 + lVar16) + (ushort)*(byte *)(uVar21 + 1 + lVar16) +
           (ushort)*(byte *)(uVar21 + 2 + lVar16) +
           (ushort)*(byte *)(uVar21 + 3 + lVar16) + (ushort)*(byte *)(uVar21 + 4 + lVar16);
      uVar21 = uVar21 + 1;
    } while (uVar21 < 2);
    in_RAX = in_RAX + 1;
    in_R11 = in_R11 + lStack0000000000000088;
    if ((ulonglong)(longlong)in_stack_000000e8._4_4_ <= in_RAX) {
      return 0;
    }
  } while( true );
}

