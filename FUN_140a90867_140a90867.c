
void FUN_140a90867(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int in_EAX;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int unaff_EBP;
  longlong lVar6;
  longlong lVar7;
  ulonglong in_R10;
  longlong lVar8;
  int iVar9;
  longlong in_R11;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 in_XMM1 [16];
  
  lVar13 = (longlong)in_EAX;
  iVar3 = param_3 + -0x10;
  uVar16 = (longlong)(((ulonglong)(lVar13 >> 3) >> 0x3c) + lVar13) >> 4;
  do {
    iVar9 = 0;
    lVar11 = *(longlong *)(param_1 + param_2 * 8);
    lVar4 = *(longlong *)(param_1 + 8 + param_2 * 8);
    lVar8 = *(longlong *)(param_1 + 0x10 + param_2 * 8);
    lVar7 = *(longlong *)(param_1 + 0x18 + param_2 * 8);
    lVar6 = *(longlong *)(param_1 + 0x20 + param_2 * 8);
    if ((param_4 & 0xf) == 0) {
      if (unaff_EBP == 0) {
        uVar10 = 0;
        lVar17 = 0;
        lVar14 = 0;
        if (-1 < iVar3) {
          do {
            uVar10 = uVar10 + 1;
            auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + lVar11),
                                *(undefined1 (*) [16])(lVar14 + lVar4));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar8));
            auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + 0x10 + lVar11),
                                *(undefined1 (*) [16])(lVar14 + 0x10 + lVar4));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar7));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar8));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar6));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar7));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar6));
            lVar14 = lVar14 + 0x20;
            auVar1 = vpmulhw_avx(auVar1,in_XMM1);
            auVar2 = vpmulhw_avx(auVar2,in_XMM1);
            auVar1 = vpackuswb_avx(auVar1,auVar2);
            auVar1 = vmovntdq_avx(auVar1);
            *(undefined1 (*) [16])(lVar17 + param_4) = auVar1;
            lVar17 = lVar17 + 0x10;
          } while (uVar10 < uVar16);
          goto LAB_140a90a83;
        }
      }
      else {
        uVar10 = 0;
        lVar17 = 0;
        lVar14 = 0;
        iVar9 = 0;
        if (-1 < iVar3) {
          do {
            uVar10 = uVar10 + 1;
            auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + lVar11),
                                *(undefined1 (*) [16])(lVar14 + lVar4));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar8));
            auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + 0x10 + lVar11),
                                *(undefined1 (*) [16])(lVar14 + 0x10 + lVar4));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar7));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar8));
            auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar6));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar7));
            auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar6));
            lVar14 = lVar14 + 0x20;
            auVar1 = vpmulhw_avx(auVar1,in_XMM1);
            auVar2 = vpmulhw_avx(auVar2,in_XMM1);
            auVar1 = vpackuswb_avx(auVar1,auVar2);
            *(undefined1 (*) [16])(lVar17 + param_4) = auVar1;
            lVar17 = lVar17 + 0x10;
          } while (uVar10 < uVar16);
