
void FUN_1406e55e0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
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
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  longlong lStack_78;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined2 uVar65;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  
  lVar32 = (longlong)(param_5 >> 1);
  lVar29 = lVar32 * 2;
  lStack_78 = param_1 + lVar32 * -2;
  fVar4 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_1406e5f06:
      uVar24 = 0;
    }
    else {
      uVar30 = param_2 & 0xf;
      if (uVar30 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1406e5f06;
        uVar30 = 0x10 - uVar30 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar30 + 8)) goto LAB_1406e5f06;
      uVar31 = 0;
      lVar34 = param_1 + lVar29;
      uVar24 = param_3 - (param_3 - uVar30 & 7);
      lVar26 = lVar32 * -2 + param_1;
      if (uVar30 != 0) {
        do {
          *(float *)(param_2 + uVar31 * 4) =
               (float)((int)*(short *)(lVar26 + uVar31 * 2) + (int)*(short *)(lVar34 + uVar31 * 2))
               * fVar4;
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar30);
      }
      lVar28 = uVar30 * 2;
      do {
        uVar31 = *(ulonglong *)(lVar28 + lVar26);
        uVar36 = *(ulonglong *)(lVar28 + lVar34);
        uVar65 = (undefined2)(uVar31 >> 0x30);
        auVar68._8_4_ = 0;
        auVar68._0_8_ = uVar31;
        auVar68._12_2_ = uVar65;
        auVar68._14_2_ = uVar65;
        uVar65 = (undefined2)(uVar31 >> 0x20);
        auVar67._12_4_ = auVar68._12_4_;
        auVar67._8_2_ = 0;
        auVar67._0_8_ = uVar31;
        auVar67._10_2_ = uVar65;
        auVar66._10_6_ = auVar67._10_6_;
        auVar66._8_2_ = uVar65;
        auVar66._0_8_ = uVar31;
        uVar65 = (undefined2)(uVar31 >> 0x10);
        auVar7._4_8_ = auVar66._8_8_;
        auVar7._2_2_ = uVar65;
        auVar7._0_2_ = uVar65;
        uVar65 = (undefined2)(uVar36 >> 0x30);
        auVar46._8_4_ = 0;
        auVar46._0_8_ = uVar36;
        auVar46._12_2_ = uVar65;
        auVar46._14_2_ = uVar65;
        uVar65 = (undefined2)(uVar36 >> 0x20);
        auVar45._12_4_ = auVar46._12_4_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar36;
        auVar45._10_2_ = uVar65;
        auVar44._10_6_ = auVar45._10_6_;
        auVar44._8_2_ = uVar65;
        auVar44._0_8_ = uVar36;
        uVar65 = (undefined2)(uVar36 >> 0x10);
        auVar8._4_8_ = auVar44._8_8_;
        auVar8._2_2_ = uVar65;
        auVar8._0_2_ = uVar65;
        pfVar38 = (float *)(param_2 + uVar30 * 4);
        *pfVar38 = (float)((int)(short)uVar31 + (int)(short)uVar36) * fVar4;
        pfVar38[1] = (float)((auVar7._0_4_ >> 0x10) + (auVar8._0_4_ >> 0x10)) * fVar4;
        pfVar38[2] = (float)((auVar66._8_4_ >> 0x10) + (auVar44._8_4_ >> 0x10)) * fVar4;
        pfVar38[3] = (float)((auVar67._12_4_ >> 0x10) + (auVar45._12_4_ >> 0x10)) * fVar4;
        uVar31 = *(ulonglong *)(lVar28 + 8 + lVar26);
        uVar36 = *(ulonglong *)(lVar28 + 8 + lVar34);
        lVar28 = lVar28 + 0x10;
        uVar65 = (undefined2)(uVar31 >> 0x30);
        auVar49._8_4_ = 0;
        auVar49._0_8_ = uVar31;
        auVar49._12_2_ = uVar65;
        auVar49._14_2_ = uVar65;
        uVar65 = (undefined2)(uVar31 >> 0x20);
        auVar48._12_4_ = auVar49._12_4_;
        auVar48._8_2_ = 0;
        auVar48._0_8_ = uVar31;
        auVar48._10_2_ = uVar65;
        auVar47._10_6_ = auVar48._10_6_;
        auVar47._8_2_ = uVar65;
        auVar47._0_8_ = uVar31;
        uVar65 = (undefined2)(uVar31 >> 0x10);
        auVar9._4_8_ = auVar47._8_8_;
        auVar9._2_2_ = uVar65;
        auVar9._0_2_ = uVar65;
        uVar65 = (undefined2)(uVar36 >> 0x30);
        auVar80._8_4_ = 0;
        auVar80._0_8_ = uVar36;
        auVar80._12_2_ = uVar65;
        auVar80._14_2_ = uVar65;
        uVar65 = (undefined2)(uVar36 >> 0x20);
        auVar79._12_4_ = auVar80._12_4_;
        auVar79._8_2_ = 0;
        auVar79._0_8_ = uVar36;
        auVar79._10_2_ = uVar65;
        auVar78._10_6_ = auVar79._10_6_;
        auVar78._8_2_ = uVar65;
        auVar78._0_8_ = uVar36;
        uVar65 = (undefined2)(uVar36 >> 0x10);
        auVar10._4_8_ = auVar78._8_8_;
        auVar10._2_2_ = uVar65;
        auVar10._0_2_ = uVar65;
        pfVar38 = (float *)(param_2 + 0x10 + uVar30 * 4);
        *pfVar38 = (float)((int)(short)uVar31 + (int)(short)uVar36) * fVar4;
        pfVar38[1] = (float)((auVar9._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * fVar4;
        pfVar38[2] = (float)((auVar47._8_4_ >> 0x10) + (auVar78._8_4_ >> 0x10)) * fVar4;
        pfVar38[3] = (float)((auVar48._12_4_ >> 0x10) + (auVar79._12_4_ >> 0x10)) * fVar4;
        uVar30 = uVar30 + 8;
      } while (uVar30 < uVar24);
    }
    uVar30 = 0;
    if (uVar24 + 1 <= param_3) {
      do {
        *(float *)(uVar24 * 4 + param_2 + uVar30 * 4) =
             (float)((int)*(short *)(lVar32 * -2 + param_1 + uVar24 * 2 + uVar30 * 2) +
                    (int)*(short *)(param_1 + lVar29 + uVar24 * 2 + uVar30 * 2)) * fVar4;
        uVar30 = uVar30 + 1;
      } while (uVar30 < param_3 - uVar24);
    }
  }
  if (1 < lVar32) {
    lVar34 = 1;
    uVar30 = 0;
    if (lVar32 - 1U >> 1 != 0) {
      lVar34 = param_1 + lVar29;
      uVar24 = param_2 & 0xf;
      do {
        fVar4 = param_4[uVar30 * 2 + 1];
        lVar26 = uVar30 * 4 + lVar32 * -2 + param_1;
        lStack_78 = lVar26 + 4;
        fVar5 = param_4[uVar30 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 4) ||
             (((uVar31 = uVar24, uVar24 != 0 && (uVar31 = 0x10 - uVar24 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar31 + 4))))) {
            uVar36 = 0;
          }
          else {
            uVar35 = 0;
            lVar33 = 0;
            uVar36 = param_3 - (param_3 - uVar31 & 3);
            lVar28 = lVar34;
            if (uVar31 != 0) {
              do {
                lVar37 = lVar33 + 2;
                lVar39 = lVar33 + 4;
                lVar33 = lVar33 + 2;
                *(float *)(param_2 + uVar35 * 4) =
                     (float)((int)*(short *)(lVar37 + lVar26) + (int)*(short *)(lVar28 + -2)) *
                     fVar4 + *(float *)(param_2 + uVar35 * 4) +
                     (float)((int)*(short *)(lVar39 + lVar26) + (int)*(short *)(lVar28 + -4)) *
                     fVar5;
                uVar35 = uVar35 + 1;
                lVar28 = lVar28 + 2;
              } while (uVar35 < uVar31);
            }
            lVar28 = uVar31 * 2;
            do {
              uVar35 = *(ulonglong *)(lVar28 + 2 + lVar26);
              uVar6 = *(ulonglong *)(lVar28 + -2 + lVar34);
              uVar65 = (undefined2)(uVar35 >> 0x30);
              auVar92._8_4_ = 0;
              auVar92._0_8_ = uVar35;
              auVar92._12_2_ = uVar65;
              auVar92._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar35 >> 0x20);
              auVar91._12_4_ = auVar92._12_4_;
              auVar91._8_2_ = 0;
              auVar91._0_8_ = uVar35;
              auVar91._10_2_ = uVar65;
              auVar90._10_6_ = auVar91._10_6_;
              auVar90._8_2_ = uVar65;
              auVar90._0_8_ = uVar35;
              uVar65 = (undefined2)(uVar35 >> 0x10);
              auVar11._4_8_ = auVar90._8_8_;
              auVar11._2_2_ = uVar65;
              auVar11._0_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x30);
              auVar83._8_4_ = 0;
              auVar83._0_8_ = uVar6;
              auVar83._12_2_ = uVar65;
              auVar83._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x20);
              auVar82._12_4_ = auVar83._12_4_;
              auVar82._8_2_ = 0;
              auVar82._0_8_ = uVar6;
              auVar82._10_2_ = uVar65;
              auVar81._10_6_ = auVar82._10_6_;
              auVar81._8_2_ = uVar65;
              auVar81._0_8_ = uVar6;
              uVar65 = (undefined2)(uVar6 >> 0x10);
              auVar12._4_8_ = auVar81._8_8_;
              auVar12._2_2_ = uVar65;
              auVar12._0_2_ = uVar65;
              pfVar38 = (float *)(param_2 + uVar31 * 4);
              fVar40 = (float)((int)(short)uVar35 + (int)(short)uVar6) * fVar4 + *pfVar38;
              fVar41 = (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar4 +
                       pfVar38[1];
              fVar42 = (float)((auVar90._8_4_ >> 0x10) + (auVar81._8_4_ >> 0x10)) * fVar4 +
                       pfVar38[2];
              fVar43 = (float)((auVar91._12_4_ >> 0x10) + (auVar82._12_4_ >> 0x10)) * fVar4 +
                       pfVar38[3];
              pfVar38 = (float *)(param_2 + uVar31 * 4);
              *pfVar38 = fVar40;
              pfVar38[1] = fVar41;
              pfVar38[2] = fVar42;
              pfVar38[3] = fVar43;
              uVar35 = *(ulonglong *)(lVar28 + 4 + lVar26);
              uVar6 = *(ulonglong *)(lVar28 + -4 + lVar34);
              lVar28 = lVar28 + 8;
              uVar65 = (undefined2)(uVar35 >> 0x30);
              auVar95._8_4_ = 0;
              auVar95._0_8_ = uVar35;
              auVar95._12_2_ = uVar65;
              auVar95._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar35 >> 0x20);
              auVar94._12_4_ = auVar95._12_4_;
              auVar94._8_2_ = 0;
              auVar94._0_8_ = uVar35;
              auVar94._10_2_ = uVar65;
              auVar93._10_6_ = auVar94._10_6_;
              auVar93._8_2_ = uVar65;
              auVar93._0_8_ = uVar35;
              uVar65 = (undefined2)(uVar35 >> 0x10);
              auVar13._4_8_ = auVar93._8_8_;
              auVar13._2_2_ = uVar65;
              auVar13._0_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x30);
              auVar86._8_4_ = 0;
              auVar86._0_8_ = uVar6;
              auVar86._12_2_ = uVar65;
              auVar86._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x20);
              auVar85._12_4_ = auVar86._12_4_;
              auVar85._8_2_ = 0;
              auVar85._0_8_ = uVar6;
              auVar85._10_2_ = uVar65;
              auVar84._10_6_ = auVar85._10_6_;
              auVar84._8_2_ = uVar65;
              auVar84._0_8_ = uVar6;
              uVar65 = (undefined2)(uVar6 >> 0x10);
              auVar14._4_8_ = auVar84._8_8_;
              auVar14._2_2_ = uVar65;
              auVar14._0_2_ = uVar65;
              pfVar38 = (float *)(param_2 + uVar31 * 4);
              *pfVar38 = fVar40 + (float)((int)(short)uVar35 + (int)(short)uVar6) * fVar5;
              pfVar38[1] = fVar41 + (float)((auVar13._0_4_ >> 0x10) + (auVar14._0_4_ >> 0x10)) *
                                    fVar5;
              pfVar38[2] = fVar42 + (float)((auVar93._8_4_ >> 0x10) + (auVar84._8_4_ >> 0x10)) *
                                    fVar5;
              pfVar38[3] = fVar43 + (float)((auVar94._12_4_ >> 0x10) + (auVar85._12_4_ >> 0x10)) *
                                    fVar5;
              uVar31 = uVar31 + 4;
            } while (uVar31 < uVar36);
          }
          lVar28 = uVar36 * 2;
          if (uVar36 < param_3) {
            lVar33 = lVar28 + lVar34;
            do {
              lVar37 = lVar28 + 2;
              psVar1 = (short *)(lVar33 + -2);
              psVar2 = (short *)(lVar33 + -4);
              lVar33 = lVar33 + 2;
              lVar39 = lVar28 + 4;
              lVar28 = lVar28 + 2;
              *(float *)(param_2 + uVar36 * 4) =
                   (float)((int)*(short *)(lVar37 + lVar26) + (int)*psVar1) * fVar4 +
                   *(float *)(param_2 + uVar36 * 4) +
                   (float)((int)*(short *)(lVar39 + lVar26) + (int)*psVar2) * fVar5;
              uVar36 = uVar36 + 1;
            } while (uVar36 < param_3);
          }
        }
        uVar30 = uVar30 + 1;
        lVar34 = lVar34 + -4;
      } while (uVar30 < lVar32 - 1U >> 1);
      lVar34 = uVar30 * 2 + 1;
    }
    if (lVar32 != lVar34) {
      lVar28 = lVar32 * -2;
      lVar26 = lVar34 * 2;
      lStack_78 = lVar26 + param_1 + lVar28;
      fVar4 = param_4[lVar34];
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_1406e5ee7:
          uVar24 = 0;
          if (param_3 == 0) goto LAB_1406e5cec;
          uVar31 = 0;
          uVar30 = param_3;
        }
        else {
          uVar30 = param_2 & 0xf;
          if (uVar30 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1406e5ee7;
            uVar30 = 0x10 - uVar30 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar30 + 8)) goto LAB_1406e5ee7;
          lVar37 = param_1 + lVar28 + lVar26;
          uVar24 = param_3 - (param_3 - uVar30 & 7);
          lVar33 = param_1 + lVar29 + lVar34 * -2;
          uVar31 = 0;
          if (uVar30 != 0) {
            do {
              *(float *)(param_2 + uVar31 * 4) =
                   (float)((int)*(short *)(lVar37 + uVar31 * 2) +
                          (int)*(short *)(lVar33 + uVar31 * 2)) * fVar4 +
                   *(float *)(param_2 + uVar31 * 4);
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar30);
          }
          lVar39 = uVar30 * 2;
          lVar25 = lVar28 + lVar26 + param_1;
          lVar27 = lVar34 * -2 + lVar29 + param_1;
          do {
            uVar31 = *(ulonglong *)(lVar39 + lVar37);
            uVar36 = *(ulonglong *)(lVar39 + lVar33);
            uVar65 = (undefined2)(uVar31 >> 0x30);
            auVar71._8_4_ = 0;
            auVar71._0_8_ = uVar31;
            auVar71._12_2_ = uVar65;
            auVar71._14_2_ = uVar65;
            uVar65 = (undefined2)(uVar31 >> 0x20);
            auVar70._12_4_ = auVar71._12_4_;
            auVar70._8_2_ = 0;
            auVar70._0_8_ = uVar31;
            auVar70._10_2_ = uVar65;
            auVar69._10_6_ = auVar70._10_6_;
            auVar69._8_2_ = uVar65;
            auVar69._0_8_ = uVar31;
            uVar65 = (undefined2)(uVar31 >> 0x10);
            auVar15._4_8_ = auVar69._8_8_;
            auVar15._2_2_ = uVar65;
            auVar15._0_2_ = uVar65;
            uVar65 = (undefined2)(uVar36 >> 0x30);
            auVar52._8_4_ = 0;
            auVar52._0_8_ = uVar36;
            auVar52._12_2_ = uVar65;
            auVar52._14_2_ = uVar65;
            uVar65 = (undefined2)(uVar36 >> 0x20);
            auVar51._12_4_ = auVar52._12_4_;
            auVar51._8_2_ = 0;
            auVar51._0_8_ = uVar36;
            auVar51._10_2_ = uVar65;
            auVar50._10_6_ = auVar51._10_6_;
            auVar50._8_2_ = uVar65;
            auVar50._0_8_ = uVar36;
            uVar65 = (undefined2)(uVar36 >> 0x10);
            auVar16._4_8_ = auVar50._8_8_;
            auVar16._2_2_ = uVar65;
            auVar16._0_2_ = uVar65;
            pfVar38 = (float *)(param_2 + uVar30 * 4);
            fVar5 = pfVar38[1];
            fVar40 = pfVar38[2];
            fVar41 = pfVar38[3];
            pfVar3 = (float *)(param_2 + uVar30 * 4);
            *pfVar3 = (float)((int)(short)uVar31 + (int)(short)uVar36) * fVar4 + *pfVar38;
            pfVar3[1] = (float)((auVar15._0_4_ >> 0x10) + (auVar16._0_4_ >> 0x10)) * fVar4 + fVar5;
            pfVar3[2] = (float)((auVar69._8_4_ >> 0x10) + (auVar50._8_4_ >> 0x10)) * fVar4 + fVar40;
            pfVar3[3] = (float)((auVar70._12_4_ >> 0x10) + (auVar51._12_4_ >> 0x10)) * fVar4 +
                        fVar41;
            uVar31 = *(ulonglong *)(lVar39 + 8 + lVar25);
            uVar36 = *(ulonglong *)(lVar39 + 8 + lVar27);
            lVar39 = lVar39 + 0x10;
            uVar65 = (undefined2)(uVar31 >> 0x30);
            auVar55._8_4_ = 0;
            auVar55._0_8_ = uVar31;
            auVar55._12_2_ = uVar65;
            auVar55._14_2_ = uVar65;
            uVar65 = (undefined2)(uVar31 >> 0x20);
            auVar54._12_4_ = auVar55._12_4_;
            auVar54._8_2_ = 0;
            auVar54._0_8_ = uVar31;
            auVar54._10_2_ = uVar65;
            auVar53._10_6_ = auVar54._10_6_;
            auVar53._8_2_ = uVar65;
            auVar53._0_8_ = uVar31;
            uVar65 = (undefined2)(uVar31 >> 0x10);
            auVar17._4_8_ = auVar53._8_8_;
            auVar17._2_2_ = uVar65;
            auVar17._0_2_ = uVar65;
            uVar65 = (undefined2)(uVar36 >> 0x30);
            auVar89._8_4_ = 0;
            auVar89._0_8_ = uVar36;
            auVar89._12_2_ = uVar65;
            auVar89._14_2_ = uVar65;
            uVar65 = (undefined2)(uVar36 >> 0x20);
            auVar88._12_4_ = auVar89._12_4_;
            auVar88._8_2_ = 0;
            auVar88._0_8_ = uVar36;
            auVar88._10_2_ = uVar65;
            auVar87._10_6_ = auVar88._10_6_;
            auVar87._8_2_ = uVar65;
            auVar87._0_8_ = uVar36;
            uVar65 = (undefined2)(uVar36 >> 0x10);
            auVar18._4_8_ = auVar87._8_8_;
            auVar18._2_2_ = uVar65;
            auVar18._0_2_ = uVar65;
            pfVar38 = (float *)(param_2 + 0x10 + uVar30 * 4);
            fVar5 = pfVar38[1];
            fVar40 = pfVar38[2];
            fVar41 = pfVar38[3];
            pfVar3 = (float *)(param_2 + 0x10 + uVar30 * 4);
            *pfVar3 = (float)((int)(short)uVar31 + (int)(short)uVar36) * fVar4 + *pfVar38;
            pfVar3[1] = (float)((auVar17._0_4_ >> 0x10) + (auVar18._0_4_ >> 0x10)) * fVar4 + fVar5;
            pfVar3[2] = (float)((auVar53._8_4_ >> 0x10) + (auVar87._8_4_ >> 0x10)) * fVar4 + fVar40;
            pfVar3[3] = (float)((auVar54._12_4_ >> 0x10) + (auVar88._12_4_ >> 0x10)) * fVar4 +
                        fVar41;
            uVar30 = uVar30 + 8;
          } while (uVar30 < uVar24);
          if (param_3 < uVar24 + 1) goto LAB_1406e5cec;
          uVar30 = param_3 - uVar24;
          if ((longlong)uVar30 < 4) {
            uVar31 = 0;
          }
          else {
            uVar36 = 0;
            uVar31 = uVar30 & 0xfffffffffffffffc;
            pfVar38 = (float *)(uVar24 * 4 + param_2);
            lVar33 = 0;
            do {
              uVar35 = *(ulonglong *)(lVar33 + lVar25 + uVar24 * 2);
              uVar36 = uVar36 + 4;
              uVar6 = *(ulonglong *)(lVar33 + lVar27 + uVar24 * 2);
              lVar33 = lVar33 + 8;
              uVar65 = (undefined2)(uVar35 >> 0x30);
              auVar74._8_4_ = 0;
              auVar74._0_8_ = uVar35;
              auVar74._12_2_ = uVar65;
              auVar74._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar35 >> 0x20);
              auVar73._12_4_ = auVar74._12_4_;
              auVar73._8_2_ = 0;
              auVar73._0_8_ = uVar35;
              auVar73._10_2_ = uVar65;
              auVar72._10_6_ = auVar73._10_6_;
              auVar72._8_2_ = uVar65;
              auVar72._0_8_ = uVar35;
              uVar65 = (undefined2)(uVar35 >> 0x10);
              auVar19._4_8_ = auVar72._8_8_;
              auVar19._2_2_ = uVar65;
              auVar19._0_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x30);
              auVar58._8_4_ = 0;
              auVar58._0_8_ = uVar6;
              auVar58._12_2_ = uVar65;
              auVar58._14_2_ = uVar65;
              uVar65 = (undefined2)(uVar6 >> 0x20);
              auVar57._12_4_ = auVar58._12_4_;
              auVar57._8_2_ = 0;
              auVar57._0_8_ = uVar6;
              auVar57._10_2_ = uVar65;
              auVar56._10_6_ = auVar57._10_6_;
              auVar56._8_2_ = uVar65;
              auVar56._0_8_ = uVar6;
              uVar65 = (undefined2)(uVar6 >> 0x10);
              auVar20._4_8_ = auVar56._8_8_;
              auVar20._2_2_ = uVar65;
              auVar20._0_2_ = uVar65;
              *pfVar38 = (float)((int)(short)uVar35 + (int)(short)uVar6) * fVar4 + *pfVar38;
              pfVar38[1] = (float)((auVar19._0_4_ >> 0x10) + (auVar20._0_4_ >> 0x10)) * fVar4 +
                           pfVar38[1];
              pfVar38[2] = (float)((auVar72._8_4_ >> 0x10) + (auVar56._8_4_ >> 0x10)) * fVar4 +
                           pfVar38[2];
              pfVar38[3] = (float)((auVar73._12_4_ >> 0x10) + (auVar57._12_4_ >> 0x10)) * fVar4 +
                           pfVar38[3];
              pfVar38 = pfVar38 + 4;
            } while (uVar36 < uVar31);
          }
        }
        if (uVar31 < uVar30) {
          pfVar38 = (float *)(uVar31 * 4 + uVar24 * 4 + param_2);
          do {
            lVar37 = uVar31 * 2;
            lVar33 = uVar31 * 2;
            uVar31 = uVar31 + 1;
            *pfVar38 = (float)((int)*(short *)(lVar28 + lVar26 + param_1 + uVar24 * 2 + lVar37) +
                              (int)*(short *)(param_1 + lVar29 + lVar34 * -2 + uVar24 * 2 + lVar33))
                       * fVar4 + *pfVar38;
            pfVar38 = pfVar38 + 1;
          } while (uVar31 < uVar30);
        }
      }
    }
  }
