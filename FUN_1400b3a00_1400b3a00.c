
void FUN_1400b3a00(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
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
  float *pfVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  longlong lVar57;
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
  longlong lStack_70;
  
  lVar44 = (longlong)(param_5 >> 1);
  uVar51 = param_3 * 3;
  fVar6 = *param_4;
  lStack_70 = lVar44 * -6 + param_1;
  if (0 < (longlong)uVar51) {
    if ((longlong)uVar51 < 0x10) {
LAB_1400b4414:
      uVar49 = 0;
      if (uVar51 == 0) goto LAB_1400b3c47;
      uVar48 = 0;
      uVar50 = uVar51;
    }
    else {
      uVar50 = param_2 & 0x1f;
      if (uVar50 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1400b4414;
        uVar50 = 0x20 - uVar50 >> 2;
      }
      if ((longlong)uVar51 < (longlong)(uVar50 + 0x10)) goto LAB_1400b4414;
      uVar48 = 0;
      uVar49 = uVar51 - (uVar51 - uVar50 & 0xf);
      lVar57 = param_1 + lVar44 * 6;
      lVar45 = lVar44 * -6 + param_1;
      if (uVar50 != 0) {
        do {
          *(float *)(param_2 + uVar48 * 4) =
               fVar6 * (float)((int)*(short *)(lVar45 + uVar48 * 2) +
                              (int)*(short *)(lVar57 + uVar48 * 2));
          uVar48 = uVar48 + 1;
        } while (uVar48 < uVar50);
      }
      auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(lVar45 + uVar50 * 2);
        auVar7 = vpmovsxwd_avx(auVar7);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(lVar57 + uVar50 * 2);
        auVar8 = vpmovsxwd_avx(auVar8);
        auVar7 = vpaddd_avx(auVar7,auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(lVar57 + 8 + uVar50 * 2);
        auVar8 = vpmovsxwd_avx(auVar9);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(lVar45 + 8 + uVar50 * 2);
        auVar9 = vpmovsxwd_avx(auVar10);
        auVar8 = vpaddd_avx(auVar9,auVar8);
        auVar66._16_16_ = auVar8;
        auVar66._0_16_ = auVar7;
        auVar60 = vcvtdq2ps_avx(auVar66);
        fVar69 = auVar40._0_4_;
        fVar70 = auVar40._4_4_;
        fVar71 = auVar40._8_4_;
        fVar72 = auVar40._12_4_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(lVar45 + 0x10 + uVar50 * 2);
        auVar7 = vpmovsxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(lVar57 + 0x10 + uVar50 * 2);
        auVar9 = vpmovsxwd_avx(auVar12);
        pfVar47 = (float *)(param_2 + uVar50 * 4);
        *pfVar47 = fVar69 * auVar60._0_4_;
        pfVar47[1] = fVar70 * auVar60._4_4_;
        pfVar47[2] = fVar71 * auVar60._8_4_;
        pfVar47[3] = fVar72 * auVar60._12_4_;
        pfVar47[4] = fVar69 * auVar60._16_4_;
        pfVar47[5] = fVar70 * auVar60._20_4_;
        pfVar47[6] = fVar71 * auVar60._24_4_;
        pfVar47[7] = auVar8._12_4_;
        auVar7 = vpaddd_avx(auVar7,auVar9);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(lVar45 + 0x18 + uVar50 * 2);
        auVar8 = vpmovsxwd_avx(auVar13);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(lVar57 + 0x18 + uVar50 * 2);
        auVar9 = vpmovsxwd_avx(auVar14);
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
      if (uVar51 < uVar49 + 1) goto LAB_1400b3c47;
      uVar50 = uVar51 - uVar49;
      if ((longlong)uVar50 < 4) {
        uVar48 = 0;
      }
      else {
        uVar56 = 0;
        uVar48 = uVar50 & 0xfffffffffffffffc;
        do {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = *(ulonglong *)(lVar45 + uVar49 * 2 + uVar56 * 2);
          auVar40 = vpmovsxwd_avx(auVar40);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = *(ulonglong *)(lVar57 + uVar49 * 2 + uVar56 * 2);
          auVar7 = vpmovsxwd_avx(auVar15);
          auVar40 = vpaddd_avx(auVar40,auVar7);
          auVar40 = vcvtdq2ps_avx(auVar40);
          auVar59._0_4_ = fVar69 * auVar40._0_4_;
          auVar59._4_4_ = fVar70 * auVar40._4_4_;
          auVar59._8_4_ = fVar71 * auVar40._8_4_;
          auVar59._12_4_ = fVar72 * auVar40._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar49 * 4 + uVar56 * 4) = auVar59;
          uVar56 = uVar56 + 4;
        } while (uVar56 < uVar48);
      }
    }
    if (uVar48 < uVar50) {
      do {
        *(float *)(param_2 + uVar49 * 4 + uVar48 * 4) =
             fVar6 * (float)((int)*(short *)(lVar44 * -6 + param_1 + uVar49 * 2 + uVar48 * 2) +
                            (int)*(short *)(param_1 + lVar44 * 6 + uVar49 * 2 + uVar48 * 2));
        uVar48 = uVar48 + 1;
      } while (uVar48 < uVar50);
    }
  }
LAB_1400b3c47:
  if (1 < lVar44) {
    lVar57 = 1;
    lVar45 = 0;
    if (lVar44 - 1U >> 1 != 0) {
      lVar57 = param_1 + lVar44 * 6;
      uVar49 = param_2 & 0x1f;
      lVar46 = lVar44 * -6 + param_1;
      uVar50 = 0;
      do {
        uVar48 = uVar50;
        fVar6 = param_4[uVar48 * 2 + 1];
        lStack_70 = lVar46 + 0xc;
        fVar69 = param_4[uVar48 * 2 + 2];
        if (0 < (longlong)uVar51) {
          if (((longlong)uVar51 < 8) ||
             (((uVar50 = uVar49, uVar49 != 0 && (uVar50 = 0x20 - uVar49 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar51 < (longlong)(uVar50 + 8))))) {
            uVar56 = 0;
          }
          else {
            uVar53 = 0;
            uVar56 = uVar51 - (uVar51 - uVar50 & 7);
            lVar54 = lVar57;
            lVar55 = lVar46;
            if (uVar50 != 0) {
              do {
                *(float *)(param_2 + uVar53 * 4) =
                     fVar6 * (float)((int)*(short *)(lVar55 + 6) + (int)*(short *)(lVar54 + -6)) +
                     *(float *)(param_2 + uVar53 * 4) +
                     fVar69 * (float)((int)*(short *)(lVar55 + 0xc) + (int)*(short *)(lVar54 + -0xc)
                                     );
                uVar53 = uVar53 + 1;
                lVar54 = lVar54 + 2;
                lVar55 = lVar55 + 2;
              } while (uVar53 < uVar50);
            }
            lVar55 = uVar50 * 2;
            auVar40 = vshufps_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),0);
            auVar7 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
            lVar54 = lVar45 + uVar50 * 2;
            lVar52 = lVar44 * -6 + param_1;
            do {
              auVar16._8_8_ = 0;
              auVar16._0_8_ = *(ulonglong *)(lVar54 + 6 + lVar52);
              auVar8 = vpmovsxwd_avx(auVar16);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulonglong *)(lVar55 + -6 + lVar57);
              auVar9 = vpmovsxwd_avx(auVar17);
              auVar18._8_8_ = 0;
              auVar18._0_8_ = *(ulonglong *)(lVar54 + 0xe + lVar52);
              auVar10 = vpmovsxwd_avx(auVar18);
              auVar8 = vpaddd_avx(auVar8,auVar9);
              auVar19._8_8_ = 0;
              auVar19._0_8_ = *(ulonglong *)(lVar55 + 2 + lVar57);
              auVar9 = vpmovsxwd_avx(auVar19);
              auVar9 = vpaddd_avx(auVar10,auVar9);
              auVar67._16_16_ = auVar9;
              auVar67._0_16_ = auVar8;
              auVar60 = vcvtdq2ps_avx(auVar67);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = *(ulonglong *)(lVar55 + -0xc + lVar57);
              auVar8 = vpmovsxwd_avx(auVar20);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *(ulonglong *)(lVar54 + 0xc + lVar52);
              auVar9 = vpmovsxwd_avx(auVar21);
              pfVar47 = (float *)(param_2 + uVar50 * 4);
              fVar70 = pfVar47[1];
              fVar71 = pfVar47[2];
              fVar72 = pfVar47[3];
              fVar41 = pfVar47[4];
              fVar42 = pfVar47[5];
              fVar43 = pfVar47[6];
              fVar58 = pfVar47[7];
              auVar8 = vpaddd_avx(auVar9,auVar8);
              auVar22._8_8_ = 0;
              auVar22._0_8_ = *(ulonglong *)(lVar54 + 0x14 + lVar52);
              auVar9 = vpmovsxwd_avx(auVar22);
              lVar54 = lVar54 + 0x10;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = *(ulonglong *)(lVar55 + -4 + lVar57);
              auVar10 = vpmovsxwd_avx(auVar23);
              lVar55 = lVar55 + 0x10;
              auVar9 = vpaddd_avx(auVar9,auVar10);
              auVar61._16_16_ = auVar9;
              auVar61._0_16_ = auVar8;
              auVar39 = vcvtdq2ps_avx(auVar61);
              pfVar5 = (float *)(param_2 + uVar50 * 4);
              *pfVar5 = auVar7._0_4_ * auVar60._0_4_ + *pfVar47 + auVar40._0_4_ * auVar39._0_4_;
              pfVar5[1] = auVar7._4_4_ * auVar60._4_4_ + fVar70 + auVar40._4_4_ * auVar39._4_4_;
              pfVar5[2] = auVar7._8_4_ * auVar60._8_4_ + fVar71 + auVar40._8_4_ * auVar39._8_4_;
              pfVar5[3] = auVar7._12_4_ * auVar60._12_4_ + fVar72 + auVar40._12_4_ * auVar39._12_4_;
              pfVar5[4] = auVar7._0_4_ * auVar60._16_4_ + fVar41 + auVar40._0_4_ * auVar39._16_4_;
              pfVar5[5] = auVar7._4_4_ * auVar60._20_4_ + fVar42 + auVar40._4_4_ * auVar39._20_4_;
              pfVar5[6] = auVar7._8_4_ * auVar60._24_4_ + fVar43 + auVar40._8_4_ * auVar39._24_4_;
              pfVar5[7] = fVar58 + 0.0 + auVar9._12_4_;
              uVar50 = uVar50 + 8;
            } while (uVar50 < uVar56);
          }
          lVar54 = lVar46 + uVar56 * 2;
          if (uVar56 < uVar51) {
            lVar55 = lVar57 + uVar56 * 2;
            do {
              psVar1 = (short *)(lVar54 + 6);
              psVar2 = (short *)(lVar55 + -6);
              psVar3 = (short *)(lVar55 + -0xc);
              psVar4 = (short *)(lVar54 + 0xc);
              lVar54 = lVar54 + 2;
              lVar55 = lVar55 + 2;
              *(float *)(param_2 + uVar56 * 4) =
                   fVar6 * (float)((int)*psVar1 + (int)*psVar2) + *(float *)(param_2 + uVar56 * 4) +
                   fVar69 * (float)((int)*psVar4 + (int)*psVar3);
              uVar56 = uVar56 + 1;
            } while (uVar56 < uVar51);
          }
        }
        uVar50 = uVar48 + 1;
        lVar46 = lVar46 + 0xc;
        lVar45 = lVar45 + 0xc;
        lVar57 = lVar57 + -0xc;
      } while (uVar50 < lVar44 - 1U >> 1);
      lVar57 = uVar48 + 2 + uVar50;
    }
    if (lVar44 != lVar57) {
      fVar6 = param_4[lVar57];
      lVar45 = lVar44 * -6;
      lStack_70 = param_1 + lVar45 + lVar57 * 6;
      if (0 < (longlong)uVar51) {
        if ((longlong)uVar51 < 0x10) {
LAB_1400b43ee:
          uVar49 = 0;
          if (uVar51 == 0) goto LAB_1400b420f;
          uVar48 = 0;
          uVar50 = uVar51;
        }
        else {
          uVar50 = param_2 & 0x1f;
          if (uVar50 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1400b43ee;
            uVar50 = 0x20 - uVar50 >> 2;
          }
          if ((longlong)uVar51 < (longlong)(uVar50 + 0x10)) goto LAB_1400b43ee;
          uVar49 = uVar51 - (uVar51 - uVar50 & 0xf);
          lVar46 = param_1 + lVar44 * 6 + lVar57 * -6;
          uVar48 = 0;
          if (uVar50 != 0) {
            do {
              *(float *)(param_2 + uVar48 * 4) =
                   fVar6 * (float)((int)*(short *)(lStack_70 + uVar48 * 2) +
                                  (int)*(short *)(lVar46 + uVar48 * 2)) +
                   *(float *)(param_2 + uVar48 * 4);
              uVar48 = uVar48 + 1;
            } while (uVar48 < uVar50);
          }
          auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
          lVar54 = lVar57 * -6 + lVar44 * 6 + param_1;
          lVar55 = lVar45 + lVar57 * 6 + param_1;
          do {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(lStack_70 + uVar50 * 2);
            auVar7 = vpmovsxwd_avx(auVar24);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = *(ulonglong *)(lVar46 + uVar50 * 2);
            auVar8 = vpmovsxwd_avx(auVar25);
            auVar7 = vpaddd_avx(auVar7,auVar8);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(lVar46 + 8 + uVar50 * 2);
            auVar8 = vpmovsxwd_avx(auVar26);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = *(ulonglong *)(lStack_70 + 8 + uVar50 * 2);
            auVar9 = vpmovsxwd_avx(auVar27);
            auVar8 = vpaddd_avx(auVar9,auVar8);
            auVar68._16_16_ = auVar8;
            auVar68._0_16_ = auVar7;
            auVar60 = vcvtdq2ps_avx(auVar68);
            fVar58 = auVar40._0_4_;
            fVar63 = auVar40._4_4_;
            fVar64 = auVar40._8_4_;
            fVar65 = auVar40._12_4_;
            pfVar47 = (float *)(param_2 + uVar50 * 4);
            fVar69 = pfVar47[1];
            fVar70 = pfVar47[2];
            fVar71 = pfVar47[3];
            fVar72 = pfVar47[4];
            fVar41 = pfVar47[5];
            fVar42 = pfVar47[6];
            fVar43 = pfVar47[7];
            auVar28._8_8_ = 0;
            auVar28._0_8_ = *(ulonglong *)(lVar55 + 0x10 + uVar50 * 2);
            auVar7 = vpmovsxwd_avx(auVar28);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(lVar54 + 0x10 + uVar50 * 2);
            auVar9 = vpmovsxwd_avx(auVar29);
            pfVar5 = (float *)(param_2 + uVar50 * 4);
            *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar47;
            pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
            pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
            pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
            pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
            pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
            pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
            pfVar5[7] = auVar8._12_4_ + fVar43;
            auVar7 = vpaddd_avx(auVar7,auVar9);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = *(ulonglong *)(lVar55 + 0x18 + uVar50 * 2);
            auVar8 = vpmovsxwd_avx(auVar30);
            auVar31._8_8_ = 0;
            auVar31._0_8_ = *(ulonglong *)(lVar54 + 0x18 + uVar50 * 2);
            auVar9 = vpmovsxwd_avx(auVar31);
            auVar8 = vpaddd_avx(auVar8,auVar9);
            auVar62._16_16_ = auVar8;
            auVar62._0_16_ = auVar7;
            auVar60 = vcvtdq2ps_avx(auVar62);
            pfVar47 = (float *)(param_2 + 0x20 + uVar50 * 4);
            fVar69 = pfVar47[1];
            fVar70 = pfVar47[2];
            fVar71 = pfVar47[3];
            fVar72 = pfVar47[4];
            fVar41 = pfVar47[5];
            fVar42 = pfVar47[6];
            fVar43 = pfVar47[7];
            pfVar5 = (float *)(param_2 + 0x20 + uVar50 * 4);
            *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar47;
            pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
            pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
            pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
            pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
            pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
            pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
            pfVar5[7] = fVar43 + 0.0;
            uVar50 = uVar50 + 0x10;
          } while (uVar50 < uVar49);
          if (uVar51 < uVar49 + 1) goto LAB_1400b420f;
          uVar50 = uVar51 - uVar49;
          if ((longlong)uVar50 < 4) {
            uVar48 = 0;
          }
          else {
            uVar56 = 0;
            uVar48 = uVar50 & 0xfffffffffffffffc;
            pfVar47 = (float *)(param_2 + uVar49 * 4);
            do {
              auVar32._8_8_ = 0;
              auVar32._0_8_ = *(ulonglong *)(lVar55 + uVar49 * 2 + uVar56 * 2);
              auVar40 = vpmovsxwd_avx(auVar32);
              auVar33._8_8_ = 0;
              auVar33._0_8_ = *(ulonglong *)(lVar54 + uVar49 * 2 + uVar56 * 2);
              auVar7 = vpmovsxwd_avx(auVar33);
              uVar56 = uVar56 + 4;
              auVar40 = vpaddd_avx(auVar40,auVar7);
              auVar40 = vcvtdq2ps_avx(auVar40);
              *pfVar47 = fVar58 * auVar40._0_4_ + *pfVar47;
              pfVar47[1] = fVar63 * auVar40._4_4_ + pfVar47[1];
              pfVar47[2] = fVar64 * auVar40._8_4_ + pfVar47[2];
              pfVar47[3] = fVar65 * auVar40._12_4_ + pfVar47[3];
              pfVar47 = pfVar47 + 4;
            } while (uVar56 < uVar48);
          }
        }
        if (uVar48 < uVar50) {
          pfVar47 = (float *)(param_2 + uVar49 * 4 + uVar48 * 4);
          do {
            lVar46 = uVar48 * 2;
            lVar54 = uVar48 * 2;
            uVar48 = uVar48 + 1;
            *pfVar47 = fVar6 * (float)((int)*(short *)(lVar45 + lVar57 * 6 + param_1 + uVar49 * 2 +
                                                      lVar46) +
                                      (int)*(short *)(param_1 + lVar57 * -6 + lVar44 * 6 +
                                                      uVar49 * 2 + lVar54)) + *pfVar47;
            pfVar47 = pfVar47 + 1;
          } while (uVar48 < uVar50);
        }
      }
    }
  }
