
/* WARNING: Removing unreachable block (ram,0x000140010199) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ffc0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  int in_EAX;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int unaff_EBX;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  undefined1 auVar28 [14];
  undefined1 in_XMM0 [16];
  undefined1 auVar29 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 in_XMM1 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar80 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar38 [16];
  undefined1 auVar33 [16];
  undefined1 auVar39 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar46 [16];
  undefined1 auVar55 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  
  auVar29 = _DAT_143086460;
  auVar35 = _DAT_143086450;
  auVar34 = _DAT_143086440;
  auVar53 = _DAT_143086430;
  auVar36 = _DAT_143086420;
  do {
    puVar23 = param_2;
    puVar22 = param_1;
    uVar4 = puVar22[2];
    uVar5 = *puVar22;
    uVar6 = puVar22[1];
    in_EAX = in_EAX + 8;
    uVar43 = in_XMM4[7];
    auVar73._0_14_ = in_XMM4._0_14_;
    auVar73[0xe] = uVar43;
    auVar73[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar72._14_2_ = auVar73._14_2_;
    auVar72._0_13_ = in_XMM4._0_13_;
    auVar72[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    uVar42 = in_XMM4[6];
    auVar71._13_3_ = auVar72._13_3_;
    auVar71._0_12_ = in_XMM4._0_12_;
    auVar71[0xc] = uVar42;
    auVar70._12_4_ = auVar71._12_4_;
    auVar70._0_11_ = in_XMM4._0_11_;
    auVar70[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    uVar79 = in_XMM4[5];
    auVar69._11_5_ = auVar70._11_5_;
    auVar69._0_10_ = in_XMM4._0_10_;
    auVar69[10] = uVar79;
    auVar68._10_6_ = auVar69._10_6_;
    auVar68._0_9_ = in_XMM4._0_9_;
    auVar68[9] = (char)((ulonglong)uVar4 >> 0x20);
    uVar78 = in_XMM4[4];
    auVar67._9_7_ = auVar68._9_7_;
    auVar67._0_8_ = in_XMM4._0_8_;
    auVar67[8] = uVar78;
    auVar66._8_8_ = auVar67._8_8_;
    auVar66[7] = (char)((ulonglong)uVar4 >> 0x18);
    uVar77 = in_XMM4[3];
    auVar66[6] = uVar77;
    auVar66[5] = (char)((ulonglong)uVar4 >> 0x10);
    uVar76 = in_XMM4[2];
    auVar66[4] = uVar76;
    auVar66[3] = (char)((ulonglong)uVar4 >> 8);
    uVar75 = in_XMM4[1];
    auVar66[2] = uVar75;
    auVar66[0] = in_XMM4[0];
    auVar66[1] = (char)uVar4;
    auVar87[0xe] = uVar43;
    auVar87._0_14_ = auVar73._0_14_;
    auVar87[0xf] = (char)((ulonglong)uVar6 >> 0x38);
    auVar86._14_2_ = auVar87._14_2_;
    auVar86[0xd] = (char)((ulonglong)uVar6 >> 0x30);
    auVar86._0_13_ = auVar72._0_13_;
    auVar85._13_3_ = auVar86._13_3_;
    auVar85[0xc] = uVar42;
    auVar85._0_12_ = auVar71._0_12_;
    auVar84._12_4_ = auVar85._12_4_;
    auVar84[0xb] = (char)((ulonglong)uVar6 >> 0x28);
    auVar84._0_11_ = auVar70._0_11_;
    auVar83._11_5_ = auVar84._11_5_;
    auVar83[10] = uVar79;
    auVar83._0_10_ = auVar69._0_10_;
    auVar82._10_6_ = auVar83._10_6_;
    auVar82[9] = (char)((ulonglong)uVar6 >> 0x20);
    auVar82._0_9_ = auVar68._0_9_;
    auVar81._9_7_ = auVar82._9_7_;
    auVar81[8] = uVar78;
    auVar81._0_8_ = auVar67._0_8_;
    auVar80._8_8_ = auVar81._8_8_;
    auVar80[7] = (char)((ulonglong)uVar6 >> 0x18);
    auVar80[6] = uVar77;
    auVar80[5] = (char)((ulonglong)uVar6 >> 0x10);
    auVar80[4] = uVar76;
    auVar80[3] = (char)((ulonglong)uVar6 >> 8);
    auVar80[2] = uVar75;
    auVar80[1] = (char)uVar6;
    auVar80[0] = auVar66[0];
    auVar89[0xe] = uVar43;
    auVar89._0_14_ = auVar73._0_14_;
    auVar89[0xf] = (char)((ulonglong)uVar5 >> 0x38);
    auVar88._14_2_ = auVar89._14_2_;
    auVar88[0xd] = (char)((ulonglong)uVar5 >> 0x30);
    auVar88._0_13_ = auVar72._0_13_;
    auVar74._13_3_ = auVar88._13_3_;
    auVar74[0xc] = uVar42;
    auVar74._0_12_ = auVar71._0_12_;
    auVar64._12_4_ = auVar74._12_4_;
    auVar64[0xb] = (char)((ulonglong)uVar5 >> 0x28);
    auVar64._0_11_ = auVar70._0_11_;
    auVar90._11_5_ = auVar64._11_5_;
    auVar90[10] = uVar79;
    auVar90._0_10_ = auVar69._0_10_;
    auVar63._10_6_ = auVar90._10_6_;
    auVar63[9] = (char)((ulonglong)uVar5 >> 0x20);
    auVar63._0_9_ = auVar68._0_9_;
    auVar62._9_7_ = auVar63._9_7_;
    auVar62[8] = uVar78;
    auVar62._0_8_ = auVar67._0_8_;
    auVar61._8_8_ = auVar62._8_8_;
    auVar61[7] = (char)((ulonglong)uVar5 >> 0x18);
    auVar61[6] = uVar77;
    auVar61[5] = (char)((ulonglong)uVar5 >> 0x10);
    auVar61[4] = uVar76;
    auVar61[3] = (char)((ulonglong)uVar5 >> 8);
    auVar61[2] = uVar75;
    auVar61[1] = (char)uVar5;
    auVar61[0] = auVar66[0];
    auVar88 = pmulhuw(auVar80,in_XMM5);
    param_1 = puVar22 + 3;
    auVar65._8_8_ = in_XMM2_Qb;
    auVar65._0_8_ = in_XMM2_Qa;
    auVar65 = pmulhuw(auVar61,auVar65);
    auVar74 = pmulhuw(auVar66,in_XMM1);
    auVar89 = auVar88 ^ in_XMM3 & (auVar65 ^ auVar88);
    auVar65 = auVar65 ^ auVar88 ^ auVar89 ^ auVar74;
    auVar74 = auVar74 ^ auVar36 & auVar65;
    auVar89 = auVar89 ^ auVar74;
    auVar88 = auVar53 & auVar89 ^ auVar74;
    auVar90 = pshufb(auVar88,auVar29);
    auVar65 = pshufb(auVar65 ^ auVar74,auVar34);
    auVar74 = pshufb(auVar89 ^ auVar88,auVar35);
    auVar65 = paddusw(auVar90,auVar65);
    auVar65 = paddusw(auVar65,auVar74);
    auVar65 = paddusw(auVar65,in_XMM0);
    auVar65 = psraw(auVar65,7);
    sVar8 = auVar65._0_2_;
    sVar9 = auVar65._2_2_;
    sVar10 = auVar65._4_2_;
    sVar11 = auVar65._6_2_;
    sVar12 = auVar65._8_2_;
    sVar13 = auVar65._10_2_;
    sVar14 = auVar65._12_2_;
    sVar15 = auVar65._14_2_;
    *puVar23 = CONCAT17((0 < sVar15) * (sVar15 < 0x100) * auVar65[0xe] - (0xff < sVar15),
                        CONCAT16((0 < sVar14) * (sVar14 < 0x100) * auVar65[0xc] - (0xff < sVar14),
                                 CONCAT15((0 < sVar13) * (sVar13 < 0x100) * auVar65[10] -
                                          (0xff < sVar13),
                                          CONCAT14((0 < sVar12) * (sVar12 < 0x100) * auVar65[8] -
                                                   (0xff < sVar12),
                                                   CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                            auVar65[6] - (0xff < sVar11),
                                                            CONCAT12((0 < sVar10) * (sVar10 < 0x100)
                                                                     * auVar65[4] - (0xff < sVar10),
                                                                     CONCAT11((0 < sVar9) *
                                                                              (sVar9 < 0x100) *
                                                                              auVar65[2] -
                                                                              (0xff < sVar9),
                                                                              (0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              auVar65[0] -
                                                                              (0xff < sVar8))))))));
    param_2 = puVar23 + 1;
  } while (in_EAX < unaff_EBX);
  if ((param_3 & 4) != 0) {
    uVar4 = *param_1;
    uVar7 = *(undefined4 *)(puVar22 + 4);
    param_1 = (undefined8 *)((longlong)puVar22 + 0x24);
    auVar35[0xe] = uVar43;
    auVar35._0_14_ = auVar73._0_14_;
    auVar35[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar34._14_2_ = auVar35._14_2_;
    auVar34[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar34._0_13_ = auVar72._0_13_;
    auVar53._13_3_ = auVar34._13_3_;
    auVar53[0xc] = uVar42;
    auVar53._0_12_ = auVar71._0_12_;
    auVar33._12_4_ = auVar53._12_4_;
    auVar33[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar33._0_11_ = auVar70._0_11_;
    auVar32._11_5_ = auVar33._11_5_;
    auVar32[10] = uVar79;
    auVar32._0_10_ = auVar69._0_10_;
    auVar31._10_6_ = auVar32._10_6_;
    auVar31[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar31._0_9_ = auVar68._0_9_;
    auVar30._9_7_ = auVar31._9_7_;
    auVar30[8] = uVar78;
    auVar30._0_8_ = auVar67._0_8_;
    auVar29._8_8_ = auVar30._8_8_;
    auVar29[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar29[6] = uVar77;
    auVar29[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar29[4] = uVar76;
    auVar29[3] = (char)((ulonglong)uVar4 >> 8);
    auVar29[2] = uVar75;
    auVar29[1] = (char)uVar4;
    auVar29[0] = auVar66[0];
    uVar44 = (undefined1)((uint)uVar7 >> 0x18);
    auVar52[0xe] = uVar43;
    auVar52._0_14_ = auVar73._0_14_;
    auVar52[0xf] = uVar44;
    uVar43 = (undefined1)((uint)uVar7 >> 0x10);
    auVar51._14_2_ = auVar52._14_2_;
    auVar51[0xd] = uVar43;
    auVar51._0_13_ = auVar72._0_13_;
    auVar50._13_3_ = auVar51._13_3_;
    auVar50[0xc] = uVar42;
    auVar50._0_12_ = auVar71._0_12_;
    uVar42 = (undefined1)((uint)uVar7 >> 8);
    auVar49._12_4_ = auVar50._12_4_;
    auVar49[0xb] = uVar42;
    auVar49._0_11_ = auVar70._0_11_;
    auVar48._11_5_ = auVar49._11_5_;
    auVar48[10] = uVar79;
    auVar48._0_10_ = auVar69._0_10_;
    auVar47._10_6_ = auVar48._10_6_;
    auVar47[9] = (char)uVar7;
    auVar47._0_9_ = auVar68._0_9_;
    auVar46._9_7_ = auVar47._9_7_;
    auVar46[8] = uVar78;
    auVar46._0_8_ = auVar67._0_8_;
    auVar45._8_8_ = auVar46._8_8_;
    auVar45[7] = uVar44;
    auVar45[6] = uVar77;
    auVar45[5] = uVar43;
    auVar45[4] = uVar76;
    auVar45[3] = uVar42;
    auVar45[2] = uVar75;
    auVar45[1] = (char)uVar7;
    auVar45[0] = auVar66[0];
    auVar36._8_8_ = in_XMM2_Qb;
    auVar36._0_8_ = in_XMM2_Qa;
    auVar36 = pmulhuw(auVar29,auVar36);
    auVar53 = pmulhuw(auVar45,in_XMM5);
    auVar40._0_8_ = auVar53._0_8_ << 0x20;
    auVar40._8_8_ = auVar53._8_8_ << 0x20 | auVar53._0_8_ >> 0x20;
    auVar58._0_12_ = auVar36._0_12_;
    auVar59._12_2_ = auVar36._6_2_;
    auVar59._0_12_ = auVar58._0_12_;
    auVar59._14_2_ = auVar36._12_2_;
    auVar58._12_4_ = auVar59._12_4_;
    auVar57._10_6_ = auVar58._10_6_;
    auVar57._0_8_ = auVar36._0_8_;
    auVar57._8_2_ = auVar36._4_2_;
    auVar19._4_8_ = auVar57._8_8_;
    auVar19._2_2_ = auVar36._8_2_;
    auVar19._0_2_ = auVar36._2_2_;
    auVar56._0_4_ = CONCAT22(auVar36._6_2_,auVar36._0_2_);
    auVar56._4_12_ = auVar19;
    auVar28 = ZEXT414(auVar36._12_4_) | auVar40._0_14_;
    auVar39._0_12_ = auVar28._0_12_;
    auVar39._12_2_ = auVar28._6_2_;
    auVar39._14_2_ = auVar53._8_2_;
    auVar38._12_4_ = auVar39._12_4_;
    auVar38._0_10_ = auVar28._0_10_;
    auVar38._10_2_ = auVar53._6_2_;
    auVar37._10_6_ = auVar38._10_6_;
    auVar37._0_8_ = auVar28._0_8_;
    auVar37._8_2_ = auVar28._4_2_;
    auVar20._4_8_ = auVar37._8_8_;
    auVar20._2_2_ = auVar53._4_2_;
    auVar20._0_2_ = auVar28._2_2_;
    auVar54._6_2_ = auVar53._2_2_;
    auVar54._4_2_ = auVar28._0_2_;
    auVar55._0_8_ = auVar56._0_8_;
    auVar55._8_4_ = auVar19._0_4_;
    auVar55._12_4_ = auVar20._0_4_;
    auVar54._8_8_ = auVar55._8_8_;
    auVar54._0_4_ = auVar56._0_4_;
    auVar41._8_8_ = auVar54._8_8_;
    auVar41._0_8_ = auVar54._8_8_;
    auVar60._4_4_ = auVar37._8_4_;
    auVar60._0_4_ = auVar57._8_4_;
    auVar60._8_4_ = auVar58._12_4_;
    auVar60._12_4_ = auVar38._12_4_;
    auVar36 = paddusw(auVar41,auVar54);
    auVar36 = paddusw(auVar36,auVar60);
    auVar36 = paddusw(auVar36,_DAT_143086470);
    auVar36 = psraw(auVar36,7);
    sVar8 = auVar36._0_2_;
    sVar9 = auVar36._2_2_;
    sVar10 = auVar36._4_2_;
    sVar11 = auVar36._6_2_;
    *(uint *)param_2 =
         CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar36[6] - (0xff < sVar11),
                  CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar36[4] - (0xff < sVar10),
                           CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar36[2] - (0xff < sVar9),
                                    (0 < sVar8) * (sVar8 < 0x100) * auVar36[0] - (0xff < sVar8))));
    param_2 = (undefined8 *)((longlong)puVar23 + 0xc);
  }
  bVar27 = (param_3 & 3) != 0;
  if (bVar27) {
    uVar16 = (ushort)in_XMM2_Qa;
    uVar17 = (ushort)((ulonglong)in_XMM2_Qa >> 0x10);
    uVar18 = (ushort)((ulonglong)in_XMM2_Qa >> 0x20);
    if (bVar27) {
      uVar21 = 0;
      uVar25 = (param_3 & 3) >> 1;
      iVar26 = 1;
      lVar24 = 0;
      if (uVar25 != 0) {
        do {
          *(char *)((longlong)param_2 + uVar21 * 2) =
               (char)((uint)*(byte *)(lVar24 + (longlong)param_1) * (uint)uVar16 +
                      (uint)*(byte *)(lVar24 + 1 + (longlong)param_1) * (uint)uVar17 +
                      (uint)*(byte *)(lVar24 + 2 + (longlong)param_1) * (uint)uVar18 + 0x4000 >> 0xf
                     );
          lVar1 = lVar24 + 3;
          lVar2 = lVar24 + 4;
          lVar3 = lVar24 + 5;
          lVar24 = lVar24 + 6;
          *(char *)((longlong)param_2 + uVar21 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar16 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar17 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar18 + 0x4000 >> 0xf);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar25);
        iVar26 = (int)uVar21 * 2 + 1;
      }
      if (iVar26 - 1U < (param_3 & 3)) {
        lVar24 = (longlong)iVar26 * 3;
        *(char *)((longlong)iVar26 + -1 + (longlong)param_2) =
             (char)((uint)uVar16 * (uint)*(byte *)(lVar24 + -3 + (longlong)param_1) +
                    (uint)uVar17 * (uint)*(byte *)(lVar24 + -2 + (longlong)param_1) +
                    (uint)uVar18 * (uint)*(byte *)(lVar24 + -1 + (longlong)param_1) + 0x4000 >> 0xf)
        ;
      }
    }
  }
  return;
}

