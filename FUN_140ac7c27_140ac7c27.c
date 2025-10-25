
void FUN_140ac7c27(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  int in_EAX;
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  int unaff_EBP;
  longlong lVar4;
  longlong lVar5;
  ulonglong in_R10;
  longlong lVar6;
  int iVar7;
  longlong in_R11;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM0 [16];
  
  lVar11 = (longlong)in_EAX;
  iVar1 = param_3 + -0x10;
  uVar14 = (longlong)(((ulonglong)(lVar11 >> 3) >> 0x3c) + lVar11) >> 4;
  do {
    iVar7 = 0;
    lVar9 = *(longlong *)(param_1 + param_2 * 8);
    lVar2 = *(longlong *)(param_1 + 8 + param_2 * 8);
    lVar6 = *(longlong *)(param_1 + 0x10 + param_2 * 8);
    lVar5 = *(longlong *)(param_1 + 0x18 + param_2 * 8);
    lVar4 = *(longlong *)(param_1 + 0x20 + param_2 * 8);
    if ((param_4 & 0xf) == 0) {
      if (unaff_EBP == 0) {
        uVar8 = 0;
        lVar15 = 0;
        lVar12 = 0;
        if (-1 < iVar1) {
          do {
            uVar8 = uVar8 + 1;
            auVar16 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar12 + 0x10 + lVar9));
            auVar17 = vpaddw_avx(*(undefined1 (*) [16])(lVar12 + lVar9),
                                 *(undefined1 (*) [16])(lVar12 + lVar2));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar2));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar6));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar6));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar5));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar5));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar4));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar4));
            lVar12 = lVar12 + 0x20;
            auVar17 = vpmulhw_avx512vl(auVar17,in_XMM0);
            auVar16 = vpmulhw_avx512vl(auVar16,in_XMM0);
            auVar17 = vpackuswb_avx512vl(auVar17,auVar16);
            auVar17 = vmovntdq_avx512vl(auVar17);
            *(undefined1 (*) [16])(lVar15 + param_4) = auVar17;
            lVar15 = lVar15 + 0x10;
          } while (uVar8 < uVar14);
          goto LAB_140ac7e8f;
        }
      }
      else {
        uVar8 = 0;
        lVar15 = 0;
        lVar12 = 0;
        iVar7 = 0;
        if (-1 < iVar1) {
          do {
            uVar8 = uVar8 + 1;
            auVar16 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar12 + 0x10 + lVar9));
            auVar17 = vpaddw_avx(*(undefined1 (*) [16])(lVar12 + lVar9),
                                 *(undefined1 (*) [16])(lVar12 + lVar2));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar2));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar6));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar6));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar5));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar5));
            auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar4));
            auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar4));
            lVar12 = lVar12 + 0x20;
            auVar17 = vpmulhw_avx512vl(auVar17,in_XMM0);
            auVar16 = vpmulhw_avx512vl(auVar16,in_XMM0);
            auVar17 = vpackuswb_avx512vl(auVar17,auVar16);
            auVar17 = vmovdqu32_avx512vl(auVar17);
            *(undefined1 (*) [16])(lVar15 + param_4) = auVar17;
            lVar15 = lVar15 + 0x10;
          } while (uVar8 < uVar14);
