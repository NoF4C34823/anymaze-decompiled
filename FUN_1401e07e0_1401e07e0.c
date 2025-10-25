
void FUN_1401e07e0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  byte *pbVar6;
  byte *pbVar7;
  float fVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  longlong lVar31;
  float *pfVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  float fVar56;
  float fVar59;
  float fVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  
  lVar36 = (longlong)(param_5 >> 1);
  lVar34 = param_1 - lVar36;
  fVar8 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x10) {
LAB_1401e12a9:
      uVar42 = 0;
      if (param_3 == 0) goto LAB_1401e0a08;
      uVar39 = 0;
      uVar40 = param_3;
    }
    else {
      uVar40 = param_2 & 0x1f;
      if (uVar40 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1401e12a9;
        uVar40 = 0x20 - uVar40 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar40 + 0x10)) goto LAB_1401e12a9;
      uVar39 = 0;
      lVar44 = lVar36 + param_1;
      uVar42 = param_3 - (param_3 - uVar40 & 0xf);
      if (uVar40 != 0) {
        do {
          *(float *)(param_2 + uVar39 * 4) =
               fVar8 * (float)((uint)*(byte *)(uVar39 + lVar34) + (uint)*(byte *)(uVar39 + lVar44));
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar40);
      }
      auVar23 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
      do {
        auVar67._8_8_ = 0;
        auVar67._0_8_ = *(ulonglong *)(uVar40 + lVar34);
        auVar67 = vpmovzxbw_avx(auVar67);
        auVar57._8_8_ = 0;
        auVar57._0_8_ = *(ulonglong *)(uVar40 + lVar44);
        auVar57 = vpmovzxbw_avx(auVar57);
        auVar67 = vpaddw_avx(auVar67,auVar57);
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *(ulonglong *)(uVar40 + 8 + lVar44);
        auVar57 = vpmovzxbw_avx(auVar77);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(uVar40 + 8 + lVar34);
        auVar77 = vpmovzxbw_avx(auVar9);
        auVar57 = vpaddw_avx(auVar77,auVar57);
        auVar77 = vpmovzxwd_avx(auVar67);
        auVar67 = vpsrldq_avx(auVar67,8);
        auVar67 = vpmovzxwd_avx(auVar67);
        auVar71._16_16_ = auVar67;
        auVar71._0_16_ = auVar77;
        auVar67 = vpmovzxwd_avx(auVar57);
        auVar57 = vpsrldq_avx(auVar57,8);
        auVar57 = vpmovzxwd_avx(auVar57);
        auVar68 = vcvtdq2ps_avx(auVar71);
        fVar62 = auVar23._0_4_;
        fVar48 = auVar23._4_4_;
        fVar51 = auVar23._8_4_;
        fVar53 = auVar23._12_4_;
        pfVar32 = (float *)(param_2 + uVar40 * 4);
        *pfVar32 = fVar62 * auVar68._0_4_;
        pfVar32[1] = fVar48 * auVar68._4_4_;
        pfVar32[2] = fVar51 * auVar68._8_4_;
        pfVar32[3] = fVar53 * auVar68._12_4_;
        pfVar32[4] = fVar62 * auVar68._16_4_;
        pfVar32[5] = fVar48 * auVar68._20_4_;
        pfVar32[6] = fVar51 * auVar68._24_4_;
        pfVar32[7] = auVar68._28_4_;
        auVar68._16_16_ = auVar57;
        auVar68._0_16_ = auVar67;
        auVar68 = vcvtdq2ps_avx(auVar68);
        auVar22._4_4_ = fVar48 * auVar68._4_4_;
        auVar22._0_4_ = fVar62 * auVar68._0_4_;
        auVar22._8_4_ = fVar51 * auVar68._8_4_;
        auVar22._12_4_ = fVar53 * auVar68._12_4_;
        auVar22._16_4_ = fVar62 * auVar68._16_4_;
        auVar22._20_4_ = fVar48 * auVar68._20_4_;
        auVar22._24_4_ = fVar51 * auVar68._24_4_;
        auVar22._28_4_ = auVar68._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar40 * 4) = auVar22;
        uVar40 = uVar40 + 0x10;
      } while (uVar40 < uVar42);
      if (param_3 < uVar42 + 1) goto LAB_1401e0a08;
      uVar40 = param_3 - uVar42;
      if ((longlong)uVar40 < 4) {
        uVar39 = 0;
      }
      else {
        uVar45 = 0;
        uVar39 = uVar40 & 0xfffffffffffffffc;
        do {
          auVar23 = vpmovzxbw_avx(ZEXT416(*(uint *)(uVar45 + uVar42 + lVar34)));
          auVar67 = vpmovzxbw_avx(ZEXT416(*(uint *)(uVar45 + lVar44 + uVar42)));
          auVar23 = vpaddw_avx(auVar23,auVar67);
          auVar23 = vpmovzxwd_avx(auVar23);
          auVar23 = vcvtdq2ps_avx(auVar23);
          auVar58._0_4_ = fVar62 * auVar23._0_4_;
          auVar58._4_4_ = fVar48 * auVar23._4_4_;
          auVar58._8_4_ = fVar51 * auVar23._8_4_;
          auVar58._12_4_ = fVar53 * auVar23._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar42 * 4 + uVar45 * 4) = auVar58;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar39);
      }
    }
    if (uVar39 < uVar40) {
      do {
        *(float *)(param_2 + uVar42 * 4 + uVar39 * 4) =
             fVar8 * (float)((uint)*(byte *)(uVar39 + uVar42 + lVar34) +
                            (uint)*(byte *)(uVar39 + lVar36 + param_1 + uVar42));
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar40);
    }
  }
