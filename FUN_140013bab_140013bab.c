
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013bab(uint *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  int in_EAX;
  undefined1 in_R9B;
  int in_R10D;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  do {
    uVar3 = *param_1;
    in_R10D = in_R10D + 4;
    puVar1 = param_1 + 1;
    puVar2 = param_1 + 2;
    param_1 = param_1 + 3;
    auVar8 = vpunpcklbw_avx(ZEXT416(uVar3),(undefined1  [16])0x0);
    auVar8 = vpunpcklwd_avx(auVar8,(undefined1  [16])0x0);
    auVar9 = vpunpcklbw_avx(ZEXT416(*puVar1),(undefined1  [16])0x0);
    auVar22 = vpunpcklbw_avx(ZEXT416(*puVar2),(undefined1  [16])0x0);
    auVar8 = vpshufd_avx(auVar8,0xc9);
    auVar26 = vpunpcklwd_avx(auVar9,(undefined1  [16])0x0);
    auVar9 = vpunpcklwd_avx(auVar22,(undefined1  [16])0x0);
    auVar9 = vpshufd_avx(auVar9,0x9c);
    auVar22 = vpunpckldq_avx(auVar8,auVar26);
    auVar27 = vpshufd_avx(auVar22,0x4e);
    auVar22 = vpunpckhdq_avx(auVar26,auVar9);
    auVar8 = vpshufd_avx(auVar8,0x4e);
    auVar21 = ZEXT816(0) << 0x20;
    auVar26 = vpunpckhqdq_avx(auVar27,auVar22);
    auVar8 = vpunpcklqdq_avx(auVar8,auVar22);
    auVar26 = vcvtdq2ps_avx(auVar26);
    auVar22 = vcvtdq2ps_avx(auVar8);
    auVar8 = vpunpcklqdq_avx(auVar27,auVar9);
    auVar27 = vcvtdq2ps_avx(auVar8);
    auVar9 = vminps_avx(auVar22,auVar26);
    auVar8 = vmaxps_avx(auVar22,auVar26);
    auVar9 = vminps_avx(auVar9,auVar27);
    auVar18 = vmaxps_avx(auVar8,auVar27);
    auVar8 = vcmpps_avx(auVar18,auVar21,0);
    auVar14 = vsubps_avx(auVar18,auVar9);
    auVar4 = vcvtps2dq_avx(auVar18);
    auVar9 = vcmpps_avx(auVar14,auVar21,0);
    auVar7 = vorps_avx(auVar8,auVar9);
    auVar9._4_4_ = in_XMM5_Db;
    auVar9._0_4_ = in_XMM5_Da;
    auVar9._8_4_ = in_XMM5_Dc;
    auVar9._12_4_ = in_XMM5_Dd;
    auVar8 = vandps_avx(auVar9,auVar7);
    auVar13._0_4_ = auVar18._0_4_ + auVar8._0_4_;
    auVar13._4_4_ = auVar18._4_4_ + auVar8._4_4_;
    auVar13._8_4_ = auVar18._8_4_ + auVar8._8_4_;
    auVar13._12_4_ = auVar18._12_4_ + auVar8._12_4_;
    auVar18._0_4_ = auVar8._0_4_ + auVar14._0_4_;
    auVar18._4_4_ = auVar8._4_4_ + auVar14._4_4_;
    auVar18._8_4_ = auVar8._8_4_ + auVar14._8_4_;
    auVar18._12_4_ = auVar8._12_4_ + auVar14._12_4_;
    auVar8 = vrcpps_avx(auVar13);
    auVar16 = vsubps_avx(auVar13,auVar22);
    auVar22 = vcmpps_avx(auVar22,auVar13,0);
    auVar14 = vrcpps_avx(auVar18);
    auVar25._0_4_ = in_XMM5_Da * auVar8._0_4_ * auVar18._0_4_;
    auVar25._4_4_ = in_XMM5_Db * auVar8._4_4_ * auVar18._4_4_;
    auVar25._8_4_ = in_XMM5_Dc * auVar8._8_4_ * auVar18._8_4_;
    auVar25._12_4_ = in_XMM5_Dd * auVar8._12_4_ * auVar18._12_4_;
    auVar8 = vandnps_avx(auVar7,auVar25);
    auVar18 = vcvtps2dq_avx(auVar8);
    auVar9 = vsubps_avx(auVar13,auVar26);
    auVar8 = vcmpps_avx(auVar26,auVar13,0);
    auVar28._0_4_ = auVar14._0_4_ * auVar9._0_4_;
    auVar28._4_4_ = auVar14._4_4_ * auVar9._4_4_;
    auVar28._8_4_ = auVar14._8_4_ * auVar9._8_4_;
    auVar28._12_4_ = auVar14._12_4_ * auVar9._12_4_;
    auVar26 = vsubps_avx(auVar16,auVar9);
    auVar9 = vandnps_avx(auVar22,auVar8);
    auVar8 = vsubps_avx(auVar13,auVar27);
    auVar11._4_12_ = _UNK_143086734;
    auVar11._0_4_ = _DAT_143086730;
    auVar25 = vfnmadd213ps_fma(auVar26,auVar14,auVar11);
    auVar26 = vcmpps_avx(auVar27,auVar13,0);
    auVar11 = vfmsub231ps_fma(auVar28,auVar8,auVar14);
    auVar8 = vsubps_avx(auVar16,auVar8);
    auVar27._4_12_ = in_register_00001304;
    auVar27._0_4_ = in_XMM4_Da;
    auVar27 = vfmadd213ps_fma(auVar8,auVar14,auVar27);
    auVar8 = vandps_avx(auVar22,auVar11);
    auVar22 = vandnps_avx(auVar9,auVar26);
    auVar26 = vandnps_avx(auVar9,auVar8);
    auVar8 = vandps_avx(auVar22,auVar25);
    auVar26 = vandnps_avx(auVar22,auVar26);
    auVar9 = vandps_avx(auVar9,auVar27);
    auVar9 = vandnps_avx(auVar22,auVar9);
    auVar14._0_4_ = auVar26._0_4_ + auVar8._0_4_ + auVar9._0_4_;
    auVar14._4_4_ = auVar26._4_4_ + auVar8._4_4_ + auVar9._4_4_;
    auVar14._8_4_ = auVar26._8_4_ + auVar8._8_4_ + auVar9._8_4_;
    auVar14._12_4_ = auVar26._12_4_ + auVar8._12_4_ + auVar9._12_4_;
    auVar26._0_4_ = (float)param_4 * auVar14._0_4_;
    auVar26._4_4_ = (float)((ulonglong)param_4 >> 0x20) * auVar14._4_4_;
    auVar26._8_4_ = in_XMM3_Dc * auVar14._8_4_;
    auVar26._12_4_ = in_XMM3_Dd * auVar14._12_4_;
    auVar8._8_4_ = in_XMM3_Dc;
    auVar8._0_8_ = param_4;
    auVar8._12_4_ = in_XMM3_Dd;
    auVar22._4_4_ = in_XMM5_Db;
    auVar22._0_4_ = in_XMM5_Da;
    auVar22._8_4_ = in_XMM5_Dc;
    auVar22._12_4_ = in_XMM5_Dd;
    auVar22 = vfmadd213ps_fma(auVar14,auVar8,auVar22);
    auVar8 = vcmpps_avx(auVar26,auVar21,1);
    auVar9 = vandnps_avx(auVar8,auVar26);
    auVar8 = vandps_avx(auVar8,auVar22);
    auVar16._0_4_ = auVar9._0_4_ + auVar8._0_4_;
    auVar16._4_4_ = auVar9._4_4_ + auVar8._4_4_;
    auVar16._8_4_ = auVar9._8_4_ + auVar8._8_4_;
    auVar16._12_4_ = auVar9._12_4_ + auVar8._12_4_;
    auVar8 = vandnps_avx(auVar7,auVar16);
    auVar8 = vcvtps2dq_avx(auVar8);
    auVar9 = vpunpckhdq_avx(auVar8,auVar18);
    auVar8 = vpunpckldq_avx(auVar8,auVar18);
    auVar8 = vpand_avx(auVar8,_DAT_143086740);
    auVar26 = vpunpckldq_avx(auVar18,auVar4);
    auVar22 = vpunpckhqdq_avx(auVar9,auVar4);
    auVar27 = vpslldq_avx(auVar4,0xc);
    auVar26 = vpsrldq_avx(auVar26,8);
    auVar8 = vpor_avx(auVar8,auVar27);
    auVar9 = vpunpcklqdq_avx(auVar26,auVar9);
    auVar8 = vpshufd_avx(auVar8,0xb4);
    auVar8 = vpackssdw_avx(auVar8,auVar9);
    auVar22 = vpshufd_avx(auVar22,0xd2);
    auVar9 = vpackuswb_avx(auVar8,auVar8);
    auVar8 = vpackssdw_avx(auVar22,auVar22);
    auVar8 = vpackuswb_avx(auVar8,auVar8);
    auVar22 = vpsrldq_avx(auVar9,4);
    param_2[2] = auVar8._0_4_;
    *param_2 = auVar9._0_4_;
    param_2[1] = auVar22._0_4_;
    fVar12 = _DAT_143086730;
    param_2 = param_2 + 3;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar24 = 0.0;
    fVar15 = (float)(byte)*param_1;
    fVar23 = (float)*(byte *)((longlong)param_1 + 1);
    auVar9 = vminss_avx(ZEXT416((uint)fVar15),ZEXT416((uint)fVar23));
    fVar20 = (float)*(byte *)((longlong)param_1 + 2);
    auVar8 = vmaxss_avx(ZEXT416((uint)fVar15),ZEXT416((uint)fVar23));
    auVar9 = vminss_avx(auVar9,ZEXT416((uint)fVar20));
    auVar8 = vmaxss_avx(auVar8,ZEXT416((uint)fVar20));
    fVar17 = auVar8._0_4_;
    fVar10 = fVar17 - auVar9._0_4_;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar17);
    if ((fVar17 == 0.0) || ((fVar10 == 0.0 && (!NAN(fVar10))))) {
      *(undefined1 *)((longlong)param_2 + 1) = in_R9B;
      *(undefined1 *)param_2 = in_R9B;
    }
    else {
      auVar8 = vrcpss_avx(auVar8,auVar8);
      auVar9 = vrcpss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar19 = auVar9._0_4_;
      fVar5 = (fVar17 - fVar15) * fVar19;
      fVar6 = (fVar17 - fVar23) * fVar19;
      fVar19 = (fVar17 - fVar20) * fVar19;
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar8._0_4_ * fVar10 * in_XMM5_Da);
      if ((fVar17 == fVar15) && (!NAN(fVar17) && !NAN(fVar15))) {
        fVar24 = fVar19 - fVar6;
      }
      if ((fVar17 == fVar23) && (!NAN(fVar17) && !NAN(fVar23))) {
        fVar24 = (fVar5 - fVar19) + in_XMM4_Da;
      }
      if ((fVar17 == fVar20) && (!NAN(fVar17) && !NAN(fVar20))) {
        fVar24 = (fVar6 - fVar5) + fVar12;
      }
      fVar24 = fVar24 * (float)param_4;
      if (fVar24 < 0.0) {
        fVar24 = fVar24 + in_XMM5_Da;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar24);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

