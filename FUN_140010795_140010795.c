
/* WARNING: Removing unreachable block (ram,0x000140010972) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010795(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  int in_EAX;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int unaff_EBP;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 in_XMM0 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 auVar43 [14];
  undefined1 in_XMM3 [16];
  undefined1 auVar44 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 in_XMM4 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar42 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar54 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar55 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  
  auVar52 = _DAT_1430864f0;
  auVar31 = _DAT_1430864e0;
  auVar30 = _DAT_1430864d0;
  auVar29 = _DAT_1430864c0;
  auVar28 = _DAT_1430864b0;
  auVar40 = _DAT_1430864a0;
  do {
    puVar21 = param_2;
    puVar20 = param_1;
    uVar4 = *puVar20;
    in_EAX = in_EAX + 8;
    uVar5 = puVar20[1];
    uVar59 = in_XMM1[7];
    auVar68._0_14_ = in_XMM1._0_14_;
    auVar68[0xe] = uVar59;
    auVar68[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar67._14_2_ = auVar68._14_2_;
    auVar67._0_13_ = in_XMM1._0_13_;
    auVar67[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    uVar58 = in_XMM1[6];
    auVar66._13_3_ = auVar67._13_3_;
    auVar66._0_12_ = in_XMM1._0_12_;
    auVar66[0xc] = uVar58;
    auVar65._12_4_ = auVar66._12_4_;
    auVar65._0_11_ = in_XMM1._0_11_;
    auVar65[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    uVar74 = in_XMM1[5];
    auVar64._11_5_ = auVar65._11_5_;
    auVar64._0_10_ = in_XMM1._0_10_;
    auVar64[10] = uVar74;
    auVar63._10_6_ = auVar64._10_6_;
    auVar63._0_9_ = in_XMM1._0_9_;
    auVar63[9] = (char)((ulonglong)uVar4 >> 0x20);
    uVar73 = in_XMM1[4];
    auVar62._9_7_ = auVar63._9_7_;
    auVar62._0_8_ = in_XMM1._0_8_;
    auVar62[8] = uVar73;
    auVar61._8_8_ = auVar62._8_8_;
    auVar61[7] = (char)((ulonglong)uVar4 >> 0x18);
    uVar72 = in_XMM1[3];
    auVar61[6] = uVar72;
    auVar61[5] = (char)((ulonglong)uVar4 >> 0x10);
    uVar71 = in_XMM1[2];
    auVar61[4] = uVar71;
    auVar61[3] = (char)((ulonglong)uVar4 >> 8);
    uVar70 = in_XMM1[1];
    auVar61[2] = uVar70;
    auVar61[0] = in_XMM1[0];
    auVar61[1] = (char)uVar4;
    auVar78[0xe] = uVar59;
    auVar78._0_14_ = auVar68._0_14_;
    auVar78[0xf] = (char)((ulonglong)uVar5 >> 0x38);
    auVar77._14_2_ = auVar78._14_2_;
    auVar77[0xd] = (char)((ulonglong)uVar5 >> 0x30);
    auVar77._0_13_ = auVar67._0_13_;
    auVar79._13_3_ = auVar77._13_3_;
    auVar79[0xc] = uVar58;
    auVar79._0_12_ = auVar66._0_12_;
    auVar80._12_4_ = auVar79._12_4_;
    auVar80[0xb] = (char)((ulonglong)uVar5 >> 0x28);
    auVar80._0_11_ = auVar65._0_11_;
    auVar89._11_5_ = auVar80._11_5_;
    auVar89[10] = uVar74;
    auVar89._0_10_ = auVar64._0_10_;
    auVar90._10_6_ = auVar89._10_6_;
    auVar90[9] = (char)((ulonglong)uVar5 >> 0x20);
    auVar90._0_9_ = auVar63._0_9_;
    auVar76._9_7_ = auVar90._9_7_;
    auVar76[8] = uVar73;
    auVar76._0_8_ = auVar62._0_8_;
    auVar75._8_8_ = auVar76._8_8_;
    auVar75[7] = (char)((ulonglong)uVar5 >> 0x18);
    auVar75[6] = uVar72;
    auVar75[5] = (char)((ulonglong)uVar5 >> 0x10);
    auVar75[4] = uVar71;
    auVar75[3] = (char)((ulonglong)uVar5 >> 8);
    auVar75[2] = uVar70;
    auVar75[1] = (char)uVar5;
    auVar75[0] = auVar61[0];
    auVar69._8_8_ = in_XMM2_Qb;
    auVar69._0_8_ = in_XMM2_Qa;
    auVar69 = pmulhuw(auVar61,auVar69);
    uVar4 = puVar20[2];
    param_1 = puVar20 + 3;
    auVar79 = pmulhuw(auVar75,in_XMM0);
    auVar88[0xe] = uVar59;
    auVar88._0_14_ = auVar68._0_14_;
    auVar88[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar87._14_2_ = auVar88._14_2_;
    auVar87[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar87._0_13_ = auVar67._0_13_;
    auVar86._13_3_ = auVar87._13_3_;
    auVar86[0xc] = uVar58;
    auVar86._0_12_ = auVar66._0_12_;
    auVar85._12_4_ = auVar86._12_4_;
    auVar85[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar85._0_11_ = auVar65._0_11_;
    auVar84._11_5_ = auVar85._11_5_;
    auVar84[10] = uVar74;
    auVar84._0_10_ = auVar64._0_10_;
    auVar83._10_6_ = auVar84._10_6_;
    auVar83[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar83._0_9_ = auVar63._0_9_;
    auVar82._9_7_ = auVar83._9_7_;
    auVar82[8] = uVar73;
    auVar82._0_8_ = auVar62._0_8_;
    auVar81._8_8_ = auVar82._8_8_;
    auVar81[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar81[6] = uVar72;
    auVar81[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar81[4] = uVar71;
    auVar81[3] = (char)((ulonglong)uVar4 >> 8);
    auVar81[2] = uVar70;
    auVar81[1] = (char)uVar4;
    auVar81[0] = auVar61[0];
    auVar89 = pmulhuw(auVar81,in_XMM3);
    auVar80 = auVar79 ^ in_XMM4 & (auVar69 ^ auVar79);
    auVar69 = auVar69 ^ auVar79 ^ auVar80 ^ auVar89;
    auVar89 = auVar89 ^ auVar40 & auVar69;
    auVar80 = auVar80 ^ auVar89;
    auVar69 = pshufb(auVar69 ^ auVar89,auVar29);
    auVar89 = auVar89 ^ auVar28 & auVar80;
    auVar90 = pshufb(auVar89,auVar31);
    auVar79 = pshufb(auVar80 ^ auVar89,auVar30);
    auVar69 = paddusw(auVar90,auVar69);
    auVar69 = paddusw(auVar69,auVar79);
    auVar69 = paddusw(auVar69,auVar52);
    auVar69 = psraw(auVar69,7);
    sVar7 = auVar69._0_2_;
    sVar8 = auVar69._2_2_;
    sVar9 = auVar69._4_2_;
    sVar10 = auVar69._6_2_;
    sVar11 = auVar69._8_2_;
    sVar12 = auVar69._10_2_;
    sVar13 = auVar69._12_2_;
    sVar14 = auVar69._14_2_;
    *puVar21 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar69[0xe] - (0xff < sVar14),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar69[0xc] - (0xff < sVar13),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar69[10] -
                                          (0xff < sVar12),
                                          CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar69[8] -
                                                   (0xff < sVar11),
                                                   CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                            auVar69[6] - (0xff < sVar10),
                                                            CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                     auVar69[4] - (0xff < sVar9),
                                                                     CONCAT11((0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              auVar69[2] -
                                                                              (0xff < sVar8),
                                                                              (0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              auVar69[0] -
                                                                              (0xff < sVar7))))))));
    param_2 = puVar21 + 1;
  } while (in_EAX < unaff_EBP);
  if ((param_3 & 4) != 0) {
    uVar4 = *param_1;
    uVar6 = *(undefined4 *)(puVar20 + 4);
    auVar51[0xe] = uVar59;
    auVar51._0_14_ = auVar68._0_14_;
    auVar51[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar50._14_2_ = auVar51._14_2_;
    auVar50[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar50._0_13_ = auVar67._0_13_;
    auVar49._13_3_ = auVar50._13_3_;
    auVar49[0xc] = uVar58;
    auVar49._0_12_ = auVar66._0_12_;
    auVar48._12_4_ = auVar49._12_4_;
    auVar48[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar48._0_11_ = auVar65._0_11_;
    auVar47._11_5_ = auVar48._11_5_;
    auVar47[10] = uVar74;
    auVar47._0_10_ = auVar64._0_10_;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar46._0_9_ = auVar63._0_9_;
    auVar45._9_7_ = auVar46._9_7_;
    auVar45[8] = uVar73;
    auVar45._0_8_ = auVar62._0_8_;
    auVar44._8_8_ = auVar45._8_8_;
    auVar44[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar44[6] = uVar72;
    auVar44[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar44[4] = uVar71;
    auVar44[3] = (char)((ulonglong)uVar4 >> 8);
    auVar44[2] = uVar70;
    auVar44[1] = (char)uVar4;
    auVar44[0] = auVar61[0];
    param_1 = (undefined8 *)((longlong)puVar20 + 0x24);
    auVar40._8_8_ = in_XMM2_Qb;
    auVar40._0_8_ = in_XMM2_Qa;
    auVar52 = pmulhuw(auVar44,auVar40);
    uVar60 = (undefined1)((uint)uVar6 >> 0x18);
    auVar39[0xe] = uVar59;
    auVar39._0_14_ = auVar68._0_14_;
    auVar39[0xf] = uVar60;
    auVar38._14_2_ = auVar39._14_2_;
    uVar59 = (undefined1)((uint)uVar6 >> 0x10);
    auVar38[0xd] = uVar59;
    auVar38._0_13_ = auVar67._0_13_;
    auVar37._13_3_ = auVar38._13_3_;
    auVar37[0xc] = uVar58;
    auVar37._0_12_ = auVar66._0_12_;
    auVar36._12_4_ = auVar37._12_4_;
    uVar58 = (undefined1)((uint)uVar6 >> 8);
    auVar36[0xb] = uVar58;
    auVar36._0_11_ = auVar65._0_11_;
    auVar35._11_5_ = auVar36._11_5_;
    auVar35[10] = uVar74;
    auVar35._0_10_ = auVar64._0_10_;
    auVar34._10_6_ = auVar35._10_6_;
    auVar34[9] = (char)uVar6;
    auVar34._0_9_ = auVar63._0_9_;
    auVar33._9_7_ = auVar34._9_7_;
    auVar33[8] = uVar73;
    auVar33._0_8_ = auVar62._0_8_;
    auVar32._8_8_ = auVar33._8_8_;
    auVar32[7] = uVar60;
    auVar32[6] = uVar72;
    auVar32[5] = uVar59;
    auVar32[4] = uVar71;
    auVar32[3] = uVar58;
    auVar32[2] = uVar70;
    auVar32[1] = (char)uVar6;
    auVar32[0] = auVar61[0];
    auVar40 = pmulhuw(auVar32,in_XMM0);
    auVar30._0_12_ = auVar52._0_12_;
    auVar31._12_2_ = auVar52._6_2_;
    auVar31._0_12_ = auVar30._0_12_;
    auVar31._14_2_ = auVar52._12_2_;
    auVar30._12_4_ = auVar31._12_4_;
    auVar29._10_6_ = auVar30._10_6_;
    auVar29._0_8_ = auVar52._0_8_;
    auVar29._8_2_ = auVar52._4_2_;
    auVar18._4_8_ = auVar29._8_8_;
    auVar18._2_2_ = auVar52._8_2_;
    auVar18._0_2_ = auVar52._2_2_;
    auVar28._0_4_ = CONCAT22(auVar52._6_2_,auVar52._0_2_);
    auVar28._4_12_ = auVar18;
    auVar56._0_8_ = auVar40._0_8_ << 0x20;
    auVar56._8_8_ = auVar40._8_8_ << 0x20 | auVar40._0_8_ >> 0x20;
    auVar43 = ZEXT414(auVar52._12_4_) | auVar56._0_14_;
    auVar55._0_12_ = auVar43._0_12_;
    auVar55._12_2_ = auVar43._6_2_;
    auVar55._14_2_ = auVar40._8_2_;
    auVar54._12_4_ = auVar55._12_4_;
    auVar54._0_10_ = auVar43._0_10_;
    auVar54._10_2_ = auVar40._6_2_;
    auVar53._10_6_ = auVar54._10_6_;
    auVar53._0_8_ = auVar43._0_8_;
    auVar53._8_2_ = auVar43._4_2_;
    auVar19._4_8_ = auVar53._8_8_;
    auVar19._2_2_ = auVar40._4_2_;
    auVar19._0_2_ = auVar43._2_2_;
    auVar41._6_2_ = auVar40._2_2_;
    auVar41._4_2_ = auVar43._0_2_;
    auVar42._0_8_ = auVar28._0_8_;
    auVar42._8_4_ = auVar18._0_4_;
    auVar42._12_4_ = auVar19._0_4_;
    auVar41._8_8_ = auVar42._8_8_;
    auVar41._0_4_ = auVar28._0_4_;
    auVar52._4_4_ = auVar53._8_4_;
    auVar52._0_4_ = auVar29._8_4_;
    auVar52._8_4_ = auVar30._12_4_;
    auVar52._12_4_ = auVar54._12_4_;
    auVar57._8_8_ = auVar41._8_8_;
    auVar57._0_8_ = auVar41._8_8_;
    auVar40 = paddusw(auVar57,auVar41);
    auVar40 = paddusw(auVar40,auVar52);
    auVar40 = paddusw(auVar40,_DAT_1430864f0);
    auVar40 = psraw(auVar40,7);
    sVar7 = auVar40._0_2_;
    sVar8 = auVar40._2_2_;
    sVar9 = auVar40._4_2_;
    sVar10 = auVar40._6_2_;
    *(uint *)param_2 =
         CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar40[6] - (0xff < sVar10),
                  CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar40[4] - (0xff < sVar9),
                           CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar40[2] - (0xff < sVar8),
                                    (0 < sVar7) * (sVar7 < 0x100) * auVar40[0] - (0xff < sVar7))));
    param_2 = (undefined8 *)((longlong)puVar21 + 0xc);
  }
  uVar24 = param_3 & 3;
  bVar27 = (param_3 & 3) != 0;
  if (bVar27) {
    uVar15 = (ushort)in_XMM2_Qa;
    uVar16 = (ushort)((ulonglong)in_XMM2_Qa >> 0x10);
    uVar17 = (ushort)((ulonglong)in_XMM2_Qa >> 0x20);
    if (bVar27) {
      iVar22 = 1;
      lVar23 = 0;
      if (uVar24 >> 1 != 0) {
        uVar26 = 0;
        do {
          uVar25 = uVar26;
          *(char *)((longlong)param_2 + uVar25 * 2) =
               (char)((uint)*(byte *)(lVar23 + (longlong)param_1) * (uint)uVar15 +
                      (uint)*(byte *)(lVar23 + 1 + (longlong)param_1) * (uint)uVar16 + 0x4000 +
                      (uint)*(byte *)(lVar23 + 2 + (longlong)param_1) * (uint)uVar17 >> 0xf);
          lVar1 = lVar23 + 3;
          lVar2 = lVar23 + 4;
          lVar3 = lVar23 + 5;
          lVar23 = lVar23 + 6;
          *(char *)((longlong)param_2 + uVar25 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar15 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar16 + 0x4000 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar17 >> 0xf);
          uVar26 = uVar25 + 1;
        } while (uVar26 < uVar24 >> 1);
        iVar22 = (int)uVar25 + 2 + (int)uVar26;
      }
      if (iVar22 - 1U < uVar24) {
        lVar23 = (longlong)iVar22 * 3;
        *(char *)((longlong)iVar22 + -1 + (longlong)param_2) =
             (char)((uint)uVar15 * (uint)*(byte *)(lVar23 + -3 + (longlong)param_1) +
                    (uint)uVar16 * (uint)*(byte *)(lVar23 + -2 + (longlong)param_1) + 0x4000 +
                    (uint)uVar17 * (uint)*(byte *)(lVar23 + -1 + (longlong)param_1) >> 0xf);
      }
    }
  }
  return;
}

