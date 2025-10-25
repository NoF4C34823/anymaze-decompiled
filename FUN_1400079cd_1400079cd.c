
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400079cd(int param_1,undefined8 param_2,undefined1 (*param_3) [16],longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 (*in_R10) [16];
  longlong in_R11;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
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
  undefined8 in_stack_00000190;
  
  uVar9 = 0;
  uVar10 = param_1 >> 1;
  lVar11 = (longlong)(int)uVar10;
  auVar23 = ZEXT1664(_DAT_1430856a0);
  auVar22 = ZEXT1664(_DAT_1430856b0);
  auVar28 = ZEXT1664(_DAT_143085740);
  auVar25 = ZEXT1664(_DAT_143085730);
  auVar34 = ZEXT1664(_DAT_143085720);
  auVar31 = ZEXT1664(_DAT_143085710);
  auVar37 = ZEXT1664(_DAT_143085700);
  auVar24 = ZEXT1664(_DAT_1430856f0);
  auVar26 = ZEXT1664(_DAT_1430856e0);
  auVar27 = ZEXT1664(_DAT_143085670);
  do {
    iVar19 = 0;
    uVar17 = 0;
    auVar44 = auVar24._0_16_;
    auVar39 = auVar26._0_16_;
    auVar29 = auVar28._0_16_;
    auVar45 = auVar27._0_16_;
    auVar30 = auVar22._0_16_;
    auVar41 = auVar25._0_16_;
    pauVar12 = in_R10;
    pauVar16 = param_3;
    if (0 < (int)(uVar10 & 0xfffffff8)) {
      do {
        uVar17 = uVar17 + 1;
        auVar43 = vpand_avx(auVar44,pauVar16[1]);
        auVar36 = vpand_avx(_DAT_143085700,*pauVar16);
        auVar40 = vpand_avx(_DAT_143085710,pauVar16[2]);
        auVar36 = vpor_avx(auVar43,auVar36);
        auVar43 = vpand_avx(_DAT_143085700,pauVar16[1]);
        auVar42 = vpor_avx(auVar40,auVar36);
        auVar36 = vpand_avx(_DAT_143085710,*pauVar16);
        auVar32 = vpor_avx(auVar43,auVar36);
        auVar43 = vpand_avx(_DAT_143085700,pauVar16[2]);
        auVar36 = vpand_avx(_DAT_143085710,pauVar16[1]);
        auVar40 = vpand_avx(auVar44,*pauVar16);
        auVar46 = vpand_avx(auVar44,pauVar16[2]);
        auVar36 = vpor_avx(auVar36,auVar40);
        auVar40 = vpor_avx(auVar46,auVar32);
        auVar43 = vpor_avx(auVar43,auVar36);
        auVar46 = vpshufb_avx(auVar43,auVar39);
        auVar43 = vpalignr_avx(auVar42,auVar42,1);
        auVar36 = vpalignr_avx(auVar40,auVar40,2);
        auVar32 = vpshufb_avx(auVar43,auVar39);
        auVar38 = vpshufb_avx(auVar36,auVar39);
        auVar36 = vpunpcklbw_avx(auVar46,(undefined1  [16])0x0);
        auVar40 = vpunpckhbw_avx(auVar46,(undefined1  [16])0x0);
        auVar43 = vpmaddwd_avx(auVar36,auVar29);
        auVar48 = vpsllw_avx(auVar36,7);
        auVar36 = vpmaddwd_avx(auVar40,auVar29);
        auVar46 = vpunpcklbw_avx(auVar32,(undefined1  [16])0x0);
        auVar42 = vpsllw_avx(auVar40,7);
        auVar43 = vpackssdw_avx(auVar43,auVar36);
        auVar36 = vpmaddwd_avx(auVar46,auVar29);
        auVar46 = vpsllw_avx(auVar46,7);
        auVar40 = vpmulhrsw_avx(auVar48,_DAT_143085660);
        auVar42 = vpmulhrsw_avx(auVar42,_DAT_143085660);
        auVar46 = vpmulhrsw_avx(auVar46,auVar45);
        auVar32 = vpunpckhbw_avx(auVar32,(undefined1  [16])0x0);
        auVar40 = vpaddw_avx(auVar40,auVar46);
        auVar46 = vpmaddwd_avx(auVar32,auVar29);
        auVar32 = vpsllw_avx(auVar32,7);
        auVar36 = vpackssdw_avx(auVar36,auVar46);
        auVar35 = vpsllw_avx(auVar43,6);
        auVar48 = vpsllw_avx(auVar36,6);
        auVar43 = vpmulhrsw_avx(auVar32,auVar45);
        auVar32 = vpunpcklbw_avx(auVar38,(undefined1  [16])0x0);
        auVar36 = vpaddw_avx(auVar42,auVar43);
        auVar46 = vpmaddwd_avx(auVar32,auVar29);
        auVar43 = vpsllw_avx(auVar32,7);
        auVar43 = vpmulhrsw_avx(auVar43,_DAT_143085680);
        auVar42 = vpunpckhbw_avx(auVar38,(undefined1  [16])0x0);
        auVar43 = vpaddw_avx(auVar40,auVar43);
        auVar40 = vpaddw_avx(auVar43,_DAT_143085720);
        auVar43 = vpmaddwd_avx(auVar42,auVar29);
        auVar42 = vpsllw_avx(auVar42,7);
        auVar42 = vpmulhrsw_avx(auVar42,_DAT_143085680);
        auVar43 = vpackssdw_avx(auVar46,auVar43);
        auVar36 = vpaddw_avx(auVar36,auVar42);
        auVar32 = vpsllw_avx(auVar43,6);
        auVar43 = vpaddw_avx(auVar36,_DAT_143085720);
        auVar36 = vpmulhrsw_avx(auVar35,_DAT_143085690);
        auVar38 = vpsraw_avx(auVar43,6);
        auVar43 = vpmulhrsw_avx(auVar35,auVar30);
        auVar46 = vpmulhrsw_avx(auVar48,_DAT_1430856c0);
        auVar42 = vpsubw_avx(auVar43,auVar46);
        auVar35 = vpsraw_avx(auVar40,6);
        auVar43 = vpmulhrsw_avx(auVar48,_DAT_1430856a0);
        auVar40 = vpmulhrsw_avx(auVar32,_DAT_1430856d0);
        auVar46 = vpmulhrsw_avx(auVar32,auVar30);
        auVar40 = vpsubw_avx(auVar42,auVar40);
        auVar46 = vpsubw_avx(auVar46,auVar43);
        auVar43 = vpaddw_avx(auVar40,auVar41);
        auVar36 = vpsubw_avx(auVar46,auVar36);
        auVar46 = vpsraw_avx(auVar43,6);
        auVar43 = vpaddw_avx(auVar36,auVar41);
        auVar36 = vpsraw_avx(auVar43,6);
        auVar43 = vpackuswb_avx(auVar35,auVar38);
        auVar40 = vpunpcklwd_avx(auVar46,auVar36);
        auVar36 = vpunpckhwd_avx(auVar46,auVar36);
        auVar42 = vpslld_avx(auVar40,8);
        auVar40 = vpunpcklbw_avx(auVar43,(undefined1  [16])0x0);
        auVar46 = vpslld_avx(auVar36,8);
        auVar36 = vpunpckhbw_avx(auVar43,(undefined1  [16])0x0);
        auVar43 = vpor_avx(auVar42,auVar40);
        auVar36 = vpor_avx(auVar46,auVar36);
        *pauVar12 = auVar43;
        pauVar12[1] = auVar36;
        pauVar12 = pauVar12 + 2;
        pauVar16 = pauVar16 + 3;
      } while (uVar17 < (uVar10 & 0xfffffff8) + 7 >> 3);
      pauVar16 = param_3 + uVar17 * 3;
      auVar34 = ZEXT1664(_DAT_143085720);
      pauVar12 = in_R10 + uVar17 * 2;
      auVar31 = ZEXT1664(_DAT_143085710);
      auVar37 = ZEXT1664(_DAT_143085700);
      auVar23 = ZEXT1664(_DAT_1430856a0);
      iVar19 = (int)uVar17 << 3;
    }
    if ((uVar10 & 4) != 0) {
      iVar19 = iVar19 + 4;
      auVar43 = vpand_avx(auVar37._0_16_,*pauVar16);
      auVar40._8_8_ = 0;
      auVar40._0_8_ = *(ulonglong *)pauVar16[1];
      auVar36 = vpand_avx(auVar40,auVar44);
      auVar40 = vpand_avx(auVar40,auVar31._0_16_);
      auVar43 = vpor_avx(auVar36,auVar43);
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *(ulonglong *)pauVar16[1];
      auVar46 = vpand_avx(auVar46,auVar37._0_16_);
      auVar43 = vpor_avx(auVar40,auVar43);
      auVar43 = vpalignr_avx(auVar43,auVar43,1);
      auVar42 = vpshufb_avx(auVar43,auVar39);
      auVar43 = vpand_avx(auVar31._0_16_,*pauVar16);
      auVar43 = vpor_avx(auVar46,auVar43);
      auVar43 = vpor_avx(auVar36,auVar43);
      auVar43 = vpalignr_avx(auVar43,auVar43,2);
      auVar36 = vpshufb_avx(auVar43,auVar39);
      auVar44 = vpand_avx(auVar44,*pauVar16);
      pauVar16 = (undefined1 (*) [16])(pauVar16[1] + 8);
      auVar44 = vpor_avx(auVar40,auVar44);
      auVar44 = vpor_avx(auVar46,auVar44);
      auVar44 = vpshufb_avx(auVar44,auVar39);
      auVar39 = vpunpcklbw_avx(auVar44,(undefined1  [16])0x0);
      auVar44 = vpmaddwd_avx(auVar39,auVar29);
      auVar39 = vpsllw_avx(auVar39,7);
      auVar40 = vpunpcklbw_avx(auVar42,(undefined1  [16])0x0);
      auVar44 = vpackssdw_avx(auVar44,auVar44);
      auVar39 = vpmulhrsw_avx(auVar39,_DAT_143085660);
      auVar46 = vpsllw_avx(auVar44,6);
      auVar43 = vpmaddwd_avx(auVar40,auVar29);
      auVar44 = vpsllw_avx(auVar40,7);
      auVar44 = vpmulhrsw_avx(auVar44,auVar45);
      auVar36 = vpunpcklbw_avx(auVar36,(undefined1  [16])0x0);
      auVar44 = vpaddw_avx(auVar39,auVar44);
      auVar45 = vpmaddwd_avx(auVar36,auVar29);
      auVar39 = vpsllw_avx(auVar36,7);
      auVar39 = vpmulhrsw_avx(auVar39,_DAT_143085680);
      auVar44 = vpaddw_avx(auVar44,auVar39);
      auVar39 = vpaddw_avx(auVar44,auVar34._0_16_);
      auVar44 = vpackssdw_avx(auVar43,auVar43);
      auVar39 = vpsraw_avx(auVar39,6);
      auVar39 = vpackuswb_avx(auVar39,auVar39);
      auVar40 = vpsllw_avx(auVar44,6);
      auVar36 = vpunpcklbw_avx(auVar39,(undefined1  [16])0x0);
      auVar39 = vpmulhrsw_avx(auVar46,auVar30);
      auVar29 = vpmulhrsw_avx(auVar40,_DAT_1430856c0);
      auVar43 = vpmulhrsw_avx(auVar46,_DAT_143085690);
      auVar44 = vpackssdw_avx(auVar45,auVar45);
      auVar45 = vpsubw_avx(auVar39,auVar29);
      auVar29 = vpsllw_avx(auVar44,6);
      auVar44 = vpmulhrsw_avx(auVar40,auVar23._0_16_);
      auVar39 = vpmulhrsw_avx(auVar29,_DAT_1430856d0);
      auVar30 = vpmulhrsw_avx(auVar29,auVar30);
      auVar30 = vpsubw_avx(auVar30,auVar44);
      auVar44 = vpsubw_avx(auVar45,auVar39);
      auVar39 = vpsubw_avx(auVar30,auVar43);
      auVar30 = vpaddw_avx(auVar44,auVar41);
      auVar44 = vpaddw_avx(auVar39,auVar41);
      auVar41 = vpsraw_avx(auVar30,6);
      auVar30 = vpsraw_avx(auVar44,6);
      auVar30 = vpunpcklwd_avx(auVar41,auVar30);
      auVar30 = vpslld_avx(auVar30,8);
      auVar30 = vpor_avx(auVar30,auVar36);
      *pauVar12 = auVar30;
      pauVar12 = pauVar12 + 1;
    }
    auVar39 = _DAT_143085810;
    auVar41 = _DAT_143085800;
    auVar44 = _DAT_1430857d0;
    auVar30 = _DAT_143085790;
    lVar13 = (longlong)iVar19;
    if (lVar13 < lVar11) {
      if (((longlong)pauVar12 - (longlong)pauVar16 < (lVar11 - iVar19) * 6) &&
         (-((longlong)pauVar12 - (longlong)pauVar16) < (lVar11 - iVar19) * 4)) {
        lVar20 = (lVar11 + -1) - lVar13;
        uVar17 = lVar20 + 1;
        if (((undefined1 (*) [16])((longlong)pauVar16 + (lVar20 * 3 + 3) * 2 + -1) < pauVar12) ||
           ((undefined1 (*) [16])((longlong)pauVar12 + lVar20 * 4 + 3) < pauVar16)) {
          if ((longlong)uVar17 < 8) {
            uVar18 = 0;
          }
          else {
            uVar21 = 0;
            lVar13 = 0;
            uVar18 = (ulonglong)(int)((uint)uVar17 & 0xfffffff8);
            do {
              auVar35 = _DAT_1430857a0;
              auVar45 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 4],0);
              auVar29 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 10],0);
              auVar43 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 3],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13],1);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[1][lVar13 + 6],1);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)(*pauVar16)[lVar13 + 0xf],1);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 0xc],2);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 2],2);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[1][lVar13 + 0xb],2);
              auVar36 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 9],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 8],3);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 0xe],3);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[2][lVar13 + 7],3);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[1][lVar13 + 5],1);
              auVar40 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 0xb],0);
              auVar46 = vpunpcklbw_avx(auVar45,auVar29);
              auVar45 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 5],0);
              auVar29 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[2][lVar13 + 1],2);
              auVar36 = vpinsrb_avx(auVar40,(uint)(byte)pauVar16[1][lVar13 + 7],1);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 1],1);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 0xd],3);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[2][lVar13 + 3],2);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 0xd],2);
              auVar43 = vpunpcklbw_avx(auVar43,auVar29);
              auVar29 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[2][lVar13 + 0xf],3);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 9],3);
              auVar43 = vpmovzxbw_avx(auVar43);
              auVar36 = vpmovzxbw_avx(auVar46);
              auVar45 = vpunpcklbw_avx(auVar45,auVar29);
              auVar40 = vpmullw_avx(_DAT_143085750,auVar43);
              auVar43 = vpmulhw_avx(_DAT_143085750,auVar43);
              auVar45 = vpmovzxbw_avx(auVar45);
              auVar46 = vpmullw_avx(_DAT_143085760,auVar36);
              auVar29 = vpmulhuw_avx(_DAT_143085760,auVar36);
              auVar42 = vpmullw_avx(_DAT_143085770,auVar45);
              auVar36 = vpmulhw_avx(_DAT_143085770,auVar45);
              auVar45 = vpunpcklwd_avx(auVar40,auVar43);
              auVar43 = vpunpckhwd_avx(auVar40,auVar43);
              auVar40 = vpunpcklwd_avx(auVar46,auVar29);
              auVar29 = vpunpckhwd_avx(auVar46,auVar29);
              auVar45 = vpaddd_avx(auVar45,auVar40);
              auVar40 = vpunpcklwd_avx(auVar42,auVar36);
              auVar29 = vpaddd_avx(auVar43,auVar29);
              auVar43 = vpunpckhwd_avx(auVar42,auVar36);
              auVar45 = vpaddd_avx(auVar45,auVar40);
              auVar29 = vpaddd_avx(auVar29,auVar43);
              auVar45 = vpaddd_avx(auVar45,_DAT_143085780);
              auVar43 = vpsrad_avx(auVar45,0x10);
              auVar45 = vpaddd_avx(auVar29,_DAT_143085780);
              auVar29 = vpsrad_avx(auVar45,0x10);
              auVar45 = vpshufb_avx(auVar43,auVar30);
              auVar29 = vpshufb_avx(auVar29,_DAT_1430857a0);
              auVar45 = vpor_avx(auVar45,auVar29);
              (*pauVar12)[uVar21 * 4 + 2] = auVar45[0];
              (*pauVar12)[uVar21 * 4 + 6] = auVar45[1];
              (*pauVar12)[uVar21 * 4 + 10] = auVar45[2];
              (*pauVar12)[uVar21 * 4 + 0xe] = auVar45[3];
              pauVar12[1][uVar21 * 4 + 2] = auVar45[4];
              pauVar12[1][uVar21 * 4 + 6] = auVar45[5];
              pauVar12[1][uVar21 * 4 + 10] = auVar45[6];
              pauVar12[1][uVar21 * 4 + 0xe] = auVar45[7];
              auVar45 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 6],0);
              auVar29 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13],0);
              auVar43 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 1],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 2],1);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)(*pauVar16)[lVar13 + 0xc],1);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)(*pauVar16)[lVar13 + 0xd],1);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 0xe],2);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[1][lVar13 + 8],2);
              auVar36 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 7],0);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[1][lVar13 + 9],2);
              auVar40 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 2],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 10],3);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 4],3);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[1][lVar13 + 3],1);
              auVar46 = vpunpcklbw_avx(auVar29,auVar45);
              auVar45 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[1][lVar13 + 0xf],2);
              auVar29 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[2][lVar13 + 5],3);
              auVar43 = vpinsrb_avx(auVar40,(uint)(byte)(*pauVar16)[lVar13 + 0xe],1);
              auVar42 = vpsrldq_avx(auVar46,4);
              auVar36 = vpmovzxbd_avx(auVar46);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 0xb],3);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[1][lVar13 + 10],2);
              auVar40 = vpunpcklbw_avx(auVar29,auVar45);
              auVar45 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 8],0);
              auVar29 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[2][lVar13 + 6],3);
              auVar43 = vpsrldq_avx(auVar40,4);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 4],1);
              auVar40 = vpmovzxbd_avx(auVar40);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13],2);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 0xc],3);
              auVar45 = vpunpcklbw_avx(auVar29,auVar45);
              auVar46 = vpmovzxbd_avx(auVar42);
              auVar42 = vpmovzxbd_avx(auVar43);
              auVar32 = vpmovzxbd_avx(auVar45);
              auVar45 = vpsrldq_avx(auVar45,4);
              auVar38 = vpmovzxbd_avx(auVar45);
              auVar45 = vpmulld_avx(_DAT_1430857b0,auVar36);
              auVar29 = vpmulld_avx(_DAT_1430857c0,auVar40);
              auVar43 = vpmulld_avx(_DAT_1430857b0,auVar46);
              auVar45 = vpaddd_avx(auVar45,auVar29);
              auVar29 = vpmulld_avx(_DAT_1430857c0,auVar42);
              auVar48 = vpmulld_avx(auVar44,auVar32);
              auVar29 = vpaddd_avx(auVar43,auVar29);
              auVar43 = vpmulld_avx(auVar44,auVar38);
              auVar45 = vpaddd_avx(auVar45,auVar48);
              auVar29 = vpaddd_avx(auVar29,auVar43);
              auVar45 = vpaddd_avx(auVar45,_DAT_1430857e0);
              auVar29 = vpaddd_avx(auVar29,_DAT_1430857e0);
              auVar45 = vpsrad_avx(auVar45,0x10);
              auVar29 = vpsrad_avx(auVar29,0x10);
              auVar45 = vpshufb_avx(auVar45,auVar30);
              auVar29 = vpshufb_avx(auVar29,auVar35);
              auVar45 = vpor_avx(auVar45,auVar29);
              (*pauVar12)[uVar21 * 4] = auVar45[0];
              (*pauVar12)[uVar21 * 4 + 4] = auVar45[1];
              (*pauVar12)[uVar21 * 4 + 8] = auVar45[2];
              (*pauVar12)[uVar21 * 4 + 0xc] = auVar45[3];
              pauVar12[1][uVar21 * 4] = auVar45[4];
              pauVar12[1][uVar21 * 4 + 4] = auVar45[5];
              pauVar12[1][uVar21 * 4 + 8] = auVar45[6];
              pauVar12[1][uVar21 * 4 + 0xc] = auVar45[7];
              auVar45 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 3],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)(*pauVar16)[lVar13 + 0xf],1);
              auVar29 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 9],0);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[1][lVar13 + 0xb],2);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[1][lVar13 + 5],1);
              auVar45 = vpinsrb_avx(auVar45,(uint)(byte)pauVar16[2][lVar13 + 7],3);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 1],2);
              auVar29 = vpinsrb_avx(auVar29,(uint)(byte)pauVar16[2][lVar13 + 0xd],3);
              auVar43 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 10],0);
              auVar29 = vpunpcklbw_avx(auVar45,auVar29);
              auVar45 = vpmovzxbd_avx(auVar29);
              auVar45 = vpaddd_avx(auVar36,auVar45);
              auVar29 = vpsrldq_avx(auVar29,4);
              auVar29 = vpmovzxbd_avx(auVar29);
              auVar29 = vpaddd_avx(auVar46,auVar29);
              auVar36 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 4],0);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[1][lVar13],1);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[1][lVar13 + 6],1);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[1][lVar13 + 0xc],2);
              auVar36 = vpinsrb_avx(auVar36,(uint)(byte)pauVar16[2][lVar13 + 8],3);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[2][lVar13 + 2],2);
              auVar43 = vpinsrb_avx(auVar43,(uint)(byte)pauVar16[2][lVar13 + 0xe],3);
              auVar36 = vpunpcklbw_avx(auVar36,auVar43);
              auVar43 = vpmovzxbd_avx(auVar36);
              auVar43 = vpaddd_avx(auVar40,auVar43);
              auVar36 = vpsrldq_avx(auVar36,4);
              auVar36 = vpmovzxbd_avx(auVar36);
              auVar36 = vpaddd_avx(auVar42,auVar36);
              auVar40 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 5],0);
              auVar46 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar13 + 0xb],0);
              auVar40 = vpinsrb_avx(auVar40,(uint)(byte)pauVar16[1][lVar13 + 1],1);
              auVar40 = vpinsrb_avx(auVar40,(uint)(byte)pauVar16[1][lVar13 + 0xd],2);
              auVar46 = vpinsrb_avx(auVar46,(uint)(byte)pauVar16[1][lVar13 + 7],1);
              auVar40 = vpinsrb_avx(auVar40,(uint)(byte)pauVar16[2][lVar13 + 9],3);
              auVar46 = vpinsrb_avx(auVar46,(uint)(byte)pauVar16[2][lVar13 + 3],2);
              auVar46 = vpinsrb_avx(auVar46,(uint)(byte)pauVar16[2][lVar13 + 0xf],3);
              lVar13 = lVar13 + 0x30;
              auVar46 = vpunpcklbw_avx(auVar40,auVar46);
              auVar40 = vpmovzxbd_avx(auVar46);
              auVar40 = vpaddd_avx(auVar32,auVar40);
              auVar46 = vpsrldq_avx(auVar46,4);
              auVar46 = vpmovzxbd_avx(auVar46);
              auVar46 = vpaddd_avx(auVar38,auVar46);
              auVar42 = vpmulld_avx(_DAT_1430857f0,auVar45);
              auVar45 = vpmulld_avx(auVar45,auVar39);
              auVar32 = vpmulld_avx(auVar41,auVar43);
              auVar42 = vpsubd_avx(auVar42,auVar32);
              auVar43 = vpmulld_avx(auVar43,_DAT_143085830);
              auVar43 = vpsubd_avx(auVar45,auVar43);
              auVar45 = vpmulld_avx(auVar39,auVar40);
              auVar45 = vpaddd_avx(auVar42,auVar45);
              auVar45 = vpaddd_avx(auVar45,_DAT_143085820);
              auVar45 = vpsrad_avx(auVar45,0x11);
              auVar42 = vpshufb_avx(auVar45,auVar30);
              auVar45 = vpmulld_avx(auVar40,_DAT_143085840);
              auVar45 = vpsubd_avx(auVar43,auVar45);
              auVar45 = vpaddd_avx(auVar45,_DAT_143085820);
              auVar45 = vpsrad_avx(auVar45,0x11);
              auVar40 = vpshufb_avx(auVar45,auVar30);
              auVar45 = vpmulld_avx(_DAT_1430857f0,auVar29);
              auVar29 = vpmulld_avx(auVar29,auVar39);
              auVar43 = vpmulld_avx(auVar41,auVar36);
              auVar36 = vpmulld_avx(auVar36,_DAT_143085830);
              auVar43 = vpsubd_avx(auVar45,auVar43);
              auVar45 = vpmulld_avx(auVar39,auVar46);
              auVar36 = vpsubd_avx(auVar29,auVar36);
              auVar45 = vpaddd_avx(auVar43,auVar45);
              auVar45 = vpaddd_avx(auVar45,_DAT_143085820);
              auVar45 = vpsrad_avx(auVar45,0x11);
              auVar29 = vpshufb_avx(auVar45,auVar35);
              auVar45 = vpmulld_avx(auVar46,_DAT_143085840);
              auVar29 = vpor_avx(auVar42,auVar29);
              auVar45 = vpsubd_avx(auVar36,auVar45);
              auVar45 = vpaddd_avx(auVar45,_DAT_143085820);
              auVar45 = vpsrad_avx(auVar45,0x11);
              auVar45 = vpshufb_avx(auVar45,auVar35);
              auVar45 = vpor_avx(auVar40,auVar45);
              (*pauVar12)[uVar21 * 4 + 3] = auVar29[0];
              (*pauVar12)[uVar21 * 4 + 7] = auVar29[1];
              (*pauVar12)[uVar21 * 4 + 0xb] = auVar29[2];
              (*pauVar12)[uVar21 * 4 + 0xf] = auVar29[3];
              pauVar12[1][uVar21 * 4 + 3] = auVar29[4];
              pauVar12[1][uVar21 * 4 + 7] = auVar29[5];
              pauVar12[1][uVar21 * 4 + 0xb] = auVar29[6];
              pauVar12[1][uVar21 * 4 + 0xf] = auVar29[7];
              (*pauVar12)[uVar21 * 4 + 1] = auVar45[0];
              (*pauVar12)[uVar21 * 4 + 5] = auVar45[1];
              (*pauVar12)[uVar21 * 4 + 9] = auVar45[2];
              (*pauVar12)[uVar21 * 4 + 0xd] = auVar45[3];
              pauVar12[1][uVar21 * 4 + 1] = auVar45[4];
              pauVar12[1][uVar21 * 4 + 5] = auVar45[5];
              pauVar12[1][uVar21 * 4 + 9] = auVar45[6];
              pauVar12[1][uVar21 * 4 + 0xd] = auVar45[7];
              uVar21 = uVar21 + 8;
            } while (uVar21 < uVar18);
            auVar28 = ZEXT1664(_DAT_143085740);
            auVar25 = ZEXT1664(_DAT_143085730);
            auVar34 = ZEXT1664(_DAT_143085720);
            auVar31 = ZEXT1664(_DAT_143085710);
            auVar37 = ZEXT1664(_DAT_143085700);
            auVar24 = ZEXT1664(_DAT_1430856f0);
            auVar26 = ZEXT1664(_DAT_1430856e0);
            auVar22 = ZEXT1664(_DAT_1430856b0);
            auVar23 = ZEXT1664(_DAT_1430856a0);
            auVar27 = ZEXT1664(_DAT_143085670);
          }
          lVar13 = uVar18 * 6;
          for (; uVar18 < uVar17; uVar18 = uVar18 + 1) {
            (*pauVar12)[uVar18 * 4 + 2] =
                 (char)((uint)(byte)(*pauVar16)[lVar13 + 3] * 0x41cb +
                        (uint)(byte)(*pauVar16)[lVar13 + 4] * 0x8106 + 0x100000 +
                        (uint)(byte)(*pauVar16)[lVar13 + 5] * 0x1917 >> 0x10);
            bVar2 = (*pauVar16)[lVar13];
            bVar3 = (*pauVar16)[lVar13 + 1];
            bVar4 = (*pauVar16)[lVar13 + 2];
            (*pauVar12)[uVar18 * 4] =
                 (char)((uint)bVar2 * 0x41cb + (uint)bVar3 * 0x8106 + 0x108000 +
                        (uint)bVar4 * 0x1917 >> 0x10);
            iVar15 = (uint)bVar2 + (uint)(byte)(*pauVar16)[lVar13 + 3];
            iVar19 = (uint)bVar3 + (uint)(byte)(*pauVar16)[lVar13 + 4];
            iVar14 = (uint)bVar4 + (uint)(byte)(*pauVar16)[lVar13 + 5];
            lVar13 = lVar13 + 6;
            (*pauVar12)[uVar18 * 4 + 3] =
                 (char)((uint)(iVar15 * -0x25e3 + iVar19 * -0x4a7f + -0xff0000 + iVar14 * 0x7062) >>
                       0x11);
            (*pauVar12)[uVar18 * 4 + 1] =
                 (char)((uint)(iVar15 * 0x7062 + iVar19 * -0x5e35 + -0xff0000 + iVar14 * -0x122d) >>
                       0x11);
          }
        }
        else {
          uVar17 = 0;
          lVar20 = 0;
          do {
            bVar2 = (*pauVar16)[lVar20];
            bVar3 = (*pauVar16)[lVar20 + 1];
            bVar4 = (*pauVar16)[lVar20 + 2];
            (*pauVar12)[uVar17 * 4] =
                 (char)((uint)bVar2 * 0x41cb + (uint)bVar3 * 0x8106 + 0x108000 +
                        (uint)bVar4 * 0x1917 >> 0x10);
            (*pauVar12)[uVar17 * 4 + 2] =
                 (char)((uint)(byte)(*pauVar16)[lVar20 + 3] * 0x41cb +
                        (uint)(byte)(*pauVar16)[lVar20 + 4] * 0x8106 + 0x100000 +
                        (uint)(byte)(*pauVar16)[lVar20 + 5] * 0x1917 >> 0x10);
            iVar19 = (uint)bVar2 + (uint)(byte)(*pauVar16)[lVar20 + 3];
            iVar15 = (uint)bVar3 + (uint)(byte)(*pauVar16)[lVar20 + 4];
            iVar14 = (uint)bVar4 + (uint)(byte)(*pauVar16)[lVar20 + 5];
            lVar20 = lVar20 + 6;
            (*pauVar12)[uVar17 * 4 + 3] =
                 (char)((uint)(iVar19 * -0x25e3 + iVar15 * -0x4a7f + -0xff0000 + iVar14 * 0x7062) >>
                       0x11);
            (*pauVar12)[uVar17 * 4 + 1] =
                 (char)((uint)(iVar19 * 0x7062 + iVar15 * -0x5e35 + -0xff0000 + iVar14 * -0x122d) >>
                       0x11);
            uVar17 = uVar17 + 1;
          } while (uVar17 < (ulonglong)(lVar11 - lVar13));
        }
      }
      else {
        uVar17 = (lVar11 - (lVar13 + 1)) + 1;
        if ((longlong)uVar17 < 8) {
          uVar18 = 0;
        }
        else {
          uVar21 = 0;
          lVar20 = 0;
          uVar18 = (ulonglong)(int)((uint)uVar17 & 0xfffffff8);
          lVar13 = 0;
          do {
            auVar8 = _DAT_1430857a0;
            auVar7 = _DAT_143085790;
            uVar21 = uVar21 + 8;
            auVar30 = vpinsrd_avx(ZEXT416(*(uint *)(*pauVar16 + lVar20)),
                                  *(undefined4 *)(pauVar16[1] + lVar20 + 8),1);
            auVar44 = vpinsrd_avx(ZEXT416(*(uint *)(*pauVar16 + lVar20 + 6)),
                                  *(undefined4 *)(pauVar16[1] + lVar20 + 0xe),1);
            auVar41 = vpinsrd_avx(ZEXT416(*(uint *)(*pauVar16 + lVar20 + 0xc)),
                                  *(undefined4 *)(pauVar16[2] + lVar20 + 4),1);
            auVar39 = vpinsrd_avx(ZEXT416(*(uint *)(pauVar16[1] + lVar20 + 2)),
                                  *(undefined4 *)(pauVar16[2] + lVar20 + 10),1);
            auVar45 = vpunpcklbw_avx(auVar30,auVar44);
            auVar30 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar20 + 5],0);
            auVar44 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar20 + 0xb],0);
            auVar41 = vpunpcklbw_avx(auVar41,auVar39);
            auVar39 = vpunpcklwd_avx(auVar45,auVar41);
            auVar41 = vpunpckhwd_avx(auVar45,auVar41);
            auVar45 = vpunpckldq_avx(auVar39,auVar41);
            auVar47 = vpunpckhdq_avx(auVar39,auVar41);
            auVar29 = vpunpckhqdq_avx(auVar47,auVar47);
            auVar43 = vpunpckhqdq_avx(auVar45,auVar45);
            auVar30 = vpinsrb_avx(auVar30,(uint)(byte)pauVar16[1][lVar20 + 1],1);
            auVar41 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar20 + 4],0);
            auVar39 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*pauVar16)[lVar20 + 10],0);
            auVar44 = vpinsrb_avx(auVar44,(uint)(byte)pauVar16[1][lVar20 + 7],1);
            auVar30 = vpinsrb_avx(auVar30,(uint)(byte)pauVar16[1][lVar20 + 0xd],2);
            auVar41 = vpinsrb_avx(auVar41,(uint)(byte)pauVar16[1][lVar20],1);
            auVar39 = vpinsrb_avx(auVar39,(uint)(byte)pauVar16[1][lVar20 + 6],1);
            auVar44 = vpinsrb_avx(auVar44,(uint)(byte)pauVar16[2][lVar20 + 3],2);
            auVar30 = vpinsrb_avx(auVar30,(uint)(byte)pauVar16[2][lVar20 + 9],3);
            auVar41 = vpinsrb_avx(auVar41,(uint)(byte)pauVar16[1][lVar20 + 0xc],2);
            auVar39 = vpinsrb_avx(auVar39,(uint)(byte)pauVar16[2][lVar20 + 2],2);
            auVar44 = vpinsrb_avx(auVar44,(uint)(byte)pauVar16[2][lVar20 + 0xf],3);
            auVar41 = vpinsrb_avx(auVar41,(uint)(byte)pauVar16[2][lVar20 + 8],3);
            auVar39 = vpinsrb_avx(auVar39,(uint)(byte)pauVar16[2][lVar20 + 0xe],3);
            auVar6 = vpunpcklbw_avx(auVar30,auVar44);
            auVar39 = vpunpcklbw_avx(auVar41,auVar39);
            lVar20 = lVar20 + 0x30;
            auVar30 = vpmovzxbw_avx(auVar29);
            auVar44 = vpmovzxbw_avx(auVar39);
            auVar41 = vpmovzxbw_avx(auVar6);
            auVar48 = vpmullw_avx(_DAT_143085750,auVar30);
            auVar32 = vpmulhw_avx(_DAT_143085750,auVar30);
            auVar35 = vpmullw_avx(_DAT_143085760,auVar44);
            auVar38 = vpmulhw_avx(_DAT_143085770,auVar41);
            auVar42 = vpmulhuw_avx(_DAT_143085760,auVar44);
            auVar5 = vpmullw_avx(_DAT_143085770,auVar41);
            auVar44 = vpmovzxbd_avx(auVar45);
            auVar33 = vpsrldq_avx(auVar45,4);
            auVar45 = vpmovzxbd_avx(auVar43);
            auVar40 = vpsrldq_avx(auVar43,4);
            auVar30 = vpmovzxbd_avx(auVar29);
            auVar30 = vpaddd_avx(auVar44,auVar30);
            auVar43 = vpsrldq_avx(auVar29,4);
            auVar36 = vpmulld_avx(_DAT_1430857b0,auVar44);
            auVar41 = vpmovzxbd_avx(auVar39);
            auVar46 = vpsrldq_avx(auVar39,4);
            auVar39 = vpmovzxbd_avx(auVar33);
            auVar29 = vpmovzxbd_avx(auVar40);
            auVar44 = vpmovzxbd_avx(auVar43);
            auVar43 = vpmovzxbd_avx(auVar46);
            auVar44 = vpaddd_avx(auVar39,auVar44);
            auVar46 = vpmulld_avx(_DAT_1430857b0,auVar39);
            auVar41 = vpaddd_avx(auVar45,auVar41);
            auVar39 = vpaddd_avx(auVar29,auVar43);
            auVar40 = vpmovzxbd_avx(auVar47);
            auVar47 = vpsrldq_avx(auVar47,4);
            auVar45 = vpmulld_avx(_DAT_1430857c0,auVar45);
            auVar29 = vpmulld_avx(_DAT_1430857c0,auVar29);
            auVar45 = vpaddd_avx(auVar36,auVar45);
            auVar43 = vpmovzxbd_avx(auVar6);
            auVar29 = vpaddd_avx(auVar46,auVar29);
            auVar36 = vpsrldq_avx(auVar6,4);
            auVar43 = vpaddd_avx(auVar40,auVar43);
            auVar46 = vpmovzxbd_avx(auVar47);
            auVar36 = vpmovzxbd_avx(auVar36);
            auVar36 = vpaddd_avx(auVar46,auVar36);
            auVar40 = vpmulld_avx(_DAT_1430857d0,auVar40);
            auVar46 = vpmulld_avx(_DAT_1430857d0,auVar46);
            auVar45 = vpaddd_avx(auVar45,auVar40);
            auVar29 = vpaddd_avx(auVar29,auVar46);
            auVar45 = vpaddd_avx(auVar45,_DAT_1430857e0);
            auVar29 = vpaddd_avx(auVar29,_DAT_1430857e0);
            auVar45 = vpsrad_avx(auVar45,0x10);
            auVar29 = vpsrad_avx(auVar29,0x10);
            auVar45 = vpshufb_avx(auVar45,_DAT_143085790);
            auVar29 = vpshufb_avx(auVar29,_DAT_1430857a0);
            auVar45 = vpor_avx(auVar45,auVar29);
            (*pauVar12)[lVar13] = auVar45[0];
            (*pauVar12)[lVar13 + 4] = auVar45[1];
            (*pauVar12)[lVar13 + 8] = auVar45[2];
            (*pauVar12)[lVar13 + 0xc] = auVar45[3];
            pauVar12[1][lVar13] = auVar45[4];
            pauVar12[1][lVar13 + 4] = auVar45[5];
            pauVar12[1][lVar13 + 8] = auVar45[6];
            pauVar12[1][lVar13 + 0xc] = auVar45[7];
            auVar45 = vpmulld_avx(_DAT_1430857f0,auVar30);
            auVar30 = vpmulld_avx(auVar30,_DAT_143085810);
            auVar29 = vpmulld_avx(_DAT_143085800,auVar41);
            auVar45 = vpsubd_avx(auVar45,auVar29);
            auVar41 = vpmulld_avx(auVar41,_DAT_143085830);
            auVar29 = vpsubd_avx(auVar30,auVar41);
            auVar30 = vpmulld_avx(_DAT_143085810,auVar43);
            auVar30 = vpaddd_avx(auVar45,auVar30);
            auVar30 = vpaddd_avx(auVar30,_DAT_143085820);
            auVar30 = vpsrad_avx(auVar30,0x11);
            auVar45 = vpshufb_avx(auVar30,auVar7);
            auVar30 = vpmulld_avx(_DAT_1430857f0,auVar44);
            auVar44 = vpmulld_avx(auVar44,_DAT_143085810);
            auVar41 = vpmulld_avx(_DAT_143085800,auVar39);
            auVar39 = vpmulld_avx(auVar39,_DAT_143085830);
            auVar40 = vpsubd_avx(auVar30,auVar41);
            auVar30 = vpmulld_avx(auVar43,_DAT_143085840);
            auVar39 = vpsubd_avx(auVar44,auVar39);
            auVar44 = vpmulld_avx(_DAT_143085810,auVar36);
            auVar30 = vpsubd_avx(auVar29,auVar30);
            auVar41 = vpmulld_avx(auVar36,_DAT_143085840);
            auVar30 = vpaddd_avx(auVar30,_DAT_143085820);
            auVar41 = vpsubd_avx(auVar39,auVar41);
            auVar44 = vpaddd_avx(auVar40,auVar44);
            auVar41 = vpaddd_avx(auVar41,_DAT_143085820);
            auVar39 = vpsrad_avx(auVar30,0x11);
            auVar30 = vpaddd_avx(auVar44,_DAT_143085820);
            auVar41 = vpsrad_avx(auVar41,0x11);
            auVar44 = vpshufb_avx(auVar39,auVar7);
            auVar41 = vpshufb_avx(auVar41,auVar8);
            auVar39 = vpsrad_avx(auVar30,0x11);
            auVar30 = vpor_avx(auVar44,auVar41);
            auVar44 = vpshufb_avx(auVar39,auVar8);
            (*pauVar12)[lVar13 + 1] = auVar30[0];
            auVar41 = vpor_avx(auVar45,auVar44);
            (*pauVar12)[lVar13 + 5] = auVar30[1];
            (*pauVar12)[lVar13 + 9] = auVar30[2];
            (*pauVar12)[lVar13 + 0xd] = auVar30[3];
            pauVar12[1][lVar13 + 1] = auVar30[4];
            pauVar12[1][lVar13 + 5] = auVar30[5];
            pauVar12[1][lVar13 + 9] = auVar30[6];
            pauVar12[1][lVar13 + 0xd] = auVar30[7];
            auVar29 = _DAT_143085780;
            auVar30 = vpunpcklwd_avx(auVar48,auVar32);
            auVar44 = vpunpckhwd_avx(auVar48,auVar32);
            auVar39 = vpunpcklwd_avx(auVar35,auVar42);
            auVar30 = vpaddd_avx(auVar30,auVar39);
            auVar45 = vpunpcklwd_avx(auVar5,auVar38);
            auVar39 = vpunpckhwd_avx(auVar35,auVar42);
            auVar30 = vpaddd_avx(auVar30,auVar45);
            auVar44 = vpaddd_avx(auVar44,auVar39);
            (*pauVar12)[lVar13 + 3] = auVar41[0];
            (*pauVar12)[lVar13 + 7] = auVar41[1];
            (*pauVar12)[lVar13 + 0xb] = auVar41[2];
            (*pauVar12)[lVar13 + 0xf] = auVar41[3];
            pauVar12[1][lVar13 + 3] = auVar41[4];
            pauVar12[1][lVar13 + 7] = auVar41[5];
            pauVar12[1][lVar13 + 0xb] = auVar41[6];
            pauVar12[1][lVar13 + 0xf] = auVar41[7];
            auVar30 = vpaddd_avx(auVar30,auVar29);
            auVar41 = vpunpckhwd_avx(auVar5,auVar38);
            auVar39 = vpsrad_avx(auVar30,0x10);
            auVar30 = vpaddd_avx(auVar44,auVar41);
            auVar44 = vpshufb_avx(auVar39,auVar7);
            auVar30 = vpaddd_avx(auVar30,auVar29);
            auVar30 = vpsrad_avx(auVar30,0x10);
            auVar30 = vpshufb_avx(auVar30,auVar8);
            auVar30 = vpor_avx(auVar44,auVar30);
            (*pauVar12)[lVar13 + 2] = auVar30[0];
            (*pauVar12)[lVar13 + 6] = auVar30[1];
            (*pauVar12)[lVar13 + 10] = auVar30[2];
            (*pauVar12)[lVar13 + 0xe] = auVar30[3];
            pauVar12[1][lVar13 + 2] = auVar30[4];
            pauVar12[1][lVar13 + 6] = auVar30[5];
            pauVar12[1][lVar13 + 10] = auVar30[6];
            pauVar12[1][lVar13 + 0xe] = auVar30[7];
            lVar13 = lVar13 + 0x20;
          } while (uVar21 < uVar18);
          auVar28 = ZEXT1664(_DAT_143085740);
          auVar25 = ZEXT1664(_DAT_143085730);
          auVar34 = ZEXT1664(_DAT_143085720);
          auVar31 = ZEXT1664(_DAT_143085710);
          auVar37 = ZEXT1664(_DAT_143085700);
          auVar24 = ZEXT1664(_DAT_1430856f0);
          auVar26 = ZEXT1664(_DAT_1430856e0);
          auVar22 = ZEXT1664(_DAT_1430856b0);
          auVar23 = ZEXT1664(_DAT_1430856a0);
          auVar27 = ZEXT1664(_DAT_143085670);
        }
        lVar13 = uVar18 * 6;
        for (; uVar18 < uVar17; uVar18 = uVar18 + 1) {
          bVar2 = (*pauVar16)[lVar13 + 4];
          bVar3 = (*pauVar16)[lVar13 + 5];
          bVar4 = (*pauVar16)[lVar13];
          iVar19 = (uint)(byte)(*pauVar16)[lVar13 + 3] + (uint)bVar4;
          (*pauVar12)[uVar18 * 4 + 2] =
               (char)((uint)(byte)(*pauVar16)[lVar13 + 3] * 0x41cb + (uint)bVar2 * 0x8106 + 0x100000
                      + (uint)bVar3 * 0x1917 >> 0x10);
          lVar20 = lVar13 + 1;
          iVar14 = (uint)bVar2 + (uint)(byte)(*pauVar16)[lVar20];
          lVar1 = lVar13 + 2;
          iVar15 = (uint)bVar3 + (uint)(byte)(*pauVar16)[lVar1];
          lVar13 = lVar13 + 6;
          (*pauVar12)[uVar18 * 4] =
               (char)((uint)bVar4 * 0x41cb + (uint)(byte)(*pauVar16)[lVar20] * 0x8106 + 0x108000 +
                      (uint)(byte)(*pauVar16)[lVar1] * 0x1917 >> 0x10);
          (*pauVar12)[uVar18 * 4 + 3] =
               (char)((uint)(iVar19 * -0x25e3 + iVar14 * -0x4a7f + -0xff0000 + iVar15 * 0x7062) >>
                     0x11);
          (*pauVar12)[uVar18 * 4 + 1] =
               (char)((uint)(iVar19 * 0x7062 + iVar14 * -0x5e35 + -0xff0000 + iVar15 * -0x122d) >>
                     0x11);
        }
      }
    }
    uVar9 = uVar9 + 1;
    in_R10 = (undefined1 (*) [16])(*in_R10 + param_4);
    param_3 = (undefined1 (*) [16])(*param_3 + in_R11);
  } while (uVar9 < in_stack_00000190._4_4_);
  return 0;
}

