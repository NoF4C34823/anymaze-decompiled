
/* WARNING: Removing unreachable block (ram,0x00014001185f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140011600(ulonglong *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [15];
  undefined1 auVar14 [14];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [13];
  undefined1 auVar31 [13];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  undefined1 auVar37 [13];
  undefined1 auVar38 [13];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [15];
  unkuint9 Var45;
  undefined1 auVar46 [11];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [12];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  int iVar66;
  undefined1 auVar67 [16];
  byte bVar74;
  float fVar68;
  float fVar69;
  int iVar70;
  float fVar71;
  float fVar75;
  float fVar78;
  undefined1 auVar72 [12];
  uint uVar76;
  int iVar77;
  uint uVar80;
  float fVar81;
  uint uVar82;
  undefined1 auVar73 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  ushort uVar86;
  float fVar87;
  undefined4 uVar88;
  float fVar91;
  float fVar92;
  undefined1 auVar90 [16];
  float fVar93;
  uint6 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  byte bVar104;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar105;
  byte bVar110;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  float fVar116;
  uint uVar117;
  float fVar118;
  float fVar119;
  float fVar122;
  uint uVar123;
  float fVar124;
  float fVar125;
  uint uVar126;
  float fVar127;
  float fVar128;
  uint uVar129;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar130;
  undefined2 uVar131;
  uint uVar132;
  uint uVar139;
  uint uVar140;
  undefined1 auVar134 [16];
  uint uVar141;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar138 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  uint uVar79;
  undefined1 auVar89 [12];
  undefined1 auVar96 [16];
  undefined1 auVar99 [16];
  undefined1 auVar137 [16];
  undefined6 uVar133;
  
  fVar65 = _UNK_1430865fc;
  fVar64 = _UNK_1430865f8;
  fVar63 = _UNK_1430865f4;
  fVar62 = _DAT_1430865f0;
  fVar128 = _UNK_1430865ec;
  fVar125 = _UNK_1430865e8;
  fVar122 = _UNK_1430865e4;
  fVar116 = _DAT_1430865e0;
  fVar105 = _UNK_1430865dc;
  fVar118 = _UNK_1430865d8;
  fVar83 = _UNK_1430865d4;
  fVar61 = _DAT_1430865d0;
  fVar69 = _UNK_1430865cc;
  fVar71 = _UNK_1430865c8;
  fVar58 = _UNK_1430865c4;
  fVar60 = _DAT_1430865c0;
  if (param_4 == 4) {
    iVar66 = 0;
    if (0 < (int)(param_3 & 0xfffffffc)) {
      do {
        uVar1 = *param_1;
        iVar66 = iVar66 + 4;
        uVar2 = param_1[1];
        param_1 = param_1 + 2;
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar1;
        auVar15[0xe] = (char)(uVar1 >> 0x38);
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar1;
        auVar19[0xc] = (char)(uVar1 >> 0x30);
        auVar19._13_2_ = auVar15._13_2_;
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar1;
        auVar22._12_3_ = auVar19._12_3_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar1;
        auVar25[10] = (char)(uVar1 >> 0x28);
        auVar25._11_4_ = auVar22._11_4_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar1;
        auVar27._10_5_ = auVar25._10_5_;
        auVar29[8] = (char)(uVar1 >> 0x20);
        auVar29._0_8_ = uVar1;
        auVar29._9_6_ = auVar27._9_6_;
        auVar44._7_8_ = 0;
        auVar44._0_7_ = auVar29._8_7_;
        Var45 = CONCAT81(SUB158(auVar44 << 0x40,7),(char)(uVar1 >> 0x18));
        auVar54._9_6_ = 0;
        auVar54._0_9_ = Var45;
        auVar46._1_10_ = SUB1510(auVar54 << 0x30,5);
        auVar46[0] = (char)(uVar1 >> 0x10);
        auVar55._11_4_ = 0;
        auVar55._0_11_ = auVar46;
        auVar47._1_12_ = SUB1512(auVar55 << 0x20,3);
        auVar47[0] = (char)(uVar1 >> 8);
        uVar86 = CONCAT11(0,(byte)uVar1);
        auVar40._2_13_ = auVar47;
        auVar40._0_2_ = uVar86;
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar2;
        auVar13[0xe] = (char)(uVar2 >> 0x38);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16[0xc] = (char)(uVar2 >> 0x30);
        auVar16._13_2_ = auVar13._13_2_;
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar2;
        auVar20._12_3_ = auVar16._12_3_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23[10] = (char)(uVar2 >> 0x28);
        auVar23._11_4_ = auVar20._11_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26._10_5_ = auVar23._10_5_;
        auVar28[8] = (char)(uVar2 >> 0x20);
        auVar28._0_8_ = uVar2;
        auVar28._9_6_ = auVar26._9_6_;
        auVar48._7_8_ = 0;
        auVar48._0_7_ = auVar28._8_7_;
        Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),(char)(uVar2 >> 0x18));
        auVar56._9_6_ = 0;
        auVar56._0_9_ = Var49;
        auVar50._1_10_ = SUB1510(auVar56 << 0x30,5);
        auVar50[0] = (char)(uVar2 >> 0x10);
        auVar57._11_4_ = 0;
        auVar57._0_11_ = auVar50;
        auVar39[2] = (char)(uVar2 >> 8);
        auVar39._0_2_ = (short)uVar2;
        auVar39._3_12_ = SUB1512(auVar57 << 0x20,3);
        auVar99._0_12_ = auVar40._0_12_;
        auVar99._12_2_ = (short)Var45;
        auVar99._14_2_ = (short)Var49;
        auVar98._12_4_ = auVar99._12_4_;
        auVar98._0_10_ = auVar40._0_10_;
        auVar98._10_2_ = auVar50._0_2_;
        uVar59 = CONCAT62(auVar98._10_6_,auVar46._0_2_);
        auVar51._4_8_ = uVar59;
        auVar51._2_2_ = auVar39._2_2_;
        auVar51._0_2_ = auVar47._0_2_;
        uVar88 = CONCAT22(auVar28._8_2_,auVar29._8_2_);
        auVar89._0_8_ = CONCAT26(auVar23._10_2_,CONCAT24(auVar25._10_2_,uVar88));
        auVar89._8_2_ = auVar19._12_2_;
        auVar89._10_2_ = auVar16._12_2_;
        uVar79 = (uint)((ulonglong)auVar89._0_8_ >> 0x20);
        auVar100._12_4_ = uVar79;
        auVar100._8_4_ = auVar51._0_4_;
        auVar100._0_8_ = CONCAT44(uVar88,CONCAT22((short)uVar2,uVar86)) & 0xffffffff00ffffff;
        auVar17._10_2_ = 0;
        auVar17._0_10_ = auVar100._0_10_;
        auVar17._12_2_ = (short)(auVar100._0_8_ >> 0x30);
        auVar21._8_2_ = (short)(auVar100._0_8_ >> 0x20);
        auVar21._0_8_ = auVar100._0_8_;
        auVar21._10_4_ = auVar17._10_4_;
        auVar52._6_8_ = 0;
        auVar52._0_6_ = auVar21._8_6_;
        fVar87 = (float)(ushort)auVar100._0_8_;
        fVar91 = (float)(int)CONCAT82(SUB148(auVar52 << 0x40,6),(short)(auVar100._0_8_ >> 0x10));
        fVar92 = (float)auVar21._8_4_;
        fVar93 = (float)(auVar17._10_4_ >> 0x10);
        uVar94 = CONCAT24(auVar39._2_2_,auVar51._0_4_) & 0xffff0000ffff;
        auVar135._8_4_ = fVar92;
        auVar135._0_8_ = CONCAT44(fVar91,fVar87);
        auVar135._12_4_ = fVar93;
        auVar145._0_4_ = (float)(int)uVar94;
        auVar145._4_4_ = (float)(ushort)(uVar94 >> 0x20);
        auVar145._8_4_ = (float)(uVar79 & 0xffff);
        auVar145._12_4_ = (float)auVar23._10_2_;
        uVar79 = (uint)uVar59;
        auVar72._0_8_ = CONCAT44(auVar89._8_4_,uVar79);
        auVar72._8_4_ = auVar98._12_4_;
        auVar120._8_4_ = fVar92;
        auVar120._0_8_ = CONCAT44(fVar91,fVar87);
        auVar120._12_4_ = fVar93;
        auVar14._10_2_ = 0;
        auVar14._0_10_ = auVar72._0_10_;
        auVar14._12_2_ = auVar16._12_2_;
        auVar18._8_2_ = auVar19._12_2_;
        auVar18._0_8_ = auVar72._0_8_;
        auVar18._10_4_ = auVar14._10_4_;
        auVar53._6_8_ = 0;
        auVar53._0_6_ = auVar18._8_6_;
        auVar24._4_2_ = auVar50._0_2_;
        auVar24._0_4_ = uVar79;
        auVar24._6_8_ = SUB148(auVar53 << 0x40,6);
        auVar67._0_4_ = (float)(uVar79 & 0xffff);
        auVar67._4_4_ = (float)auVar24._4_4_;
        auVar67._8_4_ = (float)auVar18._8_4_;
        auVar67._12_4_ = (float)(auVar14._10_4_ >> 0x10);
        auVar109 = maxps(auVar135,auVar145);
        auVar107 = minps(auVar120,auVar145);
        auVar109 = maxps(auVar109,auVar67);
        auVar107 = minps(auVar107,auVar67);
        fVar111 = auVar109._0_4_;
        auVar85._0_4_ = (int)fVar111;
        fVar113 = auVar109._4_4_;
        auVar85._4_4_ = (int)fVar113;
        fVar114 = auVar109._8_4_;
        auVar85._8_4_ = (int)fVar114;
        fVar115 = auVar109._12_4_;
        auVar85._12_4_ = (int)fVar115;
        fVar68 = fVar111 - auVar107._0_4_;
        fVar75 = fVar113 - auVar107._4_4_;
        fVar78 = fVar114 - auVar107._8_4_;
        fVar81 = fVar115 - auVar107._12_4_;
        uVar79 = -(uint)(fVar111 == 0.0 || fVar68 == 0.0);
        uVar76 = -(uint)(fVar113 == 0.0 || fVar75 == 0.0);
        uVar80 = -(uint)(fVar114 == 0.0 || fVar78 == 0.0);
        uVar82 = -(uint)(fVar115 == 0.0 || fVar81 == 0.0);
        auVar107 = packssdw(auVar85,auVar85);
        auVar136._0_4_ = fVar111 + (float)((uint)fVar60 & uVar79);
        auVar136._4_4_ = fVar113 + (float)((uint)fVar58 & uVar76);
        auVar136._8_4_ = fVar114 + (float)((uint)fVar71 & uVar80);
        auVar136._12_4_ = fVar115 + (float)((uint)fVar69 & uVar82);
        auVar121._0_4_ = (float)((uint)fVar60 & uVar79) + fVar68;
        auVar121._4_4_ = (float)((uint)fVar58 & uVar76) + fVar75;
        auVar121._8_4_ = (float)((uint)fVar71 & uVar80) + fVar78;
        auVar121._12_4_ = (float)((uint)fVar69 & uVar82) + fVar81;
        auVar109 = rcpps((undefined1  [16])0x0,auVar136);
        auVar143 = rcpps(auVar121,auVar121);
        fVar119 = auVar143._0_4_;
        fVar111 = (auVar136._0_4_ - auVar145._0_4_) * fVar119;
        fVar124 = auVar143._4_4_;
        fVar113 = (auVar136._4_4_ - auVar145._4_4_) * fVar124;
        fVar127 = auVar143._8_4_;
        fVar114 = (auVar136._8_4_ - auVar145._8_4_) * fVar127;
        fVar130 = auVar143._12_4_;
        fVar115 = (auVar136._12_4_ - auVar145._12_4_) * fVar130;
        sVar4 = auVar107._0_2_;
        sVar5 = auVar107._2_2_;
        sVar7 = auVar107._4_2_;
        sVar8 = auVar107._6_2_;
        fVar68 = (auVar136._0_4_ - fVar87) * fVar119;
        fVar75 = (auVar136._4_4_ - fVar91) * fVar124;
        fVar78 = (auVar136._8_4_ - fVar92) * fVar127;
        fVar81 = (auVar136._12_4_ - fVar93) * fVar130;
        uVar117 = ~-(uint)(fVar87 == auVar136._0_4_) & -(uint)(auVar145._0_4_ == auVar136._0_4_);
        uVar123 = ~-(uint)(fVar91 == auVar136._4_4_) & -(uint)(auVar145._4_4_ == auVar136._4_4_);
        uVar126 = ~-(uint)(fVar92 == auVar136._8_4_) & -(uint)(auVar145._8_4_ == auVar136._8_4_);
        uVar129 = ~-(uint)(fVar93 == auVar136._12_4_) & -(uint)(auVar145._12_4_ == auVar136._12_4_);
        *(char *)((longlong)param_2 + 2) =
             (0 < sVar4) * (sVar4 < 0x100) * auVar107[0] - (0xff < sVar4);
        fVar119 = fVar119 * (auVar136._0_4_ - auVar67._0_4_);
        fVar124 = fVar124 * (auVar136._4_4_ - auVar67._4_4_);
        fVar127 = fVar127 * (auVar136._8_4_ - auVar67._8_4_);
        fVar130 = fVar130 * (auVar136._12_4_ - auVar67._12_4_);
        uVar132 = ~uVar117 & -(uint)(auVar67._0_4_ == auVar136._0_4_);
        uVar139 = ~uVar123 & -(uint)(auVar67._4_4_ == auVar136._4_4_);
        uVar140 = ~uVar126 & -(uint)(auVar67._8_4_ == auVar136._8_4_);
        uVar141 = ~uVar129 & -(uint)(auVar67._12_4_ == auVar136._12_4_);
        fVar68 = ((float)(~uVar132 &
                         ~uVar117 & -(uint)(fVar87 == auVar136._0_4_) & (uint)(fVar119 - fVar111)) +
                 (float)((uint)((fVar111 - fVar68) + fVar62) & uVar132) +
                 (float)(~uVar132 & (uint)((fVar68 - fVar119) + fVar116) & uVar117)) * fVar61;
        fVar75 = ((float)(~uVar139 &
                         ~uVar123 & -(uint)(fVar91 == auVar136._4_4_) & (uint)(fVar124 - fVar113)) +
                 (float)((uint)((fVar113 - fVar75) + fVar63) & uVar139) +
                 (float)(~uVar139 & (uint)((fVar75 - fVar124) + fVar122) & uVar123)) * fVar83;
        fVar78 = ((float)(~uVar140 &
                         ~uVar126 & -(uint)(fVar92 == auVar136._8_4_) & (uint)(fVar127 - fVar114)) +
                 (float)((uint)((fVar114 - fVar78) + fVar64) & uVar140) +
                 (float)(~uVar140 & (uint)((fVar78 - fVar127) + fVar125) & uVar126)) * fVar118;
        fVar81 = ((float)(~uVar141 &
                         ~uVar129 & -(uint)(fVar93 == auVar136._12_4_) & (uint)(fVar130 - fVar115))
                 + (float)((uint)((fVar115 - fVar81) + fVar65) & uVar141) +
                   (float)(~uVar141 & (uint)((fVar81 - fVar130) + fVar128) & uVar129)) * fVar105;
        iVar70 = (int)(float)(~uVar79 &
                             (uint)((float)(~-(uint)(fVar68 < 0.0) & (uint)fVar68) +
                                   (float)(-(uint)(fVar68 < 0.0) & (uint)(fVar60 + fVar68))));
        iVar77 = (int)(float)(~uVar76 &
                             (uint)((float)(~-(uint)(fVar75 < 0.0) & (uint)fVar75) +
                                   (float)(-(uint)(fVar75 < 0.0) & (uint)(fVar58 + fVar75))));
        auVar138._4_4_ = iVar77;
        auVar138._0_4_ = iVar70;
        auVar138._8_4_ = iVar77;
        auVar138._12_4_ = (int)(float)(~uVar76 & (uint)(auVar109._4_4_ * auVar121._4_4_ * fVar58));
        auVar137._8_8_ = auVar138._8_8_;
        auVar137._4_4_ = (int)(float)(~uVar79 & (uint)(auVar109._0_4_ * auVar121._0_4_ * fVar60));
        auVar137._0_4_ = iVar70;
        auVar73._4_4_ = (int)(float)(~uVar80 & (uint)(auVar109._8_4_ * auVar121._8_4_ * fVar71));
        auVar73._0_4_ =
             (int)(float)(~uVar80 &
                         (uint)((float)(~-(uint)(fVar78 < 0.0) & (uint)fVar78) +
                               (float)(-(uint)(fVar78 < 0.0) & (uint)(fVar71 + fVar78))));
        auVar73._8_4_ =
             (int)(float)(~uVar82 &
                         (uint)((float)(~-(uint)(fVar81 < 0.0) & (uint)fVar81) +
                               (float)(-(uint)(fVar81 < 0.0) & (uint)(fVar69 + fVar81))));
        auVar73._12_4_ = (int)(float)(~uVar82 & (uint)(auVar109._12_4_ * auVar121._12_4_ * fVar69));
        auVar109 = packssdw(auVar137,auVar73);
        sVar4 = auVar109._0_2_;
        sVar6 = auVar109._2_2_;
        uVar131 = CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar109[2] - (0xff < sVar6),
                           (0 < sVar4) * (sVar4 < 0x100) * auVar109[0] - (0xff < sVar4));
        sVar4 = auVar109._4_2_;
        sVar6 = auVar109._6_2_;
        uVar88 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar109[6] - (0xff < sVar6),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar109[4] - (0xff < sVar4),
                                   uVar131));
        sVar4 = auVar109._8_2_;
        sVar6 = auVar109._10_2_;
        uVar133 = CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar109[10] - (0xff < sVar6),
                           CONCAT14((0 < sVar4) * (sVar4 < 0x100) * auVar109[8] - (0xff < sVar4),
                                    uVar88));
        sVar4 = auVar109._12_2_;
        sVar6 = auVar109._14_2_;
        *(undefined2 *)param_2 = uVar131;
        *(short *)(param_2 + 1) = (short)((uint6)uVar133 >> 0x20);
        *(char *)((longlong)param_2 + 6) =
             (0 < sVar7) * (sVar7 < 0x100) * auVar107[4] - (0xff < sVar7);
        *(short *)(param_2 + 2) = (short)((uint)uVar88 >> 0x10);
        *(short *)(param_2 + 3) =
             (short)(CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar109[0xe] - (0xff < sVar6),
                              CONCAT16((0 < sVar4) * (sVar4 < 0x100) * auVar109[0xc] -
                                       (0xff < sVar4),uVar133)) >> 0x30);
        *(char *)((longlong)param_2 + 10) =
             (0 < sVar5) * (sVar5 < 0x100) * auVar107[2] - (0xff < sVar5);
        *(char *)((longlong)param_2 + 0xe) =
             (0 < sVar8) * (sVar8 < 0x100) * auVar107[6] - (0xff < sVar8);
        param_2 = param_2 + 4;
      } while (iVar66 < (int)(param_3 & 0xfffffffc));
    }
    for (; iVar66 < (int)param_3; iVar66 = iVar66 + 1) {
      fVar83 = (float)(byte)*param_1;
      fVar71 = (float)*(byte *)((longlong)param_1 + 1);
      fVar69 = (float)*(byte *)((longlong)param_1 + 2);
      fVar58 = fVar83;
      if (fVar83 <= fVar71) {
        fVar58 = fVar71;
      }
      fVar118 = fVar83;
      if (fVar71 <= fVar83) {
        fVar118 = fVar71;
      }
      if (fVar58 <= fVar69) {
        fVar58 = fVar69;
      }
      if (fVar69 <= fVar118) {
        fVar118 = fVar69;
      }
      fVar105 = 0.0;
      *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar58);
      fVar118 = fVar58 - fVar118;
      if ((fVar58 == 0.0) || ((fVar118 == 0.0 && (!NAN(fVar118))))) {
        *(undefined1 *)((longlong)param_2 + 1) = 0;
        *(undefined1 *)param_2 = 0;
      }
      else {
        auVar109 = rcpss(ZEXT416((uint)fVar58),ZEXT416((uint)fVar58));
        auVar107 = rcpss(ZEXT416((uint)fVar118),ZEXT416((uint)fVar118));
        *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar109._0_4_ * fVar118 * fVar60);
        fVar122 = auVar107._0_4_;
        fVar125 = (fVar58 - fVar83) * fVar122;
        fVar118 = (fVar58 - fVar69) * fVar122;
        fVar122 = (fVar58 - fVar71) * fVar122;
        if ((fVar58 == fVar83) && (!NAN(fVar58) && !NAN(fVar83))) {
          fVar105 = fVar118 - fVar122;
        }
        if ((fVar58 == fVar71) && (!NAN(fVar58) && !NAN(fVar71))) {
          fVar105 = (fVar125 - fVar118) + fVar116;
        }
        if ((fVar58 == fVar69) && (!NAN(fVar58) && !NAN(fVar69))) {
          fVar105 = (fVar122 - fVar125) + fVar62;
        }
        fVar105 = fVar105 * fVar61;
        if (fVar105 < 0.0) {
          fVar105 = fVar105 + fVar60;
        }
        *(char *)param_2 = (char)(int)ROUND(fVar105);
      }
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      param_2 = param_2 + 1;
    }
    return;
  }
  iVar66 = 0;
  if (0 < (int)(param_3 & 0xfffffffc)) {
    do {
      uVar88 = (undefined4)*param_1;
      iVar66 = iVar66 + 4;
      bVar104 = (byte)((uint)uVar88 >> 0x18);
      uVar1 = (ulonglong)(ushort)uVar88 & 0xffffffffffff00ff;
      uVar3 = *(undefined4 *)((longlong)param_1 + 4);
      auVar30._8_4_ = 0;
      auVar30._0_8_ = uVar1;
      auVar30[0xc] = bVar104;
      auVar31[8] = (char)((uint)uVar88 >> 0x10);
      auVar31._0_8_ = uVar1;
      auVar31[9] = 0;
      auVar31._10_3_ = auVar30._10_3_;
      auVar41._5_8_ = 0;
      auVar41._0_5_ = auVar31._8_5_;
      iVar70 = (int)uVar1;
      auVar32[4] = (char)((uint)uVar88 >> 8);
      auVar32._0_4_ = iVar70;
      auVar32[5] = 0;
      auVar32._6_7_ = SUB137(auVar41 << 0x40,6);
      uVar88 = (undefined4)param_1[1];
      param_1 = (ulonglong *)((longlong)param_1 + 0xc);
      auVar109._4_4_ = auVar31._8_4_;
      auVar109._0_4_ = auVar32._4_4_;
      auVar109._8_4_ = iVar70;
      auVar109[0xc] = bVar104;
      auVar109._13_3_ = 0;
      bVar74 = (byte)((uint)uVar3 >> 0x18);
      uVar1 = (ulonglong)(ushort)uVar3 & 0xffffffffffff00ff;
      auVar33._8_4_ = 0;
      auVar33._0_8_ = uVar1;
      auVar33[0xc] = bVar74;
      auVar34[8] = (char)((uint)uVar3 >> 0x10);
      auVar34._0_8_ = uVar1;
      auVar34[9] = 0;
      auVar34._10_3_ = auVar33._10_3_;
      auVar42._5_8_ = 0;
      auVar42._0_5_ = auVar34._8_5_;
      auVar35[4] = (char)((uint)uVar3 >> 8);
      auVar35._0_4_ = (int)uVar1;
      auVar35[5] = 0;
      auVar35._6_7_ = SUB137(auVar42 << 0x40,6);
      bVar110 = (byte)((uint)uVar88 >> 0x18);
      uVar2 = (ulonglong)(ushort)uVar88 & 0xffffffffffff00ff;
      auVar36._8_4_ = 0;
      auVar36._0_8_ = uVar2;
      auVar36[0xc] = bVar110;
      auVar37[8] = (char)((uint)uVar88 >> 0x10);
      auVar37._0_8_ = uVar2;
      auVar37[9] = 0;
      auVar37._10_3_ = auVar36._10_3_;
      auVar43._5_8_ = 0;
      auVar43._0_5_ = auVar37._8_5_;
      auVar38[4] = (char)((uint)uVar88 >> 8);
      auVar38._0_4_ = (int)uVar2;
      auVar38[5] = 0;
      auVar38._6_7_ = SUB137(auVar43 << 0x40,6);
      auVar84._0_4_ = (float)auVar31._8_4_;
      auVar84._4_4_ = (float)auVar35._4_4_;
      auVar84._8_4_ = (float)(int)uVar2;
      auVar84._12_4_ = (float)bVar110;
      fVar111 = (float)iVar70;
      fVar113 = (float)bVar104;
      fVar114 = (float)auVar34._8_4_;
      fVar115 = (float)auVar38._4_4_;
      auVar134._0_4_ = (float)auVar32._4_4_;
      auVar134._4_4_ = (float)(int)uVar1;
      auVar134._8_4_ = (float)bVar74;
      auVar134._12_4_ = (float)auVar37._8_4_;
      auVar142._8_4_ = fVar114;
      auVar142._0_8_ = CONCAT44(fVar113,fVar111);
      auVar142._12_4_ = fVar115;
      auVar106._8_4_ = fVar114;
      auVar106._0_8_ = CONCAT44(fVar113,fVar111);
      auVar106._12_4_ = fVar115;
      auVar143 = maxps(auVar142,auVar134);
      auVar107 = minps(auVar106,auVar134);
      auVar143 = maxps(auVar143,auVar84);
      auVar107 = minps(auVar107,auVar84);
      fVar119 = auVar143._0_4_;
      fVar124 = auVar143._4_4_;
      fVar127 = auVar143._8_4_;
      fVar130 = auVar143._12_4_;
      fVar116 = fVar119 - auVar107._0_4_;
      fVar122 = fVar124 - auVar107._4_4_;
      fVar125 = fVar127 - auVar107._8_4_;
      fVar128 = fVar130 - auVar107._12_4_;
      uVar79 = -(uint)(fVar119 == 0.0 || fVar116 == 0.0);
      uVar76 = -(uint)(fVar124 == 0.0 || fVar122 == 0.0);
      uVar80 = -(uint)(fVar127 == 0.0 || fVar125 == 0.0);
      uVar82 = -(uint)(fVar130 == 0.0 || fVar128 == 0.0);
      auVar144._0_4_ = fVar119 + (float)((uint)fVar60 & uVar79);
      auVar144._4_4_ = fVar124 + (float)((uint)fVar58 & uVar76);
      auVar144._8_4_ = fVar127 + (float)((uint)fVar71 & uVar80);
      auVar144._12_4_ = fVar130 + (float)((uint)fVar69 & uVar82);
      auVar90._0_4_ = (float)((uint)fVar60 & uVar79) + fVar116;
      auVar90._4_4_ = (float)((uint)fVar58 & uVar76) + fVar122;
      auVar90._8_4_ = (float)((uint)fVar71 & uVar80) + fVar125;
      auVar90._12_4_ = (float)((uint)fVar69 & uVar82) + fVar128;
      auVar107 = rcpps(auVar109,auVar144);
      auVar143._0_4_ = auVar107._0_4_ * auVar90._0_4_ * fVar60;
      auVar143._4_4_ = auVar107._4_4_ * auVar90._4_4_ * fVar58;
      auVar143._8_4_ = auVar107._8_4_ * auVar90._8_4_ * fVar71;
      auVar143._12_4_ = auVar107._12_4_ * auVar90._12_4_ * fVar69;
      auVar107 = rcpps(auVar143,auVar90);
      auVar101._0_4_ = (int)(float)(~uVar79 & (uint)auVar143._0_4_);
      auVar101._4_4_ = (int)(float)(~uVar76 & (uint)auVar143._4_4_);
      fVar116 = auVar107._0_4_;
      fVar68 = (auVar144._0_4_ - fVar111) * fVar116;
      fVar122 = auVar107._4_4_;
      fVar75 = (auVar144._4_4_ - fVar113) * fVar122;
      fVar125 = auVar107._8_4_;
      fVar78 = (auVar144._8_4_ - fVar114) * fVar125;
      fVar128 = auVar107._12_4_;
      fVar81 = (auVar144._12_4_ - fVar115) * fVar128;
      fVar87 = (auVar144._0_4_ - auVar134._0_4_) * fVar116;
      fVar91 = (auVar144._4_4_ - auVar134._4_4_) * fVar122;
      fVar92 = (auVar144._8_4_ - auVar134._8_4_) * fVar125;
      fVar93 = (auVar144._12_4_ - auVar134._12_4_) * fVar128;
      uVar117 = ~-(uint)(fVar111 == auVar144._0_4_) & -(uint)(auVar134._0_4_ == auVar144._0_4_);
      uVar123 = ~-(uint)(fVar113 == auVar144._4_4_) & -(uint)(auVar134._4_4_ == auVar144._4_4_);
      uVar126 = ~-(uint)(fVar114 == auVar144._8_4_) & -(uint)(auVar134._8_4_ == auVar144._8_4_);
      uVar129 = ~-(uint)(fVar115 == auVar144._12_4_) & -(uint)(auVar134._12_4_ == auVar144._12_4_);
      fVar116 = fVar116 * (auVar144._0_4_ - auVar84._0_4_);
      fVar122 = fVar122 * (auVar144._4_4_ - auVar84._4_4_);
      fVar125 = fVar125 * (auVar144._8_4_ - auVar84._8_4_);
      fVar128 = fVar128 * (auVar144._12_4_ - auVar84._12_4_);
      uVar132 = ~uVar117 & -(uint)(auVar84._0_4_ == auVar144._0_4_);
      uVar139 = ~uVar123 & -(uint)(auVar84._4_4_ == auVar144._4_4_);
      uVar140 = ~uVar126 & -(uint)(auVar84._8_4_ == auVar144._8_4_);
      uVar141 = ~uVar129 & -(uint)(auVar84._12_4_ == auVar144._12_4_);
      fVar116 = ((float)(~uVar132 &
                        ~uVar117 & -(uint)(fVar111 == auVar144._0_4_) & (uint)(fVar116 - fVar87)) +
                (float)((uint)((fVar87 - fVar68) + fVar62) & uVar132) +
                (float)(~uVar132 & (uint)((fVar68 - fVar116) + _DAT_1430865e0) & uVar117)) * fVar61;
      fVar122 = ((float)(~uVar139 &
                        ~uVar123 & -(uint)(fVar113 == auVar144._4_4_) & (uint)(fVar122 - fVar91)) +
                (float)((uint)((fVar91 - fVar75) + fVar63) & uVar139) +
                (float)(~uVar139 & (uint)((fVar75 - fVar122) + _UNK_1430865e4) & uVar123)) * fVar83;
      fVar125 = ((float)(~uVar140 &
                        ~uVar126 & -(uint)(fVar114 == auVar144._8_4_) & (uint)(fVar125 - fVar92)) +
                (float)((uint)((fVar92 - fVar78) + fVar64) & uVar140) +
                (float)(~uVar140 & (uint)((fVar78 - fVar125) + _UNK_1430865e8) & uVar126)) * fVar118
      ;
      fVar128 = ((float)(~uVar141 &
                        ~uVar129 & -(uint)(fVar115 == auVar144._12_4_) & (uint)(fVar128 - fVar93)) +
                (float)((uint)((fVar93 - fVar81) + fVar65) & uVar141) +
                (float)(~uVar141 & (uint)((fVar81 - fVar128) + _UNK_1430865ec) & uVar129)) * fVar105
      ;
      auVar95._0_4_ =
           (int)(float)(~uVar79 &
                       (uint)((float)(~-(uint)(fVar116 < 0.0) & (uint)fVar116) +
                             (float)(-(uint)(fVar116 < 0.0) & (uint)(fVar60 + fVar116))));
      auVar96._4_4_ =
           (int)(float)(~uVar76 &
                       (uint)((float)(~-(uint)(fVar122 < 0.0) & (uint)fVar122) +
                             (float)(-(uint)(fVar122 < 0.0) & (uint)(fVar58 + fVar122))));
      auVar96._0_4_ = auVar95._0_4_;
      auVar102._12_4_ = (int)(float)(~uVar80 & (uint)auVar143._8_4_);
      auVar102._8_4_ =
           (int)(float)(~uVar80 &
                       (uint)((float)(~-(uint)(fVar125 < 0.0) & (uint)fVar125) +
                             (float)(-(uint)(fVar125 < 0.0) & (uint)(fVar71 + fVar125))));
      auVar96._8_4_ = auVar96._4_4_;
      auVar96._12_4_ = auVar101._4_4_;
      auVar95._8_8_ = auVar96._8_8_;
      auVar95._4_4_ = auVar101._0_4_;
      auVar101._8_4_ = auVar101._4_4_;
      auVar101._12_4_ = (int)fVar124;
      auVar102._0_8_ = auVar101._8_8_;
      auVar107._8_8_ = 0;
      auVar107._0_8_ = CONCAT44((int)fVar124,(int)fVar119) << 0x20;
      auVar107 = auVar95 & _DAT_143086600 | auVar107 << 0x40;
      auVar108._0_8_ = auVar107._0_8_;
      auVar108._8_4_ = auVar107._12_4_;
      auVar108._12_4_ = auVar107._8_4_;
      auVar109 = packssdw(auVar108,auVar102);
      auVar103._4_4_ =
           (int)(float)(~uVar82 &
                       (uint)((float)(~-(uint)(fVar128 < 0.0) & (uint)fVar128) +
                             (float)(-(uint)(fVar128 < 0.0) & (uint)(fVar69 + fVar128))));
      auVar103._0_4_ = (int)fVar127;
      auVar103._8_4_ = (int)(float)(~uVar82 & (uint)auVar143._12_4_);
      auVar103._12_4_ = (int)fVar130;
      sVar4 = auVar109._0_2_;
      sVar5 = auVar109._2_2_;
      sVar6 = auVar109._4_2_;
      sVar7 = auVar109._6_2_;
      uVar88 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar109[6] - (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar109[4] - (0xff < sVar6),
                                 CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar109[2] -
                                          (0xff < sVar5),
                                          (0 < sVar4) * (sVar4 < 0x100) * auVar109[0] -
                                          (0xff < sVar4))));
      sVar8 = auVar109._8_2_;
      sVar9 = auVar109._10_2_;
      sVar10 = auVar109._12_2_;
      sVar11 = auVar109._14_2_;
      auVar107 = packssdw(auVar103,auVar103);
      sVar4 = auVar107._0_2_;
      sVar5 = auVar107._2_2_;
      sVar6 = auVar107._4_2_;
      sVar7 = auVar107._6_2_;
      *param_2 = uVar88;
      param_2[2] = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar107[6] - (0xff < sVar7),
                            CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar107[4] - (0xff < sVar6),
                                     CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar107[2] -
                                              (0xff < sVar5),
                                              (0 < sVar4) * (sVar4 < 0x100) * auVar107[0] -
                                              (0xff < sVar4))));
      param_2[1] = (int)(CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar109[0xe] - (0xff < sVar11),
                                  CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar109[0xc] -
                                           (0xff < sVar10),
                                           CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar109[10] -
                                                    (0xff < sVar9),
                                                    CONCAT14((0 < sVar8) * (sVar8 < 0x100) *
                                                             auVar109[8] - (0xff < sVar8),uVar88))))
                        >> 0x20);
      param_2 = param_2 + 3;
      fVar116 = _DAT_1430865e0;
    } while (iVar66 < (int)(param_3 & 0xfffffffc));
  }
  for (; fVar58 = _DAT_1430865e0, iVar66 < (int)param_3; iVar66 = iVar66 + 1) {
    fVar118 = (float)(byte)*param_1;
    fVar69 = (float)*(byte *)((longlong)param_1 + 1);
    fVar83 = (float)*(byte *)((longlong)param_1 + 2);
    fVar71 = fVar118;
    if (fVar118 <= fVar69) {
      fVar71 = fVar69;
    }
    fVar105 = fVar118;
    if (fVar69 <= fVar118) {
      fVar105 = fVar69;
    }
    if (fVar71 <= fVar83) {
      fVar71 = fVar83;
    }
    auVar12._4_8_ = 0;
    auVar12._0_4_ = fVar71;
    auVar97._12_4_ = 0;
    auVar97._0_12_ = auVar12;
    if (fVar83 <= fVar105) {
      fVar105 = fVar83;
    }
    fVar122 = 0.0;
    _DAT_1430865e0 = fVar116;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar71);
    fVar105 = fVar71 - fVar105;
    if ((fVar71 == 0.0) || ((fVar105 == 0.0 && (!NAN(fVar105))))) {
      *(undefined1 *)((longlong)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0;
    }
    else {
      auVar112._12_4_ = 0;
      auVar112._0_12_ = auVar12;
      auVar109 = rcpss(auVar112,auVar97);
      auVar107 = rcpss(ZEXT416((uint)fVar105),ZEXT416((uint)fVar105));
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar109._0_4_ * fVar105 * fVar60);
      fVar116 = auVar107._0_4_;
      fVar125 = (fVar71 - fVar118) * fVar116;
      fVar105 = (fVar71 - fVar83) * fVar116;
      fVar116 = (fVar71 - fVar69) * fVar116;
      if ((fVar71 == fVar118) && (!NAN(fVar71) && !NAN(fVar118))) {
        fVar122 = fVar105 - fVar116;
      }
      if ((fVar71 == fVar69) && (!NAN(fVar71) && !NAN(fVar69))) {
        fVar122 = (fVar125 - fVar105) + fVar58;
      }
      if ((fVar71 == fVar83) && (!NAN(fVar71) && !NAN(fVar83))) {
        fVar122 = (fVar116 - fVar125) + fVar62;
      }
      fVar122 = fVar122 * fVar61;
      if (fVar122 < 0.0) {
        fVar122 = fVar122 + fVar60;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar122);
    }
    param_1 = (ulonglong *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
    fVar116 = _DAT_1430865e0;
    _DAT_1430865e0 = fVar58;
  }
  _DAT_1430865e0 = fVar116;
  return;
}

