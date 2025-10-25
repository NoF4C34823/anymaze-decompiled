
void FUN_14087cb80(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  byte *pbVar7;
  byte *pbVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar34;
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  float fVar57;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  longlong lStack_70;
  
  uVar40 = param_3 * 3;
  lVar36 = (longlong)(param_5 >> 1);
  fVar9 = *param_4;
  lVar5 = lVar36 * 3;
  lVar32 = param_1 + lVar36 * -3;
  if (0 < (longlong)uVar40) {
    if ((longlong)uVar40 < 0x10) {
LAB_14087d6ea:
      uVar44 = 0;
      if (uVar40 == 0) goto LAB_14087cdc7;
      uVar41 = 0;
      uVar43 = uVar40;
    }
    else {
      uVar43 = param_2 & 0x1f;
      if (uVar43 != 0) {
        if ((param_2 & 3) != 0) goto LAB_14087d6ea;
        uVar43 = 0x20 - uVar43 >> 2;
      }
      if ((longlong)uVar40 < (longlong)(uVar43 + 0x10)) goto LAB_14087d6ea;
      lVar39 = lVar36 * -3 + param_1;
      uVar41 = 0;
      uVar44 = uVar40 - (uVar40 - uVar43 & 0xf);
      lVar33 = param_1 + lVar5;
      if (uVar43 != 0) {
        do {
          *(float *)(param_2 + uVar41 * 4) =
               fVar9 * (float)((uint)*(byte *)(uVar41 + lVar39) + (uint)*(byte *)(uVar41 + lVar33));
          uVar41 = uVar41 + 1;
        } while (uVar41 < uVar43);
      }
      auVar24 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
      do {
        auVar68._8_8_ = 0;
        auVar68._0_8_ = *(ulonglong *)(uVar43 + lVar39);
        auVar68 = vpmovzxbw_avx(auVar68);
        auVar58._8_8_ = 0;
        auVar58._0_8_ = *(ulonglong *)(uVar43 + lVar33);
        auVar58 = vpmovzxbw_avx(auVar58);
        auVar68 = vpaddw_avx(auVar68,auVar58);
        auVar78._8_8_ = 0;
        auVar78._0_8_ = *(ulonglong *)(uVar43 + 8 + lVar33);
        auVar58 = vpmovzxbw_avx(auVar78);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(uVar43 + 8 + lVar39);
        auVar78 = vpmovzxbw_avx(auVar10);
        auVar58 = vpaddw_avx(auVar78,auVar58);
        auVar78 = vpmovzxwd_avx(auVar68);
        auVar68 = vpsrldq_avx(auVar68,8);
        auVar68 = vpmovzxwd_avx(auVar68);
        auVar72._16_16_ = auVar68;
        auVar72._0_16_ = auVar78;
        auVar68 = vpmovzxwd_avx(auVar58);
        auVar58 = vpsrldq_avx(auVar58,8);
        auVar58 = vpmovzxwd_avx(auVar58);
        auVar69 = vcvtdq2ps_avx(auVar72);
        fVar63 = auVar24._0_4_;
        fVar49 = auVar24._4_4_;
        fVar52 = auVar24._8_4_;
        fVar54 = auVar24._12_4_;
        pfVar34 = (float *)(param_2 + uVar43 * 4);
        *pfVar34 = fVar63 * auVar69._0_4_;
        pfVar34[1] = fVar49 * auVar69._4_4_;
        pfVar34[2] = fVar52 * auVar69._8_4_;
        pfVar34[3] = fVar54 * auVar69._12_4_;
        pfVar34[4] = fVar63 * auVar69._16_4_;
        pfVar34[5] = fVar49 * auVar69._20_4_;
        pfVar34[6] = fVar52 * auVar69._24_4_;
        pfVar34[7] = auVar69._28_4_;
        auVar69._16_16_ = auVar58;
        auVar69._0_16_ = auVar68;
        auVar69 = vcvtdq2ps_avx(auVar69);
        auVar23._4_4_ = fVar49 * auVar69._4_4_;
        auVar23._0_4_ = fVar63 * auVar69._0_4_;
        auVar23._8_4_ = fVar52 * auVar69._8_4_;
        auVar23._12_4_ = fVar54 * auVar69._12_4_;
        auVar23._16_4_ = fVar63 * auVar69._16_4_;
        auVar23._20_4_ = fVar49 * auVar69._20_4_;
        auVar23._24_4_ = fVar52 * auVar69._24_4_;
        auVar23._28_4_ = auVar69._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar43 * 4) = auVar23;
        uVar43 = uVar43 + 0x10;
      } while (uVar43 < uVar44);
      if (uVar40 < uVar44 + 1) goto LAB_14087cdc7;
      uVar43 = uVar40 - uVar44;
      if ((longlong)uVar43 < 4) {
        uVar41 = 0;
      }
      else {
        uVar46 = 0;
        uVar41 = uVar43 & 0xfffffffffffffffc;
        do {
          auVar24 = vpmovzxbw_avx(ZEXT416(*(uint *)(uVar46 + lVar39 + uVar44)));
          auVar68 = vpmovzxbw_avx(ZEXT416(*(uint *)(uVar46 + lVar33 + uVar44)));
          auVar24 = vpaddw_avx(auVar24,auVar68);
          auVar24 = vpmovzxwd_avx(auVar24);
          auVar24 = vcvtdq2ps_avx(auVar24);
          auVar59._0_4_ = fVar63 * auVar24._0_4_;
          auVar59._4_4_ = fVar49 * auVar24._4_4_;
          auVar59._8_4_ = fVar52 * auVar24._8_4_;
          auVar59._12_4_ = fVar54 * auVar24._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar44 * 4 + uVar46 * 4) = auVar59;
          uVar46 = uVar46 + 4;
        } while (uVar46 < uVar41);
      }
    }
    if (uVar41 < uVar43) {
      do {
        *(float *)(param_2 + uVar44 * 4 + uVar41 * 4) =
             fVar9 * (float)((uint)*(byte *)(uVar41 + lVar36 * -3 + param_1 + uVar44) +
                            (uint)*(byte *)(uVar41 + param_1 + lVar5 + uVar44));
        uVar41 = uVar41 + 1;
      } while (uVar41 < uVar43);
    }
  }
