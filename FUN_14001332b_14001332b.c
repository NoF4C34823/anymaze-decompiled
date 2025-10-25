
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001332b(uint *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int in_EAX;
  undefined4 *in_RDX;
  undefined1 in_R9B;
  int in_R10D;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar9;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  fVar24 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar9 = (float)in_XMM2_Qa;
  do {
    in_R10D = in_R10D + 4;
    puVar1 = param_1 + 1;
    auVar7 = vpunpcklbw_avx(ZEXT416(*param_1),(undefined1  [16])0x0);
    puVar2 = param_1 + 2;
    param_1 = param_1 + 3;
    auVar7 = vpunpcklwd_avx(auVar7,(undefined1  [16])0x0);
    auVar8 = vpunpcklbw_avx(ZEXT416(*puVar1),(undefined1  [16])0x0);
    auVar25 = vpunpcklbw_avx(ZEXT416(*puVar2),(undefined1  [16])0x0);
    auVar7 = vpshufd_avx(auVar7,0xc9);
    auVar21 = vpunpcklwd_avx(auVar8,(undefined1  [16])0x0);
    auVar8 = vpunpcklwd_avx(auVar25,(undefined1  [16])0x0);
    auVar8 = vpshufd_avx(auVar8,0x9c);
    auVar25 = vpunpckldq_avx(auVar7,auVar21);
    auVar25 = vpshufd_avx(auVar25,0x4e);
    auVar21 = vpunpckhdq_avx(auVar21,auVar8);
    auVar7 = vpshufd_avx(auVar7,0x4e);
    auVar23 = vpunpckhqdq_avx(auVar25,auVar21);
    auVar7 = vpunpcklqdq_avx(auVar7,auVar21);
    auVar8 = vpunpcklqdq_avx(auVar25,auVar8);
    auVar25 = vcvtdq2ps_avx(auVar23);
    auVar21 = vcvtdq2ps_avx(auVar7);
    auVar23 = vcvtdq2ps_avx(auVar8);
    auVar8 = vminps_avx(auVar21,auVar25);
    auVar7 = vmaxps_avx(auVar21,auVar25);
    auVar8 = vminps_avx(auVar8,auVar23);
    auVar15 = vmaxps_avx(auVar7,auVar23);
    auVar3 = vcvtps2dq_avx(auVar15);
    auVar12 = vsubps_avx(auVar15,auVar8);
    auVar19 = ZEXT816(0) << 0x20;
    auVar7 = vcmpps_avx(auVar15,auVar19,0);
    auVar8 = vcmpps_avx(auVar12,auVar19,0);
    auVar6 = vorps_avx(auVar7,auVar8);
    auVar7._8_4_ = in_XMM2_Dc;
    auVar7._0_8_ = in_XMM2_Qa;
    auVar7._12_4_ = in_XMM2_Dd;
    auVar7 = vandps_avx(auVar7,auVar6);
    auVar10._0_4_ = auVar15._0_4_ + auVar7._0_4_;
    auVar10._4_4_ = auVar15._4_4_ + auVar7._4_4_;
    auVar10._8_4_ = auVar15._8_4_ + auVar7._8_4_;
    auVar10._12_4_ = auVar15._12_4_ + auVar7._12_4_;
    auVar15._0_4_ = auVar7._0_4_ + auVar12._0_4_;
    auVar15._4_4_ = auVar7._4_4_ + auVar12._4_4_;
    auVar15._8_4_ = auVar7._8_4_ + auVar12._8_4_;
    auVar15._12_4_ = auVar7._12_4_ + auVar12._12_4_;
    auVar7 = vrcpps_avx(auVar10);
    auVar27._0_4_ = fVar9 * auVar7._0_4_ * auVar15._0_4_;
    auVar27._4_4_ = fVar24 * auVar7._4_4_ * auVar15._4_4_;
    auVar27._8_4_ = in_XMM2_Dc * auVar7._8_4_ * auVar15._8_4_;
    auVar27._12_4_ = in_XMM2_Dd * auVar7._12_4_ * auVar15._12_4_;
    auVar8 = vcmpps_avx(auVar21,auVar10,0);
    auVar7 = vandnps_avx(auVar6,auVar27);
    auVar12 = vrcpps_avx(auVar15);
    auVar15 = vcvtps2dq_avx(auVar7);
    auVar21 = vsubps_avx(auVar10,auVar21);
    auVar18 = vsubps_avx(auVar10,auVar25);
    auVar7 = vcmpps_avx(auVar25,auVar10,0);
    fVar26 = auVar12._0_4_;
    auVar11._0_4_ = fVar26 * auVar21._0_4_;
    fVar13 = auVar12._4_4_;
    auVar11._4_4_ = fVar13 * auVar21._4_4_;
    fVar14 = auVar12._8_4_;
    auVar11._8_4_ = fVar14 * auVar21._8_4_;
    fVar20 = auVar12._12_4_;
    auVar11._12_4_ = fVar20 * auVar21._12_4_;
    auVar16._0_4_ = fVar26 * auVar18._0_4_;
    auVar16._4_4_ = fVar13 * auVar18._4_4_;
    auVar16._8_4_ = fVar14 * auVar18._8_4_;
    auVar16._12_4_ = fVar20 * auVar18._12_4_;
    auVar25 = vsubps_avx(auVar10,auVar23);
    auVar21 = vcmpps_avx(auVar23,auVar10,0);
    auVar28._0_4_ = fVar26 * auVar25._0_4_;
    auVar28._4_4_ = fVar13 * auVar25._4_4_;
    auVar28._8_4_ = fVar14 * auVar25._8_4_;
    auVar28._12_4_ = fVar20 * auVar25._12_4_;
    auVar25 = vandnps_avx(auVar8,auVar7);
    auVar7 = vsubps_avx(auVar28,auVar16);
    auVar23 = vsubps_avx(auVar16,auVar11);
    auVar7 = vandps_avx(auVar8,auVar7);
    auVar21 = vandnps_avx(auVar25,auVar21);
    auVar8 = vsubps_avx(auVar11,auVar28);
    auVar12._0_4_ = (float)param_4 + auVar8._0_4_;
    auVar12._4_4_ = (float)((ulonglong)param_4 >> 0x20) + auVar8._4_4_;
    auVar12._8_4_ = in_XMM3_Dc + auVar8._8_4_;
    auVar12._12_4_ = in_XMM3_Dd + auVar8._12_4_;
    auVar8 = vandps_avx(auVar25,auVar12);
    auVar7 = vandnps_avx(auVar25,auVar7);
    auVar25 = vandnps_avx(auVar21,auVar7);
    auVar18._0_4_ = (float)in_XMM0_Qa + auVar23._0_4_;
    auVar18._4_4_ = (float)((ulonglong)in_XMM0_Qa >> 0x20) + auVar23._4_4_;
    auVar18._8_4_ = in_XMM0_Dc + auVar23._8_4_;
    auVar18._12_4_ = in_XMM0_Dd + auVar23._12_4_;
    auVar7 = vandps_avx(auVar21,auVar18);
    auVar8 = vandnps_avx(auVar21,auVar8);
    auVar21._0_4_ = (float)param_2 * (auVar25._0_4_ + auVar7._0_4_ + auVar8._0_4_);
    auVar21._4_4_ =
         (float)((ulonglong)param_2 >> 0x20) * (auVar25._4_4_ + auVar7._4_4_ + auVar8._4_4_);
    auVar21._8_4_ = in_XMM1_Dc * (auVar25._8_4_ + auVar7._8_4_ + auVar8._8_4_);
    auVar21._12_4_ = in_XMM1_Dd * (auVar25._12_4_ + auVar7._12_4_ + auVar8._12_4_);
    auVar7 = vcmpps_avx(auVar21,auVar19,1);
    auVar25._0_4_ = fVar9 + auVar21._0_4_;
    auVar25._4_4_ = fVar24 + auVar21._4_4_;
    auVar25._8_4_ = in_XMM2_Dc + auVar21._8_4_;
    auVar25._12_4_ = in_XMM2_Dd + auVar21._12_4_;
    auVar8 = vandnps_avx(auVar7,auVar21);
    auVar7 = vandps_avx(auVar7,auVar25);
    auVar23._0_4_ = auVar8._0_4_ + auVar7._0_4_;
    auVar23._4_4_ = auVar8._4_4_ + auVar7._4_4_;
    auVar23._8_4_ = auVar8._8_4_ + auVar7._8_4_;
    auVar23._12_4_ = auVar8._12_4_ + auVar7._12_4_;
    auVar7 = vandnps_avx(auVar6,auVar23);
    auVar7 = vcvtps2dq_avx(auVar7);
    auVar8 = vpunpckhdq_avx(auVar7,auVar15);
    auVar7 = vpunpckldq_avx(auVar7,auVar15);
    auVar7 = vpand_avx(auVar7,_DAT_1430866f0);
    auVar21 = vpunpckldq_avx(auVar15,auVar3);
    auVar25 = vpunpckhqdq_avx(auVar8,auVar3);
    auVar23 = vpslldq_avx(auVar3,0xc);
    auVar21 = vpsrldq_avx(auVar21,8);
    auVar7 = vpor_avx(auVar7,auVar23);
    auVar8 = vpunpcklqdq_avx(auVar21,auVar8);
    auVar7 = vpshufd_avx(auVar7,0xb4);
    auVar7 = vpackssdw_avx(auVar7,auVar8);
    auVar25 = vpshufd_avx(auVar25,0xd2);
    auVar8 = vpackuswb_avx(auVar7,auVar7);
    auVar7 = vpackssdw_avx(auVar25,auVar25);
    auVar7 = vpackuswb_avx(auVar7,auVar7);
    auVar25 = vpsrldq_avx(auVar8,4);
    in_RDX[2] = auVar7._0_4_;
    *in_RDX = auVar8._0_4_;
    in_RDX[1] = auVar25._0_4_;
    in_RDX = in_RDX + 3;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar24 = 0.0;
    fVar13 = (float)(byte)*param_1;
    fVar22 = (float)*(byte *)((longlong)param_1 + 1);
    auVar8 = vminss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar22));
    fVar20 = (float)*(byte *)((longlong)param_1 + 2);
    auVar7 = vmaxss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar22));
    auVar8 = vminss_avx(auVar8,ZEXT416((uint)fVar20));
    auVar7 = vmaxss_avx(auVar7,ZEXT416((uint)fVar20));
    fVar14 = auVar7._0_4_;
    fVar26 = fVar14 - auVar8._0_4_;
    *(char *)((longlong)in_RDX + 2) = (char)(int)ROUND(fVar14);
    if ((fVar14 == 0.0) || ((fVar26 == 0.0 && (!NAN(fVar26))))) {
      *(undefined1 *)((longlong)in_RDX + 1) = in_R9B;
      *(undefined1 *)in_RDX = in_R9B;
    }
    else {
      auVar7 = vrcpss_avx(auVar7,auVar7);
      auVar8 = vrcpss_avx(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
      fVar17 = auVar8._0_4_;
      fVar4 = (fVar14 - fVar13) * fVar17;
      fVar5 = (fVar14 - fVar22) * fVar17;
      fVar17 = (fVar14 - fVar20) * fVar17;
      *(char *)((longlong)in_RDX + 1) = (char)(int)ROUND(auVar7._0_4_ * fVar26 * fVar9);
      if ((fVar14 == fVar13) && (!NAN(fVar14) && !NAN(fVar13))) {
        fVar24 = fVar17 - fVar5;
      }
      if ((fVar14 == fVar22) && (!NAN(fVar14) && !NAN(fVar22))) {
        fVar24 = (fVar4 - fVar17) + (float)param_4;
      }
      if ((fVar14 == fVar20) && (!NAN(fVar14) && !NAN(fVar20))) {
        fVar24 = (fVar5 - fVar4) + (float)in_XMM0_Qa;
      }
      fVar24 = fVar24 * (float)param_2;
      if (fVar24 < 0.0) {
        fVar24 = fVar24 + fVar9;
      }
      *(char *)in_RDX = (char)(int)ROUND(fVar24);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    in_RDX = (undefined4 *)((longlong)in_RDX + 3);
  }
  return;
}

