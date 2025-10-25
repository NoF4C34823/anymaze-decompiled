
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140009860(ulonglong param_1,int param_2,longlong param_3,int param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  longlong lVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
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
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar37 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar38 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar41 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auStack_198 [80];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  longlong lStack_d8;
  int iStack_d0;
  uint uStack_c8;
  longlong lStack_c0;
  undefined1 (*pauStack_b8) [32];
  undefined4 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined2 auStack_80 [28];
  ulonglong uStack_48;
  
  auVar6 = _DAT_143085c00;
  auVar37 = in_ZMM1._0_32_;
  auVar38 = in_ZMM2._0_32_;
  uStack_48 = _DAT_1436b4680 ^ (ulonglong)auStack_198;
  lStack_a8 = (longlong)param_4;
  lStack_a0 = (longlong)param_2;
  if ((param_1 == 0) || (param_3 == 0)) {
    if ((uStack_48 ^ (ulonglong)auStack_198) == _DAT_1436b4680) {
      return 0xfffffff8;
    }
  }
  else {
    if ((0 < (int)(uint)param_5) && (0 < param_5._4_4_)) {
      auVar16 = vmovdqu32_avx512vl(_DAT_143085a40);
      auVar17 = vmovdqu32_avx512vl(_DAT_143085a60);
      auVar18 = vmovdqu32_avx512vl(_DAT_143085a80);
      auVar19 = vmovdqu32_avx512vl(_DAT_143085aa0);
      auVar20 = vmovdqu32_avx512vl(_DAT_143085ac0);
      auVar21 = vmovdqu32_avx512vl(_DAT_143085ae0);
      auVar22 = vmovdqu32_avx512vl(_DAT_143085b00);
      auVar23 = vmovdqu32_avx512vl(_DAT_143085b20);
      auVar24 = vmovdqu32_avx512vl(_DAT_143085b40);
      auVar25 = vmovdqu32_avx512vl(_DAT_143085b60);
      auVar26 = vmovdqu32_avx512vl(_DAT_143085b80);
      auVar27 = vmovdqu32_avx512vl(_DAT_143085ba0);
      auVar28 = vmovdqu32_avx512vl(_DAT_143085bc0);
      auVar29 = vmovdqu32_avx512vl(_DAT_143085be0);
      if ((param_5 & 0xf) == 0) {
        uVar13 = 0;
        uVar8 = param_1;
        auVar5 = _DAT_143085c00;
      }
      else {
        uVar13 = (uint)param_5 & 0xe;
        param_2 = uVar13 * 2;
        auVar37 = _DAT_143696360;
        if (uVar13 == 0xe) {
          auVar37 = _DAT_143696380;
        }
        uVar14 = (ulonglong)(((uint)param_5 & 0xf) >> 1);
        if (uVar14 != 0) {
          uVar14 = uVar14 - 1;
        }
        auVar38 = *(undefined1 (*) [32])(uVar14 * 0x20 + 0x143696440);
        uVar8 = (ulonglong)(uVar13 * 3);
        auVar5 = *(undefined1 (*) [32])(&DAT_143696360 + uVar14 * 0x20);
      }
      lStack_c0 = (longlong)param_2;
      uVar14 = -((ulonglong)auStack_88 & 0x1f) & 0x1f;
      uStack_c8 = (uint)uVar8;
      pauStack_b8 = (undefined1 (*) [32])(auStack_88 + uVar14);
      iStack_d0 = (int)uStack_c8 / 3;
      uStack_b0 = 0;
      lStack_d8 = (longlong)(int)uStack_c8;
      uStack_c8 = uStack_c8 & 3;
      lVar10 = 0;
      lVar7 = 0;
      auStack_148 = in_ZMM9._0_16_;
      auStack_138 = in_ZMM10._0_16_;
      iVar12 = 0;
      do {
        pauVar15 = (undefined1 (*) [32])(param_3 + lVar7);
        iVar11 = 0;
        pauVar9 = (undefined1 (*) [32])(param_1 + lVar10);
        if (0 < (int)((uint)param_5 & 0xffffffe0)) {
          do {
            iVar11 = iVar11 + 0x20;
            auVar30 = vshufi32x4_avx512vl(*pauVar9,pauVar9[2],1);
            auVar31 = vshufi32x4_avx512vl(*pauVar9,pauVar9[1],2);
            auVar32 = vshufi32x4_avx512vl(pauVar9[1],pauVar9[2],2);
            auVar33 = vpandd_avx512vl(auVar30,auVar24);
            auVar34 = vpandd_avx512vl(auVar30,auVar26);
            auVar30 = vpandd_avx512vl(auVar30,auVar25);
            auVar33 = vpternlogd_avx512vl(auVar33,auVar31,auVar26,0xf8);
            auVar34 = vpternlogd_avx512vl(auVar34,auVar31,auVar25,0xf8);
            auVar30 = vpternlogd_avx512vl(auVar30,auVar31,auVar24,0xf8);
            auVar31 = vpternlogd_avx512vl(auVar33,auVar32,auVar25,0xf8);
            auVar33 = vpternlogd_avx512vl(auVar34,auVar32,auVar24,0xf8);
            auVar30 = vpternlogd_avx512vl(auVar30,auVar32,auVar26,0xf8);
            auVar32 = vpshufb_avx512vl(auVar31,auVar28);
            auVar33 = vpshufb_avx512vl(auVar33,auVar29);
            auVar34 = vpshufb_avx512vl(auVar30,auVar27);
            pauVar9 = pauVar9 + 3;
            auVar31 = vpmovzxbw_avx2(auVar33._0_16_);
            auVar35 = vpmovzxbw_avx512vl(auVar32._0_16_);
            auVar30 = vphaddsw_avx2(auVar31,auVar35);
            auVar39 = vpsllw_avx2(auVar35,8);
            auVar40 = vpsllw_avx2(auVar31,8);
            auVar35 = vpermq_avx512vl(auVar32,0xee);
            auVar36 = vpsllw_avx512vl(auVar30,6);
            auVar39 = vpmulhuw_avx512vl(auVar39,auVar17);
            auVar32 = vpermq_avx2(auVar33,0xee);
            auVar31 = vpmovzxbw_avx2(auVar34._0_16_);
            auVar30 = vphaddsw_avx2(auVar31,auVar31);
            auVar31 = vpsllw_avx2(auVar31,8);
            auVar31 = vpmulhuw_avx512vl(auVar31,auVar16);
            auVar34 = vpermq_avx512vl(auVar34,0xee);
            auVar32 = vpmovzxbw_avx2(auVar32._0_16_);
            auVar30 = vpsllw_avx2(auVar30,6);
            auVar30 = vpunpcklwd_avx2(auVar30,auVar30);
            auVar33 = vpmovzxbw_avx2(auVar35._0_16_);
            auVar31 = vpaddusw_avx2(auVar31,auVar39);
            auVar35 = vpunpckhwd_avx512vl(auVar36,auVar36);
            auVar36 = vpunpcklwd_avx512vl(auVar36,auVar36);
            auVar30 = vpmulhw_avx512vl(auVar30,auVar19);
            auVar35 = vpmulhw_avx512vl(auVar35,auVar20);
            auVar36 = vpmulhw_avx512vl(auVar36,auVar21);
            auVar30 = vpaddw_avx2(auVar30,auVar35);
            auVar35 = vpaddw_avx512vl(auVar30,auVar36);
            auVar30 = vphaddsw_avx2(auVar32,auVar33);
            auVar39 = vpsllw_avx2(auVar32,8);
            auVar41 = vpsllw_avx2(auVar33,8);
            auVar32 = vpmovzxbw_avx512vl(auVar34._0_16_);
            auVar33 = vpmulhuw_avx512vl(auVar40,auVar18);
            auVar36 = vpsllw_avx2(auVar32,8);
            auVar31 = vpaddusw_avx512vl(auVar31,auVar33);
            auVar33 = vpaddw_avx512vl(auVar35,auVar23);
            auVar34 = vpsllw_avx512vl(auVar30,6);
            auVar31 = vpaddusw_avx512vl(auVar31,auVar22);
            auVar35 = vpsrlw_avx2(auVar33,7);
            auVar30 = vphaddsw_avx2(auVar32,auVar32);
            auVar32 = vpmulhuw_avx512vl(auVar36,auVar16);
            auVar33 = vpunpckhwd_avx512vl(auVar34,auVar34);
            auVar34 = vpunpcklwd_avx512vl(auVar34,auVar34);
            auVar31 = vpsrlw_avx512vl(auVar31,7);
            auVar36 = vpsllw_avx2(auVar35,8);
            auVar35 = vpmulhuw_avx512vl(auVar41,auVar17);
            auVar31 = vpord_avx512vl(auVar31,auVar36);
            auVar36 = vpmulhuw_avx512vl(auVar39,auVar18);
            auVar33 = vpmulhw_avx512vl(auVar33,auVar20);
            *pauVar15 = auVar31;
            auVar31 = vpsllw_avx2(auVar30,6);
            auVar30 = vpaddusw_avx2(auVar32,auVar35);
            auVar31 = vpunpcklwd_avx2(auVar31,auVar31);
            auVar30 = vpaddusw_avx2(auVar30,auVar36);
            auVar32 = vpmulhw_avx512vl(auVar34,auVar21);
            auVar31 = vpmulhw_avx512vl(auVar31,auVar19);
            auVar30 = vpaddusw_avx512vl(auVar30,auVar22);
            auVar31 = vpaddw_avx512vl(auVar31,auVar33);
            auVar33 = vpsrlw_avx2(auVar30,7);
            auVar30 = vpaddw_avx2(auVar31,auVar32);
            auVar30 = vpaddw_avx512vl(auVar30,auVar23);
            auVar30 = vpsrlw_avx2(auVar30,7);
            auVar30 = vpsllw_avx2(auVar30,8);
            auVar30 = vpor_avx2(auVar33,auVar30);
            pauVar15[1] = auVar30;
            pauVar15 = pauVar15 + 2;
          } while (iVar11 < (int)((uint)param_5 & 0xffffffe0));
        }
        if ((param_5 & 0x10) != 0) {
          auVar30 = *pauVar9;
          auVar31 = vpmaskmovq_avx2(auVar6,pauVar9[1]);
          auVar32 = vshufi32x4_avx512vl(auVar30,auVar30,1);
          auVar33 = vpandd_avx512vl(auVar32,auVar24);
          pauVar9 = (undefined1 (*) [32])(pauVar9[1] + 0x10);
          auVar34 = vpandd_avx512vl(auVar32,auVar26);
          auVar32 = vpandd_avx512vl(auVar32,auVar25);
          auVar33 = vpternlogd_avx512vl(auVar33,auVar30,auVar26,0xf8);
          auVar34 = vpternlogd_avx512vl(auVar34,auVar30,auVar25,0xf8);
          auVar30 = vpternlogd_avx512vl(auVar32,auVar30,auVar24,0xf8);
          auVar32 = vpternlogd_avx512vl(auVar33,auVar31,auVar25,0xf8);
          auVar33 = vpternlogd_avx512vl(auVar34,auVar31,auVar24,0xf8);
          auVar30 = vpternlogd_avx512vl(auVar30,auVar31,auVar26,0xf8);
          auVar31 = vpshufb_avx512vl(auVar32,auVar28);
          auVar32 = vpshufb_avx512vl(auVar33,auVar29);
          auVar30 = vpshufb_avx512vl(auVar30,auVar27);
          auVar31 = vpmovzxbw_avx512vl(auVar31._0_16_);
          auVar33 = vpsllw_avx2(auVar31,8);
          auVar34 = vpmulhuw_avx512vl(auVar33,auVar17);
          auVar32 = vpmovzxbw_avx2(auVar32._0_16_);
          auVar33 = vpmovzxbw_avx2(auVar30._0_16_);
          auVar30 = vphaddsw_avx2(auVar32,auVar31);
          auVar31 = vphaddsw_avx2(auVar33,auVar33);
          auVar33 = vpsllw_avx2(auVar33,8);
          auVar32 = vpsllw_avx2(auVar32,8);
          auVar39 = vpsllw_avx2(auVar30,6);
          auVar30 = vpsllw_avx512vl(auVar31,6);
          auVar33 = vpmulhuw_avx512vl(auVar33,auVar16);
          auVar35 = vpmulhuw_avx512vl(auVar32,auVar18);
          auVar36 = vpunpcklwd_avx512vl(auVar30,auVar30);
          auVar31 = vpunpckhwd_avx2(auVar39,auVar39);
          auVar32 = vpunpcklwd_avx2(auVar39,auVar39);
          auVar30 = vpaddusw_avx2(auVar33,auVar34);
          auVar33 = vpmulhw_avx512vl(auVar36,auVar19);
          auVar34 = vpmulhw_avx512vl(auVar31,auVar20);
          auVar32 = vpmulhw_avx512vl(auVar32,auVar21);
          auVar31 = vpaddusw_avx2(auVar30,auVar35);
          auVar30 = vpaddw_avx2(auVar33,auVar34);
          auVar31 = vpaddusw_avx512vl(auVar31,auVar22);
          auVar30 = vpaddw_avx2(auVar30,auVar32);
          auVar31 = vpsrlw_avx512vl(auVar31,7);
          auVar30 = vpaddw_avx512vl(auVar30,auVar23);
          auVar30 = vpsrlw_avx2(auVar30,7);
          auVar30 = vpsllw_avx512vl(auVar30,8);
          auVar30 = vpord_avx512vl(auVar31,auVar30);
          *pauVar15 = auVar30;
          pauVar15 = pauVar15 + 1;
        }
        if (uVar13 != 0) {
          auVar30 = vpmaskmovd_avx2(auVar38,*pauVar9);
          if (iStack_d0 < 0xc) {
            if (uStack_c8 == 2) {
              *pauStack_b8 = auVar30;
              *(undefined2 *)(auStack_88 + lStack_d8 + uVar14 + -2) =
                   *(undefined2 *)(pauVar9[-1] + lStack_d8 + 0x1e);
              auVar30 = *pauStack_b8;
            }
          }
          else {
            auVar31 = vpmaskmovd_avx2(auVar37,pauVar9[1]);
            in_ZMM0 = ZEXT3264(auVar31);
            if (uStack_c8 == 2) {
              uVar4 = *(undefined2 *)(pauVar9[1] + 8);
              *pauStack_b8 = auVar31;
              *(undefined2 *)((longlong)auStack_80 + uVar14) = uVar4;
              in_ZMM0 = ZEXT3264(*pauStack_b8);
            }
          }
          auVar31 = vshufi32x4_avx512vl(auVar30,auVar30,1);
          auVar32 = vpandd_avx512vl(auVar31,auVar26);
          auVar33 = vpandd_avx512vl(auVar31,auVar24);
          auVar31 = vpandd_avx512vl(auVar31,auVar25);
          auVar32 = vpternlogd_avx512vl(auVar32,auVar30,auVar25,0xf8);
          auVar33 = vpternlogd_avx512vl(auVar33,auVar30,auVar26,0xf8);
          auVar30 = vpternlogd_avx512vl(auVar31,auVar30,auVar24,0xf8);
          auVar34 = in_ZMM0._0_32_;
          auVar31 = vpternlogd_avx512vl(auVar32,auVar34,auVar24,0xf8);
          auVar32 = vpternlogd_avx512vl(auVar33,auVar34,auVar25,0xf8);
          auVar30 = vpternlogd_avx512vl(auVar30,auVar34,auVar26,0xf8);
          auVar31 = vpshufb_avx512vl(auVar31,auVar29);
          auVar32 = vpshufb_avx512vl(auVar32,auVar28);
          auVar33 = vpshufb_avx512vl(auVar30,auVar27);
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + lStack_d8);
          auVar31 = vpmovzxbw_avx2(auVar31._0_16_);
          auVar32 = vpmovzxbw_avx512vl(auVar32._0_16_);
          auVar30 = vphaddsw_avx2(auVar31,auVar32);
          auVar32 = vpsllw_avx2(auVar32,8);
          auVar31 = vpsllw_avx2(auVar31,8);
          auVar34 = vpmulhuw_avx512vl(auVar31,auVar18);
          auVar31 = vpmovzxbw_avx2(auVar33._0_16_);
          auVar30 = vpsllw_avx2(auVar30,6);
          auVar35 = vpmulhuw_avx512vl(auVar32,auVar17);
          auVar32 = vpunpckhwd_avx2(auVar30,auVar30);
          auVar33 = vpunpcklwd_avx2(auVar30,auVar30);
          auVar30 = vphaddsw_avx2(auVar31,auVar31);
          auVar31 = vpsllw_avx2(auVar31,8);
          auVar30 = vpsllw_avx512vl(auVar30,6);
          auVar31 = vpmulhuw_avx512vl(auVar31,auVar16);
          auVar32 = vpmulhw_avx512vl(auVar32,auVar20);
          auVar36 = vpunpcklwd_avx512vl(auVar30,auVar30);
          auVar30 = vpaddusw_avx2(auVar31,auVar35);
          auVar35 = vpmulhw_avx512vl(auVar36,auVar19);
          auVar31 = vpaddusw_avx2(auVar30,auVar34);
          auVar33 = vpmulhw_avx512vl(auVar33,auVar21);
          auVar30 = vpaddw_avx2(auVar35,auVar32);
          auVar31 = vpaddusw_avx512vl(auVar31,auVar22);
          auVar30 = vpaddw_avx2(auVar30,auVar33);
          auVar31 = vpsrlw_avx2(auVar31,7);
          auVar30 = vpaddw_avx512vl(auVar30,auVar23);
          auVar30 = vpsrlw_avx2(auVar30,7);
          auVar30 = vpsllw_avx2(auVar30,8);
          auVar30 = vpor_avx2(auVar31,auVar30);
          auVar30 = vpmaskmovd_avx2(auVar5,auVar30);
          *pauVar15 = auVar30;
          pauVar15 = (undefined1 (*) [32])(*pauVar15 + lStack_c0);
        }
        uVar8 = uStack_48;
        if ((param_5 & 1) != 0) {
          bVar1 = (*pauVar9)[0];
          bVar2 = (*pauVar9)[1];
          bVar3 = (*pauVar9)[2];
          (*pauVar15)[0] =
               (char)((uint)bVar1 * 0x41cb + (uint)bVar2 * 0x8106 + 0x108000 + (uint)bVar3 * 0x1917
                     >> 0x10);
          (*pauVar15)[1] =
               (char)((uint)bVar1 * -0x25e3 + (uint)bVar2 * -0x4a7f + -0x7fe000 +
                      (uint)bVar3 * 0x7062 >> 0x10);
        }
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + lStack_a0;
        lVar7 = lVar7 + lStack_a8;
      } while (iVar12 < param_5._4_4_);
      uStack_48 = 0;
      if ((uVar8 ^ (ulonglong)auStack_198) == _DAT_1436b4680) {
        return 0;
      }
      uStack_90 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
    if ((uStack_48 ^ (ulonglong)auStack_198) == _DAT_1436b4680) {
      return 0xfffffffa;
    }
  }
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

