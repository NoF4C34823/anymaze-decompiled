
void FUN_1406e0d60(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [14];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [13];
  undefined1 auVar31 [13];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  unkuint9 Var37;
  undefined1 auVar38 [11];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  uint uVar42;
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [11];
  undefined1 auVar47 [14];
  undefined1 auVar48 [13];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined6 uVar53;
  undefined1 auVar54 [12];
  undefined8 uVar55;
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  uint6 uVar58;
  uint5 uVar59;
  ulonglong uVar60;
  ulonglong *puVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  uint uVar64;
  short sVar65;
  undefined1 uVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar62 = param_2 & 0xf;
    if (uVar62 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406e0f3d;
      uVar62 = 0x10 - uVar62 >> 2;
    }
    if ((longlong)(uVar62 + 8) <= (longlong)param_3) {
      uVar60 = 0;
      uVar63 = param_3 - (param_3 - uVar62 & 7);
      if (uVar62 != 0) {
        do {
          *(float *)(param_2 + uVar60 * 4) =
               (float)((uint)*(byte *)((uVar60 - 1) + param_1) +
                      (uint)*(byte *)(uVar60 + 1 + param_1)) * fVar2 +
               (float)*(byte *)(uVar60 + param_1) * fVar3;
          uVar60 = uVar60 + 1;
        } while (uVar60 < uVar62);
      }
      puVar61 = (ulonglong *)(param_1 + uVar62);
      do {
        uVar60 = *(ulonglong *)((longlong)puVar61 + -1);
        uVar4 = *(ulonglong *)((longlong)puVar61 + 1);
        auVar6._8_6_ = 0;
        auVar6._0_8_ = uVar60;
        auVar6[0xe] = (char)(uVar60 >> 0x38);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar60;
        auVar12[0xc] = (char)(uVar60 >> 0x30);
        auVar12._13_2_ = auVar6._13_2_;
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar60;
        auVar16._12_3_ = auVar12._12_3_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar60;
        auVar19[10] = (char)(uVar60 >> 0x28);
        auVar19._11_4_ = auVar16._11_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar60;
        auVar24._10_5_ = auVar19._10_5_;
        auVar27[8] = (char)(uVar60 >> 0x20);
        auVar27._0_8_ = uVar60;
        auVar27._9_6_ = auVar24._9_6_;
        auVar36._7_8_ = 0;
        auVar36._0_7_ = auVar27._8_7_;
        Var37 = CONCAT81(SUB158(auVar36 << 0x40,7),(char)(uVar60 >> 0x18));
        auVar49._9_6_ = 0;
        auVar49._0_9_ = Var37;
        auVar38._1_10_ = SUB1510(auVar49 << 0x30,5);
        auVar38[0] = (char)(uVar60 >> 0x10);
        auVar50._11_4_ = 0;
        auVar50._0_11_ = auVar38;
        auVar32[2] = (char)(uVar60 >> 8);
        auVar32._0_2_ = (ushort)uVar60;
        auVar32._3_12_ = SUB1512(auVar50 << 0x20,3);
        auVar7._8_6_ = 0;
        auVar7._0_8_ = uVar4;
        auVar7[0xe] = (char)(uVar4 >> 0x38);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar4;
        auVar13[0xc] = (char)(uVar4 >> 0x30);
        auVar13._13_2_ = auVar7._13_2_;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar4;
        auVar17._12_3_ = auVar13._12_3_;
        auVar20._8_2_ = 0;
        auVar20._0_8_ = uVar4;
        auVar20[10] = (char)(uVar4 >> 0x28);
        auVar20._11_4_ = auVar17._11_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar4;
        auVar25._10_5_ = auVar20._10_5_;
        auVar28[8] = (char)(uVar4 >> 0x20);
        auVar28._0_8_ = uVar4;
        auVar28._9_6_ = auVar25._9_6_;
        auVar39._7_8_ = 0;
        auVar39._0_7_ = auVar28._8_7_;
        Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),(char)(uVar4 >> 0x18));
        auVar51._9_6_ = 0;
        auVar51._0_9_ = Var40;
        auVar41._1_10_ = SUB1510(auVar51 << 0x30,5);
        auVar41[0] = (char)(uVar4 >> 0x10);
        auVar52._11_4_ = 0;
        auVar52._0_11_ = auVar41;
        auVar33[2] = (char)(uVar4 >> 8);
        auVar33._0_2_ = (ushort)uVar4;
        auVar33._3_12_ = SUB1512(auVar52 << 0x20,3);
        sVar65 = (short)Var37 + (short)Var40;
        uVar42 = CONCAT22(auVar27._8_2_ + auVar28._8_2_,sVar65);
        sVar67 = auVar19._10_2_ + auVar20._10_2_;
        uVar53 = CONCAT24(sVar67,uVar42);
        sVar68 = auVar12._12_2_ + auVar13._12_2_;
        sVar69 = (auVar6._13_2_ >> 8) + (auVar7._13_2_ >> 8);
        uVar5 = (ulonglong)(CONCAT28(sVar69,CONCAT26(sVar68,uVar53)) >> 0x10);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar5;
        auVar8._12_2_ = sVar69;
        auVar14._8_2_ = sVar68;
        auVar14._0_8_ = uVar5;
        auVar14._10_4_ = auVar8._10_4_;
        auVar43._6_8_ = 0;
        auVar43._0_6_ = auVar14._8_6_;
        uVar64 = (uint)((uint6)uVar53 >> 0x10);
        auVar21._4_2_ = sVar67;
        auVar21._0_4_ = uVar64;
        auVar21._6_8_ = SUB148(auVar43 << 0x40,6);
        uVar5 = *puVar61;
        puVar61 = puVar61 + 1;
        auVar54._4_8_ = 0;
        auVar54._0_4_ = uVar42;
        auVar9._12_2_ = sVar65;
        auVar9._0_12_ = auVar54 << 0x30;
        uVar55 = CONCAT44(auVar9._10_4_,CONCAT22(auVar38._0_2_ + auVar41._0_2_,sVar65));
        auVar44._6_8_ = 0;
        auVar44._0_6_ = (uint6)((ulonglong)uVar55 >> 0x10);
        uVar66 = (undefined1)(uVar5 >> 0x38);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10[0xe] = uVar66;
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar5;
        auVar15[0xc] = (char)(uVar5 >> 0x30);
        auVar15._13_2_ = auVar10._13_2_;
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar5;
        auVar18._12_3_ = auVar15._12_3_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar5;
        auVar22[10] = (char)(uVar5 >> 0x28);
        auVar22._11_4_ = auVar18._11_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar5;
        auVar26._10_5_ = auVar22._10_5_;
        auVar29[8] = (char)(uVar5 >> 0x20);
        auVar29._0_8_ = uVar5;
        auVar29._9_6_ = auVar26._9_6_;
        auVar45._7_8_ = 0;
        auVar45._0_7_ = auVar29._8_7_;
        Var37 = CONCAT81(SUB158(auVar45 << 0x40,7),(char)(uVar5 >> 0x18));
        auVar56._9_6_ = 0;
        auVar56._0_9_ = Var37;
        auVar46._1_10_ = SUB1510(auVar56 << 0x30,5);
        auVar46[0] = (char)(uVar5 >> 0x10);
        auVar57._11_4_ = 0;
        auVar57._0_11_ = auVar46;
        auVar34[2] = (char)(uVar5 >> 8);
        auVar34._0_2_ = (ushort)uVar5;
        auVar34._3_12_ = SUB1512(auVar57 << 0x20,3);
        auVar35._2_13_ = auVar34._2_13_;
        auVar35._0_2_ = (ushort)uVar5 & 0xff;
        auVar11._10_2_ = 0;
        auVar11._0_10_ = auVar35._0_10_;
        auVar11._12_2_ = (short)Var37;
        uVar58 = CONCAT42(auVar11._10_4_,auVar46._0_2_);
        auVar47._6_8_ = 0;
        auVar47._0_6_ = uVar58;
        auVar23._4_2_ = auVar34._2_2_;
        auVar23._0_4_ = auVar35._0_4_;
        auVar23._6_8_ = SUB148(auVar47 << 0x40,6);
        auVar30[0xc] = uVar66;
        auVar30._0_12_ = ZEXT812(0);
        uVar59 = CONCAT32(auVar30._10_3_,auVar15._12_2_);
        auVar48._5_8_ = 0;
        auVar48._0_5_ = uVar59;
        auVar31._4_2_ = auVar22._10_2_;
        auVar31._0_4_ = auVar29._8_4_;
        auVar31._6_7_ = SUB137(auVar48 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar62 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar60 & 0xff) + ((ushort)uVar4 & 0xff)) * fVar2 +
                  (float)(auVar35._0_4_ & 0xffff) * fVar3;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar44 << 0x40,6),auVar32._2_2_ + auVar33._2_2_) *
                    fVar2 + (float)auVar23._4_4_ * fVar3;
        pfVar1[2] = (float)(int)((ulonglong)uVar55 >> 0x10) * fVar2 + (float)(int)uVar58 * fVar3;
        pfVar1[3] = (float)(auVar9._10_4_ >> 0x10) * fVar2 + (float)(auVar11._10_4_ >> 0x10) * fVar3
        ;
        pfVar1 = (float *)(param_2 + 0x10 + uVar62 * 4);
        *pfVar1 = (float)(uVar64 & 0xffff) * fVar2 + (float)(auVar29._8_4_ & 0xffff) * fVar3;
        pfVar1[1] = (float)auVar21._4_4_ * fVar2 + (float)auVar31._4_4_ * fVar3;
        pfVar1[2] = (float)auVar14._8_4_ * fVar2 + (float)(int)uVar59 * fVar3;
        pfVar1[3] = (float)(auVar8._10_4_ >> 0x10) * fVar2 +
                    (float)(uint3)(auVar30._10_3_ >> 0x10) * fVar3;
        uVar62 = uVar62 + 8;
      } while (uVar62 < uVar63);
      for (; uVar63 < param_3; uVar63 = uVar63 + 1) {
        *(float *)(param_2 + uVar63 * 4) =
             (float)((uint)*(byte *)((uVar63 - 1) + param_1) + (uint)*(byte *)(uVar63 + 1 + param_1)
                    ) * fVar2 + (float)*(byte *)(uVar63 + param_1) * fVar3;
      }
      return;
    }
  }
LAB_1406e0f3d:
  FUN_1406e0ee9(fVar3,0);
  return;
}

