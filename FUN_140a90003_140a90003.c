
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a90003(int param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
  int in_EAX;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong unaff_RBP;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong in_R10;
  undefined1 uVar34;
  longlong in_R11;
  int iVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  int unaff_R14D;
  uint uVar39;
  int iVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  
  auVar23 = _DAT_14308f270;
  auVar22 = _DAT_14308f260;
  auVar21 = _DAT_14308f250;
  auVar20 = _DAT_14308f240;
  auVar19 = _DAT_14308f230;
  auVar18 = _DAT_14308f220;
  auVar17 = _DAT_14308f210;
  auVar16 = _DAT_14308f200;
  auVar15 = _DAT_14308f1f0;
  lVar26 = (longlong)in_EAX;
  iVar40 = param_1 + -0x10;
  uVar41 = (longlong)(((ulonglong)(lVar26 >> 3) >> 0x3c) + lVar26) >> 4;
  do {
    iVar24 = 0;
    uVar30 = in_R11 + param_3;
    lVar28 = *(longlong *)(in_R10 + param_4 * 8);
    lVar27 = *(longlong *)(in_R10 + 8 + param_4 * 8);
    lVar29 = *(longlong *)(in_R10 + 0x10 + param_4 * 8);
    if ((uVar30 & 0xf) == 0) {
      if (unaff_R14D == 0) {
        uVar36 = 0;
        lVar33 = 0;
        lVar32 = 0;
        if (-1 < iVar40) {
          do {
            uVar36 = uVar36 + 1;
            auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + lVar28),
                                 *(undefined1 (*) [16])(lVar32 + lVar27));
            auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + lVar29));
            auVar42 = vpaddw_avx(auVar42,auVar15);
            auVar14 = vpmulhw_avx(auVar42,auVar16);
            auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + 0x10 + lVar28),
                                 *(undefined1 (*) [16])(lVar32 + 0x10 + lVar27));
            auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar29));
            lVar32 = lVar32 + 0x20;
            auVar42 = vpaddw_avx(auVar42,auVar15);
            auVar42 = vpmulhw_avx(auVar42,auVar16);
            auVar42 = vpackuswb_avx(auVar14,auVar42);
            auVar42 = vmovntdq_avx(auVar42);
            *(undefined1 (*) [16])(lVar33 + uVar30) = auVar42;
            lVar33 = lVar33 + 0x10;
          } while (uVar36 < uVar41);
          goto LAB_140a902af;
        }
      }
      else {
        uVar36 = 0;
        lVar33 = 0;
        lVar32 = 0;
        iVar24 = 0;
        if (-1 < iVar40) {
          do {
            uVar36 = uVar36 + 1;
            auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + lVar28),
                                 *(undefined1 (*) [16])(lVar32 + lVar27));
            auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + lVar29));
            auVar42 = vpaddw_avx(auVar42,auVar15);
            auVar14 = vpmulhw_avx(auVar42,auVar16);
            auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + 0x10 + lVar28),
                                 *(undefined1 (*) [16])(lVar32 + 0x10 + lVar27));
            auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar29));
            lVar32 = lVar32 + 0x20;
            auVar42 = vpaddw_avx(auVar42,auVar15);
            auVar42 = vpmulhw_avx(auVar42,auVar16);
            auVar42 = vpackuswb_avx(auVar14,auVar42);
            *(undefined1 (*) [16])(lVar33 + uVar30) = auVar42;
            lVar33 = lVar33 + 0x10;
          } while (uVar36 < uVar41);
