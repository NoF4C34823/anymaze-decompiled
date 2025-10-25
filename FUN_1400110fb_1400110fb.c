
void FUN_1400110fb(ulonglong *param_1,undefined4 *param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_ZMM4 [64];
  undefined1 in_ZMM5 [64];
  
  if ((param_3 & 4) != 0) {
    uVar11 = *param_1;
    puVar1 = param_1 + 1;
    param_1 = (ulonglong *)((longlong)param_1 + 0xc);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar11;
    auVar14 = vpunpcklbw_avx(in_ZMM5._0_16_,auVar14);
    auVar15 = vpshufd_avx(ZEXT416((uint)*puVar1),0);
    auVar14 = vpmulhuw_avx(auVar14,in_XMM1);
    auVar15 = vpunpcklbw_avx(in_ZMM5._0_16_,auVar15);
    auVar15 = vpmulhuw_avx(auVar15,in_ZMM4._0_16_);
    auVar16 = vpsrldq_avx(auVar14,6);
    auVar16 = vpunpcklwd_avx(auVar14,auVar16);
    auVar17 = vpsrldq_avx(auVar14,0xc);
    auVar14 = vpslldq_avx(auVar15,4);
    auVar15 = vpsrldq_avx(auVar15,2);
    auVar14 = vpor_avx(auVar17,auVar14);
    auVar15 = vpunpcklwd_avx(auVar14,auVar15);
    auVar17 = vpunpckldq_avx(auVar16,auVar15);
    auVar14 = vpunpckhqdq_avx(auVar17,auVar17);
    auVar15 = vpunpckhdq_avx(auVar16,auVar15);
    auVar14 = vpaddusw_avx(auVar14,auVar17);
    auVar14 = vpaddusw_avx(auVar14,auVar15);
    auVar14 = vpaddusw_avx(auVar14,in_ZMM2._0_16_);
    auVar14 = vpsraw_avx(auVar14,7);
    auVar14 = vpackuswb_avx(auVar14,auVar14);
    *param_2 = auVar14._0_4_;
    param_2 = param_2 + 1;
  }
  bVar13 = (param_3 & 3) != 0;
  if (bVar13) {
    iVar6 = vpextrw_avx(in_XMM1,0);
    iVar5 = vpextrw_avx(in_XMM1,1);
    iVar9 = vpextrw_avx(in_XMM1,2);
    if (bVar13) {
      iVar8 = 1;
      lVar7 = 0;
      uVar12 = (param_3 & 3) >> 1;
      if (uVar12 != 0) {
        uVar11 = 0;
        do {
          uVar10 = uVar11;
          *(char *)((longlong)param_2 + uVar10 * 2) =
               (char)((uint)*(byte *)(lVar7 + (longlong)param_1) * iVar6 +
                      (uint)*(byte *)(lVar7 + 1 + (longlong)param_1) * iVar5 + 0x4000 +
                      (uint)*(byte *)(lVar7 + 2 + (longlong)param_1) * iVar9 >> 0xf);
          lVar2 = lVar7 + 3;
          lVar3 = lVar7 + 4;
          lVar4 = lVar7 + 5;
          lVar7 = lVar7 + 6;
          *(char *)((longlong)param_2 + uVar10 * 2 + 1) =
               (char)((uint)*(byte *)(lVar2 + (longlong)param_1) * iVar6 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * iVar5 + 0x4000 +
                      (uint)*(byte *)(lVar4 + (longlong)param_1) * iVar9 >> 0xf);
          uVar11 = uVar10 + 1;
        } while (uVar11 < uVar12);
        iVar8 = (int)uVar10 + 2 + (int)uVar11;
      }
      if (iVar8 - 1U < (param_3 & 3)) {
        lVar7 = (longlong)iVar8 * 3;
        *(char *)((longlong)iVar8 + -1 + (longlong)param_2) =
             (char)(iVar6 * (uint)*(byte *)(lVar7 + -3 + (longlong)param_1) +
                    iVar5 * (uint)*(byte *)(lVar7 + -2 + (longlong)param_1) + 0x4000 +
                    iVar9 * (uint)*(byte *)(lVar7 + -1 + (longlong)param_1) >> 0xf);
      }
    }
  }
  return;
}

