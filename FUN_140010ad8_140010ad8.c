
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010ad8(undefined8 *param_1,undefined8 *param_2,uint param_3)

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
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  int iVar19;
  int iVar20;
  int iVar21;
  int in_EAX;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int unaff_EBP;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 in_XMM0 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar34 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar79;
  undefined1 auVar81 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar40 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 auVar50 [16];
  undefined1 auVar59 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar60 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar61 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar75 [12];
  undefined1 auVar82 [16];
  undefined1 auVar80 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  
  do {
    puVar24 = param_2;
    puVar23 = param_1;
    uVar1 = *puVar23;
    in_EAX = in_EAX + 8;
    uVar2 = puVar23[1];
    uVar48 = in_XMM0[7];
    auVar37._0_14_ = in_XMM0._0_14_;
    auVar37[0xe] = uVar48;
    auVar37[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar36._14_2_ = auVar37._14_2_;
    auVar36._0_13_ = in_XMM0._0_13_;
    auVar36[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    uVar47 = in_XMM0[6];
    auVar57._13_3_ = auVar36._13_3_;
    auVar57._0_12_ = in_XMM0._0_12_;
    auVar57[0xc] = uVar47;
    auVar35._12_4_ = auVar57._12_4_;
    auVar35._0_11_ = in_XMM0._0_11_;
    auVar35[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    uVar46 = in_XMM0[5];
    auVar78._11_5_ = auVar35._11_5_;
    auVar78._0_10_ = in_XMM0._0_10_;
    auVar78[10] = uVar46;
    auVar34._10_6_ = auVar78._10_6_;
    auVar34._0_9_ = in_XMM0._0_9_;
    auVar34[9] = (char)((ulonglong)uVar1 >> 0x20);
    uVar45 = in_XMM0[4];
    auVar33._9_7_ = auVar34._9_7_;
    auVar33._0_8_ = in_XMM0._0_8_;
    auVar33[8] = uVar45;
    auVar71._8_8_ = auVar33._8_8_;
    auVar71[7] = (char)((ulonglong)uVar1 >> 0x18);
    uVar44 = in_XMM0[3];
    auVar71[6] = uVar44;
    auVar71[5] = (char)((ulonglong)uVar1 >> 0x10);
    uVar43 = in_XMM0[2];
    auVar71[4] = uVar43;
    auVar71[3] = (char)((ulonglong)uVar1 >> 8);
    uVar42 = in_XMM0[1];
    auVar71[2] = uVar42;
    auVar71[0] = in_XMM0[0];
    auVar71[1] = (char)uVar1;
    uVar1 = puVar23[2];
    auVar38 = pmulhuw(auVar71,in_XMM2);
    auVar88[0xe] = uVar48;
    auVar88._0_14_ = auVar37._0_14_;
    auVar88[0xf] = (char)((ulonglong)uVar2 >> 0x38);
    auVar87._14_2_ = auVar88._14_2_;
    auVar87[0xd] = (char)((ulonglong)uVar2 >> 0x30);
    auVar87._0_13_ = auVar36._0_13_;
    auVar86._13_3_ = auVar87._13_3_;
    auVar86[0xc] = uVar47;
    auVar86._0_12_ = auVar57._0_12_;
    auVar85._12_4_ = auVar86._12_4_;
    auVar85[0xb] = (char)((ulonglong)uVar2 >> 0x28);
    auVar85._0_11_ = auVar35._0_11_;
    auVar84._11_5_ = auVar85._11_5_;
    auVar84[10] = uVar46;
    auVar84._0_10_ = auVar78._0_10_;
    auVar83._10_6_ = auVar84._10_6_;
    auVar83[9] = (char)((ulonglong)uVar2 >> 0x20);
    auVar83._0_9_ = auVar34._0_9_;
    auVar82._9_7_ = auVar83._9_7_;
    auVar82[8] = uVar45;
    auVar82._0_8_ = auVar33._0_8_;
    auVar81._8_8_ = auVar82._8_8_;
    auVar81[7] = (char)((ulonglong)uVar2 >> 0x18);
    auVar81[6] = uVar44;
    auVar81[5] = (char)((ulonglong)uVar2 >> 0x10);
    auVar81[4] = uVar43;
    auVar81[3] = (char)((ulonglong)uVar2 >> 8);
    auVar81[2] = uVar42;
    auVar81[1] = (char)uVar2;
    auVar81[0] = auVar71[0];
    uVar2 = puVar23[3];
    auVar70[0xe] = uVar48;
    auVar70._0_14_ = auVar37._0_14_;
    auVar70[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar69._14_2_ = auVar70._14_2_;
    auVar69[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar69._0_13_ = auVar36._0_13_;
    auVar68._13_3_ = auVar69._13_3_;
    auVar68[0xc] = uVar47;
    auVar68._0_12_ = auVar57._0_12_;
    auVar67._12_4_ = auVar68._12_4_;
    auVar67[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar67._0_11_ = auVar35._0_11_;
    auVar66._11_5_ = auVar67._11_5_;
    auVar66[10] = uVar46;
    auVar66._0_10_ = auVar78._0_10_;
    auVar65._10_6_ = auVar66._10_6_;
    auVar65[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar65._0_9_ = auVar34._0_9_;
    auVar64._9_7_ = auVar65._9_7_;
    auVar64[8] = uVar45;
    auVar64._0_8_ = auVar33._0_8_;
    auVar63._8_8_ = auVar64._8_8_;
    auVar63[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar63[6] = uVar44;
    auVar63[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar63[4] = uVar43;
    auVar63[3] = (char)((ulonglong)uVar1 >> 8);
    auVar63[2] = uVar42;
    auVar63[1] = (char)uVar1;
    auVar63[0] = auVar71[0];
    param_1 = puVar23 + 4;
    auVar89 = pmulhuw(auVar81,in_XMM2);
    auVar56[0xe] = uVar48;
    auVar56._0_14_ = auVar37._0_14_;
    auVar56[0xf] = (char)((ulonglong)uVar2 >> 0x38);
    auVar55._14_2_ = auVar56._14_2_;
    auVar55[0xd] = (char)((ulonglong)uVar2 >> 0x30);
    auVar55._0_13_ = auVar36._0_13_;
    auVar54._13_3_ = auVar55._13_3_;
    auVar54[0xc] = uVar47;
    auVar54._0_12_ = auVar57._0_12_;
    auVar53._12_4_ = auVar54._12_4_;
    auVar53[0xb] = (char)((ulonglong)uVar2 >> 0x28);
    auVar53._0_11_ = auVar35._0_11_;
    auVar52._11_5_ = auVar53._11_5_;
    auVar52[10] = uVar46;
    auVar52._0_10_ = auVar78._0_10_;
    auVar51._10_6_ = auVar52._10_6_;
    auVar51[9] = (char)((ulonglong)uVar2 >> 0x20);
    auVar51._0_9_ = auVar34._0_9_;
    auVar50._9_7_ = auVar51._9_7_;
    auVar50[8] = uVar45;
    auVar50._0_8_ = auVar33._0_8_;
    auVar49._8_8_ = auVar50._8_8_;
    auVar49[7] = (char)((ulonglong)uVar2 >> 0x18);
    auVar49[6] = uVar44;
    auVar49[5] = (char)((ulonglong)uVar2 >> 0x10);
    auVar49[4] = uVar43;
    auVar49[3] = (char)((ulonglong)uVar2 >> 8);
    auVar49[2] = uVar42;
    auVar49[1] = (char)uVar2;
    auVar49[0] = auVar71[0];
    auVar71 = pmulhuw(auVar63,in_XMM2);
    auVar57 = pmulhuw(auVar49,in_XMM2);
    auVar76._0_8_ = auVar38._0_8_;
    auVar76._8_8_ = auVar89._0_8_;
    auVar90._0_8_ = auVar71._0_8_;
    auVar90._8_8_ = auVar57._0_8_;
    auVar61._0_12_ = auVar76._0_12_;
    auVar61._12_2_ = auVar38._6_2_;
    auVar61._14_2_ = auVar38._14_2_;
    auVar60._12_4_ = auVar61._12_4_;
    auVar60._0_10_ = auVar76._0_10_;
    auVar60._10_2_ = auVar38._12_2_;
    auVar59._10_6_ = auVar60._10_6_;
    auVar59._8_2_ = auVar38._4_2_;
    auVar59._0_8_ = auVar76._0_8_;
    auVar17._4_8_ = auVar59._8_8_;
    auVar17._2_2_ = auVar38._10_2_;
    auVar17._0_2_ = auVar38._2_2_;
    auVar58._0_4_ = CONCAT22(auVar38._8_2_,auVar38._0_2_);
    auVar58._4_12_ = auVar17;
    uVar74 = CONCAT22(auVar89._8_2_,auVar89._0_2_);
    auVar75._0_8_ = CONCAT26(auVar89._10_2_,CONCAT24(auVar89._2_2_,uVar74));
    auVar75._8_2_ = auVar89._4_2_;
    auVar75._10_2_ = auVar89._12_2_;
    auVar40._0_12_ = auVar90._0_12_;
    auVar40._12_2_ = auVar71._6_2_;
    auVar40._14_2_ = auVar71._14_2_;
    auVar39._12_4_ = auVar40._12_4_;
    auVar39._0_10_ = auVar90._0_10_;
    auVar39._10_2_ = auVar71._12_2_;
    auVar89._10_6_ = auVar39._10_6_;
    auVar89._8_2_ = auVar71._4_2_;
    auVar89._0_8_ = auVar90._0_8_;
    auVar18._4_8_ = auVar89._8_8_;
    auVar18._2_2_ = auVar71._10_2_;
    auVar18._0_2_ = auVar71._2_2_;
    auVar38._0_4_ = CONCAT22(auVar71._8_2_,auVar71._0_2_);
    auVar38._4_12_ = auVar18;
    uVar79 = CONCAT22(auVar57._8_2_,auVar57._0_2_);
    auVar80._0_8_ = CONCAT26(auVar57._10_2_,CONCAT24(auVar57._2_2_,uVar79));
    auVar80._8_2_ = auVar57._4_2_;
    auVar80._10_2_ = auVar57._12_2_;
    auVar72._0_8_ = auVar58._0_8_;
    auVar72._8_4_ = auVar17._0_4_;
    auVar72._12_4_ = (int)((ulonglong)auVar75._0_8_ >> 0x20);
    auVar41._4_4_ = uVar74;
    auVar41._0_4_ = auVar58._0_4_;
    auVar62._4_4_ = auVar75._8_4_;
    auVar62._0_4_ = auVar59._8_4_;
    auVar62._12_4_ = auVar80._8_4_;
    auVar62._8_4_ = auVar89._8_4_;
    auVar77._0_8_ = auVar38._0_8_;
    auVar77._8_4_ = auVar18._0_4_;
    auVar77._12_4_ = (int)((ulonglong)auVar80._0_8_ >> 0x20);
    auVar41._12_4_ = uVar79;
    auVar41._8_4_ = auVar38._0_4_;
    auVar73._8_8_ = auVar77._8_8_;
    auVar73._0_8_ = auVar72._8_8_;
    auVar57 = paddusw(auVar62,auVar41);
    auVar57 = paddusw(auVar57,auVar73);
    auVar57 = paddusw(auVar57,in_XMM1);
    auVar57 = psraw(auVar57,7);
    sVar3 = auVar57._0_2_;
    sVar4 = auVar57._2_2_;
    sVar5 = auVar57._4_2_;
    sVar6 = auVar57._6_2_;
    sVar7 = auVar57._8_2_;
    sVar8 = auVar57._10_2_;
    sVar9 = auVar57._12_2_;
    sVar10 = auVar57._14_2_;
    *puVar24 = CONCAT17((0 < sVar10) * (sVar10 < 0x100) * auVar57[0xe] - (0xff < sVar10),
                        CONCAT16((0 < sVar9) * (sVar9 < 0x100) * auVar57[0xc] - (0xff < sVar9),
                                 CONCAT15((0 < sVar8) * (sVar8 < 0x100) * auVar57[10] -
                                          (0xff < sVar8),
                                          CONCAT14((0 < sVar7) * (sVar7 < 0x100) * auVar57[8] -
                                                   (0xff < sVar7),
                                                   CONCAT13((0 < sVar6) * (sVar6 < 0x100) *
                                                            auVar57[6] - (0xff < sVar6),
                                                            CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                                                     auVar57[4] - (0xff < sVar5),
                                                                     CONCAT11((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              auVar57[2] -
                                                                              (0xff < sVar4),
                                                                              (0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              auVar57[0] -
                                                                              (0xff < sVar3))))))));
    auVar71 = _DAT_143086520;
    iVar21 = _UNK_14308651c;
    iVar20 = _UNK_143086518;
    iVar19 = _UNK_143086514;
    iVar30 = _DAT_143086510;
    auVar57 = _DAT_143086500;
    param_2 = puVar24 + 1;
  } while (in_EAX < unaff_EBP);
  uVar28 = param_3 & 7;
  if (uVar28 != 0) {
    uVar11 = in_XMM2._0_2_;
    uVar12 = in_XMM2._2_2_;
    uVar13 = in_XMM2._4_2_;
    if (uVar28 != 0) {
      uVar32 = (ulonglong)uVar28;
      uVar25 = (uint)uVar11;
      uVar26 = (uint)uVar12;
      uVar22 = (uint)uVar13;
      if (((longlong)param_2 - (longlong)param_1 < (longlong)(uVar32 * 4 + -1)) &&
         (-((longlong)param_2 - (longlong)param_1) < (longlong)uVar32)) {
        iVar30 = 1;
        uVar32 = 0;
        if (uVar28 >> 1 != 0) {
          do {
            uVar29 = uVar32;
            *(char *)((longlong)param_2 + uVar29 * 2) =
                 (char)(*(byte *)(param_1 + uVar29) * uVar25 +
                        *(byte *)((longlong)puVar23 + uVar29 * 8 + 0x21) * uVar26 + 0x4000 +
                        *(byte *)((longlong)puVar23 + uVar29 * 8 + 0x22) * uVar22 >> 0xf);
            *(char *)((longlong)puVar24 + uVar29 * 2 + 9) =
                 (char)(*(byte *)((longlong)puVar23 + uVar29 * 8 + 0x24) * uVar25 +
                        *(byte *)((longlong)puVar23 + uVar29 * 8 + 0x25) * uVar26 + 0x4000 +
                        *(byte *)((longlong)puVar23 + uVar29 * 8 + 0x26) * uVar22 >> 0xf);
            uVar32 = uVar29 + 1;
          } while (uVar32 < uVar28 >> 1);
          iVar30 = (int)uVar29 + 2 + (int)uVar32;
        }
        if (iVar30 - 1U < uVar28) {
          lVar31 = (longlong)iVar30;
          *(char *)(lVar31 + -1 + (longlong)param_2) =
               (char)(uVar25 * *(byte *)((longlong)puVar23 + lVar31 * 4 + 0x1c) +
                      uVar26 * *(byte *)((longlong)puVar23 + lVar31 * 4 + 0x1d) + 0x4000 +
                      uVar22 * *(byte *)((longlong)puVar23 + lVar31 * 4 + 0x1e) >> 0xf);
        }
      }
      else {
        if (uVar32 < 4) {
          FUN_140010e2c(param_1,param_2,0);
          return;
        }
        uVar29 = (ulonglong)(param_3 & 4);
        uVar27 = 0;
        auVar14._12_2_ = uVar11;
        auVar14._0_12_ = ZEXT212(uVar11) << 0x40;
        auVar15._12_2_ = uVar12;
        auVar15._0_12_ = ZEXT212(uVar12) << 0x40;
        auVar16._12_2_ = uVar13;
        auVar16._0_12_ = ZEXT212(uVar13) << 0x40;
        do {
          auVar34 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x2c),
                                     CONCAT12(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x28)
                                              ,CONCAT11(*(undefined1 *)
                                                         ((longlong)puVar23 + uVar27 * 4 + 0x24),
                                                        *(undefined1 *)
                                                         ((longlong)param_1 + uVar27 * 4)))));
          auVar33 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x2d),
                                     CONCAT12(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x29)
                                              ,CONCAT11(*(undefined1 *)
                                                         ((longlong)puVar23 + uVar27 * 4 + 0x25),
                                                        *(undefined1 *)
                                                         ((longlong)puVar23 + uVar27 * 4 + 0x21)))))
          ;
          auVar34 = pmovzxbd(auVar34,auVar34);
          auVar33 = pmovzxbd(auVar33,auVar33);
          auVar91._0_8_ = (ulonglong)uVar25 * (ulonglong)auVar34._0_4_;
          auVar91._8_8_ = ((ulonglong)auVar14._8_6_ & 0xffffffff) * (ulonglong)auVar34._8_4_;
          auVar78 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x2e),
                                     CONCAT12(*(undefined1 *)((longlong)puVar23 + uVar27 * 4 + 0x2a)
                                              ,CONCAT11(*(undefined1 *)
                                                         ((longlong)puVar23 + uVar27 * 4 + 0x26),
                                                        *(undefined1 *)
                                                         ((longlong)puVar23 + uVar27 * 4 + 0x22)))))
          ;
          auVar78 = pmovzxbd(auVar78,auVar78);
          auVar94._0_8_ = (ulonglong)uVar26 * (ulonglong)auVar33._0_4_;
          auVar94._8_8_ = ((ulonglong)auVar15._8_6_ & 0xffffffff) * (ulonglong)auVar33._8_4_;
          auVar96._0_8_ = (ulonglong)uVar22 * (ulonglong)auVar78._0_4_;
          auVar96._8_8_ = ((ulonglong)auVar16._8_6_ & 0xffffffff) * (ulonglong)auVar78._8_4_;
          auVar92._0_8_ = (auVar34._0_8_ >> 0x20) * (ulonglong)uVar25 << 0x20;
          auVar92._8_8_ = (auVar34._8_8_ >> 0x20) * (ulonglong)(auVar14._8_6_ >> 0x20) << 0x20;
          auVar95._0_8_ = (auVar33._0_8_ >> 0x20) * (ulonglong)uVar26 << 0x20;
          auVar95._8_8_ = (auVar33._8_8_ >> 0x20) * (ulonglong)(auVar15._8_6_ >> 0x20) << 0x20;
          auVar97._0_8_ = (auVar78._0_8_ >> 0x20) * (ulonglong)uVar22 << 0x20;
          auVar97._8_8_ = (auVar78._8_8_ >> 0x20) * (ulonglong)(auVar16._8_6_ >> 0x20) << 0x20;
          auVar92 = auVar91 & auVar57 | auVar92;
          auVar95 = auVar94 & auVar57 | auVar95;
          auVar97 = auVar96 & auVar57 | auVar97;
          auVar93._0_4_ = auVar92._0_4_ + auVar95._0_4_ + auVar97._0_4_ + iVar30 >> 0xf;
          auVar93._4_4_ = auVar92._4_4_ + auVar95._4_4_ + auVar97._4_4_ + iVar19 >> 0xf;
          auVar93._8_4_ = auVar92._8_4_ + auVar95._8_4_ + auVar97._8_4_ + iVar20 >> 0xf;
          auVar93._12_4_ = auVar92._12_4_ + auVar95._12_4_ + auVar97._12_4_ + iVar21 >> 0xf;
          auVar33 = pshufb(auVar93,auVar71);
          *(int *)(uVar27 + (longlong)param_2) = auVar33._0_4_;
          uVar27 = uVar27 + 4;
        } while (uVar27 < uVar29);
        for (; uVar29 < uVar32; uVar29 = uVar29 + 1) {
          *(char *)(uVar29 + (longlong)param_2) =
               (char)(*(byte *)((longlong)param_1 + uVar29 * 4) * uVar25 +
                      *(byte *)((longlong)puVar23 + uVar29 * 4 + 0x21) * uVar26 + 0x4000 +
                      *(byte *)((longlong)puVar23 + uVar29 * 4 + 0x22) * uVar22 >> 0xf);
        }
      }
    }
  }
  return;
}

