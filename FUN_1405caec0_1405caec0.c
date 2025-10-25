
void FUN_1405caec0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
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
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [14];
  undefined1 auVar75 [14];
  undefined1 auVar76 [14];
  undefined1 auVar77 [14];
  undefined1 auVar78 [14];
  undefined1 auVar79 [14];
  undefined1 auVar80 [14];
  undefined1 auVar81 [14];
  undefined1 auVar82 [14];
  undefined1 auVar83 [14];
  undefined1 auVar84 [14];
  undefined1 auVar85 [14];
  undefined1 auVar86 [14];
  undefined1 auVar87 [14];
  undefined1 auVar88 [14];
  undefined1 auVar89 [14];
  undefined1 auVar90 [14];
  undefined1 auVar91 [14];
  undefined1 auVar92 [14];
  float *pfVar93;
  ulonglong uVar94;
  ulonglong uVar95;
  longlong lVar96;
  longlong lVar97;
  ulonglong uVar98;
  ulonglong uVar99;
  ulonglong uVar100;
  longlong lVar101;
  ulonglong uVar102;
  longlong lVar103;
  longlong lVar104;
  longlong lVar105;
  longlong lVar106;
  undefined1 auVar107 [16];
  longlong lStack_78;
  
  uVar100 = param_3 * 3;
  lVar104 = (longlong)(param_5 >> 1);
  fVar6 = *param_4;
  lStack_78 = lVar104 * -6 + param_1;
  if (0 < (longlong)uVar100) {
    if ((longlong)uVar100 < 8) {
LAB_1405cb810:
      uVar94 = 0;
      if (uVar100 == 0) goto LAB_1405cb0c3;
      uVar95 = 0;
      uVar98 = uVar100;
    }
    else {
      uVar98 = param_2 & 0xf;
      if (uVar98 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1405cb810;
        uVar98 = 0x10 - uVar98 >> 2;
      }
      if ((longlong)uVar100 < (longlong)(uVar98 + 8)) goto LAB_1405cb810;
      lVar96 = lVar104 * -6 + param_1;
      uVar94 = uVar100 - (uVar100 - uVar98 & 7);
      uVar95 = 0;
      lVar106 = param_1 + lVar104 * 6;
      if (uVar98 != 0) {
        do {
          *(float *)(param_2 + uVar95 * 4) =
               (float)((uint)*(ushort *)(lVar96 + uVar95 * 2) +
                      (uint)*(ushort *)(lVar106 + uVar95 * 2)) * fVar6;
          uVar95 = uVar95 + 1;
        } while (uVar95 < uVar98);
      }
      do {
        uVar95 = *(ulonglong *)(lVar96 + uVar98 * 2);
        uVar99 = *(ulonglong *)(lVar106 + uVar98 * 2);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar95;
        auVar11._12_2_ = (short)(uVar95 >> 0x30);
        auVar30._8_2_ = (short)(uVar95 >> 0x20);
        auVar30._0_8_ = uVar95;
        auVar30._10_4_ = auVar11._10_4_;
        auVar74._6_8_ = 0;
        auVar74._0_6_ = auVar30._8_6_;
        auVar49._4_2_ = (short)(uVar95 >> 0x10);
        auVar49._0_4_ = (uint)uVar95;
        auVar49._6_8_ = SUB148(auVar74 << 0x40,6);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar99;
        auVar12._12_2_ = (short)(uVar99 >> 0x30);
        auVar31._8_2_ = (short)(uVar99 >> 0x20);
        auVar31._0_8_ = uVar99;
        auVar31._10_4_ = auVar12._10_4_;
        auVar75._6_8_ = 0;
        auVar75._0_6_ = auVar31._8_6_;
        auVar50._4_2_ = (short)(uVar99 >> 0x10);
        auVar50._0_4_ = (uint)uVar99;
        auVar50._6_8_ = SUB148(auVar75 << 0x40,6);
        uVar102 = *(ulonglong *)(lVar106 + 8 + uVar98 * 2);
        uVar8 = *(ulonglong *)(lVar96 + 8 + uVar98 * 2);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar8;
        auVar13._12_2_ = (short)(uVar8 >> 0x30);
        auVar32._8_2_ = (short)(uVar8 >> 0x20);
        auVar32._0_8_ = uVar8;
        auVar32._10_4_ = auVar13._10_4_;
        auVar76._6_8_ = 0;
        auVar76._0_6_ = auVar32._8_6_;
        auVar51._4_2_ = (short)(uVar8 >> 0x10);
        auVar51._0_4_ = (uint)uVar8;
        auVar51._6_8_ = SUB148(auVar76 << 0x40,6);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar102;
        auVar14._12_2_ = (short)(uVar102 >> 0x30);
        auVar33._8_2_ = (short)(uVar102 >> 0x20);
        auVar33._0_8_ = uVar102;
        auVar33._10_4_ = auVar14._10_4_;
        auVar77._6_8_ = 0;
        auVar77._0_6_ = auVar33._8_6_;
        auVar52._4_2_ = (short)(uVar102 >> 0x10);
        auVar52._0_4_ = (uint)uVar102;
        auVar52._6_8_ = SUB148(auVar77 << 0x40,6);
        auVar107._0_4_ = (float)(((uint)uVar8 & 0xffff) + ((uint)uVar102 & 0xffff)) * fVar6;
        auVar107._4_4_ = (float)(auVar51._4_4_ + auVar52._4_4_) * fVar6;
        auVar107._8_4_ = (float)(auVar32._8_4_ + auVar33._8_4_) * fVar6;
        auVar107._12_4_ = (float)((auVar13._10_4_ >> 0x10) + (auVar14._10_4_ >> 0x10)) * fVar6;
        pfVar93 = (float *)(param_2 + uVar98 * 4);
        *pfVar93 = (float)(((uint)uVar95 & 0xffff) + ((uint)uVar99 & 0xffff)) * fVar6;
        pfVar93[1] = (float)(auVar49._4_4_ + auVar50._4_4_) * fVar6;
        pfVar93[2] = (float)(auVar30._8_4_ + auVar31._8_4_) * fVar6;
        pfVar93[3] = (float)((auVar11._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * fVar6;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar98 * 4) = auVar107;
        uVar98 = uVar98 + 8;
      } while (uVar98 < uVar94);
      if (uVar100 < uVar94 + 1) goto LAB_1405cb0c3;
      uVar98 = uVar100 - uVar94;
      if ((longlong)uVar98 < 4) {
        uVar95 = 0;
      }
      else {
        uVar99 = 0;
        uVar95 = uVar98 & 0xfffffffffffffffc;
        do {
          uVar102 = *(ulonglong *)(lVar96 + uVar94 * 2 + uVar99 * 2);
          uVar8 = *(ulonglong *)(lVar106 + uVar94 * 2 + uVar99 * 2);
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar102;
          auVar15._12_2_ = (short)(uVar102 >> 0x30);
          auVar34._8_2_ = (short)(uVar102 >> 0x20);
          auVar34._0_8_ = uVar102;
          auVar34._10_4_ = auVar15._10_4_;
          auVar78._6_8_ = 0;
          auVar78._0_6_ = auVar34._8_6_;
          auVar53._4_2_ = (short)(uVar102 >> 0x10);
          auVar53._0_4_ = (uint)uVar102;
          auVar53._6_8_ = SUB148(auVar78 << 0x40,6);
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar8;
          auVar16._12_2_ = (short)(uVar8 >> 0x30);
          auVar35._8_2_ = (short)(uVar8 >> 0x20);
          auVar35._0_8_ = uVar8;
          auVar35._10_4_ = auVar16._10_4_;
          auVar79._6_8_ = 0;
          auVar79._0_6_ = auVar35._8_6_;
          auVar54._4_2_ = (short)(uVar8 >> 0x10);
          auVar54._0_4_ = (uint)uVar8;
          auVar54._6_8_ = SUB148(auVar79 << 0x40,6);
          pfVar93 = (float *)(param_2 + uVar94 * 4 + uVar99 * 4);
          *pfVar93 = (float)(((uint)uVar102 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar6;
          pfVar93[1] = (float)(auVar53._4_4_ + auVar54._4_4_) * fVar6;
          pfVar93[2] = (float)(auVar34._8_4_ + auVar35._8_4_) * fVar6;
          pfVar93[3] = (float)((auVar15._10_4_ >> 0x10) + (auVar16._10_4_ >> 0x10)) * fVar6;
          uVar99 = uVar99 + 4;
        } while (uVar99 < uVar95);
      }
    }
    if (uVar95 < uVar98) {
      do {
        *(float *)(param_2 + uVar94 * 4 + uVar95 * 4) =
             (float)((uint)*(ushort *)(lVar104 * -6 + param_1 + uVar94 * 2 + uVar95 * 2) +
                    (uint)*(ushort *)(param_1 + lVar104 * 6 + uVar94 * 2 + uVar95 * 2)) * fVar6;
        uVar95 = uVar95 + 1;
      } while (uVar95 < uVar98);
    }
  }
LAB_1405cb0c3:
  if (1 < lVar104) {
    lVar106 = 1;
    lVar96 = 0;
    if (lVar104 - 1U >> 1 != 0) {
      uVar94 = param_2 & 0xf;
      lVar97 = lVar104 * -6 + param_1;
      lVar106 = param_1 + lVar104 * 6;
      uVar98 = 0;
      do {
        uVar95 = uVar98;
        fVar6 = param_4[uVar95 * 2 + 1];
        lStack_78 = lVar97 + 0xc;
        fVar7 = param_4[uVar95 * 2 + 2];
        if (0 < (longlong)uVar100) {
          if (((longlong)uVar100 < 4) ||
             (((uVar98 = uVar94, uVar94 != 0 && (uVar98 = 0x10 - uVar94 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar100 < (longlong)(uVar98 + 4))))) {
            uVar99 = 0;
          }
          else {
            uVar102 = 0;
            uVar99 = uVar100 - (uVar100 - uVar98 & 3);
            lVar103 = lVar106;
            lVar105 = lVar97;
            if (uVar98 != 0) {
              do {
                *(float *)(param_2 + uVar102 * 4) =
                     (float)((uint)*(ushort *)(lVar105 + 6) + (uint)*(ushort *)(lVar103 + -6)) *
                     fVar6 + *(float *)(param_2 + uVar102 * 4) +
                     (float)((uint)*(ushort *)(lVar105 + 0xc) + (uint)*(ushort *)(lVar103 + -0xc)) *
                     fVar7;
                uVar102 = uVar102 + 1;
                lVar103 = lVar103 + 2;
                lVar105 = lVar105 + 2;
              } while (uVar102 < uVar98);
            }
            lVar105 = uVar98 * 2;
            lVar103 = lVar96 + uVar98 * 2;
            lVar101 = lVar104 * -6 + param_1;
            do {
              uVar102 = *(ulonglong *)(lVar105 + -0xc + lVar106);
              uVar8 = *(ulonglong *)(lVar103 + 0xc + lVar101);
              auVar17._8_4_ = 0;
              auVar17._0_8_ = uVar102;
              auVar17._12_2_ = (short)(uVar102 >> 0x30);
              auVar36._8_2_ = (short)(uVar102 >> 0x20);
              auVar36._0_8_ = uVar102;
              auVar36._10_4_ = auVar17._10_4_;
              auVar80._6_8_ = 0;
              auVar80._0_6_ = auVar36._8_6_;
              auVar55._4_2_ = (short)(uVar102 >> 0x10);
              auVar55._0_4_ = (uint)uVar102;
              auVar55._6_8_ = SUB148(auVar80 << 0x40,6);
              auVar18._8_4_ = 0;
              auVar18._0_8_ = uVar8;
              auVar18._12_2_ = (short)(uVar8 >> 0x30);
              auVar37._8_2_ = (short)(uVar8 >> 0x20);
              auVar37._0_8_ = uVar8;
              auVar37._10_4_ = auVar18._10_4_;
              auVar81._6_8_ = 0;
              auVar81._0_6_ = auVar37._8_6_;
              auVar56._4_2_ = (short)(uVar8 >> 0x10);
              auVar56._0_4_ = (uint)uVar8;
              auVar56._6_8_ = SUB148(auVar81 << 0x40,6);
              uVar9 = *(ulonglong *)(lVar105 + -6 + lVar106);
              uVar10 = *(ulonglong *)(lVar103 + 6 + lVar101);
              lVar105 = lVar105 + 8;
              auVar19._8_4_ = 0;
              auVar19._0_8_ = uVar9;
              auVar19._12_2_ = (short)(uVar9 >> 0x30);
              auVar38._8_2_ = (short)(uVar9 >> 0x20);
              auVar38._0_8_ = uVar9;
              auVar38._10_4_ = auVar19._10_4_;
              auVar82._6_8_ = 0;
              auVar82._0_6_ = auVar38._8_6_;
              auVar57._4_2_ = (short)(uVar9 >> 0x10);
              auVar57._0_4_ = (uint)uVar9;
              auVar57._6_8_ = SUB148(auVar82 << 0x40,6);
              lVar103 = lVar103 + 8;
              auVar20._8_4_ = 0;
              auVar20._0_8_ = uVar10;
              auVar20._12_2_ = (short)(uVar10 >> 0x30);
              auVar39._8_2_ = (short)(uVar10 >> 0x20);
              auVar39._0_8_ = uVar10;
              auVar39._10_4_ = auVar20._10_4_;
              auVar83._6_8_ = 0;
              auVar83._0_6_ = auVar39._8_6_;
              auVar58._4_2_ = (short)(uVar10 >> 0x10);
              auVar58._0_4_ = (uint)uVar10;
              auVar58._6_8_ = SUB148(auVar83 << 0x40,6);
              pfVar93 = (float *)(param_2 + uVar98 * 4);
              fVar68 = pfVar93[1];
              fVar69 = pfVar93[2];
              fVar70 = pfVar93[3];
              pfVar5 = (float *)(param_2 + uVar98 * 4);
              *pfVar5 = (float)(((uint)uVar10 & 0xffff) + ((uint)uVar9 & 0xffff)) * fVar6 + *pfVar93
                        + (float)(((uint)uVar8 & 0xffff) + ((uint)uVar102 & 0xffff)) * fVar7;
              pfVar5[1] = (float)(auVar58._4_4_ + auVar57._4_4_) * fVar6 + fVar68 +
                          (float)(auVar56._4_4_ + auVar55._4_4_) * fVar7;
              pfVar5[2] = (float)(auVar39._8_4_ + auVar38._8_4_) * fVar6 + fVar69 +
                          (float)(auVar37._8_4_ + auVar36._8_4_) * fVar7;
              pfVar5[3] = (float)((auVar20._10_4_ >> 0x10) + (auVar19._10_4_ >> 0x10)) * fVar6 +
                          fVar70 + (float)((auVar18._10_4_ >> 0x10) + (auVar17._10_4_ >> 0x10)) *
                                   fVar7;
              uVar98 = uVar98 + 4;
            } while (uVar98 < uVar99);
          }
          lVar103 = lVar97 + uVar99 * 2;
          if (uVar99 < uVar100) {
            lVar105 = lVar106 + uVar99 * 2;
            do {
              puVar1 = (ushort *)(lVar103 + 6);
              puVar2 = (ushort *)(lVar105 + -6);
              puVar3 = (ushort *)(lVar105 + -0xc);
              puVar4 = (ushort *)(lVar103 + 0xc);
              lVar103 = lVar103 + 2;
              lVar105 = lVar105 + 2;
              *(float *)(param_2 + uVar99 * 4) =
                   (float)((uint)*puVar1 + (uint)*puVar2) * fVar6 + *(float *)(param_2 + uVar99 * 4)
                   + (float)((uint)*puVar4 + (uint)*puVar3) * fVar7;
              uVar99 = uVar99 + 1;
            } while (uVar99 < uVar100);
          }
        }
        uVar98 = uVar95 + 1;
        lVar97 = lVar97 + 0xc;
        lVar96 = lVar96 + 0xc;
        lVar106 = lVar106 + -0xc;
      } while (uVar98 < lVar104 - 1U >> 1);
      lVar106 = uVar95 + 2 + uVar98;
    }
    if (lVar104 != lVar106) {
      fVar6 = param_4[lVar106];
      lVar96 = lVar104 * -6;
      lStack_78 = param_1 + lVar96 + lVar106 * 6;
      if (0 < (longlong)uVar100) {
        if ((longlong)uVar100 < 8) {
LAB_1405cb7eb:
          uVar94 = 0;
          if (uVar100 == 0) goto LAB_1405cb62c;
          uVar95 = 0;
          uVar98 = uVar100;
        }
        else {
          uVar98 = param_2 & 0xf;
          if (uVar98 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1405cb7eb;
            uVar98 = 0x10 - uVar98 >> 2;
          }
          if ((longlong)uVar100 < (longlong)(uVar98 + 8)) goto LAB_1405cb7eb;
          uVar94 = uVar100 - (uVar100 - uVar98 & 7);
          lVar97 = param_1 + lVar104 * 6 + lVar106 * -6;
          uVar95 = 0;
          if (uVar98 != 0) {
            do {
              *(float *)(param_2 + uVar95 * 4) =
                   (float)((uint)*(ushort *)(lStack_78 + uVar95 * 2) +
                          (uint)*(ushort *)(lVar97 + uVar95 * 2)) * fVar6 +
                   *(float *)(param_2 + uVar95 * 4);
              uVar95 = uVar95 + 1;
            } while (uVar95 < uVar98);
          }
          lVar103 = lVar106 * -6 + lVar104 * 6 + param_1;
          lVar105 = lVar96 + lVar106 * 6 + param_1;
          do {
            uVar95 = *(ulonglong *)(lStack_78 + uVar98 * 2);
            uVar99 = *(ulonglong *)(lVar97 + uVar98 * 2);
            auVar21._8_4_ = 0;
            auVar21._0_8_ = uVar95;
            auVar21._12_2_ = (short)(uVar95 >> 0x30);
            auVar40._8_2_ = (short)(uVar95 >> 0x20);
            auVar40._0_8_ = uVar95;
            auVar40._10_4_ = auVar21._10_4_;
            auVar84._6_8_ = 0;
            auVar84._0_6_ = auVar40._8_6_;
            auVar59._4_2_ = (short)(uVar95 >> 0x10);
            auVar59._0_4_ = (uint)uVar95;
            auVar59._6_8_ = SUB148(auVar84 << 0x40,6);
            auVar22._8_4_ = 0;
            auVar22._0_8_ = uVar99;
            auVar22._12_2_ = (short)(uVar99 >> 0x30);
            auVar41._8_2_ = (short)(uVar99 >> 0x20);
            auVar41._0_8_ = uVar99;
            auVar41._10_4_ = auVar22._10_4_;
            auVar85._6_8_ = 0;
            auVar85._0_6_ = auVar41._8_6_;
            auVar60._4_2_ = (short)(uVar99 >> 0x10);
            auVar60._0_4_ = (uint)uVar99;
            auVar60._6_8_ = SUB148(auVar85 << 0x40,6);
            uVar102 = *(ulonglong *)(lVar105 + 8 + uVar98 * 2);
            uVar8 = *(ulonglong *)(lVar103 + 8 + uVar98 * 2);
            auVar23._8_4_ = 0;
            auVar23._0_8_ = uVar102;
            auVar23._12_2_ = (short)(uVar102 >> 0x30);
            auVar42._8_2_ = (short)(uVar102 >> 0x20);
            auVar42._0_8_ = uVar102;
            auVar42._10_4_ = auVar23._10_4_;
            auVar86._6_8_ = 0;
            auVar86._0_6_ = auVar42._8_6_;
            auVar61._4_2_ = (short)(uVar102 >> 0x10);
            auVar61._0_4_ = (uint)uVar102;
            auVar61._6_8_ = SUB148(auVar86 << 0x40,6);
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar8;
            auVar24._12_2_ = (short)(uVar8 >> 0x30);
            auVar43._8_2_ = (short)(uVar8 >> 0x20);
            auVar43._0_8_ = uVar8;
            auVar43._10_4_ = auVar24._10_4_;
            auVar87._6_8_ = 0;
            auVar87._0_6_ = auVar43._8_6_;
            auVar62._4_2_ = (short)(uVar8 >> 0x10);
            auVar62._0_4_ = (uint)uVar8;
            auVar62._6_8_ = SUB148(auVar87 << 0x40,6);
            pfVar93 = (float *)(param_2 + uVar98 * 4);
            fVar7 = pfVar93[1];
            fVar68 = pfVar93[2];
            fVar69 = pfVar93[3];
            pfVar5 = (float *)(param_2 + 0x10 + uVar98 * 4);
            fVar70 = *pfVar5;
            fVar71 = pfVar5[1];
            fVar72 = pfVar5[2];
            fVar73 = pfVar5[3];
            pfVar5 = (float *)(param_2 + uVar98 * 4);
            *pfVar5 = (float)(((uint)uVar95 & 0xffff) + ((uint)uVar99 & 0xffff)) * fVar6 + *pfVar93;
            pfVar5[1] = (float)(auVar59._4_4_ + auVar60._4_4_) * fVar6 + fVar7;
            pfVar5[2] = (float)(auVar40._8_4_ + auVar41._8_4_) * fVar6 + fVar68;
            pfVar5[3] = (float)((auVar21._10_4_ >> 0x10) + (auVar22._10_4_ >> 0x10)) * fVar6 +
                        fVar69;
            pfVar93 = (float *)(param_2 + 0x10 + uVar98 * 4);
            *pfVar93 = (float)(((uint)uVar102 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar6 + fVar70;
            pfVar93[1] = (float)(auVar61._4_4_ + auVar62._4_4_) * fVar6 + fVar71;
            pfVar93[2] = (float)(auVar42._8_4_ + auVar43._8_4_) * fVar6 + fVar72;
            pfVar93[3] = (float)((auVar23._10_4_ >> 0x10) + (auVar24._10_4_ >> 0x10)) * fVar6 +
                         fVar73;
            uVar98 = uVar98 + 8;
          } while (uVar98 < uVar94);
          if (uVar100 < uVar94 + 1) goto LAB_1405cb62c;
          uVar98 = uVar100 - uVar94;
          if ((longlong)uVar98 < 4) {
            uVar95 = 0;
          }
          else {
            uVar99 = 0;
            uVar95 = uVar98 & 0xfffffffffffffffc;
            pfVar93 = (float *)(param_2 + uVar94 * 4);
            do {
              uVar102 = *(ulonglong *)(lVar105 + uVar94 * 2 + uVar99 * 2);
              uVar8 = *(ulonglong *)(lVar103 + uVar94 * 2 + uVar99 * 2);
              uVar99 = uVar99 + 4;
              auVar25._8_4_ = 0;
              auVar25._0_8_ = uVar102;
              auVar25._12_2_ = (short)(uVar102 >> 0x30);
              auVar44._8_2_ = (short)(uVar102 >> 0x20);
              auVar44._0_8_ = uVar102;
              auVar44._10_4_ = auVar25._10_4_;
              auVar88._6_8_ = 0;
              auVar88._0_6_ = auVar44._8_6_;
              auVar63._4_2_ = (short)(uVar102 >> 0x10);
              auVar63._0_4_ = (uint)uVar102;
              auVar63._6_8_ = SUB148(auVar88 << 0x40,6);
              auVar26._8_4_ = 0;
              auVar26._0_8_ = uVar8;
              auVar26._12_2_ = (short)(uVar8 >> 0x30);
              auVar45._8_2_ = (short)(uVar8 >> 0x20);
              auVar45._0_8_ = uVar8;
              auVar45._10_4_ = auVar26._10_4_;
              auVar89._6_8_ = 0;
              auVar89._0_6_ = auVar45._8_6_;
              auVar64._4_2_ = (short)(uVar8 >> 0x10);
              auVar64._0_4_ = (uint)uVar8;
              auVar64._6_8_ = SUB148(auVar89 << 0x40,6);
              *pfVar93 = (float)(((uint)uVar102 & 0xffff) + ((uint)uVar8 & 0xffff)) * fVar6 +
                         *pfVar93;
              pfVar93[1] = (float)(auVar63._4_4_ + auVar64._4_4_) * fVar6 + pfVar93[1];
              pfVar93[2] = (float)(auVar44._8_4_ + auVar45._8_4_) * fVar6 + pfVar93[2];
              pfVar93[3] = (float)((auVar25._10_4_ >> 0x10) + (auVar26._10_4_ >> 0x10)) * fVar6 +
                           pfVar93[3];
              pfVar93 = pfVar93 + 4;
            } while (uVar99 < uVar95);
          }
        }
        if (uVar95 < uVar98) {
          pfVar93 = (float *)(param_2 + uVar94 * 4 + uVar95 * 4);
          do {
            lVar97 = uVar95 * 2;
            lVar103 = uVar95 * 2;
            uVar95 = uVar95 + 1;
            *pfVar93 = (float)((uint)*(ushort *)
                                      (lVar96 + lVar106 * 6 + param_1 + uVar94 * 2 + lVar97) +
                              (uint)*(ushort *)
                                     (param_1 + lVar106 * -6 + lVar104 * 6 + uVar94 * 2 + lVar103))
                       * fVar6 + *pfVar93;
            pfVar93 = pfVar93 + 1;
          } while (uVar95 < uVar98);
        }
      }
    }
  }
LAB_1405cb62c:
  fVar6 = param_4[lVar104];
  if ((longlong)uVar100 < 1) {
    return;
  }
  if ((longlong)uVar100 < 8) {
LAB_1405cb7d8:
    uVar94 = 0;
    if (uVar100 == 0) {
      return;
    }
  }
  else {
    uVar98 = param_2 & 0xf;
    if (uVar98 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1405cb7d8;
      uVar98 = 0x10 - uVar98 >> 2;
    }
    if ((longlong)uVar100 < (longlong)(uVar98 + 8)) goto LAB_1405cb7d8;
    uVar95 = 0;
    uVar94 = uVar100 - (uVar100 - uVar98 & 7);
    if (uVar98 != 0) {
      do {
        *(float *)(param_2 + uVar95 * 4) =
             (float)*(ushort *)(lStack_78 + 6 + uVar95 * 2) * fVar6 +
             *(float *)(param_2 + uVar95 * 4);
        uVar95 = uVar95 + 1;
      } while (uVar95 < uVar98);
    }
    do {
      uVar95 = *(ulonglong *)(lStack_78 + 6 + uVar98 * 2);
      uVar99 = *(ulonglong *)(lStack_78 + 0xe + uVar98 * 2);
      auVar27._8_4_ = 0;
      auVar27._0_8_ = uVar95;
      auVar27._12_2_ = (short)(uVar95 >> 0x30);
      auVar46._8_2_ = (short)(uVar95 >> 0x20);
      auVar46._0_8_ = uVar95;
      auVar46._10_4_ = auVar27._10_4_;
      auVar90._6_8_ = 0;
      auVar90._0_6_ = auVar46._8_6_;
      auVar65._4_2_ = (short)(uVar95 >> 0x10);
      auVar65._0_4_ = (uint)uVar95;
      auVar65._6_8_ = SUB148(auVar90 << 0x40,6);
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar99;
      auVar28._12_2_ = (short)(uVar99 >> 0x30);
      auVar47._8_2_ = (short)(uVar99 >> 0x20);
      auVar47._0_8_ = uVar99;
      auVar47._10_4_ = auVar28._10_4_;
      auVar91._6_8_ = 0;
      auVar91._0_6_ = auVar47._8_6_;
      auVar66._4_2_ = (short)(uVar99 >> 0x10);
      auVar66._0_4_ = (uint)uVar99;
      auVar66._6_8_ = SUB148(auVar91 << 0x40,6);
      pfVar93 = (float *)(param_2 + uVar98 * 4);
      fVar7 = pfVar93[1];
      fVar68 = pfVar93[2];
      fVar69 = pfVar93[3];
      pfVar5 = (float *)(param_2 + 0x10 + uVar98 * 4);
      fVar70 = *pfVar5;
      fVar71 = pfVar5[1];
      fVar72 = pfVar5[2];
      fVar73 = pfVar5[3];
      pfVar5 = (float *)(param_2 + uVar98 * 4);
      *pfVar5 = (float)((uint)uVar95 & 0xffff) * fVar6 + *pfVar93;
      pfVar5[1] = (float)auVar65._4_4_ * fVar6 + fVar7;
      pfVar5[2] = (float)auVar46._8_4_ * fVar6 + fVar68;
      pfVar5[3] = (float)(auVar27._10_4_ >> 0x10) * fVar6 + fVar69;
      pfVar93 = (float *)(param_2 + 0x10 + uVar98 * 4);
      *pfVar93 = (float)((uint)uVar99 & 0xffff) * fVar6 + fVar70;
      pfVar93[1] = (float)auVar66._4_4_ * fVar6 + fVar71;
      pfVar93[2] = (float)auVar47._8_4_ * fVar6 + fVar72;
      pfVar93[3] = (float)(auVar28._10_4_ >> 0x10) * fVar6 + fVar73;
      uVar98 = uVar98 + 8;
    } while (uVar98 < uVar94);
    if (uVar100 < uVar94 + 1) {
      return;
    }
    uVar100 = uVar100 - uVar94;
    if (3 < (longlong)uVar100) {
      uVar98 = uVar100 & 0xfffffffffffffffc;
      uVar95 = 0;
      pfVar93 = (float *)(param_2 + uVar94 * 4);
      do {
        uVar99 = *(ulonglong *)(lStack_78 + uVar94 * 2 + 6 + uVar95 * 2);
        uVar95 = uVar95 + 4;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar99;
        auVar29._12_2_ = (short)(uVar99 >> 0x30);
        auVar48._8_2_ = (short)(uVar99 >> 0x20);
        auVar48._0_8_ = uVar99;
        auVar48._10_4_ = auVar29._10_4_;
        auVar92._6_8_ = 0;
        auVar92._0_6_ = auVar48._8_6_;
        auVar67._4_2_ = (short)(uVar99 >> 0x10);
        auVar67._0_4_ = (uint)uVar99;
        auVar67._6_8_ = SUB148(auVar92 << 0x40,6);
        *pfVar93 = (float)((uint)uVar99 & 0xffff) * fVar6 + *pfVar93;
        pfVar93[1] = (float)auVar67._4_4_ * fVar6 + pfVar93[1];
        pfVar93[2] = (float)auVar48._8_4_ * fVar6 + pfVar93[2];
        pfVar93[3] = (float)(auVar29._10_4_ >> 0x10) * fVar6 + pfVar93[3];
        pfVar93 = pfVar93 + 4;
      } while (uVar95 < uVar98);
      goto LAB_1405cb783;
    }
  }
  uVar98 = 0;
LAB_1405cb783:
  if (uVar98 < uVar100) {
    pfVar93 = (float *)(param_2 + uVar94 * 4 + uVar98 * 4);
    do {
      lVar104 = uVar98 * 2;
      uVar98 = uVar98 + 1;
      *pfVar93 = (float)*(ushort *)(lStack_78 + uVar94 * 2 + 6 + lVar104) * fVar6 + *pfVar93;
      pfVar93 = pfVar93 + 1;
    } while (uVar98 < uVar100);
  }
  return;
}

