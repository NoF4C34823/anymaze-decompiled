
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14000ade0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

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
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auVar31 [32];
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar18 = (uint)param_5 & 0xfffffffc;
  lVar20 = (longlong)(int)uVar18;
  lVar15 = -param_2 + param_1;
  iVar28 = 0;
  lVar29 = 0;
  do {
    lVar15 = lVar15 + param_2;
    iVar28 = iVar28 + 1;
    FUN_14000f6c0(lVar15);
    if ((int)uVar18 < (int)(uint)param_5) {
      lVar30 = lVar29 * param_4 + param_3 + lVar20 * 3;
      uVar23 = param_2 * lVar29 + param_1 + lVar20;
      if (((longlong)(lVar30 - uVar23) < (int)(uint)param_5 - lVar20) &&
         ((longlong)-(lVar30 - uVar23) < ((int)(uint)param_5 - lVar20) * 3)) {
        iVar19 = 1;
        lVar21 = 0;
        uVar27 = (uint)param_5 - uVar18 >> 1;
        uVar25 = 0;
        if (uVar27 != 0) {
          do {
            uVar16 = uVar25;
            uVar3 = *(undefined1 *)(uVar23 + uVar16 * 2);
            *(undefined1 *)(lVar21 + 2 + lVar30) = uVar3;
            *(undefined1 *)(lVar21 + 1 + lVar30) = uVar3;
            *(undefined1 *)(lVar21 + lVar30) = uVar3;
            uVar3 = *(undefined1 *)(uVar23 + 1 + uVar16 * 2);
            uVar25 = uVar16 + 1;
            *(undefined1 *)(lVar21 + 5 + lVar30) = uVar3;
            *(undefined1 *)(lVar21 + 4 + lVar30) = uVar3;
            *(undefined1 *)(lVar21 + 3 + lVar30) = uVar3;
            lVar21 = lVar21 + 6;
          } while (uVar25 < uVar27);
          iVar19 = (int)uVar16 + 2 + (int)uVar25;
        }
        if (iVar19 - 1U < (uint)param_5 - uVar18) {
          uVar3 = *(undefined1 *)((longlong)iVar19 + -1 + uVar23);
          lVar21 = (longlong)iVar19 * 3;
          *(undefined1 *)(lVar21 + -1 + lVar30) = uVar3;
          *(undefined1 *)(lVar21 + -2 + lVar30) = uVar3;
          *(undefined1 *)(lVar21 + -3 + lVar30) = uVar3;
        }
      }
      else {
        uVar27 = ((uint)param_5 - (uVar18 + 1)) + 1;
        if ((int)uVar27 < 0x20) {
LAB_14000b225:
          uVar26 = 0;
        }
        else {
          if ((int)uVar27 < 0x12c0) {
            uVar25 = 0;
            uVar26 = uVar27 & 0xffffffe0;
          }
          else {
            uVar25 = uVar23 & 0x1f;
            if ((int)uVar25 != 0) {
              uVar25 = (ulonglong)(0x20 - (int)uVar25);
            }
            iVar19 = (int)uVar25;
            if ((int)uVar27 < iVar19 + 0x20) goto LAB_14000b225;
            uVar16 = 0;
            lVar21 = 0;
            uVar26 = uVar27 - (uVar27 - iVar19 & 0x1f);
            if (iVar19 != 0) {
              do {
                uVar3 = *(undefined1 *)(uVar16 + uVar23);
                uVar16 = uVar16 + 1;
                *(undefined1 *)(lVar21 + 2 + lVar30) = uVar3;
                *(undefined1 *)(lVar21 + 1 + lVar30) = uVar3;
                *(undefined1 *)(lVar21 + lVar30) = uVar3;
                lVar21 = lVar21 + 3;
              } while (uVar16 < uVar25);
            }
          }
          auVar14 = _DAT_143085d40;
          auVar13 = _DAT_143085d20;
          auVar12 = _DAT_143085d00;
          lVar21 = uVar25 * 3;
          do {
            auVar2 = *(undefined1 (*) [32])(uVar25 + uVar23);
            uVar25 = uVar25 + 0x20;
            auVar9 = vpshufb_avx2(auVar2,_DAT_143085ca0);
            auVar10 = vpshufb_avx2(auVar2,_DAT_143085cc0);
            auVar11 = vpshufb_avx2(auVar2,_DAT_143085ce0);
            auVar31 = vpblendvb_avx2(auVar9,auVar10,auVar12);
            auVar9 = vpblendvb_avx2(auVar10,auVar9,auVar12);
            auVar31 = vpblendvb_avx2(auVar31,auVar11,auVar13);
            auVar9 = vpblendvb_avx2(auVar9,auVar11,auVar14);
            *(undefined1 (*) [32])(lVar21 + 0x20 + lVar30) = auVar31;
            auVar31 = vpshufb_avx2(auVar2,_DAT_143085d60);
            auVar10 = vpshufb_avx2(auVar2,_DAT_143085d80);
            auVar11 = vpshufb_avx2(auVar2,_DAT_143085da0);
            auVar2 = vpor_avx2(auVar31,auVar10);
            auVar2 = vpor_avx2(auVar2,auVar11);
            auVar31._0_16_ = ZEXT116(0) * auVar2._0_16_ + ZEXT116(1) * auVar9._0_16_;
            auVar31._16_16_ = ZEXT116(0) * auVar9._16_16_ + ZEXT116(1) * auVar2._0_16_;
            auVar2 = vperm2i128_avx2(auVar2,auVar9,0x31);
            *(undefined1 (*) [32])(lVar21 + lVar30) = auVar31;
            *(undefined1 (*) [32])(lVar21 + 0x40 + lVar30) = auVar2;
            lVar21 = lVar21 + 0x60;
          } while (uVar25 < (ulonglong)(longlong)(int)uVar26);
        }
        if (uVar26 + 1 <= uVar27) {
          lVar21 = (longlong)(int)uVar26;
          uVar25 = (int)uVar27 - lVar21;
          if ((longlong)uVar25 < 0x10) {
            uVar16 = 0;
          }
          else {
            uVar24 = 0;
            uVar16 = (ulonglong)(int)((uint)uVar25 & 0xfffffff0);
            lVar22 = lVar21 * 3 + lVar30;
            lVar17 = 0;
            do {
              auVar1 = *(undefined1 (*) [16])(uVar24 + uVar23 + lVar21);
              auVar8 = vpunpcklbw_avx(auVar1,auVar1);
              uVar24 = uVar24 + 0x10;
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
              *(undefined1 (*) [16])(lVar17 + lVar22) = auVar8;
              *(undefined1 (*) [16])(lVar17 + 0x10 + lVar22) = auVar4;
              auVar1 = vpshufb_avx(auVar1,_DAT_143085e20);
              auVar1 = vpor_avx(auVar5,auVar1);
              *(undefined1 (*) [16])(lVar17 + 0x20 + lVar22) = auVar1;
              lVar17 = lVar17 + 0x30;
            } while (uVar24 < uVar16);
          }
          lVar17 = uVar16 * 3;
          if (uVar16 < uVar25) {
            lVar30 = lVar30 + lVar21 * 3;
            do {
              uVar3 = *(undefined1 *)(uVar16 + uVar23 + lVar21);
              uVar16 = uVar16 + 1;
              *(undefined1 *)(lVar17 + 2 + lVar30) = uVar3;
              *(undefined1 *)(lVar17 + 1 + lVar30) = uVar3;
              *(undefined1 *)(lVar17 + lVar30) = uVar3;
              lVar17 = lVar17 + 3;
            } while (uVar16 < uVar25);
          }
        }
      }
    }
    lVar29 = lVar29 + 1;
    if (param_5._4_4_ <= iVar28) {
      return 0;
    }
  } while( true );
}