LAB_140a902af:
          lVar32 = uVar36 * 0x20;
          iVar24 = (int)uVar36 << 4;
          lVar28 = lVar28 + lVar32;
          lVar27 = lVar27 + lVar32;
          lVar29 = lVar29 + lVar32;
        }
      }
    }
    else {
      uVar36 = 0;
      lVar33 = 0;
      lVar32 = 0;
      if (-1 < iVar40) {
        do {
          uVar36 = uVar36 + 1;
          auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + lVar28),
                               *(undefined1 (*) [16])(lVar32 + lVar27));
          auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + lVar29));
          auVar42 = vpaddw_avx(auVar42,auVar15);
          auVar14 = vpmulhw_avx(auVar42,auVar16);
          auVar42 = vpaddw_avx(*(undefined1 (*) [16])(lVar32 + 0x10 + lVar28),
                               *(undefined1 (*) [16])(lVar32 + 0x10 + lVar27));
          auVar42 = vpaddw_avx(auVar42,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar29));
          lVar32 = lVar32 + 0x20;
          auVar42 = vpaddw_avx(auVar42,auVar15);
          auVar42 = vpmulhw_avx(auVar42,auVar16);
          auVar42 = vpackuswb_avx(auVar14,auVar42);
          *(undefined1 (*) [16])(lVar33 + uVar30) = auVar42;
          lVar33 = lVar33 + 0x10;
        } while (uVar36 < uVar41);
        goto LAB_140a902af;
      }
    }
    if (iVar24 < param_1) {
      lVar37 = (longlong)iVar24;
      uVar30 = uVar30 + lVar37;
      lVar33 = lVar26 - lVar37;
      lVar32 = lVar33 * 2;
      if (((((longlong)(uVar30 - lVar28) < lVar32) && ((longlong)-(uVar30 - lVar28) < lVar33)) ||
          (((longlong)(uVar30 - lVar27) < lVar32 && ((longlong)-(uVar30 - lVar27) < lVar33)))) ||
         (((longlong)(uVar30 - lVar29) < lVar32 && ((longlong)-(uVar30 - lVar29) < lVar33)))) {
        iVar35 = 1;
        uVar25 = (uint)(param_1 - iVar24) >> 1;
        uVar36 = 0;
        if (uVar25 != 0) {
          do {
            uVar38 = uVar36;
            iVar35 = ((int)*(short *)(lVar28 + uVar38 * 4) + (int)*(short *)(lVar27 + uVar38 * 4) +
                     (int)*(short *)(lVar29 + uVar38 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar35 < 1) {
              iVar35 = 0;
            }
            uVar34 = (undefined1)iVar35;
            if (0xfe < iVar35) {
              uVar34 = 0xff;
            }
            *(undefined1 *)(uVar30 + uVar38 * 2) = uVar34;
            iVar35 = ((int)*(short *)(lVar28 + 2 + uVar38 * 4) +
                      (int)*(short *)(lVar27 + 2 + uVar38 * 4) +
                     (int)*(short *)(lVar29 + 2 + uVar38 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar35 < 1) {
              iVar35 = 0;
            }
            uVar34 = (undefined1)iVar35;
            if (0xfe < iVar35) {
              uVar34 = 0xff;
            }
            *(undefined1 *)(uVar30 + 1 + uVar38 * 2) = uVar34;
            uVar36 = uVar38 + 1;
          } while (uVar36 < uVar25);
          iVar35 = (int)uVar38 + 2 + (int)uVar36;
        }
        if (iVar35 - 1U < (uint)(param_1 - iVar24)) {
          lVar32 = (longlong)iVar35;
          iVar24 = ((int)*(short *)(lVar28 + -2 + lVar32 * 2) +
                    (int)*(short *)(lVar27 + -2 + lVar32 * 2) +
                   (int)*(short *)(lVar29 + -2 + lVar32 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
          if (iVar24 < 1) {
            iVar24 = 0;
          }
          iVar35 = 0xff;
          if (iVar24 < 0xff) {
            iVar35 = iVar24;
          }
          *(char *)(lVar37 + in_R11 + lVar32 + -1 + param_3) = (char)iVar35;
        }
      }
      else {
        uVar25 = (param_1 - (iVar24 + 1)) + 1;
        if ((int)uVar25 < 0x10) {
LAB_140a90801:
          iVar35 = 0;
          if (uVar25 == 0) goto LAB_140a90783;
LAB_140a9080d:
          uVar31 = 0;
        }
        else {
          uVar36 = uVar30 & 0xf;
          if ((int)uVar36 != 0) {
            uVar36 = (ulonglong)(0x10 - (int)uVar36);
          }
          iVar24 = (int)uVar36;
          if ((int)uVar25 < iVar24 + 0x10) goto LAB_140a90801;
          uVar38 = 0;
          iVar35 = uVar25 - (uVar25 - iVar24 & 0xf);
          if (iVar24 != 0) {
            do {
              iVar24 = ((int)*(short *)(lVar28 + uVar38 * 2) + (int)*(short *)(lVar27 + uVar38 * 2)
                       + (int)*(short *)(lVar29 + uVar38 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar24 < 1) {
                iVar24 = 0;
              }
              uVar34 = (undefined1)iVar24;
              if (0xfe < iVar24) {
                uVar34 = 0xff;
              }
              *(undefined1 *)(uVar38 + uVar30) = uVar34;
              uVar38 = uVar38 + 1;
            } while (uVar38 < uVar36);
          }
          do {
            auVar42._8_8_ = 0;
            auVar42._0_8_ = *(ulonglong *)(lVar28 + uVar36 * 2);
            auVar42 = vpmovsxwd_avx(auVar42);
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulonglong *)(lVar27 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar14);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)(lVar29 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar1);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar42 = vpmulld_avx(auVar17,auVar42);
            auVar42 = vpaddd_avx(auVar42,auVar18);
            auVar42 = vpsrad_avx(auVar42,0x10);
            auVar42 = vpmaxsd_avx(auVar42,(undefined1  [16])0x0);
            auVar42 = vpminsd_avx(auVar42,auVar19);
            auVar1 = vpshufb_avx(auVar42,auVar20);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(lVar28 + 8 + uVar36 * 2);
            auVar42 = vpmovsxwd_avx(auVar2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)(lVar27 + 8 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar3);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(ulonglong *)(lVar29 + 8 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar4);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar42 = vpmulld_avx(auVar17,auVar42);
            auVar42 = vpaddd_avx(auVar42,auVar18);
            auVar42 = vpsrad_avx(auVar42,0x10);
            auVar42 = vpmaxsd_avx(auVar42,(undefined1  [16])0x0);
            auVar42 = vpminsd_avx(auVar42,auVar19);
            auVar14 = vpshufb_avx(auVar42,auVar21);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulonglong *)(lVar27 + 0x10 + uVar36 * 2);
            auVar42 = vpmovsxwd_avx(auVar5);
            auVar1 = vpor_avx(auVar1,auVar14);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = *(ulonglong *)(lVar28 + 0x10 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar6);
            auVar42 = vpaddd_avx(auVar14,auVar42);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = *(ulonglong *)(lVar29 + 0x10 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar7);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar42 = vpmulld_avx(auVar17,auVar42);
            auVar42 = vpaddd_avx(auVar42,auVar18);
            auVar42 = vpsrad_avx(auVar42,0x10);
            auVar42 = vpmaxsd_avx(auVar42,(undefined1  [16])0x0);
            auVar42 = vpminsd_avx(auVar42,auVar19);
            auVar42 = vpshufb_avx(auVar42,auVar22);
            auVar1 = vpor_avx(auVar1,auVar42);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *(ulonglong *)(lVar28 + 0x18 + uVar36 * 2);
            auVar42 = vpmovsxwd_avx(auVar8);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *(ulonglong *)(lVar27 + 0x18 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar9);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *(ulonglong *)(lVar29 + 0x18 + uVar36 * 2);
            auVar14 = vpmovsxwd_avx(auVar10);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar42 = vpmulld_avx(auVar17,auVar42);
            auVar42 = vpaddd_avx(auVar42,auVar18);
            auVar42 = vpsrad_avx(auVar42,0x10);
            auVar42 = vpmaxsd_avx(auVar42,(undefined1  [16])0x0);
            auVar42 = vpminsd_avx(auVar42,auVar19);
            auVar42 = vpshufb_avx(auVar42,auVar23);
            auVar42 = vpor_avx(auVar1,auVar42);
            *(undefined1 (*) [16])(uVar36 + uVar30) = auVar42;
            uVar36 = uVar36 + 0x10;
          } while (uVar36 < (ulonglong)(longlong)iVar35);
          if (uVar25 < iVar35 + 1U) goto LAB_140a90783;
          uVar25 = uVar25 - iVar35;
          if ((int)uVar25 < 4) goto LAB_140a9080d;
          uVar39 = 0;
          uVar31 = uVar25 & 0xfffffffc;
          lVar32 = 0;
          do {
            iVar24 = uVar39 * 2;
            uVar39 = uVar39 + 4;
            lVar33 = (longlong)(iVar35 * 2 + iVar24);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = *(ulonglong *)(lVar33 + lVar28);
            auVar42 = vpmovsxwd_avx(auVar11);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = *(ulonglong *)(lVar33 + lVar27);
            auVar14 = vpmovsxwd_avx(auVar12);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar13._8_8_ = 0;
            auVar13._0_8_ = *(ulonglong *)(lVar33 + lVar29);
            auVar14 = vpmovsxwd_avx(auVar13);
            auVar42 = vpaddd_avx(auVar42,auVar14);
            auVar42 = vpmulld_avx(auVar17,auVar42);
            auVar42 = vpaddd_avx(auVar42,auVar18);
            auVar42 = vpsrad_avx(auVar42,0x10);
            auVar42 = vpmaxsd_avx(auVar42,(undefined1  [16])0x0);
            auVar42 = vpminsd_avx(auVar42,auVar19);
            auVar42 = vpshufb_avx(auVar42,auVar20);
            *(int *)(lVar32 + (longlong)iVar35 + uVar30) = auVar42._0_4_;
            lVar32 = lVar32 + 4;
          } while (uVar39 < uVar31);
        }
        lVar32 = (longlong)(int)uVar31;
        if (uVar31 < uVar25) {
          do {
            iVar24 = uVar31 * 2;
            uVar31 = uVar31 + 1;
            lVar33 = (longlong)(iVar35 * 2 + iVar24);
            iVar24 = ((int)*(short *)(lVar33 + lVar28) + (int)*(short *)(lVar33 + lVar27) +
                     (int)*(short *)(lVar33 + lVar29)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar24 < 1) {
              iVar24 = 0;
            }
            if (0xfe < iVar24) {
              iVar24 = 0xff;
            }
            *(char *)(lVar32 + uVar30 + (longlong)iVar35) = (char)iVar24;
            lVar32 = lVar32 + 1;
          } while (uVar31 < uVar25);
        }
      }
    }
LAB_140a90783:
    param_4 = param_4 + 1;
    param_3 = param_3 + unaff_RBP;
    if (param_2 <= param_4) {
      return;
    }
  } while( true );
}

