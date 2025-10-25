
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014400(ulonglong *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar27 [64];
  
  auVar8 = _DAT_143086780;
  auVar7 = _DAT_143086770;
  auVar6 = _DAT_143086760;
  auVar5 = _DAT_143086750;
  if (param_4 == 4) {
    iVar9 = 0;
    auVar12 = ZEXT816(0) << 0x40;
    auVar11 = vpxord_avx512vl(in_ZMM18._0_16_,in_ZMM18._0_16_);
    if (0 < (int)(param_3 & 0xfffffffc)) {
      do {
        uVar4 = *param_1;
        iVar9 = iVar9 + 4;
        puVar2 = param_1 + 1;
        param_1 = param_1 + 2;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar4;
        auVar25 = vpunpcklbw_avx512vl(auVar25,auVar11);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar2;
        auVar13 = vpunpcklbw_avx512vl(auVar13,auVar11);
        auVar14 = vpunpcklwd_avx512vl(auVar25,auVar13);
        auVar25 = vpunpckhwd_avx512vl(auVar25,auVar13);
        auVar13 = vpunpckhdq_avx512vl(auVar14,auVar25);
        auVar13 = vpunpcklwd_avx512vl(auVar13,auVar11);
        auVar25 = vpunpckldq_avx512vl(auVar14,auVar25);
        auVar14 = vcvtdq2ps_avx512vl(auVar13);
        auVar13 = vpunpcklwd_avx512vl(auVar25,auVar11);
        auVar16 = vcvtdq2ps_avx512vl(auVar13);
        auVar25 = vpunpckhwd_avx512vl(auVar25,auVar11);
        auVar17 = vcvtdq2ps_avx512vl(auVar25);
        auVar25 = vminps_avx512vl(auVar16,auVar17);
        auVar13 = vminps_avx512vl(auVar25,auVar14);
        auVar25 = vmaxps_avx512vl(auVar16,auVar17);
        auVar15 = vmaxps_avx512vl(auVar25,auVar14);
        auVar25 = vcmpps_avx(auVar15,auVar12,0);
        auVar18 = vsubps_avx512vl(auVar15,auVar13);
        auVar19 = vcvtps2dq_avx512vl(auVar15);
        auVar13 = vcmpps_avx(auVar18,auVar12,0);
        auVar20 = vorps_avx512vl(auVar25,auVar13);
        auVar25 = vandps_avx512vl(auVar5,auVar20);
        auVar19 = vpackssdw_avx512vl(auVar19,auVar19);
        auVar21 = vaddps_avx512vl(auVar15,auVar25);
        auVar13 = vaddps_avx512vl(auVar25,auVar18);
        auVar25 = vrcpps_avx(auVar21);
        auVar18 = vsubps_avx512vl(auVar21,auVar17);
        auVar22 = vmulps_avx512vl(auVar25,auVar13);
        auVar23 = vsubps_avx512vl(auVar21,auVar16);
        auVar15 = vrcpps_avx(auVar13);
        auVar13 = vcmpps_avx(auVar16,auVar21,0);
        auVar25 = vcmpps_avx(auVar17,auVar21,0);
        auVar17 = vmulps_avx512vl(auVar15,auVar18);
        auVar16 = vsubps_avx(auVar21,auVar14);
        auVar14 = vcmpps_avx(auVar14,auVar21,0);
        auVar21 = vmulps_avx512vl(auVar5,auVar22);
        auVar17 = vfmsub231ps_fma(auVar17,auVar16,auVar15);
        auVar25 = vandnps_avx(auVar13,auVar25);
        auVar21 = vandnps_avx512vl(auVar20,auVar21);
        auVar14 = vandnps_avx(auVar25,auVar14);
        auVar13 = vandps_avx512vl(auVar13,auVar17);
        auVar16 = vsubps_avx512vl(auVar23,auVar16);
        auVar17 = vcvtps2dq_avx512vl(auVar21);
        auVar16 = vfmadd213ps_avx512vl(auVar16,auVar15,auVar7);
        auVar13 = vandnps_avx512vl(auVar25,auVar13);
        auVar25 = vandps_avx(auVar25,auVar16);
        auVar16 = vandnps_avx512vl(auVar14,auVar13);
        auVar13 = vsubps_avx512vl(auVar23,auVar18);
        auVar13 = vfnmadd213ps_avx512vl(auVar13,auVar15,auVar8);
        auVar13 = vandps_avx(auVar14,auVar13);
        auVar25 = vandnps_avx(auVar14,auVar25);
        auVar14._0_4_ = auVar16._0_4_ + auVar13._0_4_ + auVar25._0_4_;
        auVar14._4_4_ = auVar16._4_4_ + auVar13._4_4_ + auVar25._4_4_;
        auVar14._8_4_ = auVar16._8_4_ + auVar13._8_4_ + auVar25._8_4_;
        auVar14._12_4_ = auVar16._12_4_ + auVar13._12_4_ + auVar25._12_4_;
        auVar13 = vmulps_avx512vl(auVar6,auVar14);
        auVar14 = vfmadd213ps_avx512vl(auVar14,auVar6,auVar5);
        auVar25 = vcmpps_avx(auVar13,auVar12,1);
        auVar13 = vandnps_avx(auVar25,auVar13);
        auVar25 = vandps_avx(auVar25,auVar14);
        auVar14 = vpackuswb_avx512vl(auVar19,auVar19);
        auVar15._0_4_ = auVar13._0_4_ + auVar25._0_4_;
        auVar15._4_4_ = auVar13._4_4_ + auVar25._4_4_;
        auVar15._8_4_ = auVar13._8_4_ + auVar25._8_4_;
        auVar15._12_4_ = auVar13._12_4_ + auVar25._12_4_;
        auVar25 = vandnps_avx512vl(auVar20,auVar15);
        auVar25 = vcvtps2dq_avx(auVar25);
        auVar13 = vpunpckldq_avx512vl(auVar25,auVar17);
        auVar25 = vpunpckhdq_avx512vl(auVar25,auVar17);
        auVar25 = vpackssdw_avx(auVar13,auVar25);
        auVar25 = vpackuswb_avx(auVar25,auVar25);
        auVar13 = vpsrldq_avx(auVar25,4);
        *(short *)param_2 = auVar25._0_2_;
        *(char *)((longlong)param_2 + 2) = auVar14[0];
        auVar15 = vpsrldq_avx(auVar14,2);
        *(short *)(param_2 + 1) = auVar13._0_2_;
        auVar13 = vpsrldq_avx(auVar25,2);
        *(char *)((longlong)param_2 + 6) = auVar15[0];
        auVar15 = vpsrldq_avx(auVar14,1);
        *(short *)(param_2 + 2) = auVar13._0_2_;
        auVar25 = vpsrldq_avx(auVar25,6);
        *(char *)((longlong)param_2 + 10) = auVar15[0];
        auVar13 = vpsrldq_avx(auVar14,3);
        *(short *)(param_2 + 3) = auVar25._0_2_;
        *(char *)((longlong)param_2 + 0xe) = auVar13[0];
        param_2 = param_2 + 4;
      } while (iVar9 < (int)(param_3 & 0xfffffffc));
    }
    for (; iVar9 < (int)param_3; iVar9 = iVar9 + 1) {
      auVar11 = vcvtsi2ss_avx512f(auVar12,(uint)(byte)*param_1);
      auVar25 = vcvtsi2ss_avx512f(auVar12,(uint)*(byte *)((longlong)param_1 + 1));
      auVar14 = vmaxss_avx512f(auVar11,auVar25);
      auVar13 = vcvtsi2ss_avx512f(auVar12,(uint)*(byte *)((longlong)param_1 + 2));
      auVar15 = vminss_avx512f(auVar11,auVar25);
      auVar14 = vmaxss_avx512f(auVar14,auVar13);
      auVar15 = vminss_avx512f(auVar15,auVar13);
      fVar26 = auVar14._0_4_;
      fVar3 = fVar26 - auVar15._0_4_;
      *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar26);
      if ((fVar26 == 0.0) || ((fVar3 == 0.0 && (!NAN(fVar3))))) {
        *(undefined1 *)((longlong)param_2 + 1) = 0;
        *(undefined1 *)param_2 = 0;
      }
      else {
        auVar15 = vrcpss_avx(auVar14,auVar14);
        auVar16 = vsubss_avx512f(auVar14,auVar11);
        auVar17 = vsubss_avx512f(auVar14,auVar25);
        auVar18 = vsubss_avx512f(auVar14,auVar13);
        auVar14 = ZEXT416((uint)fVar3);
        auVar15 = vmulss_avx512f(auVar15,auVar14);
        auVar14 = vrcpss_avx(auVar14,auVar14);
        auVar15 = vmulss_avx512f(auVar15,auVar5);
        auVar16 = vmulss_avx512f(auVar16,auVar14);
        auVar17 = vmulss_avx512f(auVar17,auVar14);
        auVar18 = vmulss_avx512f(auVar18,auVar14);
        uVar10 = vcvtss2si_avx512f(auVar15);
        *(char *)((longlong)param_2 + 1) = (char)uVar10;
        auVar14 = auVar12;
        if ((fVar26 == auVar11._0_4_) && (!NAN(fVar26) && !NAN(auVar11._0_4_))) {
          auVar14 = vsubss_avx512f(auVar18,auVar17);
        }
        if ((fVar26 == auVar25._0_4_) && (!NAN(fVar26) && !NAN(auVar25._0_4_))) {
          auVar11 = vsubss_avx512f(auVar16,auVar18);
          auVar14 = vaddss_avx512f(auVar11,auVar7);
        }
        if ((fVar26 == auVar13._0_4_) && (!NAN(fVar26) && !NAN(auVar13._0_4_))) {
          auVar11 = vsubss_avx512f(auVar17,auVar16);
          auVar14 = vaddss_avx512f(auVar11,auVar8);
        }
        auVar11 = vmulss_avx512f(auVar14,auVar6);
        if (auVar11._0_4_ < 0.0) {
          auVar11 = vaddss_avx512f(auVar11,auVar5);
        }
        *(char *)param_2 = (char)(int)ROUND(auVar11._0_4_);
      }
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      param_2 = param_2 + 1;
    }
    return;
  }
  iVar9 = 0;
  auVar11 = vpxord_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
  auVar25 = ZEXT816(0) << 0x40;
  auVar12 = vmovdqu32_avx512vl(_DAT_143086790);
  if (0 < (int)(param_3 & 0xfffffffc)) {
    do {
      uVar4 = *param_1;
      iVar9 = iVar9 + 4;
      puVar1 = (uint *)((longlong)param_1 + 4);
      puVar2 = param_1 + 1;
      param_1 = (ulonglong *)((longlong)param_1 + 0xc);
      auVar13 = vpunpcklbw_avx512vl(ZEXT416((uint)uVar4),auVar11);
      auVar14 = vpunpcklbw_avx512vl(ZEXT416(*puVar1),auVar11);
      auVar13 = vpunpcklwd_avx512vl(auVar13,auVar11);
      auVar15 = vpunpcklbw_avx512vl(ZEXT416((uint)*puVar2),auVar11);
      auVar14 = vpunpcklwd_avx512vl(auVar14,auVar11);
      auVar13 = vpshufd_avx512vl(auVar13,0xc9);
      auVar15 = vpunpcklwd_avx512vl(auVar15,auVar11);
      auVar15 = vpshufd_avx512vl(auVar15,0x9c);
      auVar16 = vpunpckldq_avx512vl(auVar13,auVar14);
      auVar16 = vpshufd_avx512vl(auVar16,0x4e);
      auVar14 = vpunpckhdq_avx512vl(auVar14,auVar15);
      auVar17 = vpunpckhqdq_avx512vl(auVar16,auVar14);
      auVar17 = vcvtdq2ps_avx512vl(auVar17);
      auVar15 = vpunpcklqdq_avx512vl(auVar16,auVar15);
      auVar15 = vcvtdq2ps_avx512vl(auVar15);
      auVar13 = vpshufd_avx512vl(auVar13,0x4e);
      auVar13 = vpunpcklqdq_avx512vl(auVar13,auVar14);
      auVar18 = vcvtdq2ps_avx512vl(auVar13);
      auVar13 = vminps_avx512vl(auVar18,auVar17);
      auVar14 = vminps_avx512vl(auVar13,auVar15);
      auVar13 = vmaxps_avx512vl(auVar18,auVar17);
      auVar16 = vmaxps_avx512vl(auVar13,auVar15);
      auVar13 = vcmpps_avx(auVar16,auVar25,0);
      auVar19 = vcvtps2dq_avx512vl(auVar16);
      auVar20 = vsubps_avx512vl(auVar16,auVar14);
      auVar14 = vcmpps_avx(auVar20,auVar25,0);
      auVar21 = vorps_avx512vl(auVar13,auVar14);
      auVar13 = vandps_avx512vl(auVar5,auVar21);
      auVar22 = vaddps_avx512vl(auVar16,auVar13);
      auVar20 = vaddps_avx512vl(auVar13,auVar20);
      auVar13 = vcmpps_avx(auVar17,auVar22,0);
      auVar16 = vrcpps_avx(auVar20);
      auVar14 = vrcpps_avx(auVar22);
      auVar17 = vsubps_avx512vl(auVar22,auVar17);
      auVar20 = vmulps_avx512vl(auVar14,auVar20);
      auVar23 = vsubps_avx512vl(auVar22,auVar18);
      auVar24 = vsubps_avx512vl(auVar22,auVar15);
      auVar14 = vcmpps_avx(auVar18,auVar22,0);
      auVar15 = vcmpps_avx(auVar15,auVar22,0);
      auVar18 = vmulps_avx512vl(auVar16,auVar17);
      auVar20 = vmulps_avx512vl(auVar5,auVar20);
      auVar18 = vfmsub231ps_avx512vl(auVar18,auVar24,auVar16);
      auVar22 = vsubps_avx512vl(auVar23,auVar24);
      auVar17 = vsubps_avx512vl(auVar23,auVar17);
      auVar22 = vfmadd213ps_avx512vl(auVar22,auVar16,auVar7);
      auVar16 = vfnmadd213ps_avx512vl(auVar17,auVar16,auVar8);
      auVar17 = vandps_avx512vl(auVar14,auVar18);
      auVar13 = vandnps_avx512vl(auVar14,auVar13);
      auVar14 = vandnps_avx512vl(auVar21,auVar20);
      auVar17 = vandnps_avx512vl(auVar13,auVar17);
      auVar15 = vandnps_avx512vl(auVar13,auVar15);
      auVar17 = vandnps_avx512vl(auVar15,auVar17);
      auVar13 = vandps_avx512vl(auVar13,auVar22);
      auVar16 = vandps_avx512vl(auVar15,auVar16);
      auVar13 = vandnps_avx512vl(auVar15,auVar13);
      auVar14 = vcvtps2dq_avx512vl(auVar14);
      auVar13 = vaddps_avx512vl(auVar16,auVar13);
      auVar13 = vaddps_avx512vl(auVar17,auVar13);
      auVar15 = vmulps_avx512vl(auVar6,auVar13);
      auVar16 = vfmadd213ps_avx512vl(auVar13,auVar6,auVar5);
      auVar13 = vcmpps_avx(auVar15,auVar25,1);
      auVar15 = vandnps_avx512vl(auVar13,auVar15);
      auVar13 = vandps_avx512vl(auVar13,auVar16);
      auVar13 = vaddps_avx512vl(auVar15,auVar13);
      auVar13 = vandnps_avx512vl(auVar21,auVar13);
      auVar13 = vcvtps2dq_avx512vl(auVar13);
      auVar15 = vpunpckhdq_avx512vl(auVar13,auVar14);
      auVar13 = vpunpckldq_avx512vl(auVar13,auVar14);
      auVar27 = vpslldq_avx512vl(auVar19,0xc);
      auVar13 = vpternlogd_avx512vl(auVar27._0_16_,auVar13,auVar12,0xf8);
      auVar14 = vpunpckldq_avx512vl(auVar14,auVar19);
      auVar27 = vpsrldq_avx512vl(auVar14,8);
      auVar13 = vpshufd_avx512vl(auVar13,0xb4);
      auVar14 = vpunpcklqdq_avx512vl(auVar27._0_16_,auVar15);
      auVar13 = vpackssdw_avx512vl(auVar13,auVar14);
      auVar14 = vpunpckhqdq_avx512vl(auVar15,auVar19);
      auVar13 = vpackuswb_avx512vl(auVar13,auVar13);
      auVar14 = vpshufd_avx512vl(auVar14,0xd2);
      auVar14 = vpackssdw_avx512vl(auVar14,auVar14);
      *param_2 = auVar13._0_4_;
      auVar13 = vpsrldq_avx(auVar13,4);
      param_2[1] = auVar13._0_4_;
      auVar13 = vpackuswb_avx512vl(auVar14,auVar14);
      param_2[2] = auVar13._0_4_;
      param_2 = param_2 + 3;
    } while (iVar9 < (int)(param_3 & 0xfffffffc));
  }
  for (; iVar9 < (int)param_3; iVar9 = iVar9 + 1) {
    auVar11 = vcvtsi2ss_avx512f(auVar25,(uint)(byte)*param_1);
    auVar12 = vcvtsi2ss_avx512f(auVar25,(uint)*(byte *)((longlong)param_1 + 1));
    auVar14 = vmaxss_avx512f(auVar11,auVar12);
    auVar13 = vcvtsi2ss_avx512f(auVar25,(uint)*(byte *)((longlong)param_1 + 2));
    auVar15 = vminss_avx512f(auVar11,auVar12);
    auVar14 = vmaxss_avx512f(auVar14,auVar13);
    auVar15 = vminss_avx512f(auVar15,auVar13);
    fVar26 = auVar14._0_4_;
    fVar3 = fVar26 - auVar15._0_4_;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar26);
    if ((fVar26 == 0.0) || ((fVar3 == 0.0 && (!NAN(fVar3))))) {
      *(undefined1 *)((longlong)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0;
    }
    else {
      auVar15 = vrcpss_avx(auVar14,auVar14);
      auVar16 = vsubss_avx512f(auVar14,auVar11);
      auVar17 = vsubss_avx512f(auVar14,auVar12);
      auVar18 = vsubss_avx512f(auVar14,auVar13);
      auVar14 = ZEXT416((uint)fVar3);
      auVar15 = vmulss_avx512f(auVar15,auVar14);
      auVar14 = vrcpss_avx(auVar14,auVar14);
      auVar15 = vmulss_avx512f(auVar15,auVar5);
      auVar16 = vmulss_avx512f(auVar16,auVar14);
      auVar17 = vmulss_avx512f(auVar17,auVar14);
      auVar18 = vmulss_avx512f(auVar18,auVar14);
      uVar10 = vcvtss2si_avx512f(auVar15);
      *(char *)((longlong)param_2 + 1) = (char)uVar10;
      auVar14 = auVar25;
      if ((fVar26 == auVar11._0_4_) && (!NAN(fVar26) && !NAN(auVar11._0_4_))) {
        auVar14 = vsubss_avx512f(auVar18,auVar17);
      }
      if ((fVar26 == auVar12._0_4_) && (!NAN(fVar26) && !NAN(auVar12._0_4_))) {
        auVar11 = vsubss_avx512f(auVar16,auVar18);
        auVar14 = vaddss_avx512f(auVar11,auVar7);
      }
      if ((fVar26 == auVar13._0_4_) && (!NAN(fVar26) && !NAN(auVar13._0_4_))) {
        auVar11 = vsubss_avx512f(auVar17,auVar16);
        auVar14 = vaddss_avx512f(auVar11,auVar8);
      }
      auVar11 = vmulss_avx512f(auVar14,auVar6);
      if (auVar11._0_4_ < 0.0) {
        auVar11 = vaddss_avx512f(auVar11,auVar5);
      }
      *(char *)param_2 = (char)(int)ROUND(auVar11._0_4_);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

