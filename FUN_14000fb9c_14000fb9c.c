
void FUN_14000fb9c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  int in_EAX;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int unaff_ESI;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined1 auVar75 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar34 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar35 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 auVar45 [16];
  undefined1 auVar54 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar70 [12];
  undefined1 auVar76 [16];
  undefined1 auVar74 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  
  do {
    puVar16 = param_2;
    puVar15 = param_1;
    uVar1 = *puVar15;
    uVar2 = puVar15[1];
    uVar3 = puVar15[2];
    in_EAX = in_EAX + 8;
    uVar43 = in_XMM0[7];
    auVar31._0_14_ = in_XMM0._0_14_;
    auVar31[0xe] = uVar43;
    auVar31[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar30._14_2_ = auVar31._14_2_;
    auVar30._0_13_ = in_XMM0._0_13_;
    auVar30[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    uVar42 = in_XMM0[6];
    auVar29._13_3_ = auVar30._13_3_;
    auVar29._0_12_ = in_XMM0._0_12_;
    auVar29[0xc] = uVar42;
    auVar28._12_4_ = auVar29._12_4_;
    auVar28._0_11_ = in_XMM0._0_11_;
    auVar28[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    uVar41 = in_XMM0[5];
    auVar27._11_5_ = auVar28._11_5_;
    auVar27._0_10_ = in_XMM0._0_10_;
    auVar27[10] = uVar41;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._0_9_ = in_XMM0._0_9_;
    auVar26[9] = (char)((ulonglong)uVar1 >> 0x20);
    uVar40 = in_XMM0[4];
    auVar25._9_7_ = auVar26._9_7_;
    auVar25._0_8_ = in_XMM0._0_8_;
    auVar25[8] = uVar40;
    auVar24._8_8_ = auVar25._8_8_;
    auVar24[7] = (char)((ulonglong)uVar1 >> 0x18);
    uVar39 = in_XMM0[3];
    auVar24[6] = uVar39;
    auVar24[5] = (char)((ulonglong)uVar1 >> 0x10);
    uVar38 = in_XMM0[2];
    auVar24[4] = uVar38;
    auVar24[3] = (char)((ulonglong)uVar1 >> 8);
    uVar37 = in_XMM0[1];
    auVar24[2] = uVar37;
    auVar24[0] = in_XMM0[0];
    auVar24[1] = (char)uVar1;
    auVar32._8_8_ = in_XMM2_Qb;
    auVar32._0_8_ = in_XMM2_Qa;
    auVar32 = pmulhuw(auVar24,auVar32);
    auVar82[0xe] = uVar43;
    auVar82._0_14_ = auVar31._0_14_;
    auVar82[0xf] = (char)((ulonglong)uVar2 >> 0x38);
    auVar81._14_2_ = auVar82._14_2_;
    auVar81[0xd] = (char)((ulonglong)uVar2 >> 0x30);
    auVar81._0_13_ = auVar30._0_13_;
    auVar80._13_3_ = auVar81._13_3_;
    auVar80[0xc] = uVar42;
    auVar80._0_12_ = auVar29._0_12_;
    auVar79._12_4_ = auVar80._12_4_;
    auVar79[0xb] = (char)((ulonglong)uVar2 >> 0x28);
    auVar79._0_11_ = auVar28._0_11_;
    auVar78._11_5_ = auVar79._11_5_;
    auVar78[10] = uVar41;
    auVar78._0_10_ = auVar27._0_10_;
    auVar77._10_6_ = auVar78._10_6_;
    auVar77[9] = (char)((ulonglong)uVar2 >> 0x20);
    auVar77._0_9_ = auVar26._0_9_;
    auVar76._9_7_ = auVar77._9_7_;
    auVar76[8] = uVar40;
    auVar76._0_8_ = auVar25._0_8_;
    auVar75._8_8_ = auVar76._8_8_;
    auVar75[7] = (char)((ulonglong)uVar2 >> 0x18);
    auVar75[6] = uVar39;
    auVar75[5] = (char)((ulonglong)uVar2 >> 0x10);
    auVar75[4] = uVar38;
    auVar75[3] = (char)((ulonglong)uVar2 >> 8);
    auVar75[2] = uVar37;
    auVar75[1] = (char)uVar2;
    auVar75[0] = auVar24[0];
    uVar1 = puVar15[3];
    param_1 = puVar15 + 4;
    auVar65[0xe] = uVar43;
    auVar65._0_14_ = auVar31._0_14_;
    auVar65[0xf] = (char)((ulonglong)uVar3 >> 0x38);
    auVar64._14_2_ = auVar65._14_2_;
    auVar64[0xd] = (char)((ulonglong)uVar3 >> 0x30);
    auVar64._0_13_ = auVar30._0_13_;
    auVar63._13_3_ = auVar64._13_3_;
    auVar63[0xc] = uVar42;
    auVar63._0_12_ = auVar29._0_12_;
    auVar62._12_4_ = auVar63._12_4_;
    auVar62[0xb] = (char)((ulonglong)uVar3 >> 0x28);
    auVar62._0_11_ = auVar28._0_11_;
    auVar61._11_5_ = auVar62._11_5_;
    auVar61[10] = uVar41;
    auVar61._0_10_ = auVar27._0_10_;
    auVar60._10_6_ = auVar61._10_6_;
    auVar60[9] = (char)((ulonglong)uVar3 >> 0x20);
    auVar60._0_9_ = auVar26._0_9_;
    auVar59._9_7_ = auVar60._9_7_;
    auVar59[8] = uVar40;
    auVar59._0_8_ = auVar25._0_8_;
    auVar58._8_8_ = auVar59._8_8_;
    auVar58[7] = (char)((ulonglong)uVar3 >> 0x18);
    auVar58[6] = uVar39;
    auVar58[5] = (char)((ulonglong)uVar3 >> 0x10);
    auVar58[4] = uVar38;
    auVar58[3] = (char)((ulonglong)uVar3 >> 8);
    auVar58[2] = uVar37;
    auVar58[1] = (char)uVar3;
    auVar58[0] = auVar24[0];
    auVar52._8_8_ = in_XMM2_Qb;
    auVar52._0_8_ = in_XMM2_Qa;
    auVar83 = pmulhuw(auVar75,auVar52);
    auVar66._8_8_ = in_XMM2_Qb;
    auVar66._0_8_ = in_XMM2_Qa;
    auVar66 = pmulhuw(auVar58,auVar66);
    auVar51[0xe] = uVar43;
    auVar51._0_14_ = auVar31._0_14_;
    auVar51[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar50._14_2_ = auVar51._14_2_;
    auVar50[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar50._0_13_ = auVar30._0_13_;
    auVar49._13_3_ = auVar50._13_3_;
    auVar49[0xc] = uVar42;
    auVar49._0_12_ = auVar29._0_12_;
    auVar48._12_4_ = auVar49._12_4_;
    auVar48[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar48._0_11_ = auVar28._0_11_;
    auVar47._11_5_ = auVar48._11_5_;
    auVar47[10] = uVar41;
    auVar47._0_10_ = auVar27._0_10_;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar46._0_9_ = auVar26._0_9_;
    auVar45._9_7_ = auVar46._9_7_;
    auVar45[8] = uVar40;
    auVar45._0_8_ = auVar25._0_8_;
    auVar44._8_8_ = auVar45._8_8_;
    auVar44[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar44[6] = uVar39;
    auVar44[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar44[4] = uVar38;
    auVar44[3] = (char)((ulonglong)uVar1 >> 8);
    auVar44[2] = uVar37;
    auVar44[1] = (char)uVar1;
    auVar44[0] = auVar24[0];
    auVar12._8_8_ = in_XMM2_Qb;
    auVar12._0_8_ = in_XMM2_Qa;
    auVar52 = pmulhuw(auVar44,auVar12);
    auVar71._0_8_ = auVar32._0_8_;
    auVar71._8_8_ = auVar83._0_8_;
    auVar84._0_8_ = auVar66._0_8_;
    auVar84._8_8_ = auVar52._0_8_;
    auVar56._0_12_ = auVar71._0_12_;
    auVar56._12_2_ = auVar32._6_2_;
    auVar56._14_2_ = auVar32._14_2_;
    auVar55._12_4_ = auVar56._12_4_;
    auVar55._0_10_ = auVar71._0_10_;
    auVar55._10_2_ = auVar32._12_2_;
    auVar54._10_6_ = auVar55._10_6_;
    auVar54._8_2_ = auVar32._4_2_;
    auVar54._0_8_ = auVar71._0_8_;
    auVar13._4_8_ = auVar54._8_8_;
    auVar13._2_2_ = auVar32._10_2_;
    auVar13._0_2_ = auVar32._2_2_;
    auVar53._0_4_ = CONCAT22(auVar32._8_2_,auVar32._0_2_);
    auVar53._4_12_ = auVar13;
    uVar69 = CONCAT22(auVar83._8_2_,auVar83._0_2_);
    auVar70._0_8_ = CONCAT26(auVar83._10_2_,CONCAT24(auVar83._2_2_,uVar69));
    auVar70._8_2_ = auVar83._4_2_;
    auVar70._10_2_ = auVar83._12_2_;
    auVar35._0_12_ = auVar84._0_12_;
    auVar35._12_2_ = auVar66._6_2_;
    auVar35._14_2_ = auVar66._14_2_;
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._0_10_ = auVar84._0_10_;
    auVar34._10_2_ = auVar66._12_2_;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._8_2_ = auVar66._4_2_;
    auVar33._0_8_ = auVar84._0_8_;
    auVar14._4_8_ = auVar33._8_8_;
    auVar14._2_2_ = auVar66._10_2_;
    auVar14._0_2_ = auVar66._2_2_;
    auVar83._0_4_ = CONCAT22(auVar66._8_2_,auVar66._0_2_);
    auVar83._4_12_ = auVar14;
    uVar73 = CONCAT22(auVar52._8_2_,auVar52._0_2_);
    auVar74._0_8_ = CONCAT26(auVar52._10_2_,CONCAT24(auVar52._2_2_,uVar73));
    auVar74._8_2_ = auVar52._4_2_;
    auVar74._10_2_ = auVar52._12_2_;
    auVar67._0_8_ = auVar53._0_8_;
    auVar67._8_4_ = auVar13._0_4_;
    auVar67._12_4_ = (int)((ulonglong)auVar70._0_8_ >> 0x20);
    auVar36._4_4_ = uVar69;
    auVar36._0_4_ = auVar53._0_4_;
    auVar57._4_4_ = auVar70._8_4_;
    auVar57._0_4_ = auVar54._8_4_;
    auVar57._12_4_ = auVar74._8_4_;
    auVar57._8_4_ = auVar33._8_4_;
    auVar72._0_8_ = auVar83._0_8_;
    auVar72._8_4_ = auVar14._0_4_;
    auVar72._12_4_ = (int)((ulonglong)auVar74._0_8_ >> 0x20);
    auVar36._12_4_ = uVar73;
    auVar36._8_4_ = auVar83._0_4_;
    auVar68._8_8_ = auVar72._8_8_;
    auVar68._0_8_ = auVar67._8_8_;
    auVar32 = paddusw(auVar57,auVar36);
    auVar32 = paddusw(auVar32,auVar68);
    auVar32 = paddusw(auVar32,in_XMM1);
    auVar32 = psraw(auVar32,7);
    sVar4 = auVar32._0_2_;
    sVar5 = auVar32._2_2_;
    sVar6 = auVar32._4_2_;
    sVar7 = auVar32._6_2_;
    sVar8 = auVar32._8_2_;
    sVar9 = auVar32._10_2_;
    sVar10 = auVar32._12_2_;
    sVar11 = auVar32._14_2_;
    *puVar16 = CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar32[0xe] - (0xff < sVar11),
                        CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar32[0xc] - (0xff < sVar10),
                                 CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar32[10] -
                                          (0xff < sVar9),
                                          CONCAT14((0 < sVar8) * (sVar8 < 0x100) * auVar32[8] -
                                                   (0xff < sVar8),
                                                   CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                            auVar32[6] - (0xff < sVar7),
                                                            CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                     auVar32[4] - (0xff < sVar6),
                                                                     CONCAT11((0 < sVar5) *
                                                                              (sVar5 < 0x100) *
                                                                              auVar32[2] -
                                                                              (0xff < sVar5),
                                                                              (0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              auVar32[0] -
                                                                              (0xff < sVar4))))))));
    param_2 = puVar16 + 1;
  } while (in_EAX < unaff_ESI);
  param_3 = param_3 & 7;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar19 = (uint)(ushort)in_XMM2_Qa;
  uVar18 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x10);
  uVar17 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x20);
  if (((longlong)param_2 - (longlong)param_1 < (longlong)((ulonglong)param_3 * 4 + -1)) &&
     (-((longlong)param_2 - (longlong)param_1) < (longlong)(ulonglong)param_3)) {
    iVar20 = 1;
    uVar23 = 0;
    if (param_3 >> 1 != 0) {
      do {
        uVar22 = uVar23;
        *(char *)((longlong)param_2 + uVar22 * 2) =
             (char)(*(byte *)(param_1 + uVar22) * uVar19 +
                    *(byte *)((longlong)puVar15 + uVar22 * 8 + 0x21) * uVar18 + 0x4000 +
                    *(byte *)((longlong)puVar15 + uVar22 * 8 + 0x22) * uVar17 >> 0xf);
        *(char *)((longlong)puVar16 + uVar22 * 2 + 9) =
             (char)(*(byte *)((longlong)puVar15 + uVar22 * 8 + 0x24) * uVar19 +
                    *(byte *)((longlong)puVar15 + uVar22 * 8 + 0x25) * uVar18 + 0x4000 +
                    *(byte *)((longlong)puVar15 + uVar22 * 8 + 0x26) * uVar17 >> 0xf);
        uVar23 = uVar22 + 1;
      } while (uVar23 < param_3 >> 1);
      iVar20 = (int)uVar22 + 2 + (int)uVar23;
    }
    if (param_3 <= iVar20 - 1U) {
      return;
    }
    lVar21 = (longlong)iVar20;
    *(char *)(lVar21 + -1 + (longlong)param_2) =
         (char)(uVar19 * *(byte *)((longlong)puVar15 + lVar21 * 4 + 0x1c) +
                uVar18 * *(byte *)((longlong)puVar15 + lVar21 * 4 + 0x1d) + 0x4000 +
                uVar17 * *(byte *)((longlong)puVar15 + lVar21 * 4 + 0x1e) >> 0xf);
    return;
  }
  switch(param_3) {
  case 1:
    goto LAB_14000fe54;
  case 2:
    goto LAB_14000fe1d;
  case 3:
    goto LAB_14000fde4;
  case 4:
    goto LAB_14000fdab;
  case 5:
    goto LAB_14000fd72;
  case 6:
    break;
  case 7:
    *(char *)((longlong)puVar16 + 0xe) =
         (char)(*(byte *)(puVar15 + 7) * uVar19 + *(byte *)((longlong)puVar15 + 0x39) * uVar18 +
                0x4000 + *(byte *)((longlong)puVar15 + 0x3a) * uVar17 >> 0xf);
    break;
  default:
    goto switchD_14000fcf9_default;
  }
  *(char *)((longlong)puVar16 + 0xd) =
       (char)(*(byte *)((longlong)puVar15 + 0x34) * uVar19 +
              *(byte *)((longlong)puVar15 + 0x35) * uVar18 + 0x4000 +
              *(byte *)((longlong)puVar15 + 0x36) * uVar17 >> 0xf);
LAB_14000fd72:
  *(char *)((longlong)puVar16 + 0xc) =
       (char)(*(byte *)(puVar15 + 6) * uVar19 + *(byte *)((longlong)puVar15 + 0x31) * uVar18 +
              0x4000 + *(byte *)((longlong)puVar15 + 0x32) * uVar17 >> 0xf);
LAB_14000fdab:
  *(char *)((longlong)puVar16 + 0xb) =
       (char)(*(byte *)((longlong)puVar15 + 0x2c) * uVar19 +
              *(byte *)((longlong)puVar15 + 0x2d) * uVar18 + 0x4000 +
              *(byte *)((longlong)puVar15 + 0x2e) * uVar17 >> 0xf);
LAB_14000fde4:
  *(char *)((longlong)puVar16 + 10) =
       (char)(*(byte *)(puVar15 + 5) * uVar19 + *(byte *)((longlong)puVar15 + 0x29) * uVar18 +
              0x4000 + *(byte *)((longlong)puVar15 + 0x2a) * uVar17 >> 0xf);
LAB_14000fe1d:
  *(char *)((longlong)puVar16 + 9) =
       (char)(*(byte *)((longlong)puVar15 + 0x24) * uVar19 +
              *(byte *)((longlong)puVar15 + 0x25) * uVar18 + 0x4000 +
              *(byte *)((longlong)puVar15 + 0x26) * uVar17 >> 0xf);
LAB_14000fe54:
  *(char *)param_2 =
       (char)(uVar19 * *(byte *)(puVar15 + 4) + uVar18 * *(byte *)((longlong)puVar15 + 0x21) +
              0x4000 + uVar17 * *(byte *)((longlong)puVar15 + 0x22) >> 0xf);
switchD_14000fcf9_default:
  return;
}