LAB_1401e0a08:
  lVar44 = lVar34;
  if (1 < lVar36) {
    lVar31 = 1;
    lVar41 = 0;
    if (lVar36 - 1U >> 1 != 0) {
      uVar42 = param_2 & 0x1f;
      lVar31 = lVar36 + param_1;
      uVar40 = 0;
      lVar43 = lVar34;
      do {
        uVar39 = uVar40;
        lVar44 = lVar43 + 2;
        fVar8 = param_4[uVar39 * 2 + 1];
        fVar62 = param_4[uVar39 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x10) ||
             (((uVar40 = uVar42, uVar42 != 0 && (uVar40 = 0x20 - uVar42 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar40 + 0x10))))) {
            uVar45 = 0;
            if (param_3 != 0) {
              uVar37 = 0;
              uVar40 = param_3;
              goto LAB_1401e0d75;
            }
          }
          else {
            uVar37 = 0;
            uVar45 = param_3 - (param_3 - uVar40 & 0xf);
            lVar38 = lVar31;
            lVar33 = lVar43;
            if (uVar40 != 0) {
              do {
                *(float *)(param_2 + uVar37 * 4) =
                     fVar8 * (float)((uint)*(byte *)(lVar33 + 1) + (uint)*(byte *)(lVar38 + -1)) +
                     *(float *)(param_2 + uVar37 * 4) +
                     fVar62 * (float)((uint)*(byte *)(lVar33 + 2) + (uint)*(byte *)(lVar38 + -2));
                uVar37 = uVar37 + 1;
                lVar38 = lVar38 + 1;
                lVar33 = lVar33 + 1;
              } while (uVar37 < uVar40);
            }
            auVar23 = vshufps_avx(ZEXT416((uint)fVar62),ZEXT416((uint)fVar62),0);
            lVar38 = uVar40 + lVar41;
            auVar67 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
            lVar33 = param_1 - lVar36;
            do {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = *(ulonglong *)(lVar38 + 1 + lVar33);
              auVar57 = vpmovzxbw_avx(auVar10);
              auVar11._8_8_ = 0;
              auVar11._0_8_ = *(ulonglong *)((uVar40 - 1) + lVar31);
              auVar77 = vpmovzxbw_avx(auVar11);
              auVar57 = vpaddw_avx(auVar57,auVar77);
              auVar9 = vpmovzxwd_avx(auVar57);
              auVar57 = vpsrldq_avx(auVar57,8);
              auVar58 = vpmovzxwd_avx(auVar57);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = *(ulonglong *)(uVar40 + 7 + lVar31);
              auVar57 = vpmovzxbw_avx(auVar12);
              auVar13._8_8_ = 0;
              auVar13._0_8_ = *(ulonglong *)(lVar38 + 9 + lVar33);
              auVar77 = vpmovzxbw_avx(auVar13);
              auVar57 = vpaddw_avx(auVar77,auVar57);
              auVar74._16_16_ = auVar58;
              auVar74._0_16_ = auVar9;
              auVar68 = vcvtdq2ps_avx(auVar74);
              auVar77 = vpmovzxwd_avx(auVar57);
              auVar57 = vpsrldq_avx(auVar57,8);
              auVar57 = vpmovzxwd_avx(auVar57);
              fVar47 = auVar67._0_4_;
              fVar50 = auVar67._4_4_;
              fVar52 = auVar67._8_4_;
              fVar54 = auVar67._12_4_;
              pfVar32 = (float *)(param_2 + uVar40 * 4);
              fVar48 = pfVar32[1];
              fVar51 = pfVar32[2];
              fVar53 = pfVar32[3];
              fVar55 = pfVar32[4];
              fVar24 = pfVar32[5];
              fVar25 = pfVar32[6];
              fVar63 = pfVar32[7];
              auVar78._16_16_ = auVar57;
              auVar78._0_16_ = auVar77;
              auVar22 = vcvtdq2ps_avx(auVar78);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = *(ulonglong *)(lVar38 + 2 + lVar33);
              auVar57 = vpmovzxbw_avx(auVar14);
              auVar15._8_8_ = 0;
              auVar15._0_8_ = *(ulonglong *)((uVar40 - 2) + lVar31);
              auVar77 = vpmovzxbw_avx(auVar15);
              pfVar5 = (float *)(param_2 + 0x20 + uVar40 * 4);
              fVar64 = *pfVar5;
              fVar65 = pfVar5[1];
              fVar66 = pfVar5[2];
              fVar26 = pfVar5[3];
              fVar27 = pfVar5[4];
              fVar28 = pfVar5[5];
              fVar29 = pfVar5[6];
              fVar30 = pfVar5[7];
              auVar57 = vpaddw_avx(auVar57,auVar77);
              auVar16._8_8_ = 0;
              auVar16._0_8_ = *(ulonglong *)(lVar38 + 10 + lVar33);
              auVar77 = vpmovzxbw_avx(auVar16);
              lVar38 = lVar38 + 0x10;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulonglong *)(uVar40 + 6 + lVar31);
              auVar9 = vpmovzxbw_avx(auVar17);
              auVar77 = vpaddw_avx(auVar77,auVar9);
              auVar9 = vpmovzxwd_avx(auVar57);
              auVar57 = vpsrldq_avx(auVar57,8);
              auVar57 = vpmovzxwd_avx(auVar57);
              auVar75._16_16_ = auVar57;
              auVar75._0_16_ = auVar9;
              auVar71 = vcvtdq2ps_avx(auVar75);
              fVar56 = auVar23._0_4_;
              fVar59 = auVar23._4_4_;
              fVar60 = auVar23._8_4_;
              fVar61 = auVar23._12_4_;
              pfVar5 = (float *)(param_2 + uVar40 * 4);
              *pfVar5 = fVar47 * auVar68._0_4_ + *pfVar32 + fVar56 * auVar71._0_4_;
              pfVar5[1] = fVar50 * auVar68._4_4_ + fVar48 + fVar59 * auVar71._4_4_;
              pfVar5[2] = fVar52 * auVar68._8_4_ + fVar51 + fVar60 * auVar71._8_4_;
              pfVar5[3] = fVar54 * auVar68._12_4_ + fVar53 + fVar61 * auVar71._12_4_;
              pfVar5[4] = fVar47 * auVar68._16_4_ + fVar55 + fVar56 * auVar71._16_4_;
              pfVar5[5] = fVar50 * auVar68._20_4_ + fVar24 + fVar59 * auVar71._20_4_;
              pfVar5[6] = fVar52 * auVar68._24_4_ + fVar25 + fVar60 * auVar71._24_4_;
              pfVar5[7] = fVar63 + 0.0 + 0.0;
              auVar57 = vpmovzxwd_avx(auVar77);
              auVar77 = vpsrldq_avx(auVar77,8);
              auVar77 = vpmovzxwd_avx(auVar77);
              auVar76._16_16_ = auVar77;
              auVar76._0_16_ = auVar57;
              auVar68 = vcvtdq2ps_avx(auVar76);
              pfVar32 = (float *)(param_2 + 0x20 + uVar40 * 4);
              *pfVar32 = fVar47 * auVar22._0_4_ + fVar64 + fVar56 * auVar68._0_4_;
              pfVar32[1] = fVar50 * auVar22._4_4_ + fVar65 + fVar59 * auVar68._4_4_;
              pfVar32[2] = fVar52 * auVar22._8_4_ + fVar66 + fVar60 * auVar68._8_4_;
              pfVar32[3] = fVar54 * auVar22._12_4_ + fVar26 + fVar61 * auVar68._12_4_;
              pfVar32[4] = fVar47 * auVar22._16_4_ + fVar27 + fVar56 * auVar68._16_4_;
              pfVar32[5] = fVar50 * auVar22._20_4_ + fVar28 + fVar59 * auVar68._20_4_;
              pfVar32[6] = fVar52 * auVar22._24_4_ + fVar29 + fVar60 * auVar68._24_4_;
              pfVar32[7] = fVar30 + 0.0 + 0.0;
              uVar40 = uVar40 + 0x10;
            } while (uVar40 < uVar45);
            if (uVar45 + 1 <= param_3) {
              uVar40 = param_3 - uVar45;
              if ((longlong)uVar40 < 4) {
                uVar37 = 0;
              }
              else {
                uVar46 = 0;
                uVar37 = uVar40 & 0xfffffffffffffffc;
                lVar38 = uVar45 + lVar43;
                lVar33 = uVar45 + lVar31;
                pauVar35 = (undefined1 (*) [16])(param_2 + uVar45 * 4);
                do {
                  uVar46 = uVar46 + 4;
                  auVar23 = vpmovzxbw_avx(ZEXT416(*(uint *)(lVar38 + 1)));
                  auVar67 = vpmovzxbw_avx(ZEXT416(*(uint *)(lVar33 + -1)));
                  auVar23 = vpaddw_avx(auVar23,auVar67);
                  auVar23 = vpmovzxwd_avx(auVar23);
                  auVar23 = vcvtdq2ps_avx(auVar23);
                  fVar48 = fVar47 * auVar23._0_4_ + *(float *)*pauVar35;
                  fVar51 = fVar50 * auVar23._4_4_ + *(float *)(*pauVar35 + 4);
                  fVar53 = fVar52 * auVar23._8_4_ + *(float *)(*pauVar35 + 8);
                  fVar55 = fVar54 * auVar23._12_4_ + *(float *)(*pauVar35 + 0xc);
                  *(float *)*pauVar35 = fVar48;
                  *(float *)(*pauVar35 + 4) = fVar51;
                  *(float *)(*pauVar35 + 8) = fVar53;
                  *(float *)(*pauVar35 + 0xc) = fVar55;
                  puVar1 = (uint *)(lVar38 + 2);
                  lVar38 = lVar38 + 4;
                  puVar2 = (uint *)(lVar33 + -2);
                  lVar33 = lVar33 + 4;
                  auVar23 = vpmovzxbw_avx(ZEXT416(*puVar1));
                  auVar67 = vpmovzxbw_avx(ZEXT416(*puVar2));
                  auVar23 = vpaddw_avx(auVar23,auVar67);
                  auVar23 = vpmovzxwd_avx(auVar23);
                  auVar23 = vcvtdq2ps_avx(auVar23);
                  auVar49._0_4_ = fVar48 + fVar56 * auVar23._0_4_;
                  auVar49._4_4_ = fVar51 + fVar59 * auVar23._4_4_;
                  auVar49._8_4_ = fVar53 + fVar60 * auVar23._8_4_;
                  auVar49._12_4_ = fVar55 + fVar61 * auVar23._12_4_;
                  *pauVar35 = auVar49;
                  pauVar35 = pauVar35 + 1;
                } while (uVar46 < uVar37);
              }
LAB_1401e0d75:
              if (uVar37 < uVar40) {
                pfVar32 = (float *)(param_2 + uVar45 * 4 + uVar37 * 4);
                do {
                  lVar38 = uVar37 + 1;
                  lVar33 = uVar37 - 1;
                  lVar3 = uVar37 - 2;
                  lVar4 = uVar37 + 2;
                  uVar37 = uVar37 + 1;
                  *pfVar32 = fVar8 * (float)((uint)*(byte *)(lVar38 + uVar45 + lVar43) +
                                            (uint)*(byte *)(lVar33 + uVar45 + lVar31)) + *pfVar32 +
                             fVar62 * (float)((uint)*(byte *)(lVar4 + uVar45 + lVar43) +
                                             (uint)*(byte *)(lVar3 + uVar45 + lVar31));
                  pfVar32 = pfVar32 + 1;
                } while (uVar37 < uVar40);
              }
            }
          }
        }
        uVar40 = uVar39 + 1;
        lVar43 = lVar43 + 2;
        lVar41 = lVar41 + 2;
        lVar31 = lVar31 + -2;
      } while (uVar40 < lVar36 - 1U >> 1);
      lVar31 = uVar39 + 2 + uVar40;
    }
    if (lVar36 != lVar31) {
      fVar8 = param_4[lVar31];
      lVar44 = lVar31 + lVar34;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_1401e126d:
          uVar42 = 0;
          if (param_3 == 0) goto LAB_1401e1091;
          uVar39 = 0;
          uVar40 = param_3;
        }
        else {
          uVar40 = param_2 & 0x1f;
          if (uVar40 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1401e126d;
            uVar40 = 0x20 - uVar40 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar40 + 0x10)) goto LAB_1401e126d;
          lVar34 = lVar34 + lVar31;
          lVar41 = (lVar36 + param_1) - lVar31;
          uVar39 = 0;
          uVar42 = param_3 - (param_3 - uVar40 & 0xf);
          if (uVar40 != 0) {
            do {
              *(float *)(param_2 + uVar39 * 4) =
                   fVar8 * (float)((uint)*(byte *)(uVar39 + lVar34) +
                                  (uint)*(byte *)(uVar39 + lVar41)) +
                   *(float *)(param_2 + uVar39 * 4);
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar40);
          }
          auVar23 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
          do {
            auVar18._8_8_ = 0;
            auVar18._0_8_ = *(ulonglong *)(uVar40 + lVar34);
            auVar67 = vpmovzxbw_avx(auVar18);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = *(ulonglong *)(uVar40 + lVar41);
            auVar57 = vpmovzxbw_avx(auVar19);
            auVar67 = vpaddw_avx(auVar67,auVar57);
            auVar20._8_8_ = 0;
            auVar20._0_8_ = *(ulonglong *)(uVar40 + 8 + lVar41);
            auVar57 = vpmovzxbw_avx(auVar20);
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)(uVar40 + 8 + lVar34);
            auVar77 = vpmovzxbw_avx(auVar21);
            auVar57 = vpaddw_avx(auVar77,auVar57);
            auVar77 = vpmovzxwd_avx(auVar67);
            auVar67 = vpsrldq_avx(auVar67,8);
            auVar67 = vpmovzxwd_avx(auVar67);
            auVar72._16_16_ = auVar67;
            auVar72._0_16_ = auVar77;
            auVar67 = vpmovzxwd_avx(auVar57);
            auVar57 = vpsrldq_avx(auVar57,8);
            auVar57 = vpmovzxwd_avx(auVar57);
            auVar68 = vcvtdq2ps_avx(auVar72);
            fVar63 = auVar23._0_4_;
            fVar64 = auVar23._4_4_;
            fVar65 = auVar23._8_4_;
            fVar66 = auVar23._12_4_;
            auVar69._16_16_ = auVar57;
            auVar69._0_16_ = auVar67;
            auVar22 = vcvtdq2ps_avx(auVar69);
            pfVar32 = (float *)(param_2 + uVar40 * 4);
            fVar62 = pfVar32[1];
            fVar48 = pfVar32[2];
            fVar51 = pfVar32[3];
            fVar53 = pfVar32[4];
            fVar55 = pfVar32[5];
            fVar24 = pfVar32[6];
            fVar25 = pfVar32[7];
            pfVar5 = (float *)(param_2 + uVar40 * 4);
            *pfVar5 = fVar63 * auVar68._0_4_ + *pfVar32;
            pfVar5[1] = fVar64 * auVar68._4_4_ + fVar62;
            pfVar5[2] = fVar65 * auVar68._8_4_ + fVar48;
            pfVar5[3] = fVar66 * auVar68._12_4_ + fVar51;
            pfVar5[4] = fVar63 * auVar68._16_4_ + fVar53;
            pfVar5[5] = fVar64 * auVar68._20_4_ + fVar55;
            pfVar5[6] = fVar65 * auVar68._24_4_ + fVar24;
            pfVar5[7] = auVar68._28_4_ + fVar25;
            pfVar32 = (float *)(param_2 + 0x20 + uVar40 * 4);
            fVar62 = pfVar32[1];
            fVar48 = pfVar32[2];
            fVar51 = pfVar32[3];
            fVar53 = pfVar32[4];
            fVar55 = pfVar32[5];
            fVar24 = pfVar32[6];
            fVar25 = pfVar32[7];
            pfVar5 = (float *)(param_2 + 0x20 + uVar40 * 4);
            *pfVar5 = fVar63 * auVar22._0_4_ + *pfVar32;
            pfVar5[1] = fVar64 * auVar22._4_4_ + fVar62;
            pfVar5[2] = fVar65 * auVar22._8_4_ + fVar48;
            pfVar5[3] = fVar66 * auVar22._12_4_ + fVar51;
            pfVar5[4] = fVar63 * auVar22._16_4_ + fVar53;
            pfVar5[5] = fVar64 * auVar22._20_4_ + fVar55;
            pfVar5[6] = fVar65 * auVar22._24_4_ + fVar24;
            pfVar5[7] = auVar22._28_4_ + fVar25;
            uVar40 = uVar40 + 0x10;
          } while (uVar40 < uVar42);
          if (param_3 < uVar42 + 1) goto LAB_1401e1091;
          uVar40 = param_3 - uVar42;
          if ((longlong)uVar40 < 4) {
            uVar39 = 0;
          }
          else {
            uVar45 = 0;
            uVar39 = uVar40 & 0xfffffffffffffffc;
            pfVar32 = (float *)(param_2 + uVar42 * 4);
            do {
              puVar1 = (uint *)(uVar45 + (param_1 - (lVar36 - lVar31)) + uVar42);
              puVar2 = (uint *)(uVar45 + (lVar36 - lVar31) + param_1 + uVar42);
              uVar45 = uVar45 + 4;
              auVar23 = vpmovzxbw_avx(ZEXT416(*puVar1));
              auVar67 = vpmovzxbw_avx(ZEXT416(*puVar2));
              auVar23 = vpaddw_avx(auVar23,auVar67);
              auVar23 = vpmovzxwd_avx(auVar23);
              auVar23 = vcvtdq2ps_avx(auVar23);
              *pfVar32 = fVar63 * auVar23._0_4_ + *pfVar32;
              pfVar32[1] = fVar64 * auVar23._4_4_ + pfVar32[1];
              pfVar32[2] = fVar65 * auVar23._8_4_ + pfVar32[2];
              pfVar32[3] = fVar66 * auVar23._12_4_ + pfVar32[3];
              pfVar32 = pfVar32 + 4;
            } while (uVar45 < uVar39);
          }
        }
        if (uVar39 < uVar40) {
          pfVar32 = (float *)(param_2 + uVar42 * 4 + uVar39 * 4);
          do {
            pbVar6 = (byte *)(uVar39 + (param_1 - (lVar36 - lVar31)) + uVar42);
            pbVar7 = (byte *)(uVar39 + uVar42 + param_1 + (lVar36 - lVar31));
            uVar39 = uVar39 + 1;
            *pfVar32 = fVar8 * (float)((uint)*pbVar6 + (uint)*pbVar7) + *pfVar32;
            pfVar32 = pfVar32 + 1;
          } while (uVar39 < uVar40);
        }
      }
    }
  }
