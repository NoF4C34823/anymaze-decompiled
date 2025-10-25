
void FUN_1400669a0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
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
  ulonglong uVar75;
  longlong lVar76;
  longlong lVar77;
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  longlong lVar83;
  longlong lVar84;
  longlong lVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  longlong lVar88;
  float *pfVar89;
  longlong lVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  longlong lStack_78;
  
  lVar83 = (longlong)(param_5 >> 1);
  lVar80 = lVar83 * 2;
  lStack_78 = param_1 + lVar83 * -2;
  fVar4 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_1400672a9:
      uVar75 = 0;
    }
    else {
      uVar81 = param_2 & 0xf;
      if (uVar81 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1400672a9;
        uVar81 = 0x10 - uVar81 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar81 + 8)) goto LAB_1400672a9;
      uVar82 = 0;
      lVar85 = param_1 + lVar80;
      uVar75 = param_3 - (param_3 - uVar81 & 7);
      lVar77 = lVar83 * -2 + param_1;
      if (uVar81 != 0) {
        do {
          *(float *)(param_2 + uVar82 * 4) =
               (float)((uint)*(ushort *)(lVar77 + uVar82 * 2) +
                      (uint)*(ushort *)(lVar85 + uVar82 * 2)) * fVar4;
          uVar82 = uVar82 + 1;
        } while (uVar82 < uVar81);
      }
      lVar79 = uVar81 * 2;
      do {
        uVar82 = *(ulonglong *)(lVar79 + lVar77);
        uVar87 = *(ulonglong *)(lVar79 + lVar85);
        auVar7._8_4_ = 0;
        auVar7._0_8_ = uVar82;
        auVar7._12_2_ = (short)(uVar82 >> 0x30);
        auVar24._8_2_ = (short)(uVar82 >> 0x20);
        auVar24._0_8_ = uVar82;
        auVar24._10_4_ = auVar7._10_4_;
        auVar58._6_8_ = 0;
        auVar58._0_6_ = auVar24._8_6_;
        auVar41._4_2_ = (short)(uVar82 >> 0x10);
        auVar41._0_4_ = (uint)uVar82;
        auVar41._6_8_ = SUB148(auVar58 << 0x40,6);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar87;
        auVar8._12_2_ = (short)(uVar87 >> 0x30);
        auVar25._8_2_ = (short)(uVar87 >> 0x20);
        auVar25._0_8_ = uVar87;
        auVar25._10_4_ = auVar8._10_4_;
        auVar59._6_8_ = 0;
        auVar59._0_6_ = auVar25._8_6_;
        auVar42._4_2_ = (short)(uVar87 >> 0x10);
        auVar42._0_4_ = (uint)uVar87;
        auVar42._6_8_ = SUB148(auVar59 << 0x40,6);
        pfVar89 = (float *)(param_2 + uVar81 * 4);
        *pfVar89 = (float)(((uint)uVar82 & 0xffff) + ((uint)uVar87 & 0xffff)) * fVar4;
        pfVar89[1] = (float)(auVar41._4_4_ + auVar42._4_4_) * fVar4;
        pfVar89[2] = (float)(auVar24._8_4_ + auVar25._8_4_) * fVar4;
        pfVar89[3] = (float)((auVar7._10_4_ >> 0x10) + (auVar8._10_4_ >> 0x10)) * fVar4;
        uVar82 = *(ulonglong *)(lVar79 + 8 + lVar77);
        uVar87 = *(ulonglong *)(lVar79 + 8 + lVar85);
        lVar79 = lVar79 + 0x10;
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar82;
        auVar9._12_2_ = (short)(uVar82 >> 0x30);
        auVar26._8_2_ = (short)(uVar82 >> 0x20);
        auVar26._0_8_ = uVar82;
        auVar26._10_4_ = auVar9._10_4_;
        auVar60._6_8_ = 0;
        auVar60._0_6_ = auVar26._8_6_;
        auVar43._4_2_ = (short)(uVar82 >> 0x10);
        auVar43._0_4_ = (uint)uVar82;
        auVar43._6_8_ = SUB148(auVar60 << 0x40,6);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar87;
        auVar10._12_2_ = (short)(uVar87 >> 0x30);
        auVar27._8_2_ = (short)(uVar87 >> 0x20);
        auVar27._0_8_ = uVar87;
        auVar27._10_4_ = auVar10._10_4_;
        auVar61._6_8_ = 0;
        auVar61._0_6_ = auVar27._8_6_;
        auVar44._4_2_ = (short)(uVar87 >> 0x10);
        auVar44._0_4_ = (uint)uVar87;
        auVar44._6_8_ = SUB148(auVar61 << 0x40,6);
        pfVar89 = (float *)(param_2 + 0x10 + uVar81 * 4);
        *pfVar89 = (float)(((uint)uVar82 & 0xffff) + ((uint)uVar87 & 0xffff)) * fVar4;
        pfVar89[1] = (float)(auVar43._4_4_ + auVar44._4_4_) * fVar4;
        pfVar89[2] = (float)(auVar26._8_4_ + auVar27._8_4_) * fVar4;
        pfVar89[3] = (float)((auVar9._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * fVar4;
        uVar81 = uVar81 + 8;
      } while (uVar81 < uVar75);
    }
    uVar81 = 0;
    if (uVar75 + 1 <= param_3) {
      do {
        *(float *)(uVar75 * 4 + param_2 + uVar81 * 4) =
             (float)((uint)*(ushort *)(lVar83 * -2 + param_1 + uVar75 * 2 + uVar81 * 2) +
                    (uint)*(ushort *)(param_1 + lVar80 + uVar75 * 2 + uVar81 * 2)) * fVar4;
        uVar81 = uVar81 + 1;
      } while (uVar81 < param_3 - uVar75);
    }
  }
  if (1 < lVar83) {
    lVar85 = 1;
    uVar81 = 0;
    if (lVar83 - 1U >> 1 != 0) {
      lVar85 = param_1 + lVar80;
      uVar75 = param_2 & 0xf;
      do {
        fVar4 = param_4[uVar81 * 2 + 1];
        lVar77 = uVar81 * 4 + lVar83 * -2 + param_1;
        lStack_78 = lVar77 + 4;
        fVar5 = param_4[uVar81 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 4) ||
             (((uVar82 = uVar75, uVar75 != 0 && (uVar82 = 0x10 - uVar75 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar82 + 4))))) {
            uVar87 = 0;
          }
          else {
            uVar86 = 0;
            lVar84 = 0;
            uVar87 = param_3 - (param_3 - uVar82 & 3);
            lVar79 = lVar85;
            if (uVar82 != 0) {
              do {
                lVar88 = lVar84 + 2;
                lVar90 = lVar84 + 4;
                lVar84 = lVar84 + 2;
                *(float *)(param_2 + uVar86 * 4) =
                     (float)((uint)*(ushort *)(lVar88 + lVar77) + (uint)*(ushort *)(lVar79 + -2)) *
                     fVar4 + *(float *)(param_2 + uVar86 * 4) +
                     (float)((uint)*(ushort *)(lVar90 + lVar77) + (uint)*(ushort *)(lVar79 + -4)) *
                     fVar5;
                uVar86 = uVar86 + 1;
                lVar79 = lVar79 + 2;
              } while (uVar86 < uVar82);
            }
            lVar79 = uVar82 * 2;
            do {
              uVar86 = *(ulonglong *)(lVar79 + 2 + lVar77);
              uVar6 = *(ulonglong *)(lVar79 + -2 + lVar85);
              auVar11._8_4_ = 0;
              auVar11._0_8_ = uVar86;
              auVar11._12_2_ = (short)(uVar86 >> 0x30);
              auVar28._8_2_ = (short)(uVar86 >> 0x20);
              auVar28._0_8_ = uVar86;
              auVar28._10_4_ = auVar11._10_4_;
              auVar62._6_8_ = 0;
              auVar62._0_6_ = auVar28._8_6_;
              auVar45._4_2_ = (short)(uVar86 >> 0x10);
              auVar45._0_4_ = (uint)uVar86;
              auVar45._6_8_ = SUB148(auVar62 << 0x40,6);
              auVar12._8_4_ = 0;
              auVar12._0_8_ = uVar6;
              auVar12._12_2_ = (short)(uVar6 >> 0x30);
              auVar29._8_2_ = (short)(uVar6 >> 0x20);
              auVar29._0_8_ = uVar6;
              auVar29._10_4_ = auVar12._10_4_;
              auVar63._6_8_ = 0;
              auVar63._0_6_ = auVar29._8_6_;
              auVar46._4_2_ = (short)(uVar6 >> 0x10);
              auVar46._0_4_ = (uint)uVar6;
              auVar46._6_8_ = SUB148(auVar63 << 0x40,6);
              pfVar89 = (float *)(param_2 + uVar82 * 4);
              fVar91 = (float)(((uint)uVar86 & 0xffff) + ((uint)uVar6 & 0xffff)) * fVar4 + *pfVar89;
              fVar92 = (float)(auVar45._4_4_ + auVar46._4_4_) * fVar4 + pfVar89[1];
              fVar93 = (float)(auVar28._8_4_ + auVar29._8_4_) * fVar4 + pfVar89[2];
              fVar94 = (float)((auVar11._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * fVar4 +
                       pfVar89[3];
              pfVar89 = (float *)(param_2 + uVar82 * 4);
              *pfVar89 = fVar91;
              pfVar89[1] = fVar92;
              pfVar89[2] = fVar93;
              pfVar89[3] = fVar94;
              uVar86 = *(ulonglong *)(lVar79 + 4 + lVar77);
              uVar6 = *(ulonglong *)(lVar79 + -4 + lVar85);
              lVar79 = lVar79 + 8;
              auVar13._8_4_ = 0;
              auVar13._0_8_ = uVar86;
              auVar13._12_2_ = (short)(uVar86 >> 0x30);
              auVar30._8_2_ = (short)(uVar86 >> 0x20);
              auVar30._0_8_ = uVar86;
              auVar30._10_4_ = auVar13._10_4_;
              auVar64._6_8_ = 0;
              auVar64._0_6_ = auVar30._8_6_;
              auVar47._4_2_ = (short)(uVar86 >> 0x10);
              auVar47._0_4_ = (uint)uVar86;
              auVar47._6_8_ = SUB148(auVar64 << 0x40,6);
              auVar14._8_4_ = 0;
              auVar14._0_8_ = uVar6;
              auVar14._12_2_ = (short)(uVar6 >> 0x30);
              auVar31._8_2_ = (short)(uVar6 >> 0x20);
              auVar31._0_8_ = uVar6;
              auVar31._10_4_ = auVar14._10_4_;
              auVar65._6_8_ = 0;
              auVar65._0_6_ = auVar31._8_6_;
              auVar48._4_2_ = (short)(uVar6 >> 0x10);
              auVar48._0_4_ = (uint)uVar6;
              auVar48._6_8_ = SUB148(auVar65 << 0x40,6);
              pfVar89 = (float *)(param_2 + uVar82 * 4);
              *pfVar89 = fVar91 + (float)(((uint)uVar86 & 0xffff) + ((uint)uVar6 & 0xffff)) * fVar5;
              pfVar89[1] = fVar92 + (float)(auVar47._4_4_ + auVar48._4_4_) * fVar5;
              pfVar89[2] = fVar93 + (float)(auVar30._8_4_ + auVar31._8_4_) * fVar5;
              pfVar89[3] = fVar94 + (float)((auVar13._10_4_ >> 0x10) + (auVar14._10_4_ >> 0x10)) *
                                    fVar5;
              uVar82 = uVar82 + 4;
            } while (uVar82 < uVar87);
          }
          lVar79 = uVar87 * 2;
          if (uVar87 < param_3) {
            lVar84 = lVar79 + lVar85;
            do {
              lVar88 = lVar79 + 2;
              puVar1 = (ushort *)(lVar84 + -2);
              puVar2 = (ushort *)(lVar84 + -4);
              lVar84 = lVar84 + 2;
              lVar90 = lVar79 + 4;
              lVar79 = lVar79 + 2;
              *(float *)(param_2 + uVar87 * 4) =
                   (float)((uint)*(ushort *)(lVar88 + lVar77) + (uint)*puVar1) * fVar4 +
                   *(float *)(param_2 + uVar87 * 4) +
                   (float)((uint)*(ushort *)(lVar90 + lVar77) + (uint)*puVar2) * fVar5;
              uVar87 = uVar87 + 1;
            } while (uVar87 < param_3);
          }
        }
        uVar81 = uVar81 + 1;
        lVar85 = lVar85 + -4;
      } while (uVar81 < lVar83 - 1U >> 1);
      lVar85 = uVar81 * 2 + 1;
    }
    if (lVar83 != lVar85) {
      lVar79 = lVar83 * -2;
      lVar77 = lVar85 * 2;
      lStack_78 = lVar77 + param_1 + lVar79;
      fVar4 = param_4[lVar85];
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_14006728a:
          uVar75 = 0;
          if (param_3 == 0) goto LAB_1400670ac;
          uVar82 = 0;
          uVar81 = param_3;
        }
        else {
          uVar81 = param_2 & 0xf;
          if (uVar81 != 0) {
            if ((param_2 & 3) != 0) goto LAB_14006728a;
            uVar81 = 0x10 - uVar81 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar81 + 8)) goto LAB_14006728a;
          lVar88 = param_1 + lVar79 + lVar77;
          uVar75 = param_3 - (param_3 - uVar81 & 7);
          lVar84 = param_1 + lVar80 + lVar85 * -2;
          uVar82 = 0;
          if (uVar81 != 0) {
            do {
              *(float *)(param_2 + uVar82 * 4) =
                   (float)((uint)*(ushort *)(lVar88 + uVar82 * 2) +
                          (uint)*(ushort *)(lVar84 + uVar82 * 2)) * fVar4 +
                   *(float *)(param_2 + uVar82 * 4);
              uVar82 = uVar82 + 1;
            } while (uVar82 < uVar81);
          }
          lVar90 = uVar81 * 2;
          lVar76 = lVar79 + lVar77 + param_1;
          lVar78 = lVar85 * -2 + lVar80 + param_1;
          do {
            uVar82 = *(ulonglong *)(lVar90 + lVar88);
            uVar87 = *(ulonglong *)(lVar90 + lVar84);
            auVar15._8_4_ = 0;
            auVar15._0_8_ = uVar82;
            auVar15._12_2_ = (short)(uVar82 >> 0x30);
            auVar32._8_2_ = (short)(uVar82 >> 0x20);
            auVar32._0_8_ = uVar82;
            auVar32._10_4_ = auVar15._10_4_;
            auVar66._6_8_ = 0;
            auVar66._0_6_ = auVar32._8_6_;
            auVar49._4_2_ = (short)(uVar82 >> 0x10);
            auVar49._0_4_ = (uint)uVar82;
            auVar49._6_8_ = SUB148(auVar66 << 0x40,6);
            auVar16._8_4_ = 0;
            auVar16._0_8_ = uVar87;
            auVar16._12_2_ = (short)(uVar87 >> 0x30);
            auVar33._8_2_ = (short)(uVar87 >> 0x20);
            auVar33._0_8_ = uVar87;
            auVar33._10_4_ = auVar16._10_4_;
            auVar67._6_8_ = 0;
            auVar67._0_6_ = auVar33._8_6_;
            auVar50._4_2_ = (short)(uVar87 >> 0x10);
            auVar50._0_4_ = (uint)uVar87;
            auVar50._6_8_ = SUB148(auVar67 << 0x40,6);
            pfVar89 = (float *)(param_2 + uVar81 * 4);
            fVar5 = pfVar89[1];
            fVar91 = pfVar89[2];
            fVar92 = pfVar89[3];
            pfVar3 = (float *)(param_2 + uVar81 * 4);
            *pfVar3 = (float)(((uint)uVar82 & 0xffff) + ((uint)uVar87 & 0xffff)) * fVar4 + *pfVar89;
            pfVar3[1] = (float)(auVar49._4_4_ + auVar50._4_4_) * fVar4 + fVar5;
            pfVar3[2] = (float)(auVar32._8_4_ + auVar33._8_4_) * fVar4 + fVar91;
            pfVar3[3] = (float)((auVar15._10_4_ >> 0x10) + (auVar16._10_4_ >> 0x10)) * fVar4 +
                        fVar92;
            uVar82 = *(ulonglong *)(lVar90 + 8 + lVar76);
            uVar87 = *(ulonglong *)(lVar90 + 8 + lVar78);
            lVar90 = lVar90 + 0x10;
            auVar17._8_4_ = 0;
            auVar17._0_8_ = uVar82;
            auVar17._12_2_ = (short)(uVar82 >> 0x30);
            auVar34._8_2_ = (short)(uVar82 >> 0x20);
            auVar34._0_8_ = uVar82;
            auVar34._10_4_ = auVar17._10_4_;
            auVar68._6_8_ = 0;
            auVar68._0_6_ = auVar34._8_6_;
            auVar51._4_2_ = (short)(uVar82 >> 0x10);
            auVar51._0_4_ = (uint)uVar82;
            auVar51._6_8_ = SUB148(auVar68 << 0x40,6);
            auVar18._8_4_ = 0;
            auVar18._0_8_ = uVar87;
            auVar18._12_2_ = (short)(uVar87 >> 0x30);
            auVar35._8_2_ = (short)(uVar87 >> 0x20);
            auVar35._0_8_ = uVar87;
            auVar35._10_4_ = auVar18._10_4_;
            auVar69._6_8_ = 0;
            auVar69._0_6_ = auVar35._8_6_;
            auVar52._4_2_ = (short)(uVar87 >> 0x10);
            auVar52._0_4_ = (uint)uVar87;
            auVar52._6_8_ = SUB148(auVar69 << 0x40,6);
            pfVar89 = (float *)(param_2 + 0x10 + uVar81 * 4);
            fVar5 = pfVar89[1];
            fVar91 = pfVar89[2];
            fVar92 = pfVar89[3];
            pfVar3 = (float *)(param_2 + 0x10 + uVar81 * 4);
            *pfVar3 = (float)(((uint)uVar82 & 0xffff) + ((uint)uVar87 & 0xffff)) * fVar4 + *pfVar89;
            pfVar3[1] = (float)(auVar51._4_4_ + auVar52._4_4_) * fVar4 + fVar5;
            pfVar3[2] = (float)(auVar34._8_4_ + auVar35._8_4_) * fVar4 + fVar91;
            pfVar3[3] = (float)((auVar17._10_4_ >> 0x10) + (auVar18._10_4_ >> 0x10)) * fVar4 +
                        fVar92;
            uVar81 = uVar81 + 8;
          } while (uVar81 < uVar75);
          if (param_3 < uVar75 + 1) goto LAB_1400670ac;
          uVar81 = param_3 - uVar75;
          if ((longlong)uVar81 < 4) {
            uVar82 = 0;
          }
          else {
            uVar87 = 0;
            uVar82 = uVar81 & 0xfffffffffffffffc;
            pfVar89 = (float *)(uVar75 * 4 + param_2);
            lVar84 = 0;
            do {
              uVar86 = *(ulonglong *)(lVar84 + lVar76 + uVar75 * 2);
              uVar87 = uVar87 + 4;
              uVar6 = *(ulonglong *)(lVar84 + lVar78 + uVar75 * 2);
              lVar84 = lVar84 + 8;
              auVar19._8_4_ = 0;
              auVar19._0_8_ = uVar86;
              auVar19._12_2_ = (short)(uVar86 >> 0x30);
              auVar36._8_2_ = (short)(uVar86 >> 0x20);
              auVar36._0_8_ = uVar86;
              auVar36._10_4_ = auVar19._10_4_;
              auVar70._6_8_ = 0;
              auVar70._0_6_ = auVar36._8_6_;
              auVar53._4_2_ = (short)(uVar86 >> 0x10);
              auVar53._0_4_ = (uint)uVar86;
              auVar53._6_8_ = SUB148(auVar70 << 0x40,6);
              auVar20._8_4_ = 0;
              auVar20._0_8_ = uVar6;
              auVar20._12_2_ = (short)(uVar6 >> 0x30);
              auVar37._8_2_ = (short)(uVar6 >> 0x20);
              auVar37._0_8_ = uVar6;
              auVar37._10_4_ = auVar20._10_4_;
              auVar71._6_8_ = 0;
              auVar71._0_6_ = auVar37._8_6_;
              auVar54._4_2_ = (short)(uVar6 >> 0x10);
              auVar54._0_4_ = (uint)uVar6;
              auVar54._6_8_ = SUB148(auVar71 << 0x40,6);
              *pfVar89 = (float)(((uint)uVar86 & 0xffff) + ((uint)uVar6 & 0xffff)) * fVar4 +
                         *pfVar89;
              pfVar89[1] = (float)(auVar53._4_4_ + auVar54._4_4_) * fVar4 + pfVar89[1];
              pfVar89[2] = (float)(auVar36._8_4_ + auVar37._8_4_) * fVar4 + pfVar89[2];
              pfVar89[3] = (float)((auVar19._10_4_ >> 0x10) + (auVar20._10_4_ >> 0x10)) * fVar4 +
                           pfVar89[3];
              pfVar89 = pfVar89 + 4;
            } while (uVar87 < uVar82);
          }
        }
        if (uVar82 < uVar81) {
          pfVar89 = (float *)(uVar82 * 4 + uVar75 * 4 + param_2);
          do {
            lVar88 = uVar82 * 2;
            lVar84 = uVar82 * 2;
            uVar82 = uVar82 + 1;
            *pfVar89 = (float)((uint)*(ushort *)(lVar79 + lVar77 + param_1 + uVar75 * 2 + lVar88) +
                              (uint)*(ushort *)
                                     (param_1 + lVar80 + lVar85 * -2 + uVar75 * 2 + lVar84)) * fVar4
                       + *pfVar89;
            pfVar89 = pfVar89 + 1;
          } while (uVar82 < uVar81);
        }
      }
    }
  }
