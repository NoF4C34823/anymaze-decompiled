
void FUN_140703ec0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [14];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [14];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [14];
  undefined1 auVar37 [15];
  undefined1 auVar38 [14];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [13];
  undefined1 auVar50 [13];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  unkuint9 Var58;
  undefined1 auVar59 [11];
  undefined1 auVar60 [15];
  unkuint9 Var61;
  undefined1 auVar62 [11];
  uint uVar63;
  undefined1 auVar64 [14];
  undefined1 auVar65 [14];
  undefined1 auVar66 [15];
  undefined1 auVar67 [11];
  undefined1 auVar68 [15];
  undefined1 auVar69 [11];
  undefined1 auVar70 [14];
  undefined1 auVar71 [14];
  undefined1 auVar72 [15];
  undefined1 auVar73 [11];
  undefined1 auVar74 [14];
  undefined1 auVar75 [13];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined6 uVar80;
  undefined1 auVar81 [12];
  undefined8 uVar82;
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [12];
  undefined8 uVar88;
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  uint6 uVar91;
  uint5 uVar92;
  ulonglong uVar93;
  ulonglong *puVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  uint uVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  uint uVar102;
  undefined1 uVar103;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar95 = param_2 & 0xf;
    if (uVar95 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140704137;
      uVar95 = 0x10 - uVar95 >> 2;
    }
    if ((longlong)(uVar95 + 8) <= (longlong)param_3) {
      uVar93 = 0;
      uVar96 = param_3 - (param_3 - uVar95 & 7);
      if (uVar95 != 0) {
        do {
          *(float *)(param_2 + uVar93 * 4) =
               (float)((uint)*(byte *)((uVar93 - 2) + param_1) +
                      (uint)*(byte *)(uVar93 + 2 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar93 - 1) + param_1) +
                      (uint)*(byte *)(uVar93 + 1 + param_1)) * fVar3 +
               (float)*(byte *)(uVar93 + param_1) * fVar4;
          uVar93 = uVar93 + 1;
        } while (uVar93 < uVar95);
      }
      puVar94 = (ulonglong *)(param_1 + uVar95);
      do {
        uVar93 = *(ulonglong *)((longlong)puVar94 + -2);
        uVar5 = *(ulonglong *)((longlong)puVar94 + 2);
        auVar9._8_6_ = 0;
        auVar9._0_8_ = uVar93;
        auVar9[0xe] = (char)(uVar93 >> 0x38);
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar93;
        auVar19[0xc] = (char)(uVar93 >> 0x30);
        auVar19._13_2_ = auVar9._13_2_;
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar93;
        auVar26._12_3_ = auVar19._12_3_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar93;
        auVar31[10] = (char)(uVar93 >> 0x28);
        auVar31._11_4_ = auVar26._11_4_;
        auVar39._8_2_ = 0;
        auVar39._0_8_ = uVar93;
        auVar39._10_5_ = auVar31._10_5_;
        auVar44[8] = (char)(uVar93 >> 0x20);
        auVar44._0_8_ = uVar93;
        auVar44._9_6_ = auVar39._9_6_;
        auVar57._7_8_ = 0;
        auVar57._0_7_ = auVar44._8_7_;
        Var58 = CONCAT81(SUB158(auVar57 << 0x40,7),(char)(uVar93 >> 0x18));
        auVar76._9_6_ = 0;
        auVar76._0_9_ = Var58;
        auVar59._1_10_ = SUB1510(auVar76 << 0x30,5);
        auVar59[0] = (char)(uVar93 >> 0x10);
        auVar77._11_4_ = 0;
        auVar77._0_11_ = auVar59;
        auVar51[2] = (char)(uVar93 >> 8);
        auVar51._0_2_ = (ushort)uVar93;
        auVar51._3_12_ = SUB1512(auVar77 << 0x20,3);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10[0xe] = (char)(uVar5 >> 0x38);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar5;
        auVar20[0xc] = (char)(uVar5 >> 0x30);
        auVar20._13_2_ = auVar10._13_2_;
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar5;
        auVar27._12_3_ = auVar20._12_3_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar5;
        auVar32[10] = (char)(uVar5 >> 0x28);
        auVar32._11_4_ = auVar27._11_4_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar5;
        auVar40._10_5_ = auVar32._10_5_;
        auVar45[8] = (char)(uVar5 >> 0x20);
        auVar45._0_8_ = uVar5;
        auVar45._9_6_ = auVar40._9_6_;
        auVar60._7_8_ = 0;
        auVar60._0_7_ = auVar45._8_7_;
        Var61 = CONCAT81(SUB158(auVar60 << 0x40,7),(char)(uVar5 >> 0x18));
        auVar78._9_6_ = 0;
        auVar78._0_9_ = Var61;
        auVar62._1_10_ = SUB1510(auVar78 << 0x30,5);
        auVar62[0] = (char)(uVar5 >> 0x10);
        auVar79._11_4_ = 0;
        auVar79._0_11_ = auVar62;
        auVar52[2] = (char)(uVar5 >> 8);
        auVar52._0_2_ = (ushort)uVar5;
        auVar52._3_12_ = SUB1512(auVar79 << 0x20,3);
        sVar98 = (short)Var58 + (short)Var61;
        uVar63 = CONCAT22(auVar44._8_2_ + auVar45._8_2_,sVar98);
        sVar99 = auVar31._10_2_ + auVar32._10_2_;
        uVar80 = CONCAT24(sVar99,uVar63);
        sVar100 = auVar19._12_2_ + auVar20._12_2_;
        sVar101 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
        auVar81._4_8_ = 0;
        auVar81._0_4_ = uVar63;
        auVar11._12_2_ = sVar98;
        auVar11._0_12_ = auVar81 << 0x30;
        uVar82 = CONCAT44(auVar11._10_4_,CONCAT22(auVar59._0_2_ + auVar62._0_2_,sVar98));
        auVar64._6_8_ = 0;
        auVar64._0_6_ = (uint6)((ulonglong)uVar82 >> 0x10);
        uVar6 = (ulonglong)(CONCAT28(sVar101,CONCAT26(sVar100,uVar80)) >> 0x10);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar6;
        auVar12._12_2_ = sVar101;
        auVar21._8_2_ = sVar100;
        auVar21._0_8_ = uVar6;
        auVar21._10_4_ = auVar12._10_4_;
        auVar65._6_8_ = 0;
        auVar65._0_6_ = auVar21._8_6_;
        uVar97 = (uint)((uint6)uVar80 >> 0x10);
        auVar33._4_2_ = sVar99;
        auVar33._0_4_ = uVar97;
        auVar33._6_8_ = SUB148(auVar65 << 0x40,6);
        uVar6 = *(ulonglong *)((longlong)puVar94 + -1);
        uVar7 = *(ulonglong *)((longlong)puVar94 + 1);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar6;
        auVar13[0xe] = (char)(uVar6 >> 0x38);
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar6;
        auVar22[0xc] = (char)(uVar6 >> 0x30);
        auVar22._13_2_ = auVar13._13_2_;
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar6;
        auVar28._12_3_ = auVar22._12_3_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar6;
        auVar34[10] = (char)(uVar6 >> 0x28);
        auVar34._11_4_ = auVar28._11_4_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar6;
        auVar41._10_5_ = auVar34._10_5_;
        auVar46[8] = (char)(uVar6 >> 0x20);
        auVar46._0_8_ = uVar6;
        auVar46._9_6_ = auVar41._9_6_;
        auVar66._7_8_ = 0;
        auVar66._0_7_ = auVar46._8_7_;
        Var58 = CONCAT81(SUB158(auVar66 << 0x40,7),(char)(uVar6 >> 0x18));
        auVar83._9_6_ = 0;
        auVar83._0_9_ = Var58;
        auVar67._1_10_ = SUB1510(auVar83 << 0x30,5);
        auVar67[0] = (char)(uVar6 >> 0x10);
        auVar84._11_4_ = 0;
        auVar84._0_11_ = auVar67;
        auVar53[2] = (char)(uVar6 >> 8);
        auVar53._0_2_ = (ushort)uVar6;
        auVar53._3_12_ = SUB1512(auVar84 << 0x20,3);
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar7;
        auVar14[0xe] = (char)(uVar7 >> 0x38);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar7;
        auVar23[0xc] = (char)(uVar7 >> 0x30);
        auVar23._13_2_ = auVar14._13_2_;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar7;
        auVar29._12_3_ = auVar23._12_3_;
        auVar35._8_2_ = 0;
        auVar35._0_8_ = uVar7;
        auVar35[10] = (char)(uVar7 >> 0x28);
        auVar35._11_4_ = auVar29._11_4_;
        auVar42._8_2_ = 0;
        auVar42._0_8_ = uVar7;
        auVar42._10_5_ = auVar35._10_5_;
        auVar47[8] = (char)(uVar7 >> 0x20);
        auVar47._0_8_ = uVar7;
        auVar47._9_6_ = auVar42._9_6_;
        auVar68._7_8_ = 0;
        auVar68._0_7_ = auVar47._8_7_;
        Var61 = CONCAT81(SUB158(auVar68 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar85._9_6_ = 0;
        auVar85._0_9_ = Var61;
        auVar69._1_10_ = SUB1510(auVar85 << 0x30,5);
        auVar69[0] = (char)(uVar7 >> 0x10);
        auVar86._11_4_ = 0;
        auVar86._0_11_ = auVar69;
        auVar54[2] = (char)(uVar7 >> 8);
        auVar54._0_2_ = (ushort)uVar7;
        auVar54._3_12_ = SUB1512(auVar86 << 0x20,3);
        sVar98 = (short)Var58 + (short)Var61;
        uVar63 = CONCAT22(auVar46._8_2_ + auVar47._8_2_,sVar98);
        sVar99 = auVar34._10_2_ + auVar35._10_2_;
        uVar80 = CONCAT24(sVar99,uVar63);
        sVar100 = auVar22._12_2_ + auVar23._12_2_;
        sVar101 = (auVar13._13_2_ >> 8) + (auVar14._13_2_ >> 8);
        uVar8 = (ulonglong)(CONCAT28(sVar101,CONCAT26(sVar100,uVar80)) >> 0x10);
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar8;
        auVar15._12_2_ = sVar101;
        auVar24._8_2_ = sVar100;
        auVar24._0_8_ = uVar8;
        auVar24._10_4_ = auVar15._10_4_;
        auVar70._6_8_ = 0;
        auVar70._0_6_ = auVar24._8_6_;
        uVar102 = (uint)((uint6)uVar80 >> 0x10);
        auVar36._4_2_ = sVar99;
        auVar36._0_4_ = uVar102;
        auVar36._6_8_ = SUB148(auVar70 << 0x40,6);
        auVar87._4_8_ = 0;
        auVar87._0_4_ = uVar63;
        auVar16._12_2_ = sVar98;
        auVar16._0_12_ = auVar87 << 0x30;
        uVar88 = CONCAT44(auVar16._10_4_,CONCAT22(auVar67._0_2_ + auVar69._0_2_,sVar98));
        auVar71._6_8_ = 0;
        auVar71._0_6_ = (uint6)((ulonglong)uVar88 >> 0x10);
        uVar8 = *puVar94;
        puVar94 = puVar94 + 1;
        uVar103 = (undefined1)(uVar8 >> 0x38);
        auVar17._8_6_ = 0;
        auVar17._0_8_ = uVar8;
        auVar17[0xe] = uVar103;
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar8;
        auVar25[0xc] = (char)(uVar8 >> 0x30);
        auVar25._13_2_ = auVar17._13_2_;
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar8;
        auVar30._12_3_ = auVar25._12_3_;
        auVar37._8_2_ = 0;
        auVar37._0_8_ = uVar8;
        auVar37[10] = (char)(uVar8 >> 0x28);
        auVar37._11_4_ = auVar30._11_4_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar8;
        auVar43._10_5_ = auVar37._10_5_;
        auVar48[8] = (char)(uVar8 >> 0x20);
        auVar48._0_8_ = uVar8;
        auVar48._9_6_ = auVar43._9_6_;
        auVar72._7_8_ = 0;
        auVar72._0_7_ = auVar48._8_7_;
        Var58 = CONCAT81(SUB158(auVar72 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar89._9_6_ = 0;
        auVar89._0_9_ = Var58;
        auVar73._1_10_ = SUB1510(auVar89 << 0x30,5);
        auVar73[0] = (char)(uVar8 >> 0x10);
        auVar90._11_4_ = 0;
        auVar90._0_11_ = auVar73;
        auVar55[2] = (char)(uVar8 >> 8);
        auVar55._0_2_ = (ushort)uVar8;
        auVar55._3_12_ = SUB1512(auVar90 << 0x20,3);
        auVar56._2_13_ = auVar55._2_13_;
        auVar56._0_2_ = (ushort)uVar8 & 0xff;
        auVar18._10_2_ = 0;
        auVar18._0_10_ = auVar56._0_10_;
        auVar18._12_2_ = (short)Var58;
        uVar91 = CONCAT42(auVar18._10_4_,auVar73._0_2_);
        auVar74._6_8_ = 0;
        auVar74._0_6_ = uVar91;
        auVar38._4_2_ = auVar55._2_2_;
        auVar38._0_4_ = auVar56._0_4_;
        auVar38._6_8_ = SUB148(auVar74 << 0x40,6);
        auVar49[0xc] = uVar103;
        auVar49._0_12_ = ZEXT812(0);
        uVar92 = CONCAT32(auVar49._10_3_,auVar25._12_2_);
        auVar75._5_8_ = 0;
        auVar75._0_5_ = uVar92;
        auVar50._4_2_ = auVar37._10_2_;
        auVar50._0_4_ = auVar48._8_4_;
        auVar50._6_7_ = SUB137(auVar75 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar95 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar93 & 0xff) + ((ushort)uVar5 & 0xff)) * fVar2 +
                  (float)(ushort)(((ushort)uVar6 & 0xff) + ((ushort)uVar7 & 0xff)) * fVar3 +
                  (float)(auVar56._0_4_ & 0xffff) * fVar4;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar64 << 0x40,6),auVar51._2_2_ + auVar52._2_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar71 << 0x40,6),
                                                 auVar53._2_2_ + auVar54._2_2_) * fVar3 +
                    (float)auVar38._4_4_ * fVar4;
        pfVar1[2] = (float)(int)((ulonglong)uVar82 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar88 >> 0x10) * fVar3 + (float)(int)uVar91 * fVar4;
        pfVar1[3] = (float)(auVar11._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar16._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar18._10_4_ >> 0x10) * fVar4;
        pfVar1 = (float *)(param_2 + 0x10 + uVar95 * 4);
        *pfVar1 = (float)(uVar97 & 0xffff) * fVar2 + (float)(uVar102 & 0xffff) * fVar3 +
                  (float)(auVar48._8_4_ & 0xffff) * fVar4;
        pfVar1[1] = (float)auVar33._4_4_ * fVar2 + (float)auVar36._4_4_ * fVar3 +
                    (float)auVar50._4_4_ * fVar4;
        pfVar1[2] = (float)auVar21._8_4_ * fVar2 + (float)auVar24._8_4_ * fVar3 +
                    (float)(int)uVar92 * fVar4;
        pfVar1[3] = (float)(auVar12._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar15._10_4_ >> 0x10) * fVar3 +
                    (float)(uint3)(auVar49._10_3_ >> 0x10) * fVar4;
        uVar95 = uVar95 + 8;
      } while (uVar95 < uVar96);
      for (; uVar96 < param_3; uVar96 = uVar96 + 1) {
        *(float *)(param_2 + uVar96 * 4) =
             (float)((uint)*(byte *)((uVar96 - 2) + param_1) + (uint)*(byte *)(uVar96 + 2 + param_1)
                    ) * fVar2 +
             (float)((uint)*(byte *)((uVar96 - 1) + param_1) + (uint)*(byte *)(uVar96 + 1 + param_1)
                    ) * fVar3 + (float)*(byte *)(uVar96 + param_1) * fVar4;
      }
      return;
    }
  }
LAB_140704137:
  FUN_1407040d4(fVar4,0);
  return;
}

