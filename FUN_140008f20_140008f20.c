
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140008f20(ulonglong param_1,int param_2,longlong param_3,undefined8 param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  ulonglong uVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [32];
  longlong lVar20;
  int iVar21;
  int in_R9D;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [32];
  undefined1 auVar27 [64];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined8 in_YMM2_H;
  undefined8 in_register_00001298;
  undefined1 auVar28 [64];
  undefined8 in_XMM3_Qb;
  undefined8 in_YMM3_H;
  undefined8 in_register_000012d8;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM4_Qb;
  undefined8 in_YMM4_H;
  undefined8 in_register_00001318;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auStack_248 [40];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  longlong lStack_e8;
  int iStack_e0;
  uint uStack_d8;
  undefined4 uStack_d0;
  undefined1 (*pauStack_c8) [32];
  longlong lStack_c0;
  undefined2 uStack_8a;
  undefined2 auStack_88 [4];
  undefined8 auStack_80 [7];
  ulonglong uStack_48;
  
  auVar16 = _DAT_1430859a0;
  auVar15 = _DAT_143085980;
  auVar14 = _DAT_143085960;
  auVar12 = _DAT_143085920;
  auVar9 = _DAT_1430858c0;
  auVar8 = _DAT_1430858a0;
  auVar7 = _DAT_143085880;
  auVar6 = _DAT_143085860;
  uStack_48 = _DAT_1436b4680 ^ (ulonglong)auStack_248;
  lVar22 = (longlong)param_2;
  if ((param_1 == 0) || (param_3 == 0)) {
    if ((uStack_48 ^ (ulonglong)auStack_248) == _DAT_1436b4680) {
      return 0xfffffff8;
    }
  }
  else {
    if ((0 < (int)(uint)param_5) && (0 < param_5._4_4_)) {
      auVar27 = ZEXT3264(_DAT_143085a20);
      if ((param_5 & 0xf) == 0) {
        uVar24 = 0;
        uVar17 = param_1;
        auStack_1e0 = _DAT_143085a20;
      }
      else {
        uVar24 = (uint)param_5 & 0xe;
        param_2 = uVar24 * 2;
        param_4 = _DAT_1436961a0;
        in_XMM3_Qb = uRam00000001436961a8;
        in_YMM3_H = uRam00000001436961b0;
        in_register_000012d8 = uRam00000001436961b8;
        if (uVar24 == 0xe) {
          param_4 = _DAT_1436961c0;
          in_XMM3_Qb = uRam00000001436961c8;
          in_YMM3_H = uRam00000001436961d0;
          in_register_000012d8 = uRam00000001436961d8;
        }
        uVar17 = (ulonglong)(((uint)param_5 & 0xf) >> 1);
        if (uVar17 != 0) {
          uVar17 = uVar17 - 1;
        }
        lVar18 = uVar17 * 0x20;
        in_XMM4_Qa = *(undefined8 *)(lVar18 + 0x143696280);
        in_XMM4_Qb = *(undefined8 *)(lVar18 + 0x143696288);
        in_YMM4_H = *(undefined8 *)(lVar18 + 0x143696290);
        in_register_00001318 = *(undefined8 *)(lVar18 + 0x143696298);
        uVar17 = (ulonglong)(uVar24 * 3);
        auStack_1e0 = *(undefined1 (*) [32])(&DAT_1436961a0 + lVar18);
      }
      lStack_c0 = (longlong)param_2;
      uVar25 = -((ulonglong)auStack_88 & 0x1f) & 0x1f;
      uStack_d8 = (uint)uVar17;
      pauStack_c8 = (undefined1 (*) [32])((longlong)auStack_88 + uVar25);
      iStack_e0 = (int)uStack_d8 / 3;
      uStack_d0 = 0;
      lStack_e8 = (longlong)(int)uStack_d8;
      uStack_d8 = uStack_d8 & 3;
      lVar20 = 0;
      auStack_1c0._8_8_ = in_XMM2_Qb;
      auStack_1c0._0_8_ = in_XMM2_Qa;
      auStack_1c0._16_8_ = in_YMM2_H;
      auStack_1c0._24_8_ = in_register_00001298;
      lVar18 = 0;
      auVar28 = ZEXT3264(_DAT_143085940);
      iVar23 = 0;
      do {
        pauVar19 = (undefined1 (*) [32])(param_1 + lVar20);
        pauVar26 = (undefined1 (*) [32])(param_3 + lVar18);
        iVar21 = 0;
        if (0 < (int)((uint)param_5 & 0xffffffe0)) {
          do {
            auVar13 = _DAT_143085940;
            auVar11 = _DAT_143085900;
            auVar10 = _DAT_1430858e0;
            iVar21 = iVar21 + 0x20;
            auVar35 = vperm2i128_avx2(*pauVar19,pauVar19[1],0x30);
            auVar36 = vperm2i128_avx2(*pauVar19,pauVar19[2],0x21);
            auVar31 = vpand_avx2(auVar35,auVar14);
            auVar33 = vpand_avx2(auVar36,auVar15);
            auVar5 = vperm2i128_avx2(pauVar19[1],pauVar19[2],0x30);
            pauVar19 = pauVar19 + 3;
            auVar32 = vpor_avx2(auVar31,auVar33);
            auVar31 = vpand_avx2(auVar35,auVar16);
            auVar33 = vpand_avx2(auVar35,auVar15);
            auVar35 = vpand_avx2(auVar36,auVar14);
            auVar36 = vpand_avx2(auVar36,auVar16);
            auVar29 = vpand_avx2(auVar5,auVar16);
            auVar35 = vpor_avx2(auVar31,auVar35);
            auVar36 = vpor_avx2(auVar33,auVar36);
            auVar31 = vpand_avx2(auVar5,auVar15);
            auVar33 = vpand_avx2(auVar5,auVar14);
            auVar29 = vpor_avx2(auVar32,auVar29);
            auVar31 = vpor_avx2(auVar35,auVar31);
            auVar33 = vpor_avx2(auVar36,auVar33);
            auVar36 = vpshufb_avx2(auVar29,_DAT_1430859c0);
            auVar29 = vpshufb_avx2(auVar31,_DAT_1430859e0);
            auVar31 = vpshufb_avx2(auVar33,_DAT_143085a00);
            auVar33 = vpmovzxbw_avx2(auVar31._0_16_);
            auVar35 = vpmovzxbw_avx2(auVar29._0_16_);
            auVar32 = vpermq_avx2(auVar31,0xee);
            auVar31 = vphaddsw_avx2(auVar33,auVar35);
            auVar35 = vpsllw_avx2(auVar35,8);
            auVar34 = vpsllw_avx2(auVar33,8);
            auVar30 = vpsllw_avx2(auVar31,6);
            auVar29 = vpermq_avx2(auVar29,0xee);
            auVar33 = vpmovzxbw_avx2(auVar36._0_16_);
            auVar5 = vpermq_avx2(auVar36,0xee);
            auVar35 = vpmulhuw_avx2(auVar35,auVar7);
            auVar36 = vpmulhuw_avx2(auVar34,auVar8);
            auVar31 = vphaddsw_avx2(auVar33,auVar33);
            auVar33 = vpsllw_avx2(auVar33,8);
            auVar34 = vpsllw_avx2(auVar31,6);
            auVar31 = vpmulhuw_avx2(auVar33,auVar6);
            auVar33 = vpunpcklwd_avx2(auVar34,auVar34);
            auVar31 = vpaddusw_avx2(auVar31,auVar35);
            auVar31 = vpaddusw_avx2(auVar31,auVar36);
            auVar31 = vpaddusw_avx2(auVar31,auVar12);
            auVar36 = vpsrlw_avx2(auVar31,7);
            auVar31 = vpmulhw_avx2(auVar33,auVar9);
            auVar33 = vpunpckhwd_avx2(auVar30,auVar30);
            auVar35 = vpunpcklwd_avx2(auVar30,auVar30);
            auVar33 = vpmulhw_avx2(auVar33,_DAT_1430858e0);
            auVar31 = vpaddw_avx2(auVar31,auVar33);
            auVar33 = vpmulhw_avx2(auVar35,_DAT_143085900);
            auVar31 = vpaddw_avx2(auVar31,auVar33);
            auVar31 = vpaddw_avx2(auVar31,_DAT_143085940);
            auVar31 = vpsrlw_avx2(auVar31,7);
            auVar31 = vpsllw_avx2(auVar31,8);
            auVar31 = vpor_avx2(auVar36,auVar31);
            *pauVar26 = auVar31;
            auVar33 = vpmovzxbw_avx2(auVar32._0_16_);
            auVar35 = vpmovzxbw_avx2(auVar29._0_16_);
            auVar31 = vphaddsw_avx2(auVar33,auVar35);
            auVar36 = vpsllw_avx2(auVar33,8);
            auVar33 = vpsllw_avx2(auVar35,8);
            auVar32 = vpsllw_avx2(auVar31,6);
            auVar35 = vpmulhuw_avx2(auVar36,auVar8);
            auVar36 = vpmulhuw_avx2(auVar33,auVar7);
            auVar33 = vpmovzxbw_avx2(auVar5._0_16_);
            auVar31 = vphaddsw_avx2(auVar33,auVar33);
            auVar29 = vpsllw_avx2(auVar33,8);
            auVar33 = vpsllw_avx2(auVar31,6);
            auVar31 = vpmulhuw_avx2(auVar29,auVar6);
            auVar31 = vpaddusw_avx2(auVar31,auVar36);
            auVar31 = vpaddusw_avx2(auVar31,auVar35);
            auVar33 = vpunpcklwd_avx2(auVar33,auVar33);
            auVar35 = vpunpckhwd_avx2(auVar32,auVar32);
            auVar36 = vpunpcklwd_avx2(auVar32,auVar32);
            auVar31 = vpaddusw_avx2(auVar31,auVar12);
            auVar33 = vpmulhw_avx2(auVar33,auVar9);
            auVar35 = vpmulhw_avx2(auVar35,auVar10);
            auVar36 = vpmulhw_avx2(auVar36,auVar11);
            auVar29 = vpsrlw_avx2(auVar31,7);
            auVar31 = vpaddw_avx2(auVar33,auVar35);
            auVar31 = vpaddw_avx2(auVar31,auVar36);
            auVar31 = vpaddw_avx2(auVar31,auVar13);
            auVar31 = vpsrlw_avx2(auVar31,7);
            auVar31 = vpsllw_avx2(auVar31,8);
            auVar31 = vpor_avx2(auVar29,auVar31);
            pauVar26[1] = auVar31;
            pauVar26 = pauVar26 + 2;
          } while (iVar21 < (int)((uint)param_5 & 0xffffffe0));
          auVar27 = ZEXT3264(_DAT_143085a20);
          auVar28 = ZEXT3264(_DAT_143085940);
        }
        if ((param_5 & 0x10) != 0) {
          auVar31 = *pauVar19;
          auVar32 = vpmaskmovq_avx2(auVar27._0_32_,pauVar19[1]);
          auVar33 = vpand_avx2(auVar31,auVar15);
          auVar36 = vperm2i128_avx2(auVar31,auVar31,0x21);
          pauVar19 = (undefined1 (*) [32])(pauVar19[1] + 0x10);
          auVar35 = vpand_avx2(auVar36,auVar16);
          auVar35 = vpor_avx2(auVar33,auVar35);
          auVar33 = vpand_avx2(auVar32,auVar14);
          auVar33 = vpor_avx2(auVar35,auVar33);
          auVar35 = vpshufb_avx2(auVar33,_DAT_143085a00);
          auVar33 = vpand_avx2(auVar31,auVar14);
          auVar29 = vpmovzxbw_avx2(auVar35._0_16_);
          auVar31 = vpand_avx2(auVar31,auVar16);
          auVar35 = vpand_avx2(auVar36,auVar14);
          auVar36 = vpand_avx2(auVar36,auVar15);
          auVar35 = vpor_avx2(auVar31,auVar35);
          auVar36 = vpor_avx2(auVar33,auVar36);
          auVar31 = vpand_avx2(auVar32,auVar15);
          auVar33 = vpand_avx2(auVar32,auVar16);
          auVar31 = vpor_avx2(auVar35,auVar31);
          auVar33 = vpor_avx2(auVar36,auVar33);
          auVar31 = vpshufb_avx2(auVar31,_DAT_1430859e0);
          auVar35 = vpshufb_avx2(auVar33,_DAT_1430859c0);
          auVar33 = vpmovzxbw_avx2(auVar31._0_16_);
          auVar31 = vphaddsw_avx2(auVar29,auVar33);
          auVar36 = vpsllw_avx2(auVar29,8);
          auVar29 = vpsllw_avx2(auVar33,8);
          auVar36 = vpmulhuw_avx2(auVar36,auVar8);
          auVar35 = vpmovzxbw_avx2(auVar35._0_16_);
          auVar33 = vphaddsw_avx2(auVar35,auVar35);
          auVar35 = vpsllw_avx2(auVar35,8);
          auVar32 = vpsllw_avx2(auVar31,6);
          auVar31 = vpmulhuw_avx2(auVar29,auVar7);
          auVar35 = vpmulhuw_avx2(auVar35,auVar6);
          auVar33 = vpsllw_avx2(auVar33,6);
          auVar31 = vpaddusw_avx2(auVar35,auVar31);
          auVar33 = vpunpcklwd_avx2(auVar33,auVar33);
          auVar35 = vpunpckhwd_avx2(auVar32,auVar32);
          auVar29 = vpunpcklwd_avx2(auVar32,auVar32);
          auVar31 = vpaddusw_avx2(auVar31,auVar36);
          auVar33 = vpmulhw_avx2(auVar33,auVar9);
          auVar35 = vpmulhw_avx2(auVar35,_DAT_1430858e0);
          auVar36 = vpmulhw_avx2(auVar29,_DAT_143085900);
          auVar31 = vpaddusw_avx2(auVar31,auVar12);
          auVar29 = vpsrlw_avx2(auVar31,7);
          auVar31 = vpaddw_avx2(auVar33,auVar35);
          auVar31 = vpaddw_avx2(auVar31,auVar36);
          auVar31 = vpaddw_avx2(auVar31,auVar28._0_32_);
          auVar31 = vpsrlw_avx2(auVar31,7);
          auVar31 = vpsllw_avx2(auVar31,8);
          auVar31 = vpor_avx2(auVar29,auVar31);
          *pauVar26 = auVar31;
          pauVar26 = pauVar26 + 1;
        }
        if (uVar24 != 0) {
          auVar31._8_8_ = in_XMM4_Qb;
          auVar31._0_8_ = in_XMM4_Qa;
          auVar31._16_8_ = in_YMM4_H;
          auVar31._24_8_ = in_register_00001318;
          auVar31 = vpmaskmovd_avx2(auVar31,*pauVar19);
          if (iStack_e0 < 0xc) {
            if (uStack_d8 == 2) {
              *pauStack_c8 = auVar31;
              *(undefined2 *)((longlong)&uStack_8a + lStack_e8 + uVar25) =
                   *(undefined2 *)(pauVar19[-1] + lStack_e8 + 0x1e);
              auVar31 = *pauStack_c8;
            }
          }
          else {
            auVar33._8_8_ = in_XMM3_Qb;
            auVar33._0_8_ = param_4;
            auVar33._16_8_ = in_YMM3_H;
            auVar33._24_8_ = in_register_000012d8;
            auStack_1c0 = vpmaskmovd_avx2(auVar33,pauVar19[1]);
            if (uStack_d8 == 2) {
              uVar4 = *(undefined2 *)(pauVar19[1] + 8);
              *(undefined8 *)*pauStack_c8 = auStack_1c0._0_8_;
              *(undefined8 *)((longlong)auStack_80 + uVar25) = auStack_1c0._8_8_;
              *(undefined8 *)((longlong)auStack_80 + uVar25 + 8) = auStack_1c0._16_8_;
              *(undefined8 *)((longlong)auStack_80 + uVar25 + 0x10) = auStack_1c0._24_8_;
              *(undefined2 *)((longlong)auStack_80 + uVar25) = uVar4;
              auStack_1c0._8_8_ = *(undefined8 *)((longlong)auStack_80 + uVar25);
              auStack_1c0._0_8_ = *(undefined8 *)*pauStack_c8;
              auStack_1c0._16_8_ = *(undefined8 *)((longlong)auStack_80 + uVar25 + 8);
              auStack_1c0._24_8_ = *(undefined8 *)((longlong)auStack_80 + uVar25 + 0x10);
            }
          }
          auVar36 = vperm2i128_avx2(auVar31,auVar31,0x21);
          auVar33 = vpand_avx2(auVar31,auVar15);
          auVar35 = vpand_avx2(auVar36,auVar16);
          auVar35 = vpor_avx2(auVar33,auVar35);
          auVar33 = vpand_avx2(auStack_1c0,auVar14);
          auVar35 = vpor_avx2(auVar35,auVar33);
          auVar33 = vpand_avx2(auVar31,auVar16);
          auVar35 = vpshufb_avx2(auVar35,_DAT_143085a00);
          pauVar19 = (undefined1 (*) [32])(*pauVar19 + lStack_e8);
          auVar29 = vpmovzxbw_avx2(auVar35._0_16_);
          auVar31 = vpand_avx2(auVar31,auVar14);
          auVar35 = vpand_avx2(auVar36,auVar14);
          auVar36 = vpand_avx2(auVar36,auVar15);
          auVar35 = vpor_avx2(auVar33,auVar35);
          auVar36 = vpor_avx2(auVar31,auVar36);
          auVar31 = vpand_avx2(auStack_1c0,auVar15);
          auVar33 = vpand_avx2(auStack_1c0,auVar16);
          auVar31 = vpor_avx2(auVar35,auVar31);
          auVar33 = vpor_avx2(auVar36,auVar33);
          auVar31 = vpshufb_avx2(auVar31,_DAT_1430859e0);
          auVar36 = vpshufb_avx2(auVar33,_DAT_1430859c0);
          auVar33 = vpmovzxbw_avx2(auVar31._0_16_);
          auVar31 = vphaddsw_avx2(auVar29,auVar33);
          auVar29 = vpsllw_avx2(auVar29,8);
          auVar33 = vpsllw_avx2(auVar33,8);
          auVar32 = vpsllw_avx2(auVar31,6);
          auVar35 = vpmulhuw_avx2(auVar33,auVar7);
          auVar33 = vpmovzxbw_avx2(auVar36._0_16_);
          auVar36 = vpmulhuw_avx2(auVar29,auVar8);
          auVar31 = vphaddsw_avx2(auVar33,auVar33);
          auVar29 = vpsllw_avx2(auVar33,8);
          auVar33 = vpsllw_avx2(auVar31,6);
          auVar31 = vpmulhuw_avx2(auVar29,auVar6);
          auVar31 = vpaddusw_avx2(auVar31,auVar35);
          auVar35 = vpunpcklwd_avx2(auVar33,auVar33);
          auVar31 = vpaddusw_avx2(auVar31,auVar36);
          auVar33 = vpunpckhwd_avx2(auVar32,auVar32);
          auVar29 = vpunpcklwd_avx2(auVar32,auVar32);
          auVar35 = vpmulhw_avx2(auVar35,auVar9);
          auVar36 = vpmulhw_avx2(auVar33,_DAT_1430858e0);
          auVar33 = vpaddusw_avx2(auVar31,auVar12);
          auVar31 = vpaddw_avx2(auVar35,auVar36);
          auVar35 = vpsrlw_avx2(auVar33,7);
          auVar33 = vpmulhw_avx2(auVar29,_DAT_143085900);
          auVar31 = vpaddw_avx2(auVar31,auVar33);
          auVar31 = vpaddw_avx2(auVar31,auVar28._0_32_);
          auVar31 = vpsrlw_avx2(auVar31,7);
          auVar31 = vpsllw_avx2(auVar31,8);
          auVar31 = vpor_avx2(auVar35,auVar31);
          auVar31 = vpmaskmovd_avx2(auStack_1e0,auVar31);
          *pauVar26 = auVar31;
          pauVar26 = (undefined1 (*) [32])(*pauVar26 + lStack_c0);
        }
        uVar17 = uStack_48;
        if ((param_5 & 1) != 0) {
          bVar1 = (*pauVar19)[0];
          bVar2 = (*pauVar19)[1];
          bVar3 = (*pauVar19)[2];
          (*pauVar26)[0] =
               (char)((uint)bVar1 * 0x41cb + (uint)bVar2 * 0x8106 + 0x108000 + (uint)bVar3 * 0x1917
                     >> 0x10);
          (*pauVar26)[1] =
               (char)((uint)bVar1 * -0x25e3 + (uint)bVar2 * -0x4a7f + -0x7fe000 +
                      (uint)bVar3 * 0x7062 >> 0x10);
        }
        iVar23 = iVar23 + 1;
        lVar20 = lVar20 + lVar22;
        lVar18 = lVar18 + in_R9D;
      } while (iVar23 < param_5._4_4_);
      uStack_48 = 0;
      if ((uVar17 ^ (ulonglong)auStack_248) == _DAT_1436b4680) {
        return 0;
      }
      uStack_220 = param_4;
      uStack_218 = in_XMM3_Qb;
      uStack_210 = in_YMM3_H;
      uStack_208 = in_register_000012d8;
      uStack_200 = in_XMM4_Qa;
      uStack_1f8 = in_XMM4_Qb;
      uStack_1f0 = in_YMM4_H;
      uStack_1e8 = in_register_00001318;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
    if ((uStack_48 ^ (ulonglong)auStack_248) == _DAT_1436b4680) {
      return 0xfffffffa;
    }
  }
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

