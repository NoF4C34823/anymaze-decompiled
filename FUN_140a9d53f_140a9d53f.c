
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a9d53f(longlong param_1,int param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong in_RAX;
  ulonglong uVar10;
  uint *puVar11;
  longlong unaff_RBP;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong in_R10;
  longlong in_R11;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000080;
  longlong lStack0000000000000088;
  ulonglong uStack0000000000000098;
  longlong lStack00000000000000a0;
  ulonglong uStack00000000000000a8;
  int iStack00000000000000b0;
  int iStack00000000000000b8;
  longlong lStack00000000000000c0;
  longlong lStack00000000000000c8;
  longlong lStack00000000000000d0;
  undefined4 in_stack_00000110;
  int iStack0000000000000118;
  int iStack000000000000011c;
  undefined4 in_stack_00000120;
  byte in_stack_00000128;
  
  iStack00000000000000b0 = param_4 + -5;
  uStack0000000000000080 = (ulonglong)param_4;
  iStack00000000000000b8 = 5 - (param_2 + 1);
  lStack0000000000000088 = (longlong)param_2;
  lStack00000000000000a0 = uStack0000000000000080 - lStack0000000000000088;
  uStack00000000000000a8 = 4 - lStack0000000000000088;
  uVar20 = param_4 - 4;
  uStack0000000000000098 = (ulonglong)(int)uVar20;
  auVar27 = ZEXT1664(_DAT_14308f320);
  lStack00000000000000c0 = in_R11;
  lStack00000000000000c8 = param_1;
  lStack00000000000000d0 = param_3;
  do {
    lVar12 = lStack00000000000000c8 + in_RAX;
    uStack0000000000000028 = in_stack_00000120;
    uStack0000000000000030 = (uint)in_stack_00000128;
    iVar7 = FUN_140a9a9c0(lVar12,lStack00000000000000d0,iStack0000000000000118,5,in_stack_00000110);
    iVar8 = 0;
    uVar16 = 0;
    if (0 < iStack0000000000000118) {
      do {
        if (lStack0000000000000088 <= (longlong)uVar16) break;
        bVar6 = *(byte *)(uVar16 + 2 + lStack00000000000000d0);
        iVar8 = (int)uVar16 + 1;
        *(ushort *)(*(longlong *)(unaff_RBP + in_R10 * 8) + uVar16 * 2) =
             (ushort)*(byte *)(uVar16 + lStack00000000000000d0) +
             ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
             (ushort)*(byte *)(uVar16 + 4 + lStack00000000000000d0) +
             ((ushort)*(byte *)(uVar16 + 1 + lStack00000000000000d0) +
             (ushort)*(byte *)(uVar16 + 3 + lStack00000000000000d0)) * 4;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uStack0000000000000080);
    }
    lVar19 = (longlong)iVar8;
    if (-1 < iStack00000000000000b0) {
      if ((int)uVar20 < 0x10) {
LAB_140a9da80:
        iVar18 = 0;
        if (uVar20 != 0) {
          uVar13 = 0;
          uVar16 = uStack0000000000000098;
          iVar9 = iVar8;
LAB_140a9d924:
          uVar14 = (ulonglong)(int)uVar13;
          if (uVar16 <= uVar14) goto LAB_140a9d992;
          lVar12 = lVar12 + iVar18;
          do {
            bVar6 = *(byte *)(uVar14 + 2 + lVar12);
            *(ushort *)
             (*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + (longlong)iVar18 * 2 + uVar14 * 2
             ) = (ushort)*(byte *)(uVar14 + lVar12) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
                 (ushort)*(byte *)(uVar14 + 4 + lVar12) +
                 ((ushort)*(byte *)(uVar14 + 1 + lVar12) + (ushort)*(byte *)(uVar14 + 3 + lVar12)) *
                 4;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar16);
          lVar19 = (longlong)((int)uVar14 + iVar8 + iVar18);
        }
      }
      else {
        uVar13 = (int)*(undefined8 *)(unaff_RBP + in_R10 * 8) + iVar8 * 2;
        uVar17 = uVar13 & 0xf;
        if (uVar17 != 0) {
          if ((uVar13 & 1) != 0) goto LAB_140a9da80;
          uVar17 = 0x10 - uVar17 >> 1;
        }
        uVar16 = (ulonglong)uVar17;
        if ((int)uVar20 < (int)(uVar17 + 0x10)) goto LAB_140a9da80;
        uVar14 = 0;
        iVar18 = uVar20 - (uVar20 - uVar17 & 0xf);
        if (uVar17 != 0) {
          do {
            bVar6 = *(byte *)(uVar14 + 2 + lVar12);
            *(ushort *)(*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + uVar14 * 2) =
                 (ushort)*(byte *)(uVar14 + lVar12) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
                 (ushort)*(byte *)(uVar14 + 4 + lVar12) +
                 ((ushort)*(byte *)(uVar14 + 1 + lVar12) + (ushort)*(byte *)(uVar14 + 3 + lVar12)) *
                 4;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar16);
        }
        uVar14 = (ulonglong)iVar18;
        lVar15 = uVar16 + in_RAX;
        do {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(lVar15 + 2 + lStack00000000000000c8);
          auVar21 = vpmovzxbw_avx(auVar21);
          auVar26 = auVar27._0_16_;
          auVar23 = vpmullw_avx(auVar26,auVar21);
          auVar25._8_8_ = 0;
          auVar25._0_8_ = *(ulonglong *)(lVar15 + 1 + lStack00000000000000c8);
          auVar21 = vpmovzxbw_avx(auVar25);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = *(ulonglong *)(lVar15 + lStack00000000000000c8);
          auVar25 = vpmovzxbw_avx(auVar22);
          auVar21 = vpsllw_avx(auVar21,2);
          auVar21 = vpaddw_avx(auVar25,auVar21);
          auVar21 = vpaddw_avx(auVar21,auVar23);
          auVar23._8_8_ = 0;
          auVar23._0_8_ = *(ulonglong *)(lVar15 + 9 + lStack00000000000000c8);
          auVar25 = vpmovzxbw_avx(auVar23);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = *(ulonglong *)(lVar15 + 3 + lStack00000000000000c8);
          auVar22 = vpmovzxbw_avx(auVar1);
          auVar24 = vpsllw_avx(auVar25,2);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulonglong *)(lVar15 + 10 + lStack00000000000000c8);
          auVar25 = vpmovzxbw_avx(auVar2);
          auVar23 = vpsllw_avx(auVar22,2);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)(lVar15 + 8 + lStack00000000000000c8);
          auVar22 = vpmovzxbw_avx(auVar3);
          auVar21 = vpaddw_avx(auVar21,auVar23);
          auVar1 = vpmullw_avx(auVar26,auVar25);
          auVar25 = vpaddw_avx(auVar22,auVar24);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = *(ulonglong *)(lVar15 + 4 + lStack00000000000000c8);
          auVar22 = vpmovzxbw_avx(auVar24);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)(lVar15 + 0xb + lStack00000000000000c8);
          auVar23 = vpmovzxbw_avx(auVar4);
          auVar21 = vpaddw_avx(auVar21,auVar22);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)(lVar15 + 0xc + lStack00000000000000c8);
          auVar22 = vpmovzxbw_avx(auVar5);
          auVar25 = vpaddw_avx(auVar25,auVar1);
          *(undefined1 (*) [16])(*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + uVar16 * 2) =
               auVar21;
          auVar21 = vpsllw_avx(auVar23,2);
          auVar21 = vpaddw_avx(auVar25,auVar21);
          auVar21 = vpaddw_avx(auVar21,auVar22);
          lVar15 = lVar15 + 0x10;
          *(undefined1 (*) [16])
           (*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + 0x10 + uVar16 * 2) = auVar21;
          uVar16 = uVar16 + 0x10;
        } while (uVar16 < uVar14);
        iVar9 = iVar8 + iVar18;
        if (iVar18 + 1U <= uVar20) {
          uVar16 = uStack0000000000000098 - uVar14;
          if ((longlong)uVar16 < 4) {
            uVar13 = 0;
          }
          else {
            uVar10 = 0;
            uVar13 = (uint)uVar16 & 0xfffffffc;
            puVar11 = (uint *)(lVar12 + uVar14);
            do {
              auVar21 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar11 + 2)));
              auVar22 = vpmullw_avx(auVar26,auVar21);
              auVar21 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar11 + 1)));
              auVar25 = vpsllw_avx(auVar21,2);
              auVar21 = vpmovzxbw_avx(ZEXT416(*puVar11));
              auVar21 = vpaddw_avx(auVar21,auVar25);
              auVar25 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar11 + 3)));
              auVar21 = vpaddw_avx(auVar21,auVar22);
              auVar22 = vpsllw_avx(auVar25,2);
              auVar25 = vpmovzxbw_avx(ZEXT416(puVar11[1]));
              auVar21 = vpaddw_avx(auVar21,auVar22);
              auVar21 = vpaddw_avx(auVar21,auVar25);
              puVar11 = puVar11 + 1;
              *(longlong *)
               (*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + uVar14 * 2 + uVar10 * 2) =
                   auVar21._0_8_;
              uVar10 = uVar10 + 4;
            } while (uVar10 < (ulonglong)(longlong)(int)uVar13);
            iVar9 = uVar13 + iVar8 + iVar18;
          }
          goto LAB_140a9d924;
        }
LAB_140a9d992:
        lVar19 = (longlong)iVar9;
      }
    }
    uVar16 = 0;
    if (0 < iStack00000000000000b8) {
      lVar12 = iVar7 + lStack00000000000000d0;
      do {
        if (lStack00000000000000a0 <= (longlong)uVar16) break;
        bVar6 = *(byte *)(uVar16 + 2 + lVar12);
        *(ushort *)(*(longlong *)(unaff_RBP + in_R10 * 8) + lVar19 * 2 + uVar16 * 2) =
             (ushort)*(byte *)(uVar16 + lVar12) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
             (ushort)*(byte *)(uVar16 + 4 + lVar12) +
             ((ushort)*(byte *)(uVar16 + 1 + lVar12) + (ushort)*(byte *)(uVar16 + 3 + lVar12)) * 4;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uStack00000000000000a8);
    }
    in_R10 = in_R10 + 1;
    in_RAX = in_RAX + lStack00000000000000c0;
    if ((ulonglong)(longlong)iStack000000000000011c <= in_R10) {
      return 0;
    }
  } while( true );
}

