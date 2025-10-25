
undefined8 FUN_140ab1a89(undefined4 param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong in_RAX;
  ulonglong uVar9;
  byte *unaff_RBP;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  uint uVar14;
  longlong lVar15;
  undefined4 in_R11D;
  int iVar16;
  int iVar17;
  uint uVar18;
  int unaff_R14D;
  longlong unaff_R15;
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  uint uStack0000000000000040;
  ulonglong uStack0000000000000060;
  longlong lStack0000000000000070;
  longlong lStack0000000000000078;
  int iStack0000000000000080;
  longlong lStack0000000000000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack00000000000000a0;
  longlong lStack00000000000000a8;
  undefined8 in_stack_00000108;
  
  iStack0000000000000080 = unaff_R14D + -5;
  uStack0000000000000060 = (ulonglong)unaff_R14D;
  uVar18 = unaff_R14D - 4;
  lStack0000000000000078 = uStack0000000000000060 - 2;
  lStack0000000000000070 = (longlong)(int)uVar18;
  uStack0000000000000040 = uVar18 & 0xffffffe0;
  lStack0000000000000088 = param_4;
  uStack0000000000000090 = in_R11D;
  uStack0000000000000098 = param_2;
  uStack00000000000000a0 = param_1;
  lStack00000000000000a8 = param_3;
  do {
    uStack0000000000000028 = uStack0000000000000098;
    uStack0000000000000030 = uStack0000000000000090;
    iVar7 = FUN_140aae040(unaff_RBP,lStack00000000000000a8,unaff_R14D,5,uStack00000000000000a0);
    iVar16 = 0;
    uVar9 = 0;
    if (0 < unaff_R14D) {
      do {
        *(ushort *)(*(longlong *)(unaff_R15 + in_RAX * 8) + uVar9 * 2) =
             ((ushort)*(byte *)(uVar9 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar9 + 4 + lStack00000000000000a8)) +
             ((ushort)*(byte *)(uVar9 + 1 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar9 + 3 + lStack00000000000000a8)) * 2;
        uVar10 = uVar9 + 1;
        iVar16 = (int)uVar9 + 1;
        if (uStack0000000000000060 <= uVar10) break;
        uVar9 = uVar10;
      } while ((longlong)uVar10 < 2);
    }
    lVar15 = (longlong)iVar16;
    if (-1 < iStack0000000000000080) {
      if ((int)uVar18 < 0x20) {
LAB_140ab1ebf:
        uVar14 = 0;
        iVar17 = iVar16;
      }
      else {
        if ((int)uVar18 < 0x12c0) {
          uVar9 = 0;
          uVar14 = uStack0000000000000040;
        }
        else {
          uVar14 = (int)*(undefined8 *)(unaff_R15 + in_RAX * 8) + iVar16 * 2;
          uVar8 = uVar14 & 0x1f;
          if (uVar8 != 0) {
            if ((uVar14 & 1) != 0) goto LAB_140ab1ebf;
            uVar8 = 0x20 - uVar8 >> 1;
          }
          uVar9 = (ulonglong)uVar8;
          if ((int)uVar18 < (int)(uVar8 + 0x20)) goto LAB_140ab1ebf;
          uVar10 = 0;
          uVar14 = uVar18 - (uVar18 - uVar8 & 0x1f);
          pbVar11 = unaff_RBP;
          if (uVar8 != 0) {
            do {
              *(ushort *)(*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + uVar10 * 2) =
                   ((ushort)*pbVar11 - (ushort)pbVar11[4]) +
                   ((ushort)pbVar11[1] - (ushort)pbVar11[3]) * 2;
              uVar10 = uVar10 + 1;
              pbVar11 = pbVar11 + 1;
            } while (uVar10 < uVar9);
          }
        }
        pauVar13 = (undefined1 (*) [32])(unaff_RBP + uVar9);
        do {
          auVar3 = vpmovzxbw_avx2(SUB3216(*pauVar13,0));
          puVar6 = *pauVar13;
          auVar4 = vpmovzxbw_avx2(SUB3216(*pauVar13,0x10));
          auVar20 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(*pauVar13 + 1),0));
          auVar20 = vpsllw_avx2(auVar20,1);
          auVar22 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(*pauVar13 + 1),0x10));
          auVar20 = vpaddw_avx2(auVar3,auVar20);
          auVar22 = vpsllw_avx2(auVar22,1);
          auVar3 = *(undefined1 (*) [32])(*pauVar13 + 4);
          auVar4 = vpaddw_avx2(auVar4,auVar22);
          pauVar13 = pauVar13 + 1;
          auVar22 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(puVar6 + 3),0));
          auVar22 = vpsllw_avx2(auVar22,1);
          auVar5 = vpsubw_avx2(auVar20,auVar22);
          auVar20 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(puVar6 + 3),0x10));
          auVar22 = vpmovzxbw_avx2(auVar3._0_16_);
          auVar22 = vpsubw_avx2(auVar5,auVar22);
          auVar20 = vpsllw_avx2(auVar20,1);
          *(undefined1 (*) [32])(*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + uVar9 * 2) =
               auVar22;
          auVar20 = vpsubw_avx2(auVar4,auVar20);
          auVar3 = vpmovzxbw_avx2(auVar3._16_16_);
          auVar3 = vpsubw_avx2(auVar20,auVar3);
          *(undefined1 (*) [32])
           (*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + 0x20 + uVar9 * 2) = auVar3;
          uVar9 = uVar9 + 0x20;
        } while (uVar9 < (ulonglong)(longlong)(int)uVar14);
        iVar17 = iVar16 + uVar14;
      }
      if (uVar14 + 1 <= uVar18) {
        lVar12 = (longlong)(int)uVar14;
        uVar9 = lStack0000000000000070 - lVar12;
        if ((longlong)uVar9 < 8) {
          uVar8 = 0;
        }
        else {
          uVar10 = 0;
          uVar8 = (uint)uVar9 & 0xfffffff8;
          do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)(unaff_RBP + uVar10 + lVar12 + 1);
            auVar1 = vpmovzxbw_avx(auVar1);
            auVar21 = vpsllw_avx(auVar1,1);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(unaff_RBP + uVar10 + lVar12);
            auVar1 = vpmovzxbw_avx(auVar2);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = *(ulonglong *)(unaff_RBP + uVar10 + lVar12 + 3);
            auVar2 = vpmovzxbw_avx(auVar19);
            auVar1 = vpaddw_avx(auVar1,auVar21);
            auVar19 = vpsllw_avx(auVar2,1);
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)(unaff_RBP + uVar10 + lVar12 + 4);
            auVar2 = vpmovzxbw_avx(auVar21);
            auVar1 = vpsubw_avx(auVar1,auVar19);
            auVar1 = vpsubw_avx(auVar1,auVar2);
            *(undefined1 (*) [16])
             (*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + lVar12 * 2 + uVar10 * 2) = auVar1
            ;
            uVar10 = uVar10 + 8;
          } while (uVar10 < (ulonglong)(longlong)(int)uVar8);
          iVar17 = iVar16 + uVar14 + uVar8;
        }
        uVar10 = (ulonglong)(int)uVar8;
        if (uVar10 < uVar9) {
          do {
            *(ushort *)
             (*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + lVar12 * 2 + uVar10 * 2) =
                 ((ushort)unaff_RBP[uVar10 + lVar12] - (ushort)unaff_RBP[uVar10 + 4 + lVar12]) +
                 ((ushort)unaff_RBP[uVar10 + 1 + lVar12] - (ushort)unaff_RBP[uVar10 + 3 + lVar12]) *
                 2;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar9);
          lVar15 = (longlong)(int)((int)uVar10 + iVar16 + uVar14);
          goto LAB_140ab1e2e;
        }
      }
      lVar15 = (longlong)iVar17;
    }
LAB_140ab1e2e:
    uVar9 = 0;
    lVar12 = iVar7 + lStack00000000000000a8;
    do {
      if (lStack0000000000000078 <= (longlong)uVar9) break;
      *(ushort *)(*(longlong *)(unaff_R15 + in_RAX * 8) + lVar15 * 2 + uVar9 * 2) =
           ((ushort)*(byte *)(uVar9 + lVar12) - (ushort)*(byte *)(uVar9 + 4 + lVar12)) +
           ((ushort)*(byte *)(uVar9 + 1 + lVar12) - (ushort)*(byte *)(uVar9 + 3 + lVar12)) * 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 2);
    in_RAX = in_RAX + 1;
    unaff_RBP = unaff_RBP + lStack0000000000000088;
    if ((ulonglong)(longlong)in_stack_00000108._4_4_ <= in_RAX) {
      return 0;
    }
  } while( true );
}

