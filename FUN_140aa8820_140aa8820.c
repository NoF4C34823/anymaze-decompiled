
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aa8820(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

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
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  
  auVar15 = _DAT_14308f4f0;
  auVar13 = _DAT_14308f4c0;
  auVar12 = _DAT_14308f480;
  auVar11 = _DAT_14308f460;
  auVar10 = _DAT_14308f440;
  auVar9 = _DAT_14308f420;
  auVar8 = _DAT_14308f400;
  uVar20 = 0;
  uVar30 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar31 = (int)param_4;
  lVar16 = 0;
  if (0 < (longlong)uVar30) {
    lVar18 = (longlong)iVar31;
    iVar32 = iVar31 + -0x10;
    uVar33 = (longlong)(((ulonglong)(lVar18 >> 3) >> 0x3c) + lVar18) >> 4;
    do {
      auVar14 = _DAT_14308f4e0;
      uVar34 = param_2 + lVar16;
      iVar28 = 0;
      lVar35 = *(longlong *)(param_1 + uVar20 * 8);
      lVar37 = *(longlong *)(param_1 + 8 + uVar20 * 8);
      lVar36 = *(longlong *)(param_1 + 0x10 + uVar20 * 8);
      if ((uVar34 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar24 = 0;
          lVar22 = 0;
          lVar19 = 0;
          if (-1 < iVar32) {
            do {
              uVar24 = uVar24 + 1;
              auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + lVar35),
                                  *(undefined1 (*) [16])(lVar19 + lVar37));
              auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + 0x10 + lVar35),
                                  *(undefined1 (*) [16])(lVar19 + 0x10 + lVar37));
              auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar19 + lVar36));
              auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar19 + 0x10 + lVar36));
              auVar4 = vpaddw_avx(auVar4,auVar14);
              auVar5 = vpaddw_avx(auVar5,auVar14);
              lVar19 = lVar19 + 0x20;
              auVar4 = vpmulhw_avx(auVar4,auVar15);
              auVar5 = vpmulhw_avx(auVar5,auVar15);
              auVar4 = vpackuswb_avx(auVar4,auVar5);
              auVar4 = vmovntdq_avx(auVar4);
              *(undefined1 (*) [16])(lVar22 + uVar34) = auVar4;
              lVar22 = lVar22 + 0x10;
            } while (uVar24 < uVar33);
            goto LAB_140aa8b14;
          }
        }
        else {
          uVar24 = 0;
          lVar22 = 0;
          lVar19 = 0;
          iVar28 = 0;
          if (-1 < iVar32) {
            do {
              uVar24 = uVar24 + 1;
              auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + lVar35),
                                  *(undefined1 (*) [16])(lVar19 + lVar37));
              auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + 0x10 + lVar35),
                                  *(undefined1 (*) [16])(lVar19 + 0x10 + lVar37));
              auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar19 + lVar36));
              auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar19 + 0x10 + lVar36));
              auVar4 = vpaddw_avx(auVar4,auVar14);
              auVar5 = vpaddw_avx(auVar5,auVar14);
              lVar19 = lVar19 + 0x20;
              auVar4 = vpmulhw_avx(auVar4,auVar15);
              auVar5 = vpmulhw_avx(auVar5,auVar15);
              auVar4 = vpackuswb_avx(auVar4,auVar5);
              *(undefined1 (*) [16])(lVar22 + uVar34) = auVar4;
              lVar22 = lVar22 + 0x10;
            } while (uVar24 < uVar33);
