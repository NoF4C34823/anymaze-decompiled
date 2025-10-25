
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a90820(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  auVar3 = _DAT_14308f280;
  uVar11 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar4 = (int)param_4;
  uVar6 = 0;
  if (0 < (longlong)uVar11) {
    lVar17 = (longlong)iVar4;
    iVar5 = iVar4 + -0x10;
    uVar20 = (longlong)(((ulonglong)(lVar17 >> 3) >> 0x3c) + lVar17) >> 4;
    do {
      iVar13 = 0;
      lVar15 = *(longlong *)(param_1 + uVar6 * 8);
      lVar7 = *(longlong *)(param_1 + 8 + uVar6 * 8);
      lVar12 = *(longlong *)(param_1 + 0x10 + uVar6 * 8);
      lVar10 = *(longlong *)(param_1 + 0x18 + uVar6 * 8);
      lVar9 = *(longlong *)(param_1 + 0x20 + uVar6 * 8);
      if ((param_2 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar14 = 0;
          lVar21 = 0;
          lVar18 = 0;
          if (-1 < iVar5) {
            do {
              uVar14 = uVar14 + 1;
              auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar15),
                                  *(undefined1 (*) [16])(lVar18 + lVar7));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar12));
              auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar15),
                                  *(undefined1 (*) [16])(lVar18 + 0x10 + lVar7));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar10));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar12));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar9));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar10));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar9));
              lVar18 = lVar18 + 0x20;
              auVar1 = vpmulhw_avx(auVar1,auVar3);
              auVar2 = vpmulhw_avx(auVar2,auVar3);
              auVar1 = vpackuswb_avx(auVar1,auVar2);
              auVar1 = vmovntdq_avx(auVar1);
              *(undefined1 (*) [16])(lVar21 + param_2) = auVar1;
              lVar21 = lVar21 + 0x10;
            } while (uVar14 < uVar20);
            goto LAB_140a90a83;
          }
        }
        else {
          uVar14 = 0;
          lVar21 = 0;
          lVar18 = 0;
          iVar13 = 0;
          if (-1 < iVar5) {
            do {
              uVar14 = uVar14 + 1;
              auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar15),
                                  *(undefined1 (*) [16])(lVar18 + lVar7));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar12));
              auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar15),
                                  *(undefined1 (*) [16])(lVar18 + 0x10 + lVar7));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar10));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar12));
              auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar9));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar10));
              auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar9));
              lVar18 = lVar18 + 0x20;
              auVar1 = vpmulhw_avx(auVar1,auVar3);
              auVar2 = vpmulhw_avx(auVar2,auVar3);
              auVar1 = vpackuswb_avx(auVar1,auVar2);
              *(undefined1 (*) [16])(lVar21 + param_2) = auVar1;
              lVar21 = lVar21 + 0x10;
            } while (uVar14 < uVar20);
