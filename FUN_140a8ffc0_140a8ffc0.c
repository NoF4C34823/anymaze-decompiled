
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a8ffc0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined1 uVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  uint uVar43;
  int iVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  
  auVar23 = _DAT_14308f270;
  auVar22 = _DAT_14308f260;
  auVar21 = _DAT_14308f250;
  auVar20 = _DAT_14308f240;
  auVar19 = _DAT_14308f230;
  auVar18 = _DAT_14308f220;
  auVar17 = _DAT_14308f210;
  auVar16 = _DAT_14308f200;
  auVar15 = _DAT_14308f1f0;
  uVar37 = 0;
  uVar29 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar24 = (int)param_4;
  lVar36 = 0;
  if (0 < (longlong)uVar29) {
    lVar27 = (longlong)iVar24;
    iVar44 = iVar24 + -0x10;
    uVar45 = (longlong)(((ulonglong)(lVar27 >> 3) >> 0x3c) + lVar27) >> 4;
    do {
      iVar25 = 0;
      uVar32 = param_2 + lVar36;
      lVar30 = *(longlong *)(param_1 + uVar37 * 8);
      lVar28 = *(longlong *)(param_1 + 8 + uVar37 * 8);
      lVar31 = *(longlong *)(param_1 + 0x10 + uVar37 * 8);
      if ((uVar32 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar40 = 0;
          lVar35 = 0;
          lVar34 = 0;
          if (-1 < iVar44) {
            do {
              uVar40 = uVar40 + 1;
              auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + lVar30),
                                   *(undefined1 (*) [16])(lVar34 + lVar28));
              auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + lVar31));
              auVar46 = vpaddw_avx(auVar46,auVar15);
              auVar14 = vpmulhw_avx(auVar46,auVar16);
              auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + 0x10 + lVar30),
                                   *(undefined1 (*) [16])(lVar34 + 0x10 + lVar28));
              auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + 0x10 + lVar31));
              lVar34 = lVar34 + 0x20;
              auVar46 = vpaddw_avx(auVar46,auVar15);
              auVar46 = vpmulhw_avx(auVar46,auVar16);
              auVar46 = vpackuswb_avx(auVar14,auVar46);
              auVar46 = vmovntdq_avx(auVar46);
              *(undefined1 (*) [16])(lVar35 + uVar32) = auVar46;
              lVar35 = lVar35 + 0x10;
            } while (uVar40 < uVar45);
            goto LAB_140a902af;
          }
        }
        else {
          uVar40 = 0;
          lVar35 = 0;
          lVar34 = 0;
          iVar25 = 0;
          if (-1 < iVar44) {
            do {
              uVar40 = uVar40 + 1;
              auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + lVar30),
                                   *(undefined1 (*) [16])(lVar34 + lVar28));
              auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + lVar31));
              auVar46 = vpaddw_avx(auVar46,auVar15);
              auVar14 = vpmulhw_avx(auVar46,auVar16);
              auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + 0x10 + lVar30),
                                   *(undefined1 (*) [16])(lVar34 + 0x10 + lVar28));
              auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + 0x10 + lVar31));
              lVar34 = lVar34 + 0x20;
              auVar46 = vpaddw_avx(auVar46,auVar15);
              auVar46 = vpmulhw_avx(auVar46,auVar16);
              auVar46 = vpackuswb_avx(auVar14,auVar46);
              *(undefined1 (*) [16])(lVar35 + uVar32) = auVar46;
              lVar35 = lVar35 + 0x10;
            } while (uVar40 < uVar45);
