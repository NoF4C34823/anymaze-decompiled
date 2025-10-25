
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ed00(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [16],int param_4,
                  ulonglong param_5,uint *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  int iVar8;
  undefined1 (*pauVar9) [32];
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  
  auVar4 = _DAT_1430862c0;
  auVar3 = _DAT_1430862a0;
  if (param_6 == (uint *)0x0) {
    iVar12 = 0x2646;
    iVar8 = 0x4b23;
    iVar5 = 0xe98;
  }
  else {
    auVar21 = ZEXT416(_DAT_1430862e4);
    auVar19 = vfmadd213ss_avx512f(ZEXT416(*param_6),auVar21,ZEXT416(_DAT_1430862e0));
    auVar20 = vfmadd213ss_avx512f(ZEXT416(param_6[1]),auVar21,ZEXT416(_DAT_1430862e0));
    auVar21 = vfmadd213ss_avx512f(auVar21,ZEXT416(param_6[2]),ZEXT416(_DAT_1430862e0));
    iVar12 = (int)auVar19._0_4_;
    iVar8 = (int)auVar20._0_4_;
    iVar5 = (int)auVar21._0_4_;
  }
  uVar10 = 0;
  auVar22 = vpbroadcastw_avx512vl();
  auVar23 = vpbroadcastw_avx512vl();
  auVar24 = vpbroadcastw_avx512vl();
  auVar25 = vmovdqu32_avx512vl(_DAT_1430861c0);
  auVar26 = vmovdqu32_avx512vl(_DAT_1430861e0);
  auVar27 = vmovdqu32_avx512vl(_DAT_143086200);
  auVar28 = vmovdqu32_avx512vl(_DAT_143086220);
  auVar29 = vmovdqu32_avx512vl(_DAT_143086240);
  auVar30 = vmovdqu32_avx512vl(_DAT_143086260);
  auVar31 = vmovdqu32_avx512vl(_DAT_143086280);
  if (0 < (int)param_5._4_4_) {
    uVar7 = (uint)param_5 & 0xf;
    auVar32 = vpbroadcastd_avx512vl();
    auVar33 = vpbroadcastd_avx512vl();
    auVar34 = vpbroadcastd_avx512vl();
    do {
      uVar15 = 0;
      lVar13 = 0;
      pauVar6 = param_3;
      pauVar9 = param_1;
      if (0 < (int)((uint)param_5 & 0xffffffe0)) {
        do {
          uVar15 = uVar15 + 1;
          auVar35 = vmovdqu32_avx512vl(pauVar9[2]);
          auVar36 = vshufi32x4_avx512vl(*pauVar9,auVar35,1);
          auVar37 = vshufi32x4_avx512vl(*pauVar9,pauVar9[1],2);
          auVar35 = vshufi32x4_avx512vl(pauVar9[1],auVar35,2);
          auVar38 = vpandd_avx512vl(auVar36,auVar27);
          auVar39 = vpandd_avx512vl(auVar36,auVar26);
          auVar36 = vpandd_avx512vl(auVar36,auVar28);
          auVar38 = vpternlogd_avx512vl(auVar38,auVar37,auVar26,0xf8);
          auVar39 = vpternlogd_avx512vl(auVar39,auVar37,auVar28,0xf8);
          auVar36 = vpternlogd_avx512vl(auVar36,auVar37,auVar27,0xf8);
          auVar37 = vpternlogd_avx512vl(auVar38,auVar35,auVar28,0xf8);
          auVar38 = vpternlogd_avx512vl(auVar39,auVar35,auVar27,0xf8);
          auVar35 = vpternlogd_avx512vl(auVar36,auVar35,auVar26,0xf8);
          auVar36 = vpshufb_avx512vl(auVar37,auVar29);
          auVar37 = vpshufb_avx512vl(auVar38,auVar30);
          auVar35 = vpshufb_avx512vl(auVar35,auVar31);
          auVar38 = vpmovzxbw_avx512vl(auVar35._0_16_);
          auVar38 = vpsllw_avx512vl(auVar38,8);
          auVar38 = vpmulhuw_avx512vl(auVar38,auVar24);
          auVar39 = vpermq_avx512vl(auVar35,0xee);
          auVar35 = vpmovzxbw_avx512vl(auVar37._0_16_);
          auVar35 = vpsllw_avx512vl(auVar35,8);
          auVar35 = vpmulhuw_avx512vl(auVar35,auVar23);
          auVar38 = vpaddusw_avx512vl(auVar38,auVar35);
          auVar35 = vpermq_avx2(auVar37,0xee);
          auVar37 = vpmovzxbw_avx512vl(auVar36._0_16_);
          auVar37 = vpsllw_avx512vl(auVar37,8);
          auVar37 = vpmulhuw_avx512vl(auVar37,auVar22);
          auVar37 = vpaddusw_avx512vl(auVar38,auVar37);
          auVar37 = vpaddusw_avx512vl(auVar37,auVar25);
          auVar37 = vpsrlw_avx512vl(auVar37,7);
          auVar36 = vpermq_avx2(auVar36,0xee);
          auVar38 = vpmovzxbw_avx512vl(auVar39._0_16_);
          auVar38 = vpsllw_avx512vl(auVar38,8);
          auVar38 = vpmulhuw_avx512vl(auVar38,auVar24);
          auVar35 = vpmovzxbw_avx512vl(auVar35._0_16_);
          auVar35 = vpsllw_avx512vl(auVar35,8);
          auVar35 = vpmulhuw_avx512vl(auVar35,auVar23);
          auVar38 = vpaddusw_avx512vl(auVar38,auVar35);
          auVar35 = vpmovzxbw_avx2(auVar36._0_16_);
          auVar35 = vpsllw_avx512vl(auVar35,8);
          auVar35 = vpmulhuw_avx512vl(auVar35,auVar22);
          auVar35 = vpaddusw_avx512vl(auVar38,auVar35);
          auVar35 = vpaddusw_avx512vl(auVar35,auVar25);
          auVar35 = vpsrlw_avx512vl(auVar35,7);
          auVar35 = vpackuswb_avx512vl(auVar37,auVar35);
          auVar35 = vpermq_avx512vl(auVar35,0xd8);
          *(undefined1 (*) [32])(*param_3 + lVar13) = auVar35;
          lVar13 = lVar13 + 0x20;
          pauVar9 = pauVar9 + 3;
        } while (uVar15 < ((uint)param_5 & 0xffffffe0) + 0x1f >> 5);
        pauVar6 = param_3 + uVar15 * 2;
        pauVar9 = param_1 + uVar15 * 3;
      }
      if ((param_5 & 0x10) != 0) {
        auVar36 = vmovdqu32_avx512vl(*pauVar9);
        auVar35 = vpmaskmovq_avx2(auVar3,pauVar9[1]);
        auVar37 = vshufi32x4_avx512vl(auVar36,auVar36,1);
        auVar38 = vpandd_avx512vl(auVar37,auVar28);
        pauVar9 = (undefined1 (*) [32])(pauVar9[1] + 0x10);
        auVar38 = vpternlogd_avx512vl(auVar38,auVar36,auVar27,0xf8);
        auVar38 = vpternlogd_avx512vl(auVar38,auVar35,auVar26,0xf8);
        auVar38 = vpshufb_avx512vl(auVar38,auVar31);
        auVar39 = vpandd_avx512vl(auVar37,auVar26);
        auVar37 = vpandd_avx512vl(auVar37,auVar27);
        auVar39 = vpternlogd_avx512vl(auVar39,auVar36,auVar28,0xf8);
        auVar36 = vpternlogd_avx512vl(auVar37,auVar36,auVar26,0xf8);
        auVar37 = vpternlogd_avx512vl(auVar39,auVar35,auVar27,0xf8);
        auVar35 = vpternlogd_avx512vl(auVar36,auVar35,auVar28,0xf8);
        auVar35 = vpshufb_avx512vl(auVar35,auVar29);
        auVar36 = vpmovzxbw_avx512vl(auVar38._0_16_);
        auVar36 = vpsllw_avx512vl(auVar36,8);
        auVar37 = vpshufb_avx512vl(auVar37,auVar30);
        auVar36 = vpmulhuw_avx512vl(auVar36,auVar24);
        auVar37 = vpmovzxbw_avx512vl(auVar37._0_16_);
        auVar37 = vpsllw_avx512vl(auVar37,8);
        auVar37 = vpmulhuw_avx512vl(auVar37,auVar23);
        auVar36 = vpaddusw_avx512vl(auVar36,auVar37);
        auVar35 = vpmovzxbw_avx512vl(auVar35._0_16_);
        auVar35 = vpsllw_avx512vl(auVar35,8);
        auVar35 = vpmulhuw_avx512vl(auVar35,auVar22);
        auVar35 = vpaddusw_avx512vl(auVar36,auVar35);
        auVar35 = vpaddusw_avx512vl(auVar35,auVar25);
        auVar35 = vpsrlw_avx512vl(auVar35,7);
        auVar35 = vpackuswb_avx512vl(auVar35,auVar35);
        auVar35 = vpermq_avx512vl(auVar35,0xd8);
        auVar19 = vmovdqu32_avx512vl(auVar35._0_16_);
        *pauVar6 = auVar19;
        pauVar6 = pauVar6 + 1;
      }
      if ((param_5 & 0xf) != 0) {
        if (((longlong)pauVar6 - (longlong)pauVar9 < (longlong)((ulonglong)uVar7 * 3)) &&
           (-((longlong)pauVar6 - (longlong)pauVar9) < (longlong)(ulonglong)uVar7)) {
          iVar14 = 1;
          lVar13 = 0;
          uVar15 = 0;
          if (uVar7 >> 1 != 0) {
            do {
              uVar16 = uVar15;
              (*pauVar6)[uVar16 * 2] =
                   (char)((uint)(byte)(*pauVar9)[lVar13] * iVar12 +
                          (uint)(byte)(*pauVar9)[lVar13 + 1] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar9)[lVar13 + 2] * iVar5 >> 0xf);
              lVar11 = lVar13 + 3;
              lVar1 = lVar13 + 4;
              lVar2 = lVar13 + 5;
              lVar13 = lVar13 + 6;
              (*pauVar6)[uVar16 * 2 + 1] =
                   (char)((uint)(byte)(*pauVar9)[lVar11] * iVar12 +
                          (uint)(byte)(*pauVar9)[lVar1] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar9)[lVar2] * iVar5 >> 0xf);
              uVar15 = uVar16 + 1;
            } while (uVar15 < uVar7 >> 1);
            iVar14 = (int)uVar16 + 2 + (int)uVar15;
          }
          if (iVar14 - 1U < uVar7) {
            lVar13 = (longlong)iVar14 * 3;
            pauVar6[-1][(longlong)iVar14 + 0xf] =
                 (char)((uint)(byte)pauVar9[-1][lVar13 + 0x1d] * iVar12 +
                        (uint)(byte)pauVar9[-1][lVar13 + 0x1e] * iVar8 + 0x4000 +
                        (uint)(byte)pauVar9[-1][lVar13 + 0x1f] * iVar5 >> 0xf);
          }
        }
        else {
          if (uVar7 < 8) {
            uVar15 = 0;
          }
          else {
            uVar16 = 0;
            uVar15 = (ulonglong)((uint)param_5 & 8);
            lVar13 = 0;
            do {
              auVar19 = vpinsrb_avx512bw(ZEXT116((byte)(*pauVar9)[lVar13 + 2]),
                                         (uint)(byte)(*pauVar9)[lVar13 + 0x14],1);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[1][lVar13],2);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[1][lVar13 + 0xc],3);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[1][lVar13 + 0x18],4);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 4],5);
              auVar20 = vpinsrb_avx512bw(ZEXT116((byte)(*pauVar9)[lVar13 + 1]),
                                         (uint)(byte)(*pauVar9)[lVar13 + 0x10],1);
              auVar19 = vpinsrb_avx(auVar19,(uint)(byte)(*pauVar9)[lVar13 + 0x14],6);
              auVar20 = vpinsrb_avx512bw(auVar20,(uint)(byte)(*pauVar9)[lVar13 + 0x1c],2);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 0x1c],7);
              auVar20 = vpinsrb_avx512bw(auVar20,(uint)(byte)pauVar9[1][lVar13 + 8],3);
              auVar35 = vpmovzxbd_avx512vl(auVar19);
              auVar19 = vpinsrb_avx512bw(auVar20,(uint)(byte)pauVar9[1][lVar13 + 0x14],4);
              auVar35 = vpmulld_avx512vl(auVar34,auVar35);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13],5);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 0xc],6);
              auVar20 = vpinsrb_avx512bw(ZEXT116((byte)(*pauVar9)[lVar13]),
                                         (uint)(byte)(*pauVar9)[lVar13 + 0xc],1);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 0x18],7);
              auVar20 = vpinsrb_avx512bw(auVar20,(uint)(byte)(*pauVar9)[lVar13 + 0x18],2);
              auVar36 = vpmovzxbd_avx512vl(auVar19);
              auVar19 = vpinsrb_avx512bw(auVar20,(uint)(byte)pauVar9[1][lVar13 + 4],3);
              auVar36 = vpmulld_avx512vl(auVar33,auVar36);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[1][lVar13 + 0x10],4);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[1][lVar13 + 0x1c],5);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 8],6);
              auVar19 = vpinsrb_avx512bw(auVar19,(uint)(byte)pauVar9[2][lVar13 + 0x14],7);
              lVar13 = lVar13 + 0x18;
              auVar37 = vpmovzxbd_avx512vl(auVar19);
              auVar37 = vpmulld_avx512vl(auVar32,auVar37);
              auVar36 = vpaddd_avx512vl(auVar37,auVar36);
              auVar35 = vpaddd_avx2(auVar36,auVar35);
              auVar35 = vpaddd_avx2(auVar35,auVar4);
              auVar35 = vpsrad_avx2(auVar35,0xf);
              auVar19 = vpmovdb_avx512vl(auVar35);
              *(longlong *)(*pauVar6 + uVar16) = auVar19._0_8_;
              uVar16 = uVar16 + 8;
            } while (uVar16 < ((uint)param_5 & 8));
          }
          uVar18 = 0;
          iVar14 = (int)uVar15;
          iVar17 = 0;
          lVar13 = 0;
          if (iVar14 + 1U <= uVar7) {
            do {
              uVar18 = uVar18 + 1;
              lVar11 = (longlong)(iVar14 * 3 + iVar17);
              iVar17 = iVar17 + 3;
              (*pauVar6)[lVar13 + uVar15] =
                   (char)((uint)(byte)(*pauVar9)[lVar11] * iVar12 +
                          (uint)(byte)(*pauVar9)[lVar11 + 1] * iVar8 + 0x4000 +
                          (uint)(byte)(*pauVar9)[lVar11 + 2] * iVar5 >> 0xf);
              lVar13 = lVar13 + 1;
            } while (uVar18 < uVar7 - iVar14);
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

