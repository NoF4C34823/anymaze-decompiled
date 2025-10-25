
void FUN_140013748(ulonglong *param_1,float param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  int in_EAX;
  undefined2 *in_RDX;
  undefined1 in_R9B;
  int in_R10D;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 in_register_00001244 [12];
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
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
  undefined1 auVar26 [16];
  
  do {
    in_R10D = in_R10D + 4;
    puVar1 = param_1 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *param_1;
    auVar20 = vpunpcklbw_avx(auVar21,(undefined1  [16])0x0);
    param_1 = param_1 + 2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *puVar1;
    auVar9 = vpunpcklbw_avx(auVar16,(undefined1  [16])0x0);
    auVar12 = vpunpcklwd_avx(auVar20,auVar9);
    auVar20 = vpunpckhwd_avx(auVar20,auVar9);
    auVar9 = vpunpckhdq_avx(auVar12,auVar20);
    auVar20 = vpunpckldq_avx(auVar12,auVar20);
    auVar9 = vpunpcklwd_avx(auVar9,(undefined1  [16])0x0);
    auVar12 = vpunpcklwd_avx(auVar20,(undefined1  [16])0x0);
    auVar20 = vpunpckhwd_avx(auVar20,(undefined1  [16])0x0);
    auVar12 = vcvtdq2ps_avx(auVar12);
    auVar15 = vcvtdq2ps_avx(auVar20);
    auVar22 = vcvtdq2ps_avx(auVar9);
    auVar9 = vminps_avx(auVar12,auVar15);
    auVar20 = vmaxps_avx(auVar12,auVar15);
    auVar9 = vminps_avx(auVar9,auVar22);
    auVar8 = vmaxps_avx(auVar20,auVar22);
    auVar2 = vcvtps2dq_avx(auVar8);
    auVar20._4_12_ = in_register_00001244;
    auVar20._0_4_ = param_2;
    auVar20 = vcmpps_avx(auVar8,auVar20,0);
    auVar11 = vsubps_avx(auVar8,auVar9);
    auVar9._4_12_ = in_register_00001244;
    auVar9._0_4_ = param_2;
    auVar9 = vcmpps_avx(auVar11,auVar9,0);
    auVar2 = vpackssdw_avx(auVar2,auVar2);
    auVar16 = vorps_avx(auVar20,auVar9);
    auVar21 = vpackuswb_avx(auVar2,auVar2);
    auVar2._4_4_ = in_XMM4_Db;
    auVar2._0_4_ = in_XMM4_Da;
    auVar2._8_4_ = in_XMM4_Dc;
    auVar2._12_4_ = in_XMM4_Dd;
    auVar20 = vandps_avx(auVar2,auVar16);
    auVar17._0_4_ = auVar8._0_4_ + auVar20._0_4_;
    auVar17._4_4_ = auVar8._4_4_ + auVar20._4_4_;
    auVar17._8_4_ = auVar8._8_4_ + auVar20._8_4_;
    auVar17._12_4_ = auVar8._12_4_ + auVar20._12_4_;
    auVar7._0_4_ = auVar20._0_4_ + auVar11._0_4_;
    auVar7._4_4_ = auVar20._4_4_ + auVar11._4_4_;
    auVar7._8_4_ = auVar20._8_4_ + auVar11._8_4_;
    auVar7._12_4_ = auVar20._12_4_ + auVar11._12_4_;
    auVar20 = vrcpps_avx(auVar17);
    auVar9 = vrcpps_avx(auVar7);
    auVar8 = vsubps_avx(auVar17,auVar12);
    auVar24._0_4_ = in_XMM4_Da * auVar20._0_4_ * auVar7._0_4_;
    auVar24._4_4_ = in_XMM4_Db * auVar20._4_4_ * auVar7._4_4_;
    auVar24._8_4_ = in_XMM4_Dc * auVar20._8_4_ * auVar7._8_4_;
    auVar24._12_4_ = in_XMM4_Dd * auVar20._12_4_ * auVar7._12_4_;
    auVar20 = vandnps_avx(auVar16,auVar24);
    auVar2 = vcvtps2dq_avx(auVar20);
    fVar3 = auVar9._0_4_;
    auVar18._0_4_ = fVar3 * auVar8._0_4_;
    fVar4 = auVar9._4_4_;
    auVar18._4_4_ = fVar4 * auVar8._4_4_;
    fVar5 = auVar9._8_4_;
    auVar18._8_4_ = fVar5 * auVar8._8_4_;
    fVar6 = auVar9._12_4_;
    auVar18._12_4_ = fVar6 * auVar8._12_4_;
    auVar20 = vcmpps_avx(auVar12,auVar17,0);
    auVar12 = vsubps_avx(auVar17,auVar15);
    auVar9 = vcmpps_avx(auVar15,auVar17,0);
    auVar8._0_4_ = fVar3 * auVar12._0_4_;
    auVar8._4_4_ = fVar4 * auVar12._4_4_;
    auVar8._8_4_ = fVar5 * auVar12._8_4_;
    auVar8._12_4_ = fVar6 * auVar12._12_4_;
    auVar15 = vsubps_avx(auVar17,auVar22);
    auVar12 = vcmpps_avx(auVar22,auVar17,0);
    auVar22._0_4_ = fVar3 * auVar15._0_4_;
    auVar22._4_4_ = fVar4 * auVar15._4_4_;
    auVar22._8_4_ = fVar5 * auVar15._8_4_;
    auVar22._12_4_ = fVar6 * auVar15._12_4_;
    auVar9 = vandnps_avx(auVar20,auVar9);
    auVar15 = vsubps_avx(auVar22,auVar8);
    auVar22 = vsubps_avx(auVar18,auVar22);
    auVar8 = vsubps_avx(auVar8,auVar18);
    auVar19._0_4_ = (float)in_XMM2_Qa + auVar22._0_4_;
    auVar19._4_4_ = (float)((ulonglong)in_XMM2_Qa >> 0x20) + auVar22._4_4_;
    auVar19._8_4_ = in_XMM2_Dc + auVar22._8_4_;
    auVar19._12_4_ = in_XMM2_Dd + auVar22._12_4_;
    auVar20 = vandps_avx(auVar20,auVar15);
    auVar12 = vandnps_avx(auVar9,auVar12);
    auVar15 = vandnps_avx(auVar9,auVar20);
    auVar20 = vandps_avx(auVar9,auVar19);
    *(char *)(in_RDX + 1) = auVar21[0];
    auVar11._0_4_ = (float)in_XMM0_Qa + auVar8._0_4_;
    auVar11._4_4_ = (float)((ulonglong)in_XMM0_Qa >> 0x20) + auVar8._4_4_;
    auVar11._8_4_ = in_XMM0_Dc + auVar8._8_4_;
    auVar11._12_4_ = in_XMM0_Dd + auVar8._12_4_;
    auVar9 = vandps_avx(auVar12,auVar11);
    auVar15 = vandnps_avx(auVar12,auVar15);
    auVar20 = vandnps_avx(auVar12,auVar20);
    auVar26._0_4_ = (float)param_4 * (auVar15._0_4_ + auVar9._0_4_ + auVar20._0_4_);
    auVar26._4_4_ =
         (float)((ulonglong)param_4 >> 0x20) * (auVar15._4_4_ + auVar9._4_4_ + auVar20._4_4_);
    auVar26._8_4_ = in_XMM3_Dc * (auVar15._8_4_ + auVar9._8_4_ + auVar20._8_4_);
    auVar26._12_4_ = in_XMM3_Dd * (auVar15._12_4_ + auVar9._12_4_ + auVar20._12_4_);
    auVar12._4_12_ = in_register_00001244;
    auVar12._0_4_ = param_2;
    auVar20 = vcmpps_avx(auVar26,auVar12,1);
    auVar15._0_4_ = in_XMM4_Da + auVar26._0_4_;
    auVar15._4_4_ = in_XMM4_Db + auVar26._4_4_;
    auVar15._8_4_ = in_XMM4_Dc + auVar26._8_4_;
    auVar15._12_4_ = in_XMM4_Dd + auVar26._12_4_;
    auVar9 = vandnps_avx(auVar20,auVar26);
    auVar20 = vandps_avx(auVar20,auVar15);
    auVar14._0_4_ = auVar9._0_4_ + auVar20._0_4_;
    auVar14._4_4_ = auVar9._4_4_ + auVar20._4_4_;
    auVar14._8_4_ = auVar9._8_4_ + auVar20._8_4_;
    auVar14._12_4_ = auVar9._12_4_ + auVar20._12_4_;
    auVar12 = vpsrldq_avx(auVar21,2);
    auVar20 = vandnps_avx(auVar16,auVar14);
    auVar20 = vcvtps2dq_avx(auVar20);
    auVar9 = vpunpckldq_avx(auVar20,auVar2);
    auVar20 = vpunpckhdq_avx(auVar20,auVar2);
    auVar20 = vpackssdw_avx(auVar9,auVar20);
    auVar20 = vpackuswb_avx(auVar20,auVar20);
    auVar9 = vpsrldq_avx(auVar20,4);
    auVar15 = vpsrldq_avx(auVar20,2);
    *in_RDX = auVar20._0_2_;
    auVar20 = vpsrldq_avx(auVar20,6);
    auVar22 = vpsrldq_avx(auVar21,1);
    in_RDX[2] = auVar9._0_2_;
    auVar9 = vpsrldq_avx(auVar21,3);
    *(char *)(in_RDX + 3) = auVar12[0];
    in_RDX[4] = auVar15._0_2_;
    in_RDX[6] = auVar20._0_2_;
    *(char *)(in_RDX + 5) = auVar22[0];
    *(char *)(in_RDX + 7) = auVar9[0];
    in_RDX = in_RDX + 8;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    auVar10._0_4_ = (float)(byte)*param_1;
    auVar10._4_12_ = in_register_00001244;
    auVar25._0_4_ = (float)*(byte *)((longlong)param_1 + 1);
    auVar25._4_12_ = in_register_00001244;
    auVar9 = vminss_avx(auVar10,auVar25);
    auVar23._0_4_ = (float)*(byte *)((longlong)param_1 + 2);
    auVar23._4_12_ = in_register_00001244;
    auVar20 = vmaxss_avx(auVar10,auVar25);
    auVar9 = vminss_avx(auVar9,auVar23);
    auVar20 = vmaxss_avx(auVar20,auVar23);
    fVar4 = auVar20._0_4_;
    fVar3 = fVar4 - auVar9._0_4_;
    *(char *)(in_RDX + 1) = (char)(int)ROUND(fVar4);
    if ((fVar4 == 0.0) || ((fVar3 == 0.0 && (!NAN(fVar3))))) {
      *(undefined1 *)((longlong)in_RDX + 1) = in_R9B;
      *(undefined1 *)in_RDX = in_R9B;
    }
    else {
      auVar20 = vrcpss_avx(auVar20,auVar20);
      auVar9 = vrcpss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar13 = auVar9._0_4_;
      fVar5 = (fVar4 - auVar10._0_4_) * fVar13;
      fVar6 = (fVar4 - auVar25._0_4_) * fVar13;
      fVar13 = (fVar4 - auVar23._0_4_) * fVar13;
      *(char *)((longlong)in_RDX + 1) = (char)(int)ROUND(auVar20._0_4_ * fVar3 * in_XMM4_Da);
      fVar3 = param_2;
      if ((fVar4 == auVar10._0_4_) && (!NAN(fVar4) && !NAN(auVar10._0_4_))) {
        fVar3 = fVar13 - fVar6;
      }
      if ((fVar4 == auVar25._0_4_) && (!NAN(fVar4) && !NAN(auVar25._0_4_))) {
        fVar3 = (fVar5 - fVar13) + (float)in_XMM2_Qa;
      }
      if ((fVar4 == auVar23._0_4_) && (!NAN(fVar4) && !NAN(auVar23._0_4_))) {
        fVar3 = (fVar6 - fVar5) + (float)in_XMM0_Qa;
      }
      fVar3 = fVar3 * (float)param_4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + in_XMM4_Da;
      }
      *(char *)in_RDX = (char)(int)ROUND(fVar3);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    in_RDX = in_RDX + 2;
  }
  return;
}