LAB_140aa8b14:
            lVar19 = uVar24 * 0x20;
            iVar28 = (int)uVar24 << 4;
            lVar35 = lVar35 + lVar19;
            lVar37 = lVar37 + lVar19;
            lVar36 = lVar36 + lVar19;
          }
        }
      }
      else {
        uVar24 = 0;
        lVar22 = 0;
        lVar19 = 0;
        if (-1 < iVar32) {
          do {
            uVar24 = uVar24 + 1;
            auVar4 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + lVar35),
                                *(undefined1 (*) [16])(lVar19 + lVar37));
            auVar5 = vpaddw_avx(*(undefined1 (*) [16])(lVar19 + 0x10 + lVar35),
                                *(undefined1 (*) [16])(lVar19 + 0x10 + lVar37));
            auVar4 = vpaddw_avx(auVar4,*(undefined1 (*) [16])(lVar19 + lVar36));
            auVar5 = vpaddw_avx(auVar5,*(undefined1 (*) [16])(lVar19 + 0x10 + lVar36));
            auVar4 = vpaddw_avx(auVar4,auVar14);
            auVar5 = vpaddw_avx(auVar5,auVar14);
            lVar19 = lVar19 + 0x20;
            auVar4 = vpmulhw_avx(auVar4,auVar15);
            auVar5 = vpmulhw_avx(auVar5,auVar15);
            auVar4 = vpackuswb_avx(auVar4,auVar5);
            *(undefined1 (*) [16])(lVar22 + uVar34) = auVar4;
            lVar22 = lVar22 + 0x10;
          } while (uVar24 < uVar33);
          goto LAB_140aa8b14;
        }
      }
      if (iVar28 < iVar31) {
        lVar27 = (longlong)iVar28;
        uVar34 = uVar34 + lVar27;
        lVar22 = lVar18 - lVar27;
        lVar19 = lVar22 * 2;
        if (((((longlong)(uVar34 - lVar35) < lVar19) && ((longlong)-(uVar34 - lVar35) < lVar22)) ||
            (((longlong)(uVar34 - lVar37) < lVar19 && ((longlong)-(uVar34 - lVar37) < lVar22)))) ||
           (((longlong)(uVar34 - lVar36) < lVar19 && ((longlong)-(uVar34 - lVar36) < lVar22)))) {
          iVar38 = 1;
          uVar29 = (uint)(iVar31 - iVar28) >> 1;
          uVar24 = 0;
          if (uVar29 != 0) {
            do {
              uVar25 = uVar24;
              iVar38 = ((int)*(short *)(lVar35 + uVar25 * 4) + (int)*(short *)(lVar37 + uVar25 * 4)
                       + (int)*(short *)(lVar36 + uVar25 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar38 < 1) {
                iVar38 = 0;
              }
              uVar23 = (undefined1)iVar38;
              if (0xfe < iVar38) {
                uVar23 = 0xff;
              }
              *(undefined1 *)(uVar34 + uVar25 * 2) = uVar23;
              iVar38 = ((int)*(short *)(lVar35 + 2 + uVar25 * 4) +
                        (int)*(short *)(lVar37 + 2 + uVar25 * 4) +
                       (int)*(short *)(lVar36 + 2 + uVar25 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar38 < 1) {
                iVar38 = 0;
              }
              uVar23 = (undefined1)iVar38;
              if (0xfe < iVar38) {
                uVar23 = 0xff;
              }
              *(undefined1 *)(uVar34 + 1 + uVar25 * 2) = uVar23;
              uVar24 = uVar25 + 1;
            } while (uVar24 < uVar29);
            iVar38 = (int)uVar25 + 2 + (int)uVar24;
          }
          if (iVar38 - 1U < (uint)(iVar31 - iVar28)) {
            lVar19 = (longlong)iVar38;
            iVar28 = ((int)*(short *)(lVar35 + -2 + lVar19 * 2) +
                      (int)*(short *)(lVar37 + -2 + lVar19 * 2) +
                     (int)*(short *)(lVar36 + -2 + lVar19 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar28 < 1) {
              iVar28 = 0;
            }
            iVar38 = 0xff;
            if (iVar28 < 0xff) {
              iVar38 = iVar28;
            }
            *(char *)(lVar27 + param_2 + lVar19 + -1 + lVar16) = (char)iVar38;
          }
        }
        else {
          uVar29 = (iVar31 - (iVar28 + 1)) + 1;
          if ((int)uVar29 < 0x20) {
LAB_140aa90dc:
            uVar17 = 0;
          }
          else {
            if ((int)uVar29 < 0x12c0) {
              uVar24 = 0;
              uVar17 = uVar29 & 0xffffffe0;
            }
            else {
              uVar24 = uVar34 & 0x1f;
              if ((int)uVar24 != 0) {
                uVar24 = (ulonglong)(0x20 - (int)uVar24);
              }
              iVar28 = (int)uVar24;
              if ((int)uVar29 < iVar28 + 0x20) goto LAB_140aa90dc;
              uVar25 = 0;
              uVar17 = uVar29 - (uVar29 - iVar28 & 0x1f);
              if (iVar28 != 0) {
                do {
                  iVar28 = ((int)*(short *)(lVar35 + uVar25 * 2) +
                            (int)*(short *)(lVar37 + uVar25 * 2) +
                           (int)*(short *)(lVar36 + uVar25 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
                  if (iVar28 < 1) {
                    iVar28 = 0;
                  }
                  uVar23 = (undefined1)iVar28;
                  if (0xfe < iVar28) {
                    uVar23 = 0xff;
                  }
                  *(undefined1 *)(uVar25 + uVar34) = uVar23;
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar24);
              }
            }
            do {
              auVar40 = *(undefined1 (*) [32])(lVar35 + uVar24 * 2);
              auVar41 = *(undefined1 (*) [32])(lVar37 + uVar24 * 2);
              auVar39 = *(undefined1 (*) [32])(lVar36 + uVar24 * 2);
              auVar1 = *(undefined1 (*) [32])(lVar35 + 0x20 + uVar24 * 2);
              auVar2 = *(undefined1 (*) [32])(lVar37 + 0x20 + uVar24 * 2);
              auVar3 = *(undefined1 (*) [32])(lVar36 + 0x20 + uVar24 * 2);
              auVar6 = vpmovsxwd_avx2(auVar40._0_16_);
              auVar7 = vpmovsxwd_avx2(auVar41._0_16_);
              auVar6 = vpaddd_avx2(auVar6,auVar7);
              auVar40 = vpmovsxwd_avx2(auVar40._16_16_);
              auVar41 = vpmovsxwd_avx2(auVar41._16_16_);
              auVar40 = vpaddd_avx2(auVar40,auVar41);
              auVar41 = vpmovsxwd_avx2(auVar39._0_16_);
              auVar41 = vpaddd_avx2(auVar6,auVar41);
              auVar41 = vpmulld_avx2(auVar8,auVar41);
              auVar41 = vpaddd_avx2(auVar41,auVar9);
              auVar41 = vpsrad_avx2(auVar41,0x10);
              auVar41 = vpmaxsd_avx2(auVar41,(undefined1  [32])0x0);
              auVar41 = vpminsd_avx2(auVar41,auVar10);
              auVar39 = vpmovsxwd_avx2(auVar39._16_16_);
              auVar40 = vpaddd_avx2(auVar40,auVar39);
              auVar6 = vpshufb_avx2(auVar41,auVar11);
              auVar40 = vpmulld_avx2(auVar8,auVar40);
              auVar40 = vpaddd_avx2(auVar40,auVar9);
              auVar40 = vpsrad_avx2(auVar40,0x10);
              auVar40 = vpmaxsd_avx2(auVar40,(undefined1  [32])0x0);
              auVar40 = vpminsd_avx2(auVar40,auVar10);
              auVar7 = vpshufb_avx2(auVar40,auVar12);
              auVar40 = vpmovsxwd_avx2(auVar1._0_16_);
              auVar41 = vpmovsxwd_avx2(auVar1._16_16_);
              auVar39 = vpmovsxwd_avx2(auVar2._0_16_);
              auVar40 = vpaddd_avx2(auVar40,auVar39);
              auVar39 = vpmovsxwd_avx2(auVar2._16_16_);
              auVar41 = vpaddd_avx2(auVar41,auVar39);
              auVar39 = vpmovsxwd_avx2(auVar3._0_16_);
              auVar40 = vpaddd_avx2(auVar40,auVar39);
              auVar40 = vpmulld_avx2(auVar8,auVar40);
              auVar40 = vpaddd_avx2(auVar40,auVar9);
              auVar39 = vpsrad_avx2(auVar40,0x10);
              auVar40 = vpmovsxwd_avx2(auVar3._16_16_);
              auVar40 = vpaddd_avx2(auVar41,auVar40);
              auVar40 = vpmulld_avx2(auVar8,auVar40);
              auVar40 = vpaddd_avx2(auVar40,auVar9);
              auVar41 = vpmaxsd_avx2(auVar39,(undefined1  [32])0x0);
              auVar39 = vpsrad_avx2(auVar40,0x10);
              auVar40 = vpminsd_avx2(auVar41,auVar10);
              auVar41 = vpshufb_avx2(auVar40,auVar11);
              auVar40 = vpmaxsd_avx2(auVar39,(undefined1  [32])0x0);
              auVar40 = vpminsd_avx2(auVar40,auVar10);
              auVar39 = vperm2i128_avx2(auVar6,auVar6,0x81);
              auVar2 = vperm2i128_avx2(auVar7,auVar7,0x81);
              auVar1 = vpshufb_avx2(auVar40,auVar12);
              auVar3 = vperm2i128_avx2(auVar41,auVar41,0x28);
              auVar40 = vpand_avx2(auVar41,auVar13);
              auVar41 = vpor_avx2(auVar39,ZEXT1632(auVar6._0_16_));
              auVar39 = vpor_avx2(auVar2,ZEXT1632(auVar7._0_16_));
              auVar41 = vpor_avx2(auVar41,auVar39);
              auVar39 = vpor_avx2(auVar40,auVar3);
              auVar2 = vperm2i128_avx2(auVar1,auVar1,0x28);
              auVar40 = vpand_avx2(auVar13,auVar1);
              auVar41 = vpor_avx2(auVar41,auVar39);
              auVar40 = vpor_avx2(auVar40,auVar2);
              auVar40 = vpor_avx2(auVar41,auVar40);
              *(undefined1 (*) [32])(uVar24 + uVar34) = auVar40;
              uVar24 = uVar24 + 0x20;
            } while (uVar24 < (ulonglong)(longlong)(int)uVar17);
          }
          if (uVar17 + 1 <= uVar29) {
            uVar29 = uVar29 - uVar17;
            if ((int)uVar29 < 8) {
              uVar21 = 0;
            }
            else {
              uVar26 = 0;
              uVar21 = uVar29 & 0xfffffff8;
              lVar19 = 0;
              do {
                iVar28 = uVar26 * 2;
                uVar26 = uVar26 + 8;
                lVar22 = (longlong)(int)(uVar17 * 2 + iVar28);
                auVar40 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar22 + lVar35));
                auVar41 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar22 + lVar37));
                auVar40 = vpaddd_avx2(auVar40,auVar41);
                auVar41 = vpmovsxwd_avx2(*(undefined1 (*) [16])(lVar22 + lVar36));
                auVar40 = vpaddd_avx2(auVar40,auVar41);
                auVar40 = vpmulld_avx2(auVar8,auVar40);
                auVar40 = vpaddd_avx2(auVar40,auVar9);
                auVar40 = vpsrad_avx2(auVar40,0x10);
                auVar40 = vpmaxsd_avx2(auVar40,(undefined1  [32])0x0);
                auVar40 = vpminsd_avx2(auVar40,auVar10);
                auVar40 = vpshufb_avx2(auVar40,auVar11);
                auVar41 = vperm2i128_avx2(auVar40,auVar40,0x81);
                auVar40 = vpor_avx2(auVar41,ZEXT1632(auVar40._0_16_));
                *(longlong *)(lVar19 + (longlong)(int)uVar17 + uVar34) = auVar40._0_8_;
                lVar19 = lVar19 + 8;
              } while (uVar26 < uVar21);
            }
            lVar19 = (longlong)(int)uVar21;
            if (uVar21 < uVar29) {
              do {
                iVar28 = uVar21 * 2;
                uVar21 = uVar21 + 1;
                lVar22 = (longlong)(int)(uVar17 * 2 + iVar28);
                iVar28 = ((int)*(short *)(lVar22 + lVar35) + (int)*(short *)(lVar22 + lVar37) +
                         (int)*(short *)(lVar22 + lVar36)) * 0x1c70 + 0x8e30 >> 0x10;
                if (iVar28 < 1) {
                  iVar28 = 0;
                }
                uVar23 = (undefined1)iVar28;
                if (0xfe < iVar28) {
                  uVar23 = 0xff;
                }
                *(undefined1 *)(lVar19 + uVar34 + (longlong)(int)uVar17) = uVar23;
                lVar19 = lVar19 + 1;
              } while (uVar21 < uVar29);
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
      lVar16 = lVar16 + param_3;
    } while (uVar20 < uVar30);
  }
  return;
}