LAB_14087cdc7:
  lStack_70 = lVar32;
  if (1 < lVar36) {
    lVar33 = 1;
    lVar39 = 0;
    if (lVar36 - 1U >> 1 != 0) {
      uVar44 = param_2 & 0x1f;
      lVar33 = param_1 + lVar5;
      lVar42 = lVar32;
      uVar43 = 0;
      do {
        uVar41 = uVar43;
        lStack_70 = lVar42 + 6;
        fVar9 = param_4[uVar41 * 2 + 1];
        fVar63 = param_4[uVar41 * 2 + 2];
        if (0 < (longlong)uVar40) {
          if (((longlong)uVar40 < 0x10) ||
             (((uVar43 = uVar44, uVar44 != 0 && (uVar43 = 0x20 - uVar44 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar40 < (longlong)(uVar43 + 0x10))))) {
            uVar46 = 0;
            if (uVar40 != 0) {
              uVar37 = 0;
              uVar43 = uVar40;
              goto LAB_14087d155;
            }
          }
          else {
            uVar37 = 0;
            uVar46 = uVar40 - (uVar40 - uVar43 & 0xf);
            lVar45 = lVar42;
            lVar38 = lVar33;
            if (uVar43 != 0) {
              do {
                *(float *)(param_2 + uVar37 * 4) =
                     fVar9 * (float)((uint)*(byte *)(lVar45 + 3) + (uint)*(byte *)(lVar38 + -3)) +
                     *(float *)(param_2 + uVar37 * 4) +
                     fVar63 * (float)((uint)*(byte *)(lVar45 + 6) + (uint)*(byte *)(lVar38 + -6));
                uVar37 = uVar37 + 1;
                lVar45 = lVar45 + 1;
                lVar38 = lVar38 + 1;
              } while (uVar37 < uVar43);
            }
            auVar24 = vshufps_avx(ZEXT416((uint)fVar63),ZEXT416((uint)fVar63),0);
            lVar45 = uVar43 + lVar39;
            auVar68 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
            lVar38 = lVar36 * -3 + param_1;
            do {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = *(ulonglong *)(lVar45 + 3 + lVar38);
              auVar58 = vpmovzxbw_avx(auVar11);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = *(ulonglong *)((uVar43 - 3) + lVar33);
              auVar78 = vpmovzxbw_avx(auVar12);
              auVar58 = vpaddw_avx(auVar58,auVar78);
              auVar10 = vpmovzxwd_avx(auVar58);
              auVar58 = vpsrldq_avx(auVar58,8);
              auVar59 = vpmovzxwd_avx(auVar58);
              auVar13._8_8_ = 0;
              auVar13._0_8_ = *(ulonglong *)(uVar43 + 5 + lVar33);
              auVar58 = vpmovzxbw_avx(auVar13);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = *(ulonglong *)(lVar45 + 0xb + lVar38);
              auVar78 = vpmovzxbw_avx(auVar14);
              auVar58 = vpaddw_avx(auVar78,auVar58);
              auVar75._16_16_ = auVar59;
              auVar75._0_16_ = auVar10;
              auVar69 = vcvtdq2ps_avx(auVar75);
              auVar78 = vpmovzxwd_avx(auVar58);
              auVar58 = vpsrldq_avx(auVar58,8);
              auVar58 = vpmovzxwd_avx(auVar58);
              fVar48 = auVar68._0_4_;
              fVar51 = auVar68._4_4_;
              fVar53 = auVar68._8_4_;
              fVar55 = auVar68._12_4_;
              pfVar34 = (float *)(param_2 + uVar43 * 4);
              fVar49 = pfVar34[1];
              fVar52 = pfVar34[2];
              fVar54 = pfVar34[3];
              fVar56 = pfVar34[4];
              fVar25 = pfVar34[5];
              fVar26 = pfVar34[6];
              fVar64 = pfVar34[7];
              auVar79._16_16_ = auVar58;
              auVar79._0_16_ = auVar78;
              auVar23 = vcvtdq2ps_avx(auVar79);
              auVar15._8_8_ = 0;
              auVar15._0_8_ = *(ulonglong *)(lVar45 + 6 + lVar38);
              auVar58 = vpmovzxbw_avx(auVar15);
              auVar16._8_8_ = 0;
              auVar16._0_8_ = *(ulonglong *)((uVar43 - 6) + lVar33);
              auVar78 = vpmovzxbw_avx(auVar16);
              pfVar6 = (float *)(param_2 + 0x20 + uVar43 * 4);
              fVar65 = *pfVar6;
              fVar66 = pfVar6[1];
              fVar67 = pfVar6[2];
              fVar27 = pfVar6[3];
              fVar28 = pfVar6[4];
              fVar29 = pfVar6[5];
              fVar30 = pfVar6[6];
              fVar31 = pfVar6[7];
              auVar58 = vpaddw_avx(auVar58,auVar78);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulonglong *)(lVar45 + 0xe + lVar38);
              auVar78 = vpmovzxbw_avx(auVar17);
              lVar45 = lVar45 + 0x10;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = *(ulonglong *)(uVar43 + 2 + lVar33);
              auVar10 = vpmovzxbw_avx(auVar18);
              auVar78 = vpaddw_avx(auVar78,auVar10);
              auVar10 = vpmovzxwd_avx(auVar58);
              auVar58 = vpsrldq_avx(auVar58,8);
              auVar58 = vpmovzxwd_avx(auVar58);
              auVar76._16_16_ = auVar58;
              auVar76._0_16_ = auVar10;
              auVar72 = vcvtdq2ps_avx(auVar76);
              fVar57 = auVar24._0_4_;
              fVar60 = auVar24._4_4_;
              fVar61 = auVar24._8_4_;
              fVar62 = auVar24._12_4_;
              pfVar6 = (float *)(param_2 + uVar43 * 4);
              *pfVar6 = fVar48 * auVar69._0_4_ + *pfVar34 + fVar57 * auVar72._0_4_;
              pfVar6[1] = fVar51 * auVar69._4_4_ + fVar49 + fVar60 * auVar72._4_4_;
              pfVar6[2] = fVar53 * auVar69._8_4_ + fVar52 + fVar61 * auVar72._8_4_;
              pfVar6[3] = fVar55 * auVar69._12_4_ + fVar54 + fVar62 * auVar72._12_4_;
              pfVar6[4] = fVar48 * auVar69._16_4_ + fVar56 + fVar57 * auVar72._16_4_;
              pfVar6[5] = fVar51 * auVar69._20_4_ + fVar25 + fVar60 * auVar72._20_4_;
              pfVar6[6] = fVar53 * auVar69._24_4_ + fVar26 + fVar61 * auVar72._24_4_;
              pfVar6[7] = fVar64 + 0.0 + 0.0;
              auVar58 = vpmovzxwd_avx(auVar78);
              auVar78 = vpsrldq_avx(auVar78,8);
              auVar78 = vpmovzxwd_avx(auVar78);
              auVar77._16_16_ = auVar78;
              auVar77._0_16_ = auVar58;
              auVar69 = vcvtdq2ps_avx(auVar77);
              pfVar34 = (float *)(param_2 + 0x20 + uVar43 * 4);
              *pfVar34 = fVar48 * auVar23._0_4_ + fVar65 + fVar57 * auVar69._0_4_;
              pfVar34[1] = fVar51 * auVar23._4_4_ + fVar66 + fVar60 * auVar69._4_4_;
              pfVar34[2] = fVar53 * auVar23._8_4_ + fVar67 + fVar61 * auVar69._8_4_;
              pfVar34[3] = fVar55 * auVar23._12_4_ + fVar27 + fVar62 * auVar69._12_4_;
              pfVar34[4] = fVar48 * auVar23._16_4_ + fVar28 + fVar57 * auVar69._16_4_;
              pfVar34[5] = fVar51 * auVar23._20_4_ + fVar29 + fVar60 * auVar69._20_4_;
              pfVar34[6] = fVar53 * auVar23._24_4_ + fVar30 + fVar61 * auVar69._24_4_;
              pfVar34[7] = fVar31 + 0.0 + 0.0;
              uVar43 = uVar43 + 0x10;
            } while (uVar43 < uVar46);
            if (uVar46 + 1 <= uVar40) {
              uVar43 = uVar40 - uVar46;
              if ((longlong)uVar43 < 4) {
                uVar37 = 0;
              }
              else {
                uVar47 = 0;
                uVar37 = uVar43 & 0xfffffffffffffffc;
                lVar45 = uVar46 + lVar42;
                lVar38 = uVar46 + lVar33;
                pauVar35 = (undefined1 (*) [16])(param_2 + uVar46 * 4);
                do {
                  uVar47 = uVar47 + 4;
                  auVar24 = vpmovzxbw_avx(ZEXT416(*(uint *)(lVar45 + 3)));
                  auVar68 = vpmovzxbw_avx(ZEXT416(*(uint *)(lVar38 + -3)));
                  auVar24 = vpaddw_avx(auVar24,auVar68);
                  auVar24 = vpmovzxwd_avx(auVar24);
                  auVar24 = vcvtdq2ps_avx(auVar24);
                  fVar49 = fVar48 * auVar24._0_4_ + *(float *)*pauVar35;
                  fVar52 = fVar51 * auVar24._4_4_ + *(float *)(*pauVar35 + 4);
                  fVar54 = fVar53 * auVar24._8_4_ + *(float *)(*pauVar35 + 8);
                  fVar56 = fVar55 * auVar24._12_4_ + *(float *)(*pauVar35 + 0xc);
                  *(float *)*pauVar35 = fVar49;
                  *(float *)(*pauVar35 + 4) = fVar52;
                  *(float *)(*pauVar35 + 8) = fVar54;
                  *(float *)(*pauVar35 + 0xc) = fVar56;
                  puVar1 = (uint *)(lVar45 + 6);
                  lVar45 = lVar45 + 4;
                  puVar2 = (uint *)(lVar38 + -6);
                  lVar38 = lVar38 + 4;
                  auVar24 = vpmovzxbw_avx(ZEXT416(*puVar1));
                  auVar68 = vpmovzxbw_avx(ZEXT416(*puVar2));
                  auVar24 = vpaddw_avx(auVar24,auVar68);
                  auVar24 = vpmovzxwd_avx(auVar24);
                  auVar24 = vcvtdq2ps_avx(auVar24);
                  auVar50._0_4_ = fVar49 + fVar57 * auVar24._0_4_;
                  auVar50._4_4_ = fVar52 + fVar60 * auVar24._4_4_;
                  auVar50._8_4_ = fVar54 + fVar61 * auVar24._8_4_;
                  auVar50._12_4_ = fVar56 + fVar62 * auVar24._12_4_;
                  *pauVar35 = auVar50;
                  pauVar35 = pauVar35 + 1;
                } while (uVar47 < uVar37);
              }
LAB_14087d155:
              if (uVar37 < uVar43) {
                pfVar34 = (float *)(param_2 + uVar46 * 4 + uVar37 * 4);
                do {
                  lVar45 = uVar37 + 3;
                  lVar38 = uVar37 - 3;
                  lVar3 = uVar37 - 6;
                  lVar4 = uVar37 + 6;
                  uVar37 = uVar37 + 1;
                  *pfVar34 = fVar9 * (float)((uint)*(byte *)(lVar45 + uVar46 + lVar42) +
                                            (uint)*(byte *)(lVar38 + uVar46 + lVar33)) + *pfVar34 +
                             fVar63 * (float)((uint)*(byte *)(lVar4 + uVar46 + lVar42) +
                                             (uint)*(byte *)(lVar3 + uVar46 + lVar33));
                  pfVar34 = pfVar34 + 1;
                } while (uVar37 < uVar43);
              }
            }
          }
        }
        uVar43 = uVar41 + 1;
        lVar42 = lVar42 + 6;
        lVar39 = lVar39 + 6;
        lVar33 = lVar33 + -6;
      } while (uVar43 < lVar36 - 1U >> 1);
      lVar33 = uVar41 + 2 + uVar43;
    }
    if (lVar36 != lVar33) {
      fVar9 = param_4[lVar33];
      lStack_70 = lVar32 + lVar33 * 3;
      if (0 < (longlong)uVar40) {
        if ((longlong)uVar40 < 0x10) {
LAB_14087d6ad:
          uVar44 = 0;
          if (uVar40 == 0) goto LAB_14087d4d2;
          uVar41 = 0;
          uVar43 = uVar40;
        }
        else {
          uVar43 = param_2 & 0x1f;
          if (uVar43 != 0) {
            if ((param_2 & 3) != 0) goto LAB_14087d6ad;
            uVar43 = 0x20 - uVar43 >> 2;
          }
          if ((longlong)uVar40 < (longlong)(uVar43 + 0x10)) goto LAB_14087d6ad;
          lVar32 = param_1 + lVar5 + lVar33 * -3;
          uVar44 = uVar40 - (uVar40 - uVar43 & 0xf);
          uVar41 = 0;
          if (uVar43 != 0) {
            do {
              *(float *)(param_2 + uVar41 * 4) =
                   fVar9 * (float)((uint)*(byte *)(uVar41 + lStack_70) +
                                  (uint)*(byte *)(uVar41 + lVar32)) +
                   *(float *)(param_2 + uVar41 * 4);
              uVar41 = uVar41 + 1;
            } while (uVar41 < uVar43);
          }
          auVar24 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
          do {
            auVar19._8_8_ = 0;
            auVar19._0_8_ = *(ulonglong *)(uVar43 + lStack_70);
            auVar68 = vpmovzxbw_avx(auVar19);
            auVar20._8_8_ = 0;
            auVar20._0_8_ = *(ulonglong *)(uVar43 + lVar32);
            auVar58 = vpmovzxbw_avx(auVar20);
            auVar68 = vpaddw_avx(auVar68,auVar58);
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)(uVar43 + 8 + lVar32);
            auVar58 = vpmovzxbw_avx(auVar21);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = *(ulonglong *)(uVar43 + 8 + lStack_70);
            auVar78 = vpmovzxbw_avx(auVar22);
            auVar58 = vpaddw_avx(auVar78,auVar58);
            auVar78 = vpmovzxwd_avx(auVar68);
            auVar68 = vpsrldq_avx(auVar68,8);
            auVar68 = vpmovzxwd_avx(auVar68);
            auVar73._16_16_ = auVar68;
            auVar73._0_16_ = auVar78;
            auVar68 = vpmovzxwd_avx(auVar58);
            auVar58 = vpsrldq_avx(auVar58,8);
            auVar58 = vpmovzxwd_avx(auVar58);
            auVar69 = vcvtdq2ps_avx(auVar73);
            fVar64 = auVar24._0_4_;
            fVar65 = auVar24._4_4_;
            fVar66 = auVar24._8_4_;
            fVar67 = auVar24._12_4_;
            auVar70._16_16_ = auVar58;
            auVar70._0_16_ = auVar68;
            auVar23 = vcvtdq2ps_avx(auVar70);
            pfVar34 = (float *)(param_2 + uVar43 * 4);
            fVar63 = pfVar34[1];
            fVar49 = pfVar34[2];
            fVar52 = pfVar34[3];
            fVar54 = pfVar34[4];
            fVar56 = pfVar34[5];
            fVar25 = pfVar34[6];
            fVar26 = pfVar34[7];
            pfVar6 = (float *)(param_2 + uVar43 * 4);
            *pfVar6 = fVar64 * auVar69._0_4_ + *pfVar34;
            pfVar6[1] = fVar65 * auVar69._4_4_ + fVar63;
            pfVar6[2] = fVar66 * auVar69._8_4_ + fVar49;
            pfVar6[3] = fVar67 * auVar69._12_4_ + fVar52;
            pfVar6[4] = fVar64 * auVar69._16_4_ + fVar54;
            pfVar6[5] = fVar65 * auVar69._20_4_ + fVar56;
            pfVar6[6] = fVar66 * auVar69._24_4_ + fVar25;
            pfVar6[7] = auVar69._28_4_ + fVar26;
            pfVar34 = (float *)(param_2 + 0x20 + uVar43 * 4);
            fVar63 = pfVar34[1];
            fVar49 = pfVar34[2];
            fVar52 = pfVar34[3];
            fVar54 = pfVar34[4];
            fVar56 = pfVar34[5];
            fVar25 = pfVar34[6];
            fVar26 = pfVar34[7];
            pfVar6 = (float *)(param_2 + 0x20 + uVar43 * 4);
            *pfVar6 = fVar64 * auVar23._0_4_ + *pfVar34;
            pfVar6[1] = fVar65 * auVar23._4_4_ + fVar63;
            pfVar6[2] = fVar66 * auVar23._8_4_ + fVar49;
            pfVar6[3] = fVar67 * auVar23._12_4_ + fVar52;
            pfVar6[4] = fVar64 * auVar23._16_4_ + fVar54;
            pfVar6[5] = fVar65 * auVar23._20_4_ + fVar56;
            pfVar6[6] = fVar66 * auVar23._24_4_ + fVar25;
            pfVar6[7] = auVar23._28_4_ + fVar26;
            uVar43 = uVar43 + 0x10;
          } while (uVar43 < uVar44);
          if (uVar40 < uVar44 + 1) goto LAB_14087d4d2;
          uVar43 = uVar40 - uVar44;
          if ((longlong)uVar43 < 4) {
            uVar41 = 0;
          }
          else {
            uVar46 = 0;
            uVar41 = uVar43 & 0xfffffffffffffffc;
            pfVar34 = (float *)(param_2 + uVar44 * 4);
            do {
              puVar1 = (uint *)(uVar46 + (param_1 - (lVar5 + lVar33 * -3)) + uVar44);
              puVar2 = (uint *)(uVar46 + lVar33 * -3 + lVar5 + param_1 + uVar44);
              uVar46 = uVar46 + 4;
              auVar24 = vpmovzxbw_avx(ZEXT416(*puVar1));
              auVar68 = vpmovzxbw_avx(ZEXT416(*puVar2));
              auVar24 = vpaddw_avx(auVar24,auVar68);
              auVar24 = vpmovzxwd_avx(auVar24);
              auVar24 = vcvtdq2ps_avx(auVar24);
              *pfVar34 = fVar64 * auVar24._0_4_ + *pfVar34;
              pfVar34[1] = fVar65 * auVar24._4_4_ + pfVar34[1];
              pfVar34[2] = fVar66 * auVar24._8_4_ + pfVar34[2];
              pfVar34[3] = fVar67 * auVar24._12_4_ + pfVar34[3];
              pfVar34 = pfVar34 + 4;
            } while (uVar46 < uVar41);
          }
        }
        if (uVar41 < uVar43) {
          pfVar34 = (float *)(param_2 + uVar44 * 4 + uVar41 * 4);
          do {
            pbVar7 = (byte *)(uVar41 + (param_1 - (lVar33 * -3 + lVar5)) + uVar44);
            pbVar8 = (byte *)(uVar41 + param_1 + lVar5 + lVar33 * -3 + uVar44);
            uVar41 = uVar41 + 1;
            *pfVar34 = fVar9 * (float)((uint)*pbVar7 + (uint)*pbVar8) + *pfVar34;
            pfVar34 = pfVar34 + 1;
          } while (uVar41 < uVar43);
        }
      }
    }
  }
