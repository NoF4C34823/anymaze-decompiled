
void FUN_1405c806c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [14];
  unkbyte10 Var6;
  undefined1 auVar7 [14];
  unkbyte10 Var8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  int iVar12;
  ulonglong uVar13;
  ulonglong in_R9;
  longlong in_R10;
  uint *puVar14;
  ulonglong uVar15;
  float in_XMM0_Da;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 uVar16;
  undefined2 in_XMM4_Wa;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined2 in_XMM4_Wb;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 in_XMM4_Wc;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined2 in_XMM4_Wd;
  undefined1 uVar23;
  short sVar32;
  undefined1 auVar24 [16];
  undefined2 uVar53;
  undefined1 auVar33 [16];
  undefined1 auVar50 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar40 [16];
  undefined1 auVar49 [16];
  undefined1 auVar41 [16];
  
  if (param_3 + 1U <= in_R9) {
    in_R9 = in_R9 - param_3;
    if ((longlong)in_R9 < 4) {
      FUN_1405c80ef();
      return;
    }
    uVar15 = 0;
    puVar14 = (uint *)(param_1 + param_3);
    uVar13 = in_R9 & 0xfffffffffffffffc;
    do {
      uVar2 = *(uint *)((longlong)puVar14 + -3);
      uVar3 = *(uint *)((longlong)puVar14 + 3);
      uVar23 = (undefined1)((ushort)in_XMM4_Wd >> 8);
      auVar31._0_15_ = ZEXT415(uVar2);
      auVar31[0xf] = uVar23;
      uVar22 = (undefined1)in_XMM4_Wd;
      auVar30._14_2_ = auVar31._14_2_;
      auVar30._0_13_ = ZEXT413(uVar2);
      auVar30[0xd] = uVar22;
      auVar29._13_3_ = auVar30._13_3_;
      auVar29._0_13_ = ZEXT413(uVar2);
      uVar21 = (undefined1)((ushort)in_XMM4_Wc >> 8);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._4_7_ = 0;
      auVar28._0_4_ = uVar2;
      auVar28[0xb] = uVar21;
      auVar27._11_5_ = auVar28._11_5_;
      auVar27._4_7_ = 0;
      auVar27._0_4_ = uVar2;
      uVar20 = (undefined1)in_XMM4_Wc;
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._4_5_ = 0;
      auVar26._0_4_ = uVar2;
      auVar26[9] = uVar20;
      auVar25._9_7_ = auVar26._9_7_;
      auVar25._4_5_ = 0;
      auVar25._0_4_ = uVar2;
      uVar19 = (undefined1)((ushort)in_XMM4_Wb >> 8);
      Var6 = CONCAT91(CONCAT81(auVar25._8_8_,uVar19),(char)(uVar2 >> 0x18));
      uVar18 = (undefined1)in_XMM4_Wb;
      auVar24._6_10_ = Var6;
      auVar24[5] = uVar18;
      auVar24[4] = (char)(uVar2 >> 0x10);
      auVar24._0_4_ = uVar2;
      uVar17 = (undefined1)((ushort)in_XMM4_Wa >> 8);
      auVar5._2_12_ = auVar24._4_12_;
      auVar5[1] = uVar17;
      auVar5[0] = (char)(uVar2 >> 8);
      uVar16 = (undefined1)in_XMM4_Wa;
      auVar40._0_15_ = ZEXT415(uVar3);
      auVar40[0xf] = uVar23;
      auVar39._14_2_ = auVar40._14_2_;
      auVar39._0_13_ = ZEXT413(uVar3);
      auVar39[0xd] = uVar22;
      auVar38._13_3_ = auVar39._13_3_;
      auVar38._0_13_ = ZEXT413(uVar3);
      auVar37._12_4_ = auVar38._12_4_;
      auVar37._4_7_ = 0;
      auVar37._0_4_ = uVar3;
      auVar37[0xb] = uVar21;
      auVar36._11_5_ = auVar37._11_5_;
      auVar36._4_7_ = 0;
      auVar36._0_4_ = uVar3;
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._4_5_ = 0;
      auVar35._0_4_ = uVar3;
      auVar35[9] = uVar20;
      auVar34._9_7_ = auVar35._9_7_;
      auVar34._4_5_ = 0;
      auVar34._0_4_ = uVar3;
      Var8 = CONCAT91(CONCAT81(auVar34._8_8_,uVar19),(char)(uVar3 >> 0x18));
      auVar33._6_10_ = Var8;
      auVar33[5] = uVar18;
      auVar33[4] = (char)(uVar3 >> 0x10);
      auVar33._0_4_ = uVar3;
      auVar7._2_12_ = auVar33._4_12_;
      auVar7[1] = uVar17;
      auVar7[0] = (char)(uVar3 >> 8);
      sVar32 = (short)Var6 + (short)Var8;
      uVar4 = *puVar14;
      puVar14 = puVar14 + 1;
      auVar49._0_15_ = ZEXT415(uVar4);
      auVar49[0xf] = uVar23;
      auVar48._14_2_ = auVar49._14_2_;
      auVar48._0_13_ = ZEXT413(uVar4);
      auVar48[0xd] = uVar22;
      auVar47._13_3_ = auVar48._13_3_;
      auVar47._0_13_ = ZEXT413(uVar4);
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._4_7_ = 0;
      auVar46._0_4_ = uVar4;
      auVar46[0xb] = uVar21;
      auVar45._11_5_ = auVar46._11_5_;
      auVar45._4_7_ = 0;
      auVar45._0_4_ = uVar4;
      auVar44._10_6_ = auVar45._10_6_;
      auVar44._4_5_ = 0;
      auVar44._0_4_ = uVar4;
      auVar44[9] = uVar20;
      auVar43._9_7_ = auVar44._9_7_;
      auVar43._4_5_ = 0;
      auVar43._0_4_ = uVar4;
      Var6 = CONCAT91(CONCAT81(auVar43._8_8_,uVar19),(char)(uVar4 >> 0x18));
      auVar42._6_10_ = Var6;
      auVar42[5] = uVar18;
      auVar42[4] = (char)(uVar4 >> 0x10);
      auVar42._0_4_ = uVar4;
      auVar9._2_12_ = auVar42._4_12_;
      auVar9[1] = uVar17;
      auVar9[0] = (char)(uVar4 >> 8);
      uVar53 = CONCAT11(uVar16,(char)uVar4);
      auVar41._2_14_ = auVar9;
      iVar12 = CONCAT22(in_XMM4_Wd,sVar32);
      Var8 = CONCAT64(CONCAT42(iVar12,in_XMM4_Wc),CONCAT22(auVar24._4_2_ + auVar33._4_2_,sVar32));
      auVar10._4_8_ = (longlong)((unkuint10)Var8 >> 0x10);
      auVar10._2_2_ = in_XMM4_Wb;
      auVar10._0_2_ = auVar5._0_2_ + auVar7._0_2_;
      auVar52._0_12_ = auVar41._0_12_;
      auVar52._12_2_ = (short)Var6;
      auVar52._14_2_ = in_XMM4_Wd;
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar41._0_10_;
      auVar51._10_2_ = in_XMM4_Wc;
      auVar50._10_6_ = auVar51._10_6_;
      auVar50._0_8_ = auVar41._0_8_;
      auVar50._8_2_ = auVar42._4_2_;
      auVar11._4_8_ = auVar50._8_8_;
      auVar11._2_2_ = in_XMM4_Wb;
      auVar11._0_2_ = auVar9._0_2_;
      pfVar1 = (float *)(in_R10 + param_3 * 4 + uVar15 * 4);
      *pfVar1 = (float)CONCAT22(in_XMM4_Wa,
                                CONCAT11(uVar16,(char)uVar2) + CONCAT11(uVar16,(char)uVar3)) *
                (float)param_2 + (float)CONCAT22(in_XMM4_Wa,uVar53) * (float)param_4;
      pfVar1[1] = (float)auVar10._0_4_ * (float)((ulonglong)param_2 >> 0x20) +
                  (float)auVar11._0_4_ * (float)((ulonglong)param_4 >> 0x20);
      pfVar1[2] = (float)(int)((unkuint10)Var8 >> 0x10) * in_XMM1_Dc +
                  (float)auVar50._8_4_ * in_XMM3_Dc;
      pfVar1[3] = (float)iVar12 * in_XMM1_Dd + (float)auVar51._12_4_ * in_XMM3_Dd;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar13);
    if (uVar13 < in_R9) {
      param_1 = param_1 + param_3;
      do {
        *(float *)(in_R10 + param_3 * 4 + uVar13 * 4) =
             (float)((uint)*(byte *)((uVar13 - 3) + param_1) + (uint)*(byte *)(uVar13 + 3 + param_1)
                    ) * in_XMM2_Da + (float)*(byte *)(uVar13 + param_1) * in_XMM0_Da;
        uVar13 = uVar13 + 1;
      } while (uVar13 < in_R9);
    }
  }
  return;
}

