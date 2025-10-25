
void FUN_1400aad60(longlong param_1,float *param_2,ulonglong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  float *pfVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [32];
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar65;
  undefined1 in_ZMM5 [64];
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar70 [32];
  
  lVar39 = (longlong)(param_5 >> 1);
  fVar5 = *param_4;
  lVar28 = param_1 + lVar39 * -4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x10) {
LAB_1400ab73c:
      uVar32 = 0;
      if (param_3 == 0) goto LAB_1400aaf7c;
      uVar29 = 0;
      uVar30 = param_3;
    }
    else {
      uVar30 = (ulonglong)param_2 & 0x1f;
      if (uVar30 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_1400ab73c;
        uVar30 = 0x20 - uVar30 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar30 + 0x10)) goto LAB_1400ab73c;
      lVar34 = lVar39 * -4 + param_1;
      uVar29 = 0;
      uVar32 = param_3 - (param_3 - uVar30 & 0xf);
      lVar35 = param_1 + lVar39 * 4;
      if (uVar30 != 0) {
        do {
          param_2[uVar29] =
               fVar5 * (*(float *)(lVar34 + uVar29 * 4) + *(float *)(lVar35 + uVar29 * 4));
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar30);
      }
      auVar51 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
      do {
        auVar69 = *(undefined1 (*) [16])(lVar34 + uVar30 * 4);
        auVar62 = *(undefined1 (*) [16])(lVar35 + uVar30 * 4);
        auVar7 = *(undefined1 (*) [16])(lVar34 + 0x10 + uVar30 * 4);
        auVar8 = *(undefined1 (*) [16])(lVar35 + 0x10 + uVar30 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar35 + 0x20 + uVar30 * 4);
        in_ZMM5 = ZEXT1664(auVar9);
        fVar47 = auVar51._0_4_;
        auVar46._0_4_ = fVar47 * (auVar69._0_4_ + auVar62._0_4_);
        fVar48 = auVar51._4_4_;
        auVar46._4_4_ = fVar48 * (auVar69._4_4_ + auVar62._4_4_);
        fVar49 = auVar51._8_4_;
        auVar46._8_4_ = fVar49 * (auVar69._8_4_ + auVar62._8_4_);
        fVar59 = auVar51._12_4_;
        auVar46._12_4_ = fVar59 * (auVar69._12_4_ + auVar62._12_4_);
        auVar46._16_4_ = fVar47 * (auVar7._0_4_ + auVar8._0_4_);
        auVar46._20_4_ = fVar48 * (auVar7._4_4_ + auVar8._4_4_);
        auVar46._24_4_ = fVar49 * (auVar7._8_4_ + auVar8._8_4_);
        auVar46._28_4_ = 0;
        pfVar42 = (float *)(lVar34 + 0x20 + uVar30 * 4);
        fVar6 = *pfVar42;
        fVar61 = pfVar42[1];
        fVar64 = pfVar42[2];
        fVar66 = pfVar42[3];
        *(undefined1 (*) [32])(param_2 + uVar30) = auVar46;
        lVar33 = lVar34 + 0x30 + uVar30 * 4;
        fVar68 = *(float *)(lVar33 + 0x10);
        fVar10 = *(float *)(lVar33 + 0x14);
        fVar11 = *(float *)(lVar33 + 0x18);
        fVar45 = *(float *)(lVar33 + 0x1c);
        auVar69 = *(undefined1 (*) [16])(lVar35 + 0x30 + uVar30 * 4);
        pfVar42 = param_2 + uVar30 + 8;
        *pfVar42 = fVar47 * (fVar6 + auVar9._0_4_);
        pfVar42[1] = fVar48 * (fVar61 + auVar9._4_4_);
        pfVar42[2] = fVar49 * (fVar64 + auVar9._8_4_);
        pfVar42[3] = fVar59 * (fVar66 + auVar9._12_4_);
        pfVar42[4] = fVar47 * (fVar68 + auVar69._0_4_);
        pfVar42[5] = fVar48 * (fVar10 + auVar69._4_4_);
        pfVar42[6] = fVar49 * (fVar11 + auVar69._8_4_);
        pfVar42[7] = fVar45 + auVar69._12_4_;
        uVar30 = uVar30 + 0x10;
      } while (uVar30 < uVar32);
      if (param_3 < uVar32 + 1) goto LAB_1400aaf7c;
      uVar30 = param_3 - uVar32;
      if ((longlong)uVar30 < 4) {
        uVar29 = 0;
      }
      else {
        uVar41 = 0;
        uVar29 = uVar30 & 0xfffffffffffffffc;
        do {
          pfVar42 = (float *)(lVar34 + uVar32 * 4 + uVar41 * 4);
          pfVar1 = (float *)(lVar35 + uVar32 * 4 + uVar41 * 4);
          auVar51._0_4_ = fVar47 * (*pfVar42 + *pfVar1);
          auVar51._4_4_ = fVar48 * (pfVar42[1] + pfVar1[1]);
          auVar51._8_4_ = fVar49 * (pfVar42[2] + pfVar1[2]);
          auVar51._12_4_ = fVar59 * (pfVar42[3] + pfVar1[3]);
          *(undefined1 (*) [16])(param_2 + uVar32 + uVar41) = auVar51;
          uVar41 = uVar41 + 4;
        } while (uVar41 < uVar29);
      }
    }
    if (uVar29 < uVar30) {
      do {
        param_2[uVar32 + uVar29] =
             fVar5 * (*(float *)(lVar39 * -4 + param_1 + uVar32 * 4 + uVar29 * 4) +
                     *(float *)(param_1 + lVar39 * 4 + uVar32 * 4 + uVar29 * 4));
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar30);
    }
  }
