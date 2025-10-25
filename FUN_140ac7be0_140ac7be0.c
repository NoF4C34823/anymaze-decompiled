
void FUN_140ac7be0(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar1 = s_________________14308f840._0_16_;
  uVar9 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar2 = (int)param_4;
  uVar4 = 0;
  if (0 < (longlong)uVar9) {
    lVar15 = (longlong)iVar2;
    iVar3 = iVar2 + -0x10;
    uVar18 = (longlong)(((ulonglong)(lVar15 >> 3) >> 0x3c) + lVar15) >> 4;
    do {
      iVar11 = 0;
      lVar13 = *(longlong *)(param_1 + uVar4 * 8);
      lVar5 = *(longlong *)(param_1 + 8 + uVar4 * 8);
      lVar10 = *(longlong *)(param_1 + 0x10 + uVar4 * 8);
      lVar8 = *(longlong *)(param_1 + 0x18 + uVar4 * 8);
      lVar7 = *(longlong *)(param_1 + 0x20 + uVar4 * 8);
      if ((param_2 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar12 = 0;
          lVar19 = 0;
          lVar16 = 0;
          if (-1 < iVar3) {
            do {
              uVar12 = uVar12 + 1;
              auVar20 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar16 + 0x10 + lVar13));
              auVar21 = vpaddw_avx(*(undefined1 (*) [16])(lVar16 + lVar13),
                                   *(undefined1 (*) [16])(lVar16 + lVar5));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar5));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar10));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar10));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar8));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar8));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar7));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar7));
              lVar16 = lVar16 + 0x20;
              auVar21 = vpmulhw_avx512vl(auVar21,auVar1);
              auVar20 = vpmulhw_avx512vl(auVar20,auVar1);
              auVar21 = vpackuswb_avx512vl(auVar21,auVar20);
              auVar21 = vmovntdq_avx512vl(auVar21);
              *(undefined1 (*) [16])(lVar19 + param_2) = auVar21;
              lVar19 = lVar19 + 0x10;
            } while (uVar12 < uVar18);
            goto LAB_140ac7e8f;
          }
        }
        else {
          uVar12 = 0;
          lVar19 = 0;
          lVar16 = 0;
          iVar11 = 0;
          if (-1 < iVar3) {
            do {
              uVar12 = uVar12 + 1;
              auVar20 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar16 + 0x10 + lVar13));
              auVar21 = vpaddw_avx(*(undefined1 (*) [16])(lVar16 + lVar13),
                                   *(undefined1 (*) [16])(lVar16 + lVar5));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar5));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar10));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar10));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar8));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar8));
              auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar7));
              auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar7));
              lVar16 = lVar16 + 0x20;
              auVar21 = vpmulhw_avx512vl(auVar21,auVar1);
              auVar20 = vpmulhw_avx512vl(auVar20,auVar1);
              auVar21 = vpackuswb_avx512vl(auVar21,auVar20);
              auVar21 = vmovdqu32_avx512vl(auVar21);
              *(undefined1 (*) [16])(lVar19 + param_2) = auVar21;
              lVar19 = lVar19 + 0x10;
            } while (uVar12 < uVar18);
