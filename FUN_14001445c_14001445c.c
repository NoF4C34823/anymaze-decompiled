
void FUN_14001445c(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  undefined1 in_AL;
  int in_R10D;
  undefined4 uVar5;
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
  float fVar18;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM16 [16];
  undefined1 in_XMM17 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_XMM21 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 in_ZMM27 [64];
  
  auVar20 = in_ZMM27._0_16_;
  do {
    uVar3 = *param_1;
    param_4 = param_4 + 4;
    puVar1 = param_1 + 1;
    puVar2 = param_1 + 2;
    param_1 = param_1 + 3;
    auVar9 = in_ZMM20._0_16_;
    auVar6 = vpunpcklbw_avx512vl(ZEXT416(uVar3),auVar9);
    auVar7 = vpunpcklbw_avx512vl(ZEXT416(*puVar1),auVar9);
    auVar6 = vpunpcklwd_avx512vl(auVar6,auVar9);
    auVar8 = vpunpcklbw_avx512vl(ZEXT416(*puVar2),auVar9);
    auVar7 = vpunpcklwd_avx512vl(auVar7,auVar9);
    auVar6 = vpshufd_avx512vl(auVar6,0xc9);
    auVar8 = vpunpcklwd_avx512vl(auVar8,auVar9);
    auVar8 = vpshufd_avx512vl(auVar8,0x9c);
    auVar9 = vpunpckldq_avx512vl(auVar6,auVar7);
    auVar9 = vpshufd_avx512vl(auVar9,0x4e);
    auVar7 = vpunpckhdq_avx512vl(auVar7,auVar8);
    auVar10 = vpunpckhqdq_avx512vl(auVar9,auVar7);
    auVar10 = vcvtdq2ps_avx512vl(auVar10);
    auVar8 = vpunpcklqdq_avx512vl(auVar9,auVar8);
    auVar8 = vcvtdq2ps_avx512vl(auVar8);
    auVar6 = vpshufd_avx512vl(auVar6,0x4e);
    auVar6 = vpunpcklqdq_avx512vl(auVar6,auVar7);
    auVar11 = vcvtdq2ps_avx512vl(auVar6);
    auVar6 = vminps_avx512vl(auVar11,auVar10);
    auVar7 = vminps_avx512vl(auVar6,auVar8);
    auVar6 = vmaxps_avx512vl(auVar11,auVar10);
    auVar9 = vmaxps_avx512vl(auVar6,auVar8);
    auVar6 = vcmpps_avx(auVar9,in_XMM3,0);
    auVar12 = vcvtps2dq_avx512vl(auVar9);
    auVar13 = vsubps_avx512vl(auVar9,auVar7);
    auVar7 = vcmpps_avx(auVar13,in_XMM3,0);
    auVar14 = vorps_avx512vl(auVar6,auVar7);
    auVar6 = vandps_avx512vl(auVar20,auVar14);
    auVar15 = vaddps_avx512vl(auVar9,auVar6);
    auVar13 = vaddps_avx512vl(auVar6,auVar13);
    auVar6 = vcmpps_avx(auVar10,auVar15,0);
    auVar9 = vrcpps_avx(auVar13);
    auVar7 = vrcpps_avx(auVar15);
    auVar10 = vsubps_avx512vl(auVar15,auVar10);
    auVar13 = vmulps_avx512vl(auVar7,auVar13);
    auVar16 = vsubps_avx512vl(auVar15,auVar11);
    auVar17 = vsubps_avx512vl(auVar15,auVar8);
    auVar7 = vcmpps_avx(auVar11,auVar15,0);
    auVar8 = vcmpps_avx(auVar8,auVar15,0);
    auVar11 = vmulps_avx512vl(auVar9,auVar10);
    auVar13 = vmulps_avx512vl(auVar20,auVar13);
    auVar11 = vfmsub231ps_avx512vl(auVar11,auVar17,auVar9);
    auVar15 = vsubps_avx512vl(auVar16,auVar17);
    auVar10 = vsubps_avx512vl(auVar16,auVar10);
    auVar15 = vfmadd213ps_avx512vl(auVar15,auVar9,in_XMM17);
    auVar9 = vfnmadd213ps_avx512vl(auVar10,auVar9,in_XMM16);
    auVar10 = vandps_avx512vl(auVar7,auVar11);
    auVar6 = vandnps_avx512vl(auVar7,auVar6);
    auVar7 = vandnps_avx512vl(auVar14,auVar13);
    auVar10 = vandnps_avx512vl(auVar6,auVar10);
    auVar8 = vandnps_avx512vl(auVar6,auVar8);
    auVar10 = vandnps_avx512vl(auVar8,auVar10);
    auVar6 = vandps_avx512vl(auVar6,auVar15);
    auVar9 = vandps_avx512vl(auVar8,auVar9);
    auVar6 = vandnps_avx512vl(auVar8,auVar6);
    auVar7 = vcvtps2dq_avx512vl(auVar7);
    auVar6 = vaddps_avx512vl(auVar9,auVar6);
    auVar6 = vaddps_avx512vl(auVar10,auVar6);
    auVar8 = vmulps_avx512vl(in_XMM21,auVar6);
    auVar9 = vfmadd213ps_avx512vl(auVar6,in_XMM21,auVar20);
    auVar6 = vcmpps_avx(auVar8,in_XMM3,1);
    auVar8 = vandnps_avx512vl(auVar6,auVar8);
    auVar6 = vandps_avx512vl(auVar6,auVar9);
    auVar6 = vaddps_avx512vl(auVar8,auVar6);
    auVar6 = vandnps_avx512vl(auVar14,auVar6);
    auVar6 = vcvtps2dq_avx512vl(auVar6);
    auVar8 = vpunpckhdq_avx512vl(auVar6,auVar7);
    auVar6 = vpunpckldq_avx512vl(auVar6,auVar7);
    auVar19 = vpslldq_avx512vl(auVar12,0xc);
    auVar6 = vpternlogd_avx512vl(auVar19._0_16_,auVar6,in_ZMM18._0_16_,0xf8);
    auVar7 = vpunpckldq_avx512vl(auVar7,auVar12);
    auVar19 = vpsrldq_avx512vl(auVar7,8);
    auVar6 = vpshufd_avx512vl(auVar6,0xb4);
    auVar7 = vpunpcklqdq_avx512vl(auVar19._0_16_,auVar8);
    auVar6 = vpackssdw_avx512vl(auVar6,auVar7);
    auVar7 = vpunpckhqdq_avx512vl(auVar8,auVar12);
    auVar6 = vpackuswb_avx512vl(auVar6,auVar6);
    auVar7 = vpshufd_avx512vl(auVar7,0xd2);
    auVar7 = vpackssdw_avx512vl(auVar7,auVar7);
    *param_2 = auVar6._0_4_;
    auVar6 = vpsrldq_avx(auVar6,4);
    param_2[1] = auVar6._0_4_;
    auVar6 = vpackuswb_avx512vl(auVar7,auVar7);
    param_2[2] = auVar6._0_4_;
    param_2 = param_2 + 3;
  } while (param_4 < in_R10D);
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    auVar6 = vcvtsi2ss_avx512f(in_XMM3,(uint)(byte)*param_1);
    auVar7 = vcvtsi2ss_avx512f(in_XMM3,(uint)*(byte *)((longlong)param_1 + 1));
    auVar9 = vmaxss_avx512f(auVar6,auVar7);
    auVar8 = vcvtsi2ss_avx512f(in_XMM3,(uint)*(byte *)((longlong)param_1 + 2));
    auVar10 = vminss_avx512f(auVar6,auVar7);
    auVar9 = vmaxss_avx512f(auVar9,auVar8);
    auVar10 = vminss_avx512f(auVar10,auVar8);
    fVar18 = auVar9._0_4_;
    fVar4 = fVar18 - auVar10._0_4_;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar18);
    if ((fVar18 == 0.0) || ((fVar4 == 0.0 && (!NAN(fVar4))))) {
      *(undefined1 *)((longlong)param_2 + 1) = in_AL;
      *(undefined1 *)param_2 = in_AL;
    }
    else {
      auVar10 = vrcpss_avx(auVar9,auVar9);
      auVar11 = vsubss_avx512f(auVar9,auVar6);
      auVar12 = vsubss_avx512f(auVar9,auVar7);
      auVar13 = vsubss_avx512f(auVar9,auVar8);
      auVar9 = ZEXT416((uint)fVar4);
      auVar10 = vmulss_avx512f(auVar10,auVar9);
      auVar9 = vrcpss_avx(auVar9,auVar9);
      auVar10 = vmulss_avx512f(auVar10,auVar20);
      auVar11 = vmulss_avx512f(auVar11,auVar9);
      auVar12 = vmulss_avx512f(auVar12,auVar9);
      auVar13 = vmulss_avx512f(auVar13,auVar9);
      uVar5 = vcvtss2si_avx512f(auVar10);
      *(char *)((longlong)param_2 + 1) = (char)uVar5;
      auVar9 = in_XMM3;
      if ((fVar18 == auVar6._0_4_) && (!NAN(fVar18) && !NAN(auVar6._0_4_))) {
        auVar9 = vsubss_avx512f(auVar13,auVar12);
      }
      if ((fVar18 == auVar7._0_4_) && (!NAN(fVar18) && !NAN(auVar7._0_4_))) {
        auVar6 = vsubss_avx512f(auVar11,auVar13);
        auVar9 = vaddss_avx512f(auVar6,in_XMM17);
      }
      if ((fVar18 == auVar8._0_4_) && (!NAN(fVar18) && !NAN(auVar8._0_4_))) {
        auVar6 = vsubss_avx512f(auVar12,auVar11);
        auVar9 = vaddss_avx512f(auVar6,in_XMM16);
      }
      auVar6 = vmulss_avx512f(auVar9,in_XMM21);
      if (auVar6._0_4_ < 0.0) {
        auVar6 = vaddss_avx512f(auVar6,auVar20);
      }
      *(char *)param_2 = (char)(int)ROUND(auVar6._0_4_);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