LAB_1400aaf7c:
  if (1 < lVar39) {
    lVar35 = 1;
    lVar34 = 0;
    if (lVar39 - 1U >> 1 != 0) {
      uVar32 = (ulonglong)param_2 & 0x1f;
      lVar35 = param_1 + lVar39 * 4;
      lVar33 = lVar39 * -4 + param_1;
      uVar30 = 0;
      do {
        uVar29 = uVar30;
        fVar5 = *(float *)(lVar34 + 4 + (longlong)param_4);
        fVar6 = *(float *)(lVar34 + 8 + (longlong)param_4);
        lVar28 = lVar33 + 8;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x10) ||
             (((uVar30 = uVar32, uVar32 != 0 &&
               (uVar30 = 0x20 - uVar32 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar30 + 0x10))))) {
            uVar41 = 0;
            if (param_3 != 0) {
              uVar43 = 0;
              uVar30 = param_3;
              goto LAB_1400ab297;
            }
          }
          else {
            uVar43 = 0;
            uVar41 = param_3 - (param_3 - uVar30 & 0xf);
            lVar37 = lVar35;
            lVar38 = lVar33;
            pfVar42 = param_2;
            if (uVar30 != 0) {
              do {
                uVar43 = uVar43 + 1;
                *pfVar42 = fVar5 * (*(float *)(lVar38 + 4) + *(float *)(lVar37 + -4)) + *pfVar42 +
                           fVar6 * (*(float *)(lVar38 + 8) + *(float *)(lVar37 + -8));
                lVar37 = lVar37 + 4;
                lVar38 = lVar38 + 4;
                pfVar42 = pfVar42 + 1;
              } while (uVar43 < uVar30);
            }
            auVar51 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
            lVar37 = lVar33 + uVar30 * 4;
            auVar69 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
            in_ZMM5 = ZEXT3264(CONCAT1616(auVar51,auVar51));
            do {
              pfVar2 = (float *)(lVar35 + -4 + uVar30 * 4);
              fVar47 = pfVar2[1];
              fVar48 = pfVar2[2];
              fVar49 = pfVar2[3];
              auVar46 = *(undefined1 (*) [32])(lVar37 + 4);
              lVar38 = lVar35 + 0xc + uVar30 * 4;
              fVar59 = *(float *)(lVar38 + 0x10);
              fVar12 = *(float *)(lVar38 + 0x14);
              fVar13 = *(float *)(lVar38 + 0x18);
              fVar14 = *(float *)(lVar38 + 0x1c);
              fVar50 = auVar69._0_4_;
              fVar52 = auVar69._4_4_;
              fVar53 = auVar69._8_4_;
              fVar54 = auVar69._12_4_;
              pfVar42 = param_2 + uVar30;
              fVar61 = pfVar42[1];
              fVar64 = pfVar42[2];
              fVar66 = pfVar42[3];
              fVar68 = pfVar42[4];
              fVar10 = pfVar42[5];
              fVar11 = pfVar42[6];
              fVar45 = pfVar42[7];
              fVar55 = *(float *)(lVar37 + 0x18);
              fVar56 = *(float *)(lVar37 + 0x1c);
              fVar57 = *(float *)(lVar37 + 0x20);
              fVar58 = *(float *)(lVar37 + 0x24);
              fVar73 = *(float *)(lVar37 + 0x14);
              fVar72 = *(float *)(lVar37 + 0x10);
              fVar71 = *(float *)(lVar37 + 0xc);
              pfVar3 = (float *)(lVar35 + -8 + uVar30 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              lVar38 = lVar35 + 8 + uVar30 * 4;
              fVar24 = *(float *)(lVar38 + 0x10);
              fVar25 = *(float *)(lVar38 + 0x14);
              fVar26 = *(float *)(lVar38 + 0x18);
              fVar27 = *(float *)(lVar38 + 0x1c);
              fVar60 = auVar51._0_4_;
              fVar63 = auVar51._4_4_;
              fVar65 = auVar51._8_4_;
              fVar67 = auVar51._12_4_;
              auVar62 = *(undefined1 (*) [16])(lVar37 + 0x24);
              pfVar1 = param_2 + uVar30;
              *pfVar1 = fVar50 * (auVar46._0_4_ + *pfVar2) + *pfVar42 +
                        fVar60 * (*(float *)(lVar37 + 8) + *pfVar3);
              pfVar1[1] = fVar52 * (auVar46._4_4_ + fVar47) + fVar61 + fVar63 * (fVar71 + fVar21);
              pfVar1[2] = fVar53 * (auVar46._8_4_ + fVar48) + fVar64 + fVar65 * (fVar72 + fVar22);
              pfVar1[3] = fVar54 * (auVar46._12_4_ + fVar49) + fVar66 + fVar67 * (fVar73 + fVar23);
              pfVar1[4] = fVar50 * (auVar46._16_4_ + fVar59) + fVar68 + fVar60 * (fVar55 + fVar24);
              pfVar1[5] = fVar52 * (auVar46._20_4_ + fVar12) + fVar10 + fVar63 * (fVar56 + fVar25);
              pfVar1[6] = fVar53 * (auVar46._24_4_ + fVar13) + fVar11 + fVar65 * (fVar57 + fVar26);
              pfVar1[7] = fVar14 + fVar45 + fVar58 + fVar27;
              pfVar1 = (float *)(lVar35 + 0x1c + uVar30 * 4);
              auVar7 = *(undefined1 (*) [16])(lVar37 + 0x34);
              lVar38 = lVar35 + 0x2c + uVar30 * 4;
              pfVar42 = (float *)(lVar37 + 0x28);
              auVar8 = *(undefined1 (*) [16])(lVar35 + 0x18 + uVar30 * 4);
              pfVar2 = param_2 + uVar30 + 8;
              pfVar3 = (float *)(lVar37 + 0x2c);
              pfVar15 = (float *)(lVar37 + 0x30);
              pfVar16 = (float *)(lVar37 + 0x34);
              pfVar17 = (float *)(lVar37 + 0x38);
              pfVar18 = (float *)(lVar37 + 0x3c);
              pfVar19 = (float *)(lVar37 + 0x40);
              pfVar20 = (float *)(lVar37 + 0x44);
              lVar37 = lVar37 + 0x40;
              auVar9 = *(undefined1 (*) [16])(lVar35 + 0x28 + uVar30 * 4);
              auVar70._0_4_ =
                   fVar50 * (auVar62._0_4_ + *pfVar1) + *pfVar2 + fVar60 * (*pfVar42 + auVar8._0_4_)
              ;
              auVar70._4_4_ =
                   fVar52 * (auVar62._4_4_ + pfVar1[1]) + pfVar2[1] +
                   fVar63 * (*pfVar3 + auVar8._4_4_);
              auVar70._8_4_ =
                   fVar53 * (auVar62._8_4_ + pfVar1[2]) + pfVar2[2] +
                   fVar65 * (*pfVar15 + auVar8._8_4_);
              auVar70._12_4_ =
                   fVar54 * (auVar62._12_4_ + pfVar1[3]) + pfVar2[3] +
                   fVar67 * (*pfVar16 + auVar8._12_4_);
              auVar70._16_4_ =
                   fVar50 * (auVar7._0_4_ + *(float *)(lVar38 + 0x10)) + pfVar2[4] +
                   fVar60 * (*pfVar17 + auVar9._0_4_);
              auVar70._20_4_ =
                   fVar52 * (auVar7._4_4_ + *(float *)(lVar38 + 0x14)) + pfVar2[5] +
                   fVar63 * (*pfVar18 + auVar9._4_4_);
              auVar70._24_4_ =
                   fVar53 * (auVar7._8_4_ + *(float *)(lVar38 + 0x18)) + pfVar2[6] +
                   fVar65 * (*pfVar19 + auVar9._8_4_);
              auVar70._28_4_ = *(float *)(lVar38 + 0x1c) + pfVar2[7] + *pfVar20 + auVar9._12_4_;
              *(undefined1 (*) [32])(param_2 + uVar30 + 8) = auVar70;
              uVar30 = uVar30 + 0x10;
            } while (uVar30 < uVar41);
            if (uVar41 + 1 <= param_3) {
              uVar30 = param_3 - uVar41;
              if ((longlong)uVar30 < 4) {
                uVar43 = 0;
              }
              else {
                uVar36 = 0;
                uVar43 = uVar30 & 0xfffffffffffffffc;
                pauVar40 = (undefined1 (*) [16])(param_2 + uVar41);
                lVar37 = lVar39 * -4 + param_1 + uVar41 * 4;
                lVar38 = lVar34;
                uVar44 = uVar36;
                do {
                  pfVar42 = (float *)(lVar38 + 4 + lVar37);
                  pfVar1 = (float *)(lVar38 + 8 + lVar37);
                  uVar44 = uVar44 + 4;
                  lVar31 = lVar35 + uVar41 * 4;
                  lVar38 = lVar38 + 0x10;
                  pfVar2 = (float *)((uVar36 - 4) + lVar31);
                  pfVar3 = (float *)((uVar36 - 8) + lVar31);
                  fVar61 = fVar60 * (*pfVar1 + *pfVar3);
                  fVar64 = fVar63 * (pfVar1[1] + pfVar3[1]);
                  fVar66 = fVar65 * (pfVar1[2] + pfVar3[2]);
                  fVar68 = fVar67 * (pfVar1[3] + pfVar3[3]);
                  in_ZMM5 = ZEXT1664(CONCAT412(fVar68,CONCAT48(fVar66,CONCAT44(fVar64,fVar61))));
                  uVar36 = uVar36 + 0x10;
                  auVar69._0_4_ = fVar50 * (*pfVar42 + *pfVar2) + *(float *)*pauVar40 + fVar61;
                  auVar69._4_4_ =
                       fVar52 * (pfVar42[1] + pfVar2[1]) + *(float *)((longlong)*pauVar40 + 4) +
                       fVar64;
                  auVar69._8_4_ =
                       fVar53 * (pfVar42[2] + pfVar2[2]) + *(float *)((longlong)*pauVar40 + 8) +
                       fVar66;
                  auVar69._12_4_ =
                       fVar54 * (pfVar42[3] + pfVar2[3]) + *(float *)((longlong)*pauVar40 + 0xc) +
                       fVar68;
                  *pauVar40 = auVar69;
                  pauVar40 = pauVar40 + 1;
                } while (uVar44 < uVar43);
              }
LAB_1400ab297:
              if (uVar43 < uVar30) {
                lVar38 = lVar33 + uVar41 * 4;
                lVar37 = lVar35 + uVar41 * 4;
                do {
                  fVar61 = *(float *)(lVar38 + 8 + uVar43 * 4);
                  in_ZMM5 = ZEXT464((uint)fVar61);
                  param_2[uVar41 + uVar43] =
                       fVar5 * (*(float *)(lVar38 + 4 + uVar43 * 4) +
                               *(float *)(lVar37 + -4 + uVar43 * 4)) + param_2[uVar41 + uVar43] +
                       fVar6 * (fVar61 + *(float *)(lVar37 + -8 + uVar43 * 4));
                  uVar43 = uVar43 + 1;
                } while (uVar43 < uVar30);
              }
            }
          }
        }
        uVar30 = uVar29 + 1;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + 8;
        lVar35 = lVar35 + -8;
      } while (uVar30 < lVar39 - 1U >> 1);
      lVar35 = uVar29 + 2 + uVar30;
    }
    if (lVar39 != lVar35) {
      lVar34 = lVar39 * -4;
      fVar5 = param_4[lVar35];
      lVar28 = param_1 + lVar34 + lVar35 * 4;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_1400ab700:
          uVar32 = 0;
          if (param_3 == 0) goto LAB_1400ab544;
          uVar29 = 0;
          uVar30 = param_3;
        }
        else {
          uVar30 = (ulonglong)param_2 & 0x1f;
          if (uVar30 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_1400ab700;
            uVar30 = 0x20 - uVar30 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar30 + 0x10)) goto LAB_1400ab700;
          lVar33 = param_1 + lVar34 + lVar35 * 4;
          uVar32 = param_3 - (param_3 - uVar30 & 0xf);
          lVar37 = param_1 + lVar39 * 4 + lVar35 * -4;
          uVar29 = 0;
          if (uVar30 != 0) {
            do {
              param_2[uVar29] =
                   fVar5 * (*(float *)(lVar33 + uVar29 * 4) + *(float *)(lVar37 + uVar29 * 4)) +
                   param_2[uVar29];
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar30);
          }
          auVar51 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
          lVar31 = lVar35 * -4 + lVar39 * 4 + param_1;
          lVar38 = lVar34 + lVar35 * 4 + param_1;
          do {
            auVar69 = *(undefined1 (*) [16])(lVar33 + uVar30 * 4);
            auVar62 = *(undefined1 (*) [16])(lVar37 + uVar30 * 4);
            auVar7 = *(undefined1 (*) [16])(lVar33 + 0x10 + uVar30 * 4);
            auVar8 = *(undefined1 (*) [16])(lVar37 + 0x10 + uVar30 * 4);
            pfVar42 = (float *)(lVar38 + 0x20 + uVar30 * 4);
            fVar45 = *pfVar42;
            fVar47 = pfVar42[1];
            fVar48 = pfVar42[2];
            fVar49 = pfVar42[3];
            fVar55 = auVar51._0_4_;
            fVar56 = auVar51._4_4_;
            fVar57 = auVar51._8_4_;
            fVar58 = auVar51._12_4_;
            pfVar42 = param_2 + uVar30;
            fVar6 = pfVar42[1];
            fVar61 = pfVar42[2];
            fVar64 = pfVar42[3];
            fVar66 = pfVar42[4];
            fVar68 = pfVar42[5];
            fVar10 = pfVar42[6];
            fVar11 = pfVar42[7];
            pfVar1 = param_2 + uVar30;
            *pfVar1 = fVar55 * (auVar69._0_4_ + auVar62._0_4_) + *pfVar42;
            pfVar1[1] = fVar56 * (auVar69._4_4_ + auVar62._4_4_) + fVar6;
            pfVar1[2] = fVar57 * (auVar69._8_4_ + auVar62._8_4_) + fVar61;
            pfVar1[3] = fVar58 * (auVar69._12_4_ + auVar62._12_4_) + fVar64;
            pfVar1[4] = fVar55 * (auVar7._0_4_ + auVar8._0_4_) + fVar66;
            pfVar1[5] = fVar56 * (auVar7._4_4_ + auVar8._4_4_) + fVar68;
            pfVar1[6] = fVar57 * (auVar7._8_4_ + auVar8._8_4_) + fVar10;
            pfVar1[7] = fVar11 + 0.0;
            auVar69 = *(undefined1 (*) [16])(lVar31 + 0x20 + uVar30 * 4);
            lVar4 = lVar38 + 0x30 + uVar30 * 4;
            fVar59 = *(float *)(lVar4 + 0x10);
            fVar12 = *(float *)(lVar4 + 0x14);
            fVar13 = *(float *)(lVar4 + 0x18);
            fVar14 = *(float *)(lVar4 + 0x1c);
            auVar62 = *(undefined1 (*) [16])(lVar31 + 0x30 + uVar30 * 4);
            in_ZMM5 = ZEXT3264(CONCAT1616(auVar62,auVar69));
            pfVar42 = param_2 + uVar30 + 8;
            fVar6 = pfVar42[1];
            fVar61 = pfVar42[2];
            fVar64 = pfVar42[3];
            fVar66 = pfVar42[4];
            fVar68 = pfVar42[5];
            fVar10 = pfVar42[6];
            fVar11 = pfVar42[7];
            pfVar1 = param_2 + uVar30 + 8;
            *pfVar1 = fVar55 * (fVar45 + auVar69._0_4_) + *pfVar42;
            pfVar1[1] = fVar56 * (fVar47 + auVar69._4_4_) + fVar6;
            pfVar1[2] = fVar57 * (fVar48 + auVar69._8_4_) + fVar61;
            pfVar1[3] = fVar58 * (fVar49 + auVar69._12_4_) + fVar64;
            pfVar1[4] = fVar55 * (fVar59 + auVar62._0_4_) + fVar66;
            pfVar1[5] = fVar56 * (fVar12 + auVar62._4_4_) + fVar68;
            pfVar1[6] = fVar57 * (fVar13 + auVar62._8_4_) + fVar10;
            pfVar1[7] = fVar14 + auVar62._12_4_ + fVar11;
            uVar30 = uVar30 + 0x10;
          } while (uVar30 < uVar32);
          if (param_3 < uVar32 + 1) goto LAB_1400ab544;
          uVar30 = param_3 - uVar32;
          if ((longlong)uVar30 < 4) {
            uVar29 = 0;
          }
          else {
            uVar41 = 0;
            uVar29 = uVar30 & 0xfffffffffffffffc;
            do {
              pfVar42 = (float *)(lVar38 + uVar32 * 4 + uVar41 * 4);
              pfVar1 = (float *)(lVar31 + uVar32 * 4 + uVar41 * 4);
              pfVar2 = param_2 + uVar32 + uVar41;
              auVar62._0_4_ = fVar55 * (*pfVar42 + *pfVar1) + *pfVar2;
              auVar62._4_4_ = fVar56 * (pfVar42[1] + pfVar1[1]) + pfVar2[1];
              auVar62._8_4_ = fVar57 * (pfVar42[2] + pfVar1[2]) + pfVar2[2];
              auVar62._12_4_ = fVar58 * (pfVar42[3] + pfVar1[3]) + pfVar2[3];
              in_ZMM5 = ZEXT1664(auVar62);
              *(undefined1 (*) [16])(param_2 + uVar32 + uVar41) = auVar62;
              uVar41 = uVar41 + 4;
            } while (uVar41 < uVar29);
          }
        }
        if (uVar29 < uVar30) {
          do {
            param_2[uVar32 + uVar29] =
                 fVar5 * (*(float *)(lVar34 + lVar35 * 4 + param_1 + uVar32 * 4 + uVar29 * 4) +
                         *(float *)(param_1 + lVar35 * -4 + lVar39 * 4 + uVar32 * 4 + uVar29 * 4)) +
                 param_2[uVar32 + uVar29];
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar30);
        }
      }
    }
  }