LAB_140a902af:
            lVar34 = uVar40 * 0x20;
            iVar25 = (int)uVar40 << 4;
            lVar30 = lVar30 + lVar34;
            lVar28 = lVar28 + lVar34;
            lVar31 = lVar31 + lVar34;
          }
        }
      }
      else {
        uVar40 = 0;
        lVar35 = 0;
        lVar34 = 0;
        if (-1 < iVar44) {
          do {
            uVar40 = uVar40 + 1;
            auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + lVar30),
                                 *(undefined1 (*) [16])(lVar34 + lVar28));
            auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + lVar31));
            auVar46 = vpaddw_avx(auVar46,auVar15);
            auVar14 = vpmulhw_avx(auVar46,auVar16);
            auVar46 = vpaddw_avx(*(undefined1 (*) [16])(lVar34 + 0x10 + lVar30),
                                 *(undefined1 (*) [16])(lVar34 + 0x10 + lVar28));
            auVar46 = vpaddw_avx(auVar46,*(undefined1 (*) [16])(lVar34 + 0x10 + lVar31));
            lVar34 = lVar34 + 0x20;
            auVar46 = vpaddw_avx(auVar46,auVar15);
            auVar46 = vpmulhw_avx(auVar46,auVar16);
            auVar46 = vpackuswb_avx(auVar14,auVar46);
            *(undefined1 (*) [16])(lVar35 + uVar32) = auVar46;
            lVar35 = lVar35 + 0x10;
          } while (uVar40 < uVar45);
          goto LAB_140a902af;
        }
      }
      if (iVar25 < iVar24) {
        lVar41 = (longlong)iVar25;
        uVar32 = uVar32 + lVar41;
        lVar35 = lVar27 - lVar41;
        lVar34 = lVar35 * 2;
        if (((((longlong)(uVar32 - lVar30) < lVar34) && ((longlong)-(uVar32 - lVar30) < lVar35)) ||
            (((longlong)(uVar32 - lVar28) < lVar34 && ((longlong)-(uVar32 - lVar28) < lVar35)))) ||
           (((longlong)(uVar32 - lVar31) < lVar34 && ((longlong)-(uVar32 - lVar31) < lVar35)))) {
          iVar39 = 1;
          uVar26 = (uint)(iVar24 - iVar25) >> 1;
          uVar40 = 0;
          if (uVar26 != 0) {
            do {
              uVar42 = uVar40;
              iVar39 = ((int)*(short *)(lVar30 + uVar42 * 4) + (int)*(short *)(lVar28 + uVar42 * 4)
                       + (int)*(short *)(lVar31 + uVar42 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar39 < 1) {
                iVar39 = 0;
              }
              uVar38 = (undefined1)iVar39;
              if (0xfe < iVar39) {
                uVar38 = 0xff;
              }
              *(undefined1 *)(uVar32 + uVar42 * 2) = uVar38;
              iVar39 = ((int)*(short *)(lVar30 + 2 + uVar42 * 4) +
                        (int)*(short *)(lVar28 + 2 + uVar42 * 4) +
                       (int)*(short *)(lVar31 + 2 + uVar42 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar39 < 1) {
                iVar39 = 0;
              }
              uVar38 = (undefined1)iVar39;
              if (0xfe < iVar39) {
                uVar38 = 0xff;
              }
              *(undefined1 *)(uVar32 + 1 + uVar42 * 2) = uVar38;
              uVar40 = uVar42 + 1;
            } while (uVar40 < uVar26);
            iVar39 = (int)uVar42 + 2 + (int)uVar40;
          }
          if (iVar39 - 1U < (uint)(iVar24 - iVar25)) {
            lVar34 = (longlong)iVar39;
            iVar25 = ((int)*(short *)(lVar30 + -2 + lVar34 * 2) +
                      (int)*(short *)(lVar28 + -2 + lVar34 * 2) +
                     (int)*(short *)(lVar31 + -2 + lVar34 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar25 < 1) {
              iVar25 = 0;
            }
            iVar39 = 0xff;
            if (iVar25 < 0xff) {
              iVar39 = iVar25;
            }
            *(char *)(lVar41 + param_2 + lVar34 + -1 + lVar36) = (char)iVar39;
          }
        }
        else {
          uVar26 = (iVar24 - (iVar25 + 1)) + 1;
          if ((int)uVar26 < 0x10) {
LAB_140a90801:
            iVar39 = 0;
            if (uVar26 == 0) goto LAB_140a90783;
LAB_140a9080d:
            uVar33 = 0;
          }
          else {
            uVar40 = uVar32 & 0xf;
            if ((int)uVar40 != 0) {
              uVar40 = (ulonglong)(0x10 - (int)uVar40);
            }
            iVar25 = (int)uVar40;
            if ((int)uVar26 < iVar25 + 0x10) goto LAB_140a90801;
            uVar42 = 0;
            iVar39 = uVar26 - (uVar26 - iVar25 & 0xf);
            if (iVar25 != 0) {
              do {
                iVar25 = ((int)*(short *)(lVar30 + uVar42 * 2) +
                          (int)*(short *)(lVar28 + uVar42 * 2) +
                         (int)*(short *)(lVar31 + uVar42 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
                if (iVar25 < 1) {
                  iVar25 = 0;
                }
                uVar38 = (undefined1)iVar25;
                if (0xfe < iVar25) {
                  uVar38 = 0xff;
                }
                *(undefined1 *)(uVar42 + uVar32) = uVar38;
                uVar42 = uVar42 + 1;
              } while (uVar42 < uVar40);
            }
            do {
              auVar46._8_8_ = 0;
              auVar46._0_8_ = *(ulonglong *)(lVar30 + uVar40 * 2);
              auVar46 = vpmovsxwd_avx(auVar46);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = *(ulonglong *)(lVar28 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar14);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar1._8_8_ = 0;
              auVar1._0_8_ = *(ulonglong *)(lVar31 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar1);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar46 = vpmulld_avx(auVar17,auVar46);
              auVar46 = vpaddd_avx(auVar46,auVar18);
              auVar46 = vpsrad_avx(auVar46,0x10);
              auVar46 = vpmaxsd_avx(auVar46,(undefined1  [16])0x0);
              auVar46 = vpminsd_avx(auVar46,auVar19);
              auVar1 = vpshufb_avx(auVar46,auVar20);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = *(ulonglong *)(lVar30 + 8 + uVar40 * 2);
              auVar46 = vpmovsxwd_avx(auVar2);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = *(ulonglong *)(lVar28 + 8 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar3);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = *(ulonglong *)(lVar31 + 8 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar4);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar46 = vpmulld_avx(auVar17,auVar46);
              auVar46 = vpaddd_avx(auVar46,auVar18);
              auVar46 = vpsrad_avx(auVar46,0x10);
              auVar46 = vpmaxsd_avx(auVar46,(undefined1  [16])0x0);
              auVar46 = vpminsd_avx(auVar46,auVar19);
              auVar14 = vpshufb_avx(auVar46,auVar21);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = *(ulonglong *)(lVar28 + 0x10 + uVar40 * 2);
              auVar46 = vpmovsxwd_avx(auVar5);
              auVar1 = vpor_avx(auVar1,auVar14);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = *(ulonglong *)(lVar30 + 0x10 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar6);
              auVar46 = vpaddd_avx(auVar14,auVar46);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = *(ulonglong *)(lVar31 + 0x10 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar7);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar46 = vpmulld_avx(auVar17,auVar46);
              auVar46 = vpaddd_avx(auVar46,auVar18);
              auVar46 = vpsrad_avx(auVar46,0x10);
              auVar46 = vpmaxsd_avx(auVar46,(undefined1  [16])0x0);
              auVar46 = vpminsd_avx(auVar46,auVar19);
              auVar46 = vpshufb_avx(auVar46,auVar22);
              auVar1 = vpor_avx(auVar1,auVar46);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = *(ulonglong *)(lVar30 + 0x18 + uVar40 * 2);
              auVar46 = vpmovsxwd_avx(auVar8);
              auVar9._8_8_ = 0;
              auVar9._0_8_ = *(ulonglong *)(lVar28 + 0x18 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar9);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar10._8_8_ = 0;
              auVar10._0_8_ = *(ulonglong *)(lVar31 + 0x18 + uVar40 * 2);
              auVar14 = vpmovsxwd_avx(auVar10);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar46 = vpmulld_avx(auVar17,auVar46);
              auVar46 = vpaddd_avx(auVar46,auVar18);
              auVar46 = vpsrad_avx(auVar46,0x10);
              auVar46 = vpmaxsd_avx(auVar46,(undefined1  [16])0x0);
              auVar46 = vpminsd_avx(auVar46,auVar19);
              auVar46 = vpshufb_avx(auVar46,auVar23);
              auVar46 = vpor_avx(auVar1,auVar46);
              *(undefined1 (*) [16])(uVar40 + uVar32) = auVar46;
              uVar40 = uVar40 + 0x10;
            } while (uVar40 < (ulonglong)(longlong)iVar39);
            if (uVar26 < iVar39 + 1U) goto LAB_140a90783;
            uVar26 = uVar26 - iVar39;
            if ((int)uVar26 < 4) goto LAB_140a9080d;
            uVar43 = 0;
            uVar33 = uVar26 & 0xfffffffc;
            lVar34 = 0;
            do {
              iVar25 = uVar43 * 2;
              uVar43 = uVar43 + 4;
              lVar35 = (longlong)(iVar39 * 2 + iVar25);
              auVar11._8_8_ = 0;
              auVar11._0_8_ = *(ulonglong *)(lVar35 + lVar30);
              auVar46 = vpmovsxwd_avx(auVar11);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = *(ulonglong *)(lVar35 + lVar28);
              auVar14 = vpmovsxwd_avx(auVar12);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar13._8_8_ = 0;
              auVar13._0_8_ = *(ulonglong *)(lVar35 + lVar31);
              auVar14 = vpmovsxwd_avx(auVar13);
              auVar46 = vpaddd_avx(auVar46,auVar14);
              auVar46 = vpmulld_avx(auVar17,auVar46);
              auVar46 = vpaddd_avx(auVar46,auVar18);
              auVar46 = vpsrad_avx(auVar46,0x10);
              auVar46 = vpmaxsd_avx(auVar46,(undefined1  [16])0x0);
              auVar46 = vpminsd_avx(auVar46,auVar19);
              auVar46 = vpshufb_avx(auVar46,auVar20);
              *(int *)(lVar34 + (longlong)iVar39 + uVar32) = auVar46._0_4_;
              lVar34 = lVar34 + 4;
            } while (uVar43 < uVar33);
          }
          lVar34 = (longlong)(int)uVar33;
          if (uVar33 < uVar26) {
            do {
              iVar25 = uVar33 * 2;
              uVar33 = uVar33 + 1;
              lVar35 = (longlong)(iVar39 * 2 + iVar25);
              iVar25 = ((int)*(short *)(lVar35 + lVar30) + (int)*(short *)(lVar35 + lVar28) +
                       (int)*(short *)(lVar35 + lVar31)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar25 < 1) {
                iVar25 = 0;
              }
              if (0xfe < iVar25) {
                iVar25 = 0xff;
              }
              *(char *)(lVar34 + uVar32 + (longlong)iVar39) = (char)iVar25;
              lVar34 = lVar34 + 1;
            } while (uVar33 < uVar26);
          }
        }
      }
LAB_140a90783:
      uVar37 = uVar37 + 1;
      lVar36 = lVar36 + param_3;
    } while (uVar37 < uVar29);
  }
  return;
}

