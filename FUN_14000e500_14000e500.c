
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000e500(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [16],int param_4,
                  ulonglong param_5,uint *param_6)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  int iVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  uint uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined2 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar38 [64];
  
  auVar18 = _DAT_143086140;
  auVar17 = _DAT_143086120;
  auVar16 = _DAT_143086100;
  auVar15 = _DAT_1430860e0;
  auVar14 = _DAT_1430860c0;
  auVar13 = _DAT_1430860a0;
  auVar12 = _DAT_143086080;
  if (param_6 == (uint *)0x0) {
    iVar25 = 0x2646;
    iVar22 = 0x4b23;
    iVar19 = 0xe98;
  }
  else {
    auVar32 = ZEXT416(_DAT_1430861a4);
    auVar36 = ZEXT416(_DAT_1430861a0);
    auVar9 = vfmadd213ss_fma(ZEXT416(*param_6),auVar32,auVar36);
    auVar10 = vfmadd213ss_fma(ZEXT416(param_6[1]),auVar32,auVar36);
    auVar32 = vfmadd213ss_fma(auVar32,ZEXT416(param_6[2]),auVar36);
    iVar25 = (int)auVar9._0_4_;
    iVar22 = (int)auVar10._0_4_;
    iVar19 = (int)auVar32._0_4_;
  }
  uVar27 = 0;
  uVar35 = (undefined2)iVar25;
  auVar38 = ZEXT3264(CONCAT230(uVar35,CONCAT228(uVar35,CONCAT226(uVar35,CONCAT224(uVar35,CONCAT222(
                                                  uVar35,CONCAT220(uVar35,CONCAT218(uVar35,CONCAT216
                                                  (uVar35,CONCAT214(uVar35,CONCAT212(uVar35,
                                                  CONCAT210(uVar35,CONCAT28(uVar35,CONCAT26(uVar35,
                                                  CONCAT24(uVar35,CONCAT22(uVar35,uVar35))))))))))))
                                                  ))));
  auVar34._0_2_ = (undefined2)iVar22;
  auVar34._2_2_ = auVar34._0_2_;
  auVar34._4_2_ = auVar34._0_2_;
  auVar34._6_2_ = auVar34._0_2_;
  auVar34._8_2_ = auVar34._0_2_;
  auVar34._10_2_ = auVar34._0_2_;
  auVar34._12_2_ = auVar34._0_2_;
  auVar34._14_2_ = auVar34._0_2_;
  auVar34._16_2_ = auVar34._0_2_;
  auVar34._18_2_ = auVar34._0_2_;
  auVar34._20_2_ = auVar34._0_2_;
  auVar34._22_2_ = auVar34._0_2_;
  auVar34._24_2_ = auVar34._0_2_;
  auVar34._26_2_ = auVar34._0_2_;
  auVar34._28_2_ = auVar34._0_2_;
  auVar34._30_2_ = auVar34._0_2_;
  auVar33._0_2_ = (undefined2)iVar19;
  auVar33._2_2_ = auVar33._0_2_;
  auVar33._4_2_ = auVar33._0_2_;
  auVar33._6_2_ = auVar33._0_2_;
  auVar33._8_2_ = auVar33._0_2_;
  auVar33._10_2_ = auVar33._0_2_;
  auVar33._12_2_ = auVar33._0_2_;
  auVar33._14_2_ = auVar33._0_2_;
  auVar33._16_2_ = auVar33._0_2_;
  auVar33._18_2_ = auVar33._0_2_;
  auVar33._20_2_ = auVar33._0_2_;
  auVar33._22_2_ = auVar33._0_2_;
  auVar33._24_2_ = auVar33._0_2_;
  auVar33._26_2_ = auVar33._0_2_;
  auVar33._28_2_ = auVar33._0_2_;
  auVar33._30_2_ = auVar33._0_2_;
  if (0 < (int)param_5._4_4_) {
    uVar28 = (uint)param_5 & 0xf;
    uVar21 = (ulonglong)uVar28;
    do {
      uVar30 = 0;
      lVar23 = 0;
      auVar37 = auVar38._0_32_;
      pauVar20 = param_1;
      pauVar26 = param_3;
      if (0 < (int)((uint)param_5 & 0xffffffe0)) {
        do {
          uVar30 = uVar30 + 1;
          auVar40 = vperm2i128_avx2(*pauVar20,pauVar20[1],0x30);
          auVar7 = vperm2i128_avx2(*pauVar20,pauVar20[2],0x21);
          auVar8 = vperm2i128_avx2(pauVar20[1],pauVar20[2],0x30);
          auVar42 = vpand_avx2(auVar40,auVar13);
          auVar41 = vpand_avx2(auVar7,auVar14);
          auVar41 = vpor_avx2(auVar42,auVar41);
          auVar42 = vpand_avx2(auVar8,auVar15);
          auVar41 = vpor_avx2(auVar41,auVar42);
          auVar42 = vpand_avx2(auVar40,auVar15);
          auVar6 = vpshufb_avx2(auVar41,auVar16);
          auVar41 = vpand_avx2(auVar40,auVar14);
          auVar40 = vpand_avx2(auVar7,auVar13);
          auVar7 = vpand_avx2(auVar7,auVar15);
          auVar40 = vpor_avx2(auVar42,auVar40);
          auVar42 = vpand_avx2(auVar8,auVar14);
          auVar7 = vpor_avx2(auVar41,auVar7);
          auVar41 = vpand_avx2(auVar8,auVar13);
          auVar42 = vpor_avx2(auVar40,auVar42);
          auVar8 = vpshufb_avx2(auVar42,auVar17);
          auVar42 = vpor_avx2(auVar7,auVar41);
          auVar41 = vpshufb_avx2(auVar42,auVar18);
          auVar42 = vpmovzxbw_avx2(auVar41._0_16_);
          auVar40 = vpsllw_avx2(auVar42,8);
          auVar42 = vpermq_avx2(auVar41,0xee);
          auVar41 = vpmulhuw_avx2(auVar40,auVar33);
          auVar42 = vpmovzxbw_avx2(auVar42._0_16_);
          auVar42 = vpsllw_avx2(auVar42,8);
          auVar40 = vpmulhuw_avx2(auVar42,auVar33);
          auVar42 = vpmovzxbw_avx2(auVar8._0_16_);
          auVar42 = vpsllw_avx2(auVar42,8);
          auVar42 = vpmulhuw_avx2(auVar42,auVar34);
          auVar42 = vpaddusw_avx2(auVar41,auVar42);
          auVar41 = vpermq_avx2(auVar8,0xee);
          auVar41 = vpmovzxbw_avx2(auVar41._0_16_);
          auVar41 = vpsllw_avx2(auVar41,8);
          auVar41 = vpmulhuw_avx2(auVar41,auVar34);
          auVar41 = vpaddusw_avx2(auVar40,auVar41);
          auVar40 = vpmovzxbw_avx2(auVar6._0_16_);
          auVar40 = vpsllw_avx2(auVar40,8);
          auVar40 = vpmulhuw_avx2(auVar40,auVar37);
          auVar7 = vpermq_avx2(auVar6,0xee);
          auVar42 = vpaddusw_avx2(auVar42,auVar40);
          auVar42 = vpaddusw_avx2(auVar42,auVar12);
          auVar40 = vpsrlw_avx2(auVar42,7);
          auVar42 = vpmovzxbw_avx2(auVar7._0_16_);
          auVar42 = vpsllw_avx2(auVar42,8);
          auVar42 = vpmulhuw_avx2(auVar42,auVar37);
          auVar42 = vpaddusw_avx2(auVar41,auVar42);
          auVar42 = vpaddusw_avx2(auVar42,auVar12);
          auVar42 = vpsrlw_avx2(auVar42,7);
          auVar42 = vpackuswb_avx2(auVar40,auVar42);
          auVar42 = vpermq_avx2(auVar42,0xd8);
          *(undefined1 (*) [32])(*param_3 + lVar23) = auVar42;
          lVar23 = lVar23 + 0x20;
          pauVar20 = pauVar20 + 3;
        } while (uVar30 < ((uint)param_5 & 0xffffffe0) + 0x1f >> 5);
        pauVar26 = param_3 + uVar30 * 2;
        pauVar20 = param_1 + uVar30 * 3;
      }
      if ((param_5 & 0x10) != 0) {
        auVar42 = *pauVar20;
        auVar8 = vpmaskmovq_avx2(_DAT_143086160,pauVar20[1]);
        auVar41 = vpand_avx2(auVar42,auVar14);
        auVar7 = vperm2i128_avx2(auVar42,auVar42,0x21);
        pauVar20 = (undefined1 (*) [32])(pauVar20[1] + 0x10);
        auVar40 = vpand_avx2(auVar7,auVar15);
        auVar40 = vpor_avx2(auVar41,auVar40);
        auVar41 = vpand_avx2(auVar8,auVar13);
        auVar41 = vpor_avx2(auVar40,auVar41);
        auVar41 = vpshufb_avx2(auVar41,auVar18);
        auVar41 = vpmovzxbw_avx2(auVar41._0_16_);
        auVar40 = vpsllw_avx2(auVar41,8);
        auVar41 = vpand_avx2(auVar42,auVar15);
        auVar6 = vpmulhuw_avx2(auVar40,auVar33);
        auVar42 = vpand_avx2(auVar42,auVar13);
        auVar40 = vpand_avx2(auVar7,auVar13);
        auVar7 = vpand_avx2(auVar7,auVar14);
        auVar41 = vpor_avx2(auVar41,auVar40);
        auVar40 = vpor_avx2(auVar42,auVar7);
        auVar42 = vpand_avx2(auVar8,auVar14);
        auVar42 = vpor_avx2(auVar41,auVar42);
        auVar42 = vpshufb_avx2(auVar42,auVar17);
        auVar42 = vpmovzxbw_avx2(auVar42._0_16_);
        auVar42 = vpsllw_avx2(auVar42,8);
        auVar42 = vpmulhuw_avx2(auVar42,auVar34);
        auVar42 = vpaddusw_avx2(auVar6,auVar42);
        auVar41 = vpand_avx2(auVar8,auVar15);
        auVar41 = vpor_avx2(auVar40,auVar41);
        auVar41 = vpshufb_avx2(auVar41,auVar16);
        auVar41 = vpmovzxbw_avx2(auVar41._0_16_);
        auVar41 = vpsllw_avx2(auVar41,8);
        auVar41 = vpmulhuw_avx2(auVar41,auVar37);
        auVar42 = vpaddusw_avx2(auVar42,auVar41);
        auVar42 = vpaddusw_avx2(auVar42,auVar12);
        auVar42 = vpsrlw_avx2(auVar42,7);
        auVar42 = vpackuswb_avx2(auVar42,auVar42);
        auVar42 = vpermq_avx2(auVar42,0xd8);
        *pauVar26 = auVar42._0_16_;
        pauVar26 = pauVar26 + 1;
      }
      auVar10 = _DAT_143086190;
      auVar9 = _DAT_143086180;
      if ((param_5 & 0xf) != 0) {
        if (((longlong)pauVar26 - (longlong)pauVar20 < (longlong)(uVar21 * 3)) &&
           (-((longlong)pauVar26 - (longlong)pauVar20) < (longlong)uVar21)) {
          iVar29 = 1;
          lVar23 = 0;
          uVar30 = 0;
          if (uVar28 >> 1 != 0) {
            do {
              uVar24 = uVar30;
              (*pauVar26)[uVar24 * 2] =
                   (char)((uint)(byte)(*pauVar20)[lVar23] * iVar25 +
                          (uint)(byte)(*pauVar20)[lVar23 + 1] * iVar22 + 0x4000 +
                          (uint)(byte)(*pauVar20)[lVar23 + 2] * iVar19 >> 0xf);
              lVar2 = lVar23 + 3;
              lVar3 = lVar23 + 4;
              lVar4 = lVar23 + 5;
              lVar23 = lVar23 + 6;
              (*pauVar26)[uVar24 * 2 + 1] =
                   (char)((uint)(byte)(*pauVar20)[lVar2] * iVar25 +
                          (uint)(byte)(*pauVar20)[lVar3] * iVar22 + 0x4000 +
                          (uint)(byte)(*pauVar20)[lVar4] * iVar19 >> 0xf);
              uVar30 = uVar24 + 1;
            } while (uVar30 < uVar28 >> 1);
            iVar29 = (int)uVar24 + 2 + (int)uVar30;
          }
          if (iVar29 - 1U < uVar28) {
            lVar23 = (longlong)iVar29 * 3;
            pauVar26[-1][(longlong)iVar29 + 0xf] =
                 (char)((uint)(byte)pauVar20[-1][lVar23 + 0x1d] * iVar25 +
                        (uint)(byte)pauVar20[-1][lVar23 + 0x1e] * iVar22 + 0x4000 +
                        (uint)(byte)pauVar20[-1][lVar23 + 0x1f] * iVar19 >> 0xf);
          }
        }
        else {
          if (uVar21 < 4) {
            uVar30 = 0;
          }
          else {
            uVar30 = 0;
            auVar11._4_4_ = iVar19;
            auVar11._0_4_ = iVar19;
            auVar11._8_4_ = iVar19;
            auVar11._12_4_ = iVar19;
            auVar36._4_4_ = iVar22;
            auVar36._0_4_ = iVar22;
            auVar36._8_4_ = iVar22;
            auVar36._12_4_ = iVar22;
            auVar32._4_4_ = iVar25;
            auVar32._0_4_ = iVar25;
            auVar32._8_4_ = iVar25;
            auVar32._12_4_ = iVar25;
            pauVar31 = pauVar20;
            do {
              auVar39 = vpinsrb_avx(ZEXT116((byte)(*pauVar31)[0]),(uint)(byte)(*pauVar31)[3],1);
              auVar39 = vpinsrb_avx(auVar39,(uint)(byte)(*pauVar31)[6],2);
              auVar39 = vpinsrb_avx(auVar39,(uint)(byte)(*pauVar31)[9],3);
              auVar5 = vpinsrb_avx(ZEXT116((byte)(*pauVar31)[1]),(uint)(byte)(*pauVar31)[4],1);
              auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*pauVar31)[7],2);
              auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*pauVar31)[10],3);
              auVar39 = vpmovzxbd_avx(auVar39);
              auVar5 = vpmovzxbd_avx(auVar5);
              auVar39 = vpmulld_avx(auVar32,auVar39);
              auVar5 = vpmulld_avx(auVar36,auVar5);
              auVar39 = vpaddd_avx(auVar39,auVar5);
              auVar5 = vpinsrb_avx(ZEXT116((byte)(*pauVar31)[2]),(uint)(byte)(*pauVar31)[5],1);
              auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*pauVar31)[8],2);
              auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*pauVar31)[0xb],3);
              pauVar31 = (undefined1 (*) [32])(*pauVar31 + 0xc);
              auVar5 = vpmovzxbd_avx(auVar5);
              auVar5 = vpmulld_avx(auVar11,auVar5);
              auVar39 = vpaddd_avx(auVar39,auVar5);
              auVar39 = vpaddd_avx(auVar39,auVar9);
              auVar39 = vpsrad_avx(auVar39,0xf);
              auVar39 = vpshufb_avx(auVar39,auVar10);
              *(int *)(*pauVar26 + uVar30) = auVar39._0_4_;
              uVar30 = uVar30 + 4;
            } while (uVar30 < ((uint)param_5 & 0xc));
            auVar38 = ZEXT3264(auVar37);
            uVar30 = (ulonglong)((uint)param_5 & 0xc);
          }
          lVar23 = uVar30 * 3;
          for (; uVar30 < uVar21; uVar30 = uVar30 + 1) {
            pbVar1 = *pauVar20 + lVar23;
            lVar2 = lVar23 + 1;
            lVar3 = lVar23 + 2;
            lVar23 = lVar23 + 3;
            (*pauVar26)[uVar30] =
                 (char)((uint)*pbVar1 * iVar25 + (uint)(byte)(*pauVar20)[lVar2] * iVar22 + 0x4000 +
                        (uint)(byte)(*pauVar20)[lVar3] * iVar19 >> 0xf);
          }
        }
      }
      uVar27 = uVar27 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (uVar27 < param_5._4_4_);
  }
  return;
}