LAB_140ac7e8f:
          lVar12 = uVar8 * 0x20;
          iVar7 = (int)uVar8 << 4;
          lVar9 = lVar9 + lVar12;
          lVar2 = lVar2 + lVar12;
          lVar6 = lVar6 + lVar12;
          lVar5 = lVar5 + lVar12;
          lVar4 = lVar4 + lVar12;
        }
      }
    }
    else {
      uVar8 = 0;
      lVar15 = 0;
      lVar12 = 0;
      if (-1 < iVar1) {
        do {
          uVar8 = uVar8 + 1;
          auVar16 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar12 + 0x10 + lVar9));
          auVar17 = vpaddw_avx(*(undefined1 (*) [16])(lVar12 + lVar9),
                               *(undefined1 (*) [16])(lVar12 + lVar2));
          auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar2));
          auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar6));
          auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar6));
          auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar5));
          auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar5));
          auVar17 = vpaddw_avx(auVar17,*(undefined1 (*) [16])(lVar12 + lVar4));
          auVar16 = vpaddw_avx512vl(auVar16,*(undefined1 (*) [16])(lVar12 + 0x10 + lVar4));
          lVar12 = lVar12 + 0x20;
          auVar17 = vpmulhw_avx512vl(auVar17,in_XMM0);
          auVar16 = vpmulhw_avx512vl(auVar16,in_XMM0);
          auVar17 = vpackuswb_avx512vl(auVar17,auVar16);
          auVar17 = vmovdqu32_avx512vl(auVar17);
          *(undefined1 (*) [16])(lVar15 + param_4) = auVar17;
          lVar15 = lVar15 + 0x10;
        } while (uVar8 < uVar14);
        goto LAB_140ac7e8f;
      }
    }
    if (iVar7 < param_3) {
      iVar10 = 1;
      uVar8 = 0;
      lVar12 = (longlong)iVar7;
      uVar13 = (uint)(param_3 - iVar7) >> 2;
      if (uVar13 != 0) {
        lVar15 = param_4 + lVar12;
        do {
          iVar7 = ((int)*(short *)(lVar9 + uVar8 * 8) + (int)*(short *)(lVar2 + uVar8 * 8) +
                   (int)*(short *)(lVar6 + uVar8 * 8) +
                  (int)*(short *)(lVar5 + uVar8 * 8) + (int)*(short *)(lVar4 + uVar8 * 8)) * 0xa3d
                  >> 0x10;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xff;
          }
          *(undefined1 *)(lVar15 + uVar8 * 4) = uVar3;
          iVar7 = ((int)*(short *)(lVar9 + 2 + uVar8 * 8) + (int)*(short *)(lVar2 + 2 + uVar8 * 8) +
                   (int)*(short *)(lVar6 + 2 + uVar8 * 8) +
                  (int)*(short *)(lVar5 + 2 + uVar8 * 8) + (int)*(short *)(lVar4 + 2 + uVar8 * 8)) *
                  0xa3d >> 0x10;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xff;
          }
          *(undefined1 *)(lVar15 + 1 + uVar8 * 4) = uVar3;
          iVar7 = ((int)*(short *)(lVar9 + 4 + uVar8 * 8) + (int)*(short *)(lVar2 + 4 + uVar8 * 8) +
                   (int)*(short *)(lVar6 + 4 + uVar8 * 8) +
                  (int)*(short *)(lVar5 + 4 + uVar8 * 8) + (int)*(short *)(lVar4 + 4 + uVar8 * 8)) *
                  0xa3d >> 0x10;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xff;
          }
          *(undefined1 *)(lVar15 + 2 + uVar8 * 4) = uVar3;
          iVar7 = ((int)*(short *)(lVar9 + 6 + uVar8 * 8) + (int)*(short *)(lVar2 + 6 + uVar8 * 8) +
                   (int)*(short *)(lVar6 + 6 + uVar8 * 8) +
                  (int)*(short *)(lVar5 + 6 + uVar8 * 8) + (int)*(short *)(lVar4 + 6 + uVar8 * 8)) *
                  0xa3d >> 0x10;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xff;
          }
          *(undefined1 *)(lVar15 + 3 + uVar8 * 4) = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar13);
        iVar10 = (int)uVar8 * 4 + 1;
      }
      uVar8 = (longlong)iVar10 - 1;
      if (uVar8 < (ulonglong)(lVar11 - lVar12)) {
        do {
          iVar7 = ((int)*(short *)(lVar9 + uVar8 * 2) + (int)*(short *)(lVar2 + uVar8 * 2) +
                   (int)*(short *)(lVar6 + uVar8 * 2) +
                  (int)*(short *)(lVar5 + uVar8 * 2) + (int)*(short *)(lVar4 + uVar8 * 2)) * 0xa3d
                  >> 0x10;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar3 = (undefined1)iVar7;
          if (0xfe < iVar7) {
            uVar3 = 0xff;
          }
          *(undefined1 *)(uVar8 + lVar12 + param_4) = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)(lVar11 - lVar12));
      }
    }
    param_2 = param_2 + 1;
    param_4 = param_4 + in_R11;
    if (in_R10 <= param_2) {
      return;
    }
  } while( true );
}