LAB_1400670ac:
  fVar4 = param_4[lVar83];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_140067276:
    uVar75 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar81 = param_2 & 0xf;
    if (uVar81 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140067276;
      uVar81 = 0x10 - uVar81 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar81 + 8)) goto LAB_140067276;
    uVar82 = 0;
    uVar75 = param_3 - (param_3 - uVar81 & 7);
    if (uVar81 != 0) {
      do {
        *(float *)(param_2 + uVar82 * 4) =
             (float)*(ushort *)(lStack_78 + 2 + uVar82 * 2) * fVar4 +
             *(float *)(param_2 + uVar82 * 4);
        uVar82 = uVar82 + 1;
      } while (uVar82 < uVar81);
    }
    lVar80 = uVar81 * 2;
    do {
      uVar82 = *(ulonglong *)(lVar80 + 2 + lStack_78);
      auVar21._8_4_ = 0;
      auVar21._0_8_ = uVar82;
      auVar21._12_2_ = (short)(uVar82 >> 0x30);
      auVar38._8_2_ = (short)(uVar82 >> 0x20);
      auVar38._0_8_ = uVar82;
      auVar38._10_4_ = auVar21._10_4_;
      auVar72._6_8_ = 0;
      auVar72._0_6_ = auVar38._8_6_;
      auVar55._4_2_ = (short)(uVar82 >> 0x10);
      auVar55._0_4_ = (uint)uVar82;
      auVar55._6_8_ = SUB148(auVar72 << 0x40,6);
      pfVar89 = (float *)(param_2 + uVar81 * 4);
      fVar5 = pfVar89[1];
      fVar91 = pfVar89[2];
      fVar92 = pfVar89[3];
      pfVar3 = (float *)(param_2 + uVar81 * 4);
      *pfVar3 = (float)((uint)uVar82 & 0xffff) * fVar4 + *pfVar89;
      pfVar3[1] = (float)auVar55._4_4_ * fVar4 + fVar5;
      pfVar3[2] = (float)auVar38._8_4_ * fVar4 + fVar91;
      pfVar3[3] = (float)(auVar21._10_4_ >> 0x10) * fVar4 + fVar92;
      uVar82 = *(ulonglong *)(lVar80 + 10 + lStack_78);
      lVar80 = lVar80 + 0x10;
      auVar22._8_4_ = 0;
      auVar22._0_8_ = uVar82;
      auVar22._12_2_ = (short)(uVar82 >> 0x30);
      auVar39._8_2_ = (short)(uVar82 >> 0x20);
      auVar39._0_8_ = uVar82;
      auVar39._10_4_ = auVar22._10_4_;
      auVar73._6_8_ = 0;
      auVar73._0_6_ = auVar39._8_6_;
      auVar56._4_2_ = (short)(uVar82 >> 0x10);
      auVar56._0_4_ = (uint)uVar82;
      auVar56._6_8_ = SUB148(auVar73 << 0x40,6);
      pfVar89 = (float *)(param_2 + 0x10 + uVar81 * 4);
      fVar5 = pfVar89[1];
      fVar91 = pfVar89[2];
      fVar92 = pfVar89[3];
      pfVar3 = (float *)(param_2 + 0x10 + uVar81 * 4);
      *pfVar3 = (float)((uint)uVar82 & 0xffff) * fVar4 + *pfVar89;
      pfVar3[1] = (float)auVar56._4_4_ * fVar4 + fVar5;
      pfVar3[2] = (float)auVar39._8_4_ * fVar4 + fVar91;
      pfVar3[3] = (float)(auVar22._10_4_ >> 0x10) * fVar4 + fVar92;
      uVar81 = uVar81 + 8;
    } while (uVar81 < uVar75);
    if (param_3 < uVar75 + 1) {
      return;
    }
    param_3 = param_3 - uVar75;
    if (3 < (longlong)param_3) {
      uVar82 = 0;
      uVar81 = param_3 & 0xfffffffffffffffc;
      pfVar89 = (float *)(uVar75 * 4 + param_2);
      lVar80 = 0;
      do {
        uVar87 = *(ulonglong *)(lVar80 + 2 + lStack_78 + uVar75 * 2);
        uVar82 = uVar82 + 4;
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar87;
        auVar23._12_2_ = (short)(uVar87 >> 0x30);
        auVar40._8_2_ = (short)(uVar87 >> 0x20);
        auVar40._0_8_ = uVar87;
        auVar40._10_4_ = auVar23._10_4_;
        auVar74._6_8_ = 0;
        auVar74._0_6_ = auVar40._8_6_;
        auVar57._4_2_ = (short)(uVar87 >> 0x10);
        auVar57._0_4_ = (uint)uVar87;
        auVar57._6_8_ = SUB148(auVar74 << 0x40,6);
        lVar80 = lVar80 + 8;
        *pfVar89 = (float)((uint)uVar87 & 0xffff) * fVar4 + *pfVar89;
        pfVar89[1] = (float)auVar57._4_4_ * fVar4 + pfVar89[1];
        pfVar89[2] = (float)auVar40._8_4_ * fVar4 + pfVar89[2];
        pfVar89[3] = (float)(auVar23._10_4_ >> 0x10) * fVar4 + pfVar89[3];
        pfVar89 = pfVar89 + 4;
      } while (uVar82 < uVar81);
      goto LAB_140067209;
    }
  }
  uVar81 = 0;
LAB_140067209:
  if (uVar81 < param_3) {
    pfVar89 = (float *)(uVar81 * 4 + param_2 + uVar75 * 4);
    do {
      lVar80 = uVar81 * 2;
      uVar81 = uVar81 + 1;
      *pfVar89 = (float)*(ushort *)(lStack_78 + uVar75 * 2 + 2 + lVar80) * fVar4 + *pfVar89;
      pfVar89 = pfVar89 + 1;
    } while (uVar81 < param_3);
  }
  return;
}

