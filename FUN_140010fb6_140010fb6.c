
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010fb6(ulonglong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int in_EAX;
  int iVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  int unaff_EBX;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_XMM1 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar20 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar23 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar7 = _DAT_143086580;
  auVar22 = _DAT_143086570;
  auVar21 = _DAT_143086560;
  auVar20 = _DAT_143086550;
  auVar19 = _DAT_143086540;
  do {
    puVar10 = param_2;
    puVar9 = param_1;
    in_EAX = in_EAX + 8;
    auVar23 = in_ZMM5._0_16_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *puVar9;
    auVar25 = vpunpcklbw_avx(auVar23,auVar26);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = puVar9[1];
    auVar26 = vpunpcklbw_avx(auVar23,auVar24);
    auVar24 = vpmulhuw_avx(auVar25,in_XMM1);
    auVar26 = vpmulhuw_avx(auVar26,in_ZMM4._0_16_);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = puVar9[2];
    auVar4 = vpunpcklbw_avx(auVar23,auVar25);
    auVar25 = vpand_avx(auVar24 ^ auVar26,in_ZMM0._0_16_);
    auVar4 = vpmulhuw_avx(auVar4,in_ZMM3._0_16_);
    param_1 = puVar9 + 3;
    auVar5 = auVar24 ^ auVar26 ^ auVar26 ^ auVar25 ^ auVar4;
    auVar24 = vpand_avx(auVar5,auVar19);
    auVar4 = auVar4 ^ auVar24;
    auVar6 = auVar26 ^ auVar25 ^ auVar4;
    auVar24 = vpshufb_avx(auVar5 ^ auVar4,auVar21);
    auVar25 = vpand_avx(auVar6,auVar20);
    auVar26 = vpshufb_avx(auVar4 ^ auVar25,auVar7);
    auVar4 = vpshufb_avx(auVar6 ^ auVar4 ^ auVar25,auVar22);
    auVar25 = vpaddusw_avx(auVar26,auVar24);
    auVar25 = vpaddusw_avx(auVar25,auVar4);
    auVar25 = vpaddusw_avx(auVar25,in_ZMM2._0_16_);
    auVar25 = vpsraw_avx(auVar25,7);
    auVar25 = vpackuswb_avx(auVar25,auVar25);
    *puVar10 = auVar25._0_8_;
    param_2 = puVar10 + 1;
  } while (in_EAX < unaff_EBX);
  if ((param_3 & 4) != 0) {
    uVar16 = *param_1;
    param_1 = (ulonglong *)((longlong)puVar9 + 0x24);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar16;
    auVar19 = vpunpcklbw_avx(auVar23,auVar19);
    auVar20 = vpshufd_avx(ZEXT416((uint)puVar9[4]),0);
    auVar19 = vpmulhuw_avx(auVar19,in_XMM1);
    auVar20 = vpunpcklbw_avx(auVar23,auVar20);
    auVar20 = vpmulhuw_avx(auVar20,in_ZMM4._0_16_);
    auVar21 = vpsrldq_avx(auVar19,6);
    auVar21 = vpunpcklwd_avx(auVar19,auVar21);
    auVar22 = vpsrldq_avx(auVar19,0xc);
    auVar19 = vpslldq_avx(auVar20,4);
    auVar20 = vpsrldq_avx(auVar20,2);
    auVar19 = vpor_avx(auVar22,auVar19);
    auVar20 = vpunpcklwd_avx(auVar19,auVar20);
    auVar22 = vpunpckldq_avx(auVar21,auVar20);
    auVar19 = vpunpckhqdq_avx(auVar22,auVar22);
    auVar20 = vpunpckhdq_avx(auVar21,auVar20);
    auVar19 = vpaddusw_avx(auVar19,auVar22);
    auVar19 = vpaddusw_avx(auVar19,auVar20);
    auVar19 = vpaddusw_avx(auVar19,in_ZMM2._0_16_);
    auVar19 = vpsraw_avx(auVar19,7);
    auVar19 = vpackuswb_avx(auVar19,auVar19);
    *(int *)param_2 = auVar19._0_4_;
    param_2 = (undefined8 *)((longlong)puVar10 + 0xc);
  }
  bVar18 = (param_3 & 3) != 0;
  if (bVar18) {
    iVar11 = vpextrw_avx(in_XMM1,0);
    iVar8 = vpextrw_avx(in_XMM1,1);
    iVar14 = vpextrw_avx(in_XMM1,2);
    if (bVar18) {
      iVar13 = 1;
      lVar12 = 0;
      uVar17 = (param_3 & 3) >> 1;
      if (uVar17 != 0) {
        uVar16 = 0;
        do {
          uVar15 = uVar16;
          *(char *)((longlong)param_2 + uVar15 * 2) =
               (char)((uint)*(byte *)(lVar12 + (longlong)param_1) * iVar11 +
                      (uint)*(byte *)(lVar12 + 1 + (longlong)param_1) * iVar8 + 0x4000 +
                      (uint)*(byte *)(lVar12 + 2 + (longlong)param_1) * iVar14 >> 0xf);
          lVar1 = lVar12 + 3;
          lVar2 = lVar12 + 4;
          lVar3 = lVar12 + 5;
          lVar12 = lVar12 + 6;
          *(char *)((longlong)param_2 + uVar15 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * iVar11 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * iVar8 + 0x4000 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * iVar14 >> 0xf);
          uVar16 = uVar15 + 1;
        } while (uVar16 < uVar17);
        iVar13 = (int)uVar15 + 2 + (int)uVar16;
      }
      if (iVar13 - 1U < (param_3 & 3)) {
        lVar12 = (longlong)iVar13 * 3;
        *(char *)((longlong)iVar13 + -1 + (longlong)param_2) =
             (char)(iVar11 * (uint)*(byte *)(lVar12 + -3 + (longlong)param_1) +
                    iVar8 * (uint)*(byte *)(lVar12 + -2 + (longlong)param_1) + 0x4000 +
                    iVar14 * (uint)*(byte *)(lVar12 + -1 + (longlong)param_1) >> 0xf);
      }
    }
  }
  return;
}

