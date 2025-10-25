
void FUN_14019605c(ulonglong param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [15];
  undefined1 auVar10 [14];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [13];
  undefined1 auVar30 [13];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [15];
  unkuint9 Var39;
  undefined1 auVar40 [11];
  uint uVar41;
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [15];
  undefined1 auVar45 [11];
  undefined1 auVar46 [14];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined6 uVar52;
  undefined1 auVar53 [12];
  undefined8 uVar54;
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  uint6 uVar57;
  uint5 uVar58;
  ulonglong in_RAX;
  ulonglong *puVar59;
  longlong in_R9;
  longlong in_R10;
  float in_XMM0_Da;
  uint uVar60;
  short sVar61;
  undefined1 uVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((uint)*(byte *)((in_RAX - 3) + in_R9) + (uint)*(byte *)(in_RAX + 3 + in_R9)) *
         param_4 + (float)*(byte *)(in_RAX + in_R9) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < param_1);
  puVar59 = (ulonglong *)(in_R9 + param_1);
  do {
    uVar2 = *(ulonglong *)((longlong)puVar59 + -3);
    uVar3 = *(ulonglong *)((longlong)puVar59 + 3);
    auVar5._8_6_ = 0;
    auVar5._0_8_ = uVar2;
    auVar5[0xe] = (char)(uVar2 >> 0x38);
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar2;
    auVar11[0xc] = (char)(uVar2 >> 0x30);
    auVar11._13_2_ = auVar5._13_2_;
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar2;
    auVar15._12_3_ = auVar11._12_3_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar2;
    auVar18[10] = (char)(uVar2 >> 0x28);
    auVar18._11_4_ = auVar15._11_4_;
    auVar23._8_2_ = 0;
    auVar23._0_8_ = uVar2;
    auVar23._10_5_ = auVar18._10_5_;
    auVar26[8] = (char)(uVar2 >> 0x20);
    auVar26._0_8_ = uVar2;
    auVar26._9_6_ = auVar23._9_6_;
    auVar35._7_8_ = 0;
    auVar35._0_7_ = auVar26._8_7_;
    Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar48._9_6_ = 0;
    auVar48._0_9_ = Var36;
    auVar37._1_10_ = SUB1510(auVar48 << 0x30,5);
    auVar37[0] = (char)(uVar2 >> 0x10);
    auVar49._11_4_ = 0;
    auVar49._0_11_ = auVar37;
    auVar31[2] = (char)(uVar2 >> 8);
    auVar31._0_2_ = (ushort)uVar2;
    auVar31._3_12_ = SUB1512(auVar49 << 0x20,3);
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar3;
    auVar6[0xe] = (char)(uVar3 >> 0x38);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar3;
    auVar12[0xc] = (char)(uVar3 >> 0x30);
    auVar12._13_2_ = auVar6._13_2_;
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar3;
    auVar16._12_3_ = auVar12._12_3_;
    auVar19._8_2_ = 0;
    auVar19._0_8_ = uVar3;
    auVar19[10] = (char)(uVar3 >> 0x28);
    auVar19._11_4_ = auVar16._11_4_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar3;
    auVar24._10_5_ = auVar19._10_5_;
    auVar27[8] = (char)(uVar3 >> 0x20);
    auVar27._0_8_ = uVar3;
    auVar27._9_6_ = auVar24._9_6_;
    auVar38._7_8_ = 0;
    auVar38._0_7_ = auVar27._8_7_;
    Var39 = CONCAT81(SUB158(auVar38 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar50._9_6_ = 0;
    auVar50._0_9_ = Var39;
    auVar40._1_10_ = SUB1510(auVar50 << 0x30,5);
    auVar40[0] = (char)(uVar3 >> 0x10);
    auVar51._11_4_ = 0;
    auVar51._0_11_ = auVar40;
    auVar32[2] = (char)(uVar3 >> 8);
    auVar32._0_2_ = (ushort)uVar3;
    auVar32._3_12_ = SUB1512(auVar51 << 0x20,3);
    sVar61 = (short)Var36 + (short)Var39;
    uVar41 = CONCAT22(auVar26._8_2_ + auVar27._8_2_,sVar61);
    sVar63 = auVar18._10_2_ + auVar19._10_2_;
    uVar52 = CONCAT24(sVar63,uVar41);
    sVar64 = auVar11._12_2_ + auVar12._12_2_;
    sVar65 = (auVar5._13_2_ >> 8) + (auVar6._13_2_ >> 8);
    uVar4 = (ulonglong)(CONCAT28(sVar65,CONCAT26(sVar64,uVar52)) >> 0x10);
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar4;
    auVar7._12_2_ = sVar65;
    auVar13._8_2_ = sVar64;
    auVar13._0_8_ = uVar4;
    auVar13._10_4_ = auVar7._10_4_;
    auVar42._6_8_ = 0;
    auVar42._0_6_ = auVar13._8_6_;
    uVar60 = (uint)((uint6)uVar52 >> 0x10);
    auVar20._4_2_ = sVar63;
    auVar20._0_4_ = uVar60;
    auVar20._6_8_ = SUB148(auVar42 << 0x40,6);
    uVar4 = *puVar59;
    puVar59 = puVar59 + 1;
    auVar53._4_8_ = 0;
    auVar53._0_4_ = uVar41;
    auVar8._12_2_ = sVar61;
    auVar8._0_12_ = auVar53 << 0x30;
    uVar54 = CONCAT44(auVar8._10_4_,CONCAT22(auVar37._0_2_ + auVar40._0_2_,sVar61));
    auVar43._6_8_ = 0;
    auVar43._0_6_ = (uint6)((ulonglong)uVar54 >> 0x10);
    uVar62 = (undefined1)(uVar4 >> 0x38);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar4;
    auVar9[0xe] = uVar62;
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar4;
    auVar14[0xc] = (char)(uVar4 >> 0x30);
    auVar14._13_2_ = auVar9._13_2_;
    auVar17._8_4_ = 0;
    auVar17._0_8_ = uVar4;
    auVar17._12_3_ = auVar14._12_3_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21[10] = (char)(uVar4 >> 0x28);
    auVar21._11_4_ = auVar17._11_4_;
    auVar25._8_2_ = 0;
    auVar25._0_8_ = uVar4;
    auVar25._10_5_ = auVar21._10_5_;
    auVar28[8] = (char)(uVar4 >> 0x20);
    auVar28._0_8_ = uVar4;
    auVar28._9_6_ = auVar25._9_6_;
    auVar44._7_8_ = 0;
    auVar44._0_7_ = auVar28._8_7_;
    Var36 = CONCAT81(SUB158(auVar44 << 0x40,7),(char)(uVar4 >> 0x18));
    auVar55._9_6_ = 0;
    auVar55._0_9_ = Var36;
    auVar45._1_10_ = SUB1510(auVar55 << 0x30,5);
    auVar45[0] = (char)(uVar4 >> 0x10);
    auVar56._11_4_ = 0;
    auVar56._0_11_ = auVar45;
    auVar33[2] = (char)(uVar4 >> 8);
    auVar33._0_2_ = (ushort)uVar4;
    auVar33._3_12_ = SUB1512(auVar56 << 0x20,3);
    auVar34._2_13_ = auVar33._2_13_;
    auVar34._0_2_ = (ushort)uVar4 & 0xff;
    auVar10._10_2_ = 0;
    auVar10._0_10_ = auVar34._0_10_;
    auVar10._12_2_ = (short)Var36;
    uVar57 = CONCAT42(auVar10._10_4_,auVar45._0_2_);
    auVar46._6_8_ = 0;
    auVar46._0_6_ = uVar57;
    auVar22._4_2_ = auVar33._2_2_;
    auVar22._0_4_ = auVar34._0_4_;
    auVar22._6_8_ = SUB148(auVar46 << 0x40,6);
    auVar29[0xc] = uVar62;
    auVar29._0_12_ = ZEXT812(0);
    uVar58 = CONCAT32(auVar29._10_3_,auVar14._12_2_);
    auVar47._5_8_ = 0;
    auVar47._0_5_ = uVar58;
    auVar30._4_2_ = auVar21._10_2_;
    auVar30._0_4_ = auVar28._8_4_;
    auVar30._6_7_ = SUB137(auVar47 << 0x40,6);
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) * param_4 +
              (float)(auVar34._0_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar43 << 0x40,6),auVar31._2_2_ + auVar32._2_2_) *
                param_4 + (float)auVar22._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(int)((ulonglong)uVar54 >> 0x10) * param_4 + (float)(int)uVar57 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar8._10_4_ >> 0x10) * param_4 +
                (float)(auVar10._10_4_ >> 0x10) * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x10 + param_1 * 4);
    *pfVar1 = (float)(uVar60 & 0xffff) * param_4 + (float)(auVar28._8_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)auVar20._4_4_ * param_4 + (float)auVar30._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar13._8_4_ * param_4 + (float)(int)uVar58 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar7._10_4_ >> 0x10) * param_4 +
                (float)(uint3)(auVar29._10_3_ >> 0x10) * in_XMM0_Da;
    param_1 = param_1 + 8;
  } while (param_1 < param_2);
  if (param_2 < param_3) {
    do {
      *(float *)(in_R10 + param_2 * 4) =
           (float)((uint)*(byte *)((param_2 - 3) + in_R9) + (uint)*(byte *)(param_2 + 3 + in_R9)) *
           param_4 + (float)*(byte *)(param_2 + in_R9) * in_XMM0_Da;
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

