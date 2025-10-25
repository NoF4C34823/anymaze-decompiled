
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000cf80(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [16],int param_4,
                  ulonglong param_5,float *param_6)

{
  undefined1 auVar1 [64];
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  auVar1 = _DAT_143085fc0;
  if (param_6 == (float *)0x0) {
    iVar5 = 0x2646;
    iVar8 = 0x4b23;
    iVar2 = 0xe98;
  }
  else {
    auVar17._0_8_ = (double)*param_6;
    auVar17._8_8_ = 0;
    auVar18._0_8_ = (double)param_6[1];
    auVar18._8_8_ = 0;
    auVar19._0_8_ = (double)param_6[2];
    auVar19._8_8_ = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = _DAT_143086068;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = _DAT_143086060;
    auVar17 = vfmadd213sd_avx512f(auVar17,auVar20,auVar46);
    auVar18 = vfmadd213sd_avx512f(auVar18,auVar20,auVar46);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = _DAT_143086068;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = _DAT_143086060;
    auVar19 = vfmadd213sd_avx512f(auVar19,auVar45,auVar47);
    iVar5 = (int)auVar17._0_8_;
    iVar8 = (int)auVar18._0_8_;
    iVar2 = (int)auVar19._0_8_;
  }
  uVar10 = 0;
  auVar21 = vpbroadcastw_avx512vl();
  auVar22 = vpbroadcastw_avx512vl();
  auVar23 = vpbroadcastw_avx512vl();
  auVar24 = vmovdqu32_avx512vl(_DAT_143086000);
  auVar25 = vmovdqu32_avx512vl(_DAT_143086020);
  auVar26 = vmovdqu32_avx512vl(_DAT_143086040);
  if (0 < (int)param_5._4_4_) {
    auVar32 = vpbroadcastd_avx512f();
    auVar33 = vpbroadcastd_avx512f();
    auVar34 = vpbroadcastd_avx512f();
    do {
      uVar15 = 0;
      iVar3 = 0;
      lVar11 = 0;
      pauVar7 = param_1;
      pauVar9 = param_3;
      if (0 < (int)((uint)param_5 & 0xffffffe0)) {
        do {
          auVar27 = vmovdqu32_avx512vl(*pauVar7);
          uVar15 = uVar15 + 1;
          auVar28 = vmovdqu32_avx512vl(pauVar7[1]);
          auVar29 = vmovdqu32_avx512vl(pauVar7[2]);
          auVar30 = vmovdqu32_avx512vl(pauVar7[3]);
          auVar27 = vpshufb_avx512vl(auVar27,auVar25);
          auVar28 = vpshufb_avx512vl(auVar28,auVar25);
          auVar29 = vpshufb_avx512vl(auVar29,auVar25);
          auVar30 = vpshufb_avx512vl(auVar30,auVar25);
          auVar27 = vpermd_avx512vl(auVar26,auVar27);
          auVar28 = vpermd_avx512vl(auVar26,auVar28);
          auVar31 = vshufi32x4_avx512vl(auVar27,auVar28,0);
          auVar27 = vshufi32x4_avx512vl(auVar27,auVar28,3);
          auVar28 = vpermd_avx512vl(auVar26,auVar29);
          auVar29 = vpermd_avx512vl(auVar26,auVar30);
          auVar30 = vpermq_avx512vl(auVar31,0xd8);
          auVar31 = vshufi32x4_avx512vl(auVar28,auVar29,0);
          auVar28 = vshufi32x4_avx512vl(auVar28,auVar29,3);
          auVar29 = vpermq_avx512vl(auVar31,0xd8);
          auVar27 = vpermq_avx2(auVar27,0xd8);
          auVar28 = vpermq_avx2(auVar28,0xd8);
          auVar31 = vpermq_avx512vl(auVar30,0xee);
          auVar30 = vpmovzxbw_avx512vl(auVar30._0_16_);
          auVar30 = vpsllw_avx512vl(auVar30,8);
          auVar30 = vpmulhuw_avx512vl(auVar30,auVar21);
          auVar31 = vpmovzxbw_avx512vl(auVar31._0_16_);
          auVar31 = vpsllw_avx512vl(auVar31,8);
          auVar31 = vpmulhuw_avx512vl(auVar31,auVar22);
          auVar30 = vpaddusw_avx512vl(auVar30,auVar31);
          auVar27 = vpmovzxbw_avx2(auVar27._0_16_);
          auVar27 = vpsllw_avx2(auVar27,8);
          auVar27 = vpmulhuw_avx512vl(auVar27,auVar23);
          auVar27 = vpaddusw_avx512vl(auVar30,auVar27);
          auVar27 = vpaddusw_avx512vl(auVar27,auVar24);
          auVar30 = vpsrlw_avx512vl(auVar27,7);
          auVar31 = vpmovzxbw_avx512vl(auVar29._0_16_);
          auVar27 = vpermq_avx2(auVar29,0xee);
          auVar29 = vpsllw_avx512vl(auVar31,8);
          auVar29 = vpmulhuw_avx512vl(auVar29,auVar21);
          auVar27 = vpmovzxbw_avx2(auVar27._0_16_);
          auVar27 = vpsllw_avx2(auVar27,8);
          auVar27 = vpmulhuw_avx512vl(auVar27,auVar22);
          auVar29 = vpaddusw_avx512vl(auVar29,auVar27);
          auVar27 = vpmovzxbw_avx2(auVar28._0_16_);
          auVar27 = vpsllw_avx2(auVar27,8);
          auVar27 = vpmulhuw_avx512vl(auVar27,auVar23);
          auVar27 = vpaddusw_avx512vl(auVar29,auVar27);
          auVar27 = vpaddusw_avx512vl(auVar27,auVar24);
          auVar27 = vpsrlw_avx512vl(auVar27,7);
          auVar27 = vpackuswb_avx512vl(auVar30,auVar27);
          auVar27 = vpermq_avx512vl(auVar27,0xd8);
          auVar27 = vmovdqu32_avx512vl(auVar27);
          *(undefined1 (*) [32])(*param_3 + lVar11) = auVar27;
          lVar11 = lVar11 + 0x20;
          pauVar7 = pauVar7 + 4;
        } while (uVar15 < ((uint)param_5 & 0xffffffe0) + 0x1f >> 5);
        pauVar9 = param_3 + uVar15 * 2;
        iVar3 = (int)uVar15 << 5;
        pauVar7 = param_1 + uVar15 * 4;
      }
      if ((param_5 & 0x10) != 0) {
        iVar3 = iVar3 + 0x10;
        auVar27 = vpshufb_avx512vl(*pauVar7,auVar25);
        auVar28 = vpshufb_avx512vl(pauVar7[1],auVar25);
        auVar27 = vpermd_avx512vl(auVar26,auVar27);
        pauVar7 = pauVar7 + 2;
        auVar28 = vpermd_avx512vl(auVar26,auVar28);
        auVar29 = vshufi32x4_avx512vl(auVar27,auVar28,0);
        auVar27 = vshufi32x4_avx512vl(auVar27,auVar28,3);
        auVar28 = vpermq_avx512vl(auVar29,0xd8);
        auVar27 = vpermq_avx2(auVar27,0xd8);
        auVar29 = vpermq_avx512vl(auVar28,0xee);
        auVar28 = vpmovzxbw_avx512vl(auVar28._0_16_);
        auVar28 = vpsllw_avx512vl(auVar28,8);
        auVar28 = vpmulhuw_avx512vl(auVar28,auVar21);
        auVar29 = vpmovzxbw_avx512vl(auVar29._0_16_);
        auVar29 = vpsllw_avx512vl(auVar29,8);
        auVar29 = vpmulhuw_avx512vl(auVar29,auVar22);
        auVar28 = vpaddusw_avx512vl(auVar28,auVar29);
        auVar27 = vpmovzxbw_avx2(auVar27._0_16_);
        auVar27 = vpsllw_avx2(auVar27,8);
        auVar27 = vpmulhuw_avx512vl(auVar27,auVar23);
        auVar27 = vpaddusw_avx512vl(auVar28,auVar27);
        auVar27 = vpaddusw_avx512vl(auVar27,auVar24);
        auVar27 = vpsrlw_avx512vl(auVar27,7);
        auVar27 = vpackuswb_avx512vl(auVar27,auVar27);
        auVar27 = vpermq_avx2(auVar27,0xd8);
        *pauVar9 = auVar27._0_16_;
        pauVar9 = pauVar9 + 1;
      }
      if (iVar3 < (int)(uint)param_5) {
        if (((longlong)pauVar9 - (longlong)pauVar7 <
             ((longlong)(int)(uint)param_5 - (longlong)iVar3) * 4 + -1) &&
           (-((longlong)pauVar9 - (longlong)pauVar7) <
            (longlong)(int)(uint)param_5 - (longlong)iVar3)) {
          iVar14 = 1;
          uVar4 = (uint)param_5 - iVar3 >> 1;
          uVar15 = 0;
          if (uVar4 != 0) {
            do {
              uVar12 = uVar15;
              (*pauVar9)[uVar12 * 2] =
                   (char)((uint)(byte)(*pauVar7)[uVar12 * 8] * iVar5 +
                          (uint)(byte)(*pauVar7)[uVar12 * 8 + 1] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar7)[uVar12 * 8 + 2] * iVar2 >> 0xf);
              (*pauVar9)[uVar12 * 2 + 1] =
                   (char)((uint)(byte)(*pauVar7)[uVar12 * 8 + 4] * iVar5 +
                          (uint)(byte)(*pauVar7)[uVar12 * 8 + 5] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar7)[uVar12 * 8 + 6] * iVar2 >> 0xf);
              uVar15 = uVar12 + 1;
            } while (uVar15 < uVar4);
            iVar14 = (int)uVar12 + 2 + (int)uVar15;
          }
          if (iVar14 - 1U < (uint)param_5 - iVar3) {
            lVar11 = (longlong)iVar14;
            pauVar9[-1][lVar11 + 0xf] =
                 (char)((uint)(byte)pauVar7[-1][lVar11 * 4 + 0x1c] * iVar5 +
                        (uint)(byte)pauVar7[-1][lVar11 * 4 + 0x1d] * iVar8 + 0x4000 +
                        (uint)(byte)pauVar7[-1][lVar11 * 4 + 0x1e] * iVar2 >> 0xf);
          }
        }
        else {
          uVar4 = ((uint)param_5 - (iVar3 + 1)) + 1;
          if ((int)uVar4 < 0x40) {
LAB_14000dfaa:
            uVar6 = 0;
          }
          else {
            if ((int)uVar4 < 0x2580) {
              uVar15 = 0;
              uVar6 = uVar4 & 0xffffffc0;
            }
            else {
              uVar15 = (ulonglong)pauVar9 & 0x3f;
              if ((int)uVar15 != 0) {
                uVar15 = (ulonglong)(0x40 - (int)uVar15);
              }
              iVar3 = (int)uVar15;
              if ((int)uVar4 < iVar3 + 0x40) goto LAB_14000dfaa;
              uVar12 = 0;
              uVar6 = uVar4 - (uVar4 - iVar3 & 0x3f);
              if (iVar3 != 0) {
                do {
                  (*pauVar9)[uVar12] =
                       (char)((uint)(byte)(*pauVar7)[uVar12 * 4] * iVar5 +
                              (uint)(byte)(*pauVar7)[uVar12 * 4 + 1] * iVar8 + 0x4000 +
                              (uint)(byte)(*pauVar7)[uVar12 * 4 + 2] * iVar2 >> 0xf);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar15);
              }
            }
            lVar11 = uVar15 * 4;
            do {
              auVar17 = vpinsrb_avx(ZEXT116((byte)(*pauVar7)[lVar11 + 2]),
                                    (uint)(byte)(*pauVar7)[lVar11 + 6],1);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11 + 8],2);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11 + 0x18],3);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11 + 8],4);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11 + 0x18],5);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11 + 8],6);
              auVar18 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[2][lVar11 + 2]),
                                         (uint)(byte)pauVar7[8][lVar11 + 0x18],0x11);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11 + 0x18],7);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11 + 8],0x12);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[1][lVar11 + 2],8);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11 + 0x18],0x13);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x18],9);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[10][lVar11 + 8],0x14);
              auVar19 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 8],10);
              auVar17 = vpinsrb_avx(auVar18,(uint)(byte)pauVar7[2][lVar11 + 0x16],0x15);
              auVar18 = vpinsrb_avx(auVar19,(uint)(byte)pauVar7[1][lVar11 + 0xe],0xb);
              auVar19 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xb][lVar11 + 8],0x16);
              auVar17 = vpinsrb_avx(auVar18,(uint)(byte)pauVar7[1][lVar11 + 0x12],0xc);
              auVar18 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar7[0xb][lVar11 + 0x18],0x17);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[1][lVar11 + 0x16],0xd);
              auVar18 = vpinsrb_avx(auVar18,(uint)(byte)pauVar7[3][lVar11 + 2],0x18);
              auVar19 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 8],0xe);
              auVar17 = vpinsrb_avx(auVar18,(uint)(byte)pauVar7[3][lVar11 + 6],0x19);
              auVar18 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar7[7][lVar11 + 0x18],0xf);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xd][lVar11 + 8],0x1a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xd][lVar11 + 0x18],0x1b);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xe][lVar11 + 8],0x1c);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xe][lVar11 + 0x18],0x1d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xf][lVar11 + 8],0x1e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[0xf][lVar11 + 0x18],0x1f);
              auVar19 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[4][lVar11 + 2]),
                                         (uint)(byte)pauVar7[4][lVar11 + 6],0x21);
              auVar35 = vinserti32x4_avx512f(ZEXT1664(auVar18),auVar17,1);
              auVar17 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar7[4][lVar11 + 10],0x22);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0xe],0x23);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x12],0x24);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x16],0x25);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x1a],0x26);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x1e],0x27);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 2],0x28);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 6],0x29);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 10],0x2a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0xe],0x2b);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x12],0x2c);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x16],0x2d);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x1a],0x2e);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x1e],0x2f);
              auVar35 = vinserti32x4_avx512f(auVar35,auVar17,2);
              auVar17 = vpinsrb_avx(ZEXT116((byte)pauVar7[6][lVar11 + 2]),
                                    (uint)(byte)pauVar7[6][lVar11 + 6],0x31);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 10],0x32);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0xe],0x33);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x12],0x34);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x16],0x35);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x1a],0x36);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x1e],0x37);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 2],0x38);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 6],0x39);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[7][lVar11 + 10],0x3a);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0xe],0x3b);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x12],0x3c);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x16],0x3d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x1a],0x3e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x1e],0x3f);
              auVar35 = vinserti32x4_avx512f(auVar35,auVar17,3);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)(*pauVar7)[lVar11 + 1]),
                                         (uint)(byte)(*pauVar7)[lVar11 + 0x14],1);
              auVar18 = vextracti32x4_avx512f(auVar35,1);
              auVar19 = vextracti32x4_avx512f(auVar35,2);
              auVar20 = vextracti32x4_avx512f(auVar35,0);
              auVar36 = vpmovzxbd_avx512f(auVar18);
              auVar37 = vpmovzxbd_avx512f(auVar19);
              auVar18 = vextracti32x4_avx512f(auVar35,3);
              auVar35 = vpmovzxbd_avx512f(auVar20);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11 + 4],2);
              auVar38 = vpmovzxbd_avx512f(auVar18);
              auVar36 = vpmulld_avx512f(auVar34,auVar36);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11 + 0x14],3);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11 + 4],4);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11 + 0x14],5);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11 + 4],6);
              auVar35 = vpmulld_avx512f(auVar34,auVar35);
              auVar38 = vpmulld_avx512f(auVar34,auVar38);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11 + 0x14],7);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[1][lVar11 + 1],8);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x14],9);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 4],10);
              auVar18 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[2][lVar11 + 1]),
                                         (uint)(byte)pauVar7[8][lVar11 + 0x14],0x11);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x14],0xb);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11 + 4],0x12);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 4],0xc);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11 + 0x14],0x13);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x14],0xd);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[10][lVar11 + 4],0x14);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 4],0xe);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[10][lVar11 + 0x14],0x15);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x14],0xf);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xb][lVar11 + 4],0x16);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xb][lVar11 + 0x14],0x17);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xc][lVar11 + 4],0x18);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xc][lVar11 + 0x14],0x19);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xd][lVar11 + 4],0x1a);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xd][lVar11 + 0x14],0x1b);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xe][lVar11 + 4],0x1c);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xe][lVar11 + 0x14],0x1d);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xf][lVar11 + 4],0x1e);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xf][lVar11 + 0x14],0x1f);
              auVar39 = vinserti32x4_avx512f(ZEXT1664(auVar17),auVar18,1);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[4][lVar11 + 1]),
                                         (uint)(byte)pauVar7[4][lVar11 + 5],0x21);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 9],0x22);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0xd],0x23);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x11],0x24);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x15],0x25);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x19],0x26);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x1d],0x27);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 1],0x28);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 5],0x29);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 9],0x2a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0xd],0x2b);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x11],0x2c);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x15],0x2d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x19],0x2e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x1d],0x2f);
              auVar39 = vinserti32x4_avx512f(auVar39,auVar17,2);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[6][lVar11 + 1]),
                                         (uint)(byte)pauVar7[6][lVar11 + 5],0x31);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 9],0x32);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0xd],0x33);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x11],0x34);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x15],0x35);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x19],0x36);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x1d],0x37);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 1],0x38);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 5],0x39);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 9],0x3a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0xd],0x3b);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x11],0x3c);
              auVar17 = vpinsrb_avx(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x15],0x3d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x19],0x3e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x1d],0x3f);
              auVar39 = vinserti32x4_avx512f(auVar39,auVar17,3);
              auVar17 = vextracti32x4_avx512f(auVar39,0);
              auVar18 = vextracti32x4_avx512f(auVar39,1);
              auVar19 = vextracti32x4_avx512f(auVar39,2);
              auVar40 = vpmovzxbd_avx512f(auVar17);
              auVar41 = vpmovzxbd_avx512f(auVar18);
              auVar42 = vpmovzxbd_avx512f(auVar19);
              auVar18 = vextracti32x4_avx512f(auVar39,3);
              auVar39 = vpmulld_avx512f(auVar33,auVar41);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)(*pauVar7)[lVar11]),
                                         (uint)(byte)(*pauVar7)[lVar11 + 0x10],1);
              auVar41 = vpmulld_avx512f(auVar33,auVar42);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11],2);
              auVar40 = vpmulld_avx512f(auVar33,auVar40);
              auVar42 = vpmovzxbd_avx512f(auVar18);
              auVar42 = vpmulld_avx512f(auVar33,auVar42);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[1][lVar11 + 0x10],3);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11],4);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[2][lVar11 + 0x10],5);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11],6);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[3][lVar11 + 0x10],7);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11],8);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x10],9);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11],10);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x10],0xb);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11],0xc);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x10],0xd);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11],0xe);
              auVar18 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[2][lVar11]),
                                         (uint)(byte)pauVar7[8][lVar11 + 0x10],0x11);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x10],0xf);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11],0x12);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[9][lVar11 + 0x10],0x13);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[10][lVar11],0x14);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[10][lVar11 + 0x10],0x15);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xb][lVar11],0x16);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xb][lVar11 + 0x10],0x17);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xc][lVar11],0x18);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xc][lVar11 + 0x10],0x19);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xd][lVar11],0x1a);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xd][lVar11 + 0x10],0x1b);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xe][lVar11],0x1c);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xe][lVar11 + 0x10],0x1d);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xf][lVar11],0x1e);
              auVar18 = vpinsrb_avx512bw(auVar18,(uint)(byte)pauVar7[0xf][lVar11 + 0x10],0x1f);
              auVar43 = vinserti32x4_avx512f(ZEXT1664(auVar17),auVar18,1);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[4][lVar11]),
                                         (uint)(byte)pauVar7[4][lVar11 + 4],0x21);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 8],0x22);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0xc],0x23);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x10],0x24);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x14],0x25);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x18],0x26);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[4][lVar11 + 0x1c],0x27);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11],0x28);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 4],0x29);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 8],0x2a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0xc],0x2b);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x10],0x2c);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x14],0x2d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x18],0x2e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[5][lVar11 + 0x1c],0x2f);
              auVar43 = vinserti32x4_avx512f(auVar43,auVar17,2);
              auVar17 = vpinsrb_avx512bw(ZEXT116((byte)pauVar7[6][lVar11]),
                                         (uint)(byte)pauVar7[6][lVar11 + 4],0x31);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 8],0x32);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0xc],0x33);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x10],0x34);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x14],0x35);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x18],0x36);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[6][lVar11 + 0x1c],0x37);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11],0x38);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 4],0x39);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 8],0x3a);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0xc],0x3b);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x10],0x3c);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x14],0x3d);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x18],0x3e);
              auVar17 = vpinsrb_avx512bw(auVar17,(uint)(byte)pauVar7[7][lVar11 + 0x1c],0x3f);
              lVar11 = lVar11 + 0x100;
              auVar43 = vinserti32x4_avx512f(auVar43,auVar17,3);
              auVar17 = vextracti32x4_avx512f(auVar43,0);
              auVar44 = vpmovzxbd_avx512f(auVar17);
              auVar44 = vpmulld_avx512f(auVar32,auVar44);
              auVar40 = vpaddd_avx512f(auVar44,auVar40);
              auVar35 = vpaddd_avx512f(auVar40,auVar35);
              auVar35 = vpaddd_avx512f(auVar35,auVar1);
              auVar17 = vextracti32x4_avx512f(auVar43,1);
              auVar35 = vpsrad_avx512f(auVar35,0xf);
              auVar40 = vpmovzxbd_avx512f(auVar17);
              auVar17 = vpmovdb_avx512f(auVar35);
              auVar35 = vpmulld_avx512f(auVar32,auVar40);
              auVar35 = vpaddd_avx512f(auVar35,auVar39);
              auVar35 = vpaddd_avx512f(auVar35,auVar36);
              auVar35 = vpaddd_avx512f(auVar35,auVar1);
              auVar18 = vextracti32x4_avx512f(auVar43,2);
              auVar19 = vextracti32x4_avx512f(auVar43,3);
              auVar35 = vpsrad_avx512f(auVar35,0xf);
              auVar36 = vpmovzxbd_avx512f(auVar18);
              auVar39 = vpmovzxbd_avx512f(auVar19);
              auVar18 = vpmovdb_avx512f(auVar35);
              auVar35 = vinserti32x4_avx512f(ZEXT1664(auVar17),auVar18,1);
              auVar36 = vpmulld_avx512f(auVar32,auVar36);
              auVar36 = vpaddd_avx512f(auVar36,auVar41);
              auVar37 = vpmulld_avx512f(auVar34,auVar37);
              auVar36 = vpaddd_avx512f(auVar36,auVar37);
              auVar36 = vpaddd_avx512f(auVar36,auVar1);
              auVar36 = vpsrad_avx512f(auVar36,0xf);
              auVar17 = vpmovdb_avx512f(auVar36);
              auVar35 = vinserti32x4_avx512f(auVar35,auVar17,2);
              auVar36 = vpmulld_avx512f(auVar32,auVar39);
              auVar36 = vpaddd_avx512f(auVar36,auVar42);
              auVar36 = vpaddd_avx512f(auVar36,auVar38);
              auVar36 = vpaddd_avx512f(auVar36,auVar1);
              auVar36 = vpsrad_avx512f(auVar36,0xf);
              auVar17 = vpmovdb_avx512f(auVar36);
              auVar35 = vinserti32x4_avx512f(auVar35,auVar17,3);
              auVar35 = vmovdqu32_avx512f(auVar35);
              *(undefined1 (*) [64])(*pauVar9 + uVar15) = auVar35;
              uVar15 = uVar15 + 0x40;
            } while (uVar15 < (ulonglong)(longlong)(int)uVar6);
          }
          uVar13 = 0;
          lVar11 = 0;
          if (uVar6 + 1 <= uVar4) {
            do {
              iVar3 = uVar13 * 4;
              uVar13 = uVar13 + 1;
              lVar16 = (longlong)(int)(iVar3 + uVar6 * 4);
              (*pauVar9)[lVar11 + (int)uVar6] =
                   (char)((uint)(byte)(*pauVar7)[lVar16] * iVar5 +
                          (uint)(byte)(*pauVar7)[lVar16 + 1] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar7)[lVar16 + 2] * iVar2 >> 0xf);
              lVar11 = lVar11 + 1;
            } while (uVar13 < uVar4 - uVar6);
          }
        }
      }
      uVar10 = uVar10 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (uVar10 < param_5._4_4_);
  }
  return;
}