LAB_1406e5cec:
  fVar4 = param_4[lVar32];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_1406e5ed3:
    uVar24 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar30 = param_2 & 0xf;
    if (uVar30 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406e5ed3;
      uVar30 = 0x10 - uVar30 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar30 + 8)) goto LAB_1406e5ed3;
    uVar31 = 0;
    uVar24 = param_3 - (param_3 - uVar30 & 7);
    if (uVar30 != 0) {
      do {
        *(float *)(param_2 + uVar31 * 4) =
             (float)(int)*(short *)(lStack_78 + 2 + uVar31 * 2) * fVar4 +
             *(float *)(param_2 + uVar31 * 4);
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar30);
    }
    lVar29 = uVar30 * 2;
    do {
      uVar31 = *(ulonglong *)(lVar29 + 2 + lStack_78);
      uVar65 = (undefined2)(uVar31 >> 0x30);
      auVar61._8_4_ = 0;
      auVar61._0_8_ = uVar31;
      auVar61._12_2_ = uVar65;
      auVar61._14_2_ = uVar65;
      uVar65 = (undefined2)(uVar31 >> 0x20);
      auVar60._12_4_ = auVar61._12_4_;
      auVar60._8_2_ = 0;
      auVar60._0_8_ = uVar31;
      auVar60._10_2_ = uVar65;
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._8_2_ = uVar65;
      auVar59._0_8_ = uVar31;
      uVar65 = (undefined2)(uVar31 >> 0x10);
      auVar21._4_8_ = auVar59._8_8_;
      auVar21._2_2_ = uVar65;
      auVar21._0_2_ = uVar65;
      pfVar38 = (float *)(param_2 + uVar30 * 4);
      fVar5 = pfVar38[1];
      fVar40 = pfVar38[2];
      fVar41 = pfVar38[3];
      pfVar3 = (float *)(param_2 + uVar30 * 4);
      *pfVar3 = (float)(int)(short)uVar31 * fVar4 + *pfVar38;
      pfVar3[1] = (float)(auVar21._0_4_ >> 0x10) * fVar4 + fVar5;
      pfVar3[2] = (float)(auVar59._8_4_ >> 0x10) * fVar4 + fVar40;
      pfVar3[3] = (float)(auVar60._12_4_ >> 0x10) * fVar4 + fVar41;
      uVar31 = *(ulonglong *)(lVar29 + 10 + lStack_78);
      lVar29 = lVar29 + 0x10;
      uVar65 = (undefined2)(uVar31 >> 0x30);
      auVar77._8_4_ = 0;
      auVar77._0_8_ = uVar31;
      auVar77._12_2_ = uVar65;
      auVar77._14_2_ = uVar65;
      uVar65 = (undefined2)(uVar31 >> 0x20);
      auVar76._12_4_ = auVar77._12_4_;
      auVar76._8_2_ = 0;
      auVar76._0_8_ = uVar31;
      auVar76._10_2_ = uVar65;
      auVar75._10_6_ = auVar76._10_6_;
      auVar75._8_2_ = uVar65;
      auVar75._0_8_ = uVar31;
      uVar65 = (undefined2)(uVar31 >> 0x10);
      auVar22._4_8_ = auVar75._8_8_;
      auVar22._2_2_ = uVar65;
      auVar22._0_2_ = uVar65;
      pfVar38 = (float *)(param_2 + 0x10 + uVar30 * 4);
      fVar5 = pfVar38[1];
      fVar40 = pfVar38[2];
      fVar41 = pfVar38[3];
      pfVar3 = (float *)(param_2 + 0x10 + uVar30 * 4);
      *pfVar3 = (float)(int)(short)uVar31 * fVar4 + *pfVar38;
      pfVar3[1] = (float)(auVar22._0_4_ >> 0x10) * fVar4 + fVar5;
      pfVar3[2] = (float)(auVar75._8_4_ >> 0x10) * fVar4 + fVar40;
      pfVar3[3] = (float)(auVar76._12_4_ >> 0x10) * fVar4 + fVar41;
      uVar30 = uVar30 + 8;
    } while (uVar30 < uVar24);
    if (param_3 < uVar24 + 1) {
      return;
    }
    param_3 = param_3 - uVar24;
    if (3 < (longlong)param_3) {
      uVar31 = 0;
      uVar30 = param_3 & 0xfffffffffffffffc;
      pfVar38 = (float *)(uVar24 * 4 + param_2);
      lVar29 = 0;
      do {
        uVar36 = *(ulonglong *)(lVar29 + 2 + lStack_78 + uVar24 * 2);
        uVar31 = uVar31 + 4;
        uVar65 = (undefined2)(uVar36 >> 0x30);
        auVar64._8_4_ = 0;
        auVar64._0_8_ = uVar36;
        auVar64._12_2_ = uVar65;
        auVar64._14_2_ = uVar65;
        uVar65 = (undefined2)(uVar36 >> 0x20);
        auVar63._12_4_ = auVar64._12_4_;
        auVar63._8_2_ = 0;
        auVar63._0_8_ = uVar36;
        auVar63._10_2_ = uVar65;
        auVar62._10_6_ = auVar63._10_6_;
        auVar62._8_2_ = uVar65;
        auVar62._0_8_ = uVar36;
        uVar65 = (undefined2)(uVar36 >> 0x10);
        auVar23._4_8_ = auVar62._8_8_;
        auVar23._2_2_ = uVar65;
        auVar23._0_2_ = uVar65;
        lVar29 = lVar29 + 8;
        *pfVar38 = (float)(int)(short)uVar36 * fVar4 + *pfVar38;
        pfVar38[1] = (float)(auVar23._0_4_ >> 0x10) * fVar4 + pfVar38[1];
        pfVar38[2] = (float)(auVar62._8_4_ >> 0x10) * fVar4 + pfVar38[2];
        pfVar38[3] = (float)(auVar63._12_4_ >> 0x10) * fVar4 + pfVar38[3];
        pfVar38 = pfVar38 + 4;
      } while (uVar31 < uVar30);
      goto LAB_1406e5e6e;
    }
  }
  uVar30 = 0;
LAB_1406e5e6e:
  if (uVar30 < param_3) {
    pfVar38 = (float *)(uVar30 * 4 + param_2 + uVar24 * 4);
    do {
      lVar29 = uVar30 * 2;
      uVar30 = uVar30 + 1;
      *pfVar38 = (float)(int)*(short *)(lStack_78 + uVar24 * 2 + 2 + lVar29) * fVar4 + *pfVar38;
      pfVar38 = pfVar38 + 1;
    } while (uVar30 < param_3);
  }
  return;
}

