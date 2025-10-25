
void FUN_140010333(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  int in_EAX;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int unaff_EBX;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined4 uVar42;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar33 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 auVar43 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [12];
  undefined1 auVar59 [16];
  undefined1 auVar68 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  do {
    puVar15 = param_2;
    puVar14 = param_1;
    uVar1 = *puVar14;
    uVar2 = puVar14[1];
    uVar41 = in_XMM0[7];
    auVar29._0_14_ = in_XMM0._0_14_;
    auVar29[0xe] = uVar41;
    auVar29[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar28._14_2_ = auVar29._14_2_;
    auVar28._0_13_ = in_XMM0._0_13_;
    auVar28[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    uVar40 = in_XMM0[6];
    auVar27._13_3_ = auVar28._13_3_;
    auVar27._0_12_ = in_XMM0._0_12_;
    auVar27[0xc] = uVar40;
    auVar26._12_4_ = auVar27._12_4_;
    auVar26._0_11_ = in_XMM0._0_11_;
    auVar26[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    uVar39 = in_XMM0[5];
    auVar25._11_5_ = auVar26._11_5_;
    auVar25._0_10_ = in_XMM0._0_10_;
    auVar25[10] = uVar39;
    auVar24._10_6_ = auVar25._10_6_;
    auVar24._0_9_ = in_XMM0._0_9_;
    auVar24[9] = (char)((ulonglong)uVar1 >> 0x20);
    uVar38 = in_XMM0[4];
    auVar23._9_7_ = auVar24._9_7_;
    auVar23._0_8_ = in_XMM0._0_8_;
    auVar23[8] = uVar38;
    auVar22._8_8_ = auVar23._8_8_;
    auVar22[7] = (char)((ulonglong)uVar1 >> 0x18);
    uVar37 = in_XMM0[3];
    auVar22[6] = uVar37;
    auVar22[5] = (char)((ulonglong)uVar1 >> 0x10);
    uVar36 = in_XMM0[2];
    auVar22[4] = uVar36;
    auVar22[3] = (char)((ulonglong)uVar1 >> 8);
    uVar35 = in_XMM0[1];
    auVar22[2] = uVar35;
    auVar22[0] = in_XMM0[0];
    auVar22[1] = (char)uVar1;
    uVar1 = puVar14[2];
    in_EAX = in_EAX + 8;
    auVar65[0xe] = uVar41;
    auVar65._0_14_ = auVar29._0_14_;
    auVar65[0xf] = (char)((ulonglong)uVar2 >> 0x38);
    auVar64._14_2_ = auVar65._14_2_;
    auVar64[0xd] = (char)((ulonglong)uVar2 >> 0x30);
    auVar64._0_13_ = auVar28._0_13_;
    auVar63._13_3_ = auVar64._13_3_;
    auVar63[0xc] = uVar40;
    auVar63._0_12_ = auVar27._0_12_;
    auVar62._12_4_ = auVar63._12_4_;
    auVar62[0xb] = (char)((ulonglong)uVar2 >> 0x28);
    auVar62._0_11_ = auVar26._0_11_;
    auVar61._11_5_ = auVar62._11_5_;
    auVar61[10] = uVar39;
    auVar61._0_10_ = auVar25._0_10_;
    auVar60._10_6_ = auVar61._10_6_;
    auVar60[9] = (char)((ulonglong)uVar2 >> 0x20);
    auVar60._0_9_ = auVar24._0_9_;
    auVar59._9_7_ = auVar60._9_7_;
    auVar59[8] = uVar38;
    auVar59._0_8_ = auVar23._0_8_;
    auVar58._8_8_ = auVar59._8_8_;
    auVar58[7] = (char)((ulonglong)uVar2 >> 0x18);
    auVar58[6] = uVar37;
    auVar58[5] = (char)((ulonglong)uVar2 >> 0x10);
    auVar58[4] = uVar36;
    auVar58[3] = (char)((ulonglong)uVar2 >> 8);
    auVar58[2] = uVar35;
    auVar58[1] = (char)uVar2;
    auVar58[0] = auVar22[0];
    uVar2 = puVar14[3];
    param_1 = puVar14 + 4;
    auVar30._8_8_ = in_XMM2_Qb;
    auVar30._0_8_ = in_XMM2_Qa;
    auVar30 = pmulhuw(auVar22,auVar30);
    auVar53._8_8_ = in_XMM2_Qb;
    auVar53._0_8_ = in_XMM2_Qa;
    auVar66 = pmulhuw(auVar58,auVar53);
    auVar52[0xe] = uVar41;
    auVar52._0_14_ = auVar29._0_14_;
    auVar52[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar51._14_2_ = auVar52._14_2_;
    auVar51[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar51._0_13_ = auVar28._0_13_;
    auVar50._13_3_ = auVar51._13_3_;
    auVar50[0xc] = uVar40;
    auVar50._0_12_ = auVar27._0_12_;
    auVar49._12_4_ = auVar50._12_4_;
    auVar49[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar49._0_11_ = auVar26._0_11_;
    auVar48._11_5_ = auVar49._11_5_;
    auVar48[10] = uVar39;
    auVar48._0_10_ = auVar25._0_10_;
    auVar47._10_6_ = auVar48._10_6_;
    auVar47[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar47._0_9_ = auVar24._0_9_;
    auVar46._9_7_ = auVar47._9_7_;
    auVar46[8] = uVar38;
    auVar46._0_8_ = auVar23._0_8_;
    auVar45._8_8_ = auVar46._8_8_;
    auVar45[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar45[6] = uVar37;
    auVar45[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar45[4] = uVar36;
    auVar45[3] = (char)((ulonglong)uVar1 >> 8);
    auVar45[2] = uVar35;
    auVar45[1] = (char)uVar1;
    auVar45[0] = auVar22[0];
    auVar80._8_8_ = in_XMM2_Qb;
    auVar80._0_8_ = in_XMM2_Qa;
    auVar53 = pmulhuw(auVar45,auVar80);
    auVar79[0xe] = uVar41;
    auVar79._0_14_ = auVar29._0_14_;
    auVar79[0xf] = (char)((ulonglong)uVar2 >> 0x38);
    auVar78._14_2_ = auVar79._14_2_;
    auVar78[0xd] = (char)((ulonglong)uVar2 >> 0x30);
    auVar78._0_13_ = auVar28._0_13_;
    auVar77._13_3_ = auVar78._13_3_;
    auVar77[0xc] = uVar40;
    auVar77._0_12_ = auVar27._0_12_;
    auVar76._12_4_ = auVar77._12_4_;
    auVar76[0xb] = (char)((ulonglong)uVar2 >> 0x28);
    auVar76._0_11_ = auVar26._0_11_;
    auVar75._11_5_ = auVar76._11_5_;
    auVar75[10] = uVar39;
    auVar75._0_10_ = auVar25._0_10_;
    auVar74._10_6_ = auVar75._10_6_;
    auVar74[9] = (char)((ulonglong)uVar2 >> 0x20);
    auVar74._0_9_ = auVar24._0_9_;
    auVar73._9_7_ = auVar74._9_7_;
    auVar73[8] = uVar38;
    auVar73._0_8_ = auVar23._0_8_;
    auVar72._8_8_ = auVar73._8_8_;
    auVar72[7] = (char)((ulonglong)uVar2 >> 0x18);
    auVar72[6] = uVar37;
    auVar72[5] = (char)((ulonglong)uVar2 >> 0x10);
    auVar72[4] = uVar36;
    auVar72[3] = (char)((ulonglong)uVar2 >> 8);
    auVar72[2] = uVar35;
    auVar72[1] = (char)uVar2;
    auVar72[0] = auVar22[0];
    auVar11._8_8_ = in_XMM2_Qb;
    auVar11._0_8_ = in_XMM2_Qa;
    auVar80 = pmulhuw(auVar72,auVar11);
    auVar57._0_8_ = auVar30._0_8_;
    auVar57._8_8_ = auVar66._0_8_;
    auVar44._0_8_ = auVar53._0_8_;
    auVar44._8_8_ = auVar80._0_8_;
    auVar70._0_12_ = auVar57._0_12_;
    auVar70._12_2_ = auVar30._6_2_;
    auVar70._14_2_ = auVar30._14_2_;
    auVar69._12_4_ = auVar70._12_4_;
    auVar69._0_10_ = auVar57._0_10_;
    auVar69._10_2_ = auVar30._12_2_;
    auVar68._10_6_ = auVar69._10_6_;
    auVar68._8_2_ = auVar30._4_2_;
    auVar68._0_8_ = auVar57._0_8_;
    auVar12._4_8_ = auVar68._8_8_;
    auVar12._2_2_ = auVar30._10_2_;
    auVar12._0_2_ = auVar30._2_2_;
    auVar67._0_4_ = CONCAT22(auVar30._8_2_,auVar30._0_2_);
    auVar67._4_12_ = auVar12;
    uVar55 = CONCAT22(auVar66._8_2_,auVar66._0_2_);
    auVar56._0_8_ = CONCAT26(auVar66._10_2_,CONCAT24(auVar66._2_2_,uVar55));
    auVar56._8_2_ = auVar66._4_2_;
    auVar56._10_2_ = auVar66._12_2_;
    auVar33._0_12_ = auVar44._0_12_;
    auVar33._12_2_ = auVar53._6_2_;
    auVar33._14_2_ = auVar53._14_2_;
    auVar32._12_4_ = auVar33._12_4_;
    auVar32._0_10_ = auVar44._0_10_;
    auVar32._10_2_ = auVar53._12_2_;
    auVar31._10_6_ = auVar32._10_6_;
    auVar31._8_2_ = auVar53._4_2_;
    auVar31._0_8_ = auVar44._0_8_;
    auVar13._4_8_ = auVar31._8_8_;
    auVar13._2_2_ = auVar53._10_2_;
    auVar13._0_2_ = auVar53._2_2_;
    auVar66._0_4_ = CONCAT22(auVar53._8_2_,auVar53._0_2_);
    auVar66._4_12_ = auVar13;
    uVar42 = CONCAT22(auVar80._8_2_,auVar80._0_2_);
    auVar43._0_8_ = CONCAT26(auVar80._10_2_,CONCAT24(auVar80._2_2_,uVar42));
    auVar43._8_2_ = auVar80._4_2_;
    auVar43._10_2_ = auVar80._12_2_;
    auVar81._0_8_ = auVar67._0_8_;
    auVar81._8_4_ = auVar12._0_4_;
    auVar81._12_4_ = (int)((ulonglong)auVar56._0_8_ >> 0x20);
    auVar34._4_4_ = uVar55;
    auVar34._0_4_ = auVar67._0_4_;
    auVar71._4_4_ = auVar56._8_4_;
    auVar71._0_4_ = auVar68._8_4_;
    auVar71._12_4_ = auVar43._8_4_;
    auVar71._8_4_ = auVar31._8_4_;
    auVar54._0_8_ = auVar66._0_8_;
    auVar54._8_4_ = auVar13._0_4_;
    auVar54._12_4_ = (int)((ulonglong)auVar43._0_8_ >> 0x20);
    auVar34._12_4_ = uVar42;
    auVar34._8_4_ = auVar66._0_4_;
    auVar82._8_8_ = auVar54._8_8_;
    auVar82._0_8_ = auVar81._8_8_;
    auVar30 = paddusw(auVar71,auVar34);
    auVar30 = paddusw(auVar30,auVar82);
    auVar30 = paddusw(auVar30,in_XMM1);
    auVar30 = psraw(auVar30,7);
    sVar3 = auVar30._0_2_;
    sVar4 = auVar30._2_2_;
    sVar5 = auVar30._4_2_;
    sVar6 = auVar30._6_2_;
    sVar7 = auVar30._8_2_;
    sVar8 = auVar30._10_2_;
    sVar9 = auVar30._12_2_;
    sVar10 = auVar30._14_2_;
    *puVar15 = CONCAT17((0 < sVar10) * (sVar10 < 0x100) * auVar30[0xe] - (0xff < sVar10),
                        CONCAT16((0 < sVar9) * (sVar9 < 0x100) * auVar30[0xc] - (0xff < sVar9),
                                 CONCAT15((0 < sVar8) * (sVar8 < 0x100) * auVar30[10] -
                                          (0xff < sVar8),
                                          CONCAT14((0 < sVar7) * (sVar7 < 0x100) * auVar30[8] -
                                                   (0xff < sVar7),
                                                   CONCAT13((0 < sVar6) * (sVar6 < 0x100) *
                                                            auVar30[6] - (0xff < sVar6),
                                                            CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                                                     auVar30[4] - (0xff < sVar5),
                                                                     CONCAT11((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              auVar30[2] -
                                                                              (0xff < sVar4),
                                                                              (0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              auVar30[0] -
                                                                              (0xff < sVar3))))))));
    param_2 = puVar15 + 1;
  } while (in_EAX < unaff_EBX);
  param_3 = param_3 & 7;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar18 = (uint)(ushort)in_XMM2_Qa;
  uVar17 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x10);
  uVar16 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x20);
  if (((longlong)param_2 - (longlong)param_1 < (longlong)((ulonglong)param_3 * 4 + -1)) &&
     (-((longlong)param_2 - (longlong)param_1) < (longlong)(ulonglong)param_3)) {
    iVar19 = 1;
    uVar21 = 0;
    if (param_3 >> 1 != 0) {
      do {
        *(char *)((longlong)param_2 + uVar21 * 2) =
             (char)(*(byte *)(param_1 + uVar21) * uVar18 +
                    *(byte *)((longlong)puVar14 + uVar21 * 8 + 0x21) * uVar17 +
                    *(byte *)((longlong)puVar14 + uVar21 * 8 + 0x22) * uVar16 + 0x4000 >> 0xf);
        *(char *)((longlong)puVar15 + uVar21 * 2 + 9) =
             (char)(*(byte *)((longlong)puVar14 + uVar21 * 8 + 0x24) * uVar18 +
                    *(byte *)((longlong)puVar14 + uVar21 * 8 + 0x25) * uVar17 +
                    *(byte *)((longlong)puVar14 + uVar21 * 8 + 0x26) * uVar16 + 0x4000 >> 0xf);
        uVar21 = uVar21 + 1;
      } while (uVar21 < param_3 >> 1);
      iVar19 = (int)uVar21 * 2 + 1;
    }
    if (param_3 <= iVar19 - 1U) {
      return;
    }
    lVar20 = (longlong)iVar19;
    *(char *)(lVar20 + -1 + (longlong)param_2) =
         (char)(uVar18 * *(byte *)((longlong)puVar14 + lVar20 * 4 + 0x1c) +
                uVar17 * *(byte *)((longlong)puVar14 + lVar20 * 4 + 0x1d) +
                uVar16 * *(byte *)((longlong)puVar14 + lVar20 * 4 + 0x1e) + 0x4000 >> 0xf);
    return;
  }
  switch(param_3) {
  case 1:
    goto LAB_14001060d;
  case 2:
    goto LAB_1400105d6;
  case 3:
    goto LAB_14001059d;
  case 4:
    goto LAB_140010564;
  case 5:
    goto LAB_14001052b;
  case 6:
    break;
  case 7:
    *(char *)((longlong)puVar15 + 0xe) =
         (char)(*(byte *)(puVar14 + 7) * uVar18 + *(byte *)((longlong)puVar14 + 0x39) * uVar17 +
                0x4000 + *(byte *)((longlong)puVar14 + 0x3a) * uVar16 >> 0xf);
    break;
  default:
    goto switchD_1400104b2_default;
  }
  *(char *)((longlong)puVar15 + 0xd) =
       (char)(*(byte *)((longlong)puVar14 + 0x34) * uVar18 +
              *(byte *)((longlong)puVar14 + 0x35) * uVar17 + 0x4000 +
              *(byte *)((longlong)puVar14 + 0x36) * uVar16 >> 0xf);
LAB_14001052b:
  *(char *)((longlong)puVar15 + 0xc) =
       (char)(*(byte *)(puVar14 + 6) * uVar18 + *(byte *)((longlong)puVar14 + 0x31) * uVar17 +
              0x4000 + *(byte *)((longlong)puVar14 + 0x32) * uVar16 >> 0xf);
LAB_140010564:
  *(char *)((longlong)puVar15 + 0xb) =
       (char)(*(byte *)((longlong)puVar14 + 0x2c) * uVar18 +
              *(byte *)((longlong)puVar14 + 0x2d) * uVar17 + 0x4000 +
              *(byte *)((longlong)puVar14 + 0x2e) * uVar16 >> 0xf);
LAB_14001059d:
  *(char *)((longlong)puVar15 + 10) =
       (char)(*(byte *)(puVar14 + 5) * uVar18 + *(byte *)((longlong)puVar14 + 0x29) * uVar17 +
              0x4000 + *(byte *)((longlong)puVar14 + 0x2a) * uVar16 >> 0xf);
LAB_1400105d6:
  *(char *)((longlong)puVar15 + 9) =
       (char)(*(byte *)((longlong)puVar14 + 0x24) * uVar18 +
              *(byte *)((longlong)puVar14 + 0x25) * uVar17 + 0x4000 +
              *(byte *)((longlong)puVar14 + 0x26) * uVar16 >> 0xf);
LAB_14001060d:
  *(char *)param_2 =
       (char)(uVar18 * *(byte *)(puVar14 + 4) + uVar17 * *(byte *)((longlong)puVar14 + 0x21) +
              uVar16 * *(byte *)((longlong)puVar14 + 0x22) + 0x4000 >> 0xf);
switchD_1400104b2_default:
  return;
}

