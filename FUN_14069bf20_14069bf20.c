
void FUN_14069bf20(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar19;
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [14];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [14];
  undefined1 auVar38 [15];
  undefined1 auVar39 [14];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [13];
  undefined1 auVar51 [13];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  unkuint9 Var59;
  undefined1 auVar60 [11];
  undefined1 auVar61 [15];
  unkuint9 Var62;
  undefined1 auVar63 [11];
  uint uVar64;
  undefined1 auVar65 [14];
  undefined1 auVar66 [14];
  undefined1 auVar67 [15];
  undefined1 auVar68 [11];
  undefined1 auVar69 [15];
  undefined1 auVar70 [11];
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [15];
  undefined1 auVar74 [11];
  undefined1 auVar75 [14];
  undefined1 auVar76 [13];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined6 uVar81;
  undefined1 auVar82 [12];
  undefined8 uVar83;
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [12];
  undefined8 uVar89;
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  uint6 uVar92;
  uint5 uVar93;
  ulonglong uVar94;
  ulonglong *puVar95;
  ulonglong uVar96;
  ulonglong uVar97;
  uint uVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  uint uVar103;
  undefined1 uVar104;
  
  uVar19 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar19 < 1) {
    return;
  }
  if (7 < (longlong)uVar19) {
    uVar96 = param_2 & 0xf;
    if (uVar96 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14069c1b7;
      uVar96 = 0x10 - uVar96 >> 2;
    }
    if ((longlong)(uVar96 + 8) <= (longlong)uVar19) {
      uVar94 = 0;
      uVar97 = uVar19 - (uVar19 - uVar96 & 7);
      if (uVar96 != 0) {
        do {
          *(float *)(param_2 + uVar94 * 4) =
               (float)((uint)*(byte *)((uVar94 - 6) + param_1) +
                      (uint)*(byte *)(uVar94 + 6 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar94 - 3) + param_1) +
                      (uint)*(byte *)(uVar94 + 3 + param_1)) * fVar3 +
               (float)*(byte *)(uVar94 + param_1) * fVar4;
          uVar94 = uVar94 + 1;
        } while (uVar94 < uVar96);
      }
      puVar95 = (ulonglong *)(param_1 + uVar96);
      do {
        uVar94 = *(ulonglong *)((longlong)puVar95 + -6);
        uVar5 = *(ulonglong *)((longlong)puVar95 + 6);
        auVar9._8_6_ = 0;
        auVar9._0_8_ = uVar94;
        auVar9[0xe] = (char)(uVar94 >> 0x38);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar94;
        auVar20[0xc] = (char)(uVar94 >> 0x30);
        auVar20._13_2_ = auVar9._13_2_;
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar94;
        auVar27._12_3_ = auVar20._12_3_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar94;
        auVar32[10] = (char)(uVar94 >> 0x28);
        auVar32._11_4_ = auVar27._11_4_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar94;
        auVar40._10_5_ = auVar32._10_5_;
        auVar45[8] = (char)(uVar94 >> 0x20);
        auVar45._0_8_ = uVar94;
        auVar45._9_6_ = auVar40._9_6_;
        auVar58._7_8_ = 0;
        auVar58._0_7_ = auVar45._8_7_;
        Var59 = CONCAT81(SUB158(auVar58 << 0x40,7),(char)(uVar94 >> 0x18));
        auVar77._9_6_ = 0;
        auVar77._0_9_ = Var59;
        auVar60._1_10_ = SUB1510(auVar77 << 0x30,5);
        auVar60[0] = (char)(uVar94 >> 0x10);
        auVar78._11_4_ = 0;
        auVar78._0_11_ = auVar60;
        auVar52[2] = (char)(uVar94 >> 8);
        auVar52._0_2_ = (ushort)uVar94;
        auVar52._3_12_ = SUB1512(auVar78 << 0x20,3);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10[0xe] = (char)(uVar5 >> 0x38);
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar5;
        auVar21[0xc] = (char)(uVar5 >> 0x30);
        auVar21._13_2_ = auVar10._13_2_;
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar5;
        auVar28._12_3_ = auVar21._12_3_;
        auVar33._8_2_ = 0;
        auVar33._0_8_ = uVar5;
        auVar33[10] = (char)(uVar5 >> 0x28);
        auVar33._11_4_ = auVar28._11_4_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar5;
        auVar41._10_5_ = auVar33._10_5_;
        auVar46[8] = (char)(uVar5 >> 0x20);
        auVar46._0_8_ = uVar5;
        auVar46._9_6_ = auVar41._9_6_;
        auVar61._7_8_ = 0;
        auVar61._0_7_ = auVar46._8_7_;
        Var62 = CONCAT81(SUB158(auVar61 << 0x40,7),(char)(uVar5 >> 0x18));
        auVar79._9_6_ = 0;
        auVar79._0_9_ = Var62;
        auVar63._1_10_ = SUB1510(auVar79 << 0x30,5);
        auVar63[0] = (char)(uVar5 >> 0x10);
        auVar80._11_4_ = 0;
        auVar80._0_11_ = auVar63;
        auVar53[2] = (char)(uVar5 >> 8);
        auVar53._0_2_ = (ushort)uVar5;
        auVar53._3_12_ = SUB1512(auVar80 << 0x20,3);
        sVar99 = (short)Var59 + (short)Var62;
        uVar64 = CONCAT22(auVar45._8_2_ + auVar46._8_2_,sVar99);
        sVar100 = auVar32._10_2_ + auVar33._10_2_;
        uVar81 = CONCAT24(sVar100,uVar64);
        sVar101 = auVar20._12_2_ + auVar21._12_2_;
        sVar102 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
        auVar82._4_8_ = 0;
        auVar82._0_4_ = uVar64;
        auVar11._12_2_ = sVar99;
        auVar11._0_12_ = auVar82 << 0x30;
        uVar83 = CONCAT44(auVar11._10_4_,CONCAT22(auVar60._0_2_ + auVar63._0_2_,sVar99));
        auVar65._6_8_ = 0;
        auVar65._0_6_ = (uint6)((ulonglong)uVar83 >> 0x10);
        uVar6 = (ulonglong)(CONCAT28(sVar102,CONCAT26(sVar101,uVar81)) >> 0x10);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar6;
        auVar12._12_2_ = sVar102;
        auVar22._8_2_ = sVar101;
        auVar22._0_8_ = uVar6;
        auVar22._10_4_ = auVar12._10_4_;
        auVar66._6_8_ = 0;
        auVar66._0_6_ = auVar22._8_6_;
        uVar98 = (uint)((uint6)uVar81 >> 0x10);
        auVar34._4_2_ = sVar100;
        auVar34._0_4_ = uVar98;
        auVar34._6_8_ = SUB148(auVar66 << 0x40,6);
        uVar6 = *(ulonglong *)((longlong)puVar95 + -3);
        uVar7 = *(ulonglong *)((longlong)puVar95 + 3);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar6;
        auVar13[0xe] = (char)(uVar6 >> 0x38);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar6;
        auVar23[0xc] = (char)(uVar6 >> 0x30);
        auVar23._13_2_ = auVar13._13_2_;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar6;
        auVar29._12_3_ = auVar23._12_3_;
        auVar35._8_2_ = 0;
        auVar35._0_8_ = uVar6;
        auVar35[10] = (char)(uVar6 >> 0x28);
        auVar35._11_4_ = auVar29._11_4_;
        auVar42._8_2_ = 0;
        auVar42._0_8_ = uVar6;
        auVar42._10_5_ = auVar35._10_5_;
        auVar47[8] = (char)(uVar6 >> 0x20);
        auVar47._0_8_ = uVar6;
        auVar47._9_6_ = auVar42._9_6_;
        auVar67._7_8_ = 0;
        auVar67._0_7_ = auVar47._8_7_;
        Var59 = CONCAT81(SUB158(auVar67 << 0x40,7),(char)(uVar6 >> 0x18));
        auVar84._9_6_ = 0;
        auVar84._0_9_ = Var59;
        auVar68._1_10_ = SUB1510(auVar84 << 0x30,5);
        auVar68[0] = (char)(uVar6 >> 0x10);
        auVar85._11_4_ = 0;
        auVar85._0_11_ = auVar68;
        auVar54[2] = (char)(uVar6 >> 8);
        auVar54._0_2_ = (ushort)uVar6;
        auVar54._3_12_ = SUB1512(auVar85 << 0x20,3);
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar7;
        auVar14[0xe] = (char)(uVar7 >> 0x38);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar7;
        auVar24[0xc] = (char)(uVar7 >> 0x30);
        auVar24._13_2_ = auVar14._13_2_;
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar7;
        auVar30._12_3_ = auVar24._12_3_;
        auVar36._8_2_ = 0;
        auVar36._0_8_ = uVar7;
        auVar36[10] = (char)(uVar7 >> 0x28);
        auVar36._11_4_ = auVar30._11_4_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar7;
        auVar43._10_5_ = auVar36._10_5_;
        auVar48[8] = (char)(uVar7 >> 0x20);
        auVar48._0_8_ = uVar7;
        auVar48._9_6_ = auVar43._9_6_;
        auVar69._7_8_ = 0;
        auVar69._0_7_ = auVar48._8_7_;
        Var62 = CONCAT81(SUB158(auVar69 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar86._9_6_ = 0;
        auVar86._0_9_ = Var62;
        auVar70._1_10_ = SUB1510(auVar86 << 0x30,5);
        auVar70[0] = (char)(uVar7 >> 0x10);
        auVar87._11_4_ = 0;
        auVar87._0_11_ = auVar70;
        auVar55[2] = (char)(uVar7 >> 8);
        auVar55._0_2_ = (ushort)uVar7;
        auVar55._3_12_ = SUB1512(auVar87 << 0x20,3);
        sVar99 = (short)Var59 + (short)Var62;
        uVar64 = CONCAT22(auVar47._8_2_ + auVar48._8_2_,sVar99);
        sVar100 = auVar35._10_2_ + auVar36._10_2_;
        uVar81 = CONCAT24(sVar100,uVar64);
        sVar101 = auVar23._12_2_ + auVar24._12_2_;
        sVar102 = (auVar13._13_2_ >> 8) + (auVar14._13_2_ >> 8);
        uVar8 = (ulonglong)(CONCAT28(sVar102,CONCAT26(sVar101,uVar81)) >> 0x10);
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar8;
        auVar15._12_2_ = sVar102;
        auVar25._8_2_ = sVar101;
        auVar25._0_8_ = uVar8;
        auVar25._10_4_ = auVar15._10_4_;
        auVar71._6_8_ = 0;
        auVar71._0_6_ = auVar25._8_6_;
        uVar103 = (uint)((uint6)uVar81 >> 0x10);
        auVar37._4_2_ = sVar100;
        auVar37._0_4_ = uVar103;
        auVar37._6_8_ = SUB148(auVar71 << 0x40,6);
        auVar88._4_8_ = 0;
        auVar88._0_4_ = uVar64;
        auVar16._12_2_ = sVar99;
        auVar16._0_12_ = auVar88 << 0x30;
        uVar89 = CONCAT44(auVar16._10_4_,CONCAT22(auVar68._0_2_ + auVar70._0_2_,sVar99));
        auVar72._6_8_ = 0;
        auVar72._0_6_ = (uint6)((ulonglong)uVar89 >> 0x10);
        uVar8 = *puVar95;
        puVar95 = puVar95 + 1;
        uVar104 = (undefined1)(uVar8 >> 0x38);
        auVar17._8_6_ = 0;
        auVar17._0_8_ = uVar8;
        auVar17[0xe] = uVar104;
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar8;
        auVar26[0xc] = (char)(uVar8 >> 0x30);
        auVar26._13_2_ = auVar17._13_2_;
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar8;
        auVar31._12_3_ = auVar26._12_3_;
        auVar38._8_2_ = 0;
        auVar38._0_8_ = uVar8;
        auVar38[10] = (char)(uVar8 >> 0x28);
        auVar38._11_4_ = auVar31._11_4_;
        auVar44._8_2_ = 0;
        auVar44._0_8_ = uVar8;
        auVar44._10_5_ = auVar38._10_5_;
        auVar49[8] = (char)(uVar8 >> 0x20);
        auVar49._0_8_ = uVar8;
        auVar49._9_6_ = auVar44._9_6_;
        auVar73._7_8_ = 0;
        auVar73._0_7_ = auVar49._8_7_;
        Var59 = CONCAT81(SUB158(auVar73 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar90._9_6_ = 0;
        auVar90._0_9_ = Var59;
        auVar74._1_10_ = SUB1510(auVar90 << 0x30,5);
        auVar74[0] = (char)(uVar8 >> 0x10);
        auVar91._11_4_ = 0;
        auVar91._0_11_ = auVar74;
        auVar56[2] = (char)(uVar8 >> 8);
        auVar56._0_2_ = (ushort)uVar8;
        auVar56._3_12_ = SUB1512(auVar91 << 0x20,3);
        auVar57._2_13_ = auVar56._2_13_;
        auVar57._0_2_ = (ushort)uVar8 & 0xff;
        auVar18._10_2_ = 0;
        auVar18._0_10_ = auVar57._0_10_;
        auVar18._12_2_ = (short)Var59;
        uVar92 = CONCAT42(auVar18._10_4_,auVar74._0_2_);
        auVar75._6_8_ = 0;
        auVar75._0_6_ = uVar92;
        auVar39._4_2_ = auVar56._2_2_;
        auVar39._0_4_ = auVar57._0_4_;
        auVar39._6_8_ = SUB148(auVar75 << 0x40,6);
        auVar50[0xc] = uVar104;
        auVar50._0_12_ = ZEXT812(0);
        uVar93 = CONCAT32(auVar50._10_3_,auVar26._12_2_);
        auVar76._5_8_ = 0;
        auVar76._0_5_ = uVar93;
        auVar51._4_2_ = auVar38._10_2_;
        auVar51._0_4_ = auVar49._8_4_;
        auVar51._6_7_ = SUB137(auVar76 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar96 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar94 & 0xff) + ((ushort)uVar5 & 0xff)) * fVar2 +
                  (float)(ushort)(((ushort)uVar6 & 0xff) + ((ushort)uVar7 & 0xff)) * fVar3 +
                  (float)(auVar57._0_4_ & 0xffff) * fVar4;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar65 << 0x40,6),auVar52._2_2_ + auVar53._2_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar72 << 0x40,6),
                                                 auVar54._2_2_ + auVar55._2_2_) * fVar3 +
                    (float)auVar39._4_4_ * fVar4;
        pfVar1[2] = (float)(int)((ulonglong)uVar83 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar89 >> 0x10) * fVar3 + (float)(int)uVar92 * fVar4;
        pfVar1[3] = (float)(auVar11._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar16._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar18._10_4_ >> 0x10) * fVar4;
        pfVar1 = (float *)(param_2 + 0x10 + uVar96 * 4);
        *pfVar1 = (float)(uVar98 & 0xffff) * fVar2 + (float)(uVar103 & 0xffff) * fVar3 +
                  (float)(auVar49._8_4_ & 0xffff) * fVar4;
        pfVar1[1] = (float)auVar34._4_4_ * fVar2 + (float)auVar37._4_4_ * fVar3 +
                    (float)auVar51._4_4_ * fVar4;
        pfVar1[2] = (float)auVar22._8_4_ * fVar2 + (float)auVar25._8_4_ * fVar3 +
                    (float)(int)uVar93 * fVar4;
        pfVar1[3] = (float)(auVar12._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar15._10_4_ >> 0x10) * fVar3 +
                    (float)(uint3)(auVar50._10_3_ >> 0x10) * fVar4;
        uVar96 = uVar96 + 8;
      } while (uVar96 < uVar97);
      for (; uVar97 < uVar19; uVar97 = uVar97 + 1) {
        *(float *)(param_2 + uVar97 * 4) =
             (float)((uint)*(byte *)((uVar97 - 6) + param_1) + (uint)*(byte *)(uVar97 + 6 + param_1)
                    ) * fVar2 +
             (float)((uint)*(byte *)((uVar97 - 3) + param_1) + (uint)*(byte *)(uVar97 + 3 + param_1)
                    ) * fVar3 + (float)*(byte *)(uVar97 + param_1) * fVar4;
      }
      return;
    }
  }
LAB_14069c1b7:
  FUN_14069c154(fVar4,0);
  return;
}