LAB_1401e1091:
  fVar8 = param_4[lVar36];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1401e125a:
    uVar42 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar40 = param_2 & 0x1f;
    if (uVar40 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401e125a;
      uVar40 = 0x20 - uVar40 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar40 + 0x10)) goto LAB_1401e125a;
    uVar39 = 0;
    uVar42 = param_3 - (param_3 - uVar40 & 0xf);
    if (uVar40 != 0) {
      do {
        *(float *)(param_2 + uVar39 * 4) =
             fVar8 * (float)*(byte *)(uVar39 + 1 + lVar44) + *(float *)(param_2 + uVar39 * 4);
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar40);
    }
    auVar23 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
    do {
      auVar67 = *(undefined1 (*) [16])(uVar40 + 1 + lVar44);
      auVar77 = vpsrldq_avx(auVar67,8);
      auVar57 = vpmovzxbd_avx(auVar67);
      auVar67 = vpsrldq_avx(auVar67,4);
      auVar67 = vpmovzxbd_avx(auVar67);
      auVar73._16_16_ = auVar67;
      auVar73._0_16_ = auVar57;
      auVar67 = vpmovzxbd_avx(auVar77);
      auVar57 = vpsrldq_avx(auVar77,4);
      auVar57 = vpmovzxbd_avx(auVar57);
      auVar68 = vcvtdq2ps_avx(auVar73);
      fVar63 = auVar23._0_4_;
      fVar64 = auVar23._4_4_;
      fVar65 = auVar23._8_4_;
      fVar66 = auVar23._12_4_;
      auVar70._16_16_ = auVar57;
      auVar70._0_16_ = auVar67;
      auVar22 = vcvtdq2ps_avx(auVar70);
      pfVar32 = (float *)(param_2 + uVar40 * 4);
      fVar62 = pfVar32[1];
      fVar48 = pfVar32[2];
      fVar51 = pfVar32[3];
      fVar53 = pfVar32[4];
      fVar55 = pfVar32[5];
      fVar24 = pfVar32[6];
      fVar25 = pfVar32[7];
      pfVar5 = (float *)(param_2 + uVar40 * 4);
      *pfVar5 = fVar63 * auVar68._0_4_ + *pfVar32;
      pfVar5[1] = fVar64 * auVar68._4_4_ + fVar62;
      pfVar5[2] = fVar65 * auVar68._8_4_ + fVar48;
      pfVar5[3] = fVar66 * auVar68._12_4_ + fVar51;
      pfVar5[4] = fVar63 * auVar68._16_4_ + fVar53;
      pfVar5[5] = fVar64 * auVar68._20_4_ + fVar55;
      pfVar5[6] = fVar65 * auVar68._24_4_ + fVar24;
      pfVar5[7] = auVar68._28_4_ + fVar25;
      pfVar32 = (float *)(param_2 + 0x20 + uVar40 * 4);
      fVar62 = pfVar32[1];
      fVar48 = pfVar32[2];
      fVar51 = pfVar32[3];
      fVar53 = pfVar32[4];
      fVar55 = pfVar32[5];
      fVar24 = pfVar32[6];
      fVar25 = pfVar32[7];
      pfVar5 = (float *)(param_2 + 0x20 + uVar40 * 4);
      *pfVar5 = fVar63 * auVar22._0_4_ + *pfVar32;
      pfVar5[1] = fVar64 * auVar22._4_4_ + fVar62;
      pfVar5[2] = fVar65 * auVar22._8_4_ + fVar48;
      pfVar5[3] = fVar66 * auVar22._12_4_ + fVar51;
      pfVar5[4] = fVar63 * auVar22._16_4_ + fVar53;
      pfVar5[5] = fVar64 * auVar22._20_4_ + fVar55;
      pfVar5[6] = fVar65 * auVar22._24_4_ + fVar24;
      pfVar5[7] = auVar22._28_4_ + fVar25;
      uVar40 = uVar40 + 0x10;
    } while (uVar40 < uVar42);
    if (param_3 < uVar42 + 1) {
      return;
    }
    param_3 = param_3 - uVar42;
    if (3 < (longlong)param_3) {
      uVar39 = 0;
      uVar40 = param_3 & 0xfffffffffffffffc;
      pfVar32 = (float *)(param_2 + uVar42 * 4);
      do {
        auVar23 = vpmovzxbd_avx(ZEXT416(*(uint *)(uVar39 + 1 + uVar42 + lVar44)));
        uVar39 = uVar39 + 4;
        auVar23 = vcvtdq2ps_avx(auVar23);
        *pfVar32 = fVar63 * auVar23._0_4_ + *pfVar32;
        pfVar32[1] = fVar64 * auVar23._4_4_ + pfVar32[1];
        pfVar32[2] = fVar65 * auVar23._8_4_ + pfVar32[2];
        pfVar32[3] = fVar66 * auVar23._12_4_ + pfVar32[3];
        pfVar32 = pfVar32 + 4;
      } while (uVar39 < uVar40);
      goto LAB_1401e1204;
    }
  }
  uVar40 = 0;
LAB_1401e1204:
  if (uVar40 < param_3) {
    pfVar32 = (float *)(param_2 + uVar42 * 4 + uVar40 * 4);
    do {
      lVar34 = uVar40 + 1;
      uVar40 = uVar40 + 1;
      *pfVar32 = fVar8 * (float)*(byte *)(lVar34 + uVar42 + lVar44) + *pfVar32;
      pfVar32 = pfVar32 + 1;
    } while (uVar40 < param_3);
  }
  return;
}

