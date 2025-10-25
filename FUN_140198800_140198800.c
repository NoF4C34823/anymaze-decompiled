
void FUN_140198800(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  undefined1 auVar56 [14];
  undefined1 auVar57 [14];
  undefined1 auVar58 [14];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [14];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar64 [14];
  undefined1 auVar65 [14];
  undefined1 auVar66 [14];
  undefined1 auVar67 [14];
  undefined1 auVar68 [14];
  undefined1 auVar69 [14];
  undefined1 auVar70 [14];
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
  undefined1 auVar75 [14];
  undefined1 auVar76 [14];
  ulonglong uVar77;
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  ulonglong uVar83;
  longlong lVar84;
  ulonglong uVar85;
  longlong lVar86;
  longlong lVar87;
  ulonglong uVar88;
  ulonglong uVar89;
  float *pfVar90;
  ulonglong uVar91;
  longlong lVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  longlong lStack_70;
  
  lVar86 = (longlong)(param_5 >> 1);
  lStack_70 = lVar86 * -6 + param_1;
  uVar88 = param_3 * 3;
  fVar6 = *param_4;
  if (0 < (longlong)uVar88) {
    if ((longlong)uVar88 < 8) {
LAB_1401990c4:
      uVar77 = 0;
    }
    else {
      uVar83 = param_2 & 0xf;
      if (uVar83 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1401990c4;
        uVar83 = 0x10 - uVar83 >> 2;
      }
      if ((longlong)uVar88 < (longlong)(uVar83 + 8)) goto LAB_1401990c4;
      lVar82 = lVar86 * -6 + param_1;
      uVar77 = uVar88 - (uVar88 - uVar83 & 7);
      lVar79 = lVar86 * 6 + param_1;
      uVar85 = 0;
      if (uVar83 != 0) {
        do {
          *(float *)(param_2 + uVar85 * 4) =
               (float)((uint)*(ushort *)(lVar82 + uVar85 * 2) +
                      (uint)*(ushort *)(lVar79 + uVar85 * 2)) * fVar6;
          uVar85 = uVar85 + 1;
        } while (uVar85 < uVar83);
      }
      lVar80 = uVar83 * 2;
      do {
        uVar85 = *(ulonglong *)(lVar80 + lVar82);
        uVar91 = *(ulonglong *)(lVar80 + lVar79);
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar85;
        auVar9._12_2_ = (short)(uVar85 >> 0x30);
        auVar26._8_2_ = (short)(uVar85 >> 0x20);
        auVar26._0_8_ = uVar85;
        auVar26._10_4_ = auVar9._10_4_;
        auVar60._6_8_ = 0;
        auVar60._0_6_ = auVar26._8_6_;
        auVar43._4_2_ = (short)(uVar85 >> 0x10);
        auVar43._0_4_ = (uint)uVar85;
        auVar43._6_8_ = SUB148(auVar60 << 0x40,6);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar91;
        auVar10._12_2_ = (short)(uVar91 >> 0x30);
        auVar27._8_2_ = (short)(uVar91 >> 0x20);
        auVar27._0_8_ = uVar91;
        auVar27._10_4_ = auVar10._10_4_;
        auVar61._6_8_ = 0;
        auVar61._0_6_ = auVar27._8_6_;
        auVar44._4_2_ = (short)(uVar91 >> 0x10);
        auVar44._0_4_ = (uint)uVar91;
        auVar44._6_8_ = SUB148(auVar61 << 0x40,6);
        pfVar90 = (float *)(param_2 + uVar83 * 4);
        *pfVar90 = (float)(((uint)uVar85 & 0xffff) + ((uint)uVar91 & 0xffff)) * fVar6;
        pfVar90[1] = (float)(auVar43._4_4_ + auVar44._4_4_) * fVar6;
        pfVar90[2] = (float)(auVar26._8_4_ + auVar27._8_4_) * fVar6;
        pfVar90[3] = (float)((auVar9._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * fVar6;
        uVar85 = *(ulonglong *)(lVar80 + 8 + lVar82);
        uVar91 = *(ulonglong *)(lVar80 + 8 + lVar79);
        lVar80 = lVar80 + 0x10;
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar85;
        auVar11._12_2_ = (short)(uVar85 >> 0x30);
        auVar28._8_2_ = (short)(uVar85 >> 0x20);
        auVar28._0_8_ = uVar85;
        auVar28._10_4_ = auVar11._10_4_;
        auVar62._6_8_ = 0;
        auVar62._0_6_ = auVar28._8_6_;
        auVar45._4_2_ = (short)(uVar85 >> 0x10);
        auVar45._0_4_ = (uint)uVar85;
        auVar45._6_8_ = SUB148(auVar62 << 0x40,6);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar91;
        auVar12._12_2_ = (short)(uVar91 >> 0x30);
        auVar29._8_2_ = (short)(uVar91 >> 0x20);
        auVar29._0_8_ = uVar91;
        auVar29._10_4_ = auVar12._10_4_;
        auVar63._6_8_ = 0;
        auVar63._0_6_ = auVar29._8_6_;
        auVar46._4_2_ = (short)(uVar91 >> 0x10);
        auVar46._0_4_ = (uint)uVar91;
        auVar46._6_8_ = SUB148(auVar63 << 0x40,6);
        pfVar90 = (float *)(param_2 + 0x10 + uVar83 * 4);
        *pfVar90 = (float)(((uint)uVar85 & 0xffff) + ((uint)uVar91 & 0xffff)) * fVar6;
        pfVar90[1] = (float)(auVar45._4_4_ + auVar46._4_4_) * fVar6;
        pfVar90[2] = (float)(auVar28._8_4_ + auVar29._8_4_) * fVar6;
        pfVar90[3] = (float)((auVar11._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * fVar6;
        uVar83 = uVar83 + 8;
      } while (uVar83 < uVar77);
    }
    uVar83 = 0;
    if (uVar77 + 1 <= uVar88) {
      do {
        *(float *)(uVar77 * 4 + param_2 + uVar83 * 4) =
             (float)((uint)*(ushort *)(lVar86 * -6 + param_1 + uVar77 * 2 + uVar83 * 2) +
                    (uint)*(ushort *)(lVar86 * 6 + param_1 + uVar77 * 2 + uVar83 * 2)) * fVar6;
        uVar83 = uVar83 + 1;
      } while (uVar83 < uVar88 - uVar77);
    }
  }
  if (1 < lVar86) {
    lVar79 = 1;
    uVar83 = 0;
    if (lVar86 - 1U >> 1 != 0) {
      uVar77 = param_2 & 0xf;
      lVar82 = lVar86 * -6 + param_1;
      lVar79 = lVar86 * 6 + param_1;
      do {
        fVar6 = param_4[uVar83 * 2 + 1];
        lStack_70 = lVar82 + 0xc;
        fVar7 = param_4[uVar83 * 2 + 2];
        if (0 < (longlong)uVar88) {
          if (((longlong)uVar88 < 4) ||
             (((uVar85 = uVar77, uVar77 != 0 && (uVar85 = 0x10 - uVar77 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar88 < (longlong)(uVar85 + 4))))) {
            uVar91 = 0;
          }
          else {
            uVar89 = 0;
            uVar91 = uVar88 - (uVar88 - uVar85 & 3);
            lVar80 = lVar79;
            lVar87 = lVar82;
            if (uVar85 != 0) {
              do {
                *(float *)(param_2 + uVar89 * 4) =
                     (float)((uint)*(ushort *)(lVar87 + 6) + (uint)*(ushort *)(lVar80 + -6)) * fVar6
                     + *(float *)(param_2 + uVar89 * 4) +
                     (float)((uint)*(ushort *)(lVar87 + 0xc) + (uint)*(ushort *)(lVar80 + -0xc)) *
                     fVar7;
                uVar89 = uVar89 + 1;
                lVar80 = lVar80 + 2;
                lVar87 = lVar87 + 2;
              } while (uVar89 < uVar85);
            }
            lVar80 = uVar85 * 2;
            do {
              uVar89 = *(ulonglong *)(lVar80 + 6 + lVar82);
              uVar8 = *(ulonglong *)(lVar80 + -6 + lVar79);
              auVar13._8_4_ = 0;
              auVar13._0_8_ = uVar89;
              auVar13._12_2_ = (short)(uVar89 >> 0x30);
              auVar30._8_2_ = (short)(uVar89 >> 0x20);
              auVar30._0_8_ = uVar89;
              auVar30._10_4_ = auVar13._10_4_;
              auVar64._6_8_ = 0;
              auVar64._0_6_ = auVar30._8_6_;
              auVar47._4_2_ = (short)(uVar89 >> 0x10);
              auVar47._0_4_ = (uint)uVar89;
              auVar47._6_8_ = SUB148(auVar64 << 0x40,6);
              auVar14._8_4_ = 0;
              auVar14._0_8_ = uVar8;
              auVar14._12_2_ = (short)(uVar8 >> 0x30);
              auVar31._8_2_ = (short)(uVar8 >> 0x20);
              auVar31._0_8_ = uVar8;
              auVar31._10_4_ = auVar14._10_4_;
              auVar65._6_8_ = 0;
              auVar65._0_6_ = auVar31._8_6_;
              auVar48._4_2_ = (short)(uVar8 >> 0x10);
              auVar48._0_4_ = (uint)uVar8;
              auVar48._6_8_ = SUB148(auVar65 << 0x40,6);
              pfVar90 = (float *)(param_2 + uVar85 * 4);
              fVar93 = (float)(((uint)uVar89 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar6 + *pfVar90;
              fVar94 = (float)(auVar47._4_4_ + auVar48._4_4_) * fVar6 + pfVar90[1];
              fVar95 = (float)(auVar30._8_4_ + auVar31._8_4_) * fVar6 + pfVar90[2];
              fVar96 = (float)((auVar13._10_4_ >> 0x10) + (auVar14._10_4_ >> 0x10)) * fVar6 +
                       pfVar90[3];
              pfVar90 = (float *)(param_2 + uVar85 * 4);
              *pfVar90 = fVar93;
              pfVar90[1] = fVar94;
              pfVar90[2] = fVar95;
              pfVar90[3] = fVar96;
              uVar89 = *(ulonglong *)(lVar80 + 0xc + lVar82);
              uVar8 = *(ulonglong *)(lVar80 + -0xc + lVar79);
              lVar80 = lVar80 + 8;
              auVar15._8_4_ = 0;
              auVar15._0_8_ = uVar89;
              auVar15._12_2_ = (short)(uVar89 >> 0x30);
              auVar32._8_2_ = (short)(uVar89 >> 0x20);
              auVar32._0_8_ = uVar89;
              auVar32._10_4_ = auVar15._10_4_;
              auVar66._6_8_ = 0;
              auVar66._0_6_ = auVar32._8_6_;
              auVar49._4_2_ = (short)(uVar89 >> 0x10);
              auVar49._0_4_ = (uint)uVar89;
              auVar49._6_8_ = SUB148(auVar66 << 0x40,6);
              auVar16._8_4_ = 0;
              auVar16._0_8_ = uVar8;
              auVar16._12_2_ = (short)(uVar8 >> 0x30);
              auVar33._8_2_ = (short)(uVar8 >> 0x20);
              auVar33._0_8_ = uVar8;
              auVar33._10_4_ = auVar16._10_4_;
              auVar67._6_8_ = 0;
              auVar67._0_6_ = auVar33._8_6_;
              auVar50._4_2_ = (short)(uVar8 >> 0x10);
              auVar50._0_4_ = (uint)uVar8;
              auVar50._6_8_ = SUB148(auVar67 << 0x40,6);
              pfVar90 = (float *)(param_2 + uVar85 * 4);
              *pfVar90 = fVar93 + (float)(((uint)uVar89 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar7;
              pfVar90[1] = fVar94 + (float)(auVar49._4_4_ + auVar50._4_4_) * fVar7;
              pfVar90[2] = fVar95 + (float)(auVar32._8_4_ + auVar33._8_4_) * fVar7;
              pfVar90[3] = fVar96 + (float)((auVar15._10_4_ >> 0x10) + (auVar16._10_4_ >> 0x10)) *
                                    fVar7;
              uVar85 = uVar85 + 4;
            } while (uVar85 < uVar91);
          }
          lVar80 = lVar82 + uVar91 * 2;
          if (uVar91 < uVar88) {
            lVar87 = uVar91 * 2 + lVar79;
            do {
              puVar1 = (ushort *)(lVar80 + 6);
              puVar2 = (ushort *)(lVar87 + -6);
              puVar3 = (ushort *)(lVar87 + -0xc);
              lVar87 = lVar87 + 2;
              puVar4 = (ushort *)(lVar80 + 0xc);
              lVar80 = lVar80 + 2;
              *(float *)(param_2 + uVar91 * 4) =
                   (float)((uint)*puVar1 + (uint)*puVar2) * fVar6 + *(float *)(param_2 + uVar91 * 4)
                   + (float)((uint)*puVar4 + (uint)*puVar3) * fVar7;
              uVar91 = uVar91 + 1;
            } while (uVar91 < uVar88);
          }
        }
        uVar83 = uVar83 + 1;
        lVar79 = lVar79 + -0xc;
        lVar82 = lVar82 + 0xc;
      } while (uVar83 < lVar86 - 1U >> 1);
      lVar79 = uVar83 * 2 + 1;
    }
    if (lVar86 != lVar79) {
      lVar80 = lVar86 * -6;
      lVar82 = lVar79 * 6;
      lStack_70 = lVar82 + param_1 + lVar80;
      fVar6 = param_4[lVar79];
      if (0 < (longlong)uVar88) {
        if ((longlong)uVar88 < 8) {
LAB_1401990a6:
          uVar77 = 0;
          if (uVar88 == 0) goto LAB_140198eca;
          uVar85 = 0;
          uVar83 = uVar88;
        }
        else {
          uVar83 = param_2 & 0xf;
          if (uVar83 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1401990a6;
            uVar83 = 0x10 - uVar83 >> 2;
          }
          if ((longlong)uVar88 < (longlong)(uVar83 + 8)) goto LAB_1401990a6;
          uVar77 = uVar88 - (uVar88 - uVar83 & 7);
          lVar87 = param_1 + lVar80 + lVar82;
          lVar84 = param_1 + lVar86 * 6 + lVar79 * -6;
          uVar85 = 0;
          if (uVar83 != 0) {
            do {
              *(float *)(param_2 + uVar85 * 4) =
                   (float)((uint)*(ushort *)(lVar87 + uVar85 * 2) +
                          (uint)*(ushort *)(lVar84 + uVar85 * 2)) * fVar6 +
                   *(float *)(param_2 + uVar85 * 4);
              uVar85 = uVar85 + 1;
            } while (uVar85 < uVar83);
          }
          lVar92 = uVar83 * 2;
          lVar78 = lVar80 + lVar82 + param_1;
          lVar81 = lVar86 * 6 + lVar79 * -6 + param_1;
          do {
            uVar85 = *(ulonglong *)(lVar92 + lVar87);
            uVar91 = *(ulonglong *)(lVar92 + lVar84);
            auVar17._8_4_ = 0;
            auVar17._0_8_ = uVar85;
            auVar17._12_2_ = (short)(uVar85 >> 0x30);
            auVar34._8_2_ = (short)(uVar85 >> 0x20);
            auVar34._0_8_ = uVar85;
            auVar34._10_4_ = auVar17._10_4_;
            auVar68._6_8_ = 0;
            auVar68._0_6_ = auVar34._8_6_;
            auVar51._4_2_ = (short)(uVar85 >> 0x10);
            auVar51._0_4_ = (uint)uVar85;
            auVar51._6_8_ = SUB148(auVar68 << 0x40,6);
            auVar18._8_4_ = 0;
            auVar18._0_8_ = uVar91;
            auVar18._12_2_ = (short)(uVar91 >> 0x30);
            auVar35._8_2_ = (short)(uVar91 >> 0x20);
            auVar35._0_8_ = uVar91;
            auVar35._10_4_ = auVar18._10_4_;
            auVar69._6_8_ = 0;
            auVar69._0_6_ = auVar35._8_6_;
            auVar52._4_2_ = (short)(uVar91 >> 0x10);
            auVar52._0_4_ = (uint)uVar91;
            auVar52._6_8_ = SUB148(auVar69 << 0x40,6);
            pfVar90 = (float *)(param_2 + uVar83 * 4);
            fVar7 = pfVar90[1];
            fVar93 = pfVar90[2];
            fVar94 = pfVar90[3];
            pfVar5 = (float *)(param_2 + uVar83 * 4);
            *pfVar5 = (float)(((uint)uVar85 & 0xffff) + ((uint)uVar91 & 0xffff)) * fVar6 + *pfVar90;
            pfVar5[1] = (float)(auVar51._4_4_ + auVar52._4_4_) * fVar6 + fVar7;
            pfVar5[2] = (float)(auVar34._8_4_ + auVar35._8_4_) * fVar6 + fVar93;
            pfVar5[3] = (float)((auVar17._10_4_ >> 0x10) + (auVar18._10_4_ >> 0x10)) * fVar6 +
                        fVar94;
            uVar85 = *(ulonglong *)(lVar92 + 8 + lVar78);
            uVar91 = *(ulonglong *)(lVar92 + 8 + lVar81);
            lVar92 = lVar92 + 0x10;
            auVar19._8_4_ = 0;
            auVar19._0_8_ = uVar85;
            auVar19._12_2_ = (short)(uVar85 >> 0x30);
            auVar36._8_2_ = (short)(uVar85 >> 0x20);
            auVar36._0_8_ = uVar85;
            auVar36._10_4_ = auVar19._10_4_;
            auVar70._6_8_ = 0;
            auVar70._0_6_ = auVar36._8_6_;
            auVar53._4_2_ = (short)(uVar85 >> 0x10);
            auVar53._0_4_ = (uint)uVar85;
            auVar53._6_8_ = SUB148(auVar70 << 0x40,6);
            auVar20._8_4_ = 0;
            auVar20._0_8_ = uVar91;
            auVar20._12_2_ = (short)(uVar91 >> 0x30);
            auVar37._8_2_ = (short)(uVar91 >> 0x20);
            auVar37._0_8_ = uVar91;
            auVar37._10_4_ = auVar20._10_4_;
            auVar71._6_8_ = 0;
            auVar71._0_6_ = auVar37._8_6_;
            auVar54._4_2_ = (short)(uVar91 >> 0x10);
            auVar54._0_4_ = (uint)uVar91;
            auVar54._6_8_ = SUB148(auVar71 << 0x40,6);
            pfVar90 = (float *)(param_2 + 0x10 + uVar83 * 4);
            fVar7 = pfVar90[1];
            fVar93 = pfVar90[2];
            fVar94 = pfVar90[3];
            pfVar5 = (float *)(param_2 + 0x10 + uVar83 * 4);
            *pfVar5 = (float)(((uint)uVar85 & 0xffff) + ((uint)uVar91 & 0xffff)) * fVar6 + *pfVar90;
            pfVar5[1] = (float)(auVar53._4_4_ + auVar54._4_4_) * fVar6 + fVar7;
            pfVar5[2] = (float)(auVar36._8_4_ + auVar37._8_4_) * fVar6 + fVar93;
            pfVar5[3] = (float)((auVar19._10_4_ >> 0x10) + (auVar20._10_4_ >> 0x10)) * fVar6 +
                        fVar94;
            uVar83 = uVar83 + 8;
          } while (uVar83 < uVar77);
          if (uVar88 < uVar77 + 1) goto LAB_140198eca;
          uVar83 = uVar88 - uVar77;
          if ((longlong)uVar83 < 4) {
            uVar85 = 0;
          }
          else {
            uVar91 = 0;
            uVar85 = uVar83 & 0xfffffffffffffffc;
            pfVar90 = (float *)(uVar77 * 4 + param_2);
            lVar87 = 0;
            do {
              uVar89 = *(ulonglong *)(lVar87 + lVar78 + uVar77 * 2);
              uVar91 = uVar91 + 4;
              uVar8 = *(ulonglong *)(lVar87 + lVar81 + uVar77 * 2);
              lVar87 = lVar87 + 8;
              auVar21._8_4_ = 0;
              auVar21._0_8_ = uVar89;
              auVar21._12_2_ = (short)(uVar89 >> 0x30);
              auVar38._8_2_ = (short)(uVar89 >> 0x20);
              auVar38._0_8_ = uVar89;
              auVar38._10_4_ = auVar21._10_4_;
              auVar72._6_8_ = 0;
              auVar72._0_6_ = auVar38._8_6_;
              auVar55._4_2_ = (short)(uVar89 >> 0x10);
              auVar55._0_4_ = (uint)uVar89;
              auVar55._6_8_ = SUB148(auVar72 << 0x40,6);
              auVar22._8_4_ = 0;
              auVar22._0_8_ = uVar8;
              auVar22._12_2_ = (short)(uVar8 >> 0x30);
              auVar39._8_2_ = (short)(uVar8 >> 0x20);
              auVar39._0_8_ = uVar8;
              auVar39._10_4_ = auVar22._10_4_;
              auVar73._6_8_ = 0;
              auVar73._0_6_ = auVar39._8_6_;
              auVar56._4_2_ = (short)(uVar8 >> 0x10);
              auVar56._0_4_ = (uint)uVar8;
              auVar56._6_8_ = SUB148(auVar73 << 0x40,6);
              *pfVar90 = (float)(((uint)uVar89 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar6 +
                         *pfVar90;
              pfVar90[1] = (float)(auVar55._4_4_ + auVar56._4_4_) * fVar6 + pfVar90[1];
              pfVar90[2] = (float)(auVar38._8_4_ + auVar39._8_4_) * fVar6 + pfVar90[2];
              pfVar90[3] = (float)((auVar21._10_4_ >> 0x10) + (auVar22._10_4_ >> 0x10)) * fVar6 +
                           pfVar90[3];
              pfVar90 = pfVar90 + 4;
            } while (uVar91 < uVar85);
          }
        }
        if (uVar85 < uVar83) {
          pfVar90 = (float *)(uVar85 * 4 + uVar77 * 4 + param_2);
          do {
            lVar87 = uVar85 * 2;
            lVar84 = uVar85 * 2;
            uVar85 = uVar85 + 1;
            *pfVar90 = (float)((uint)*(ushort *)(lVar80 + lVar82 + param_1 + uVar77 * 2 + lVar87) +
                              (uint)*(ushort *)
                                     (param_1 + lVar86 * 6 + lVar79 * -6 + uVar77 * 2 + lVar84)) *
                       fVar6 + *pfVar90;
            pfVar90 = pfVar90 + 1;
          } while (uVar85 < uVar83);
        }
      }
    }
  }
LAB_140198eca:
  fVar6 = param_4[lVar86];
  if ((longlong)uVar88 < 1) {
    return;
  }
  if ((longlong)uVar88 < 8) {
LAB_140199093:
    uVar77 = 0;
    if (uVar88 == 0) {
      return;
    }
  }
  else {
    uVar83 = param_2 & 0xf;
    if (uVar83 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140199093;
      uVar83 = 0x10 - uVar83 >> 2;
    }
    if ((longlong)uVar88 < (longlong)(uVar83 + 8)) goto LAB_140199093;
    uVar85 = 0;
    uVar77 = uVar88 - (uVar88 - uVar83 & 7);
    if (uVar83 != 0) {
      do {
        *(float *)(param_2 + uVar85 * 4) =
             (float)*(ushort *)(lStack_70 + 6 + uVar85 * 2) * fVar6 +
             *(float *)(param_2 + uVar85 * 4);
        uVar85 = uVar85 + 1;
      } while (uVar85 < uVar83);
    }
    lVar86 = uVar83 * 2;
    do {
      uVar85 = *(ulonglong *)(lVar86 + 6 + lStack_70);
      auVar23._8_4_ = 0;
      auVar23._0_8_ = uVar85;
      auVar23._12_2_ = (short)(uVar85 >> 0x30);
      auVar40._8_2_ = (short)(uVar85 >> 0x20);
      auVar40._0_8_ = uVar85;
      auVar40._10_4_ = auVar23._10_4_;
      auVar74._6_8_ = 0;
      auVar74._0_6_ = auVar40._8_6_;
      auVar57._4_2_ = (short)(uVar85 >> 0x10);
      auVar57._0_4_ = (uint)uVar85;
      auVar57._6_8_ = SUB148(auVar74 << 0x40,6);
      pfVar90 = (float *)(param_2 + uVar83 * 4);
      fVar7 = pfVar90[1];
      fVar93 = pfVar90[2];
      fVar94 = pfVar90[3];
      pfVar5 = (float *)(param_2 + uVar83 * 4);
      *pfVar5 = (float)((uint)uVar85 & 0xffff) * fVar6 + *pfVar90;
      pfVar5[1] = (float)auVar57._4_4_ * fVar6 + fVar7;
      pfVar5[2] = (float)auVar40._8_4_ * fVar6 + fVar93;
      pfVar5[3] = (float)(auVar23._10_4_ >> 0x10) * fVar6 + fVar94;
      uVar85 = *(ulonglong *)(lVar86 + 0xe + lStack_70);
      lVar86 = lVar86 + 0x10;
      auVar24._8_4_ = 0;
      auVar24._0_8_ = uVar85;
      auVar24._12_2_ = (short)(uVar85 >> 0x30);
      auVar41._8_2_ = (short)(uVar85 >> 0x20);
      auVar41._0_8_ = uVar85;
      auVar41._10_4_ = auVar24._10_4_;
      auVar75._6_8_ = 0;
      auVar75._0_6_ = auVar41._8_6_;
      auVar58._4_2_ = (short)(uVar85 >> 0x10);
      auVar58._0_4_ = (uint)uVar85;
      auVar58._6_8_ = SUB148(auVar75 << 0x40,6);
      pfVar90 = (float *)(param_2 + 0x10 + uVar83 * 4);
      fVar7 = pfVar90[1];
      fVar93 = pfVar90[2];
      fVar94 = pfVar90[3];
      pfVar5 = (float *)(param_2 + 0x10 + uVar83 * 4);
      *pfVar5 = (float)((uint)uVar85 & 0xffff) * fVar6 + *pfVar90;
      pfVar5[1] = (float)auVar58._4_4_ * fVar6 + fVar7;
      pfVar5[2] = (float)auVar41._8_4_ * fVar6 + fVar93;
      pfVar5[3] = (float)(auVar24._10_4_ >> 0x10) * fVar6 + fVar94;
      uVar83 = uVar83 + 8;
    } while (uVar83 < uVar77);
    if (uVar88 < uVar77 + 1) {
      return;
    }
    uVar88 = uVar88 - uVar77;
    if (3 < (longlong)uVar88) {
      uVar85 = 0;
      uVar83 = uVar88 & 0xfffffffffffffffc;
      pfVar90 = (float *)(uVar77 * 4 + param_2);
      lVar86 = 0;
      do {
        uVar91 = *(ulonglong *)(lVar86 + 6 + lStack_70 + uVar77 * 2);
        uVar85 = uVar85 + 4;
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar91;
        auVar25._12_2_ = (short)(uVar91 >> 0x30);
        auVar42._8_2_ = (short)(uVar91 >> 0x20);
        auVar42._0_8_ = uVar91;
        auVar42._10_4_ = auVar25._10_4_;
        auVar76._6_8_ = 0;
        auVar76._0_6_ = auVar42._8_6_;
        auVar59._4_2_ = (short)(uVar91 >> 0x10);
        auVar59._0_4_ = (uint)uVar91;
        auVar59._6_8_ = SUB148(auVar76 << 0x40,6);
        lVar86 = lVar86 + 8;
        *pfVar90 = (float)((uint)uVar91 & 0xffff) * fVar6 + *pfVar90;
        pfVar90[1] = (float)auVar59._4_4_ * fVar6 + pfVar90[1];
        pfVar90[2] = (float)auVar42._8_4_ * fVar6 + pfVar90[2];
        pfVar90[3] = (float)(auVar25._10_4_ >> 0x10) * fVar6 + pfVar90[3];
        pfVar90 = pfVar90 + 4;
      } while (uVar85 < uVar83);
      goto LAB_140199029;
    }
  }
  uVar83 = 0;
LAB_140199029:
  if (uVar83 < uVar88) {
    pfVar90 = (float *)(uVar83 * 4 + param_2 + uVar77 * 4);
    do {
      lVar86 = uVar83 * 2;
      uVar83 = uVar83 + 1;
      *pfVar90 = (float)*(ushort *)(lStack_70 + uVar77 * 2 + 6 + lVar86) * fVar6 + *pfVar90;
      pfVar90 = pfVar90 + 1;
    } while (uVar83 < uVar88);
  }
  return;
}

