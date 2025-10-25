
void FUN_1406a0680(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  float *pfVar39;
  ulonglong uVar40;
  longlong lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  longlong lStack_70;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined2 uVar67;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  
  lVar35 = (longlong)(param_5 >> 1);
  lStack_70 = lVar35 * -6 + param_1;
  uVar37 = param_3 * 3;
  fVar6 = *param_4;
  if (0 < (longlong)uVar37) {
    if ((longlong)uVar37 < 8) {
LAB_1406a0fa4:
      uVar26 = 0;
    }
    else {
      uVar32 = param_2 & 0xf;
      if (uVar32 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1406a0fa4;
        uVar32 = 0x10 - uVar32 >> 2;
      }
      if ((longlong)uVar37 < (longlong)(uVar32 + 8)) goto LAB_1406a0fa4;
      lVar31 = lVar35 * -6 + param_1;
      uVar26 = uVar37 - (uVar37 - uVar32 & 7);
      lVar28 = lVar35 * 6 + param_1;
      uVar34 = 0;
      if (uVar32 != 0) {
        do {
          *(float *)(param_2 + uVar34 * 4) =
               (float)((int)*(short *)(lVar31 + uVar34 * 2) + (int)*(short *)(lVar28 + uVar34 * 2))
               * fVar6;
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar32);
      }
      lVar29 = uVar32 * 2;
      do {
        uVar34 = *(ulonglong *)(lVar29 + lVar31);
        uVar40 = *(ulonglong *)(lVar29 + lVar28);
        uVar67 = (undefined2)(uVar34 >> 0x30);
        auVar70._8_4_ = 0;
        auVar70._0_8_ = uVar34;
        auVar70._12_2_ = uVar67;
        auVar70._14_2_ = uVar67;
        uVar67 = (undefined2)(uVar34 >> 0x20);
        auVar69._12_4_ = auVar70._12_4_;
        auVar69._8_2_ = 0;
        auVar69._0_8_ = uVar34;
        auVar69._10_2_ = uVar67;
        auVar68._10_6_ = auVar69._10_6_;
        auVar68._8_2_ = uVar67;
        auVar68._0_8_ = uVar34;
        uVar67 = (undefined2)(uVar34 >> 0x10);
        auVar9._4_8_ = auVar68._8_8_;
        auVar9._2_2_ = uVar67;
        auVar9._0_2_ = uVar67;
        uVar67 = (undefined2)(uVar40 >> 0x30);
        auVar48._8_4_ = 0;
        auVar48._0_8_ = uVar40;
        auVar48._12_2_ = uVar67;
        auVar48._14_2_ = uVar67;
        uVar67 = (undefined2)(uVar40 >> 0x20);
        auVar47._12_4_ = auVar48._12_4_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar40;
        auVar47._10_2_ = uVar67;
        auVar46._10_6_ = auVar47._10_6_;
        auVar46._8_2_ = uVar67;
        auVar46._0_8_ = uVar40;
        uVar67 = (undefined2)(uVar40 >> 0x10);
        auVar10._4_8_ = auVar46._8_8_;
        auVar10._2_2_ = uVar67;
        auVar10._0_2_ = uVar67;
        pfVar39 = (float *)(param_2 + uVar32 * 4);
        *pfVar39 = (float)((int)(short)uVar34 + (int)(short)uVar40) * fVar6;
        pfVar39[1] = (float)((auVar9._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * fVar6;
        pfVar39[2] = (float)((auVar68._8_4_ >> 0x10) + (auVar46._8_4_ >> 0x10)) * fVar6;
        pfVar39[3] = (float)((auVar69._12_4_ >> 0x10) + (auVar47._12_4_ >> 0x10)) * fVar6;
        uVar34 = *(ulonglong *)(lVar29 + 8 + lVar31);
        uVar40 = *(ulonglong *)(lVar29 + 8 + lVar28);
        lVar29 = lVar29 + 0x10;
        uVar67 = (undefined2)(uVar34 >> 0x30);
        auVar51._8_4_ = 0;
        auVar51._0_8_ = uVar34;
        auVar51._12_2_ = uVar67;
        auVar51._14_2_ = uVar67;
        uVar67 = (undefined2)(uVar34 >> 0x20);
        auVar50._12_4_ = auVar51._12_4_;
        auVar50._8_2_ = 0;
        auVar50._0_8_ = uVar34;
        auVar50._10_2_ = uVar67;
        auVar49._10_6_ = auVar50._10_6_;
        auVar49._8_2_ = uVar67;
        auVar49._0_8_ = uVar34;
        uVar67 = (undefined2)(uVar34 >> 0x10);
        auVar11._4_8_ = auVar49._8_8_;
        auVar11._2_2_ = uVar67;
        auVar11._0_2_ = uVar67;
        uVar67 = (undefined2)(uVar40 >> 0x30);
        auVar82._8_4_ = 0;
        auVar82._0_8_ = uVar40;
        auVar82._12_2_ = uVar67;
        auVar82._14_2_ = uVar67;
        uVar67 = (undefined2)(uVar40 >> 0x20);
        auVar81._12_4_ = auVar82._12_4_;
        auVar81._8_2_ = 0;
        auVar81._0_8_ = uVar40;
        auVar81._10_2_ = uVar67;
        auVar80._10_6_ = auVar81._10_6_;
        auVar80._8_2_ = uVar67;
        auVar80._0_8_ = uVar40;
        uVar67 = (undefined2)(uVar40 >> 0x10);
        auVar12._4_8_ = auVar80._8_8_;
        auVar12._2_2_ = uVar67;
        auVar12._0_2_ = uVar67;
        pfVar39 = (float *)(param_2 + 0x10 + uVar32 * 4);
        *pfVar39 = (float)((int)(short)uVar34 + (int)(short)uVar40) * fVar6;
        pfVar39[1] = (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar6;
        pfVar39[2] = (float)((auVar49._8_4_ >> 0x10) + (auVar80._8_4_ >> 0x10)) * fVar6;
        pfVar39[3] = (float)((auVar50._12_4_ >> 0x10) + (auVar81._12_4_ >> 0x10)) * fVar6;
        uVar32 = uVar32 + 8;
      } while (uVar32 < uVar26);
    }
    uVar32 = 0;
    if (uVar26 + 1 <= uVar37) {
      do {
        *(float *)(uVar26 * 4 + param_2 + uVar32 * 4) =
             (float)((int)*(short *)(lVar35 * -6 + param_1 + uVar26 * 2 + uVar32 * 2) +
                    (int)*(short *)(lVar35 * 6 + param_1 + uVar26 * 2 + uVar32 * 2)) * fVar6;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar37 - uVar26);
    }
  }
  if (1 < lVar35) {
    lVar28 = 1;
    uVar32 = 0;
    if (lVar35 - 1U >> 1 != 0) {
      uVar26 = param_2 & 0xf;
      lVar31 = lVar35 * -6 + param_1;
      lVar28 = lVar35 * 6 + param_1;
      do {
        fVar6 = param_4[uVar32 * 2 + 1];
        lStack_70 = lVar31 + 0xc;
        fVar7 = param_4[uVar32 * 2 + 2];
        if (0 < (longlong)uVar37) {
          if (((longlong)uVar37 < 4) ||
             (((uVar34 = uVar26, uVar26 != 0 && (uVar34 = 0x10 - uVar26 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar37 < (longlong)(uVar34 + 4))))) {
            uVar40 = 0;
          }
          else {
            uVar38 = 0;
            uVar40 = uVar37 - (uVar37 - uVar34 & 3);
            lVar29 = lVar28;
            lVar36 = lVar31;
            if (uVar34 != 0) {
              do {
                *(float *)(param_2 + uVar38 * 4) =
                     (float)((int)*(short *)(lVar36 + 6) + (int)*(short *)(lVar29 + -6)) * fVar6 +
                     *(float *)(param_2 + uVar38 * 4) +
                     (float)((int)*(short *)(lVar36 + 0xc) + (int)*(short *)(lVar29 + -0xc)) * fVar7
                ;
                uVar38 = uVar38 + 1;
                lVar29 = lVar29 + 2;
                lVar36 = lVar36 + 2;
              } while (uVar38 < uVar34);
            }
            lVar29 = uVar34 * 2;
            do {
              uVar38 = *(ulonglong *)(lVar29 + 6 + lVar31);
              uVar8 = *(ulonglong *)(lVar29 + -6 + lVar28);
              uVar67 = (undefined2)(uVar38 >> 0x30);
              auVar94._8_4_ = 0;
              auVar94._0_8_ = uVar38;
              auVar94._12_2_ = uVar67;
              auVar94._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar38 >> 0x20);
              auVar93._12_4_ = auVar94._12_4_;
              auVar93._8_2_ = 0;
              auVar93._0_8_ = uVar38;
              auVar93._10_2_ = uVar67;
              auVar92._10_6_ = auVar93._10_6_;
              auVar92._8_2_ = uVar67;
              auVar92._0_8_ = uVar38;
              uVar67 = (undefined2)(uVar38 >> 0x10);
              auVar13._4_8_ = auVar92._8_8_;
              auVar13._2_2_ = uVar67;
              auVar13._0_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x30);
              auVar85._8_4_ = 0;
              auVar85._0_8_ = uVar8;
              auVar85._12_2_ = uVar67;
              auVar85._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x20);
              auVar84._12_4_ = auVar85._12_4_;
              auVar84._8_2_ = 0;
              auVar84._0_8_ = uVar8;
              auVar84._10_2_ = uVar67;
              auVar83._10_6_ = auVar84._10_6_;
              auVar83._8_2_ = uVar67;
              auVar83._0_8_ = uVar8;
              uVar67 = (undefined2)(uVar8 >> 0x10);
              auVar14._4_8_ = auVar83._8_8_;
              auVar14._2_2_ = uVar67;
              auVar14._0_2_ = uVar67;
              pfVar39 = (float *)(param_2 + uVar34 * 4);
              fVar42 = (float)((int)(short)uVar38 + (int)(short)uVar8) * fVar6 + *pfVar39;
              fVar43 = (float)((auVar13._0_4_ >> 0x10) + (auVar14._0_4_ >> 0x10)) * fVar6 +
                       pfVar39[1];
              fVar44 = (float)((auVar92._8_4_ >> 0x10) + (auVar83._8_4_ >> 0x10)) * fVar6 +
                       pfVar39[2];
              fVar45 = (float)((auVar93._12_4_ >> 0x10) + (auVar84._12_4_ >> 0x10)) * fVar6 +
                       pfVar39[3];
              pfVar39 = (float *)(param_2 + uVar34 * 4);
              *pfVar39 = fVar42;
              pfVar39[1] = fVar43;
              pfVar39[2] = fVar44;
              pfVar39[3] = fVar45;
              uVar38 = *(ulonglong *)(lVar29 + 0xc + lVar31);
              uVar8 = *(ulonglong *)(lVar29 + -0xc + lVar28);
              lVar29 = lVar29 + 8;
              uVar67 = (undefined2)(uVar38 >> 0x30);
              auVar97._8_4_ = 0;
              auVar97._0_8_ = uVar38;
              auVar97._12_2_ = uVar67;
              auVar97._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar38 >> 0x20);
              auVar96._12_4_ = auVar97._12_4_;
              auVar96._8_2_ = 0;
              auVar96._0_8_ = uVar38;
              auVar96._10_2_ = uVar67;
              auVar95._10_6_ = auVar96._10_6_;
              auVar95._8_2_ = uVar67;
              auVar95._0_8_ = uVar38;
              uVar67 = (undefined2)(uVar38 >> 0x10);
              auVar15._4_8_ = auVar95._8_8_;
              auVar15._2_2_ = uVar67;
              auVar15._0_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x30);
              auVar88._8_4_ = 0;
              auVar88._0_8_ = uVar8;
              auVar88._12_2_ = uVar67;
              auVar88._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x20);
              auVar87._12_4_ = auVar88._12_4_;
              auVar87._8_2_ = 0;
              auVar87._0_8_ = uVar8;
              auVar87._10_2_ = uVar67;
              auVar86._10_6_ = auVar87._10_6_;
              auVar86._8_2_ = uVar67;
              auVar86._0_8_ = uVar8;
              uVar67 = (undefined2)(uVar8 >> 0x10);
              auVar16._4_8_ = auVar86._8_8_;
              auVar16._2_2_ = uVar67;
              auVar16._0_2_ = uVar67;
              pfVar39 = (float *)(param_2 + uVar34 * 4);
              *pfVar39 = fVar42 + (float)((int)(short)uVar38 + (int)(short)uVar8) * fVar7;
              pfVar39[1] = fVar43 + (float)((auVar15._0_4_ >> 0x10) + (auVar16._0_4_ >> 0x10)) *
                                    fVar7;
              pfVar39[2] = fVar44 + (float)((auVar95._8_4_ >> 0x10) + (auVar86._8_4_ >> 0x10)) *
                                    fVar7;
              pfVar39[3] = fVar45 + (float)((auVar96._12_4_ >> 0x10) + (auVar87._12_4_ >> 0x10)) *
                                    fVar7;
              uVar34 = uVar34 + 4;
            } while (uVar34 < uVar40);
          }
          lVar29 = lVar31 + uVar40 * 2;
          if (uVar40 < uVar37) {
            lVar36 = uVar40 * 2 + lVar28;
            do {
              psVar1 = (short *)(lVar29 + 6);
              psVar2 = (short *)(lVar36 + -6);
              psVar3 = (short *)(lVar36 + -0xc);
              lVar36 = lVar36 + 2;
              psVar4 = (short *)(lVar29 + 0xc);
              lVar29 = lVar29 + 2;
              *(float *)(param_2 + uVar40 * 4) =
                   (float)((int)*psVar1 + (int)*psVar2) * fVar6 + *(float *)(param_2 + uVar40 * 4) +
                   (float)((int)*psVar4 + (int)*psVar3) * fVar7;
              uVar40 = uVar40 + 1;
            } while (uVar40 < uVar37);
          }
        }
        uVar32 = uVar32 + 1;
        lVar28 = lVar28 + -0xc;
        lVar31 = lVar31 + 0xc;
      } while (uVar32 < lVar35 - 1U >> 1);
      lVar28 = uVar32 * 2 + 1;
    }
    if (lVar35 != lVar28) {
      lVar29 = lVar35 * -6;
      lVar31 = lVar28 * 6;
      lStack_70 = lVar31 + param_1 + lVar29;
      fVar6 = param_4[lVar28];
      if (0 < (longlong)uVar37) {
        if ((longlong)uVar37 < 8) {
LAB_1406a0f86:
          uVar26 = 0;
          if (uVar37 == 0) goto LAB_1406a0d8a;
          uVar34 = 0;
          uVar32 = uVar37;
        }
        else {
          uVar32 = param_2 & 0xf;
          if (uVar32 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1406a0f86;
            uVar32 = 0x10 - uVar32 >> 2;
          }
          if ((longlong)uVar37 < (longlong)(uVar32 + 8)) goto LAB_1406a0f86;
          uVar26 = uVar37 - (uVar37 - uVar32 & 7);
          lVar36 = param_1 + lVar29 + lVar31;
          lVar33 = param_1 + lVar35 * 6 + lVar28 * -6;
          uVar34 = 0;
          if (uVar32 != 0) {
            do {
              *(float *)(param_2 + uVar34 * 4) =
                   (float)((int)*(short *)(lVar36 + uVar34 * 2) +
                          (int)*(short *)(lVar33 + uVar34 * 2)) * fVar6 +
                   *(float *)(param_2 + uVar34 * 4);
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar32);
          }
          lVar41 = uVar32 * 2;
          lVar27 = lVar29 + lVar31 + param_1;
          lVar30 = lVar35 * 6 + lVar28 * -6 + param_1;
          do {
            uVar34 = *(ulonglong *)(lVar41 + lVar36);
            uVar40 = *(ulonglong *)(lVar41 + lVar33);
            uVar67 = (undefined2)(uVar34 >> 0x30);
            auVar73._8_4_ = 0;
            auVar73._0_8_ = uVar34;
            auVar73._12_2_ = uVar67;
            auVar73._14_2_ = uVar67;
            uVar67 = (undefined2)(uVar34 >> 0x20);
            auVar72._12_4_ = auVar73._12_4_;
            auVar72._8_2_ = 0;
            auVar72._0_8_ = uVar34;
            auVar72._10_2_ = uVar67;
            auVar71._10_6_ = auVar72._10_6_;
            auVar71._8_2_ = uVar67;
            auVar71._0_8_ = uVar34;
            uVar67 = (undefined2)(uVar34 >> 0x10);
            auVar17._4_8_ = auVar71._8_8_;
            auVar17._2_2_ = uVar67;
            auVar17._0_2_ = uVar67;
            uVar67 = (undefined2)(uVar40 >> 0x30);
            auVar54._8_4_ = 0;
            auVar54._0_8_ = uVar40;
            auVar54._12_2_ = uVar67;
            auVar54._14_2_ = uVar67;
            uVar67 = (undefined2)(uVar40 >> 0x20);
            auVar53._12_4_ = auVar54._12_4_;
            auVar53._8_2_ = 0;
            auVar53._0_8_ = uVar40;
            auVar53._10_2_ = uVar67;
            auVar52._10_6_ = auVar53._10_6_;
            auVar52._8_2_ = uVar67;
            auVar52._0_8_ = uVar40;
            uVar67 = (undefined2)(uVar40 >> 0x10);
            auVar18._4_8_ = auVar52._8_8_;
            auVar18._2_2_ = uVar67;
            auVar18._0_2_ = uVar67;
            pfVar39 = (float *)(param_2 + uVar32 * 4);
            fVar7 = pfVar39[1];
            fVar42 = pfVar39[2];
            fVar43 = pfVar39[3];
            pfVar5 = (float *)(param_2 + uVar32 * 4);
            *pfVar5 = (float)((int)(short)uVar34 + (int)(short)uVar40) * fVar6 + *pfVar39;
            pfVar5[1] = (float)((auVar17._0_4_ >> 0x10) + (auVar18._0_4_ >> 0x10)) * fVar6 + fVar7;
            pfVar5[2] = (float)((auVar71._8_4_ >> 0x10) + (auVar52._8_4_ >> 0x10)) * fVar6 + fVar42;
            pfVar5[3] = (float)((auVar72._12_4_ >> 0x10) + (auVar53._12_4_ >> 0x10)) * fVar6 +
                        fVar43;
            uVar34 = *(ulonglong *)(lVar41 + 8 + lVar27);
            uVar40 = *(ulonglong *)(lVar41 + 8 + lVar30);
            lVar41 = lVar41 + 0x10;
            uVar67 = (undefined2)(uVar34 >> 0x30);
            auVar57._8_4_ = 0;
            auVar57._0_8_ = uVar34;
            auVar57._12_2_ = uVar67;
            auVar57._14_2_ = uVar67;
            uVar67 = (undefined2)(uVar34 >> 0x20);
            auVar56._12_4_ = auVar57._12_4_;
            auVar56._8_2_ = 0;
            auVar56._0_8_ = uVar34;
            auVar56._10_2_ = uVar67;
            auVar55._10_6_ = auVar56._10_6_;
            auVar55._8_2_ = uVar67;
            auVar55._0_8_ = uVar34;
            uVar67 = (undefined2)(uVar34 >> 0x10);
            auVar19._4_8_ = auVar55._8_8_;
            auVar19._2_2_ = uVar67;
            auVar19._0_2_ = uVar67;
            uVar67 = (undefined2)(uVar40 >> 0x30);
            auVar91._8_4_ = 0;
            auVar91._0_8_ = uVar40;
            auVar91._12_2_ = uVar67;
            auVar91._14_2_ = uVar67;
            uVar67 = (undefined2)(uVar40 >> 0x20);
            auVar90._12_4_ = auVar91._12_4_;
            auVar90._8_2_ = 0;
            auVar90._0_8_ = uVar40;
            auVar90._10_2_ = uVar67;
            auVar89._10_6_ = auVar90._10_6_;
            auVar89._8_2_ = uVar67;
            auVar89._0_8_ = uVar40;
            uVar67 = (undefined2)(uVar40 >> 0x10);
            auVar20._4_8_ = auVar89._8_8_;
            auVar20._2_2_ = uVar67;
            auVar20._0_2_ = uVar67;
            pfVar39 = (float *)(param_2 + 0x10 + uVar32 * 4);
            fVar7 = pfVar39[1];
            fVar42 = pfVar39[2];
            fVar43 = pfVar39[3];
            pfVar5 = (float *)(param_2 + 0x10 + uVar32 * 4);
            *pfVar5 = (float)((int)(short)uVar34 + (int)(short)uVar40) * fVar6 + *pfVar39;
            pfVar5[1] = (float)((auVar19._0_4_ >> 0x10) + (auVar20._0_4_ >> 0x10)) * fVar6 + fVar7;
            pfVar5[2] = (float)((auVar55._8_4_ >> 0x10) + (auVar89._8_4_ >> 0x10)) * fVar6 + fVar42;
            pfVar5[3] = (float)((auVar56._12_4_ >> 0x10) + (auVar90._12_4_ >> 0x10)) * fVar6 +
                        fVar43;
            uVar32 = uVar32 + 8;
          } while (uVar32 < uVar26);
          if (uVar37 < uVar26 + 1) goto LAB_1406a0d8a;
          uVar32 = uVar37 - uVar26;
          if ((longlong)uVar32 < 4) {
            uVar34 = 0;
          }
          else {
            uVar40 = 0;
            uVar34 = uVar32 & 0xfffffffffffffffc;
            pfVar39 = (float *)(uVar26 * 4 + param_2);
            lVar36 = 0;
            do {
              uVar38 = *(ulonglong *)(lVar36 + lVar27 + uVar26 * 2);
              uVar40 = uVar40 + 4;
              uVar8 = *(ulonglong *)(lVar36 + lVar30 + uVar26 * 2);
              lVar36 = lVar36 + 8;
              uVar67 = (undefined2)(uVar38 >> 0x30);
              auVar76._8_4_ = 0;
              auVar76._0_8_ = uVar38;
              auVar76._12_2_ = uVar67;
              auVar76._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar38 >> 0x20);
              auVar75._12_4_ = auVar76._12_4_;
              auVar75._8_2_ = 0;
              auVar75._0_8_ = uVar38;
              auVar75._10_2_ = uVar67;
              auVar74._10_6_ = auVar75._10_6_;
              auVar74._8_2_ = uVar67;
              auVar74._0_8_ = uVar38;
              uVar67 = (undefined2)(uVar38 >> 0x10);
              auVar21._4_8_ = auVar74._8_8_;
              auVar21._2_2_ = uVar67;
              auVar21._0_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x30);
              auVar60._8_4_ = 0;
              auVar60._0_8_ = uVar8;
              auVar60._12_2_ = uVar67;
              auVar60._14_2_ = uVar67;
              uVar67 = (undefined2)(uVar8 >> 0x20);
              auVar59._12_4_ = auVar60._12_4_;
              auVar59._8_2_ = 0;
              auVar59._0_8_ = uVar8;
              auVar59._10_2_ = uVar67;
              auVar58._10_6_ = auVar59._10_6_;
              auVar58._8_2_ = uVar67;
              auVar58._0_8_ = uVar8;
              uVar67 = (undefined2)(uVar8 >> 0x10);
              auVar22._4_8_ = auVar58._8_8_;
              auVar22._2_2_ = uVar67;
              auVar22._0_2_ = uVar67;
              *pfVar39 = (float)((int)(short)uVar38 + (int)(short)uVar8) * fVar6 + *pfVar39;
              pfVar39[1] = (float)((auVar21._0_4_ >> 0x10) + (auVar22._0_4_ >> 0x10)) * fVar6 +
                           pfVar39[1];
              pfVar39[2] = (float)((auVar74._8_4_ >> 0x10) + (auVar58._8_4_ >> 0x10)) * fVar6 +
                           pfVar39[2];
              pfVar39[3] = (float)((auVar75._12_4_ >> 0x10) + (auVar59._12_4_ >> 0x10)) * fVar6 +
                           pfVar39[3];
              pfVar39 = pfVar39 + 4;
            } while (uVar40 < uVar34);
          }
        }
        if (uVar34 < uVar32) {
          pfVar39 = (float *)(uVar34 * 4 + uVar26 * 4 + param_2);
          do {
            lVar36 = uVar34 * 2;
            lVar33 = uVar34 * 2;
            uVar34 = uVar34 + 1;
            *pfVar39 = (float)((int)*(short *)(lVar29 + lVar31 + param_1 + uVar26 * 2 + lVar36) +
                              (int)*(short *)(param_1 + lVar35 * 6 + lVar28 * -6 + uVar26 * 2 +
                                             lVar33)) * fVar6 + *pfVar39;
            pfVar39 = pfVar39 + 1;
          } while (uVar34 < uVar32);
        }
      }
    }
  }
