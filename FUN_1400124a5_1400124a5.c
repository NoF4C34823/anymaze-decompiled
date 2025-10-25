
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400124a5(ulonglong *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  unkbyte10 Var12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  unkbyte10 Var15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  int in_EAX;
  undefined2 *in_RDX;
  int in_R10D;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar22;
  float fVar23;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined4 in_XMM5_Da;
  undefined1 uVar32;
  undefined2 uVar31;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined4 in_XMM5_Db;
  undefined1 uVar36;
  undefined2 uVar35;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  undefined1 auVar44 [12];
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  int iVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  uint uVar66;
  uint uVar76;
  uint uVar77;
  undefined1 auVar68 [16];
  uint uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  uint uVar86;
  uint uVar87;
  float fVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar88 [16];
  float fVar96;
  uint uVar97;
  uint uVar98;
  undefined6 uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar102 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar67 [12];
  undefined1 auVar89 [16];
  undefined1 auVar101 [16];
  
  fVar23 = (float)((ulonglong)param_2 >> 0x20);
  fVar22 = (float)param_2;
  do {
    uVar1 = *param_1;
    in_R10D = in_R10D + 4;
    uVar2 = param_1[1];
    uVar36 = (undefined1)((uint)in_XMM5_Db >> 0x18);
    auVar75._8_6_ = 0;
    auVar75._0_8_ = uVar1;
    auVar75[0xe] = (char)(uVar1 >> 0x38);
    auVar75[0xf] = uVar36;
    uVar34 = (undefined1)((uint)in_XMM5_Db >> 0x10);
    auVar74._14_2_ = auVar75._14_2_;
    auVar74._8_5_ = 0;
    auVar74._0_8_ = uVar1;
    auVar74[0xd] = uVar34;
    auVar73._13_3_ = auVar74._13_3_;
    auVar73._8_4_ = 0;
    auVar73._0_8_ = uVar1;
    auVar73[0xc] = (char)(uVar1 >> 0x30);
    uVar33 = (undefined1)((uint)in_XMM5_Db >> 8);
    auVar72._12_4_ = auVar73._12_4_;
    auVar72._8_3_ = 0;
    auVar72._0_8_ = uVar1;
    auVar72[0xb] = uVar33;
    auVar71._11_5_ = auVar72._11_5_;
    auVar71._8_2_ = 0;
    auVar71._0_8_ = uVar1;
    auVar71[10] = (char)(uVar1 >> 0x28);
    auVar70._10_6_ = auVar71._10_6_;
    auVar70[8] = 0;
    auVar70._0_8_ = uVar1;
    auVar70[9] = (char)in_XMM5_Db;
    auVar69._9_7_ = auVar70._9_7_;
    auVar69[8] = (char)(uVar1 >> 0x20);
    auVar69._0_8_ = uVar1;
    uVar32 = (undefined1)((uint)in_XMM5_Da >> 0x18);
    Var12 = CONCAT91(CONCAT81(auVar69._8_8_,uVar32),(char)(uVar1 >> 0x18));
    uVar30 = (undefined1)((uint)in_XMM5_Da >> 0x10);
    auVar11._2_10_ = Var12;
    auVar11[1] = uVar30;
    auVar11[0] = (char)(uVar1 >> 0x10);
    uVar29 = (undefined1)((uint)in_XMM5_Da >> 8);
    auVar10._2_12_ = auVar11;
    auVar10[1] = uVar29;
    auVar10[0] = (char)(uVar1 >> 8);
    auVar68._0_2_ = CONCAT11((char)in_XMM5_Da,(char)uVar1);
    auVar68._2_14_ = auVar10;
    param_1 = param_1 + 2;
    auVar63._8_6_ = 0;
    auVar63._0_8_ = uVar2;
    auVar63[0xe] = (char)(uVar2 >> 0x38);
    auVar63[0xf] = uVar36;
    auVar62._14_2_ = auVar63._14_2_;
    auVar62._8_5_ = 0;
    auVar62._0_8_ = uVar2;
    auVar62[0xd] = uVar34;
    auVar61._13_3_ = auVar62._13_3_;
    auVar61._8_4_ = 0;
    auVar61._0_8_ = uVar2;
    auVar61[0xc] = (char)(uVar2 >> 0x30);
    auVar60._12_4_ = auVar61._12_4_;
    auVar60._8_3_ = 0;
    auVar60._0_8_ = uVar2;
    auVar60[0xb] = uVar33;
    auVar59._11_5_ = auVar60._11_5_;
    auVar59._8_2_ = 0;
    auVar59._0_8_ = uVar2;
    auVar59[10] = (char)(uVar2 >> 0x28);
    auVar58._10_6_ = auVar59._10_6_;
    auVar58[8] = 0;
    auVar58._0_8_ = uVar2;
    auVar58[9] = (char)in_XMM5_Db;
    auVar57._9_7_ = auVar58._9_7_;
    auVar57[8] = (char)(uVar2 >> 0x20);
    auVar57._0_8_ = uVar2;
    Var15 = CONCAT91(CONCAT81(auVar57._8_8_,uVar32),(char)(uVar2 >> 0x18));
    auVar14._2_10_ = Var15;
    auVar14[1] = uVar30;
    auVar14[0] = (char)(uVar2 >> 0x10);
    auVar13._2_12_ = auVar14;
    auVar13[1] = uVar29;
    auVar13[0] = (char)(uVar2 >> 8);
    auVar17[1] = (char)in_XMM5_Da;
    auVar17[0] = (char)uVar2;
    auVar47._0_12_ = auVar68._0_12_;
    auVar47._12_2_ = (short)Var12;
    auVar47._14_2_ = (short)Var15;
    auVar46._12_4_ = auVar47._12_4_;
    auVar46._0_10_ = auVar68._0_10_;
    auVar46._10_2_ = auVar14._0_2_;
    auVar45._10_6_ = auVar46._10_6_;
    auVar45._0_8_ = auVar68._0_8_;
    auVar45._8_2_ = auVar11._0_2_;
    auVar16._4_8_ = auVar45._8_8_;
    auVar16._2_2_ = auVar13._0_2_;
    auVar16._0_2_ = auVar10._0_2_;
    auVar48._0_8_ = auVar16._0_8_ << 0x20;
    uVar65 = CONCAT22(auVar57._8_2_,auVar69._8_2_);
    auVar67._0_8_ = CONCAT26(auVar59._10_2_,CONCAT24(auVar71._10_2_,uVar65));
    auVar67._8_2_ = auVar73._12_2_;
    auVar67._10_2_ = auVar61._12_2_;
    auVar48._8_4_ = auVar16._0_4_;
    auVar48._12_4_ = (int)((ulonglong)auVar67._0_8_ >> 0x20);
    auVar28._4_8_ = auVar48._8_8_;
    auVar28._0_4_ = uVar65;
    auVar28._12_4_ = 0;
    uVar35 = (undefined2)((uint)in_XMM5_Db >> 0x10);
    auVar89._0_12_ = SUB1612(auVar28 << 0x20,0);
    auVar89._12_2_ = auVar57._8_2_;
    auVar89._14_2_ = uVar35;
    auVar88._12_4_ = auVar89._12_4_;
    auVar88._0_10_ = SUB1610(auVar28 << 0x20,0);
    auVar88._10_2_ = (short)in_XMM5_Db;
    auVar19._4_2_ = auVar69._8_2_;
    auVar19._0_4_ = uVar65;
    auVar19._6_6_ = auVar88._10_6_;
    uVar31 = (undefined2)((uint)in_XMM5_Da >> 0x10);
    auVar17._4_8_ = auVar19._4_8_;
    auVar17._2_2_ = uVar31;
    fVar85 = (float)CONCAT22((short)in_XMM5_Da,auVar68._0_2_);
    fVar90 = (float)auVar17._0_4_;
    fVar93 = (float)auVar19._4_4_;
    fVar96 = (float)auVar88._12_4_;
    iVar43 = CONCAT22((short)in_XMM5_Dc,auVar10._0_2_);
    auVar44._0_8_ = CONCAT26((short)((uint)in_XMM5_Dc >> 0x10),CONCAT24(auVar13._0_2_,iVar43));
    auVar44._8_2_ = auVar71._10_2_;
    auVar44._10_2_ = (short)in_XMM5_Dd;
    auVar49._12_2_ = auVar59._10_2_;
    auVar49._0_12_ = auVar44;
    auVar49._14_2_ = (short)((uint)in_XMM5_Dd >> 0x10);
    auVar80._8_4_ = fVar93;
    auVar80._0_8_ = CONCAT44(fVar90,fVar85);
    auVar80._12_4_ = fVar96;
    auVar79._0_4_ = (float)iVar43;
    auVar79._4_4_ = (float)(int)((ulonglong)auVar44._0_8_ >> 0x20);
    auVar79._8_4_ = (float)auVar44._8_4_;
    auVar79._12_4_ = (float)auVar49._12_4_;
    uVar1 = CONCAT44(auVar46._12_4_,auVar67._8_4_);
    auVar56._0_10_ = (unkuint10)uVar1 << 0x20;
    auVar82._8_4_ = fVar93;
    auVar82._0_8_ = CONCAT44(fVar90,fVar85);
    auVar82._12_4_ = fVar96;
    auVar21._8_2_ = auVar61._12_2_;
    auVar21._0_8_ = uVar1;
    auVar21._10_2_ = uVar35;
    auVar56._12_4_ = auVar21._8_4_;
    auVar56._10_2_ = (short)in_XMM5_Db;
    auVar20._4_2_ = auVar73._12_2_;
    auVar20._0_4_ = auVar67._8_4_;
    auVar20._6_6_ = auVar56._10_6_;
    auVar18._4_8_ = auVar20._4_8_;
    auVar18._2_2_ = uVar31;
    auVar18._0_2_ = auVar14._0_2_;
    auVar100._0_4_ = (float)CONCAT22((short)in_XMM5_Da,auVar11._0_2_);
    auVar100._4_4_ = (float)auVar18._0_4_;
    auVar100._8_4_ = (float)auVar20._4_4_;
    auVar100._12_4_ = (float)auVar56._12_4_;
    auVar81 = maxps(auVar80,auVar79);
    auVar28 = minps(auVar82,auVar79);
    auVar82 = maxps(auVar81,auVar100);
    auVar28 = minps(auVar28,auVar100);
    fVar38 = auVar82._0_4_;
    fVar39 = auVar82._4_4_;
    fVar40 = auVar82._8_4_;
    fVar41 = auVar82._12_4_;
    auVar64._0_4_ = (int)fVar38;
    auVar64._4_4_ = (int)fVar39;
    auVar64._8_4_ = (int)fVar40;
    auVar64._12_4_ = (int)fVar41;
    auVar82 = packssdw(auVar64,auVar64);
    fVar24 = fVar38 - auVar28._0_4_;
    fVar25 = fVar39 - auVar28._4_4_;
    fVar26 = fVar40 - auVar28._8_4_;
    fVar27 = fVar41 - auVar28._12_4_;
    uVar66 = -(uint)(fVar38 == 0.0 || fVar24 == 0.0);
    uVar76 = -(uint)(fVar39 == 0.0 || fVar25 == 0.0);
    uVar77 = -(uint)(fVar40 == 0.0 || fVar26 == 0.0);
    uVar78 = -(uint)(fVar41 == 0.0 || fVar27 == 0.0);
    sVar3 = auVar82._0_2_;
    sVar5 = auVar82._2_2_;
    sVar7 = auVar82._4_2_;
    sVar8 = auVar82._6_2_;
    auVar83._0_4_ = fVar38 + (float)((uint)fVar22 & uVar66);
    auVar83._4_4_ = fVar39 + (float)((uint)fVar23 & uVar76);
    auVar83._8_4_ = fVar40 + (float)((uint)in_XMM1_Dc & uVar77);
    auVar83._12_4_ = fVar41 + (float)((uint)in_XMM1_Dd & uVar78);
    auVar50._0_4_ = (float)((uint)fVar22 & uVar66) + fVar24;
    auVar50._4_4_ = (float)((uint)fVar23 & uVar76) + fVar25;
    auVar50._8_4_ = (float)((uint)in_XMM1_Dc & uVar77) + fVar26;
    auVar50._12_4_ = (float)((uint)in_XMM1_Dd & uVar78) + fVar27;
    auVar28 = rcpps(unaff_XMM6,auVar83);
    auVar81._0_4_ = auVar28._0_4_ * auVar50._0_4_ * fVar22;
    auVar81._4_4_ = auVar28._4_4_ * auVar50._4_4_ * fVar23;
    auVar81._8_4_ = auVar28._8_4_ * auVar50._8_4_ * in_XMM1_Dc;
    auVar81._12_4_ = auVar28._12_4_ * auVar50._12_4_ * in_XMM1_Dd;
    auVar28 = rcpps(auVar81,auVar50);
    fVar24 = auVar28._0_4_;
    fVar38 = (auVar83._0_4_ - fVar85) * fVar24;
    fVar25 = auVar28._4_4_;
    fVar39 = (auVar83._4_4_ - fVar90) * fVar25;
    fVar26 = auVar28._8_4_;
    fVar40 = (auVar83._8_4_ - fVar93) * fVar26;
    fVar27 = auVar28._12_4_;
    fVar41 = (auVar83._12_4_ - fVar96) * fVar27;
    fVar42 = (auVar83._0_4_ - auVar79._0_4_) * fVar24;
    fVar52 = (auVar83._4_4_ - auVar79._4_4_) * fVar25;
    fVar54 = (auVar83._8_4_ - auVar79._8_4_) * fVar26;
    fVar55 = (auVar83._12_4_ - auVar79._12_4_) * fVar27;
    fVar24 = fVar24 * (auVar83._0_4_ - auVar100._0_4_);
    fVar25 = fVar25 * (auVar83._4_4_ - auVar100._4_4_);
    fVar26 = fVar26 * (auVar83._8_4_ - auVar100._8_4_);
    fVar27 = fVar27 * (auVar83._12_4_ - auVar100._12_4_);
    uVar86 = ~-(uint)(fVar85 == auVar83._0_4_) & -(uint)(auVar79._0_4_ == auVar83._0_4_);
    uVar91 = ~-(uint)(fVar90 == auVar83._4_4_) & -(uint)(auVar79._4_4_ == auVar83._4_4_);
    uVar94 = ~-(uint)(fVar93 == auVar83._8_4_) & -(uint)(auVar79._8_4_ == auVar83._8_4_);
    uVar97 = ~-(uint)(fVar96 == auVar83._12_4_) & -(uint)(auVar79._12_4_ == auVar83._12_4_);
    uVar87 = ~uVar86 & -(uint)(auVar100._0_4_ == auVar83._0_4_);
    uVar92 = ~uVar91 & -(uint)(auVar100._4_4_ == auVar83._4_4_);
    uVar95 = ~uVar94 & -(uint)(auVar100._8_4_ == auVar83._8_4_);
    uVar98 = ~uVar97 & -(uint)(auVar100._12_4_ == auVar83._12_4_);
    fVar24 = ((float)(~uVar87 & ~uVar86 & (uint)(fVar24 - fVar42) & -(uint)(fVar85 == auVar83._0_4_)
                     ) +
             (float)((uint)((fVar42 - fVar38) + (float)in_XMM0_Qa) & uVar87) +
             (float)(~uVar87 & (uint)((fVar38 - fVar24) + in_XMM4_Da) & uVar86)) * _DAT_143086620;
    fVar25 = ((float)(~uVar92 & ~uVar91 & (uint)(fVar25 - fVar52) & -(uint)(fVar90 == auVar83._4_4_)
                     ) +
             (float)((uint)((fVar52 - fVar39) + (float)((ulonglong)in_XMM0_Qa >> 0x20)) & uVar92) +
             (float)(~uVar92 & (uint)((fVar39 - fVar25) + in_XMM4_Db) & uVar91)) * _UNK_143086624;
    fVar26 = ((float)(~uVar95 & ~uVar94 & (uint)(fVar26 - fVar54) & -(uint)(fVar93 == auVar83._8_4_)
                     ) +
             (float)((uint)((fVar54 - fVar40) + in_XMM0_Dc) & uVar95) +
             (float)(~uVar95 & (uint)((fVar40 - fVar26) + in_XMM4_Dc) & uVar94)) * _UNK_143086628;
    fVar27 = ((float)(~uVar98 &
                     ~uVar97 & (uint)(fVar27 - fVar55) & -(uint)(fVar96 == auVar83._12_4_)) +
             (float)((uint)((fVar55 - fVar41) + in_XMM0_Dd) & uVar98) +
             (float)(~uVar98 & (uint)((fVar41 - fVar27) + in_XMM4_Dd) & uVar97)) * _UNK_14308662c;
    unaff_XMM6._0_4_ = (float)(-(uint)(fVar24 < 0.0) & (uint)(fVar22 + fVar24));
    unaff_XMM6._4_4_ = (float)(-(uint)(fVar25 < 0.0) & (uint)(fVar23 + fVar25));
    unaff_XMM6._8_4_ = (float)(-(uint)(fVar26 < 0.0) & (uint)(in_XMM1_Dc + fVar26));
    unaff_XMM6._12_4_ = (float)(-(uint)(fVar27 < 0.0) & (uint)(in_XMM1_Dd + fVar27));
    iVar43 = (int)(float)(~uVar66 &
                         (uint)((float)(~-(uint)(fVar24 < 0.0) & (uint)fVar24) + unaff_XMM6._0_4_));
    iVar53 = (int)(float)(~uVar76 &
                         (uint)((float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25) + unaff_XMM6._4_4_));
    auVar102._4_4_ = iVar53;
    auVar102._0_4_ = iVar43;
    auVar102._8_4_ = iVar53;
    auVar102._12_4_ = (int)(float)(~uVar76 & (uint)auVar81._4_4_);
    auVar101._8_8_ = auVar102._8_8_;
    auVar101._4_4_ = (int)(float)(~uVar66 & (uint)auVar81._0_4_);
    auVar101._0_4_ = iVar43;
    auVar51._4_4_ = (int)(float)(~uVar77 & (uint)auVar81._8_4_);
    auVar51._0_4_ =
         (int)(float)(~uVar77 &
                     (uint)((float)(~-(uint)(fVar26 < 0.0) & (uint)fVar26) + unaff_XMM6._8_4_));
    auVar51._8_4_ =
         (int)(float)(~uVar78 &
                     (uint)((float)(~-(uint)(fVar27 < 0.0) & (uint)fVar27) + unaff_XMM6._12_4_));
    auVar51._12_4_ = (int)(float)(~uVar78 & (uint)auVar81._12_4_);
    auVar28 = packssdw(auVar101,auVar51);
    sVar4 = auVar28._0_2_;
    sVar6 = auVar28._2_2_;
    uVar31 = CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar28[2] - (0xff < sVar6),
                      (0 < sVar4) * (sVar4 < 0x100) * auVar28[0] - (0xff < sVar4));
    sVar4 = auVar28._4_2_;
    sVar6 = auVar28._6_2_;
    uVar65 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar28[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar28[4] - (0xff < sVar4),uVar31));
    sVar4 = auVar28._8_2_;
    sVar6 = auVar28._10_2_;
    uVar99 = CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar28[10] - (0xff < sVar6),
                      CONCAT14((0 < sVar4) * (sVar4 < 0x100) * auVar28[8] - (0xff < sVar4),uVar65));
    sVar4 = auVar28._12_2_;
    sVar6 = auVar28._14_2_;
    *in_RDX = uVar31;
    *(char *)(in_RDX + 1) = (0 < sVar3) * (sVar3 < 0x100) * auVar82[0] - (0xff < sVar3);
    in_RDX[2] = (short)((uint6)uVar99 >> 0x20);
    *(char *)(in_RDX + 3) = (0 < sVar7) * (sVar7 < 0x100) * auVar82[4] - (0xff < sVar7);
    in_RDX[4] = (short)((uint)uVar65 >> 0x10);
    *(char *)(in_RDX + 5) = (0 < sVar5) * (sVar5 < 0x100) * auVar82[2] - (0xff < sVar5);
    in_RDX[6] = (short)(CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar28[0xe] - (0xff < sVar6),
                                 CONCAT16((0 < sVar4) * (sVar4 < 0x100) * auVar28[0xc] -
                                          (0xff < sVar4),uVar99)) >> 0x30);
    *(char *)(in_RDX + 7) = (0 < sVar8) * (sVar8 < 0x100) * auVar82[6] - (0xff < sVar8);
    fVar24 = _DAT_143086620;
    in_RDX = in_RDX + 8;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar27 = (float)(byte)*param_1;
    fVar26 = (float)*(byte *)((longlong)param_1 + 1);
    fVar25 = (float)*(byte *)((longlong)param_1 + 2);
    fVar23 = fVar27;
    if (fVar27 <= fVar26) {
      fVar23 = fVar26;
    }
    fVar38 = fVar27;
    if (fVar26 <= fVar27) {
      fVar38 = fVar26;
    }
    if (fVar23 <= fVar25) {
      fVar23 = fVar25;
    }
    auVar9._4_8_ = 0;
    auVar9._0_4_ = fVar23;
    auVar84._12_4_ = 0;
    auVar84._0_12_ = auVar9;
    if (fVar25 <= fVar38) {
      fVar38 = fVar25;
    }
    *(char *)(in_RDX + 1) = (char)(int)ROUND(fVar23);
    fVar39 = 0.0;
    fVar38 = fVar23 - fVar38;
    if ((fVar23 == 0.0) || ((fVar38 == 0.0 && (!NAN(fVar38))))) {
      *(undefined1 *)((longlong)in_RDX + 1) = param_4;
      *(undefined1 *)in_RDX = param_4;
    }
    else {
      auVar37._12_4_ = 0;
      auVar37._0_12_ = auVar9;
      auVar28 = rcpss(auVar37,auVar84);
      auVar82 = rcpss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
      fVar40 = auVar82._0_4_;
      fVar41 = (fVar23 - fVar27) * fVar40;
      fVar42 = (fVar23 - fVar25) * fVar40;
      fVar40 = (fVar23 - fVar26) * fVar40;
      *(char *)((longlong)in_RDX + 1) = (char)(int)ROUND(auVar28._0_4_ * fVar38 * fVar22);
      if ((fVar23 == fVar27) && (!NAN(fVar23) && !NAN(fVar27))) {
        fVar39 = fVar42 - fVar40;
      }
      if ((fVar23 == fVar26) && (!NAN(fVar23) && !NAN(fVar26))) {
        fVar39 = (fVar41 - fVar42) + in_XMM4_Da;
      }
      if ((fVar23 == fVar25) && (!NAN(fVar23) && !NAN(fVar25))) {
        fVar39 = (fVar40 - fVar41) + (float)in_XMM0_Qa;
      }
      fVar39 = fVar39 * fVar24;
      if (fVar39 < 0.0) {
        fVar39 = fVar39 + fVar22;
      }
      *(char *)in_RDX = (char)(int)ROUND(fVar39);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    in_RDX = in_RDX + 2;
  }
  return;
}

