
void FUN_1407e18e0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  float *pfVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  float fVar58;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  
  lVar53 = (longlong)(param_5 >> 1);
  fVar6 = *param_4;
  lVar51 = lVar53 * -2 + param_1;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x10) {
LAB_1407e2293:
      uVar49 = 0;
      if (param_3 == 0) goto LAB_1407e1b27;
      uVar47 = 0;
      uVar50 = param_3;
    }
    else {
      uVar50 = param_2 & 0x1f;
      if (uVar50 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1407e2293;
        uVar50 = 0x20 - uVar50 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar50 + 0x10)) goto LAB_1407e2293;
      lVar44 = lVar53 * -2 + param_1;
      uVar47 = 0;
      uVar49 = param_3 - (param_3 - uVar50 & 0xf);
      lVar45 = param_1 + lVar53 * 2;
      if (uVar50 != 0) {
        do {
          *(float *)(param_2 + uVar47 * 4) =
               fVar6 * (float)((uint)*(ushort *)(lVar44 + uVar47 * 2) +
                              (uint)*(ushort *)(lVar45 + uVar47 * 2));
          uVar47 = uVar47 + 1;
        } while (uVar47 < uVar50);
      }
      auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(lVar44 + uVar50 * 2);
        auVar7 = vpmovzxwd_avx(auVar7);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(lVar45 + uVar50 * 2);
        auVar8 = vpmovzxwd_avx(auVar8);
        auVar7 = vpaddd_avx(auVar7,auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(lVar45 + 8 + uVar50 * 2);
        auVar8 = vpmovzxwd_avx(auVar9);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(lVar44 + 8 + uVar50 * 2);
        auVar9 = vpmovzxwd_avx(auVar10);
        auVar8 = vpaddd_avx(auVar9,auVar8);
        auVar66._16_16_ = auVar8;
        auVar66._0_16_ = auVar7;
        auVar60 = vcvtdq2ps_avx(auVar66);
        fVar69 = auVar40._0_4_;
        fVar70 = auVar40._4_4_;
        fVar71 = auVar40._8_4_;
        fVar72 = auVar40._12_4_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(lVar44 + 0x10 + uVar50 * 2);
        auVar7 = vpmovzxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(lVar45 + 0x10 + uVar50 * 2);
        auVar9 = vpmovzxwd_avx(auVar12);
        pfVar48 = (float *)(param_2 + uVar50 * 4);
        *pfVar48 = fVar69 * auVar60._0_4_;
        pfVar48[1] = fVar70 * auVar60._4_4_;
        pfVar48[2] = fVar71 * auVar60._8_4_;
        pfVar48[3] = fVar72 * auVar60._12_4_;
        pfVar48[4] = fVar69 * auVar60._16_4_;
        pfVar48[5] = fVar70 * auVar60._20_4_;
        pfVar48[6] = fVar71 * auVar60._24_4_;
        pfVar48[7] = auVar8._12_4_;
        auVar7 = vpaddd_avx(auVar7,auVar9);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(lVar44 + 0x18 + uVar50 * 2);
        auVar8 = vpmovzxwd_avx(auVar13);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(lVar45 + 0x18 + uVar50 * 2);
        auVar9 = vpmovzxwd_avx(auVar14);
        auVar8 = vpaddd_avx(auVar8,auVar9);
        auVar60._16_16_ = auVar8;
        auVar60._0_16_ = auVar7;
        auVar60 = vcvtdq2ps_avx(auVar60);
        auVar39._4_4_ = fVar70 * auVar60._4_4_;
        auVar39._0_4_ = fVar69 * auVar60._0_4_;
        auVar39._8_4_ = fVar71 * auVar60._8_4_;
        auVar39._12_4_ = fVar72 * auVar60._12_4_;
        auVar39._16_4_ = fVar69 * auVar60._16_4_;
        auVar39._20_4_ = fVar70 * auVar60._20_4_;
        auVar39._24_4_ = fVar71 * auVar60._24_4_;
        auVar39._28_4_ = auVar8._12_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar50 * 4) = auVar39;
        uVar50 = uVar50 + 0x10;
      } while (uVar50 < uVar49);
      if (param_3 < uVar49 + 1) goto LAB_1407e1b27;
      uVar50 = param_3 - uVar49;
      if ((longlong)uVar50 < 4) {
        uVar47 = 0;
      }
      else {
        uVar57 = 0;
        uVar47 = uVar50 & 0xfffffffffffffffc;
        do {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = *(ulonglong *)(lVar44 + uVar49 * 2 + uVar57 * 2);
          auVar40 = vpmovzxwd_avx(auVar40);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = *(ulonglong *)(lVar45 + uVar49 * 2 + uVar57 * 2);
          auVar7 = vpmovzxwd_avx(auVar15);
          auVar40 = vpaddd_avx(auVar40,auVar7);
          auVar40 = vcvtdq2ps_avx(auVar40);
          auVar59._0_4_ = fVar69 * auVar40._0_4_;
          auVar59._4_4_ = fVar70 * auVar40._4_4_;
          auVar59._8_4_ = fVar71 * auVar40._8_4_;
          auVar59._12_4_ = fVar72 * auVar40._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar49 * 4 + uVar57 * 4) = auVar59;
          uVar57 = uVar57 + 4;
        } while (uVar57 < uVar47);
      }
    }
    if (uVar47 < uVar50) {
      do {
        *(float *)(param_2 + uVar49 * 4 + uVar47 * 4) =
             fVar6 * (float)((uint)*(ushort *)(lVar53 * -2 + param_1 + uVar49 * 2 + uVar47 * 2) +
                            (uint)*(ushort *)(param_1 + lVar53 * 2 + uVar49 * 2 + uVar47 * 2));
        uVar47 = uVar47 + 1;
      } while (uVar47 < uVar50);
    }
  }
