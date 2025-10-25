
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400132e0(ulonglong *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  fVar13 = _UNK_1430866ec;
  fVar12 = _UNK_1430866e8;
  fVar11 = _UNK_1430866e4;
  fVar10 = _DAT_1430866e0;
  fVar36 = _UNK_1430866dc;
  fVar5 = _UNK_1430866d8;
  fVar4 = _UNK_1430866d4;
  fVar9 = _DAT_1430866d0;
  fVar32 = _UNK_1430866cc;
  fVar6 = _UNK_1430866c8;
  fVar51 = _UNK_1430866c4;
  fVar8 = _DAT_1430866c0;
  auVar3 = _DAT_1430866b0;
  fVar16 = (float)DAT_1430866b0;
  fVar17 = DAT_1430866b0._4_4_;
  fVar18 = DAT_1430866b0._8_4_;
  fVar19 = DAT_1430866b0._12_4_;
  if (param_4 == 4) {
    iVar14 = 0;
    auVar7 = ZEXT812(0) << 0x20;
    auVar15 = ZEXT816(0) << 0x40;
    if (0 < (int)(param_3 & 0xfffffffc)) {
      do {
        iVar14 = iVar14 + 4;
        puVar2 = param_1 + 1;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = *param_1;
        auVar42 = vpunpcklbw_avx(auVar44,(undefined1  [16])0x0);
        param_1 = param_1 + 2;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = *puVar2;
        auVar52 = vpunpcklbw_avx(auVar38,(undefined1  [16])0x0);
        auVar43 = vpunpcklwd_avx(auVar42,auVar52);
        auVar42 = vpunpckhwd_avx(auVar42,auVar52);
        auVar52 = vpunpckhdq_avx(auVar43,auVar42);
        auVar42 = vpunpckldq_avx(auVar43,auVar42);
        auVar52 = vpunpcklwd_avx(auVar52,(undefined1  [16])0x0);
        auVar43 = vpunpcklwd_avx(auVar42,(undefined1  [16])0x0);
        auVar42 = vpunpckhwd_avx(auVar42,(undefined1  [16])0x0);
        auVar43 = vcvtdq2ps_avx(auVar43);
        auVar47 = vcvtdq2ps_avx(auVar42);
        auVar45 = vcvtdq2ps_avx(auVar52);
        auVar52 = vminps_avx(auVar43,auVar47);
        auVar42 = vmaxps_avx(auVar43,auVar47);
        auVar52 = vminps_avx(auVar52,auVar45);
        auVar48 = vmaxps_avx(auVar42,auVar45);
        auVar33 = vcvtps2dq_avx(auVar48);
        auVar42 = vcmpps_avx(auVar48,auVar15,0);
        auVar20 = vsubps_avx(auVar48,auVar52);
        auVar52 = vcmpps_avx(auVar20,auVar15,0);
        auVar33 = vpackssdw_avx(auVar33,auVar33);
        auVar23 = vorps_avx(auVar42,auVar52);
        auVar53 = vpackuswb_avx(auVar33,auVar33);
        auVar42 = vandps_avx(auVar3,auVar23);
        auVar39._0_4_ = auVar48._0_4_ + auVar42._0_4_;
        auVar39._4_4_ = auVar48._4_4_ + auVar42._4_4_;
        auVar39._8_4_ = auVar48._8_4_ + auVar42._8_4_;
        auVar39._12_4_ = auVar48._12_4_ + auVar42._12_4_;
        auVar29._0_4_ = auVar42._0_4_ + auVar20._0_4_;
        auVar29._4_4_ = auVar42._4_4_ + auVar20._4_4_;
        auVar29._8_4_ = auVar42._8_4_ + auVar20._8_4_;
        auVar29._12_4_ = auVar42._12_4_ + auVar20._12_4_;
        auVar42 = vrcpps_avx(auVar39);
        auVar52 = vrcpps_avx(auVar29);
        auVar48 = vsubps_avx(auVar39,auVar43);
        auVar49._0_4_ = fVar16 * auVar42._0_4_ * auVar29._0_4_;
        auVar49._4_4_ = fVar17 * auVar42._4_4_ * auVar29._4_4_;
        auVar49._8_4_ = fVar18 * auVar42._8_4_ * auVar29._8_4_;
        auVar49._12_4_ = fVar19 * auVar42._12_4_ * auVar29._12_4_;
        auVar42 = vandnps_avx(auVar23,auVar49);
        auVar33 = vcvtps2dq_avx(auVar42);
        fVar21 = auVar52._0_4_;
        auVar40._0_4_ = fVar21 * auVar48._0_4_;
        fVar26 = auVar52._4_4_;
        auVar40._4_4_ = fVar26 * auVar48._4_4_;
        fVar27 = auVar52._8_4_;
        auVar40._8_4_ = fVar27 * auVar48._8_4_;
        fVar28 = auVar52._12_4_;
        auVar40._12_4_ = fVar28 * auVar48._12_4_;
        auVar42 = vcmpps_avx(auVar43,auVar39,0);
        auVar43 = vsubps_avx(auVar39,auVar47);
        auVar52 = vcmpps_avx(auVar47,auVar39,0);
        auVar30._0_4_ = fVar21 * auVar43._0_4_;
        auVar30._4_4_ = fVar26 * auVar43._4_4_;
        auVar30._8_4_ = fVar27 * auVar43._8_4_;
        auVar30._12_4_ = fVar28 * auVar43._12_4_;
        auVar47 = vsubps_avx(auVar39,auVar45);
        auVar43 = vcmpps_avx(auVar45,auVar39,0);
        auVar24._0_4_ = fVar21 * auVar47._0_4_;
        auVar24._4_4_ = fVar26 * auVar47._4_4_;
        auVar24._8_4_ = fVar27 * auVar47._8_4_;
        auVar24._12_4_ = fVar28 * auVar47._12_4_;
        auVar52 = vandnps_avx(auVar42,auVar52);
        auVar47 = vsubps_avx(auVar24,auVar30);
        auVar45 = vsubps_avx(auVar40,auVar24);
        auVar48 = vsubps_avx(auVar30,auVar40);
        auVar41._0_4_ = fVar9 + auVar45._0_4_;
        auVar41._4_4_ = fVar4 + auVar45._4_4_;
        auVar41._8_4_ = fVar5 + auVar45._8_4_;
        auVar41._12_4_ = fVar36 + auVar45._12_4_;
        auVar42 = vandps_avx(auVar42,auVar47);
        auVar43 = vandnps_avx(auVar52,auVar43);
        auVar47 = vandnps_avx(auVar52,auVar42);
        auVar42 = vandps_avx(auVar52,auVar41);
        *(char *)((longlong)param_2 + 2) = auVar53[0];
        auVar35._0_4_ = fVar10 + auVar48._0_4_;
        auVar35._4_4_ = fVar11 + auVar48._4_4_;
        auVar35._8_4_ = fVar12 + auVar48._8_4_;
        auVar35._12_4_ = fVar13 + auVar48._12_4_;
        auVar52 = vandps_avx(auVar43,auVar35);
        auVar47 = vandnps_avx(auVar43,auVar47);
        auVar42 = vandnps_avx(auVar43,auVar42);
        auVar54._0_4_ = fVar8 * (auVar47._0_4_ + auVar52._0_4_ + auVar42._0_4_);
        auVar54._4_4_ = fVar51 * (auVar47._4_4_ + auVar52._4_4_ + auVar42._4_4_);
        auVar54._8_4_ = fVar6 * (auVar47._8_4_ + auVar52._8_4_ + auVar42._8_4_);
        auVar54._12_4_ = fVar32 * (auVar47._12_4_ + auVar52._12_4_ + auVar42._12_4_);
        auVar42 = vcmpps_avx(auVar54,auVar15,1);
        auVar25._0_4_ = fVar16 + auVar54._0_4_;
        auVar25._4_4_ = fVar17 + auVar54._4_4_;
        auVar25._8_4_ = fVar18 + auVar54._8_4_;
        auVar25._12_4_ = fVar19 + auVar54._12_4_;
        auVar52 = vandnps_avx(auVar42,auVar54);
        auVar42 = vandps_avx(auVar42,auVar25);
        auVar37._0_4_ = auVar52._0_4_ + auVar42._0_4_;
        auVar37._4_4_ = auVar52._4_4_ + auVar42._4_4_;
        auVar37._8_4_ = auVar52._8_4_ + auVar42._8_4_;
        auVar37._12_4_ = auVar52._12_4_ + auVar42._12_4_;
        auVar43 = vpsrldq_avx(auVar53,2);
        auVar42 = vandnps_avx(auVar23,auVar37);
        auVar42 = vcvtps2dq_avx(auVar42);
        auVar52 = vpunpckldq_avx(auVar42,auVar33);
        auVar42 = vpunpckhdq_avx(auVar42,auVar33);
        auVar42 = vpackssdw_avx(auVar52,auVar42);
        auVar42 = vpackuswb_avx(auVar42,auVar42);
        auVar52 = vpsrldq_avx(auVar42,4);
        auVar47 = vpsrldq_avx(auVar42,2);
        *(short *)param_2 = auVar42._0_2_;
        auVar42 = vpsrldq_avx(auVar42,6);
        auVar45 = vpsrldq_avx(auVar53,1);
        *(short *)(param_2 + 1) = auVar52._0_2_;
        auVar52 = vpsrldq_avx(auVar53,3);
        *(char *)((longlong)param_2 + 6) = auVar43[0];
        *(short *)(param_2 + 2) = auVar47._0_2_;
        *(short *)(param_2 + 3) = auVar42._0_2_;
        *(char *)((longlong)param_2 + 10) = auVar45[0];
        *(char *)((longlong)param_2 + 0xe) = auVar52[0];
        param_2 = param_2 + 4;
      } while (iVar14 < (int)(param_3 & 0xfffffffc));
    }
    for (; iVar14 < (int)param_3; iVar14 = iVar14 + 1) {
      fVar51 = 0.0;
      auVar31._0_4_ = (float)(byte)*param_1;
      auVar31._4_12_ = auVar7;
      auVar50._0_4_ = (float)*(byte *)((longlong)param_1 + 1);
      auVar50._4_12_ = auVar7;
      auVar15 = vminss_avx(auVar31,auVar50);
      auVar46._0_4_ = (float)*(byte *)((longlong)param_1 + 2);
      auVar46._4_12_ = auVar7;
      auVar3 = vmaxss_avx(auVar31,auVar50);
      auVar15 = vminss_avx(auVar15,auVar46);
      auVar3 = vmaxss_avx(auVar3,auVar46);
      fVar32 = auVar3._0_4_;
      fVar6 = fVar32 - auVar15._0_4_;
      *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar32);
      if ((fVar32 == 0.0) || ((fVar6 == 0.0 && (!NAN(fVar6))))) {
        *(undefined1 *)((longlong)param_2 + 1) = 0;
        *(undefined1 *)param_2 = 0;
      }
      else {
        auVar3 = vrcpss_avx(auVar3,auVar3);
        auVar15 = vrcpss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar36 = auVar15._0_4_;
        fVar4 = (fVar32 - auVar31._0_4_) * fVar36;
        fVar5 = (fVar32 - auVar50._0_4_) * fVar36;
        fVar36 = (fVar32 - auVar46._0_4_) * fVar36;
        *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar3._0_4_ * fVar6 * fVar16);
        if ((fVar32 == auVar31._0_4_) && (!NAN(fVar32) && !NAN(auVar31._0_4_))) {
          fVar51 = fVar36 - fVar5;
        }
        if ((fVar32 == auVar50._0_4_) && (!NAN(fVar32) && !NAN(auVar50._0_4_))) {
          fVar51 = (fVar4 - fVar36) + fVar9;
        }
        if ((fVar32 == auVar46._0_4_) && (!NAN(fVar32) && !NAN(auVar46._0_4_))) {
          fVar51 = (fVar5 - fVar4) + fVar10;
        }
        fVar51 = fVar51 * fVar8;
        if (fVar51 < 0.0) {
          fVar51 = fVar51 + fVar16;
        }
        *(char *)param_2 = (char)(int)ROUND(fVar51);
      }
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      param_2 = param_2 + 1;
    }
    return;
  }
  iVar14 = 0;
  auVar7 = ZEXT812(0) << 0x20;
  if (0 < (int)(param_3 & 0xfffffffc)) {
    do {
      iVar14 = iVar14 + 4;
      puVar1 = (uint *)((longlong)param_1 + 4);
      auVar15 = vpunpcklbw_avx(ZEXT416((uint)*param_1),(undefined1  [16])0x0);
      puVar2 = param_1 + 1;
      param_1 = (ulonglong *)((longlong)param_1 + 0xc);
      auVar15 = vpunpcklwd_avx(auVar15,(undefined1  [16])0x0);
      auVar42 = vpunpcklbw_avx(ZEXT416(*puVar1),(undefined1  [16])0x0);
      auVar52 = vpunpcklbw_avx(ZEXT416((uint)*puVar2),(undefined1  [16])0x0);
      auVar15 = vpshufd_avx(auVar15,0xc9);
      auVar43 = vpunpcklwd_avx(auVar42,(undefined1  [16])0x0);
      auVar42 = vpunpcklwd_avx(auVar52,(undefined1  [16])0x0);
      auVar42 = vpshufd_avx(auVar42,0x9c);
      auVar52 = vpunpckldq_avx(auVar15,auVar43);
      auVar52 = vpshufd_avx(auVar52,0x4e);
      auVar43 = vpunpckhdq_avx(auVar43,auVar42);
      auVar15 = vpshufd_avx(auVar15,0x4e);
      auVar47 = vpunpckhqdq_avx(auVar52,auVar43);
      auVar15 = vpunpcklqdq_avx(auVar15,auVar43);
      auVar42 = vpunpcklqdq_avx(auVar52,auVar42);
      auVar52 = vcvtdq2ps_avx(auVar47);
      auVar43 = vcvtdq2ps_avx(auVar15);
      auVar47 = vcvtdq2ps_avx(auVar42);
      auVar42 = vminps_avx(auVar43,auVar52);
      auVar15 = vmaxps_avx(auVar43,auVar52);
      auVar42 = vminps_avx(auVar42,auVar47);
      auVar33 = vmaxps_avx(auVar15,auVar47);
      auVar45 = vcvtps2dq_avx(auVar33);
      auVar23 = vsubps_avx(auVar33,auVar42);
      auVar24 = ZEXT816(0) << 0x20;
      auVar15 = vcmpps_avx(auVar33,auVar24,0);
      auVar42 = vcmpps_avx(auVar23,auVar24,0);
      auVar48 = vorps_avx(auVar15,auVar42);
      auVar15 = vandps_avx(auVar3,auVar48);
      auVar20._0_4_ = auVar33._0_4_ + auVar15._0_4_;
      auVar20._4_4_ = auVar33._4_4_ + auVar15._4_4_;
      auVar20._8_4_ = auVar33._8_4_ + auVar15._8_4_;
      auVar20._12_4_ = auVar33._12_4_ + auVar15._12_4_;
      auVar33._0_4_ = auVar15._0_4_ + auVar23._0_4_;
      auVar33._4_4_ = auVar15._4_4_ + auVar23._4_4_;
      auVar33._8_4_ = auVar15._8_4_ + auVar23._8_4_;
      auVar33._12_4_ = auVar15._12_4_ + auVar23._12_4_;
      auVar15 = vrcpps_avx(auVar20);
      auVar53._0_4_ = fVar16 * auVar15._0_4_ * auVar33._0_4_;
      auVar53._4_4_ = fVar17 * auVar15._4_4_ * auVar33._4_4_;
      auVar53._8_4_ = fVar18 * auVar15._8_4_ * auVar33._8_4_;
      auVar53._12_4_ = fVar19 * auVar15._12_4_ * auVar33._12_4_;
      auVar42 = vcmpps_avx(auVar43,auVar20,0);
      auVar15 = vandnps_avx(auVar48,auVar53);
      auVar23 = vrcpps_avx(auVar33);
      auVar33 = vcvtps2dq_avx(auVar15);
      auVar43 = vsubps_avx(auVar20,auVar43);
      auVar53 = vsubps_avx(auVar20,auVar52);
      auVar15 = vcmpps_avx(auVar52,auVar20,0);
      fVar21 = auVar23._0_4_;
      auVar22._0_4_ = fVar21 * auVar43._0_4_;
      fVar26 = auVar23._4_4_;
      auVar22._4_4_ = fVar26 * auVar43._4_4_;
      fVar27 = auVar23._8_4_;
      auVar22._8_4_ = fVar27 * auVar43._8_4_;
      fVar28 = auVar23._12_4_;
      auVar22._12_4_ = fVar28 * auVar43._12_4_;
      auVar34._0_4_ = fVar21 * auVar53._0_4_;
      auVar34._4_4_ = fVar26 * auVar53._4_4_;
      auVar34._8_4_ = fVar27 * auVar53._8_4_;
      auVar34._12_4_ = fVar28 * auVar53._12_4_;
      auVar52 = vsubps_avx(auVar20,auVar47);
      auVar43 = vcmpps_avx(auVar47,auVar20,0);
      auVar55._0_4_ = fVar21 * auVar52._0_4_;
      auVar55._4_4_ = fVar26 * auVar52._4_4_;
      auVar55._8_4_ = fVar27 * auVar52._8_4_;
      auVar55._12_4_ = fVar28 * auVar52._12_4_;
      auVar52 = vandnps_avx(auVar42,auVar15);
      auVar15 = vsubps_avx(auVar55,auVar34);
      auVar47 = vsubps_avx(auVar34,auVar22);
      auVar15 = vandps_avx(auVar42,auVar15);
      auVar43 = vandnps_avx(auVar52,auVar43);
      auVar42 = vsubps_avx(auVar22,auVar55);
      auVar23._0_4_ = fVar9 + auVar42._0_4_;
      auVar23._4_4_ = fVar4 + auVar42._4_4_;
      auVar23._8_4_ = fVar5 + auVar42._8_4_;
      auVar23._12_4_ = fVar36 + auVar42._12_4_;
      auVar42 = vandps_avx(auVar52,auVar23);
      auVar15 = vandnps_avx(auVar52,auVar15);
      auVar52 = vandnps_avx(auVar43,auVar15);
      auVar15._0_4_ = fVar10 + auVar47._0_4_;
      auVar15._4_4_ = fVar11 + auVar47._4_4_;
      auVar15._8_4_ = fVar12 + auVar47._8_4_;
      auVar15._12_4_ = fVar13 + auVar47._12_4_;
      auVar15 = vandps_avx(auVar43,auVar15);
      auVar42 = vandnps_avx(auVar43,auVar42);
      auVar43._0_4_ = fVar8 * (auVar52._0_4_ + auVar15._0_4_ + auVar42._0_4_);
      auVar43._4_4_ = fVar51 * (auVar52._4_4_ + auVar15._4_4_ + auVar42._4_4_);
      auVar43._8_4_ = fVar6 * (auVar52._8_4_ + auVar15._8_4_ + auVar42._8_4_);
      auVar43._12_4_ = fVar32 * (auVar52._12_4_ + auVar15._12_4_ + auVar42._12_4_);
      auVar15 = vcmpps_avx(auVar43,auVar24,1);
      auVar52._0_4_ = fVar16 + auVar43._0_4_;
      auVar52._4_4_ = fVar17 + auVar43._4_4_;
      auVar52._8_4_ = fVar18 + auVar43._8_4_;
      auVar52._12_4_ = fVar19 + auVar43._12_4_;
      auVar42 = vandnps_avx(auVar15,auVar43);
      auVar15 = vandps_avx(auVar15,auVar52);
      auVar47._0_4_ = auVar42._0_4_ + auVar15._0_4_;
      auVar47._4_4_ = auVar42._4_4_ + auVar15._4_4_;
      auVar47._8_4_ = auVar42._8_4_ + auVar15._8_4_;
      auVar47._12_4_ = auVar42._12_4_ + auVar15._12_4_;
      auVar15 = vandnps_avx(auVar48,auVar47);
      auVar15 = vcvtps2dq_avx(auVar15);
      auVar42 = vpunpckhdq_avx(auVar15,auVar33);
      auVar15 = vpunpckldq_avx(auVar15,auVar33);
      auVar15 = vpand_avx(auVar15,_DAT_1430866f0);
      auVar43 = vpunpckldq_avx(auVar33,auVar45);
      auVar52 = vpunpckhqdq_avx(auVar42,auVar45);
      auVar47 = vpslldq_avx(auVar45,0xc);
      auVar43 = vpsrldq_avx(auVar43,8);
      auVar15 = vpor_avx(auVar15,auVar47);
      auVar42 = vpunpcklqdq_avx(auVar43,auVar42);
      auVar15 = vpshufd_avx(auVar15,0xb4);
      auVar15 = vpackssdw_avx(auVar15,auVar42);
      auVar52 = vpshufd_avx(auVar52,0xd2);
      auVar42 = vpackuswb_avx(auVar15,auVar15);
      auVar15 = vpackssdw_avx(auVar52,auVar52);
      auVar15 = vpackuswb_avx(auVar15,auVar15);
      auVar52 = vpsrldq_avx(auVar42,4);
      param_2[2] = auVar15._0_4_;
      *param_2 = auVar42._0_4_;
      param_2[1] = auVar52._0_4_;
      param_2 = param_2 + 3;
    } while (iVar14 < (int)(param_3 & 0xfffffffc));
    auVar7 = ZEXT812(0);
  }
  for (; iVar14 < (int)param_3; iVar14 = iVar14 + 1) {
    fVar51 = 0.0;
    auVar42._0_4_ = (float)(byte)*param_1;
    auVar42._4_12_ = auVar7;
    auVar48._0_4_ = (float)*(byte *)((longlong)param_1 + 1);
    auVar48._4_12_ = auVar7;
    auVar15 = vminss_avx(auVar42,auVar48);
    auVar45._0_4_ = (float)*(byte *)((longlong)param_1 + 2);
    auVar45._4_12_ = auVar7;
    auVar3 = vmaxss_avx(auVar42,auVar48);
    auVar15 = vminss_avx(auVar15,auVar45);
    auVar3 = vmaxss_avx(auVar3,auVar45);
    fVar32 = auVar3._0_4_;
    fVar6 = fVar32 - auVar15._0_4_;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar32);
    if ((fVar32 == 0.0) || ((fVar6 == 0.0 && (!NAN(fVar6))))) {
      *(undefined1 *)((longlong)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0;
    }
    else {
      auVar3 = vrcpss_avx(auVar3,auVar3);
      auVar15 = vrcpss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar36 = auVar15._0_4_;
      fVar4 = (fVar32 - auVar42._0_4_) * fVar36;
      fVar5 = (fVar32 - auVar48._0_4_) * fVar36;
      fVar36 = (fVar32 - auVar45._0_4_) * fVar36;
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar3._0_4_ * fVar6 * fVar16);
      if ((fVar32 == auVar42._0_4_) && (!NAN(fVar32) && !NAN(auVar42._0_4_))) {
        fVar51 = fVar36 - fVar5;
      }
      if ((fVar32 == auVar48._0_4_) && (!NAN(fVar32) && !NAN(auVar48._0_4_))) {
        fVar51 = (fVar4 - fVar36) + fVar9;
      }
      if ((fVar32 == auVar45._0_4_) && (!NAN(fVar32) && !NAN(auVar45._0_4_))) {
        fVar51 = (fVar5 - fVar4) + fVar10;
      }
      fVar51 = fVar51 * fVar8;
      if (fVar51 < 0.0) {
        fVar51 = fVar51 + fVar16;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar51);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