LAB_1400b420f:
  fVar6 = param_4[lVar44];
  if ((longlong)uVar51 < 1) {
    return;
  }
  if ((longlong)uVar51 < 0x10) {
LAB_1400b43da:
    uVar49 = 0;
    if (uVar51 == 0) {
      return;
    }
  }
  else {
    uVar50 = param_2 & 0x1f;
    if (uVar50 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1400b43da;
      uVar50 = 0x20 - uVar50 >> 2;
    }
    if ((longlong)uVar51 < (longlong)(uVar50 + 0x10)) goto LAB_1400b43da;
    uVar48 = 0;
    uVar49 = uVar51 - (uVar51 - uVar50 & 0xf);
    if (uVar50 != 0) {
      do {
        *(float *)(param_2 + uVar48 * 4) =
             fVar6 * (float)(int)*(short *)(lStack_70 + 6 + uVar48 * 2) +
             *(float *)(param_2 + uVar48 * 4);
        uVar48 = uVar48 + 1;
      } while (uVar48 < uVar50);
    }
    auVar40 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
    do {
      auVar34._8_8_ = 0;
      auVar34._0_8_ = *(ulonglong *)(lStack_70 + 6 + uVar50 * 2);
      auVar7 = vpmovsxwd_avx(auVar34);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = *(ulonglong *)(lStack_70 + 0xe + uVar50 * 2);
      auVar8 = vpmovsxwd_avx(auVar35);
      auVar73._16_16_ = auVar8;
      auVar73._0_16_ = auVar7;
      auVar60 = vcvtdq2ps_avx(auVar73);
      fVar58 = auVar40._0_4_;
      fVar63 = auVar40._4_4_;
      fVar64 = auVar40._8_4_;
      fVar65 = auVar40._12_4_;
      pfVar47 = (float *)(param_2 + uVar50 * 4);
      fVar69 = pfVar47[1];
      fVar70 = pfVar47[2];
      fVar71 = pfVar47[3];
      fVar72 = pfVar47[4];
      fVar41 = pfVar47[5];
      fVar42 = pfVar47[6];
      fVar43 = pfVar47[7];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = *(ulonglong *)(lStack_70 + 0x16 + uVar50 * 2);
      auVar7 = vpmovsxwd_avx(auVar36);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = *(ulonglong *)(lStack_70 + 0x1e + uVar50 * 2);
      auVar8 = vpmovsxwd_avx(auVar37);
      pfVar5 = (float *)(param_2 + uVar50 * 4);
      *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar47;
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
      pfVar47 = (float *)(param_2 + 0x20 + uVar50 * 4);
      fVar69 = pfVar47[1];
      fVar70 = pfVar47[2];
      fVar71 = pfVar47[3];
      fVar72 = pfVar47[4];
      fVar41 = pfVar47[5];
      fVar42 = pfVar47[6];
      fVar43 = pfVar47[7];
      pfVar5 = (float *)(param_2 + 0x20 + uVar50 * 4);
      *pfVar5 = fVar58 * auVar60._0_4_ + *pfVar47;
      pfVar5[1] = fVar63 * auVar60._4_4_ + fVar69;
      pfVar5[2] = fVar64 * auVar60._8_4_ + fVar70;
      pfVar5[3] = fVar65 * auVar60._12_4_ + fVar71;
      pfVar5[4] = fVar58 * auVar60._16_4_ + fVar72;
      pfVar5[5] = fVar63 * auVar60._20_4_ + fVar41;
      pfVar5[6] = fVar64 * auVar60._24_4_ + fVar42;
      pfVar5[7] = fVar43 + 0.0;
      uVar50 = uVar50 + 0x10;
    } while (uVar50 < uVar49);
    if (uVar51 < uVar49 + 1) {
      return;
    }
    uVar51 = uVar51 - uVar49;
    if (3 < (longlong)uVar51) {
      uVar50 = uVar51 & 0xfffffffffffffffc;
      uVar48 = 0;
      pfVar47 = (float *)(param_2 + uVar49 * 4);
      do {
        auVar38._8_8_ = 0;
        auVar38._0_8_ = *(ulonglong *)(lStack_70 + uVar49 * 2 + 6 + uVar48 * 2);
        auVar40 = vpmovsxwd_avx(auVar38);
        uVar48 = uVar48 + 4;
        auVar40 = vcvtdq2ps_avx(auVar40);
        *pfVar47 = fVar58 * auVar40._0_4_ + *pfVar47;
        pfVar47[1] = fVar63 * auVar40._4_4_ + pfVar47[1];
        pfVar47[2] = fVar64 * auVar40._8_4_ + pfVar47[2];
        pfVar47[3] = fVar65 * auVar40._12_4_ + pfVar47[3];
        pfVar47 = pfVar47 + 4;
      } while (uVar48 < uVar50);
      goto LAB_1400b4384;
    }
  }
  uVar50 = 0;
LAB_1400b4384:
  if (uVar50 < uVar51) {
    pfVar47 = (float *)(param_2 + uVar49 * 4 + uVar50 * 4);
    do {
      lVar44 = uVar50 * 2;
      uVar50 = uVar50 + 1;
      *pfVar47 = fVar6 * (float)(int)*(short *)(lStack_70 + uVar49 * 2 + 6 + lVar44) + *pfVar47;
      pfVar47 = pfVar47 + 1;
    } while (uVar50 < uVar51);
  }
  return;
}

