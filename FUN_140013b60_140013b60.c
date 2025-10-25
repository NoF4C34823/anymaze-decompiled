
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013b60(ulonglong *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  auVar21 = _DAT_143086720;
  auVar4 = _DAT_143086710;
  auVar3 = _DAT_143086700;
  fVar16 = (float)DAT_143086700;
  fVar25 = DAT_143086700._4_4_;
  fVar19 = DAT_143086700._8_4_;
  fVar20 = DAT_143086700._12_4_;
  fVar10 = (float)DAT_143086710;
  fVar12 = DAT_143086710._4_4_;
  fVar36 = DAT_143086710._8_4_;
  fVar13 = DAT_143086710._12_4_;
  fVar14 = (float)DAT_143086720;
  if (param_4 == 4) {
    iVar8 = 0;
    auVar6 = ZEXT812(0) << 0x20;
    fVar27 = _DAT_143086730;
    if (0 < (int)(param_3 & 0xfffffffc)) {
      do {
        iVar8 = iVar8 + 4;
        puVar2 = param_1 + 1;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *param_1;
        auVar18 = vpunpcklbw_avx(auVar17,(undefined1  [16])0x0);
        param_1 = param_1 + 2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar2;
        auVar15 = vpunpcklbw_avx(auVar11,(undefined1  [16])0x0);
        auVar39 = vpunpcklwd_avx(auVar18,auVar15);
        auVar18 = vpunpckhwd_avx(auVar18,auVar15);
        auVar15 = vpunpckldq_avx(auVar39,auVar18);
        auVar30 = vpunpcklwd_avx(auVar15,(undefined1  [16])0x0);
        auVar15 = vpunpckhwd_avx(auVar15,(undefined1  [16])0x0);
        auVar30 = vcvtdq2ps_avx(auVar30);
        auVar37 = vcvtdq2ps_avx(auVar15);
        auVar18 = vpunpckhdq_avx(auVar39,auVar18);
        auVar22 = ZEXT816(0) << 0x20;
        auVar18 = vpunpcklwd_avx(auVar18,(undefined1  [16])0x0);
        auVar39 = vcvtdq2ps_avx(auVar18);
        auVar15 = vminps_avx(auVar30,auVar37);
        auVar18 = vmaxps_avx(auVar30,auVar37);
        auVar15 = vminps_avx(auVar15,auVar39);
        auVar26 = vmaxps_avx(auVar18,auVar39);
        auVar18 = vcmpps_avx(auVar26,auVar22,0);
        auVar11 = vcvtps2dq_avx(auVar26);
        auVar23 = vsubps_avx(auVar26,auVar15);
        auVar15 = vcmpps_avx(auVar23,auVar22,0);
        auVar17 = vorps_avx(auVar18,auVar15);
        auVar18 = vandps_avx(auVar3,auVar17);
        auVar15 = vpackssdw_avx(auVar11,auVar11);
        auVar28._0_4_ = auVar26._0_4_ + auVar18._0_4_;
        auVar28._4_4_ = auVar26._4_4_ + auVar18._4_4_;
        auVar28._8_4_ = auVar26._8_4_ + auVar18._8_4_;
        auVar28._12_4_ = auVar26._12_4_ + auVar18._12_4_;
        auVar41._0_4_ = auVar18._0_4_ + auVar23._0_4_;
        auVar41._4_4_ = auVar18._4_4_ + auVar23._4_4_;
        auVar41._8_4_ = auVar18._8_4_ + auVar23._8_4_;
        auVar41._12_4_ = auVar18._12_4_ + auVar23._12_4_;
        auVar18 = vrcpps_avx(auVar28);
        auVar23 = vrcpps_avx(auVar41);
        auVar29 = vsubps_avx(auVar28,auVar37);
        auVar31._0_4_ = fVar16 * auVar18._0_4_ * auVar41._0_4_;
        auVar31._4_4_ = fVar25 * auVar18._4_4_ * auVar41._4_4_;
        auVar31._8_4_ = fVar19 * auVar18._8_4_ * auVar41._8_4_;
        auVar31._12_4_ = fVar20 * auVar18._12_4_ * auVar41._12_4_;
        auVar26 = vpackuswb_avx(auVar15,auVar15);
        auVar18 = vandnps_avx(auVar17,auVar31);
        auVar11 = vcvtps2dq_avx(auVar18);
        auVar18 = vcmpps_avx(auVar30,auVar28,0);
        auVar5 = vsubps_avx(auVar28,auVar30);
        auVar15 = vcmpps_avx(auVar37,auVar28,0);
        auVar33._0_4_ = auVar23._0_4_ * auVar29._0_4_;
        auVar33._4_4_ = auVar23._4_4_ * auVar29._4_4_;
        auVar33._8_4_ = auVar23._8_4_ * auVar29._8_4_;
        auVar33._12_4_ = auVar23._12_4_ * auVar29._12_4_;
        auVar30 = vsubps_avx(auVar5,auVar29);
        auVar15 = vandnps_avx(auVar18,auVar15);
        auVar37 = vsubps_avx(auVar28,auVar39);
        auVar29._4_12_ = _UNK_143086734;
        auVar29._0_4_ = _DAT_143086730;
        auVar29 = vfnmadd213ps_fma(auVar30,auVar23,auVar29);
        auVar30 = vcmpps_avx(auVar39,auVar28,0);
        auVar39 = vfmsub231ps_fma(auVar33,auVar37,auVar23);
        auVar30 = vandnps_avx(auVar15,auVar30);
        auVar18 = vandps_avx(auVar18,auVar39);
        auVar37 = vsubps_avx(auVar5,auVar37);
        auVar39 = vfmadd213ps_fma(auVar37,auVar23,auVar21);
        auVar37 = vandnps_avx(auVar15,auVar18);
        auVar18 = vandps_avx(auVar30,auVar29);
        auVar37 = vandnps_avx(auVar30,auVar37);
        auVar15 = vandps_avx(auVar15,auVar39);
        auVar15 = vandnps_avx(auVar30,auVar15);
        *(char *)((longlong)param_2 + 2) = auVar26[0];
        auVar29 = vpsrldq_avx(auVar26,1);
        auVar38._0_4_ = auVar37._0_4_ + auVar18._0_4_ + auVar15._0_4_;
        auVar38._4_4_ = auVar37._4_4_ + auVar18._4_4_ + auVar15._4_4_;
        auVar38._8_4_ = auVar37._8_4_ + auVar18._8_4_ + auVar15._8_4_;
        auVar38._12_4_ = auVar37._12_4_ + auVar18._12_4_ + auVar15._12_4_;
        auVar34._0_4_ = fVar10 * auVar38._0_4_;
        auVar34._4_4_ = fVar12 * auVar38._4_4_;
        auVar34._8_4_ = fVar36 * auVar38._8_4_;
        auVar34._12_4_ = fVar13 * auVar38._12_4_;
        auVar30 = vfmadd213ps_fma(auVar38,auVar4,auVar3);
        auVar18 = vcmpps_avx(auVar34,auVar22,1);
        auVar15 = vandnps_avx(auVar18,auVar34);
        auVar18 = vandps_avx(auVar18,auVar30);
        auVar23._0_4_ = auVar15._0_4_ + auVar18._0_4_;
        auVar23._4_4_ = auVar15._4_4_ + auVar18._4_4_;
        auVar23._8_4_ = auVar15._8_4_ + auVar18._8_4_;
        auVar23._12_4_ = auVar15._12_4_ + auVar18._12_4_;
        auVar18 = vandnps_avx(auVar17,auVar23);
        auVar18 = vcvtps2dq_avx(auVar18);
        auVar15 = vpunpckldq_avx(auVar18,auVar11);
        auVar18 = vpunpckhdq_avx(auVar18,auVar11);
        auVar18 = vpackssdw_avx(auVar15,auVar18);
        auVar18 = vpackuswb_avx(auVar18,auVar18);
        auVar15 = vpsrldq_avx(auVar18,4);
        auVar30 = vpsrldq_avx(auVar26,2);
        *(short *)param_2 = auVar18._0_2_;
        auVar37 = vpsrldq_avx(auVar18,2);
        auVar39 = vpsrldq_avx(auVar18,6);
        *(short *)(param_2 + 1) = auVar15._0_2_;
        auVar18 = vpsrldq_avx(auVar26,3);
        *(char *)((longlong)param_2 + 6) = auVar30[0];
        *(short *)(param_2 + 2) = auVar37._0_2_;
        *(short *)(param_2 + 3) = auVar39._0_2_;
        *(char *)((longlong)param_2 + 10) = auVar29[0];
        *(char *)((longlong)param_2 + 0xe) = auVar18[0];
        param_2 = param_2 + 4;
      } while (iVar8 < (int)(param_3 & 0xfffffffc));
      auVar6 = ZEXT812(0);
      fVar27 = _DAT_143086730;
    }
    for (; fVar12 = _DAT_143086730, iVar8 < (int)param_3; iVar8 = iVar8 + 1) {
      fVar36 = 0.0;
      auVar24._0_4_ = (float)(byte)*param_1;
      auVar24._4_12_ = auVar6;
      auVar35._0_4_ = (float)*(byte *)((longlong)param_1 + 1);
      auVar35._4_12_ = auVar6;
      auVar4 = vminss_avx(auVar24,auVar35);
      auVar32._0_4_ = (float)*(byte *)((longlong)param_1 + 2);
      auVar32._4_12_ = auVar6;
      auVar3 = vmaxss_avx(auVar24,auVar35);
      auVar4 = vminss_avx(auVar4,auVar32);
      auVar3 = vmaxss_avx(auVar3,auVar32);
      fVar25 = auVar3._0_4_;
      fVar13 = fVar25 - auVar4._0_4_;
      _DAT_143086730 = fVar27;
      *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar25);
      if ((fVar25 == 0.0) || ((fVar13 == 0.0 && (!NAN(fVar13))))) {
        *(undefined1 *)((longlong)param_2 + 1) = 0;
        *(undefined1 *)param_2 = 0;
      }
      else {
        auVar3 = vrcpss_avx(auVar3,auVar3);
        auVar4 = vrcpss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar27 = auVar4._0_4_;
        fVar19 = (fVar25 - auVar24._0_4_) * fVar27;
        fVar20 = (fVar25 - auVar35._0_4_) * fVar27;
        fVar27 = (fVar25 - auVar32._0_4_) * fVar27;
        *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar3._0_4_ * fVar13 * fVar16);
        if ((fVar25 == auVar24._0_4_) && (!NAN(fVar25) && !NAN(auVar24._0_4_))) {
          fVar36 = fVar27 - fVar20;
        }
        if ((fVar25 == auVar35._0_4_) && (!NAN(fVar25) && !NAN(auVar35._0_4_))) {
          fVar36 = (fVar19 - fVar27) + fVar14;
        }
        if ((fVar25 == auVar32._0_4_) && (!NAN(fVar25) && !NAN(auVar32._0_4_))) {
          fVar36 = (fVar20 - fVar19) + fVar12;
        }
        fVar36 = fVar36 * fVar10;
        if (fVar36 < 0.0) {
          fVar36 = fVar36 + fVar16;
        }
        *(char *)param_2 = (char)(int)ROUND(fVar36);
      }
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      param_2 = param_2 + 1;
      fVar27 = _DAT_143086730;
      _DAT_143086730 = fVar12;
    }
    _DAT_143086730 = fVar27;
    return;
  }
  iVar8 = 0;
  auVar6 = ZEXT812(0) << 0x20;
  fVar27 = _DAT_143086730;
  if (0 < (int)(param_3 & 0xfffffffc)) {
    do {
      uVar7 = *param_1;
      iVar8 = iVar8 + 4;
      puVar1 = (uint *)((longlong)param_1 + 4);
      puVar2 = param_1 + 1;
      param_1 = (ulonglong *)((longlong)param_1 + 0xc);
      auVar18 = vpunpcklbw_avx(ZEXT416((uint)uVar7),(undefined1  [16])0x0);
      auVar18 = vpunpcklwd_avx(auVar18,(undefined1  [16])0x0);
      auVar15 = vpunpcklbw_avx(ZEXT416(*puVar1),(undefined1  [16])0x0);
      auVar30 = vpunpcklbw_avx(ZEXT416((uint)*puVar2),(undefined1  [16])0x0);
      auVar18 = vpshufd_avx(auVar18,0xc9);
      auVar37 = vpunpcklwd_avx(auVar15,(undefined1  [16])0x0);
      auVar15 = vpunpcklwd_avx(auVar30,(undefined1  [16])0x0);
      auVar15 = vpshufd_avx(auVar15,0x9c);
      auVar30 = vpunpckldq_avx(auVar18,auVar37);
      auVar39 = vpshufd_avx(auVar30,0x4e);
      auVar30 = vpunpckhdq_avx(auVar37,auVar15);
      auVar18 = vpshufd_avx(auVar18,0x4e);
      auVar28 = ZEXT816(0) << 0x20;
      auVar37 = vpunpckhqdq_avx(auVar39,auVar30);
      auVar18 = vpunpcklqdq_avx(auVar18,auVar30);
      auVar37 = vcvtdq2ps_avx(auVar37);
      auVar30 = vcvtdq2ps_avx(auVar18);
      auVar18 = vpunpcklqdq_avx(auVar39,auVar15);
      auVar39 = vcvtdq2ps_avx(auVar18);
      auVar15 = vminps_avx(auVar30,auVar37);
      auVar18 = vmaxps_avx(auVar30,auVar37);
      auVar15 = vminps_avx(auVar15,auVar39);
      auVar26 = vmaxps_avx(auVar18,auVar39);
      auVar18 = vcmpps_avx(auVar26,auVar28,0);
      auVar23 = vsubps_avx(auVar26,auVar15);
      auVar11 = vcvtps2dq_avx(auVar26);
      auVar15 = vcmpps_avx(auVar23,auVar28,0);
      auVar17 = vorps_avx(auVar18,auVar15);
      auVar18 = vandps_avx(auVar3,auVar17);
      auVar9._0_4_ = auVar26._0_4_ + auVar18._0_4_;
      auVar9._4_4_ = auVar26._4_4_ + auVar18._4_4_;
      auVar9._8_4_ = auVar26._8_4_ + auVar18._8_4_;
      auVar9._12_4_ = auVar26._12_4_ + auVar18._12_4_;
      auVar26._0_4_ = auVar18._0_4_ + auVar23._0_4_;
      auVar26._4_4_ = auVar18._4_4_ + auVar23._4_4_;
      auVar26._8_4_ = auVar18._8_4_ + auVar23._8_4_;
      auVar26._12_4_ = auVar18._12_4_ + auVar23._12_4_;
      auVar18 = vrcpps_avx(auVar9);
      auVar29 = vsubps_avx(auVar9,auVar30);
      auVar30 = vcmpps_avx(auVar30,auVar9,0);
      auVar23 = vrcpps_avx(auVar26);
      auVar22._0_4_ = fVar16 * auVar18._0_4_ * auVar26._0_4_;
      auVar22._4_4_ = fVar25 * auVar18._4_4_ * auVar26._4_4_;
      auVar22._8_4_ = fVar19 * auVar18._8_4_ * auVar26._8_4_;
      auVar22._12_4_ = fVar20 * auVar18._12_4_ * auVar26._12_4_;
      auVar18 = vandnps_avx(auVar17,auVar22);
      auVar26 = vcvtps2dq_avx(auVar18);
      auVar15 = vsubps_avx(auVar9,auVar37);
      auVar18 = vcmpps_avx(auVar37,auVar9,0);
      auVar40._0_4_ = auVar23._0_4_ * auVar15._0_4_;
      auVar40._4_4_ = auVar23._4_4_ * auVar15._4_4_;
      auVar40._8_4_ = auVar23._8_4_ * auVar15._8_4_;
      auVar40._12_4_ = auVar23._12_4_ * auVar15._12_4_;
      auVar37 = vsubps_avx(auVar29,auVar15);
      auVar15 = vandnps_avx(auVar30,auVar18);
      auVar18 = vsubps_avx(auVar9,auVar39);
      auVar5._4_12_ = _UNK_143086734;
      auVar5._0_4_ = _DAT_143086730;
      auVar22 = vfnmadd213ps_fma(auVar37,auVar23,auVar5);
      auVar37 = vcmpps_avx(auVar39,auVar9,0);
      auVar5 = vfmsub231ps_fma(auVar40,auVar18,auVar23);
      auVar18 = vsubps_avx(auVar29,auVar18);
      auVar39 = vfmadd213ps_fma(auVar18,auVar23,auVar21);
      auVar18 = vandps_avx(auVar30,auVar5);
      auVar30 = vandnps_avx(auVar15,auVar37);
      auVar37 = vandnps_avx(auVar15,auVar18);
      auVar18 = vandps_avx(auVar30,auVar22);
      auVar37 = vandnps_avx(auVar30,auVar37);
      auVar15 = vandps_avx(auVar15,auVar39);
      auVar15 = vandnps_avx(auVar30,auVar15);
      auVar30._0_4_ = auVar37._0_4_ + auVar18._0_4_ + auVar15._0_4_;
      auVar30._4_4_ = auVar37._4_4_ + auVar18._4_4_ + auVar15._4_4_;
      auVar30._8_4_ = auVar37._8_4_ + auVar18._8_4_ + auVar15._8_4_;
      auVar30._12_4_ = auVar37._12_4_ + auVar18._12_4_ + auVar15._12_4_;
      auVar15._0_4_ = fVar10 * auVar30._0_4_;
      auVar15._4_4_ = fVar12 * auVar30._4_4_;
      auVar15._8_4_ = fVar36 * auVar30._8_4_;
      auVar15._12_4_ = fVar13 * auVar30._12_4_;
      auVar30 = vfmadd213ps_fma(auVar30,auVar4,auVar3);
      auVar18 = vcmpps_avx(auVar15,auVar28,1);
      auVar15 = vandnps_avx(auVar18,auVar15);
      auVar18 = vandps_avx(auVar18,auVar30);
      auVar37._0_4_ = auVar15._0_4_ + auVar18._0_4_;
      auVar37._4_4_ = auVar15._4_4_ + auVar18._4_4_;
      auVar37._8_4_ = auVar15._8_4_ + auVar18._8_4_;
      auVar37._12_4_ = auVar15._12_4_ + auVar18._12_4_;
      auVar18 = vandnps_avx(auVar17,auVar37);
      auVar18 = vcvtps2dq_avx(auVar18);
      auVar15 = vpunpckhdq_avx(auVar18,auVar26);
      auVar18 = vpunpckldq_avx(auVar18,auVar26);
      auVar18 = vpand_avx(auVar18,_DAT_143086740);
      auVar37 = vpunpckldq_avx(auVar26,auVar11);
      auVar30 = vpunpckhqdq_avx(auVar15,auVar11);
      auVar39 = vpslldq_avx(auVar11,0xc);
      auVar37 = vpsrldq_avx(auVar37,8);
      auVar18 = vpor_avx(auVar18,auVar39);
      auVar15 = vpunpcklqdq_avx(auVar37,auVar15);
      auVar18 = vpshufd_avx(auVar18,0xb4);
      auVar18 = vpackssdw_avx(auVar18,auVar15);
      auVar30 = vpshufd_avx(auVar30,0xd2);
      auVar15 = vpackuswb_avx(auVar18,auVar18);
      auVar18 = vpackssdw_avx(auVar30,auVar30);
      auVar18 = vpackuswb_avx(auVar18,auVar18);
      auVar30 = vpsrldq_avx(auVar15,4);
      param_2[2] = auVar18._0_4_;
      *param_2 = auVar15._0_4_;
      param_2[1] = auVar30._0_4_;
      param_2 = param_2 + 3;
    } while (iVar8 < (int)(param_3 & 0xfffffffc));
    auVar6 = ZEXT812(0);
    fVar27 = _DAT_143086730;
  }
  for (; fVar12 = _DAT_143086730, iVar8 < (int)param_3; iVar8 = iVar8 + 1) {
    fVar36 = 0.0;
    auVar21._0_4_ = (float)(byte)*param_1;
    auVar21._4_12_ = auVar6;
    auVar39._0_4_ = (float)*(byte *)((longlong)param_1 + 1);
    auVar39._4_12_ = auVar6;
    auVar4 = vminss_avx(auVar21,auVar39);
    auVar18._0_4_ = (float)*(byte *)((longlong)param_1 + 2);
    auVar18._4_12_ = auVar6;
    auVar3 = vmaxss_avx(auVar21,auVar39);
    auVar4 = vminss_avx(auVar4,auVar18);
    auVar3 = vmaxss_avx(auVar3,auVar18);
    fVar25 = auVar3._0_4_;
    fVar13 = fVar25 - auVar4._0_4_;
    _DAT_143086730 = fVar27;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar25);
    if ((fVar25 == 0.0) || ((fVar13 == 0.0 && (!NAN(fVar13))))) {
      *(undefined1 *)((longlong)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0;
    }
    else {
      auVar3 = vrcpss_avx(auVar3,auVar3);
      auVar4 = vrcpss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar27 = auVar4._0_4_;
      fVar19 = (fVar25 - auVar21._0_4_) * fVar27;
      fVar20 = (fVar25 - auVar39._0_4_) * fVar27;
      fVar27 = (fVar25 - auVar18._0_4_) * fVar27;
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar3._0_4_ * fVar13 * fVar16);
      if ((fVar25 == auVar21._0_4_) && (!NAN(fVar25) && !NAN(auVar21._0_4_))) {
        fVar36 = fVar27 - fVar20;
      }
      if ((fVar25 == auVar39._0_4_) && (!NAN(fVar25) && !NAN(auVar39._0_4_))) {
        fVar36 = (fVar19 - fVar27) + fVar14;
      }
      if ((fVar25 == auVar18._0_4_) && (!NAN(fVar25) && !NAN(auVar18._0_4_))) {
        fVar36 = (fVar20 - fVar19) + fVar12;
      }
      fVar36 = fVar36 * fVar10;
      if (fVar36 < 0.0) {
        fVar36 = fVar36 + fVar16;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar36);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
    fVar27 = _DAT_143086730;
    _DAT_143086730 = fVar12;
  }
  _DAT_143086730 = fVar27;
  return;
}