LAB_140a90a83:
            lVar18 = uVar14 * 0x20;
            iVar13 = (int)uVar14 << 4;
            lVar15 = lVar15 + lVar18;
            lVar7 = lVar7 + lVar18;
            lVar12 = lVar12 + lVar18;
            lVar10 = lVar10 + lVar18;
            lVar9 = lVar9 + lVar18;
          }
        }
      }
      else {
        uVar14 = 0;
        lVar21 = 0;
        lVar18 = 0;
        if (-1 < iVar5) {
          do {
            uVar14 = uVar14 + 1;
            auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + lVar15),
                                *(undefined1 (*) [16])(lVar18 + lVar7));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar12));
            auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar18 + 0x10 + lVar15),
                                *(undefined1 (*) [16])(lVar18 + 0x10 + lVar7));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar10));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar12));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar18 + lVar9));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar10));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar9));
            lVar18 = lVar18 + 0x20;
            auVar1 = vpmulhw_avx(auVar1,auVar3);
            auVar2 = vpmulhw_avx(auVar2,auVar3);
            auVar1 = vpackuswb_avx(auVar1,auVar2);
            *(undefined1 (*) [16])(lVar21 + param_2) = auVar1;
            lVar21 = lVar21 + 0x10;
          } while (uVar14 < uVar20);
          goto LAB_140a90a83;
        }
      }
      if (iVar13 < iVar4) {
        iVar16 = 1;
        uVar14 = 0;
        lVar18 = (longlong)iVar13;
        uVar19 = (uint)(iVar4 - iVar13) >> 2;
        if (uVar19 != 0) {
          lVar21 = param_2 + lVar18;
          do {
            iVar13 = ((int)*(short *)(lVar15 + uVar14 * 8) + (int)*(short *)(lVar7 + uVar14 * 8) +
                      (int)*(short *)(lVar12 + uVar14 * 8) +
                     (int)*(short *)(lVar10 + uVar14 * 8) + (int)*(short *)(lVar9 + uVar14 * 8)) *
                     0xa3d >> 0x10;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            uVar8 = (undefined1)iVar13;
            if (0xfe < iVar13) {
              uVar8 = 0xff;
            }
            *(undefined1 *)(lVar21 + uVar14 * 4) = uVar8;
            iVar13 = ((int)*(short *)(lVar15 + 2 + uVar14 * 8) +
                      (int)*(short *)(lVar7 + 2 + uVar14 * 8) +
                      (int)*(short *)(lVar12 + 2 + uVar14 * 8) +
                     (int)*(short *)(lVar10 + 2 + uVar14 * 8) +
                     (int)*(short *)(lVar9 + 2 + uVar14 * 8)) * 0xa3d >> 0x10;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            uVar8 = (undefined1)iVar13;
            if (0xfe < iVar13) {
              uVar8 = 0xff;
            }
            *(undefined1 *)(lVar21 + 1 + uVar14 * 4) = uVar8;
            iVar13 = ((int)*(short *)(lVar15 + 4 + uVar14 * 8) +
                      (int)*(short *)(lVar7 + 4 + uVar14 * 8) +
                      (int)*(short *)(lVar12 + 4 + uVar14 * 8) +
                     (int)*(short *)(lVar10 + 4 + uVar14 * 8) +
                     (int)*(short *)(lVar9 + 4 + uVar14 * 8)) * 0xa3d >> 0x10;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            uVar8 = (undefined1)iVar13;
            if (0xfe < iVar13) {
              uVar8 = 0xff;
            }
            *(undefined1 *)(lVar21 + 2 + uVar14 * 4) = uVar8;
            iVar13 = ((int)*(short *)(lVar15 + 6 + uVar14 * 8) +
                      (int)*(short *)(lVar7 + 6 + uVar14 * 8) +
                      (int)*(short *)(lVar12 + 6 + uVar14 * 8) +
                     (int)*(short *)(lVar10 + 6 + uVar14 * 8) +
                     (int)*(short *)(lVar9 + 6 + uVar14 * 8)) * 0xa3d >> 0x10;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            uVar8 = (undefined1)iVar13;
            if (0xfe < iVar13) {
              uVar8 = 0xff;
            }
            *(undefined1 *)(lVar21 + 3 + uVar14 * 4) = uVar8;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar19);
          iVar16 = (int)uVar14 * 4 + 1;
        }
        uVar14 = (longlong)iVar16 - 1;
        if (uVar14 < (ulonglong)(lVar17 - lVar18)) {
          do {
            iVar13 = ((int)*(short *)(lVar15 + uVar14 * 2) + (int)*(short *)(lVar7 + uVar14 * 2) +
                      (int)*(short *)(lVar12 + uVar14 * 2) +
                     (int)*(short *)(lVar10 + uVar14 * 2) + (int)*(short *)(lVar9 + uVar14 * 2)) *
                     0xa3d >> 0x10;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            uVar8 = (undefined1)iVar13;
            if (0xfe < iVar13) {
              uVar8 = 0xff;
            }
            *(undefined1 *)(uVar14 + lVar18 + param_2) = uVar8;
            uVar14 = uVar14 + 1;
          } while (uVar14 < (ulonglong)(lVar17 - lVar18));
        }
      }
      uVar6 = uVar6 + 1;
      param_2 = param_2 + (longlong)param_3;
    } while (uVar6 < uVar11);
  }
  return;
}