LAB_140ac7e8f:
            lVar16 = uVar12 * 0x20;
            iVar11 = (int)uVar12 << 4;
            lVar13 = lVar13 + lVar16;
            lVar5 = lVar5 + lVar16;
            lVar10 = lVar10 + lVar16;
            lVar8 = lVar8 + lVar16;
            lVar7 = lVar7 + lVar16;
          }
        }
      }
      else {
        uVar12 = 0;
        lVar19 = 0;
        lVar16 = 0;
        if (-1 < iVar3) {
          do {
            uVar12 = uVar12 + 1;
            auVar20 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar16 + 0x10 + lVar13));
            auVar21 = vpaddw_avx(*(undefined1 (*) [16])(lVar16 + lVar13),
                                 *(undefined1 (*) [16])(lVar16 + lVar5));
            auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar5));
            auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar10));
            auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar10));
            auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar8));
            auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar8));
            auVar21 = vpaddw_avx(auVar21,*(undefined1 (*) [16])(lVar16 + lVar7));
            auVar20 = vpaddw_avx512vl(auVar20,*(undefined1 (*) [16])(lVar16 + 0x10 + lVar7));
            lVar16 = lVar16 + 0x20;
            auVar21 = vpmulhw_avx512vl(auVar21,auVar1);
            auVar20 = vpmulhw_avx512vl(auVar20,auVar1);
            auVar21 = vpackuswb_avx512vl(auVar21,auVar20);
            auVar21 = vmovdqu32_avx512vl(auVar21);
            *(undefined1 (*) [16])(lVar19 + param_2) = auVar21;
            lVar19 = lVar19 + 0x10;
          } while (uVar12 < uVar18);
          goto LAB_140ac7e8f;
        }
      }
      if (iVar11 < iVar2) {
        iVar14 = 1;
        uVar12 = 0;
        lVar16 = (longlong)iVar11;
        uVar17 = (uint)(iVar2 - iVar11) >> 2;
        if (uVar17 != 0) {
          lVar19 = param_2 + lVar16;
          do {
            iVar11 = ((int)*(short *)(lVar13 + uVar12 * 8) + (int)*(short *)(lVar5 + uVar12 * 8) +
                      (int)*(short *)(lVar10 + uVar12 * 8) +
                     (int)*(short *)(lVar8 + uVar12 * 8) + (int)*(short *)(lVar7 + uVar12 * 8)) *
                     0xa3d >> 0x10;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            uVar6 = (undefined1)iVar11;
            if (0xfe < iVar11) {
              uVar6 = 0xff;
            }
            *(undefined1 *)(lVar19 + uVar12 * 4) = uVar6;
            iVar11 = ((int)*(short *)(lVar13 + 2 + uVar12 * 8) +
                      (int)*(short *)(lVar5 + 2 + uVar12 * 8) +
                      (int)*(short *)(lVar10 + 2 + uVar12 * 8) +
                     (int)*(short *)(lVar8 + 2 + uVar12 * 8) +
                     (int)*(short *)(lVar7 + 2 + uVar12 * 8)) * 0xa3d >> 0x10;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            uVar6 = (undefined1)iVar11;
            if (0xfe < iVar11) {
              uVar6 = 0xff;
            }
            *(undefined1 *)(lVar19 + 1 + uVar12 * 4) = uVar6;
            iVar11 = ((int)*(short *)(lVar13 + 4 + uVar12 * 8) +
                      (int)*(short *)(lVar5 + 4 + uVar12 * 8) +
                      (int)*(short *)(lVar10 + 4 + uVar12 * 8) +
                     (int)*(short *)(lVar8 + 4 + uVar12 * 8) +
                     (int)*(short *)(lVar7 + 4 + uVar12 * 8)) * 0xa3d >> 0x10;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            uVar6 = (undefined1)iVar11;
            if (0xfe < iVar11) {
              uVar6 = 0xff;
            }
            *(undefined1 *)(lVar19 + 2 + uVar12 * 4) = uVar6;
            iVar11 = ((int)*(short *)(lVar13 + 6 + uVar12 * 8) +
                      (int)*(short *)(lVar5 + 6 + uVar12 * 8) +
                      (int)*(short *)(lVar10 + 6 + uVar12 * 8) +
                     (int)*(short *)(lVar8 + 6 + uVar12 * 8) +
                     (int)*(short *)(lVar7 + 6 + uVar12 * 8)) * 0xa3d >> 0x10;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            uVar6 = (undefined1)iVar11;
            if (0xfe < iVar11) {
              uVar6 = 0xff;
            }
            *(undefined1 *)(lVar19 + 3 + uVar12 * 4) = uVar6;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar17);
          iVar14 = (int)uVar12 * 4 + 1;
        }
        uVar12 = (longlong)iVar14 - 1;
        if (uVar12 < (ulonglong)(lVar15 - lVar16)) {
          do {
            iVar11 = ((int)*(short *)(lVar13 + uVar12 * 2) + (int)*(short *)(lVar5 + uVar12 * 2) +
                      (int)*(short *)(lVar10 + uVar12 * 2) +
                     (int)*(short *)(lVar8 + uVar12 * 2) + (int)*(short *)(lVar7 + uVar12 * 2)) *
                     0xa3d >> 0x10;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            uVar6 = (undefined1)iVar11;
            if (0xfe < iVar11) {
              uVar6 = 0xff;
            }
            *(undefined1 *)(uVar12 + lVar16 + param_2) = uVar6;
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulonglong)(lVar15 - lVar16));
        }
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + (longlong)param_3;
    } while (uVar4 < uVar9);
  }
  return;
}

