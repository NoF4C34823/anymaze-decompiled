
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000ae26(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  int in_EAX;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong in_R10;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [32];
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  int iStack0000000000000078;
  longlong lStack0000000000000080;
  longlong lStack0000000000000088;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  
  param_2 = param_2 & 0xfffffffc;
  lStack0000000000000040 = (longlong)(int)param_2;
  lVar15 = -in_EAX + param_1;
  lStack0000000000000048 = param_1 + lStack0000000000000040;
  lStack0000000000000050 = param_3 + lStack0000000000000040 * 3;
  iStack0000000000000078 = param_2 + 1;
  iVar26 = 0;
  lVar27 = 0;
  lStack0000000000000080 = param_4;
  lStack0000000000000088 = in_R10;
  do {
    lVar15 = lVar15 + lStack0000000000000088;
    iVar26 = iVar26 + 1;
    FUN_14000f6c0(lVar15);
    if ((int)param_2 < iStack00000000000000d0) {
      lVar28 = lVar27 * lStack0000000000000080 + lStack0000000000000050;
      uVar21 = lStack0000000000000088 * lVar27 + lStack0000000000000048;
      if (((longlong)(lVar28 - uVar21) < iStack00000000000000d0 - lStack0000000000000040) &&
         ((longlong)-(lVar28 - uVar21) < (iStack00000000000000d0 - lStack0000000000000040) * 3)) {
        iVar18 = 1;
        lVar19 = 0;
        uVar25 = iStack00000000000000d0 - param_2 >> 1;
        uVar23 = 0;
        if (uVar25 != 0) {
          do {
            uVar16 = uVar23;
            uVar3 = *(undefined1 *)(uVar21 + uVar16 * 2);
            *(undefined1 *)(lVar19 + 2 + lVar28) = uVar3;
            *(undefined1 *)(lVar19 + 1 + lVar28) = uVar3;
            *(undefined1 *)(lVar19 + lVar28) = uVar3;
            uVar3 = *(undefined1 *)(uVar21 + 1 + uVar16 * 2);
            uVar23 = uVar16 + 1;
            *(undefined1 *)(lVar19 + 5 + lVar28) = uVar3;
            *(undefined1 *)(lVar19 + 4 + lVar28) = uVar3;
            *(undefined1 *)(lVar19 + 3 + lVar28) = uVar3;
            lVar19 = lVar19 + 6;
          } while (uVar23 < uVar25);
          iVar18 = (int)uVar16 + 2 + (int)uVar23;
        }
        if (iVar18 - 1U < iStack00000000000000d0 - param_2) {
          uVar3 = *(undefined1 *)((longlong)iVar18 + -1 + uVar21);
          lVar19 = (longlong)iVar18 * 3;
          *(undefined1 *)(lVar19 + -1 + lVar28) = uVar3;
          *(undefined1 *)(lVar19 + -2 + lVar28) = uVar3;
          *(undefined1 *)(lVar19 + -3 + lVar28) = uVar3;
        }
      }
      else {
        uVar25 = (iStack00000000000000d0 - iStack0000000000000078) + 1;
        if ((int)uVar25 < 0x20) {
LAB_14000b225:
          uVar24 = 0;
        }
        else {
          if ((int)uVar25 < 0x12c0) {
            uVar23 = 0;
            uVar24 = uVar25 & 0xffffffe0;
          }
          else {
            uVar23 = uVar21 & 0x1f;
            if ((int)uVar23 != 0) {
              uVar23 = (ulonglong)(0x20 - (int)uVar23);
            }
            iVar18 = (int)uVar23;
            if ((int)uVar25 < iVar18 + 0x20) goto LAB_14000b225;
            uVar16 = 0;
            lVar19 = 0;
            uVar24 = uVar25 - (uVar25 - iVar18 & 0x1f);
            if (iVar18 != 0) {
              do {
                uVar3 = *(undefined1 *)(uVar16 + uVar21);
                uVar16 = uVar16 + 1;
                *(undefined1 *)(lVar19 + 2 + lVar28) = uVar3;
                *(undefined1 *)(lVar19 + 1 + lVar28) = uVar3;
                *(undefined1 *)(lVar19 + lVar28) = uVar3;
                lVar19 = lVar19 + 3;
              } while (uVar16 < uVar23);
            }
          }
          auVar14 = _DAT_143085d40;
          auVar13 = _DAT_143085d20;
          auVar12 = _DAT_143085d00;
          lVar19 = uVar23 * 3;
          do {
            auVar2 = *(undefined1 (*) [32])(uVar23 + uVar21);
            uVar23 = uVar23 + 0x20;
            auVar9 = vpshufb_avx2(auVar2,_DAT_143085ca0);
            auVar10 = vpshufb_avx2(auVar2,_DAT_143085cc0);
            auVar11 = vpshufb_avx2(auVar2,_DAT_143085ce0);
            auVar29 = vpblendvb_avx2(auVar9,auVar10,auVar12);
            auVar9 = vpblendvb_avx2(auVar10,auVar9,auVar12);
            auVar29 = vpblendvb_avx2(auVar29,auVar11,auVar13);
            auVar9 = vpblendvb_avx2(auVar9,auVar11,auVar14);
            *(undefined1 (*) [32])(lVar19 + 0x20 + lVar28) = auVar29;
            auVar29 = vpshufb_avx2(auVar2,_DAT_143085d60);
            auVar10 = vpshufb_avx2(auVar2,_DAT_143085d80);
            auVar11 = vpshufb_avx2(auVar2,_DAT_143085da0);
            auVar2 = vpor_avx2(auVar29,auVar10);
            auVar2 = vpor_avx2(auVar2,auVar11);
            auVar29._0_16_ = ZEXT116(0) * auVar2._0_16_ + ZEXT116(1) * auVar9._0_16_;
            auVar29._16_16_ = ZEXT116(0) * auVar9._16_16_ + ZEXT116(1) * auVar2._0_16_;
            auVar2 = vperm2i128_avx2(auVar2,auVar9,0x31);
            *(undefined1 (*) [32])(lVar19 + lVar28) = auVar29;
            *(undefined1 (*) [32])(lVar19 + 0x40 + lVar28) = auVar2;
            lVar19 = lVar19 + 0x60;
          } while (uVar23 < (ulonglong)(longlong)(int)uVar24);
        }
        if (uVar24 + 1 <= uVar25) {
          lVar19 = (longlong)(int)uVar24;
          uVar23 = (int)uVar25 - lVar19;
          if ((longlong)uVar23 < 0x10) {
            uVar16 = 0;
          }
          else {
            uVar22 = 0;
            uVar16 = (ulonglong)(int)((uint)uVar23 & 0xfffffff0);
            lVar20 = lVar19 * 3 + lVar28;
            lVar17 = 0;
            do {
              auVar1 = *(undefined1 (*) [16])(uVar22 + uVar21 + lVar19);
              auVar8 = vpunpcklbw_avx(auVar1,auVar1);
              uVar22 = uVar22 + 0x10;
              auVar8 = vpshufb_avx(auVar8,_DAT_143085dc0);
              auVar4 = vpshufb_avx(auVar1,_DAT_143085dd0);
              auVar5 = vpshufb_avx(auVar1,_DAT_143085de0);
              auVar6 = vpshufb_avx(auVar1,_DAT_143085df0);
              auVar7 = vpshufb_avx(auVar1,_DAT_143085e00);
              auVar8 = vpor_avx(auVar8,auVar4);
              auVar4 = vpor_avx(auVar5,auVar6);
              auVar5 = vpunpckhbw_avx(auVar1,auVar1);
              auVar4 = vpor_avx(auVar4,auVar7);
              auVar5 = vpshufb_avx(auVar5,_DAT_143085e10);
              *(undefined1 (*) [16])(lVar17 + lVar20) = auVar8;
              *(undefined1 (*) [16])(lVar17 + 0x10 + lVar20) = auVar4;
              auVar1 = vpshufb_avx(auVar1,_DAT_143085e20);
              auVar1 = vpor_avx(auVar5,auVar1);
              *(undefined1 (*) [16])(lVar17 + 0x20 + lVar20) = auVar1;
              lVar17 = lVar17 + 0x30;
            } while (uVar22 < uVar16);
          }
          lVar17 = uVar16 * 3;
          if (uVar16 < uVar23) {
            lVar28 = lVar28 + lVar19 * 3;
            do {
              uVar3 = *(undefined1 *)(uVar16 + uVar21 + lVar19);
              uVar16 = uVar16 + 1;
              *(undefined1 *)(lVar17 + 2 + lVar28) = uVar3;
              *(undefined1 *)(lVar17 + 1 + lVar28) = uVar3;
              *(undefined1 *)(lVar17 + lVar28) = uVar3;
              lVar17 = lVar17 + 3;
            } while (uVar16 < uVar23);
          }
        }
      }
    }
    lVar27 = lVar27 + 1;
    if (iStack00000000000000d4 <= iVar26) {
      return 0;
    }
  } while( true );
}