LAB_1400ab544:
  fVar5 = param_4[lVar39];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1400ab6ed:
    uVar32 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar30 = (ulonglong)param_2 & 0x1f;
    if (uVar30 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_1400ab6ed;
      uVar30 = 0x20 - uVar30 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar30 + 0x10)) goto LAB_1400ab6ed;
    uVar29 = 0;
    uVar32 = param_3 - (param_3 - uVar30 & 0xf);
    if (uVar30 != 0) {
      do {
        param_2[uVar29] = fVar5 * *(float *)(lVar28 + 4 + uVar29 * 4) + param_2[uVar29];
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar30);
    }
    auVar51 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
    do {
      auVar69 = *(undefined1 (*) [16])(lVar28 + 4 + uVar30 * 4);
      auVar62 = *(undefined1 (*) [16])(lVar28 + 0x14 + uVar30 * 4);
      fVar45 = auVar51._0_4_;
      fVar47 = auVar51._4_4_;
      fVar48 = auVar51._8_4_;
      fVar49 = auVar51._12_4_;
      auVar7 = *(undefined1 (*) [16])(lVar28 + 0x24 + uVar30 * 4);
      pfVar42 = param_2 + uVar30;
      fVar6 = pfVar42[1];
      fVar61 = pfVar42[2];
      fVar64 = pfVar42[3];
      fVar66 = pfVar42[4];
      fVar68 = pfVar42[5];
      fVar10 = pfVar42[6];
      fVar59 = in_ZMM5._28_4_ + pfVar42[7];
      pfVar1 = param_2 + uVar30;
      *pfVar1 = fVar45 * auVar69._0_4_ + *pfVar42;
      pfVar1[1] = fVar47 * auVar69._4_4_ + fVar6;
      pfVar1[2] = fVar48 * auVar69._8_4_ + fVar61;
      pfVar1[3] = fVar49 * auVar69._12_4_ + fVar64;
      pfVar1[4] = fVar45 * auVar62._0_4_ + fVar66;
      pfVar1[5] = fVar47 * auVar62._4_4_ + fVar68;
      pfVar1[6] = fVar48 * auVar62._8_4_ + fVar10;
      pfVar1[7] = fVar59;
      auVar69 = *(undefined1 (*) [16])(lVar28 + 0x34 + uVar30 * 4);
      in_ZMM5 = ZEXT3264(CONCAT1616(auVar69,auVar7));
      pfVar42 = param_2 + uVar30 + 8;
      fVar6 = pfVar42[1];
      fVar61 = pfVar42[2];
      fVar64 = pfVar42[3];
      fVar66 = pfVar42[4];
      fVar68 = pfVar42[5];
      fVar10 = pfVar42[6];
      fVar11 = pfVar42[7];
      pfVar1 = param_2 + uVar30 + 8;
      *pfVar1 = fVar45 * auVar7._0_4_ + *pfVar42;
      pfVar1[1] = fVar47 * auVar7._4_4_ + fVar6;
      pfVar1[2] = fVar48 * auVar7._8_4_ + fVar61;
      pfVar1[3] = fVar49 * auVar7._12_4_ + fVar64;
      pfVar1[4] = fVar45 * auVar69._0_4_ + fVar66;
      pfVar1[5] = fVar47 * auVar69._4_4_ + fVar68;
      pfVar1[6] = fVar48 * auVar69._8_4_ + fVar10;
      pfVar1[7] = fVar59 + fVar11;
      uVar30 = uVar30 + 0x10;
    } while (uVar30 < uVar32);
    if (param_3 < uVar32 + 1) {
      return;
    }
    param_3 = param_3 - uVar32;
    if (3 < (longlong)param_3) {
      uVar29 = 0;
      uVar30 = param_3 & 0xfffffffffffffffc;
      do {
        pfVar2 = (float *)(lVar28 + uVar32 * 4 + 4 + uVar29 * 4);
        fVar6 = pfVar2[1];
        fVar61 = pfVar2[2];
        fVar64 = pfVar2[3];
        pfVar42 = param_2 + uVar32 + uVar29;
        fVar66 = pfVar42[1];
        fVar68 = pfVar42[2];
        fVar10 = pfVar42[3];
        pfVar1 = param_2 + uVar32 + uVar29;
        *pfVar1 = fVar45 * *pfVar2 + *pfVar42;
        pfVar1[1] = fVar47 * fVar6 + fVar66;
        pfVar1[2] = fVar48 * fVar61 + fVar68;
        pfVar1[3] = fVar49 * fVar64 + fVar10;
        uVar29 = uVar29 + 4;
      } while (uVar29 < uVar30);
      goto LAB_1400ab699;
    }
  }
  uVar30 = 0;
LAB_1400ab699:
  if (uVar30 < param_3) {
    do {
      param_2[uVar32 + uVar30] =
           fVar5 * *(float *)(lVar28 + uVar32 * 4 + 4 + uVar30 * 4) + param_2[uVar32 + uVar30];
      uVar30 = uVar30 + 1;
    } while (uVar30 < param_3);
  }
  return;
}

