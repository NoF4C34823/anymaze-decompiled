
void FUN_14082bc80(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  float *pfVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [32];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar64;
  undefined1 in_ZMM5 [64];
  undefined1 auVar68 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar69 [32];
  longlong lStack_88;
  
  uVar37 = param_3 * 3;
  lVar28 = (longlong)(param_5 >> 1);
  fVar5 = *param_4;
  lStack_88 = lVar28 * -0xc + param_1;
  if (0 < (longlong)uVar37) {
    if ((longlong)uVar37 < 0x10) {
LAB_14082c69b:
      uVar31 = 0;
      if (uVar37 == 0) goto LAB_14082bebc;
      uVar29 = 0;
      uVar32 = uVar37;
    }
    else {
      uVar32 = (ulonglong)param_2 & 0x1f;
      if (uVar32 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_14082c69b;
        uVar32 = 0x20 - uVar32 >> 2;
      }
      if ((longlong)uVar37 < (longlong)(uVar32 + 0x10)) goto LAB_14082c69b;
      uVar29 = 0;
      uVar31 = uVar37 - (uVar37 - uVar32 & 0xf);
      lVar34 = param_1 + lVar28 * 0xc;
      lVar33 = lVar28 * -0xc + param_1;
      if (uVar32 != 0) {
        do {
          param_2[uVar29] =
               fVar5 * (*(float *)(lVar33 + uVar29 * 4) + *(float *)(lVar34 + uVar29 * 4));
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar32);
      }
      auVar50 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
      do {
        auVar68 = *(undefined1 (*) [16])(lVar33 + uVar32 * 4);
        auVar61 = *(undefined1 (*) [16])(lVar34 + uVar32 * 4);
        auVar7 = *(undefined1 (*) [16])(lVar33 + 0x10 + uVar32 * 4);
        auVar8 = *(undefined1 (*) [16])(lVar34 + 0x10 + uVar32 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar34 + 0x20 + uVar32 * 4);
        in_ZMM5 = ZEXT1664(auVar9);
        fVar46 = auVar50._0_4_;
        auVar45._0_4_ = fVar46 * (auVar68._0_4_ + auVar61._0_4_);
        fVar47 = auVar50._4_4_;
        auVar45._4_4_ = fVar47 * (auVar68._4_4_ + auVar61._4_4_);
        fVar48 = auVar50._8_4_;
        auVar45._8_4_ = fVar48 * (auVar68._8_4_ + auVar61._8_4_);
        fVar58 = auVar50._12_4_;
        auVar45._12_4_ = fVar58 * (auVar68._12_4_ + auVar61._12_4_);
        auVar45._16_4_ = fVar46 * (auVar7._0_4_ + auVar8._0_4_);
        auVar45._20_4_ = fVar47 * (auVar7._4_4_ + auVar8._4_4_);
        auVar45._24_4_ = fVar48 * (auVar7._8_4_ + auVar8._8_4_);
        auVar45._28_4_ = 0;
        pfVar39 = (float *)(lVar33 + 0x20 + uVar32 * 4);
        fVar6 = *pfVar39;
        fVar60 = pfVar39[1];
        fVar63 = pfVar39[2];
        fVar65 = pfVar39[3];
        *(undefined1 (*) [32])(param_2 + uVar32) = auVar45;
        lVar30 = lVar33 + 0x30 + uVar32 * 4;
        fVar67 = *(float *)(lVar30 + 0x10);
        fVar10 = *(float *)(lVar30 + 0x14);
        fVar11 = *(float *)(lVar30 + 0x18);
        fVar44 = *(float *)(lVar30 + 0x1c);
        auVar68 = *(undefined1 (*) [16])(lVar34 + 0x30 + uVar32 * 4);
        pfVar39 = param_2 + uVar32 + 8;
        *pfVar39 = fVar46 * (fVar6 + auVar9._0_4_);
        pfVar39[1] = fVar47 * (fVar60 + auVar9._4_4_);
        pfVar39[2] = fVar48 * (fVar63 + auVar9._8_4_);
        pfVar39[3] = fVar58 * (fVar65 + auVar9._12_4_);
        pfVar39[4] = fVar46 * (fVar67 + auVar68._0_4_);
        pfVar39[5] = fVar47 * (fVar10 + auVar68._4_4_);
        pfVar39[6] = fVar48 * (fVar11 + auVar68._8_4_);
        pfVar39[7] = fVar44 + auVar68._12_4_;
        uVar32 = uVar32 + 0x10;
      } while (uVar32 < uVar31);
      if (uVar37 < uVar31 + 1) goto LAB_14082bebc;
      uVar32 = uVar37 - uVar31;
      if ((longlong)uVar32 < 4) {
        uVar29 = 0;
      }
      else {
        uVar40 = 0;
        uVar29 = uVar32 & 0xfffffffffffffffc;
        do {
          pfVar4 = (float *)(lVar33 + uVar31 * 4 + uVar40 * 4);
          pfVar39 = (float *)(lVar34 + uVar31 * 4 + uVar40 * 4);
          auVar50._0_4_ = fVar46 * (*pfVar4 + *pfVar39);
          auVar50._4_4_ = fVar47 * (pfVar4[1] + pfVar39[1]);
          auVar50._8_4_ = fVar48 * (pfVar4[2] + pfVar39[2]);
          auVar50._12_4_ = fVar58 * (pfVar4[3] + pfVar39[3]);
          *(undefined1 (*) [16])(param_2 + uVar31 + uVar40) = auVar50;
          uVar40 = uVar40 + 4;
        } while (uVar40 < uVar29);
      }
    }
    if (uVar29 < uVar32) {
      do {
        param_2[uVar31 + uVar29] =
             fVar5 * (*(float *)(lVar28 * -0xc + param_1 + uVar31 * 4 + uVar29 * 4) +
                     *(float *)(param_1 + lVar28 * 0xc + uVar31 * 4 + uVar29 * 4));
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar32);
    }
  }
LAB_14082bebc:
  if (1 < lVar28) {
    lVar34 = 1;
    lVar33 = 0;
    if (lVar28 - 1U >> 1 != 0) {
      uVar31 = (ulonglong)param_2 & 0x1f;
      lVar34 = param_1 + lVar28 * 0xc;
      lVar30 = lVar28 * -0xc + param_1;
      uVar32 = 0;
      do {
        uVar29 = uVar32;
        lStack_88 = lVar30 + 0x18;
        fVar5 = param_4[uVar29 * 2 + 1];
        fVar6 = param_4[uVar29 * 2 + 2];
        if (0 < (longlong)uVar37) {
          if (((longlong)uVar37 < 0x10) ||
             (((uVar32 = uVar31, uVar31 != 0 &&
               (uVar32 = 0x20 - uVar31 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)uVar37 < (longlong)(uVar32 + 0x10))))) {
            uVar40 = 0;
            if (uVar37 != 0) {
              uVar41 = 0;
              uVar32 = uVar37;
              goto LAB_14082c1b7;
            }
          }
          else {
            uVar41 = 0;
            uVar40 = uVar37 - (uVar37 - uVar32 & 0xf);
            lVar36 = lVar34;
            lVar38 = lVar30;
            pfVar39 = param_2;
            if (uVar32 != 0) {
              do {
                uVar41 = uVar41 + 1;
                *pfVar39 = fVar5 * (*(float *)(lVar38 + 0xc) + *(float *)(lVar36 + -0xc)) + *pfVar39
                           + fVar6 * (*(float *)(lVar38 + 0x18) + *(float *)(lVar36 + -0x18));
                lVar36 = lVar36 + 4;
                lVar38 = lVar38 + 4;
                pfVar39 = pfVar39 + 1;
              } while (uVar41 < uVar32);
            }
            auVar50 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
            lVar36 = lVar30 + uVar32 * 4;
            auVar68 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
            in_ZMM5 = ZEXT3264(CONCAT1616(auVar50,auVar50));
            do {
              pfVar2 = (float *)(lVar34 + -0xc + uVar32 * 4);
              fVar46 = pfVar2[1];
              fVar47 = pfVar2[2];
              fVar48 = pfVar2[3];
              auVar45 = *(undefined1 (*) [32])(lVar36 + 0xc);
              lVar38 = lVar34 + 4 + uVar32 * 4;
              fVar58 = *(float *)(lVar38 + 0x10);
              fVar12 = *(float *)(lVar38 + 0x14);
              fVar13 = *(float *)(lVar38 + 0x18);
              fVar14 = *(float *)(lVar38 + 0x1c);
              fVar49 = auVar68._0_4_;
              fVar51 = auVar68._4_4_;
              fVar52 = auVar68._8_4_;
              fVar53 = auVar68._12_4_;
              pfVar39 = param_2 + uVar32;
              fVar60 = pfVar39[1];
              fVar63 = pfVar39[2];
              fVar65 = pfVar39[3];
              fVar67 = pfVar39[4];
              fVar10 = pfVar39[5];
              fVar11 = pfVar39[6];
              fVar44 = pfVar39[7];
              fVar54 = *(float *)(lVar36 + 0x28);
              fVar55 = *(float *)(lVar36 + 0x2c);
              fVar56 = *(float *)(lVar36 + 0x30);
              fVar57 = *(float *)(lVar36 + 0x34);
              fVar72 = *(float *)(lVar36 + 0x24);
              fVar71 = *(float *)(lVar36 + 0x20);
              fVar70 = *(float *)(lVar36 + 0x1c);
              pfVar3 = (float *)(lVar34 + -0x18 + uVar32 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              lVar38 = lVar34 + -8 + uVar32 * 4;
              fVar24 = *(float *)(lVar38 + 0x10);
              fVar25 = *(float *)(lVar38 + 0x14);
              fVar26 = *(float *)(lVar38 + 0x18);
              fVar27 = *(float *)(lVar38 + 0x1c);
              fVar59 = auVar50._0_4_;
              fVar62 = auVar50._4_4_;
              fVar64 = auVar50._8_4_;
              fVar66 = auVar50._12_4_;
              auVar61 = *(undefined1 (*) [16])(lVar36 + 0x2c);
              pfVar4 = param_2 + uVar32;
              *pfVar4 = fVar49 * (auVar45._0_4_ + *pfVar2) + *pfVar39 +
                        fVar59 * (*(float *)(lVar36 + 0x18) + *pfVar3);
              pfVar4[1] = fVar51 * (auVar45._4_4_ + fVar46) + fVar60 + fVar62 * (fVar70 + fVar21);
              pfVar4[2] = fVar52 * (auVar45._8_4_ + fVar47) + fVar63 + fVar64 * (fVar71 + fVar22);
              pfVar4[3] = fVar53 * (auVar45._12_4_ + fVar48) + fVar65 + fVar66 * (fVar72 + fVar23);
              pfVar4[4] = fVar49 * (auVar45._16_4_ + fVar58) + fVar67 + fVar59 * (fVar54 + fVar24);
              pfVar4[5] = fVar51 * (auVar45._20_4_ + fVar12) + fVar10 + fVar62 * (fVar55 + fVar25);
              pfVar4[6] = fVar52 * (auVar45._24_4_ + fVar13) + fVar11 + fVar64 * (fVar56 + fVar26);
              pfVar4[7] = fVar14 + fVar44 + fVar57 + fVar27;
              pfVar4 = (float *)(lVar34 + 0x14 + uVar32 * 4);
              auVar7 = *(undefined1 (*) [16])(lVar36 + 0x3c);
              lVar38 = lVar34 + 0x24 + uVar32 * 4;
              pfVar39 = (float *)(lVar36 + 0x38);
              auVar8 = *(undefined1 (*) [16])(lVar34 + 8 + uVar32 * 4);
              pfVar2 = param_2 + uVar32 + 8;
              pfVar3 = (float *)(lVar36 + 0x3c);
              pfVar15 = (float *)(lVar36 + 0x40);
              pfVar16 = (float *)(lVar36 + 0x44);
              pfVar17 = (float *)(lVar36 + 0x48);
              pfVar18 = (float *)(lVar36 + 0x4c);
              pfVar19 = (float *)(lVar36 + 0x50);
              pfVar20 = (float *)(lVar36 + 0x54);
              lVar36 = lVar36 + 0x40;
              auVar9 = *(undefined1 (*) [16])(lVar34 + 0x18 + uVar32 * 4);
              auVar69._0_4_ =
                   fVar49 * (auVar61._0_4_ + *pfVar4) + *pfVar2 + fVar59 * (*pfVar39 + auVar8._0_4_)
              ;
              auVar69._4_4_ =
                   fVar51 * (auVar61._4_4_ + pfVar4[1]) + pfVar2[1] +
                   fVar62 * (*pfVar3 + auVar8._4_4_);
              auVar69._8_4_ =
                   fVar52 * (auVar61._8_4_ + pfVar4[2]) + pfVar2[2] +
                   fVar64 * (*pfVar15 + auVar8._8_4_);
              auVar69._12_4_ =
                   fVar53 * (auVar61._12_4_ + pfVar4[3]) + pfVar2[3] +
                   fVar66 * (*pfVar16 + auVar8._12_4_);
              auVar69._16_4_ =
                   fVar49 * (auVar7._0_4_ + *(float *)(lVar38 + 0x10)) + pfVar2[4] +
                   fVar59 * (*pfVar17 + auVar9._0_4_);
              auVar69._20_4_ =
                   fVar51 * (auVar7._4_4_ + *(float *)(lVar38 + 0x14)) + pfVar2[5] +
                   fVar62 * (*pfVar18 + auVar9._4_4_);
              auVar69._24_4_ =
                   fVar52 * (auVar7._8_4_ + *(float *)(lVar38 + 0x18)) + pfVar2[6] +
                   fVar64 * (*pfVar19 + auVar9._8_4_);
              auVar69._28_4_ = *(float *)(lVar38 + 0x1c) + pfVar2[7] + *pfVar20 + auVar9._12_4_;
              *(undefined1 (*) [32])(param_2 + uVar32 + 8) = auVar69;
              uVar32 = uVar32 + 0x10;
            } while (uVar32 < uVar40);
            if (uVar40 + 1 <= uVar37) {
              uVar32 = uVar37 - uVar40;
              if ((longlong)uVar32 < 4) {
                uVar41 = 0;
              }
              else {
                uVar42 = 0;
                uVar41 = uVar32 & 0xfffffffffffffffc;
                pauVar35 = (undefined1 (*) [16])(param_2 + uVar40);
                lVar36 = lVar28 * -0xc + param_1 + uVar40 * 4;
                lVar38 = lVar33;
                uVar43 = uVar42;
                do {
                  pfVar39 = (float *)(lVar38 + 0xc + lVar36);
                  pfVar4 = (float *)(lVar38 + 0x18 + lVar36);
                  uVar42 = uVar42 + 4;
                  lVar1 = lVar34 + uVar40 * 4;
                  lVar38 = lVar38 + 0x10;
                  pfVar2 = (float *)((uVar43 - 0xc) + lVar1);
                  pfVar3 = (float *)((uVar43 - 0x18) + lVar1);
                  fVar60 = fVar59 * (*pfVar4 + *pfVar3);
                  fVar63 = fVar62 * (pfVar4[1] + pfVar3[1]);
                  fVar65 = fVar64 * (pfVar4[2] + pfVar3[2]);
                  fVar67 = fVar66 * (pfVar4[3] + pfVar3[3]);
                  in_ZMM5 = ZEXT1664(CONCAT412(fVar67,CONCAT48(fVar65,CONCAT44(fVar63,fVar60))));
                  uVar43 = uVar43 + 0x10;
                  auVar68._0_4_ = fVar49 * (*pfVar39 + *pfVar2) + *(float *)*pauVar35 + fVar60;
                  auVar68._4_4_ =
                       fVar51 * (pfVar39[1] + pfVar2[1]) + *(float *)((longlong)*pauVar35 + 4) +
                       fVar63;
                  auVar68._8_4_ =
                       fVar52 * (pfVar39[2] + pfVar2[2]) + *(float *)((longlong)*pauVar35 + 8) +
                       fVar65;
                  auVar68._12_4_ =
                       fVar53 * (pfVar39[3] + pfVar2[3]) + *(float *)((longlong)*pauVar35 + 0xc) +
                       fVar67;
                  *pauVar35 = auVar68;
                  pauVar35 = pauVar35 + 1;
                } while (uVar42 < uVar41);
              }
LAB_14082c1b7:
              if (uVar41 < uVar32) {
                lVar36 = lVar30 + uVar40 * 4;
                lVar38 = lVar34 + uVar40 * 4;
                do {
                  fVar60 = *(float *)(lVar36 + 0x18 + uVar41 * 4);
                  in_ZMM5 = ZEXT464((uint)fVar60);
                  param_2[uVar40 + uVar41] =
                       fVar5 * (*(float *)(lVar36 + 0xc + uVar41 * 4) +
                               *(float *)(lVar38 + -0xc + uVar41 * 4)) + param_2[uVar40 + uVar41] +
                       fVar6 * (fVar60 + *(float *)(lVar38 + -0x18 + uVar41 * 4));
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar32);
              }
            }
          }
        }
        uVar32 = uVar29 + 1;
        lVar30 = lVar30 + 0x18;
        lVar33 = lVar33 + 0x18;
        lVar34 = lVar34 + -0x18;
      } while (uVar32 < lVar28 - 1U >> 1);
      lVar34 = uVar29 + 2 + uVar32;
    }
    if (lVar28 != lVar34) {
      fVar5 = param_4[lVar34];
      lVar33 = lVar28 * -0xc;
      lStack_88 = param_1 + lVar33 + lVar34 * 0xc;
      if (0 < (longlong)uVar37) {
        if ((longlong)uVar37 < 0x10) {
LAB_14082c660:
          uVar31 = 0;
          if (uVar37 == 0) goto LAB_14082c4a5;
          uVar29 = 0;
          uVar32 = uVar37;
        }
        else {
          uVar32 = (ulonglong)param_2 & 0x1f;
          if (uVar32 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_14082c660;
            uVar32 = 0x20 - uVar32 >> 2;
          }
          if ((longlong)uVar37 < (longlong)(uVar32 + 0x10)) goto LAB_14082c660;
          uVar31 = uVar37 - (uVar37 - uVar32 & 0xf);
          lVar30 = param_1 + lVar28 * 0xc + lVar34 * -0xc;
          uVar29 = 0;
          if (uVar32 != 0) {
            do {
              param_2[uVar29] =
                   fVar5 * (*(float *)(lStack_88 + uVar29 * 4) + *(float *)(lVar30 + uVar29 * 4)) +
                   param_2[uVar29];
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar32);
          }
          auVar50 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
          lVar36 = lVar34 * -0xc + lVar28 * 0xc + param_1;
          lVar38 = lVar33 + lVar34 * 0xc + param_1;
          do {
            auVar68 = *(undefined1 (*) [16])(lStack_88 + uVar32 * 4);
            auVar61 = *(undefined1 (*) [16])(lVar30 + uVar32 * 4);
            auVar7 = *(undefined1 (*) [16])(lStack_88 + 0x10 + uVar32 * 4);
            auVar8 = *(undefined1 (*) [16])(lVar30 + 0x10 + uVar32 * 4);
            pfVar39 = (float *)(lVar38 + 0x20 + uVar32 * 4);
            fVar44 = *pfVar39;
            fVar46 = pfVar39[1];
            fVar47 = pfVar39[2];
            fVar48 = pfVar39[3];
            fVar54 = auVar50._0_4_;
            fVar55 = auVar50._4_4_;
            fVar56 = auVar50._8_4_;
            fVar57 = auVar50._12_4_;
            pfVar39 = param_2 + uVar32;
            fVar6 = pfVar39[1];
            fVar60 = pfVar39[2];
            fVar63 = pfVar39[3];
            fVar65 = pfVar39[4];
            fVar67 = pfVar39[5];
            fVar10 = pfVar39[6];
            fVar11 = pfVar39[7];
            pfVar4 = param_2 + uVar32;
            *pfVar4 = fVar54 * (auVar68._0_4_ + auVar61._0_4_) + *pfVar39;
            pfVar4[1] = fVar55 * (auVar68._4_4_ + auVar61._4_4_) + fVar6;
            pfVar4[2] = fVar56 * (auVar68._8_4_ + auVar61._8_4_) + fVar60;
            pfVar4[3] = fVar57 * (auVar68._12_4_ + auVar61._12_4_) + fVar63;
            pfVar4[4] = fVar54 * (auVar7._0_4_ + auVar8._0_4_) + fVar65;
            pfVar4[5] = fVar55 * (auVar7._4_4_ + auVar8._4_4_) + fVar67;
            pfVar4[6] = fVar56 * (auVar7._8_4_ + auVar8._8_4_) + fVar10;
            pfVar4[7] = fVar11 + 0.0;
            auVar68 = *(undefined1 (*) [16])(lVar36 + 0x20 + uVar32 * 4);
            lVar1 = lVar38 + 0x30 + uVar32 * 4;
            fVar58 = *(float *)(lVar1 + 0x10);
            fVar12 = *(float *)(lVar1 + 0x14);
            fVar13 = *(float *)(lVar1 + 0x18);
            fVar14 = *(float *)(lVar1 + 0x1c);
            auVar61 = *(undefined1 (*) [16])(lVar36 + 0x30 + uVar32 * 4);
            in_ZMM5 = ZEXT3264(CONCAT1616(auVar61,auVar68));
            pfVar39 = param_2 + uVar32 + 8;
            fVar6 = pfVar39[1];
            fVar60 = pfVar39[2];
            fVar63 = pfVar39[3];
            fVar65 = pfVar39[4];
            fVar67 = pfVar39[5];
            fVar10 = pfVar39[6];
            fVar11 = pfVar39[7];
            pfVar4 = param_2 + uVar32 + 8;
            *pfVar4 = fVar54 * (fVar44 + auVar68._0_4_) + *pfVar39;
            pfVar4[1] = fVar55 * (fVar46 + auVar68._4_4_) + fVar6;
            pfVar4[2] = fVar56 * (fVar47 + auVar68._8_4_) + fVar60;
            pfVar4[3] = fVar57 * (fVar48 + auVar68._12_4_) + fVar63;
            pfVar4[4] = fVar54 * (fVar58 + auVar61._0_4_) + fVar65;
            pfVar4[5] = fVar55 * (fVar12 + auVar61._4_4_) + fVar67;
            pfVar4[6] = fVar56 * (fVar13 + auVar61._8_4_) + fVar10;
            pfVar4[7] = fVar14 + auVar61._12_4_ + fVar11;
            uVar32 = uVar32 + 0x10;
          } while (uVar32 < uVar31);
          if (uVar37 < uVar31 + 1) goto LAB_14082c4a5;
          uVar32 = uVar37 - uVar31;
          if ((longlong)uVar32 < 4) {
            uVar29 = 0;
          }
          else {
            uVar40 = 0;
            uVar29 = uVar32 & 0xfffffffffffffffc;
            do {
              pfVar39 = (float *)(lVar38 + uVar31 * 4 + uVar40 * 4);
              pfVar4 = (float *)(lVar36 + uVar31 * 4 + uVar40 * 4);
              pfVar2 = param_2 + uVar31 + uVar40;
              auVar61._0_4_ = fVar54 * (*pfVar39 + *pfVar4) + *pfVar2;
              auVar61._4_4_ = fVar55 * (pfVar39[1] + pfVar4[1]) + pfVar2[1];
              auVar61._8_4_ = fVar56 * (pfVar39[2] + pfVar4[2]) + pfVar2[2];
              auVar61._12_4_ = fVar57 * (pfVar39[3] + pfVar4[3]) + pfVar2[3];
              in_ZMM5 = ZEXT1664(auVar61);
              *(undefined1 (*) [16])(param_2 + uVar31 + uVar40) = auVar61;
              uVar40 = uVar40 + 4;
            } while (uVar40 < uVar29);
          }
        }
        if (uVar29 < uVar32) {
          do {
            param_2[uVar31 + uVar29] =
                 fVar5 * (*(float *)(lVar33 + lVar34 * 0xc + param_1 + uVar31 * 4 + uVar29 * 4) +
                         *(float *)(param_1 + lVar34 * -0xc + lVar28 * 0xc + uVar31 * 4 + uVar29 * 4
                                   )) + param_2[uVar31 + uVar29];
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar32);
        }
      }
    }
  }
LAB_14082c4a5:
  fVar5 = param_4[lVar28];
  if ((longlong)uVar37 < 1) {
    return;
  }
  if ((longlong)uVar37 < 0x10) {
LAB_14082c64d:
    uVar31 = 0;
    if (uVar37 == 0) {
      return;
    }
  }
  else {
    uVar32 = (ulonglong)param_2 & 0x1f;
    if (uVar32 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_14082c64d;
      uVar32 = 0x20 - uVar32 >> 2;
    }
    if ((longlong)uVar37 < (longlong)(uVar32 + 0x10)) goto LAB_14082c64d;
    uVar29 = 0;
    uVar31 = uVar37 - (uVar37 - uVar32 & 0xf);
    if (uVar32 != 0) {
      do {
        param_2[uVar29] = fVar5 * *(float *)(lStack_88 + 0xc + uVar29 * 4) + param_2[uVar29];
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar32);
    }
    auVar50 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
    do {
      auVar68 = *(undefined1 (*) [16])(lStack_88 + 0xc + uVar32 * 4);
      auVar61 = *(undefined1 (*) [16])(lStack_88 + 0x1c + uVar32 * 4);
      fVar44 = auVar50._0_4_;
      fVar46 = auVar50._4_4_;
      fVar47 = auVar50._8_4_;
      fVar48 = auVar50._12_4_;
      auVar7 = *(undefined1 (*) [16])(lStack_88 + 0x2c + uVar32 * 4);
      pfVar39 = param_2 + uVar32;
      fVar6 = pfVar39[1];
      fVar60 = pfVar39[2];
      fVar63 = pfVar39[3];
      fVar65 = pfVar39[4];
      fVar67 = pfVar39[5];
      fVar10 = pfVar39[6];
      fVar58 = in_ZMM5._28_4_ + pfVar39[7];
      pfVar4 = param_2 + uVar32;
      *pfVar4 = fVar44 * auVar68._0_4_ + *pfVar39;
      pfVar4[1] = fVar46 * auVar68._4_4_ + fVar6;
      pfVar4[2] = fVar47 * auVar68._8_4_ + fVar60;
      pfVar4[3] = fVar48 * auVar68._12_4_ + fVar63;
      pfVar4[4] = fVar44 * auVar61._0_4_ + fVar65;
      pfVar4[5] = fVar46 * auVar61._4_4_ + fVar67;
      pfVar4[6] = fVar47 * auVar61._8_4_ + fVar10;
      pfVar4[7] = fVar58;
      auVar68 = *(undefined1 (*) [16])(lStack_88 + 0x3c + uVar32 * 4);
      in_ZMM5 = ZEXT3264(CONCAT1616(auVar68,auVar7));
      pfVar39 = param_2 + uVar32 + 8;
      fVar6 = pfVar39[1];
      fVar60 = pfVar39[2];
      fVar63 = pfVar39[3];
      fVar65 = pfVar39[4];
      fVar67 = pfVar39[5];
      fVar10 = pfVar39[6];
      fVar11 = pfVar39[7];
      pfVar4 = param_2 + uVar32 + 8;
      *pfVar4 = fVar44 * auVar7._0_4_ + *pfVar39;
      pfVar4[1] = fVar46 * auVar7._4_4_ + fVar6;
      pfVar4[2] = fVar47 * auVar7._8_4_ + fVar60;
      pfVar4[3] = fVar48 * auVar7._12_4_ + fVar63;
      pfVar4[4] = fVar44 * auVar68._0_4_ + fVar65;
      pfVar4[5] = fVar46 * auVar68._4_4_ + fVar67;
      pfVar4[6] = fVar47 * auVar68._8_4_ + fVar10;
      pfVar4[7] = fVar58 + fVar11;
      uVar32 = uVar32 + 0x10;
    } while (uVar32 < uVar31);
    if (uVar37 < uVar31 + 1) {
      return;
    }
    uVar37 = uVar37 - uVar31;
    if (3 < (longlong)uVar37) {
      uVar32 = uVar37 & 0xfffffffffffffffc;
      uVar29 = 0;
      do {
        pfVar2 = (float *)(lStack_88 + uVar31 * 4 + 0xc + uVar29 * 4);
        fVar6 = pfVar2[1];
        fVar60 = pfVar2[2];
        fVar63 = pfVar2[3];
        pfVar39 = param_2 + uVar31 + uVar29;
        fVar65 = pfVar39[1];
        fVar67 = pfVar39[2];
        fVar10 = pfVar39[3];
        pfVar4 = param_2 + uVar31 + uVar29;
        *pfVar4 = fVar44 * *pfVar2 + *pfVar39;
        pfVar4[1] = fVar46 * fVar6 + fVar65;
        pfVar4[2] = fVar47 * fVar60 + fVar67;
        pfVar4[3] = fVar48 * fVar63 + fVar10;
        uVar29 = uVar29 + 4;
      } while (uVar29 < uVar32);
      goto LAB_14082c5f9;
    }
  }
  uVar32 = 0;
LAB_14082c5f9:
  if (uVar32 < uVar37) {
    do {
      param_2[uVar31 + uVar32] =
           fVar5 * *(float *)(lStack_88 + uVar31 * 4 + 0xc + uVar32 * 4) + param_2[uVar31 + uVar32];
      uVar32 = uVar32 + 1;
    } while (uVar32 < uVar37);
  }
  return;
}

