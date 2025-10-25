
void FUN_140014828(ulonglong *param_1,undefined2 *param_2,int param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  float fVar3;
  int in_EAX;
  undefined4 uVar4;
  int in_R10D;
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
  undefined1 in_XMM0 [16];
  float fVar17;
  undefined1 in_XMM16 [16];
  undefined1 in_XMM17 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_XMM22 [16];
  undefined1 auVar18 [16];
  undefined1 in_ZMM23 [64];
  
  auVar18 = in_ZMM23._0_16_;
  do {
    uVar2 = *param_1;
    in_R10D = in_R10D + 4;
    puVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    auVar10 = in_ZMM18._0_16_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar2;
    auVar5 = vpunpcklbw_avx512vl(auVar5,auVar10);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *puVar1;
    auVar6 = vpunpcklbw_avx512vl(auVar6,auVar10);
    auVar7 = vpunpcklwd_avx512vl(auVar5,auVar6);
    auVar5 = vpunpckhwd_avx512vl(auVar5,auVar6);
    auVar6 = vpunpckhdq_avx512vl(auVar7,auVar5);
    auVar6 = vpunpcklwd_avx512vl(auVar6,auVar10);
    auVar5 = vpunpckldq_avx512vl(auVar7,auVar5);
    auVar7 = vcvtdq2ps_avx512vl(auVar6);
    auVar6 = vpunpcklwd_avx512vl(auVar5,auVar10);
    auVar8 = vcvtdq2ps_avx512vl(auVar6);
    auVar5 = vpunpckhwd_avx512vl(auVar5,auVar10);
    auVar9 = vcvtdq2ps_avx512vl(auVar5);
    auVar5 = vminps_avx512vl(auVar8,auVar9);
    auVar6 = vminps_avx512vl(auVar5,auVar7);
    auVar5 = vmaxps_avx512vl(auVar8,auVar9);
    auVar10 = vmaxps_avx512vl(auVar5,auVar7);
    auVar5 = vcmpps_avx(auVar10,in_XMM0,0);
    auVar11 = vsubps_avx512vl(auVar10,auVar6);
    auVar12 = vcvtps2dq_avx512vl(auVar10);
    auVar6 = vcmpps_avx(auVar11,in_XMM0,0);
    auVar13 = vorps_avx512vl(auVar5,auVar6);
    auVar5 = vandps_avx512vl(in_XMM22,auVar13);
    auVar12 = vpackssdw_avx512vl(auVar12,auVar12);
    auVar14 = vaddps_avx512vl(auVar10,auVar5);
    auVar6 = vaddps_avx512vl(auVar5,auVar11);
    auVar5 = vrcpps_avx(auVar14);
    auVar11 = vsubps_avx512vl(auVar14,auVar9);
    auVar15 = vmulps_avx512vl(auVar5,auVar6);
    auVar16 = vsubps_avx512vl(auVar14,auVar8);
    auVar10 = vrcpps_avx(auVar6);
    auVar6 = vcmpps_avx(auVar8,auVar14,0);
    auVar5 = vcmpps_avx(auVar9,auVar14,0);
    auVar9 = vmulps_avx512vl(auVar10,auVar11);
    auVar8 = vsubps_avx(auVar14,auVar7);
    auVar7 = vcmpps_avx(auVar7,auVar14,0);
    auVar14 = vmulps_avx512vl(in_XMM22,auVar15);
    auVar9 = vfmsub231ps_fma(auVar9,auVar8,auVar10);
    auVar5 = vandnps_avx(auVar6,auVar5);
    auVar14 = vandnps_avx512vl(auVar13,auVar14);
    auVar7 = vandnps_avx(auVar5,auVar7);
    auVar6 = vandps_avx512vl(auVar6,auVar9);
    auVar8 = vsubps_avx512vl(auVar16,auVar8);
    auVar9 = vcvtps2dq_avx512vl(auVar14);
    auVar8 = vfmadd213ps_avx512vl(auVar8,auVar10,in_XMM16);
    auVar6 = vandnps_avx512vl(auVar5,auVar6);
    auVar5 = vandps_avx(auVar5,auVar8);
    auVar8 = vandnps_avx512vl(auVar7,auVar6);
    auVar6 = vsubps_avx512vl(auVar16,auVar11);
    auVar6 = vfnmadd213ps_avx512vl(auVar6,auVar10,in_XMM17);
    auVar6 = vandps_avx(auVar7,auVar6);
    auVar5 = vandnps_avx(auVar7,auVar5);
    auVar7._0_4_ = auVar8._0_4_ + auVar6._0_4_ + auVar5._0_4_;
    auVar7._4_4_ = auVar8._4_4_ + auVar6._4_4_ + auVar5._4_4_;
    auVar7._8_4_ = auVar8._8_4_ + auVar6._8_4_ + auVar5._8_4_;
    auVar7._12_4_ = auVar8._12_4_ + auVar6._12_4_ + auVar5._12_4_;
    auVar6 = vmulps_avx512vl(auVar18,auVar7);
    auVar7 = vfmadd213ps_avx512vl(auVar7,auVar18,in_XMM22);
    auVar5 = vcmpps_avx(auVar6,in_XMM0,1);
    auVar6 = vandnps_avx(auVar5,auVar6);
    auVar5 = vandps_avx(auVar5,auVar7);
    auVar7 = vpackuswb_avx512vl(auVar12,auVar12);
    auVar10._0_4_ = auVar6._0_4_ + auVar5._0_4_;
    auVar10._4_4_ = auVar6._4_4_ + auVar5._4_4_;
    auVar10._8_4_ = auVar6._8_4_ + auVar5._8_4_;
    auVar10._12_4_ = auVar6._12_4_ + auVar5._12_4_;
    auVar5 = vandnps_avx512vl(auVar13,auVar10);
    auVar5 = vcvtps2dq_avx(auVar5);
    auVar6 = vpunpckldq_avx512vl(auVar5,auVar9);
    auVar5 = vpunpckhdq_avx512vl(auVar5,auVar9);
    auVar5 = vpackssdw_avx(auVar6,auVar5);
    auVar5 = vpackuswb_avx(auVar5,auVar5);
    auVar6 = vpsrldq_avx(auVar5,4);
    *param_2 = auVar5._0_2_;
    *(char *)(param_2 + 1) = auVar7[0];
    auVar10 = vpsrldq_avx(auVar7,2);
    param_2[2] = auVar6._0_2_;
    auVar6 = vpsrldq_avx(auVar5,2);
    *(char *)(param_2 + 3) = auVar10[0];
    auVar10 = vpsrldq_avx(auVar7,1);
    param_2[4] = auVar6._0_2_;
    auVar5 = vpsrldq_avx(auVar5,6);
    *(char *)(param_2 + 5) = auVar10[0];
    auVar6 = vpsrldq_avx(auVar7,3);
    param_2[6] = auVar5._0_2_;
    *(char *)(param_2 + 7) = auVar6[0];
    param_2 = param_2 + 8;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    auVar5 = vcvtsi2ss_avx512f(in_XMM0,(uint)(byte)*param_1);
    auVar6 = vcvtsi2ss_avx512f(in_XMM0,(uint)*(byte *)((longlong)param_1 + 1));
    auVar10 = vmaxss_avx512f(auVar5,auVar6);
    auVar7 = vcvtsi2ss_avx512f(in_XMM0,(uint)*(byte *)((longlong)param_1 + 2));
    auVar8 = vminss_avx512f(auVar5,auVar6);
    auVar10 = vmaxss_avx512f(auVar10,auVar7);
    auVar8 = vminss_avx512f(auVar8,auVar7);
    fVar17 = auVar10._0_4_;
    fVar3 = fVar17 - auVar8._0_4_;
    *(char *)(param_2 + 1) = (char)(int)ROUND(fVar17);
    if ((fVar17 == 0.0) || ((fVar3 == 0.0 && (!NAN(fVar3))))) {
      *(undefined1 *)((longlong)param_2 + 1) = param_4;
      *(undefined1 *)param_2 = param_4;
    }
    else {
      auVar8 = vrcpss_avx(auVar10,auVar10);
      auVar9 = vsubss_avx512f(auVar10,auVar5);
      auVar11 = vsubss_avx512f(auVar10,auVar6);
      auVar12 = vsubss_avx512f(auVar10,auVar7);
      auVar10 = ZEXT416((uint)fVar3);
      auVar8 = vmulss_avx512f(auVar8,auVar10);
      auVar10 = vrcpss_avx(auVar10,auVar10);
      auVar8 = vmulss_avx512f(auVar8,in_XMM22);
      auVar9 = vmulss_avx512f(auVar9,auVar10);
      auVar11 = vmulss_avx512f(auVar11,auVar10);
      auVar12 = vmulss_avx512f(auVar12,auVar10);
      uVar4 = vcvtss2si_avx512f(auVar8);
      *(char *)((longlong)param_2 + 1) = (char)uVar4;
      auVar10 = in_XMM0;
      if ((fVar17 == auVar5._0_4_) && (!NAN(fVar17) && !NAN(auVar5._0_4_))) {
        auVar10 = vsubss_avx512f(auVar12,auVar11);
      }
      if ((fVar17 == auVar6._0_4_) && (!NAN(fVar17) && !NAN(auVar6._0_4_))) {
        auVar5 = vsubss_avx512f(auVar9,auVar12);
        auVar10 = vaddss_avx512f(auVar5,in_XMM16);
      }
      if ((fVar17 == auVar7._0_4_) && (!NAN(fVar17) && !NAN(auVar7._0_4_))) {
        auVar5 = vsubss_avx512f(auVar11,auVar9);
        auVar10 = vaddss_avx512f(auVar5,in_XMM17);
      }
      auVar5 = vmulss_avx512f(auVar10,auVar18);
      if (auVar5._0_4_ < 0.0) {
        auVar5 = vaddss_avx512f(auVar5,in_XMM22);
      }
      *(char *)param_2 = (char)(int)ROUND(auVar5._0_4_);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    param_2 = param_2 + 2;
  }
  return;
}