LAB_1407e1b27:
  if (1 < lVar53) {
    lVar45 = 1;
    lVar44 = 0;
    if (lVar53 - 1U >> 1 != 0) {
      uVar49 = param_2 & 0x1f;
      lVar45 = param_1 + lVar53 * 2;
      lVar46 = lVar53 * -2 + param_1;
      uVar50 = 0;
      do {
        uVar47 = uVar50;
        fVar6 = param_4[uVar47 * 2 + 1];
        lVar51 = lVar46 + 4;
        fVar69 = param_4[uVar47 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 8) ||
             (((uVar50 = uVar49, uVar49 != 0 && (uVar50 = 0x20 - uVar49 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar50 + 8))))) {
            uVar57 = 0;
          }
          else {
            uVar54 = 0;
            uVar57 = param_3 - (param_3 - uVar50 & 7);
            lVar55 = lVar45;
            lVar56 = lVar46;
            if (uVar50 != 0) {
              do {
                *(float *)(param_2 + uVar54 * 4) =
                     fVar6 * (float)((uint)*(ushort *)(lVar56 + 2) + (uint)*(ushort *)(lVar55 + -2))
                     + *(float *)(param_2 + uVar54 * 4) +
                     fVar69 * (float)((uint)*(ushort *)(lVar56 + 4) + (uint)*(ushort *)(lVar55 + -4)
                                     );
                uVar54 = uVar54 + 1;
                lVar55 = lVar55 + 2;
                lVar56 = lVar56 + 2;
              } while (uVar54 < uVar50);
            }
            auVar40 = vshufps_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),0);
            auVar7 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
            lVar52 = lVar53 * -2 + param_1;
            lVar56 = uVar50 * 2;
            lVar55 = lVar44 + uVar50 * 2;
            do {
              auVar16._8_8_ = 0;
              auVar16._0_8_ = *(ulonglong *)(lVar55 + 2 + lVar52);
              auVar8 = vpmovzxwd_avx(auVar16);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulonglong *)(lVar56 + -2 + lVar45);
              auVar9 = vpmovzxwd_avx(auVar17);
              auVar18._8_8_ = 0;
              auVar18._0_8_ = *(ulonglong *)(lVar55 + 10 + lVar52);
              auVar10 = vpmovzxwd_avx(auVar18);
              auVar8 = vpaddd_avx(auVar8,auVar9);
              auVar19._8_8_ = 0;
              auVar19._0_8_ = *(ulonglong *)(lVar56 + 6 + lVar45);
              auVar9 = vpmovzxwd_avx(auVar19);
              auVar9 = vpaddd_avx(auVar10,auVar9);
              auVar67._16_16_ = auVar9;
              auVar67._0_16_ = auVar8;
              auVar60 = vcvtdq2ps_avx(auVar67);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = *(ulonglong *)(lVar56 + -4 + lVar45);
              auVar8 = vpmovzxwd_avx(auVar20);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *(ulonglong *)(lVar55 + 4 + lVar52);
              auVar9 = vpmovzxwd_avx(auVar21);
              pfVar48 = (float *)(param_2 + uVar50 * 4);
              fVar70 = pfVar48[1];
              fVar71 = pfVar48[2];
              fVar72 = pfVar48[3];
              fVar41 = pfVar48[4];
              fVar42 = pfVar48[5];
              fVar43 = pfVar48[6];
              fVar58 = pfVar48[7];
              auVar8 = vpaddd_avx(auVar9,auVar8);
              auVar22._8_8_ = 0;
              auVar22._0_8_ = *(ulonglong *)(lVar55 + 0xc + lVar52);
              auVar9 = vpmovzxwd_avx(auVar22);
              lVar55 = lVar55 + 0x10;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = *(ulonglong *)(lVar56 + 4 + lVar45);
              auVar10 = vpmovzxwd_avx(auVar23);
              lVar56 = lVar56 + 0x10;
              auVar9 = vpaddd_avx(auVar9,auVar10);
              auVar61._16_16_ = auVar9;
              auVar61._0_16_ = auVar8;
              auVar39 = vcvtdq2ps_avx(auVar61);
              pfVar5 = (float *)(param_2 + uVar50 * 4);
              *pfVar5 = auVar7._0_4_ * auVar60._0_4_ + *pfVar48 + auVar40._0_4_ * auVar39._0_4_;
              pfVar5[1] = auVar7._4_4_ * auVar60._4_4_ + fVar70 + auVar40._4_4_ * auVar39._4_4_;
              pfVar5[2] = auVar7._8_4_ * auVar60._8_4_ + fVar71 + auVar40._8_4_ * auVar39._8_4_;
              pfVar5[3] = auVar7._12_4_ * auVar60._12_4_ + fVar72 + auVar40._12_4_ * auVar39._12_4_;
              pfVar5[4] = auVar7._0_4_ * auVar60._16_4_ + fVar41 + auVar40._0_4_ * auVar39._16_4_;
              pfVar5[5] = auVar7._4_4_ * auVar60._20_4_ + fVar42 + auVar40._4_4_ * auVar39._20_4_;
              pfVar5[6] = auVar7._8_4_ * auVar60._24_4_ + fVar43 + auVar40._8_4_ * auVar39._24_4_;
              pfVar5[7] = fVar58 + 0.0 + auVar9._12_4_;
              uVar50 = uVar50 + 8;
            } while (uVar50 < uVar57);
          }
          lVar55 = lVar46 + uVar57 * 2;
          if (uVar57 < param_3) {
            lVar56 = lVar45 + uVar57 * 2;
            do {
              puVar1 = (ushort *)(lVar55 + 2);
              puVar2 = (ushort *)(lVar56 + -2);
              puVar3 = (ushort *)(lVar56 + -4);
              puVar4 = (ushort *)(lVar55 + 4);
              lVar55 = lVar55 + 2;
              lVar56 = lVar56 + 2;
              *(float *)(param_2 + uVar57 * 4) =
                   fVar6 * (float)((uint)*puVar1 + (uint)*puVar2) + *(float *)(param_2 + uVar57 * 4)
                   + fVar69 * (float)((uint)*puVar4 + (uint)*puVar3);
              uVar57 = uVar57 + 1;
            } while (uVar57 < param_3);
          }
        }
        uVar50 = uVar47 + 1;
        lVar46 = lVar46 + 4;
        lVar44 = lVar44 + 4;
        lVar45 = lVar45 + -4;
      } while (uVar50 < lVar53 - 1U >> 1);
      lVar45 = uVar47 + 2 + uVar50;
    }
    if (lVar53 != lVar45) {
      lVar44 = lVar53 * -2;
      fVar6 = param_4[lVar45];
      lVar51 = param_1 + lVar44 + lVar45 * 2;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_1407e226d:
          uVar49 = 0;
          if (param_3 == 0) goto LAB_1407e2092;
          uVar47 = 0;
          uVar50 = param_3;
        }
        else {
          uVar50 = param_2 & 0x1f;
          if (uVar50 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1407e226d;
            uVar50 = 0x20 - uVar50 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar50 + 0x10)) goto LAB_1407e226d;
          lVar55 = param_1 + lVar53 * 2 + lVar45 * -2;
          uVar49 = param_3 - (param_3 - uVar50 & 0xf);
          lVar46 = param_1 + lVar44 + lVar45 * 2;
          uVar47 = 0;
          if (uVar50 != 0) {
            do {
              *(float *)(param_2 + uVar47 * 4) =
                   fVar6 * (float)((uint)*(ushort *)(lVar46 + uVar47 * 2) +
                                  (uint)*(ushort *)(lVar55 + uVar47 * 2)) +
                   *(float *)(param_2 + uVar47 * 4);
              uVar47 = uVar47 + 1;
            } while (uVar47 < uVar50);
          }
          auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
          lVar52 = lVar45 * -2 + lVar53 * 2 + param_1;
          lVar56 = lVar44 + lVar45 * 2 + param_1;
          do {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(lVar46 + uVar50 * 2);
            auVar7 = vpmovzxwd_avx(auVar24);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = *(ulonglong *)(lVar55 + uVar50 * 2);
            auVar8 = vpmovzxwd_avx(auVar25);
            auVar7 = vpaddd_avx(auVar7,auVar8);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(lVar55 + 8 + uVar50 * 2);
            auVar8 = vpmovzxwd_avx(auVar26);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = *(ulonglong *)(lVar46 + 8 + uVar50 * 2);
            auVar9 = vpmovzxwd_avx(auVar27);
            auVar8 = vpaddd_avx(auVar9,auVar8);
            auVar68._16_16_ = auVar8;
            auVar68._0_16_ = auVar7;
            auVar60 = vcvtdq2ps_avx(auVar68);
            fVar58 = auVar40._0_4_;
            fVar63 = auVar40._4_4_;
            fVar64 = auVar40._8_4_;
            fVar65 = auVar40._12_4_;
            pfVar48 = (float *)(param_2 + uVar50 * 4);
            fVar69 = pfVar48[1];
            fVar70 = pfVar48[2];
            fVar71 = pfVar48[3];
            fVar72 = pfVar48[4];
            fVar41 = pfVar48[5];
            fVar42 = pfVar48[6];
            fVar43 = pfVar48[7];
            auVar28._8_8_ = 0;
            auVar28._0_8_ = *(ulonglong *)(lVar56 + 0x10 + uVar50 * 2);
            auVar7 = vpmovzxwd_avx(auVar28);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(lVar52 + 0x10 + uVar50 * 2);
            auVar9 = vpmovzxwd_avx(auVar29);
            pfVar5 = (float *)(param_2 + uVar50 * 4);
            *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar48;
            pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
            pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
            pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
            pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
            pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
            pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
            pfVar5[7] = auVar8._12_4_ + fVar43;
            auVar7 = vpaddd_avx(auVar7,auVar9);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = *(ulonglong *)(lVar56 + 0x18 + uVar50 * 2);
            auVar8 = vpmovzxwd_avx(auVar30);
            auVar31._8_8_ = 0;
            auVar31._0_8_ = *(ulonglong *)(lVar52 + 0x18 + uVar50 * 2);
            auVar9 = vpmovzxwd_avx(auVar31);
            auVar8 = vpaddd_avx(auVar8,auVar9);
            auVar62._16_16_ = auVar8;
            auVar62._0_16_ = auVar7;
            auVar60 = vcvtdq2ps_avx(auVar62);
            pfVar48 = (float *)(param_2 + 0x20 + uVar50 * 4);
            fVar69 = pfVar48[1];
            fVar70 = pfVar48[2];
            fVar71 = pfVar48[3];
            fVar72 = pfVar48[4];
            fVar41 = pfVar48[5];
            fVar42 = pfVar48[6];
            fVar43 = pfVar48[7];
            pfVar5 = (float *)(param_2 + 0x20 + uVar50 * 4);
            *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar48;
            pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
            pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
            pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
            pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
            pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
            pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
            pfVar5[7] = fVar43 + 0.0;
            uVar50 = uVar50 + 0x10;
          } while (uVar50 < uVar49);
          if (param_3 < uVar49 + 1) goto LAB_1407e2092;
          uVar50 = param_3 - uVar49;
          if ((longlong)uVar50 < 4) {
            uVar47 = 0;
          }
          else {
            uVar57 = 0;
            uVar47 = uVar50 & 0xfffffffffffffffc;
            pfVar48 = (float *)(param_2 + uVar49 * 4);
            do {
              auVar32._8_8_ = 0;
              auVar32._0_8_ = *(ulonglong *)(lVar56 + uVar49 * 2 + uVar57 * 2);
              auVar40 = vpmovzxwd_avx(auVar32);
              auVar33._8_8_ = 0;
              auVar33._0_8_ = *(ulonglong *)(lVar52 + uVar49 * 2 + uVar57 * 2);
              auVar7 = vpmovzxwd_avx(auVar33);
              uVar57 = uVar57 + 4;
              auVar40 = vpaddd_avx(auVar40,auVar7);
              auVar40 = vcvtdq2ps_avx(auVar40);
              *pfVar48 = fVar58 * auVar40._0_4_ + *pfVar48;
              pfVar48[1] = fVar63 * auVar40._4_4_ + pfVar48[1];
              pfVar48[2] = fVar64 * auVar40._8_4_ + pfVar48[2];
              pfVar48[3] = fVar65 * auVar40._12_4_ + pfVar48[3];
              pfVar48 = pfVar48 + 4;
            } while (uVar57 < uVar47);
          }
        }
        if (uVar47 < uVar50) {
          pfVar48 = (float *)(param_2 + uVar49 * 4 + uVar47 * 4);
          do {
            lVar46 = uVar47 * 2;
            lVar55 = uVar47 * 2;
            uVar47 = uVar47 + 1;
            *pfVar48 = fVar6 * (float)((uint)*(ushort *)
                                              (lVar44 + lVar45 * 2 + param_1 + uVar49 * 2 + lVar46)
                                      + (uint)*(ushort *)
                                               (param_1 + lVar45 * -2 + lVar53 * 2 + uVar49 * 2 +
                                               lVar55)) + *pfVar48;
            pfVar48 = pfVar48 + 1;
          } while (uVar47 < uVar50);
        }
      }
    }
  }