LAB_1406a0d8a:
  fVar6 = param_4[lVar35];
  if ((longlong)uVar37 < 1) {
    return;
  }
  if ((longlong)uVar37 < 8) {
LAB_1406a0f73:
    uVar26 = 0;
    if (uVar37 == 0) {
      return;
    }
  }
  else {
    uVar32 = param_2 & 0xf;
    if (uVar32 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406a0f73;
      uVar32 = 0x10 - uVar32 >> 2;
    }
    if ((longlong)uVar37 < (longlong)(uVar32 + 8)) goto LAB_1406a0f73;
    uVar34 = 0;
    uVar26 = uVar37 - (uVar37 - uVar32 & 7);
    if (uVar32 != 0) {
      do {
        *(float *)(param_2 + uVar34 * 4) =
             (float)(int)*(short *)(lStack_70 + 6 + uVar34 * 2) * fVar6 +
             *(float *)(param_2 + uVar34 * 4);
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar32);
    }
    lVar35 = uVar32 * 2;
    do {
      uVar34 = *(ulonglong *)(lVar35 + 6 + lStack_70);
      uVar67 = (undefined2)(uVar34 >> 0x30);
      auVar63._8_4_ = 0;
      auVar63._0_8_ = uVar34;
      auVar63._12_2_ = uVar67;
      auVar63._14_2_ = uVar67;
      uVar67 = (undefined2)(uVar34 >> 0x20);
      auVar62._12_4_ = auVar63._12_4_;
      auVar62._8_2_ = 0;
      auVar62._0_8_ = uVar34;
      auVar62._10_2_ = uVar67;
      auVar61._10_6_ = auVar62._10_6_;
      auVar61._8_2_ = uVar67;
      auVar61._0_8_ = uVar34;
      uVar67 = (undefined2)(uVar34 >> 0x10);
      auVar23._4_8_ = auVar61._8_8_;
      auVar23._2_2_ = uVar67;
      auVar23._0_2_ = uVar67;
      pfVar39 = (float *)(param_2 + uVar32 * 4);
      fVar7 = pfVar39[1];
      fVar42 = pfVar39[2];
      fVar43 = pfVar39[3];
      pfVar5 = (float *)(param_2 + uVar32 * 4);
      *pfVar5 = (float)(int)(short)uVar34 * fVar6 + *pfVar39;
      pfVar5[1] = (float)(auVar23._0_4_ >> 0x10) * fVar6 + fVar7;
      pfVar5[2] = (float)(auVar61._8_4_ >> 0x10) * fVar6 + fVar42;
      pfVar5[3] = (float)(auVar62._12_4_ >> 0x10) * fVar6 + fVar43;
      uVar34 = *(ulonglong *)(lVar35 + 0xe + lStack_70);
      lVar35 = lVar35 + 0x10;
      uVar67 = (undefined2)(uVar34 >> 0x30);
      auVar79._8_4_ = 0;
      auVar79._0_8_ = uVar34;
      auVar79._12_2_ = uVar67;
      auVar79._14_2_ = uVar67;
      uVar67 = (undefined2)(uVar34 >> 0x20);
      auVar78._12_4_ = auVar79._12_4_;
      auVar78._8_2_ = 0;
      auVar78._0_8_ = uVar34;
      auVar78._10_2_ = uVar67;
      auVar77._10_6_ = auVar78._10_6_;
      auVar77._8_2_ = uVar67;
      auVar77._0_8_ = uVar34;
      uVar67 = (undefined2)(uVar34 >> 0x10);
      auVar24._4_8_ = auVar77._8_8_;
      auVar24._2_2_ = uVar67;
      auVar24._0_2_ = uVar67;
      pfVar39 = (float *)(param_2 + 0x10 + uVar32 * 4);
      fVar7 = pfVar39[1];
      fVar42 = pfVar39[2];
      fVar43 = pfVar39[3];
      pfVar5 = (float *)(param_2 + 0x10 + uVar32 * 4);
      *pfVar5 = (float)(int)(short)uVar34 * fVar6 + *pfVar39;
      pfVar5[1] = (float)(auVar24._0_4_ >> 0x10) * fVar6 + fVar7;
      pfVar5[2] = (float)(auVar77._8_4_ >> 0x10) * fVar6 + fVar42;
      pfVar5[3] = (float)(auVar78._12_4_ >> 0x10) * fVar6 + fVar43;
      uVar32 = uVar32 + 8;
    } while (uVar32 < uVar26);
    if (uVar37 < uVar26 + 1) {
      return;
    }
    uVar37 = uVar37 - uVar26;
    if (3 < (longlong)uVar37) {
      uVar34 = 0;
      uVar32 = uVar37 & 0xfffffffffffffffc;
      pfVar39 = (float *)(uVar26 * 4 + param_2);
      lVar35 = 0;
      do {
        uVar40 = *(ulonglong *)(lVar35 + 6 + lStack_70 + uVar26 * 2);
        uVar34 = uVar34 + 4;
        uVar67 = (undefined2)(uVar40 >> 0x30);
        auVar66._8_4_ = 0;
        auVar66._0_8_ = uVar40;
        auVar66._12_2_ = uVar67;
        auVar66._14_2_ = uVar67;
        uVar67 = (undefined2)(uVar40 >> 0x20);
        auVar65._12_4_ = auVar66._12_4_;
        auVar65._8_2_ = 0;
        auVar65._0_8_ = uVar40;
        auVar65._10_2_ = uVar67;
        auVar64._10_6_ = auVar65._10_6_;
        auVar64._8_2_ = uVar67;
        auVar64._0_8_ = uVar40;
        uVar67 = (undefined2)(uVar40 >> 0x10);
        auVar25._4_8_ = auVar64._8_8_;
        auVar25._2_2_ = uVar67;
        auVar25._0_2_ = uVar67;
        lVar35 = lVar35 + 8;
        *pfVar39 = (float)(int)(short)uVar40 * fVar6 + *pfVar39;
        pfVar39[1] = (float)(auVar25._0_4_ >> 0x10) * fVar6 + pfVar39[1];
        pfVar39[2] = (float)(auVar64._8_4_ >> 0x10) * fVar6 + pfVar39[2];
        pfVar39[3] = (float)(auVar65._12_4_ >> 0x10) * fVar6 + pfVar39[3];
        pfVar39 = pfVar39 + 4;
      } while (uVar34 < uVar32);
      goto LAB_1406a0f0e;
    }
  }
  uVar32 = 0;
LAB_1406a0f0e:
  if (uVar32 < uVar37) {
    pfVar39 = (float *)(uVar32 * 4 + param_2 + uVar26 * 4);
    do {
      lVar35 = uVar32 * 2;
      uVar32 = uVar32 + 1;
      *pfVar39 = (float)(int)*(short *)(lStack_70 + uVar26 * 2 + 6 + lVar35) * fVar6 + *pfVar39;
      pfVar39 = pfVar39 + 1;
    } while (uVar32 < uVar37);
  }
  return;
}