LAB_14087d4d2:
  fVar9 = param_4[lVar36];
  if ((longlong)uVar40 < 1) {
    return;
  }
  if ((longlong)uVar40 < 0x10) {
LAB_14087d69a:
    uVar44 = 0;
    if (uVar40 == 0) {
      return;
    }
  }
  else {
    uVar43 = param_2 & 0x1f;
    if (uVar43 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14087d69a;
      uVar43 = 0x20 - uVar43 >> 2;
    }
    if ((longlong)uVar40 < (longlong)(uVar43 + 0x10)) goto LAB_14087d69a;
    uVar41 = 0;
    uVar44 = uVar40 - (uVar40 - uVar43 & 0xf);
    if (uVar43 != 0) {
      do {
        *(float *)(param_2 + uVar41 * 4) =
             fVar9 * (float)*(byte *)(uVar41 + 3 + lStack_70) + *(float *)(param_2 + uVar41 * 4);
        uVar41 = uVar41 + 1;
      } while (uVar41 < uVar43);
    }
    auVar24 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
    do {
      auVar68 = *(undefined1 (*) [16])(uVar43 + 3 + lStack_70);
      auVar78 = vpsrldq_avx(auVar68,8);
      auVar58 = vpmovzxbd_avx(auVar68);
      auVar68 = vpsrldq_avx(auVar68,4);
      auVar68 = vpmovzxbd_avx(auVar68);
      auVar74._16_16_ = auVar68;
      auVar74._0_16_ = auVar58;
      auVar68 = vpmovzxbd_avx(auVar78);
      auVar58 = vpsrldq_avx(auVar78,4);
      auVar58 = vpmovzxbd_avx(auVar58);
      auVar69 = vcvtdq2ps_avx(auVar74);
      fVar64 = auVar24._0_4_;
      fVar65 = auVar24._4_4_;
      fVar66 = auVar24._8_4_;
      fVar67 = auVar24._12_4_;
      auVar71._16_16_ = auVar58;
      auVar71._0_16_ = auVar68;
      auVar23 = vcvtdq2ps_avx(auVar71);
      pfVar34 = (float *)(param_2 + uVar43 * 4);
      fVar63 = pfVar34[1];
      fVar49 = pfVar34[2];
      fVar52 = pfVar34[3];
      fVar54 = pfVar34[4];
      fVar56 = pfVar34[5];
      fVar25 = pfVar34[6];
      fVar26 = pfVar34[7];
      pfVar6 = (float *)(param_2 + uVar43 * 4);
      *pfVar6 = fVar64 * auVar69._0_4_ + *pfVar34;
      pfVar6[1] = fVar65 * auVar69._4_4_ + fVar63;
      pfVar6[2] = fVar66 * auVar69._8_4_ + fVar49;
      pfVar6[3] = fVar67 * auVar69._12_4_ + fVar52;
      pfVar6[4] = fVar64 * auVar69._16_4_ + fVar54;
      pfVar6[5] = fVar65 * auVar69._20_4_ + fVar56;
      pfVar6[6] = fVar66 * auVar69._24_4_ + fVar25;
      pfVar6[7] = auVar69._28_4_ + fVar26;
      pfVar34 = (float *)(param_2 + 0x20 + uVar43 * 4);
      fVar63 = pfVar34[1];
      fVar49 = pfVar34[2];
      fVar52 = pfVar34[3];
      fVar54 = pfVar34[4];
      fVar56 = pfVar34[5];
      fVar25 = pfVar34[6];
      fVar26 = pfVar34[7];
      pfVar6 = (float *)(param_2 + 0x20 + uVar43 * 4);
      *pfVar6 = fVar64 * auVar23._0_4_ + *pfVar34;
      pfVar6[1] = fVar65 * auVar23._4_4_ + fVar63;
      pfVar6[2] = fVar66 * auVar23._8_4_ + fVar49;
      pfVar6[3] = fVar67 * auVar23._12_4_ + fVar52;
      pfVar6[4] = fVar64 * auVar23._16_4_ + fVar54;
      pfVar6[5] = fVar65 * auVar23._20_4_ + fVar56;
      pfVar6[6] = fVar66 * auVar23._24_4_ + fVar25;
      pfVar6[7] = auVar23._28_4_ + fVar26;
      uVar43 = uVar43 + 0x10;
    } while (uVar43 < uVar44);
    if (uVar40 < uVar44 + 1) {
      return;
    }
    uVar40 = uVar40 - uVar44;
    if (3 < (longlong)uVar40) {
      uVar43 = uVar40 & 0xfffffffffffffffc;
      uVar41 = 0;
      pfVar34 = (float *)(param_2 + uVar44 * 4);
      do {
        auVar24 = vpmovzxbd_avx(ZEXT416(*(uint *)(uVar41 + 3 + lStack_70 + uVar44)));
        uVar41 = uVar41 + 4;
        auVar24 = vcvtdq2ps_avx(auVar24);
        *pfVar34 = fVar64 * auVar24._0_4_ + *pfVar34;
        pfVar34[1] = fVar65 * auVar24._4_4_ + pfVar34[1];
        pfVar34[2] = fVar66 * auVar24._8_4_ + pfVar34[2];
        pfVar34[3] = fVar67 * auVar24._12_4_ + pfVar34[3];
        pfVar34 = pfVar34 + 4;
      } while (uVar41 < uVar43);
      goto LAB_14087d644;
    }
  }
  uVar43 = 0;
LAB_14087d644:
  if (uVar43 < uVar40) {
    pfVar34 = (float *)(param_2 + uVar44 * 4 + uVar43 * 4);
    do {
      lVar5 = uVar43 + 3;
      uVar43 = uVar43 + 1;
      *pfVar34 = fVar9 * (float)*(byte *)(lVar5 + uVar44 + lStack_70) + *pfVar34;
      pfVar34 = pfVar34 + 1;
    } while (uVar43 < uVar40);
  }
  return;
}

