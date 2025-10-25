
void FUN_140678b00(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  ulonglong uVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [13];
  undefined1 auVar32 [13];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  unkuint9 Var38;
  undefined1 auVar39 [11];
  undefined1 auVar40 [15];
  unkuint9 Var41;
  undefined1 auVar42 [11];
  uint uVar43;
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [15];
  undefined1 auVar47 [11];
  undefined1 auVar48 [14];
  undefined1 auVar49 [13];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined6 uVar54;
  undefined1 auVar55 [12];
  undefined8 uVar56;
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  uint6 uVar59;
  uint5 uVar60;
  ulonglong uVar61;
  ulonglong *puVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  uint uVar65;
  short sVar66;
  undefined1 uVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  
  uVar12 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)uVar12 < 1) {
    return;
  }
  if (7 < (longlong)uVar12) {
    uVar63 = param_2 & 0xf;
    if (uVar63 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140678cfd;
      uVar63 = 0x10 - uVar63 >> 2;
    }
    if ((longlong)(uVar63 + 8) <= (longlong)uVar12) {
      uVar61 = 0;
      uVar64 = uVar12 - (uVar12 - uVar63 & 7);
      if (uVar63 != 0) {
        do {
          *(float *)(param_2 + uVar61 * 4) =
               (float)((uint)*(byte *)((uVar61 - 3) + param_1) +
                      (uint)*(byte *)(uVar61 + 3 + param_1)) * fVar2 +
               (float)*(byte *)(uVar61 + param_1) * fVar3;
          uVar61 = uVar61 + 1;
        } while (uVar61 < uVar63);
      }
      puVar62 = (ulonglong *)(param_1 + uVar63);
      do {
        uVar61 = *(ulonglong *)((longlong)puVar62 + -3);
        uVar4 = *(ulonglong *)((longlong)puVar62 + 3);
        auVar6._8_6_ = 0;
        auVar6._0_8_ = uVar61;
        auVar6[0xe] = (char)(uVar61 >> 0x38);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar61;
        auVar13[0xc] = (char)(uVar61 >> 0x30);
        auVar13._13_2_ = auVar6._13_2_;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar61;
        auVar17._12_3_ = auVar13._12_3_;
        auVar20._8_2_ = 0;
        auVar20._0_8_ = uVar61;
        auVar20[10] = (char)(uVar61 >> 0x28);
        auVar20._11_4_ = auVar17._11_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar61;
        auVar25._10_5_ = auVar20._10_5_;
        auVar28[8] = (char)(uVar61 >> 0x20);
        auVar28._0_8_ = uVar61;
        auVar28._9_6_ = auVar25._9_6_;
        auVar37._7_8_ = 0;
        auVar37._0_7_ = auVar28._8_7_;
        Var38 = CONCAT81(SUB158(auVar37 << 0x40,7),(char)(uVar61 >> 0x18));
        auVar50._9_6_ = 0;
        auVar50._0_9_ = Var38;
        auVar39._1_10_ = SUB1510(auVar50 << 0x30,5);
        auVar39[0] = (char)(uVar61 >> 0x10);
        auVar51._11_4_ = 0;
        auVar51._0_11_ = auVar39;
        auVar33[2] = (char)(uVar61 >> 8);
        auVar33._0_2_ = (ushort)uVar61;
        auVar33._3_12_ = SUB1512(auVar51 << 0x20,3);
        auVar7._8_6_ = 0;
        auVar7._0_8_ = uVar4;
        auVar7[0xe] = (char)(uVar4 >> 0x38);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar4;
        auVar14[0xc] = (char)(uVar4 >> 0x30);
        auVar14._13_2_ = auVar7._13_2_;
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar4;
        auVar18._12_3_ = auVar14._12_3_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar4;
        auVar21[10] = (char)(uVar4 >> 0x28);
        auVar21._11_4_ = auVar18._11_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar4;
        auVar26._10_5_ = auVar21._10_5_;
        auVar29[8] = (char)(uVar4 >> 0x20);
        auVar29._0_8_ = uVar4;
        auVar29._9_6_ = auVar26._9_6_;
        auVar40._7_8_ = 0;
        auVar40._0_7_ = auVar29._8_7_;
        Var41 = CONCAT81(SUB158(auVar40 << 0x40,7),(char)(uVar4 >> 0x18));
        auVar52._9_6_ = 0;
        auVar52._0_9_ = Var41;
        auVar42._1_10_ = SUB1510(auVar52 << 0x30,5);
        auVar42[0] = (char)(uVar4 >> 0x10);
        auVar53._11_4_ = 0;
        auVar53._0_11_ = auVar42;
        auVar34[2] = (char)(uVar4 >> 8);
        auVar34._0_2_ = (ushort)uVar4;
        auVar34._3_12_ = SUB1512(auVar53 << 0x20,3);
        sVar66 = (short)Var38 + (short)Var41;
        uVar43 = CONCAT22(auVar28._8_2_ + auVar29._8_2_,sVar66);
        sVar68 = auVar20._10_2_ + auVar21._10_2_;
        uVar54 = CONCAT24(sVar68,uVar43);
        sVar69 = auVar13._12_2_ + auVar14._12_2_;
        sVar70 = (auVar6._13_2_ >> 8) + (auVar7._13_2_ >> 8);
        uVar5 = (ulonglong)(CONCAT28(sVar70,CONCAT26(sVar69,uVar54)) >> 0x10);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar5;
        auVar8._12_2_ = sVar70;
        auVar15._8_2_ = sVar69;
        auVar15._0_8_ = uVar5;
        auVar15._10_4_ = auVar8._10_4_;
        auVar44._6_8_ = 0;
        auVar44._0_6_ = auVar15._8_6_;
        uVar65 = (uint)((uint6)uVar54 >> 0x10);
        auVar22._4_2_ = sVar68;
        auVar22._0_4_ = uVar65;
        auVar22._6_8_ = SUB148(auVar44 << 0x40,6);
        uVar5 = *puVar62;
        puVar62 = puVar62 + 1;
        auVar55._4_8_ = 0;
        auVar55._0_4_ = uVar43;
        auVar9._12_2_ = sVar66;
        auVar9._0_12_ = auVar55 << 0x30;
        uVar56 = CONCAT44(auVar9._10_4_,CONCAT22(auVar39._0_2_ + auVar42._0_2_,sVar66));
        auVar45._6_8_ = 0;
        auVar45._0_6_ = (uint6)((ulonglong)uVar56 >> 0x10);
        uVar67 = (undefined1)(uVar5 >> 0x38);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10[0xe] = uVar67;
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar5;
        auVar16[0xc] = (char)(uVar5 >> 0x30);
        auVar16._13_2_ = auVar10._13_2_;
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar5;
        auVar19._12_3_ = auVar16._12_3_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar5;
        auVar23[10] = (char)(uVar5 >> 0x28);
        auVar23._11_4_ = auVar19._11_4_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar5;
        auVar27._10_5_ = auVar23._10_5_;
        auVar30[8] = (char)(uVar5 >> 0x20);
        auVar30._0_8_ = uVar5;
        auVar30._9_6_ = auVar27._9_6_;
        auVar46._7_8_ = 0;
        auVar46._0_7_ = auVar30._8_7_;
        Var38 = CONCAT81(SUB158(auVar46 << 0x40,7),(char)(uVar5 >> 0x18));
        auVar57._9_6_ = 0;
        auVar57._0_9_ = Var38;
        auVar47._1_10_ = SUB1510(auVar57 << 0x30,5);
        auVar47[0] = (char)(uVar5 >> 0x10);
        auVar58._11_4_ = 0;
        auVar58._0_11_ = auVar47;
        auVar35[2] = (char)(uVar5 >> 8);
        auVar35._0_2_ = (ushort)uVar5;
        auVar35._3_12_ = SUB1512(auVar58 << 0x20,3);
        auVar36._2_13_ = auVar35._2_13_;
        auVar36._0_2_ = (ushort)uVar5 & 0xff;
        auVar11._10_2_ = 0;
        auVar11._0_10_ = auVar36._0_10_;
        auVar11._12_2_ = (short)Var38;
        uVar59 = CONCAT42(auVar11._10_4_,auVar47._0_2_);
        auVar48._6_8_ = 0;
        auVar48._0_6_ = uVar59;
        auVar24._4_2_ = auVar35._2_2_;
        auVar24._0_4_ = auVar36._0_4_;
        auVar24._6_8_ = SUB148(auVar48 << 0x40,6);
        auVar31[0xc] = uVar67;
        auVar31._0_12_ = ZEXT812(0);
        uVar60 = CONCAT32(auVar31._10_3_,auVar16._12_2_);
        auVar49._5_8_ = 0;
        auVar49._0_5_ = uVar60;
        auVar32._4_2_ = auVar23._10_2_;
        auVar32._0_4_ = auVar30._8_4_;
        auVar32._6_7_ = SUB137(auVar49 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar63 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar61 & 0xff) + ((ushort)uVar4 & 0xff)) * fVar2 +
                  (float)(auVar36._0_4_ & 0xffff) * fVar3;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar45 << 0x40,6),auVar33._2_2_ + auVar34._2_2_) *
                    fVar2 + (float)auVar24._4_4_ * fVar3;
        pfVar1[2] = (float)(int)((ulonglong)uVar56 >> 0x10) * fVar2 + (float)(int)uVar59 * fVar3;
        pfVar1[3] = (float)(auVar9._10_4_ >> 0x10) * fVar2 + (float)(auVar11._10_4_ >> 0x10) * fVar3
        ;
        pfVar1 = (float *)(param_2 + 0x10 + uVar63 * 4);
        *pfVar1 = (float)(uVar65 & 0xffff) * fVar2 + (float)(auVar30._8_4_ & 0xffff) * fVar3;
        pfVar1[1] = (float)auVar22._4_4_ * fVar2 + (float)auVar32._4_4_ * fVar3;
        pfVar1[2] = (float)auVar15._8_4_ * fVar2 + (float)(int)uVar60 * fVar3;
        pfVar1[3] = (float)(auVar8._10_4_ >> 0x10) * fVar2 +
                    (float)(uint3)(auVar31._10_3_ >> 0x10) * fVar3;
        uVar63 = uVar63 + 8;
      } while (uVar63 < uVar64);
      for (; uVar64 < uVar12; uVar64 = uVar64 + 1) {
        *(float *)(param_2 + uVar64 * 4) =
             (float)((uint)*(byte *)((uVar64 - 3) + param_1) + (uint)*(byte *)(uVar64 + 3 + param_1)
                    ) * fVar2 + (float)*(byte *)(uVar64 + param_1) * fVar3;
      }
      return;
    }
  }
LAB_140678cfd:
  FUN_140678ca9(fVar3,0);
  return;
}