LAB_140a90a83:
          lVar14 = uVar10 * 0x20;
          iVar9 = (int)uVar10 << 4;
          lVar11 = lVar11 + lVar14;
          lVar4 = lVar4 + lVar14;
          lVar8 = lVar8 + lVar14;
          lVar7 = lVar7 + lVar14;
          lVar6 = lVar6 + lVar14;
        }
      }
    }
    else {
      uVar10 = 0;
      lVar17 = 0;
      lVar14 = 0;
      if (-1 < iVar3) {
        do {
          uVar10 = uVar10 + 1;
          auVar1 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + lVar11),
                              *(undefined1 (*) [16])(lVar14 + lVar4));
          auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar8));
          auVar2 = vpaddw_avx(*(undefined1 (*) [16])(lVar14 + 0x10 + lVar11),
                              *(undefined1 (*) [16])(lVar14 + 0x10 + lVar4));
          auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar7));
          auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar8));
          auVar1 = vpaddw_avx(auVar1,*(undefined1 (*) [16])(lVar14 + lVar6));
          auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar7));
          auVar2 = vpaddw_avx(auVar2,*(undefined1 (*) [16])(lVar14 + 0x10 + lVar6));
          lVar14 = lVar14 + 0x20;
          auVar1 = vpmulhw_avx(auVar1,in_XMM1);
          auVar2 = vpmulhw_avx(auVar2,in_XMM1);
          auVar1 = vpackuswb_avx(auVar1,auVar2);
          *(undefined1 (*) [16])(lVar17 + param_4) = auVar1;
          lVar17 = lVar17 + 0x10;
        } while (uVar10 < uVar16);
        goto LAB_140a90a83;
      }
    }
    if (iVar9 < param_3) {
      iVar12 = 1;
      uVar10 = 0;
      lVar14 = (longlong)iVar9;
      uVar15 = (uint)(param_3 - iVar9) >> 2;
      if (uVar15 != 0) {
        lVar17 = param_4 + lVar14;
        do {
          iVar9 = ((int)*(short *)(lVar11 + uVar10 * 8) + (int)*(short *)(lVar4 + uVar10 * 8) +
                   (int)*(short *)(lVar8 + uVar10 * 8) +
                  (int)*(short *)(lVar7 + uVar10 * 8) + (int)*(short *)(lVar6 + uVar10 * 8)) * 0xa3d
                  >> 0x10;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          uVar5 = (undefined1)iVar9;
          if (0xfe < iVar9) {
            uVar5 = 0xff;
          }
          *(undefined1 *)(lVar17 + uVar10 * 4) = uVar5;
          iVar9 = ((int)*(short *)(lVar11 + 2 + uVar10 * 8) +
                   (int)*(short *)(lVar4 + 2 + uVar10 * 8) + (int)*(short *)(lVar8 + 2 + uVar10 * 8)
                  + (int)*(short *)(lVar7 + 2 + uVar10 * 8) +
                    (int)*(short *)(lVar6 + 2 + uVar10 * 8)) * 0xa3d >> 0x10;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          uVar5 = (undefined1)iVar9;
          if (0xfe < iVar9) {
            uVar5 = 0xff;
          }
          *(undefined1 *)(lVar17 + 1 + uVar10 * 4) = uVar5;
          iVar9 = ((int)*(short *)(lVar11 + 4 + uVar10 * 8) +
                   (int)*(short *)(lVar4 + 4 + uVar10 * 8) + (int)*(short *)(lVar8 + 4 + uVar10 * 8)
                  + (int)*(short *)(lVar7 + 4 + uVar10 * 8) +
                    (int)*(short *)(lVar6 + 4 + uVar10 * 8)) * 0xa3d >> 0x10;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          uVar5 = (undefined1)iVar9;
          if (0xfe < iVar9) {
            uVar5 = 0xff;
          }
          *(undefined1 *)(lVar17 + 2 + uVar10 * 4) = uVar5;
          iVar9 = ((int)*(short *)(lVar11 + 6 + uVar10 * 8) +
                   (int)*(short *)(lVar4 + 6 + uVar10 * 8) + (int)*(short *)(lVar8 + 6 + uVar10 * 8)
                  + (int)*(short *)(lVar7 + 6 + uVar10 * 8) +
                    (int)*(short *)(lVar6 + 6 + uVar10 * 8)) * 0xa3d >> 0x10;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          uVar5 = (undefined1)iVar9;
          if (0xfe < iVar9) {
            uVar5 = 0xff;
          }
          *(undefined1 *)(lVar17 + 3 + uVar10 * 4) = uVar5;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar15);
        iVar12 = (int)uVar10 * 4 + 1;
      }
      uVar10 = (longlong)iVar12 - 1;
      if (uVar10 < (ulonglong)(lVar13 - lVar14)) {
        do {
          iVar9 = ((int)*(short *)(lVar11 + uVar10 * 2) + (int)*(short *)(lVar4 + uVar10 * 2) +
                   (int)*(short *)(lVar8 + uVar10 * 2) +
                  (int)*(short *)(lVar7 + uVar10 * 2) + (int)*(short *)(lVar6 + uVar10 * 2)) * 0xa3d
                  >> 0x10;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          uVar5 = (undefined1)iVar9;
          if (0xfe < iVar9) {
            uVar5 = 0xff;
          }
          *(undefined1 *)(uVar10 + lVar14 + param_4) = uVar5;
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)(lVar13 - lVar14));
      }
    }
    param_2 = param_2 + 1;
    param_4 = param_4 + in_R11;
    if (in_R10 <= param_2) {
      return;
    }
  } while( true );
}