LAB_1407e2092:
  fVar6 = param_4[lVar53];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1407e225a:
    uVar49 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar50 = param_2 & 0x1f;
    if (uVar50 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407e225a;
      uVar50 = 0x20 - uVar50 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar50 + 0x10)) goto LAB_1407e225a;
    uVar47 = 0;
    uVar49 = param_3 - (param_3 - uVar50 & 0xf);
    if (uVar50 != 0) {
      do {
        *(float *)(param_2 + uVar47 * 4) =
             fVar6 * (float)*(ushort *)(lVar51 + 2 + uVar47 * 2) + *(float *)(param_2 + uVar47 * 4);
        uVar47 = uVar47 + 1;
      } while (uVar47 < uVar50);
    }
    auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
    do {
      auVar34._8_8_ = 0;
      auVar34._0_8_ = *(ulonglong *)(lVar51 + 2 + uVar50 * 2);
      auVar7 = vpmovzxwd_avx(auVar34);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = *(ulonglong *)(lVar51 + 10 + uVar50 * 2);
      auVar8 = vpmovzxwd_avx(auVar35);
      auVar73._16_16_ = auVar8;
      auVar73._0_16_ = auVar7;
      auVar60 = vcvtdq2ps_avx(auVar73);
      fVar58 = auVar40._0_4_;
      fVar63 = auVar40._4_4_;
      fVar64 = auVar40._8_4_;
      fVar65 = auVar40._12_4_;
      pfVar48 = (float *)(param_2 + uVar50 * 4);
      fVar69 = pfVar48[1];
      fVar70 = pfVar48[2];
      fVar71 = pfVar48[3];
      fVar72 = pfVar48[4];
      fVar41 = pfVar48[5];
      fVar42 = pfVar48[6];
      fVar43 = pfVar48[7];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = *(ulonglong *)(lVar51 + 0x12 + uVar50 * 2);
      auVar7 = vpmovzxwd_avx(auVar36);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = *(ulonglong *)(lVar51 + 0x1a + uVar50 * 2);
      auVar8 = vpmovzxwd_avx(auVar37);
      pfVar5 = (float *)(param_2 + uVar50 * 4);
      *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar48;
      pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
      pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
      pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
      pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
      pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
      pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
      pfVar5[7] = fVar43 + 0.0;
      auVar74._16_16_ = auVar8;
      auVar74._0_16_ = auVar7;
      auVar60 = vcvtdq2ps_avx(auVar74);
      pfVar48 = (float *)(param_2 + 0x20 + uVar50 * 4);
      fVar69 = pfVar48[1];
      fVar70 = pfVar48[2];
      fVar71 = pfVar48[3];
      fVar72 = pfVar48[4];
      fVar41 = pfVar48[5];
      fVar42 = pfVar48[6];
      fVar43 = pfVar48[7];
      pfVar5 = (float *)(param_2 + 0x20 + uVar50 * 4);
      *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar48;
      pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
      pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
      pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
      pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
      pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
      pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
      pfVar5[7] = fVar43 + 0.0;
      uVar50 = uVar50 + 0x10;
    } while (uVar50 < uVar49);
    if (param_3 < uVar49 + 1) {
      return;
    }
    param_3 = param_3 - uVar49;
    if (3 < (longlong)param_3) {
      uVar47 = 0;
      uVar50 = param_3 & 0xfffffffffffffffc;
      pfVar48 = (float *)(param_2 + uVar49 * 4);
      do {
        auVar38._8_8_ = 0;
        auVar38._0_8_ = *(ulonglong *)(lVar51 + uVar49 * 2 + 2 + uVar47 * 2);
        auVar40 = vpmovzxwd_avx(auVar38);
        uVar47 = uVar47 + 4;
        auVar40 = vcvtdq2ps_avx(auVar40);
        *pfVar48 = fVar58 * auVar40._0_4_ + *pfVar48;
        pfVar48[1] = fVar63 * auVar40._4_4_ + pfVar48[1];
        pfVar48[2] = fVar64 * auVar40._8_4_ + pfVar48[2];
        pfVar48[3] = fVar65 * auVar40._12_4_ + pfVar48[3];
        pfVar48 = pfVar48 + 4;
      } while (uVar47 < uVar50);
      goto LAB_1407e2204;
    }
  }
  uVar50 = 0;
LAB_1407e2204:
  if (uVar50 < param_3) {
    pfVar48 = (float *)(param_2 + uVar49 * 4 + uVar50 * 4);
    do {
      lVar53 = uVar50 * 2;
      uVar50 = uVar50 + 1;
      *pfVar48 = fVar6 * (float)*(ushort *)(lVar51 + uVar49 * 2 + 2 + lVar53) + *pfVar48;
      pfVar48 = pfVar48 + 1;
    } while (uVar50 < param_3);
  }
  return;
}

