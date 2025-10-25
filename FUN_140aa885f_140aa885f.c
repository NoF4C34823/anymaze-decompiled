
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aa885f(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong in_RAX;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 uVar21;
  longlong unaff_RBP;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong in_R10;
  longlong lVar31;
  longlong in_R11;
  longlong lVar32;
  longlong lVar33;
  int unaff_R14D;
  int iVar34;
  int unaff_R15D;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  
  auVar15 = _DAT_14308f4f0;
  auVar13 = _DAT_14308f4c0;
  auVar12 = _DAT_14308f480;
  auVar11 = _DAT_14308f460;
  auVar10 = _DAT_14308f440;
  auVar9 = _DAT_14308f420;
  auVar8 = _DAT_14308f400;
  lVar17 = (longlong)param_4;
  iVar28 = unaff_R14D + -0x10;
  uVar29 = (longlong)(((ulonglong)(lVar17 >> 3) >> 0x3c) + lVar17) >> 4;
  do {
    auVar14 = _DAT_14308f4e0;
    uVar30 = unaff_RBP + in_RAX;
    iVar26 = 0;
    lVar31 = *(longlong *)(in_R11 + param_2 * 8);
    lVar33 = *(longlong *)(in_R11 + 8 + param_2 * 8);
    lVar32 = *(longlong *)(in_R11 + 0x10 + param_2 * 8);
    if ((uVar30 & 0xf) == 0) {
      if (unaff_R15D == 0) {
        uVar22 = 0;
        lVar20 = 0;
        lVar18 = 0;
        if (-1 < iVar28) {
          do {
            uVar22 = uVar22 + 1;
            auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar31),
                                *(undefined1 (*) [16])(lVar18 + lVar33));
            auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar31),
                                *(undefined1 (*) [16])(lVar18 + 0x10 + lVar33));
            auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar18 + lVar32));
            auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar32));
            auVar4 = vpaddw_avx(auVar4,auVar14);
            auVar5 = vpaddw_avx(auVar5,auVar14);
            lVar18 = lVar18 + 0x20;
            auVar4 = vpmulhw_avx(auVar4,auVar15);
            auVar5 = vpmulhw_avx(auVar5,auVar15);
            auVar4 = vpackuswb_avx(auVar4,auVar5);
            auVar4 = vmovntdq_avx(auVar4);
            *(undefined1 (*) [16])(lVar20 + uVar30) = auVar4;
            lVar20 = lVar20 + 0x10;
          } while (uVar22 < uVar29);
          goto LAB_140aa8b14;
        }
      }
      else {
        uVar22 = 0;
        lVar20 = 0;
        lVar18 = 0;
        iVar26 = 0;
        if (-1 < iVar28) {
          do {
            uVar22 = uVar22 + 1;
            auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar31),
                                *(undefined1 (*) [16])(lVar18 + lVar33));
            auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar31),
                                *(undefined1 (*) [16])(lVar18 + 0x10 + lVar33));
            auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar18 + lVar32));
            auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar32));
            auVar4 = vpaddw_avx(auVar4,auVar14);
            auVar5 = vpaddw_avx(auVar5,auVar14);
            lVar18 = lVar18 + 0x20;
            auVar4 = vpmulhw_avx(auVar4,auVar15);
            auVar5 = vpmulhw_avx(auVar5,auVar15);
            auVar4 = vpackuswb_avx(auVar4,auVar5);
            *(undefined1 (*) [16])(lVar20 + uVar30) = auVar4;
            lVar20 = lVar20 + 0x10;
          } while (uVar22 < uVar29);
