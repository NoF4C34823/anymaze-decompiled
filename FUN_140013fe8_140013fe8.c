
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013fe8(ulonglong *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  int in_EAX;
  undefined2 *in_RDX;
  int in_R10D;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar7;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  fVar7 = (float)in_XMM2_Qa;
  do {
    in_R10D = in_R10D + 4;
    puVar1 = param_1 + 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *param_1;
    auVar10 = vpunpcklbw_avx(auVar9,(undefined1  [16])0x0);
    param_1 = param_1 + 2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *puVar1;
    auVar8 = vpunpcklbw_avx(auVar16,(undefined1  [16])0x0);
    auVar19 = vpunpcklwd_avx(auVar10,auVar8);
    auVar10 = vpunpckhwd_avx(auVar10,auVar8);
    auVar8 = vpunpckldq_avx(auVar19,auVar10);
    auVar14 = vpunpcklwd_avx(auVar8,(undefined1  [16])0x0);
    auVar8 = vpunpckhwd_avx(auVar8,(undefined1  [16])0x0);
    auVar14 = vcvtdq2ps_avx(auVar14);
    auVar16 = vcvtdq2ps_avx(auVar8);
    auVar10 = vpunpckhdq_avx(auVar19,auVar10);
    auVar12 = ZEXT816(0) << 0x20;
    auVar10 = vpunpcklwd_avx(auVar10,(undefined1  [16])0x0);
    auVar19 = vcvtdq2ps_avx(auVar10);
    auVar8 = vminps_avx(auVar14,auVar16);
    auVar10 = vmaxps_avx(auVar14,auVar16);
    auVar8 = vminps_avx(auVar8,auVar19);
    auVar28 = vmaxps_avx(auVar10,auVar19);
    auVar10 = vcmpps_avx(auVar28,auVar12,0);
    auVar9 = vcvtps2dq_avx(auVar28);
    auVar13 = vsubps_avx(auVar28,auVar8);
    auVar8 = vcmpps_avx(auVar13,auVar12,0);
    auVar4 = vorps_avx(auVar10,auVar8);
    auVar8._8_4_ = in_XMM2_Dc;
    auVar8._0_8_ = in_XMM2_Qa;
    auVar8._12_4_ = in_XMM2_Dd;
    auVar10 = vandps_avx(auVar8,auVar4);
    auVar8 = vpackssdw_avx(auVar9,auVar9);
    auVar18._0_4_ = auVar28._0_4_ + auVar10._0_4_;
    auVar18._4_4_ = auVar28._4_4_ + auVar10._4_4_;
    auVar18._8_4_ = auVar28._8_4_ + auVar10._8_4_;
    auVar18._12_4_ = auVar28._12_4_ + auVar10._12_4_;
    auVar28._0_4_ = auVar10._0_4_ + auVar13._0_4_;
    auVar28._4_4_ = auVar10._4_4_ + auVar13._4_4_;
    auVar28._8_4_ = auVar10._8_4_ + auVar13._8_4_;
    auVar28._12_4_ = auVar10._12_4_ + auVar13._12_4_;
    auVar10 = vrcpps_avx(auVar18);
    auVar13 = vrcpps_avx(auVar28);
    auVar20 = vsubps_avx(auVar18,auVar16);
    auVar22._0_4_ = fVar7 * auVar10._0_4_ * auVar28._0_4_;
    auVar22._4_4_ = (float)((ulonglong)in_XMM2_Qa >> 0x20) * auVar10._4_4_ * auVar28._4_4_;
    auVar22._8_4_ = in_XMM2_Dc * auVar10._8_4_ * auVar28._8_4_;
    auVar22._12_4_ = in_XMM2_Dd * auVar10._12_4_ * auVar28._12_4_;
    auVar28 = vpackuswb_avx(auVar8,auVar8);
    auVar10 = vandnps_avx(auVar4,auVar22);
    auVar9 = vcvtps2dq_avx(auVar10);
    auVar10 = vcmpps_avx(auVar14,auVar18,0);
    auVar22 = vsubps_avx(auVar18,auVar14);
    auVar8 = vcmpps_avx(auVar16,auVar18,0);
    auVar24._0_4_ = auVar13._0_4_ * auVar20._0_4_;
    auVar24._4_4_ = auVar13._4_4_ * auVar20._4_4_;
    auVar24._8_4_ = auVar13._8_4_ * auVar20._8_4_;
    auVar24._12_4_ = auVar13._12_4_ * auVar20._12_4_;
    auVar14 = vsubps_avx(auVar22,auVar20);
    auVar8 = vandnps_avx(auVar10,auVar8);
    auVar16 = vsubps_avx(auVar18,auVar19);
    auVar20._4_12_ = _UNK_143086734;
    auVar20._0_4_ = _DAT_143086730;
    auVar20 = vfnmadd213ps_fma(auVar14,auVar13,auVar20);
    auVar14 = vcmpps_avx(auVar19,auVar18,0);
    auVar19 = vfmsub231ps_fma(auVar24,auVar16,auVar13);
    auVar14 = vandnps_avx(auVar8,auVar14);
    auVar10 = vandps_avx(auVar10,auVar19);
    auVar16 = vsubps_avx(auVar22,auVar16);
    auVar19._4_12_ = in_register_00001204;
    auVar19._0_4_ = in_XMM0_Da;
    auVar19 = vfmadd213ps_fma(auVar16,auVar13,auVar19);
    auVar16 = vandnps_avx(auVar8,auVar10);
    auVar10 = vandps_avx(auVar14,auVar20);
    auVar16 = vandnps_avx(auVar14,auVar16);
    auVar8 = vandps_avx(auVar8,auVar19);
    auVar8 = vandnps_avx(auVar14,auVar8);
    *(char *)(in_RDX + 1) = auVar28[0];
    auVar20 = vpsrldq_avx(auVar28,1);
    auVar27._0_4_ = auVar16._0_4_ + auVar10._0_4_ + auVar8._0_4_;
    auVar27._4_4_ = auVar16._4_4_ + auVar10._4_4_ + auVar8._4_4_;
    auVar27._8_4_ = auVar16._8_4_ + auVar10._8_4_ + auVar8._8_4_;
    auVar27._12_4_ = auVar16._12_4_ + auVar10._12_4_ + auVar8._12_4_;
    auVar25._0_4_ = (float)param_2 * auVar27._0_4_;
    auVar25._4_4_ = (float)((ulonglong)param_2 >> 0x20) * auVar27._4_4_;
    auVar25._8_4_ = in_XMM1_Dc * auVar27._8_4_;
    auVar25._12_4_ = in_XMM1_Dd * auVar27._12_4_;
    auVar10._8_4_ = in_XMM1_Dc;
    auVar10._0_8_ = param_2;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar14._8_4_ = in_XMM2_Dc;
    auVar14._0_8_ = in_XMM2_Qa;
    auVar14._12_4_ = in_XMM2_Dd;
    auVar14 = vfmadd213ps_fma(auVar27,auVar10,auVar14);
    auVar10 = vcmpps_avx(auVar25,auVar12,1);
    auVar8 = vandnps_avx(auVar10,auVar25);
    auVar10 = vandps_avx(auVar10,auVar14);
    auVar13._0_4_ = auVar8._0_4_ + auVar10._0_4_;
    auVar13._4_4_ = auVar8._4_4_ + auVar10._4_4_;
    auVar13._8_4_ = auVar8._8_4_ + auVar10._8_4_;
    auVar13._12_4_ = auVar8._12_4_ + auVar10._12_4_;
    auVar10 = vandnps_avx(auVar4,auVar13);
    auVar10 = vcvtps2dq_avx(auVar10);
    auVar8 = vpunpckldq_avx(auVar10,auVar9);
    auVar10 = vpunpckhdq_avx(auVar10,auVar9);
    auVar10 = vpackssdw_avx(auVar8,auVar10);
    auVar10 = vpackuswb_avx(auVar10,auVar10);
    auVar8 = vpsrldq_avx(auVar10,4);
    auVar14 = vpsrldq_avx(auVar28,2);
    *in_RDX = auVar10._0_2_;
    auVar16 = vpsrldq_avx(auVar10,2);
    auVar19 = vpsrldq_avx(auVar10,6);
    in_RDX[2] = auVar8._0_2_;
    auVar10 = vpsrldq_avx(auVar28,3);
    *(char *)(in_RDX + 3) = auVar14[0];
    in_RDX[4] = auVar16._0_2_;
    in_RDX[6] = auVar19._0_2_;
    *(char *)(in_RDX + 5) = auVar20[0];
    *(char *)(in_RDX + 7) = auVar10[0];
    fVar6 = _DAT_143086730;
    in_RDX = in_RDX + 8;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar26 = 0.0;
    fVar11 = (float)(byte)*param_1;
    fVar23 = (float)*(byte *)((longlong)param_1 + 1);
    auVar8 = vminss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar23));
    fVar21 = (float)*(byte *)((longlong)param_1 + 2);
    auVar10 = vmaxss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar23));
    auVar8 = vminss_avx(auVar8,ZEXT416((uint)fVar21));
    auVar10 = vmaxss_avx(auVar10,ZEXT416((uint)fVar21));
    fVar15 = auVar10._0_4_;
    fVar5 = fVar15 - auVar8._0_4_;
    *(char *)(in_RDX + 1) = (char)(int)ROUND(fVar15);
    if ((fVar15 == 0.0) || ((fVar5 == 0.0 && (!NAN(fVar5))))) {
      *(undefined1 *)((longlong)in_RDX + 1) = param_4;
      *(undefined1 *)in_RDX = param_4;
    }
    else {
      auVar10 = vrcpss_avx(auVar10,auVar10);
      auVar8 = vrcpss_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar17 = auVar8._0_4_;
      fVar2 = (fVar15 - fVar11) * fVar17;
      fVar3 = (fVar15 - fVar23) * fVar17;
      fVar17 = (fVar15 - fVar21) * fVar17;
      *(char *)((longlong)in_RDX + 1) = (char)(int)ROUND(auVar10._0_4_ * fVar5 * fVar7);
      if ((fVar15 == fVar11) && (!NAN(fVar15) && !NAN(fVar11))) {
        fVar26 = fVar17 - fVar3;
      }
      if ((fVar15 == fVar23) && (!NAN(fVar15) && !NAN(fVar23))) {
        fVar26 = (fVar2 - fVar17) + in_XMM0_Da;
      }
      if ((fVar15 == fVar21) && (!NAN(fVar15) && !NAN(fVar21))) {
        fVar26 = (fVar3 - fVar2) + fVar6;
      }
      fVar26 = fVar26 * (float)param_2;
      if (fVar26 < 0.0) {
        fVar26 = fVar26 + fVar7;
      }
      *(char *)in_RDX = (char)(int)ROUND(fVar26);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    in_RDX = in_RDX + 2;
  }
  return;
}