LAB_140aa8b14:
          lVar18 = uVar22 * 0x20;
          iVar26 = (int)uVar22 << 4;
          lVar31 = lVar31 + lVar18;
          lVar33 = lVar33 + lVar18;
          lVar32 = lVar32 + lVar18;
        }
      }
    }
    else {
      uVar22 = 0;
      lVar20 = 0;
      lVar18 = 0;
      if (-1 < iVar28) {
        do {
          uVar22 = uVar22 + 1;
          auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar31),
                              *(undefined1 (*) [16])(lVar18 + lVar33));
          auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar31),
                              *(undefined1 (*) [16])(lVar18 + 0x10 + lVar33));
          auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar18 + lVar32));
          auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar32));
          auVar4 = vpaddw_avx(auVar4,auVar14);
          auVar5 = vpaddw_avx(auVar5,auVar14);
          lVar18 = lVar18 + 0x20;
          auVar4 = vpmulhw_avx(auVar4,auVar15);
          auVar5 = vpmulhw_avx(auVar5,auVar15);
          auVar4 = vpackuswb_avx(auVar4,auVar5);
          *(undefined1 (*) [16])(lVar20 + uVar30) = auVar4;
          lVar20 = lVar20 + 0x10;
        } while (uVar22 < uVar29);
        goto LAB_140aa8b14;
      }
    }
    if (iVar26 < unaff_R14D) {
      lVar25 = (longlong)iVar26;
      uVar30 = uVar30 + lVar25;
      lVar20 = lVar17 - lVar25;
      lVar18 = lVar20 * 2;
      if (((((longlong)(uVar30 - lVar31) < lVar18) && ((longlong)-(uVar30 - lVar31) < lVar20)) ||
          (((longlong)(uVar30 - lVar33) < lVar18 && ((longlong)-(uVar30 - lVar33) < lVar20)))) ||
         (((longlong)(uVar30 - lVar32) < lVar18 && ((longlong)-(uVar30 - lVar32) < lVar20)))) {
        iVar34 = 1;
        uVar27 = (uint)(unaff_R14D - iVar26) >> 1;
        uVar22 = 0;
        if (uVar27 != 0) {
          do {
            uVar23 = uVar22;
            iVar34 = ((int)*(short *)(lVar31 + uVar23 * 4) + (int)*(short *)(lVar33 + uVar23 * 4) +
                     (int)*(short *)(lVar32 + uVar23 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar34 < 1) {
              iVar34 = 0;
            }
            uVar21 = (undefined1)iVar34;
            if (0xfe < iVar34) {
              uVar21 = 0xff;
            }
            *(undefined1 *)(uVar30 + uVar23 * 2) = uVar21;
            iVar34 = ((int)*(short *)(lVar31 + 2 + uVar23 * 4) +
                      (int)*(short *)(lVar33 + 2 + uVar23 * 4) +
                     (int)*(short *)(lVar32 + 2 + uVar23 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar34 < 1) {
              iVar34 = 0;
            }
            uVar21 = (undefined1)iVar34;
            if (0xfe < iVar34) {
              uVar21 = 0xff;
            }
            *(undefined1 *)(uVar30 + 1 + uVar23 * 2) = uVar21;
            uVar22 = uVar23 + 1;
          } while (uVar22 < uVar27);
          iVar34 = (int)uVar23 + 2 + (int)uVar22;
        }
        if (iVar34 - 1U < (uint)(unaff_R14D - iVar26)) {
          lVar18 = (longlong)iVar34;
          iVar26 = ((int)*(short *)(lVar31 + -2 + lVar18 * 2) +
                    (int)*(short *)(lVar33 + -2 + lVar18 * 2) +
                   (int)*(short *)(lVar32 + -2 + lVar18 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
          if (iVar26 < 1) {
            iVar26 = 0;
          }
          iVar34 = 0xff;
          if (iVar26 < 0xff) {
            iVar34 = iVar26;
          }
          *(char *)(lVar25 + unaff_RBP + lVar18 + -1 + in_RAX) = (char)iVar34;
        }
      }
      else {
        uVar27 = (unaff_R14D - (iVar26 + 1)) + 1;
        if ((int)uVar27 < 0x20) {
LAB_140aa90dc:
          uVar16 = 0;
        }
        else {
          if ((int)uVar27 < 0x12c0) {
            uVar22 = 0;
            uVar16 = uVar27 & 0xffffffe0;
          }
          else {
            uVar22 = uVar30 & 0x1f;
            if ((int)uVar22 != 0) {
              uVar22 = (ulonglong)(0x20 - (int)uVar22);
            }
            iVar26 = (int)uVar22;
            if ((int)uVar27 < iVar26 + 0x20) goto LAB_140aa90dc;
            uVar23 = 0;
            uVar16 = uVar27 - (uVar27 - iVar26 & 0x1f);
            if (iVar26 != 0) {
              do {
                iVar26 = ((int)*(short *)(lVar31 + uVar23 * 2) +
                          (int)*(short *)(lVar33 + uVar23 * 2) +
                         (int)*(short *)(lVar32 + uVar23 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
                if (iVar26 < 1) {
                  iVar26 = 0;
                }
                uVar21 = (undefined1)iVar26;
                if (0xfe < iVar26) {
                  uVar21 = 0xff;
                }
                *(undefined1 *)(uVar23 + uVar30) = uVar21;
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar22);
            }
          }
          do {
            auVar36 = *(undefined1 (*) [32])(lVar31 + uVar22 * 2);
            auVar37 = *(undefined1 (*) [32])(lVar33 + uVar22 * 2);
            auVar35 = *(undefined1 (*) [32])(lVar32 + uVar22 * 2);
            auVar1 = *(undefined1 (*) [32])(lVar31 + 0x20 + uVar22 * 2);
            auVar2 = *(undefined1 (*) [32])(lVar33 + 0x20 + uVar22 * 2);
            auVar3 = *(undefined1 (*) [32])(lVar32 + 0x20 + uVar22 * 2);
            auVar6 = vpmovsxwd_avx2(auVar36._0_16_);
            auVar7 = vpmovsxwd_avx2(auVar37._0_16_);
            auVar6 = vpaddd_avx2(auVar6,auVar7);
            auVar36 = vpmovsxwd_avx2(auVar36._16_16_);
            auVar37 = vpmovsxwd_avx2(auVar37._16_16_);
            auVar36 = vpaddd_avx2(auVar36,auVar37);
            auVar37 = vpmovsxwd_avx2(auVar35._0_16_);
            auVar37 = vpaddd_avx2(auVar6,auVar37);
            auVar37 = vpmulld_avx2(auVar8,auVar37);
            auVar37 = vpaddd_avx2(auVar37,auVar9);
            auVar37 = vpsrad_avx2(auVar37,0x10);
            auVar37 = vpmaxsd_avx2(auVar37,(undefined1  [32])0x0);
            auVar37 = vpminsd_avx2(auVar37,auVar10);
            auVar35 = vpmovsxwd_avx2(auVar35._16_16_);
            auVar36 = vpaddd_avx2(auVar36,auVar35);
            auVar6 = vpshufb_avx2(auVar37,auVar11);
            auVar36 = vpmulld_avx2(auVar8,auVar36);
            auVar36 = vpaddd_avx2(auVar36,auVar9);
            auVar36 = vpsrad_avx2(auVar36,0x10);
            auVar36 = vpmaxsd_avx2(auVar36,(undefined1  [32])0x0);
            auVar36 = vpminsd_avx2(auVar36,auVar10);
            auVar7 = vpshufb_avx2(auVar36,auVar12);
            auVar36 = vpmovsxwd_avx2(auVar1._0_16_);
            auVar37 = vpmovsxwd_avx2(auVar1._16_16_);
            auVar35 = vpmovsxwd_avx2(auVar2._0_16_);
            auVar36 = vpaddd_avx2(auVar36,auVar35);
            auVar35 = vpmovsxwd_avx2(auVar2._16_16_);
            auVar37 = vpaddd_avx2(auVar37,auVar35);
            auVar35 = vpmovsxwd_avx2(auVar3._0_16_);
            auVar36 = vpaddd_avx2(auVar36,auVar35);
            auVar36 = vpmulld_avx2(auVar8,auVar36);
            auVar36 = vpaddd_avx2(auVar36,auVar9);
            auVar35 = vpsrad_avx2(auVar36,0x10);
            auVar36 = vpmovsxwd_avx2(auVar3._16_16_);
            auVar36 = vpaddd_avx2(auVar37,auVar36);
            auVar36 = vpmulld_avx2(auVar8,auVar36);
            auVar36 = vpaddd_avx2(auVar36,auVar9);
            auVar37 = vpmaxsd_avx2(auVar35,(undefined1  [32])0x0);
            auVar35 = vpsrad_avx2(auVar36,0x10);
            auVar36 = vpminsd_avx2(auVar37,auVar10);
            auVar37 = vpshufb_avx2(auVar36,auVar11);
            auVar36 = vpmaxsd_avx2(auVar35,(undefined1  [32])0x0);
            auVar36 = vpminsd_avx2(auVar36,auVar10);
            auVar35 = vperm2i128_avx2(auVar6,auVar6,0x81);
            auVar2 = vperm2i128_avx2(auVar7,auVar7,0x81);
            auVar1 = vpshufb_avx2(auVar36,auVar12);
            auVar3 = vperm2i128_avx2(auVar37,auVar37,0x28);
            auVar36 = vpand_avx2(auVar37,auVar13);
            auVar37 = vpor_avx2(auVar35,ZEXT1632(auVar6._0_16_));
            auVar35 = vpor_avx2(auVar2,ZEXT1632(auVar7._0_16_));
            auVar37 = vpor_avx2(auVar37,auVar35);
            auVar35 = vpor_avx2(auVar36,auVar3);
            auVar2 = vperm2i128_avx2(auVar1,auVar1,0x28);
            auVar36 = vpand_avx2(auVar13,auVar1);
            auVar37 = vpor_avx2(auVar37,auVar35);
            auVar36 = vpor_avx2(auVar36,auVar2);
            auVar36 = vpor_avx2(auVar37,auVar36);
            *(undefined1 (*) [32])(uVar22 + uVar30) = auVar36;
            uVar22 = uVar22 + 0x20;
          } while (uVar22 < (ulonglong)(longlong)(int)uVar16);
        }
        if (uVar16 + 1 <= uVar27) {
          uVar27 = uVar27 - uVar16;
          if ((int)uVar27 < 8) {
            uVar19 = 0;
          }
          else {
            uVar24 = 0;
            uVar19 = uVar27 & 0xfffffff8;
            lVar18 = 0;
            do {
              iVar26 = uVar24 * 2;
              uVar24 = uVar24 + 8;
              lVar20 = (longlong)(int)(uVar16 * 2 + iVar26);
              auVar36 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar20 + lVar31));
              auVar37 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar20 + lVar33));
              auVar36 = vpaddd_avx2(auVar36,auVar37);
              auVar37 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar20 + lVar32));
              auVar36 = vpaddd_avx2(auVar36,auVar37);
              auVar36 = vpmulld_avx2(auVar8,auVar36);
              auVar36 = vpaddd_avx2(auVar36,auVar9);
              auVar36 = vpsrad_avx2(auVar36,0x10);
              auVar36 = vpmaxsd_avx2(auVar36,(undefined1  [32])0x0);
              auVar36 = vpminsd_avx2(auVar36,auVar10);
              auVar36 = vpshufb_avx2(auVar36,auVar11);
              auVar37 = vperm2i128_avx2(auVar36,auVar36,0x81);
              auVar36 = vpor_avx2(auVar37,ZEXT1632(auVar36._0_16_));
              *(longlong *)(lVar18 + (longlong)(int)uVar16 + uVar30) = auVar36._0_8_;
              lVar18 = lVar18 + 8;
            } while (uVar24 < uVar19);
          }
          lVar18 = (longlong)(int)uVar19;
          if (uVar19 < uVar27) {
            do {
              iVar26 = uVar19 * 2;
              uVar19 = uVar19 + 1;
              lVar20 = (longlong)(int)(uVar16 * 2 + iVar26);
              iVar26 = ((int)*(short *)(lVar20 + lVar31) + (int)*(short *)(lVar20 + lVar33) +
                       (int)*(short *)(lVar20 + lVar32)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar26 < 1) {
                iVar26 = 0;
              }
              uVar21 = (undefined1)iVar26;
              if (0xfe < iVar26) {
                uVar21 = 0xff;
              }
              *(undefined1 *)(lVar18 + uVar30 + (longlong)(int)uVar16) = uVar21;
              lVar18 = lVar18 + 1;
            } while (uVar19 < uVar27);
          }
        }
      }
    }
    param_2 = param_2 + 1;
    in_RAX = in_RAX + in_R10;
    if (param_3 <= param_2) {
      return;
    }
  } while( true );
}

