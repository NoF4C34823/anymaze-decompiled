
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140139d60(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  undefined1 (*pauVar2) [64];
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  ushort uVar25;
  undefined1 auVar26 [64];
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined1 auVar39 [32];
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined4 *puVar44;
  longlong lVar45;
  ulonglong uVar46;
  float *pfVar47;
  longlong lVar48;
  longlong lVar49;
  int iVar50;
  ulonglong uVar51;
  undefined1 (*pauVar52) [32];
  longlong lVar53;
  undefined1 auVar77 [16];
  longlong lVar54;
  longlong lVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  longlong lVar59;
  int iVar60;
  ulonglong *puVar61;
  longlong lVar62;
  ulonglong uVar63;
  longlong lVar64;
  ulonglong uVar65;
  longlong lVar66;
  int iVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  longlong lVar70;
  ulonglong uVar71;
  uint uVar72;
  int iVar73;
  longlong lVar74;
  ulonglong uVar75;
  undefined8 uVar76;
  undefined1 auVar78 [32];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar88 [64];
  undefined1 auVar89 [64];
  undefined1 auVar90 [64];
  undefined1 auVar91 [64];
  undefined1 auVar92 [64];
  float fVar93;
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM16 [64];
  ulonglong uStack_138;
  undefined4 *puStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_108;
  undefined4 *puStack_f8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  
  iVar37 = _UNK_143087a3c;
  iVar36 = _UNK_143087a38;
  iVar35 = _UNK_143087a34;
  iVar34 = _UNK_143087a30;
  iVar33 = _UNK_143087a2c;
  iVar32 = _UNK_143087a28;
  iVar31 = _UNK_143087a24;
  iVar30 = _UNK_143087a20;
  iVar29 = _UNK_143087a1c;
  iVar28 = _UNK_143087a18;
  iVar27 = _UNK_143087a14;
  iVar50 = _UNK_143087a10;
  iVar73 = _UNK_143087a0c;
  iVar67 = _UNK_143087a08;
  iVar57 = _UNK_143087a04;
  iVar60 = _DAT_143087a00;
  auVar87 = _DAT_143087980;
  lVar64 = (longlong)param_2;
  lVar59 = -lVar64;
  uVar56 = param_5._4_4_ + 3 & 0xfffffffc;
  lVar45 = (longlong)(int)((uint)param_5 + 3 & 0xfffffffc);
  lVar54 = (longlong)(int)uVar56;
  if (((param_1 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar46 = (ulonglong)(int)(uint)param_5;
  if ((lVar64 < (longlong)uVar46) || ((int)param_4 < (int)((uint)param_5 * 4))) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  lVar48 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  lVar49 = (-(param_6 & 0x1f) & 0x1f) + param_6;
  lVar53 = lVar49 + (longlong)(int)(uVar56 * 2) * 4;
  uVar51 = (ulonglong)(int)param_5._4_4_;
  if ((int)param_5._4_4_ < 0x10) {
    uVar56 = 0;
    auVar87 = in_ZMM0;
LAB_140139fca:
    iVar37 = _UNK_143087a3c;
    iVar36 = _UNK_143087a38;
    iVar35 = _UNK_143087a34;
    iVar34 = _UNK_143087a30;
    iVar33 = _UNK_143087a2c;
    iVar32 = _UNK_143087a28;
    iVar31 = _UNK_143087a24;
    iVar30 = _UNK_143087a20;
    iVar29 = _UNK_143087a1c;
    iVar28 = _UNK_143087a18;
    iVar27 = _UNK_143087a14;
    iVar50 = _UNK_143087a10;
    iVar73 = _UNK_143087a0c;
    iVar67 = _UNK_143087a08;
    iVar57 = _UNK_143087a04;
    iVar60 = _DAT_143087a00;
    if (uVar56 + 1 <= param_5._4_4_) {
      auVar86 = vpbroadcastd_avx512f();
      auVar87 = vpbroadcastd_avx512f();
      uVar42 = vpcmpgtd_avx512f(auVar86,_DAT_1430879c0);
      in_ZMM1 = vpaddd_avx512f(auVar87,_DAT_143087ac0);
      auVar86 = vpmulld_avx512f(in_ZMM1,in_ZMM1);
      auVar86 = vcvtdq2ps_avx512f(auVar86);
      puVar4 = (uint *)(lVar49 + (longlong)(int)uVar56 * 4);
      bVar7 = (bool)((byte)uVar42 & 1);
      bVar8 = (bool)((byte)(uVar42 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar42 >> 2) & 1);
      bVar10 = (bool)((byte)(uVar42 >> 3) & 1);
      bVar11 = (bool)((byte)(uVar42 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar42 >> 5) & 1);
      bVar13 = (bool)((byte)(uVar42 >> 6) & 1);
      bVar14 = (bool)((byte)(uVar42 >> 7) & 1);
      bVar15 = (byte)(uVar42 >> 8);
      bVar16 = (bool)(bVar15 & 1);
      bVar17 = (bool)((byte)(uVar42 >> 9) & 1);
      bVar18 = (bool)((byte)(uVar42 >> 10) & 1);
      bVar19 = (bool)((byte)(uVar42 >> 0xb) & 1);
      bVar20 = (bool)((byte)(uVar42 >> 0xc) & 1);
      bVar21 = (bool)((byte)(uVar42 >> 0xd) & 1);
      bVar22 = (bool)((byte)(uVar42 >> 0xe) & 1);
      bVar23 = SUB81(uVar42 >> 0xf,0);
      *puVar4 = (uint)bVar7 * auVar86._0_4_ | (uint)!bVar7 * *puVar4;
      puVar4[1] = (uint)bVar8 * auVar86._4_4_ | (uint)!bVar8 * puVar4[1];
      puVar4[2] = (uint)bVar9 * auVar86._8_4_ | (uint)!bVar9 * puVar4[2];
      puVar4[3] = (uint)bVar10 * auVar86._12_4_ | (uint)!bVar10 * puVar4[3];
      puVar4[4] = (uint)bVar11 * auVar86._16_4_ | (uint)!bVar11 * puVar4[4];
      puVar4[5] = (uint)bVar12 * auVar86._20_4_ | (uint)!bVar12 * puVar4[5];
      puVar4[6] = (uint)bVar13 * auVar86._24_4_ | (uint)!bVar13 * puVar4[6];
      puVar4[7] = (uint)bVar14 * auVar86._28_4_ | (uint)!bVar14 * puVar4[7];
      puVar4[8] = (uint)bVar16 * auVar86._32_4_ | (uint)!bVar16 * puVar4[8];
      puVar4[9] = (uint)bVar17 * auVar86._36_4_ | (uint)!bVar17 * puVar4[9];
      puVar4[10] = (uint)bVar18 * auVar86._40_4_ | (uint)!bVar18 * puVar4[10];
      puVar4[0xb] = (uint)bVar19 * auVar86._44_4_ | (uint)!bVar19 * puVar4[0xb];
      puVar4[0xc] = (uint)bVar20 * auVar86._48_4_ | (uint)!bVar20 * puVar4[0xc];
      puVar4[0xd] = (uint)bVar21 * auVar86._52_4_ | (uint)!bVar21 * puVar4[0xd];
      puVar4[0xe] = (uint)bVar22 * auVar86._56_4_ | (uint)!bVar22 * puVar4[0xe];
      puVar4[0xf] = (uint)bVar23 * auVar86._60_4_ | (uint)!bVar23 * puVar4[0xf];
      pauVar2 = (undefined1 (*) [64])(lVar49 + ((longlong)(int)uVar56 + uVar51) * 4);
      auVar86 = *pauVar2;
      bVar7 = (bool)((byte)uVar42 & 1);
      auVar84._0_4_ = (uint)bVar7 * iVar60 | (uint)!bVar7 * auVar86._0_4_;
      bVar7 = (bool)((byte)(uVar42 >> 1) & 1);
      auVar84._4_4_ = (uint)bVar7 * iVar57 | (uint)!bVar7 * auVar86._4_4_;
      bVar7 = (bool)((byte)(uVar42 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar7 * iVar67 | (uint)!bVar7 * auVar86._8_4_;
      bVar7 = (bool)((byte)(uVar42 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar7 * iVar73 | (uint)!bVar7 * auVar86._12_4_;
      bVar7 = (bool)((byte)(uVar42 >> 4) & 1);
      auVar84._16_4_ = (uint)bVar7 * iVar50 | (uint)!bVar7 * auVar86._16_4_;
      bVar7 = (bool)((byte)(uVar42 >> 5) & 1);
      auVar84._20_4_ = (uint)bVar7 * iVar27 | (uint)!bVar7 * auVar86._20_4_;
      bVar7 = (bool)((byte)(uVar42 >> 6) & 1);
      auVar84._24_4_ = (uint)bVar7 * iVar28 | (uint)!bVar7 * auVar86._24_4_;
      bVar7 = (bool)((byte)(uVar42 >> 7) & 1);
      auVar84._28_4_ = (uint)bVar7 * iVar29 | (uint)!bVar7 * auVar86._28_4_;
      bVar7 = (bool)(bVar15 & 1);
      auVar84._32_4_ = (uint)bVar7 * iVar30 | (uint)!bVar7 * auVar86._32_4_;
      bVar7 = (bool)((byte)(uVar42 >> 9) & 1);
      auVar84._36_4_ = (uint)bVar7 * iVar31 | (uint)!bVar7 * auVar86._36_4_;
      bVar7 = (bool)((byte)(uVar42 >> 10) & 1);
      auVar84._40_4_ = (uint)bVar7 * iVar32 | (uint)!bVar7 * auVar86._40_4_;
      bVar7 = (bool)((byte)(uVar42 >> 0xb) & 1);
      auVar84._44_4_ = (uint)bVar7 * iVar33 | (uint)!bVar7 * auVar86._44_4_;
      bVar7 = (bool)((byte)(uVar42 >> 0xc) & 1);
      auVar84._48_4_ = (uint)bVar7 * iVar34 | (uint)!bVar7 * auVar86._48_4_;
      bVar7 = (bool)((byte)(uVar42 >> 0xd) & 1);
      auVar84._52_4_ = (uint)bVar7 * iVar35 | (uint)!bVar7 * auVar86._52_4_;
      bVar7 = (bool)((byte)(uVar42 >> 0xe) & 1);
      auVar84._56_4_ = (uint)bVar7 * iVar36 | (uint)!bVar7 * auVar86._56_4_;
      bVar7 = SUB81(uVar42 >> 0xf,0);
      auVar84._60_4_ = (uint)bVar7 * iVar37 | (uint)!bVar7 * auVar86._60_4_;
      *pauVar2 = auVar84;
    }
  }
  else {
    if ((int)param_5._4_4_ < 0x86) {
      uVar40 = 0;
      uVar56 = param_5._4_4_ & 0xfffffff0;
LAB_140139f58:
      in_ZMM1 = vpbroadcastd_avx512f();
      auVar86 = vpaddd_avx512f(in_ZMM1,_DAT_143087ac0);
      if ((int)(uVar40 + 0x10) <= (int)uVar56) {
        uVar42 = (ulonglong)(int)uVar40;
        in_ZMM1._4_4_ = _UNK_143087a04;
        in_ZMM1._0_4_ = _DAT_143087a00;
        in_ZMM1._8_4_ = _UNK_143087a08;
        in_ZMM1._12_4_ = _UNK_143087a0c;
        in_ZMM1._16_4_ = _UNK_143087a10;
        in_ZMM1._20_4_ = _UNK_143087a14;
        in_ZMM1._24_4_ = _UNK_143087a18;
        in_ZMM1._28_4_ = _UNK_143087a1c;
        in_ZMM1._32_4_ = _UNK_143087a20;
        in_ZMM1._36_4_ = _UNK_143087a24;
        in_ZMM1._40_4_ = _UNK_143087a28;
        in_ZMM1._44_4_ = _UNK_143087a2c;
        in_ZMM1._48_4_ = _UNK_143087a30;
        in_ZMM1._52_4_ = _UNK_143087a34;
        in_ZMM1._56_4_ = _UNK_143087a38;
        in_ZMM1._60_4_ = _UNK_143087a3c;
        do {
          auVar84 = vpmulld_avx512f(auVar86,auVar86);
          auVar84 = vcvtdq2ps_avx512f(auVar84);
          auVar86 = vpaddd_avx512f(auVar86,auVar87);
          *(undefined1 (*) [64])(lVar49 + uVar42 * 4) = auVar84;
          *(undefined1 (*) [64])(lVar49 + uVar51 * 4 + uVar42 * 4) = in_ZMM1;
          uVar42 = uVar42 + 0x10;
        } while (uVar42 < (ulonglong)(longlong)(int)uVar56);
      }
      goto LAB_140139fca;
    }
    uVar42 = lVar49 + uVar51 * 4;
    uVar40 = (uint)uVar42 & 0x3f;
    if ((uVar42 & 3) == 0) {
      if (((uVar42 & 0x3f) != 0) && (uVar40 = 0x40 - uVar40 >> 2, (int)param_5._4_4_ < (int)uVar40))
      {
        uVar40 = param_5._4_4_;
      }
    }
    else {
      uVar40 = 0;
    }
    uVar56 = param_5._4_4_ - (param_5._4_4_ - uVar40 & 0xf);
    if (uVar40 == 0) goto LAB_140139f58;
    uVar68 = 0;
    in_ZMM1._4_4_ = _UNK_143087a04;
    in_ZMM1._0_4_ = _DAT_143087a00;
    in_ZMM1._8_4_ = _UNK_143087a08;
    in_ZMM1._12_4_ = _UNK_143087a0c;
    in_ZMM1._16_4_ = _UNK_143087a10;
    in_ZMM1._20_4_ = _UNK_143087a14;
    in_ZMM1._24_4_ = _UNK_143087a18;
    in_ZMM1._28_4_ = _UNK_143087a1c;
    in_ZMM1._32_4_ = _UNK_143087a20;
    in_ZMM1._36_4_ = _UNK_143087a24;
    in_ZMM1._40_4_ = _UNK_143087a28;
    in_ZMM1._44_4_ = _UNK_143087a2c;
    in_ZMM1._48_4_ = _UNK_143087a30;
    in_ZMM1._52_4_ = _UNK_143087a34;
    in_ZMM1._56_4_ = _UNK_143087a38;
    in_ZMM1._60_4_ = _UNK_143087a3c;
    auVar84 = vpbroadcastd_avx512f();
    auVar86 = _DAT_1430879c0;
    do {
      uVar69 = vpcmpgtd_avx512f(auVar84,auVar86);
      auVar85 = vpmulld_avx512f(auVar86,auVar86);
      auVar85 = vcvtdq2ps_avx512f(auVar85);
      auVar86 = vpaddd_avx512f(auVar86,auVar87);
      puVar4 = (uint *)(lVar49 + uVar68 * 4);
      bVar7 = (bool)((byte)uVar69 & 1);
      bVar8 = (bool)((byte)(uVar69 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar69 >> 2) & 1);
      bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
      bVar11 = (bool)((byte)(uVar69 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar69 >> 5) & 1);
      bVar13 = (bool)((byte)(uVar69 >> 6) & 1);
      bVar14 = (bool)((byte)(uVar69 >> 7) & 1);
      bVar15 = (byte)(uVar69 >> 8);
      bVar16 = (bool)(bVar15 & 1);
      bVar17 = (bool)((byte)(uVar69 >> 9) & 1);
      bVar18 = (bool)((byte)(uVar69 >> 10) & 1);
      bVar19 = (bool)((byte)(uVar69 >> 0xb) & 1);
      bVar20 = (bool)((byte)(uVar69 >> 0xc) & 1);
      bVar21 = (bool)((byte)(uVar69 >> 0xd) & 1);
      bVar22 = (bool)((byte)(uVar69 >> 0xe) & 1);
      bVar23 = SUB81(uVar69 >> 0xf,0);
      *puVar4 = (uint)bVar7 * auVar85._0_4_ | (uint)!bVar7 * *puVar4;
      puVar4[1] = (uint)bVar8 * auVar85._4_4_ | (uint)!bVar8 * puVar4[1];
      puVar4[2] = (uint)bVar9 * auVar85._8_4_ | (uint)!bVar9 * puVar4[2];
      puVar4[3] = (uint)bVar10 * auVar85._12_4_ | (uint)!bVar10 * puVar4[3];
      puVar4[4] = (uint)bVar11 * auVar85._16_4_ | (uint)!bVar11 * puVar4[4];
      puVar4[5] = (uint)bVar12 * auVar85._20_4_ | (uint)!bVar12 * puVar4[5];
      puVar4[6] = (uint)bVar13 * auVar85._24_4_ | (uint)!bVar13 * puVar4[6];
      puVar4[7] = (uint)bVar14 * auVar85._28_4_ | (uint)!bVar14 * puVar4[7];
      puVar4[8] = (uint)bVar16 * auVar85._32_4_ | (uint)!bVar16 * puVar4[8];
      puVar4[9] = (uint)bVar17 * auVar85._36_4_ | (uint)!bVar17 * puVar4[9];
      puVar4[10] = (uint)bVar18 * auVar85._40_4_ | (uint)!bVar18 * puVar4[10];
      puVar4[0xb] = (uint)bVar19 * auVar85._44_4_ | (uint)!bVar19 * puVar4[0xb];
      puVar4[0xc] = (uint)bVar20 * auVar85._48_4_ | (uint)!bVar20 * puVar4[0xc];
      puVar4[0xd] = (uint)bVar21 * auVar85._52_4_ | (uint)!bVar21 * puVar4[0xd];
      puVar4[0xe] = (uint)bVar22 * auVar85._56_4_ | (uint)!bVar22 * puVar4[0xe];
      puVar4[0xf] = (uint)bVar23 * auVar85._60_4_ | (uint)!bVar23 * puVar4[0xf];
      pauVar2 = (undefined1 (*) [64])(uVar42 + uVar68 * 4);
      auVar85 = *pauVar2;
      bVar7 = (bool)((byte)uVar69 & 1);
      auVar88._0_4_ = (uint)bVar7 * iVar60 | (uint)!bVar7 * auVar85._0_4_;
      bVar7 = (bool)((byte)(uVar69 >> 1) & 1);
      auVar88._4_4_ = (uint)bVar7 * iVar57 | (uint)!bVar7 * auVar85._4_4_;
      bVar7 = (bool)((byte)(uVar69 >> 2) & 1);
      auVar88._8_4_ = (uint)bVar7 * iVar67 | (uint)!bVar7 * auVar85._8_4_;
      bVar7 = (bool)((byte)(uVar69 >> 3) & 1);
      auVar88._12_4_ = (uint)bVar7 * iVar73 | (uint)!bVar7 * auVar85._12_4_;
      bVar7 = (bool)((byte)(uVar69 >> 4) & 1);
      auVar88._16_4_ = (uint)bVar7 * iVar50 | (uint)!bVar7 * auVar85._16_4_;
      bVar7 = (bool)((byte)(uVar69 >> 5) & 1);
      auVar88._20_4_ = (uint)bVar7 * iVar27 | (uint)!bVar7 * auVar85._20_4_;
      bVar7 = (bool)((byte)(uVar69 >> 6) & 1);
      auVar88._24_4_ = (uint)bVar7 * iVar28 | (uint)!bVar7 * auVar85._24_4_;
      bVar7 = (bool)((byte)(uVar69 >> 7) & 1);
      auVar88._28_4_ = (uint)bVar7 * iVar29 | (uint)!bVar7 * auVar85._28_4_;
      bVar7 = (bool)(bVar15 & 1);
      auVar88._32_4_ = (uint)bVar7 * iVar30 | (uint)!bVar7 * auVar85._32_4_;
      bVar7 = (bool)((byte)(uVar69 >> 9) & 1);
      auVar88._36_4_ = (uint)bVar7 * iVar31 | (uint)!bVar7 * auVar85._36_4_;
      bVar7 = (bool)((byte)(uVar69 >> 10) & 1);
      auVar88._40_4_ = (uint)bVar7 * iVar32 | (uint)!bVar7 * auVar85._40_4_;
      bVar7 = (bool)((byte)(uVar69 >> 0xb) & 1);
      auVar88._44_4_ = (uint)bVar7 * iVar33 | (uint)!bVar7 * auVar85._44_4_;
      bVar7 = (bool)((byte)(uVar69 >> 0xc) & 1);
      auVar88._48_4_ = (uint)bVar7 * iVar34 | (uint)!bVar7 * auVar85._48_4_;
      bVar7 = (bool)((byte)(uVar69 >> 0xd) & 1);
      auVar88._52_4_ = (uint)bVar7 * iVar35 | (uint)!bVar7 * auVar85._52_4_;
      bVar7 = (bool)((byte)(uVar69 >> 0xe) & 1);
      auVar88._56_4_ = (uint)bVar7 * iVar36 | (uint)!bVar7 * auVar85._56_4_;
      bVar7 = SUB81(uVar69 >> 0xf,0);
      auVar88._60_4_ = (uint)bVar7 * iVar37 | (uint)!bVar7 * auVar85._60_4_;
      *pauVar2 = auVar88;
      uVar68 = uVar68 + 0x10;
    } while (uVar68 < (ulonglong)(longlong)(int)uVar40);
    if (param_5._4_4_ != uVar40) goto LAB_140139f58;
  }
  auVar86 = _DAT_143087980;
  uStack_120 = 0;
  uVar40 = uStack_120;
  uStack_120 = 0;
  uVar56 = param_5._4_4_ * 2;
  if (0 < (int)uVar56) {
    if ((int)uVar56 < 0x10) {
      puStack_130._0_4_ = 0;
    }
    else {
      if ((int)uVar56 < 0x31) {
        uVar42 = 0;
        puStack_130._0_4_ = uVar56 & 0xfffffff0;
      }
      else {
        uVar68 = lVar49 + lVar54 * 0x28;
        uVar42 = uVar68 & 0x3f;
        if ((uVar68 & 3) == 0) {
          if (((int)uVar42 != 0) &&
             (uVar41 = 0x40U - (int)uVar42 >> 2, uVar42 = (ulonglong)uVar41,
             (int)uVar56 < (int)uVar41)) {
            uVar42 = (ulonglong)uVar56;
          }
        }
        else {
          uVar42 = 0;
        }
        uStack_120 = (uint)uVar42;
        puStack_130._0_4_ = uVar56 - (uVar56 - uStack_120 & 0xf);
        if (uStack_120 != 0) {
          uVar69 = 0;
          auVar87 = vpbroadcastd_avx512f();
          in_ZMM1 = vpxord_avx512f(in_ZMM1,in_ZMM1);
          auVar84 = _DAT_1430879c0;
          do {
            vpcmpgtd_avx512f(auVar87,auVar84);
            auVar84 = vpaddd_avx512f(auVar84,auVar86);
            auVar85 = vmovdqu32_avx512f(in_ZMM1);
            *(undefined1 (*) [64])(uVar68 + uVar69 * 4) = auVar85;
            uVar69 = uVar69 + 0x10;
          } while (uVar69 < (ulonglong)(longlong)(int)uStack_120);
          uVar40 = uStack_120;
          if (uVar56 == uStack_120) goto LAB_14013a1ec;
        }
      }
      uStack_120 = uVar40;
      if ((int)uVar42 + 0x10 <= (int)(uint)puStack_130) {
        lVar43 = (longlong)(int)uVar42;
        auVar87 = vpxord_avx512f(auVar87,auVar87);
        do {
          uVar40 = (int)uVar42 + 0x10;
          uVar42 = (ulonglong)uVar40;
          auVar86 = vmovdqu32_avx512f(auVar87);
          *(undefined1 (*) [64])(lVar49 + lVar54 * 0x28 + lVar43 * 4) = auVar86;
          lVar43 = lVar43 + 0x10;
          uStack_120 = (uint)puStack_130;
        } while (uVar40 < (uint)puStack_130);
      }
    }
    auVar86 = _DAT_143087980;
    if ((uint)puStack_130 + 1 <= uVar56) {
      auVar87 = vpbroadcastd_avx512f();
      uVar40 = 0;
      lVar43 = 0;
      in_ZMM1 = vpxord_avx512f(in_ZMM1,in_ZMM1);
      auVar84 = _DAT_1430879c0;
      do {
        vpcmpgtd_avx512f(auVar87,auVar84);
        uVar40 = uVar40 + 0x10;
        auVar84 = vpaddd_avx512f(auVar84,auVar86);
        auVar85 = vmovdqu32_avx512f(in_ZMM1);
        *(undefined1 (*) [64])
         (lVar49 + lVar54 * 0x28 + (longlong)(int)(uint)puStack_130 * 4 + lVar43 * 4) = auVar85;
        lVar43 = lVar43 + 0x10;
      } while (uVar40 < uVar56 - (uint)puStack_130);
      uStack_120 = (uVar56 - (uint)puStack_130) + (uint)puStack_130;
    }
  }
LAB_14013a1ec:
  auVar86 = _DAT_143087980;
  iVar60 = param_5._4_4_ * 3;
  lVar43 = (longlong)(int)uStack_120;
  if ((int)uStack_120 <= iVar60) {
    uVar40 = (iVar60 - uStack_120) + 1;
    if ((int)uVar40 < 0x10) {
      uStack_108 = 0;
    }
    else {
      auVar87 = auVar86;
      if ((int)uVar40 < 0x26) {
        uStack_108 = uVar40 & 0xfffffff0;
        uVar41 = 0;
      }
      else {
        uVar42 = lVar49 + lVar54 * 0x28 + lVar43 * 4;
        uVar41 = (uint)uVar42 & 0x3f;
        if ((uVar42 & 3) == 0) {
          if (((uVar42 & 0x3f) != 0) && (uVar41 = 0x40 - uVar41 >> 2, (int)uVar40 < (int)uVar41)) {
            uVar41 = uVar40;
          }
        }
        else {
          uVar41 = 0;
        }
        uStack_108 = uVar40 - (uVar40 - uVar41 & 0xf);
        if (uVar41 != 0) {
          auVar84 = vpbroadcastd_avx512f(ZEXT416(param_5._4_4_ * -2 + uStack_120));
          auVar85 = vpaddd_avx512f(auVar84,_DAT_143087ac0);
          in_ZMM1 = vpbroadcastd_avx512f();
          uVar68 = 0;
          auVar84 = _DAT_1430879c0;
          do {
            vpcmpgtd_avx512f(in_ZMM1,auVar84);
            auVar84 = vpaddd_avx512f(auVar84,auVar86);
            auVar88 = vmovdqu32_avx512f(auVar85);
            *(undefined1 (*) [64])(uVar42 + uVar68 * 4) = auVar88;
            auVar85 = vpaddd_avx512f(auVar85,auVar86);
            uVar68 = uVar68 + 0x10;
          } while (uVar68 < (ulonglong)(longlong)(int)uVar41);
          if (uVar41 == uVar40) goto LAB_14013a3d6;
        }
      }
      auVar84 = vpbroadcastd_avx512f();
      in_ZMM1 = vpaddd_avx512f(auVar84,_DAT_143087ac0);
      if ((int)(uVar41 + 0x10) <= (int)uStack_108) {
        uVar68 = (ulonglong)(int)uVar41;
        uVar42 = uVar68;
        do {
          uVar41 = (int)uVar68 + 0x10;
          uVar68 = (ulonglong)uVar41;
          auVar84 = vmovdqu32_avx512f(in_ZMM1);
          *(undefined1 (*) [64])(lVar49 + lVar54 * 0x28 + lVar43 * 4 + uVar42 * 4) = auVar84;
          uVar42 = uVar42 + 0x10;
          in_ZMM1 = vpaddd_avx512f(in_ZMM1,auVar86);
        } while (uVar41 < uStack_108);
      }
    }
    if (uStack_108 + 1 <= uVar40) {
      auVar87 = vpbroadcastd_avx512f();
      vpcmpgtd_avx512f(auVar87,_DAT_1430879c0);
      in_ZMM1 = vpbroadcastd_avx512f();
      auVar86 = vpaddd_avx512f(in_ZMM1,_DAT_143087ac0);
      auVar86 = vmovdqu32_avx512f(auVar86);
      *(undefined1 (*) [64])(lVar49 + lVar54 * 0x28 + (lVar43 + (int)uStack_108) * 4) = auVar86;
    }
  }
LAB_14013a3d6:
  auVar39 = _DAT_143087b00;
  uVar40 = param_5._4_4_ - 1;
  auVar78 = vmovdqu32_avx512vl(_DAT_143087b20);
  auVar79 = vpbroadcastd_avx512vl();
  lVar74 = (longlong)(int)((uint)param_5 & 0xfffffff8);
  param_1 = param_1 + (int)(param_2 * uVar40);
  lVar43 = 0;
  uVar42 = uVar51;
  if (0 < lVar74) {
    auVar80 = vmovdqa32_avx512vl(auVar79);
    in_ZMM16 = ZEXT3264(auVar80);
    do {
      auVar81 = vmovdqa32_avx512vl(auVar80);
      puVar61 = (ulonglong *)(param_1 + lVar43);
      pauVar52 = (undefined1 (*) [32])(param_3 + lVar43 * 4);
      lVar55 = (longlong)(int)(param_5._4_4_ * 8 + -8);
      for (uVar41 = uVar40; -1 < (int)uVar41; uVar41 = uVar41 - 1) {
        auVar82 = vpaddd_avx512vl(auVar81,auVar78);
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *puVar61;
        auVar81 = vpmovzxbd_avx2(auVar77);
        puVar61 = (ulonglong *)((longlong)puVar61 - lVar64);
        auVar81 = vpcmpgtd_avx2(auVar81,(undefined1  [32])0x0);
        auVar81 = vpand_avx2(auVar81,auVar82);
        *(undefined1 (*) [32])(lVar53 + lVar55 * 4) = auVar81;
        lVar55 = lVar55 + -8;
      }
      auVar81 = vmovdqa32_avx512vl(auVar80);
      in_ZMM1 = ZEXT3264(auVar81);
      lVar55 = 0;
      iVar57 = 0;
      do {
        auVar82 = vpaddd_avx512vl(in_ZMM1._0_32_,auVar78);
        iVar57 = iVar57 + 1;
        auVar83 = vpsubd_avx512vl(auVar82,*(undefined1 (*) [32])(lVar53 + lVar55 * 4));
        lVar55 = lVar55 + 8;
        auVar81 = vpcmpgtd_avx2(auVar83,(undefined1  [32])0x0);
        auVar81 = vpandd_avx512vl(auVar83,auVar81);
        auVar81 = vpsubd_avx512vl(auVar82,auVar81);
        in_ZMM1 = ZEXT3264(auVar81);
        auVar82 = vpmulld_avx512vl(auVar81,auVar81);
        auVar81 = vpcmpgtd_avx2(auVar81,auVar79);
        auVar82 = vcvtdq2ps_avx512vl(auVar82);
        auVar87 = ZEXT3264(auVar82);
        auVar81 = vcvtdq2ps_avx(auVar81);
        auVar81 = vblendvps_avx(auVar82,auVar39,auVar81);
        *pauVar52 = auVar81;
        pauVar52 = (undefined1 (*) [32])(*pauVar52 + lVar48 * 4);
      } while (iVar57 < (int)param_5._4_4_);
      lVar43 = lVar43 + 8;
    } while (lVar43 < lVar74);
    uVar42 = (ulonglong)param_5._4_4_;
  }
  uVar68 = uVar42 >> 1;
  uVar41 = (uint)uVar68 & 0x7fffffff;
  if (lVar74 < (longlong)uVar46) {
    lVar53 = param_1 + lVar74;
    uVar71 = (ulonglong)uVar41;
    lVar43 = param_3 + lVar74 * 4;
    lVar55 = lVar54 * 8 + uVar51 * 4;
    lVar66 = lVar49 + lVar54 * 8;
    lVar5 = lVar49 + lVar55;
    lVar6 = lVar49 + lVar54 * 0x28;
    uVar69 = 0;
    do {
      if (-1 < (int)uVar40) {
        uVar58 = uVar40;
        if ((((int)uVar42 < 7) || (-lVar64 < 4)) ||
           ((lVar62 = (lVar49 + -4 + lVar55) - lVar53, lVar62 <= (longlong)(uVar51 * 4) &&
            (lVar70 = (uVar51 - 1) * lVar64 + 1, -lVar70 == lVar62 || -lVar62 < lVar70)))) {
          iVar57 = 1;
          lVar70 = 0;
          lVar62 = 0;
          if ((uVar68 & 0x7fffffff) != 0) {
            uVar75 = 0;
            do {
              uVar65 = uVar75;
              uVar58 = uVar58 + 1 & -(uint)(*(char *)(lVar53 + lVar62 * 2) != '\0');
              uVar75 = uVar65 + 1;
              *(uint *)(lVar70 + -4 + lVar5) = uVar58;
              lVar1 = lVar62 * 2;
              lVar62 = lVar62 + lVar59;
              uVar58 = uVar58 + 1 & -(uint)(*(char *)(-lVar64 + lVar53 + lVar1) != '\0');
              *(uint *)(lVar70 + -8 + lVar5) = uVar58;
              lVar70 = lVar70 + -8;
            } while (uVar75 < uVar71);
            iVar57 = (int)uVar65 + 2 + (int)uVar75;
            uVar42 = uVar42 & 0xffffffff;
          }
          if (iVar57 - 1U < (uint)uVar42) goto LAB_14013a8ca;
        }
        else {
          iVar57 = 1;
          lVar70 = 0;
          lVar62 = 0;
          if ((uVar68 & 0x7fffffff) != 0) {
            uVar75 = 0;
            do {
              uVar65 = uVar75;
              uVar58 = uVar58 + 1 & -(uint)(*(char *)(lVar53 + lVar62 * 2) != '\0');
              uVar75 = uVar65 + 1;
              *(uint *)(lVar70 + -4 + lVar5) = uVar58;
              lVar1 = lVar62 * 2;
              lVar62 = lVar62 + lVar59;
              uVar58 = uVar58 + 1 & -(uint)(*(char *)(-lVar64 + lVar53 + lVar1) != '\0');
              *(uint *)(lVar70 + -8 + lVar5) = uVar58;
              lVar70 = lVar70 + -8;
            } while (uVar75 < uVar71);
            iVar57 = (int)uVar65 + 2 + (int)uVar75;
            uVar42 = uVar42 & 0xffffffff;
          }
          if (iVar57 - 1U < (uint)uVar42) {
LAB_14013a8ca:
            *(uint *)((longlong)iVar57 * -4 + lVar5) =
                 uVar58 + 1 & -(uint)(*(char *)((lVar64 - lVar64 * iVar57) + lVar53) != '\0');
          }
        }
      }
      uVar75 = (ulonglong)uVar40;
      iVar57 = 1;
      lVar62 = 0;
      uVar72 = (uint)uVar42;
      uVar58 = uVar40;
      if ((uVar68 & 0x7fffffff) != 0) {
        uVar65 = 0;
        do {
          uVar63 = uVar65;
          iVar57 = ((int)uVar75 + 1) -
                   *(int *)(lVar6 + 4 +
                           (longlong)
                           (int)(((int)uVar75 + uVar72 * 2) - *(int *)(lVar66 + uVar63 * 8)) * 4);
          *(int *)(lVar66 + uVar63 * 8) = iVar57;
          *(undefined4 *)(lVar43 + lVar62 * 8) = *(undefined4 *)(lVar49 + (longlong)iVar57 * 4);
          uVar58 = (iVar57 + 1) -
                   *(int *)(lVar6 + 4 +
                           (longlong)
                           (int)((iVar57 + uVar72 * 2) - *(int *)(lVar66 + 4 + uVar63 * 8)) * 4);
          *(uint *)(lVar66 + 4 + uVar63 * 8) = uVar58;
          uVar75 = (ulonglong)(int)uVar58;
          uVar65 = uVar63 + 1;
          *(undefined4 *)(lVar48 * 4 + lVar43 + lVar62 * 8) = *(undefined4 *)(lVar49 + uVar75 * 4);
          lVar62 = lVar62 + lVar48;
        } while (uVar65 < uVar71);
        iVar57 = (int)uVar63 + 2 + (int)uVar65;
      }
      if (iVar57 - 1U < uVar72) {
        lVar62 = (longlong)iVar57;
        iVar57 = (uVar58 + 1) -
                 *(int *)(lVar6 + 4 +
                         (longlong)(int)((uVar58 + uVar72 * 2) - *(int *)(lVar66 + -4 + lVar62 * 4))
                         * 4);
        *(int *)(lVar66 + -4 + lVar62 * 4) = iVar57;
        *(undefined4 *)(lVar62 * lVar48 * 4 + lVar48 * -4 + lVar43) =
             *(undefined4 *)(lVar49 + (longlong)iVar57 * 4);
      }
      uVar69 = uVar69 + 1;
      lVar43 = lVar43 + 4;
      lVar53 = lVar53 + 1;
    } while (uVar69 < uVar46 - lVar74);
  }
  iVar38 = _UNK_143087a3c;
  iVar37 = _UNK_143087a38;
  iVar36 = _UNK_143087a34;
  iVar35 = _UNK_143087a30;
  iVar34 = _UNK_143087a2c;
  iVar33 = _UNK_143087a28;
  iVar32 = _UNK_143087a24;
  iVar31 = _UNK_143087a20;
  iVar30 = _UNK_143087a1c;
  iVar29 = _UNK_143087a18;
  iVar28 = _UNK_143087a14;
  iVar27 = _UNK_143087a10;
  iVar50 = _UNK_143087a0c;
  iVar73 = _UNK_143087a08;
  iVar67 = _UNK_143087a04;
  iVar57 = _DAT_143087a00;
  auVar86 = _DAT_143087980;
  lStack_b0 = lVar48 * 4;
  uStack_a8 = (ulonglong)uVar41;
  uVar41 = 0;
  uVar69 = -(param_6 & 0xf) & 0xf;
  puVar44 = (undefined4 *)(param_6 + uVar69);
  uVar58 = (uint)uVar42;
  if ((int)uVar58 < 0x10) {
LAB_14013abeb:
    auVar86 = auVar87;
    iVar38 = _UNK_143087a3c;
    iVar37 = _UNK_143087a38;
    iVar36 = _UNK_143087a34;
    iVar35 = _UNK_143087a30;
    iVar34 = _UNK_143087a2c;
    iVar33 = _UNK_143087a28;
    iVar32 = _UNK_143087a24;
    iVar31 = _UNK_143087a20;
    iVar30 = _UNK_143087a1c;
    iVar29 = _UNK_143087a18;
    iVar28 = _UNK_143087a14;
    iVar27 = _UNK_143087a10;
    iVar50 = _UNK_143087a0c;
    iVar73 = _UNK_143087a08;
    iVar67 = _UNK_143087a04;
    iVar57 = _DAT_143087a00;
    if (uVar41 + 1 <= uVar58) {
      auVar87 = vpbroadcastd_avx512f();
      auVar86 = vpbroadcastd_avx512f();
      uVar71 = vpcmpgtd_avx512f(auVar87,_DAT_1430879c0);
      in_ZMM1 = vpaddd_avx512f(auVar86,_DAT_143087ac0);
      auVar87 = vpmulld_avx512f(in_ZMM1,in_ZMM1);
      auVar87 = vcvtdq2ps_avx512f(auVar87);
      puVar4 = puVar44 + (int)uVar41;
      bVar7 = (bool)((byte)uVar71 & 1);
      bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar71 >> 2) & 1);
      bVar10 = (bool)((byte)(uVar71 >> 3) & 1);
      bVar11 = (bool)((byte)(uVar71 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar71 >> 5) & 1);
      bVar13 = (bool)((byte)(uVar71 >> 6) & 1);
      bVar14 = (bool)((byte)(uVar71 >> 7) & 1);
      bVar15 = (byte)(uVar71 >> 8);
      bVar16 = (bool)(bVar15 & 1);
      bVar17 = (bool)((byte)(uVar71 >> 9) & 1);
      bVar18 = (bool)((byte)(uVar71 >> 10) & 1);
      bVar19 = (bool)((byte)(uVar71 >> 0xb) & 1);
      bVar20 = (bool)((byte)(uVar71 >> 0xc) & 1);
      bVar21 = (bool)((byte)(uVar71 >> 0xd) & 1);
      bVar22 = (bool)((byte)(uVar71 >> 0xe) & 1);
      bVar23 = SUB81(uVar71 >> 0xf,0);
      *puVar4 = (uint)bVar7 * auVar87._0_4_ | (uint)!bVar7 * *puVar4;
      puVar4[1] = (uint)bVar8 * auVar87._4_4_ | (uint)!bVar8 * puVar4[1];
      puVar4[2] = (uint)bVar9 * auVar87._8_4_ | (uint)!bVar9 * puVar4[2];
      puVar4[3] = (uint)bVar10 * auVar87._12_4_ | (uint)!bVar10 * puVar4[3];
      puVar4[4] = (uint)bVar11 * auVar87._16_4_ | (uint)!bVar11 * puVar4[4];
      puVar4[5] = (uint)bVar12 * auVar87._20_4_ | (uint)!bVar12 * puVar4[5];
      puVar4[6] = (uint)bVar13 * auVar87._24_4_ | (uint)!bVar13 * puVar4[6];
      puVar4[7] = (uint)bVar14 * auVar87._28_4_ | (uint)!bVar14 * puVar4[7];
      puVar4[8] = (uint)bVar16 * auVar87._32_4_ | (uint)!bVar16 * puVar4[8];
      puVar4[9] = (uint)bVar17 * auVar87._36_4_ | (uint)!bVar17 * puVar4[9];
      puVar4[10] = (uint)bVar18 * auVar87._40_4_ | (uint)!bVar18 * puVar4[10];
      puVar4[0xb] = (uint)bVar19 * auVar87._44_4_ | (uint)!bVar19 * puVar4[0xb];
      puVar4[0xc] = (uint)bVar20 * auVar87._48_4_ | (uint)!bVar20 * puVar4[0xc];
      puVar4[0xd] = (uint)bVar21 * auVar87._52_4_ | (uint)!bVar21 * puVar4[0xd];
      puVar4[0xe] = (uint)bVar22 * auVar87._56_4_ | (uint)!bVar22 * puVar4[0xe];
      puVar4[0xf] = (uint)bVar23 * auVar87._60_4_ | (uint)!bVar23 * puVar4[0xf];
      auVar87 = *(undefined1 (*) [64])(puVar44 + (longlong)(int)uVar41 + uVar51);
      bVar7 = (bool)((byte)uVar71 & 1);
      auVar89._0_4_ = (uint)bVar7 * iVar57 | (uint)!bVar7 * auVar87._0_4_;
      bVar7 = (bool)((byte)(uVar71 >> 1) & 1);
      auVar89._4_4_ = (uint)bVar7 * iVar67 | (uint)!bVar7 * auVar87._4_4_;
      bVar7 = (bool)((byte)(uVar71 >> 2) & 1);
      auVar89._8_4_ = (uint)bVar7 * iVar73 | (uint)!bVar7 * auVar87._8_4_;
      bVar7 = (bool)((byte)(uVar71 >> 3) & 1);
      auVar89._12_4_ = (uint)bVar7 * iVar50 | (uint)!bVar7 * auVar87._12_4_;
      bVar7 = (bool)((byte)(uVar71 >> 4) & 1);
      auVar89._16_4_ = (uint)bVar7 * iVar27 | (uint)!bVar7 * auVar87._16_4_;
      bVar7 = (bool)((byte)(uVar71 >> 5) & 1);
      auVar89._20_4_ = (uint)bVar7 * iVar28 | (uint)!bVar7 * auVar87._20_4_;
      bVar7 = (bool)((byte)(uVar71 >> 6) & 1);
      auVar89._24_4_ = (uint)bVar7 * iVar29 | (uint)!bVar7 * auVar87._24_4_;
      bVar7 = (bool)((byte)(uVar71 >> 7) & 1);
      auVar89._28_4_ = (uint)bVar7 * iVar30 | (uint)!bVar7 * auVar87._28_4_;
      bVar7 = (bool)(bVar15 & 1);
      auVar89._32_4_ = (uint)bVar7 * iVar31 | (uint)!bVar7 * auVar87._32_4_;
      bVar7 = (bool)((byte)(uVar71 >> 9) & 1);
      auVar89._36_4_ = (uint)bVar7 * iVar32 | (uint)!bVar7 * auVar87._36_4_;
      bVar7 = (bool)((byte)(uVar71 >> 10) & 1);
      auVar89._40_4_ = (uint)bVar7 * iVar33 | (uint)!bVar7 * auVar87._40_4_;
      bVar7 = (bool)((byte)(uVar71 >> 0xb) & 1);
      auVar89._44_4_ = (uint)bVar7 * iVar34 | (uint)!bVar7 * auVar87._44_4_;
      bVar7 = (bool)((byte)(uVar71 >> 0xc) & 1);
      auVar89._48_4_ = (uint)bVar7 * iVar35 | (uint)!bVar7 * auVar87._48_4_;
      bVar7 = (bool)((byte)(uVar71 >> 0xd) & 1);
      auVar89._52_4_ = (uint)bVar7 * iVar36 | (uint)!bVar7 * auVar87._52_4_;
      bVar7 = (bool)((byte)(uVar71 >> 0xe) & 1);
      auVar89._56_4_ = (uint)bVar7 * iVar37 | (uint)!bVar7 * auVar87._56_4_;
      bVar7 = SUB81(uVar71 >> 0xf,0);
      auVar89._60_4_ = (uint)bVar7 * iVar38 | (uint)!bVar7 * auVar87._60_4_;
      *(undefined1 (*) [64])(puVar44 + (longlong)(int)uVar41 + uVar51) = auVar89;
    }
  }
  else {
    if ((int)uVar58 < 0x86) {
      uVar72 = 0;
      uVar41 = uVar58 & 0xfffffff0;
LAB_14013ab7f:
      in_ZMM1 = vpbroadcastd_avx512f();
      auVar84 = vpaddd_avx512f(in_ZMM1,_DAT_143087ac0);
      auVar87 = auVar86;
      if ((int)(uVar72 + 0x10) <= (int)uVar41) {
        uVar71 = (ulonglong)(int)uVar72;
        in_ZMM1._4_4_ = _UNK_143087a04;
        in_ZMM1._0_4_ = _DAT_143087a00;
        in_ZMM1._8_4_ = _UNK_143087a08;
        in_ZMM1._12_4_ = _UNK_143087a0c;
        in_ZMM1._16_4_ = _UNK_143087a10;
        in_ZMM1._20_4_ = _UNK_143087a14;
        in_ZMM1._24_4_ = _UNK_143087a18;
        in_ZMM1._28_4_ = _UNK_143087a1c;
        in_ZMM1._32_4_ = _UNK_143087a20;
        in_ZMM1._36_4_ = _UNK_143087a24;
        in_ZMM1._40_4_ = _UNK_143087a28;
        in_ZMM1._44_4_ = _UNK_143087a2c;
        in_ZMM1._48_4_ = _UNK_143087a30;
        in_ZMM1._52_4_ = _UNK_143087a34;
        in_ZMM1._56_4_ = _UNK_143087a38;
        in_ZMM1._60_4_ = _UNK_143087a3c;
        do {
          auVar85 = vpmulld_avx512f(auVar84,auVar84);
          auVar85 = vcvtdq2ps_avx512f(auVar85);
          auVar84 = vpaddd_avx512f(auVar84,auVar86);
          *(undefined1 (*) [64])(puVar44 + uVar71) = auVar85;
          *(undefined1 (*) [64])(puVar44 + uVar51 + uVar71) = in_ZMM1;
          uVar71 = uVar71 + 0x10;
        } while (uVar71 < (ulonglong)(longlong)(int)uVar41);
      }
      goto LAB_14013abeb;
    }
    puVar3 = puVar44 + uVar51;
    uVar72 = (uint)puVar3 & 0x3f;
    if (((ulonglong)puVar3 & 3) == 0) {
      if ((((ulonglong)puVar3 & 0x3f) != 0) &&
         (uVar72 = 0x40 - uVar72 >> 2, (int)uVar58 < (int)uVar72)) {
        uVar72 = uVar58;
      }
    }
    else {
      uVar72 = 0;
    }
    uVar41 = uVar58 - (uVar58 - uVar72 & 0xf);
    if (uVar72 == 0) goto LAB_14013ab7f;
    in_ZMM1 = vpbroadcastd_avx512f();
    uVar71 = 0;
    auVar87 = _DAT_1430879c0;
    do {
      uVar75 = vpcmpgtd_avx512f(in_ZMM1,auVar87);
      auVar84 = vpmulld_avx512f(auVar87,auVar87);
      auVar84 = vcvtdq2ps_avx512f(auVar84);
      auVar87 = vpaddd_avx512f(auVar87,auVar86);
      puVar4 = puVar44 + uVar71;
      bVar7 = (bool)((byte)uVar75 & 1);
      bVar8 = (bool)((byte)(uVar75 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar75 >> 2) & 1);
      bVar10 = (bool)((byte)(uVar75 >> 3) & 1);
      bVar11 = (bool)((byte)(uVar75 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar75 >> 5) & 1);
      bVar13 = (bool)((byte)(uVar75 >> 6) & 1);
      bVar14 = (bool)((byte)(uVar75 >> 7) & 1);
      bVar15 = (byte)(uVar75 >> 8);
      bVar16 = (bool)(bVar15 & 1);
      bVar17 = (bool)((byte)(uVar75 >> 9) & 1);
      bVar18 = (bool)((byte)(uVar75 >> 10) & 1);
      bVar19 = (bool)((byte)(uVar75 >> 0xb) & 1);
      bVar20 = (bool)((byte)(uVar75 >> 0xc) & 1);
      bVar21 = (bool)((byte)(uVar75 >> 0xd) & 1);
      bVar22 = (bool)((byte)(uVar75 >> 0xe) & 1);
      bVar23 = SUB81(uVar75 >> 0xf,0);
      *puVar4 = (uint)bVar7 * auVar84._0_4_ | (uint)!bVar7 * *puVar4;
      puVar4[1] = (uint)bVar8 * auVar84._4_4_ | (uint)!bVar8 * puVar4[1];
      puVar4[2] = (uint)bVar9 * auVar84._8_4_ | (uint)!bVar9 * puVar4[2];
      puVar4[3] = (uint)bVar10 * auVar84._12_4_ | (uint)!bVar10 * puVar4[3];
      puVar4[4] = (uint)bVar11 * auVar84._16_4_ | (uint)!bVar11 * puVar4[4];
      puVar4[5] = (uint)bVar12 * auVar84._20_4_ | (uint)!bVar12 * puVar4[5];
      puVar4[6] = (uint)bVar13 * auVar84._24_4_ | (uint)!bVar13 * puVar4[6];
      puVar4[7] = (uint)bVar14 * auVar84._28_4_ | (uint)!bVar14 * puVar4[7];
      puVar4[8] = (uint)bVar16 * auVar84._32_4_ | (uint)!bVar16 * puVar4[8];
      puVar4[9] = (uint)bVar17 * auVar84._36_4_ | (uint)!bVar17 * puVar4[9];
      puVar4[10] = (uint)bVar18 * auVar84._40_4_ | (uint)!bVar18 * puVar4[10];
      puVar4[0xb] = (uint)bVar19 * auVar84._44_4_ | (uint)!bVar19 * puVar4[0xb];
      puVar4[0xc] = (uint)bVar20 * auVar84._48_4_ | (uint)!bVar20 * puVar4[0xc];
      puVar4[0xd] = (uint)bVar21 * auVar84._52_4_ | (uint)!bVar21 * puVar4[0xd];
      puVar4[0xe] = (uint)bVar22 * auVar84._56_4_ | (uint)!bVar22 * puVar4[0xe];
      puVar4[0xf] = (uint)bVar23 * auVar84._60_4_ | (uint)!bVar23 * puVar4[0xf];
      auVar84 = *(undefined1 (*) [64])(puVar3 + uVar71);
      bVar7 = (bool)((byte)uVar75 & 1);
      auVar85._0_4_ = (uint)bVar7 * iVar57 | (uint)!bVar7 * auVar84._0_4_;
      bVar7 = (bool)((byte)(uVar75 >> 1) & 1);
      auVar85._4_4_ = (uint)bVar7 * iVar67 | (uint)!bVar7 * auVar84._4_4_;
      bVar7 = (bool)((byte)(uVar75 >> 2) & 1);
      auVar85._8_4_ = (uint)bVar7 * iVar73 | (uint)!bVar7 * auVar84._8_4_;
      bVar7 = (bool)((byte)(uVar75 >> 3) & 1);
      auVar85._12_4_ = (uint)bVar7 * iVar50 | (uint)!bVar7 * auVar84._12_4_;
      bVar7 = (bool)((byte)(uVar75 >> 4) & 1);
      auVar85._16_4_ = (uint)bVar7 * iVar27 | (uint)!bVar7 * auVar84._16_4_;
      bVar7 = (bool)((byte)(uVar75 >> 5) & 1);
      auVar85._20_4_ = (uint)bVar7 * iVar28 | (uint)!bVar7 * auVar84._20_4_;
      bVar7 = (bool)((byte)(uVar75 >> 6) & 1);
      auVar85._24_4_ = (uint)bVar7 * iVar29 | (uint)!bVar7 * auVar84._24_4_;
      bVar7 = (bool)((byte)(uVar75 >> 7) & 1);
      auVar85._28_4_ = (uint)bVar7 * iVar30 | (uint)!bVar7 * auVar84._28_4_;
      bVar7 = (bool)(bVar15 & 1);
      auVar85._32_4_ = (uint)bVar7 * iVar31 | (uint)!bVar7 * auVar84._32_4_;
      bVar7 = (bool)((byte)(uVar75 >> 9) & 1);
      auVar85._36_4_ = (uint)bVar7 * iVar32 | (uint)!bVar7 * auVar84._36_4_;
      bVar7 = (bool)((byte)(uVar75 >> 10) & 1);
      auVar85._40_4_ = (uint)bVar7 * iVar33 | (uint)!bVar7 * auVar84._40_4_;
      bVar7 = (bool)((byte)(uVar75 >> 0xb) & 1);
      auVar85._44_4_ = (uint)bVar7 * iVar34 | (uint)!bVar7 * auVar84._44_4_;
      bVar7 = (bool)((byte)(uVar75 >> 0xc) & 1);
      auVar85._48_4_ = (uint)bVar7 * iVar35 | (uint)!bVar7 * auVar84._48_4_;
      bVar7 = (bool)((byte)(uVar75 >> 0xd) & 1);
      auVar85._52_4_ = (uint)bVar7 * iVar36 | (uint)!bVar7 * auVar84._52_4_;
      bVar7 = (bool)((byte)(uVar75 >> 0xe) & 1);
      auVar85._56_4_ = (uint)bVar7 * iVar37 | (uint)!bVar7 * auVar84._56_4_;
      bVar7 = SUB81(uVar75 >> 0xf,0);
      auVar85._60_4_ = (uint)bVar7 * iVar38 | (uint)!bVar7 * auVar84._60_4_;
      *(undefined1 (*) [64])(puVar3 + uVar71) = auVar85;
      uVar71 = uVar71 + 0x10;
    } while (uVar71 < (ulonglong)(longlong)(int)uVar72);
    if (uVar58 != uVar72) goto LAB_14013ab7f;
  }
  auVar87 = _DAT_143087980;
  uStack_128 = 0;
  uVar41 = uStack_128;
  uStack_128 = 0;
  if ((int)uVar56 < 1) {
    puStack_f8 = puVar44 + lVar54 * 3;
  }
  else {
    if ((int)uVar56 < 0x10) {
      uStack_138._0_4_ = 0;
      puStack_f8 = puVar44 + lVar54 * 3;
    }
    else {
      if ((int)uVar56 < 0x31) {
        uStack_138._0_4_ = uVar56 & 0xfffffff0;
        puStack_f8 = puVar44 + lVar54 * 3;
        uVar71 = 0;
      }
      else {
        puStack_f8 = puVar44 + lVar54 * 3;
        uVar71 = (ulonglong)puStack_f8 & 0x3f;
        if (((ulonglong)puStack_f8 & 3) == 0) {
          if (((int)uVar71 != 0) &&
             (uVar72 = 0x40U - (int)uVar71 >> 2, uVar71 = (ulonglong)uVar72,
             (int)uVar56 < (int)uVar72)) {
            uVar71 = (ulonglong)uVar56;
          }
        }
        else {
          uVar71 = 0;
        }
        uStack_128 = (uint)uVar71;
        uStack_138._0_4_ = uVar56 - (uVar56 - uStack_128 & 0xf);
        if (uStack_128 != 0) {
          uVar75 = 0;
          auVar86 = vpbroadcastd_avx512f();
          in_ZMM1 = vpxord_avx512f(in_ZMM1,in_ZMM1);
          auVar84 = _DAT_1430879c0;
          do {
            vpcmpgtd_avx512f(auVar86,auVar84);
            auVar84 = vpaddd_avx512f(auVar84,auVar87);
            auVar85 = vmovdqu32_avx512f(in_ZMM1);
            *(undefined1 (*) [64])(puStack_f8 + uVar75) = auVar85;
            uVar75 = uVar75 + 0x10;
          } while (uVar75 < (ulonglong)(longlong)(int)uStack_128);
          uVar41 = uStack_128;
          if (uVar56 == uStack_128) goto LAB_14013adcc;
        }
      }
      uStack_128 = uVar41;
      if ((int)uVar71 + 0x10 <= (int)(uint)uStack_138) {
        lVar53 = (longlong)(int)uVar71;
        auVar87 = vpxord_avx512f(auVar86,auVar86);
        do {
          uVar41 = (int)uVar71 + 0x10;
          uVar71 = (ulonglong)uVar41;
          auVar86 = vmovdqu32_avx512f(auVar87);
          *(undefined1 (*) [64])(puStack_f8 + lVar53) = auVar86;
          lVar53 = lVar53 + 0x10;
          uStack_128 = (uint)uStack_138;
        } while (uVar41 < (uint)uStack_138);
      }
    }
    auVar87 = _DAT_143087980;
    uVar41 = 0;
    if ((uint)uStack_138 + 1 <= uVar56) {
      auVar84 = vpbroadcastd_avx512f();
      lVar53 = 0;
      auVar85 = vpxord_avx512f(in_ZMM1,in_ZMM1);
      auVar86 = _DAT_1430879c0;
      do {
        vpcmpgtd_avx512f(auVar84,auVar86);
        uVar41 = uVar41 + 0x10;
        auVar86 = vpaddd_avx512f(auVar86,auVar87);
        auVar88 = vmovdqu32_avx512f(auVar85);
        *(undefined1 (*) [64])(puStack_f8 + (int)(uint)uStack_138 + lVar53) = auVar88;
        lVar53 = lVar53 + 0x10;
      } while (uVar41 < uVar56 - (uint)uStack_138);
      uStack_128 = (uVar56 - (uint)uStack_138) + (uint)uStack_138;
    }
  }
LAB_14013adcc:
  auVar87 = _DAT_143087980;
  uVar56 = 0;
  lVar53 = (longlong)(int)uStack_128;
  if ((int)uStack_128 <= iVar60) {
    uVar41 = (iVar60 - uStack_128) + 1;
    if (0xf < (int)uVar41) {
      if ((int)uVar41 < 0x26) {
        uVar56 = uVar41 & 0xfffffff0;
        uVar72 = 0;
      }
      else {
        puVar3 = puStack_f8 + lVar53;
        uVar72 = (uint)puVar3 & 0x3f;
        if (((ulonglong)puVar3 & 3) == 0) {
          if ((((ulonglong)puVar3 & 0x3f) != 0) &&
             (uVar72 = 0x40 - uVar72 >> 2, (int)uVar41 < (int)uVar72)) {
            uVar72 = uVar41;
          }
        }
        else {
          uVar72 = 0;
        }
        uVar56 = uVar41 - (uVar41 - uVar72 & 0xf);
        if (uVar72 != 0) {
          auVar86 = vpbroadcastd_avx512f(ZEXT416(uVar58 * -2 + uStack_128));
          auVar84 = vpaddd_avx512f(auVar86,_DAT_143087ac0);
          auVar85 = vpbroadcastd_avx512f();
          uVar71 = 0;
          auVar86 = _DAT_1430879c0;
          do {
            vpcmpgtd_avx512f(auVar85,auVar86);
            auVar86 = vpaddd_avx512f(auVar86,auVar87);
            auVar88 = vmovdqu32_avx512f(auVar84);
            *(undefined1 (*) [64])(puVar3 + uVar71) = auVar88;
            auVar84 = vpaddd_avx512f(auVar84,auVar87);
            uVar71 = uVar71 + 0x10;
          } while (uVar71 < (ulonglong)(longlong)(int)uVar72);
          if (uVar72 == uVar41) goto LAB_14013afda;
        }
      }
      auVar86 = vpbroadcastd_avx512f();
      auVar86 = vpaddd_avx512f(auVar86,_DAT_143087ac0);
      if ((int)(uVar72 + 0x10) <= (int)uVar56) {
        uVar75 = (ulonglong)(int)uVar72;
        uVar71 = uVar75;
        do {
          uVar58 = (int)uVar75 + 0x10;
          uVar75 = (ulonglong)uVar58;
          auVar84 = vmovdqu32_avx512f(auVar86);
          *(undefined1 (*) [64])(puStack_f8 + lVar53 + uVar71) = auVar84;
          uVar71 = uVar71 + 0x10;
          auVar86 = vpaddd_avx512f(auVar86,auVar87);
        } while (uVar58 < uVar56);
      }
    }
    if (uVar56 + 1 <= uVar41) {
      auVar87 = vpbroadcastd_avx512f();
      vpcmpgtd_avx512f(auVar87,_DAT_1430879c0);
      auVar87 = vpbroadcastd_avx512f();
      auVar87 = vpaddd_avx512f(auVar87,_DAT_143087ac0);
      auVar87 = vmovdqu32_avx512f(auVar87);
      *(undefined1 (*) [64])(puStack_f8 + lVar53 + (int)uVar56) = auVar87;
    }
  }
LAB_14013afda:
  lVar53 = lVar54 * 8 + uVar51 * 4;
  uVar71 = 0;
  lVar49 = param_3;
  do {
    if (-1 < (int)uVar40) {
      uVar56 = uVar40;
      if ((((int)uVar42 < 7) || (-lVar64 < 4)) ||
         ((lVar43 = (longlong)puVar44 + ((lVar53 + -4) - param_1), lVar43 <= (longlong)(uVar51 * 4)
          && (lVar74 = (uVar51 - 1) * lVar64 + 1, -lVar74 == lVar43 || -lVar43 < lVar74)))) {
        iVar60 = 1;
        lVar74 = 0;
        lVar43 = 0;
        if ((uVar68 & 0x7fffffff) != 0) {
          uVar75 = 0;
          do {
            uVar65 = uVar75;
            uVar56 = uVar56 + 1 & -(uint)(*(char *)(param_1 + lVar43 * 2) != '\0');
            uVar75 = uVar65 + 1;
            *(uint *)((longlong)puVar44 + lVar74 + -4 + lVar53) = uVar56;
            lVar55 = lVar43 * 2;
            lVar43 = lVar43 + lVar59;
            uVar56 = uVar56 + 1 & -(uint)(*(char *)(-lVar64 + param_1 + lVar55) != '\0');
            *(uint *)((longlong)puVar44 + lVar74 + -8 + lVar53) = uVar56;
            lVar74 = lVar74 + -8;
          } while (uVar75 < uStack_a8);
          iVar60 = (int)uVar65 + 2 + (int)uVar75;
          uVar42 = uVar42 & 0xffffffff;
        }
        if (iVar60 - 1U < (uint)uVar42) goto LAB_14013b26b;
      }
      else {
        iVar60 = 1;
        lVar74 = 0;
        lVar43 = 0;
        if ((uVar68 & 0x7fffffff) != 0) {
          uVar75 = 0;
          do {
            uVar65 = uVar75;
            uVar56 = uVar56 + 1 & -(uint)(*(char *)(param_1 + lVar43 * 2) != '\0');
            uVar75 = uVar65 + 1;
            *(uint *)((longlong)puVar44 + lVar74 + -4 + lVar53) = uVar56;
            lVar55 = lVar43 * 2;
            lVar43 = lVar43 + lVar59;
            uVar56 = uVar56 + 1 & -(uint)(*(char *)(-lVar64 + param_1 + lVar55) != '\0');
            *(uint *)((longlong)puVar44 + lVar74 + -8 + lVar53) = uVar56;
            lVar74 = lVar74 + -8;
          } while (uVar75 < uStack_a8);
          iVar60 = (int)uVar65 + 2 + (int)uVar75;
          uVar42 = uVar42 & 0xffffffff;
        }
        if (iVar60 - 1U < (uint)uVar42) {
LAB_14013b26b:
          puVar44[uVar51 + (lVar54 * 2 - (longlong)iVar60)] =
               uVar56 + 1 & -(uint)(*(char *)((lVar64 - lVar64 * iVar60) + param_1) != '\0');
        }
      }
    }
    uVar75 = (ulonglong)uVar40;
    iVar60 = 1;
    lVar43 = 0;
    uVar41 = (uint)uVar42;
    uVar56 = uVar40;
    if ((uVar68 & 0x7fffffff) != 0) {
      uVar65 = 0;
      do {
        uVar63 = uVar65;
        iVar60 = ((int)uVar75 + 1) -
                 puStack_f8
                 [(longlong)(int)(((int)uVar75 + uVar41 * 2) - puVar44[lVar54 * 2 + uVar63 * 2]) + 1
                 ];
        puVar44[lVar54 * 2 + uVar63 * 2] = iVar60;
        *(undefined4 *)(lVar49 + lVar43 * 8) = puVar44[iVar60];
        uVar56 = (iVar60 + 1) -
                 puStack_f8
                 [(longlong)(int)((iVar60 + uVar41 * 2) - puVar44[lVar54 * 2 + uVar63 * 2 + 1]) + 1]
        ;
        puVar44[lVar54 * 2 + uVar63 * 2 + 1] = uVar56;
        uVar75 = (ulonglong)(int)uVar56;
        uVar65 = uVar63 + 1;
        *(undefined4 *)(lStack_b0 + lVar49 + lVar43 * 8) = puVar44[uVar75];
        lVar43 = lVar43 + lVar48;
      } while (uVar65 < uStack_a8);
      iVar60 = (int)uVar63 + 2 + (int)uVar65;
    }
    if (iVar60 - 1U < uVar41) {
      lVar43 = (longlong)iVar60;
      iVar60 = (uVar56 + 1) -
               puStack_f8
               [(longlong)(int)((uVar56 + uVar41 * 2) - puVar44[lVar54 * 2 + lVar43 + -1]) + 1];
      puVar44[lVar54 * 2 + lVar43 + -1] = iVar60;
      *(undefined4 *)(lVar43 * lVar48 * 4 + lVar48 * -4 + lVar49) = puVar44[iVar60];
    }
    uVar71 = uVar71 + 1;
    lVar49 = lVar49 + 4;
    param_1 = param_1 + 1;
  } while (uVar71 < uVar46);
  uVar56 = 0;
  uVar40 = 0;
  *puVar44 = 0;
  puVar44[lVar45] = 0;
  fVar93 = _DAT_143087b48;
  auVar86 = _DAT_143087a40;
  auVar87 = _DAT_143087980;
  if (1 < (int)(uint)param_5) {
    puVar3 = puVar44 + lVar45;
    uVar69 = param_6 + 4 + uVar69;
    lVar54 = uVar46 * 4 + -4;
    if (((longlong)(uVar69 - (longlong)(puVar3 + 1)) < lVar54) &&
       ((longlong)-(uVar69 - (longlong)(puVar3 + 1)) < lVar54)) {
      iVar60 = 1;
      lVar54 = 0;
      uVar40 = (uint)param_5 - 1 >> 1;
      if (uVar40 != 0) {
        do {
          uVar41 = uVar56;
          iVar60 = uVar41 * 2 + 1;
          iVar57 = uVar41 * 2 + 2;
          auVar77 = vxorps_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
          auVar77 = vcvtsi2ss_avx512f(auVar77,iVar57 * iVar57);
          in_ZMM16 = ZEXT1664(auVar77);
          uVar56 = uVar41 + 1;
          puVar3[lVar54 * 2 + 1] = fVar93 / (float)iVar60;
          puVar44[lVar54 * 2 + 1] = (float)(iVar60 * iVar60);
          puVar3[lVar54 * 2 + 2] = fVar93 / (float)iVar57;
          puVar44[lVar54 * 2 + 2] = auVar77._0_4_;
          lVar54 = lVar54 + 1;
        } while (uVar56 < uVar40);
        iVar60 = uVar41 + 2 + uVar56;
      }
      if (iVar60 - 1U < (uint)param_5 - 1) {
        puVar3[iVar60] = _DAT_143087b48 / (float)iVar60;
        puVar44[iVar60] = (float)(iVar60 * iVar60);
      }
    }
    else {
      uVar41 = (uint)param_5 - 1;
      if (0xf < (int)uVar41) {
        if ((int)uVar41 < 0x1e6) {
          uVar40 = uVar41 & 0xfffffff0;
        }
        else {
          uVar56 = (uint)uVar69 & 0x3f;
          if ((uVar69 & 3) == 0) {
            if (((uVar69 & 0x3f) != 0) && (uVar56 = 0x40 - uVar56 >> 2, (int)uVar41 < (int)uVar56))
            {
              uVar56 = uVar41;
            }
          }
          else {
            uVar56 = 0;
          }
          uVar40 = uVar41 - (uVar41 - uVar56 & 0xf);
          if (uVar56 != 0) {
            uVar42 = 0;
            auVar88 = vpbroadcastd_avx512f();
            auVar84 = _DAT_143087a80;
            auVar85 = _DAT_1430879c0;
            do {
              auVar89 = vcvtdq2ps_avx512f(auVar84);
              uVar68 = vpcmpgtd_avx512f(auVar88,auVar85);
              auVar90 = vrcp14ps_avx512f(auVar89);
              auVar85 = vpaddd_avx512f(auVar85,auVar87);
              uVar76 = vfpclassps_avx512dq(auVar90,0xffffffffffffffff,0x1e);
              auVar26._4_4_ = _DAT_143087b4c;
              auVar26._0_4_ = _DAT_143087b4c;
              auVar26._8_4_ = _DAT_143087b4c;
              auVar26._12_4_ = _DAT_143087b4c;
              auVar26._16_4_ = _DAT_143087b4c;
              auVar26._20_4_ = _DAT_143087b4c;
              auVar26._24_4_ = _DAT_143087b4c;
              auVar26._28_4_ = _DAT_143087b4c;
              auVar26._32_4_ = _DAT_143087b4c;
              auVar26._36_4_ = _DAT_143087b4c;
              auVar26._40_4_ = _DAT_143087b4c;
              auVar26._44_4_ = _DAT_143087b4c;
              auVar26._48_4_ = _DAT_143087b4c;
              auVar26._52_4_ = _DAT_143087b4c;
              auVar26._56_4_ = _DAT_143087b4c;
              auVar26._60_4_ = _DAT_143087b4c;
              auVar89 = vfnmadd213ps_avx512f(auVar89,auVar90,auVar26);
              uVar25 = ~(ushort)uVar76;
              auVar89 = vfmadd213ps_avx512f(auVar90,auVar89,auVar90);
              bVar7 = (bool)((byte)uVar25 & 1);
              auVar91._0_4_ = (uint)bVar7 * auVar89._0_4_ | (uint)!bVar7 * auVar90._0_4_;
              bVar7 = (bool)((byte)(uVar25 >> 1) & 1);
              auVar91._4_4_ = (uint)bVar7 * auVar89._4_4_ | (uint)!bVar7 * auVar90._4_4_;
              bVar7 = (bool)((byte)(uVar25 >> 2) & 1);
              auVar91._8_4_ = (uint)bVar7 * auVar89._8_4_ | (uint)!bVar7 * auVar90._8_4_;
              bVar7 = (bool)((byte)(uVar25 >> 3) & 1);
              auVar91._12_4_ = (uint)bVar7 * auVar89._12_4_ | (uint)!bVar7 * auVar90._12_4_;
              bVar7 = (bool)((byte)(uVar25 >> 4) & 1);
              auVar91._16_4_ = (uint)bVar7 * auVar89._16_4_ | (uint)!bVar7 * auVar90._16_4_;
              bVar7 = (bool)((byte)(uVar25 >> 5) & 1);
              auVar91._20_4_ = (uint)bVar7 * auVar89._20_4_ | (uint)!bVar7 * auVar90._20_4_;
              bVar7 = (bool)((byte)(uVar25 >> 6) & 1);
              auVar91._24_4_ = (uint)bVar7 * auVar89._24_4_ | (uint)!bVar7 * auVar90._24_4_;
              bVar7 = (bool)((byte)(uVar25 >> 7) & 1);
              auVar91._28_4_ = (uint)bVar7 * auVar89._28_4_ | (uint)!bVar7 * auVar90._28_4_;
              bVar15 = (byte)(uVar25 >> 8);
              auVar91._32_4_ =
                   (uint)(bVar15 & 1) * auVar89._32_4_ | (uint)!(bool)(bVar15 & 1) * auVar90._32_4_;
              bVar7 = (bool)(bVar15 >> 1 & 1);
              auVar91._36_4_ = (uint)bVar7 * auVar89._36_4_ | (uint)!bVar7 * auVar90._36_4_;
              bVar7 = (bool)(bVar15 >> 2 & 1);
              auVar91._40_4_ = (uint)bVar7 * auVar89._40_4_ | (uint)!bVar7 * auVar90._40_4_;
              bVar7 = (bool)(bVar15 >> 3 & 1);
              auVar91._44_4_ = (uint)bVar7 * auVar89._44_4_ | (uint)!bVar7 * auVar90._44_4_;
              bVar7 = (bool)(bVar15 >> 4 & 1);
              auVar91._48_4_ = (uint)bVar7 * auVar89._48_4_ | (uint)!bVar7 * auVar90._48_4_;
              bVar7 = (bool)(bVar15 >> 5 & 1);
              auVar91._52_4_ = (uint)bVar7 * auVar89._52_4_ | (uint)!bVar7 * auVar90._52_4_;
              bVar7 = (bool)(bVar15 >> 6 & 1);
              auVar91._56_4_ = (uint)bVar7 * auVar89._56_4_ | (uint)!bVar7 * auVar90._56_4_;
              auVar91._60_4_ =
                   (uint)(bVar15 >> 7) * auVar89._60_4_ |
                   (uint)!(bool)(bVar15 >> 7) * auVar90._60_4_;
              auVar89 = vmulps_avx512f(auVar86,auVar91);
              puVar4 = puVar3 + uVar42 + 1;
              bVar7 = (bool)((byte)uVar68 & 1);
              bVar8 = (bool)((byte)(uVar68 >> 1) & 1);
              bVar9 = (bool)((byte)(uVar68 >> 2) & 1);
              bVar10 = (bool)((byte)(uVar68 >> 3) & 1);
              bVar11 = (bool)((byte)(uVar68 >> 4) & 1);
              bVar12 = (bool)((byte)(uVar68 >> 5) & 1);
              bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
              bVar14 = (bool)((byte)(uVar68 >> 7) & 1);
              bVar15 = (byte)(uVar68 >> 8);
              bVar16 = (bool)(bVar15 & 1);
              bVar17 = (bool)((byte)(uVar68 >> 9) & 1);
              bVar18 = (bool)((byte)(uVar68 >> 10) & 1);
              bVar19 = (bool)((byte)(uVar68 >> 0xb) & 1);
              bVar20 = (bool)((byte)(uVar68 >> 0xc) & 1);
              bVar21 = (bool)((byte)(uVar68 >> 0xd) & 1);
              bVar22 = (bool)((byte)(uVar68 >> 0xe) & 1);
              bVar23 = SUB81(uVar68 >> 0xf,0);
              *puVar4 = (uint)bVar7 * auVar89._0_4_ | (uint)!bVar7 * *puVar4;
              puVar4[1] = (uint)bVar8 * auVar89._4_4_ | (uint)!bVar8 * puVar4[1];
              puVar4[2] = (uint)bVar9 * auVar89._8_4_ | (uint)!bVar9 * puVar4[2];
              puVar4[3] = (uint)bVar10 * auVar89._12_4_ | (uint)!bVar10 * puVar4[3];
              puVar4[4] = (uint)bVar11 * auVar89._16_4_ | (uint)!bVar11 * puVar4[4];
              puVar4[5] = (uint)bVar12 * auVar89._20_4_ | (uint)!bVar12 * puVar4[5];
              puVar4[6] = (uint)bVar13 * auVar89._24_4_ | (uint)!bVar13 * puVar4[6];
              puVar4[7] = (uint)bVar14 * auVar89._28_4_ | (uint)!bVar14 * puVar4[7];
              puVar4[8] = (uint)bVar16 * auVar89._32_4_ | (uint)!bVar16 * puVar4[8];
              puVar4[9] = (uint)bVar17 * auVar89._36_4_ | (uint)!bVar17 * puVar4[9];
              puVar4[10] = (uint)bVar18 * auVar89._40_4_ | (uint)!bVar18 * puVar4[10];
              puVar4[0xb] = (uint)bVar19 * auVar89._44_4_ | (uint)!bVar19 * puVar4[0xb];
              puVar4[0xc] = (uint)bVar20 * auVar89._48_4_ | (uint)!bVar20 * puVar4[0xc];
              puVar4[0xd] = (uint)bVar21 * auVar89._52_4_ | (uint)!bVar21 * puVar4[0xd];
              puVar4[0xe] = (uint)bVar22 * auVar89._56_4_ | (uint)!bVar22 * puVar4[0xe];
              puVar4[0xf] = (uint)bVar23 * auVar89._60_4_ | (uint)!bVar23 * puVar4[0xf];
              auVar89 = vpmulld_avx512f(auVar84,auVar84);
              auVar89 = vcvtdq2ps_avx512f(auVar89);
              auVar84 = vpaddd_avx512f(auVar84,auVar87);
              puVar4 = puVar44 + uVar42 + 1;
              bVar7 = (bool)((byte)uVar68 & 1);
              bVar8 = (bool)((byte)(uVar68 >> 1) & 1);
              bVar9 = (bool)((byte)(uVar68 >> 2) & 1);
              bVar10 = (bool)((byte)(uVar68 >> 3) & 1);
              bVar11 = (bool)((byte)(uVar68 >> 4) & 1);
              bVar12 = (bool)((byte)(uVar68 >> 5) & 1);
              bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
              bVar14 = (bool)((byte)(uVar68 >> 7) & 1);
              bVar16 = (bool)(bVar15 & 1);
              bVar17 = (bool)((byte)(uVar68 >> 9) & 1);
              bVar18 = (bool)((byte)(uVar68 >> 10) & 1);
              bVar19 = (bool)((byte)(uVar68 >> 0xb) & 1);
              bVar20 = (bool)((byte)(uVar68 >> 0xc) & 1);
              bVar21 = (bool)((byte)(uVar68 >> 0xd) & 1);
              bVar22 = (bool)((byte)(uVar68 >> 0xe) & 1);
              bVar23 = SUB81(uVar68 >> 0xf,0);
              *puVar4 = (uint)bVar7 * auVar89._0_4_ | (uint)!bVar7 * *puVar4;
              puVar4[1] = (uint)bVar8 * auVar89._4_4_ | (uint)!bVar8 * puVar4[1];
              puVar4[2] = (uint)bVar9 * auVar89._8_4_ | (uint)!bVar9 * puVar4[2];
              puVar4[3] = (uint)bVar10 * auVar89._12_4_ | (uint)!bVar10 * puVar4[3];
              puVar4[4] = (uint)bVar11 * auVar89._16_4_ | (uint)!bVar11 * puVar4[4];
              puVar4[5] = (uint)bVar12 * auVar89._20_4_ | (uint)!bVar12 * puVar4[5];
              puVar4[6] = (uint)bVar13 * auVar89._24_4_ | (uint)!bVar13 * puVar4[6];
              puVar4[7] = (uint)bVar14 * auVar89._28_4_ | (uint)!bVar14 * puVar4[7];
              puVar4[8] = (uint)bVar16 * auVar89._32_4_ | (uint)!bVar16 * puVar4[8];
              puVar4[9] = (uint)bVar17 * auVar89._36_4_ | (uint)!bVar17 * puVar4[9];
              puVar4[10] = (uint)bVar18 * auVar89._40_4_ | (uint)!bVar18 * puVar4[10];
              puVar4[0xb] = (uint)bVar19 * auVar89._44_4_ | (uint)!bVar19 * puVar4[0xb];
              puVar4[0xc] = (uint)bVar20 * auVar89._48_4_ | (uint)!bVar20 * puVar4[0xc];
              puVar4[0xd] = (uint)bVar21 * auVar89._52_4_ | (uint)!bVar21 * puVar4[0xd];
              puVar4[0xe] = (uint)bVar22 * auVar89._56_4_ | (uint)!bVar22 * puVar4[0xe];
              puVar4[0xf] = (uint)bVar23 * auVar89._60_4_ | (uint)!bVar23 * puVar4[0xf];
              uVar42 = uVar42 + 0x10;
            } while (uVar42 < (ulonglong)(longlong)(int)uVar56);
            if (uVar41 == uVar56) goto LAB_14013b775;
          }
        }
        auVar86 = _DAT_143087a40;
        auVar84 = vpbroadcastd_avx512f();
        auVar84 = vpaddd_avx512f(auVar84,_DAT_143087ac0);
        if ((int)(uVar56 + 0x10) <= (int)uVar40) {
          uVar42 = (ulonglong)(int)uVar56;
          do {
            auVar85 = vcvtdq2ps_avx512f(auVar84);
            auVar88 = vrcp14ps_avx512f(auVar85);
            uVar76 = vfpclassps_avx512dq(auVar88,0xffffffffffffffff,0x1e);
            auVar90._4_4_ = _DAT_143087b4c;
            auVar90._0_4_ = _DAT_143087b4c;
            auVar90._8_4_ = _DAT_143087b4c;
            auVar90._12_4_ = _DAT_143087b4c;
            auVar90._16_4_ = _DAT_143087b4c;
            auVar90._20_4_ = _DAT_143087b4c;
            auVar90._24_4_ = _DAT_143087b4c;
            auVar90._28_4_ = _DAT_143087b4c;
            auVar90._32_4_ = _DAT_143087b4c;
            auVar90._36_4_ = _DAT_143087b4c;
            auVar90._40_4_ = _DAT_143087b4c;
            auVar90._44_4_ = _DAT_143087b4c;
            auVar90._48_4_ = _DAT_143087b4c;
            auVar90._52_4_ = _DAT_143087b4c;
            auVar90._56_4_ = _DAT_143087b4c;
            auVar90._60_4_ = _DAT_143087b4c;
            auVar85 = vfnmadd213ps_avx512f(auVar85,auVar88,auVar90);
            uVar25 = ~(ushort)uVar76;
            auVar85 = vfmadd213ps_avx512f(auVar88,auVar85,auVar88);
            bVar7 = (bool)((byte)uVar25 & 1);
            auVar92._0_4_ = (uint)bVar7 * auVar85._0_4_ | (uint)!bVar7 * auVar88._0_4_;
            bVar7 = (bool)((byte)(uVar25 >> 1) & 1);
            auVar92._4_4_ = (uint)bVar7 * auVar85._4_4_ | (uint)!bVar7 * auVar88._4_4_;
            bVar7 = (bool)((byte)(uVar25 >> 2) & 1);
            auVar92._8_4_ = (uint)bVar7 * auVar85._8_4_ | (uint)!bVar7 * auVar88._8_4_;
            bVar7 = (bool)((byte)(uVar25 >> 3) & 1);
            auVar92._12_4_ = (uint)bVar7 * auVar85._12_4_ | (uint)!bVar7 * auVar88._12_4_;
            bVar7 = (bool)((byte)(uVar25 >> 4) & 1);
            auVar92._16_4_ = (uint)bVar7 * auVar85._16_4_ | (uint)!bVar7 * auVar88._16_4_;
            bVar7 = (bool)((byte)(uVar25 >> 5) & 1);
            auVar92._20_4_ = (uint)bVar7 * auVar85._20_4_ | (uint)!bVar7 * auVar88._20_4_;
            bVar7 = (bool)((byte)(uVar25 >> 6) & 1);
            auVar92._24_4_ = (uint)bVar7 * auVar85._24_4_ | (uint)!bVar7 * auVar88._24_4_;
            bVar7 = (bool)((byte)(uVar25 >> 7) & 1);
            auVar92._28_4_ = (uint)bVar7 * auVar85._28_4_ | (uint)!bVar7 * auVar88._28_4_;
            bVar15 = (byte)(uVar25 >> 8);
            auVar92._32_4_ =
                 (uint)(bVar15 & 1) * auVar85._32_4_ | (uint)!(bool)(bVar15 & 1) * auVar88._32_4_;
            bVar7 = (bool)(bVar15 >> 1 & 1);
            auVar92._36_4_ = (uint)bVar7 * auVar85._36_4_ | (uint)!bVar7 * auVar88._36_4_;
            bVar7 = (bool)(bVar15 >> 2 & 1);
            auVar92._40_4_ = (uint)bVar7 * auVar85._40_4_ | (uint)!bVar7 * auVar88._40_4_;
            bVar7 = (bool)(bVar15 >> 3 & 1);
            auVar92._44_4_ = (uint)bVar7 * auVar85._44_4_ | (uint)!bVar7 * auVar88._44_4_;
            bVar7 = (bool)(bVar15 >> 4 & 1);
            auVar92._48_4_ = (uint)bVar7 * auVar85._48_4_ | (uint)!bVar7 * auVar88._48_4_;
            bVar7 = (bool)(bVar15 >> 5 & 1);
            auVar92._52_4_ = (uint)bVar7 * auVar85._52_4_ | (uint)!bVar7 * auVar88._52_4_;
            bVar7 = (bool)(bVar15 >> 6 & 1);
            auVar92._56_4_ = (uint)bVar7 * auVar85._56_4_ | (uint)!bVar7 * auVar88._56_4_;
            auVar92._60_4_ =
                 (uint)(bVar15 >> 7) * auVar85._60_4_ | (uint)!(bool)(bVar15 >> 7) * auVar88._60_4_;
            auVar85 = vmulps_avx512f(auVar86,auVar92);
            *(undefined1 (*) [64])(puVar3 + uVar42 + 1) = auVar85;
            auVar85 = vpmulld_avx512f(auVar84,auVar84);
            auVar85 = vcvtdq2ps_avx512f(auVar85);
            auVar84 = vpaddd_avx512f(auVar84,auVar87);
            *(undefined1 (*) [64])(puVar44 + uVar42 + 1) = auVar85;
            uVar42 = uVar42 + 0x10;
          } while (uVar42 < (ulonglong)(longlong)(int)uVar40);
        }
      }
      if (uVar40 + 1 <= uVar41) {
        auVar87 = vpbroadcastd_avx512f();
        auVar86 = vpbroadcastd_avx512f();
        auVar84 = vpaddd_avx512f(auVar87,_DAT_143087ac0);
        uVar42 = vpcmpgtd_avx512f(auVar86,_DAT_1430879c0);
        auVar86 = vcvtdq2ps_avx512f(auVar84);
        auVar85 = vrcp14ps_avx512f(auVar86);
        uVar76 = vfpclassps_avx512dq(auVar85,0xffffffffffffffff,0x1e);
        auVar87._4_4_ = _DAT_143087b4c;
        auVar87._0_4_ = _DAT_143087b4c;
        auVar87._8_4_ = _DAT_143087b4c;
        auVar87._12_4_ = _DAT_143087b4c;
        auVar87._16_4_ = _DAT_143087b4c;
        auVar87._20_4_ = _DAT_143087b4c;
        auVar87._24_4_ = _DAT_143087b4c;
        auVar87._28_4_ = _DAT_143087b4c;
        auVar87._32_4_ = _DAT_143087b4c;
        auVar87._36_4_ = _DAT_143087b4c;
        auVar87._40_4_ = _DAT_143087b4c;
        auVar87._44_4_ = _DAT_143087b4c;
        auVar87._48_4_ = _DAT_143087b4c;
        auVar87._52_4_ = _DAT_143087b4c;
        auVar87._56_4_ = _DAT_143087b4c;
        auVar87._60_4_ = _DAT_143087b4c;
        auVar87 = vfnmadd213ps_avx512f(auVar86,auVar85,auVar87);
        uVar25 = ~(ushort)uVar76;
        auVar87 = vfmadd213ps_avx512f(auVar85,auVar87,auVar85);
        bVar7 = (bool)((byte)uVar25 & 1);
        auVar86._0_4_ = (uint)bVar7 * auVar87._0_4_ | (uint)!bVar7 * auVar85._0_4_;
        bVar7 = (bool)((byte)(uVar25 >> 1) & 1);
        auVar86._4_4_ = (uint)bVar7 * auVar87._4_4_ | (uint)!bVar7 * auVar85._4_4_;
        bVar7 = (bool)((byte)(uVar25 >> 2) & 1);
        auVar86._8_4_ = (uint)bVar7 * auVar87._8_4_ | (uint)!bVar7 * auVar85._8_4_;
        bVar7 = (bool)((byte)(uVar25 >> 3) & 1);
        auVar86._12_4_ = (uint)bVar7 * auVar87._12_4_ | (uint)!bVar7 * auVar85._12_4_;
        bVar7 = (bool)((byte)(uVar25 >> 4) & 1);
        auVar86._16_4_ = (uint)bVar7 * auVar87._16_4_ | (uint)!bVar7 * auVar85._16_4_;
        bVar7 = (bool)((byte)(uVar25 >> 5) & 1);
        auVar86._20_4_ = (uint)bVar7 * auVar87._20_4_ | (uint)!bVar7 * auVar85._20_4_;
        bVar7 = (bool)((byte)(uVar25 >> 6) & 1);
        auVar86._24_4_ = (uint)bVar7 * auVar87._24_4_ | (uint)!bVar7 * auVar85._24_4_;
        bVar7 = (bool)((byte)(uVar25 >> 7) & 1);
        auVar86._28_4_ = (uint)bVar7 * auVar87._28_4_ | (uint)!bVar7 * auVar85._28_4_;
        bVar15 = (byte)(uVar25 >> 8);
        auVar86._32_4_ =
             (uint)(bVar15 & 1) * auVar87._32_4_ | (uint)!(bool)(bVar15 & 1) * auVar85._32_4_;
        bVar7 = (bool)(bVar15 >> 1 & 1);
        auVar86._36_4_ = (uint)bVar7 * auVar87._36_4_ | (uint)!bVar7 * auVar85._36_4_;
        bVar7 = (bool)(bVar15 >> 2 & 1);
        auVar86._40_4_ = (uint)bVar7 * auVar87._40_4_ | (uint)!bVar7 * auVar85._40_4_;
        bVar7 = (bool)(bVar15 >> 3 & 1);
        auVar86._44_4_ = (uint)bVar7 * auVar87._44_4_ | (uint)!bVar7 * auVar85._44_4_;
        bVar7 = (bool)(bVar15 >> 4 & 1);
        auVar86._48_4_ = (uint)bVar7 * auVar87._48_4_ | (uint)!bVar7 * auVar85._48_4_;
        bVar7 = (bool)(bVar15 >> 5 & 1);
        auVar86._52_4_ = (uint)bVar7 * auVar87._52_4_ | (uint)!bVar7 * auVar85._52_4_;
        bVar7 = (bool)(bVar15 >> 6 & 1);
        auVar86._56_4_ = (uint)bVar7 * auVar87._56_4_ | (uint)!bVar7 * auVar85._56_4_;
        auVar86._60_4_ =
             (uint)(bVar15 >> 7) * auVar87._60_4_ | (uint)!(bool)(bVar15 >> 7) * auVar85._60_4_;
        auVar87 = vmulps_avx512f(auVar86,_DAT_143087a40);
        auVar86 = vpmulld_avx512f(auVar84,auVar84);
        auVar86 = vcvtdq2ps_avx512f(auVar86);
        puVar4 = puVar3 + (longlong)(int)uVar40 + 1;
        bVar7 = (bool)((byte)uVar42 & 1);
        bVar8 = (bool)((byte)(uVar42 >> 1) & 1);
        bVar9 = (bool)((byte)(uVar42 >> 2) & 1);
        bVar10 = (bool)((byte)(uVar42 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar42 >> 4) & 1);
        bVar12 = (bool)((byte)(uVar42 >> 5) & 1);
        bVar13 = (bool)((byte)(uVar42 >> 6) & 1);
        bVar14 = (bool)((byte)(uVar42 >> 7) & 1);
        bVar15 = (byte)(uVar42 >> 8);
        bVar16 = (bool)(bVar15 & 1);
        bVar17 = (bool)((byte)(uVar42 >> 9) & 1);
        bVar18 = (bool)((byte)(uVar42 >> 10) & 1);
        bVar19 = (bool)((byte)(uVar42 >> 0xb) & 1);
        bVar20 = (bool)((byte)(uVar42 >> 0xc) & 1);
        bVar21 = (bool)((byte)(uVar42 >> 0xd) & 1);
        bVar22 = (bool)((byte)(uVar42 >> 0xe) & 1);
        bVar23 = SUB81(uVar42 >> 0xf,0);
        *puVar4 = (uint)bVar7 * auVar87._0_4_ | (uint)!bVar7 * *puVar4;
        puVar4[1] = (uint)bVar8 * auVar87._4_4_ | (uint)!bVar8 * puVar4[1];
        puVar4[2] = (uint)bVar9 * auVar87._8_4_ | (uint)!bVar9 * puVar4[2];
        puVar4[3] = (uint)bVar10 * auVar87._12_4_ | (uint)!bVar10 * puVar4[3];
        puVar4[4] = (uint)bVar11 * auVar87._16_4_ | (uint)!bVar11 * puVar4[4];
        puVar4[5] = (uint)bVar12 * auVar87._20_4_ | (uint)!bVar12 * puVar4[5];
        puVar4[6] = (uint)bVar13 * auVar87._24_4_ | (uint)!bVar13 * puVar4[6];
        puVar4[7] = (uint)bVar14 * auVar87._28_4_ | (uint)!bVar14 * puVar4[7];
        puVar4[8] = (uint)bVar16 * auVar87._32_4_ | (uint)!bVar16 * puVar4[8];
        puVar4[9] = (uint)bVar17 * auVar87._36_4_ | (uint)!bVar17 * puVar4[9];
        puVar4[10] = (uint)bVar18 * auVar87._40_4_ | (uint)!bVar18 * puVar4[10];
        puVar4[0xb] = (uint)bVar19 * auVar87._44_4_ | (uint)!bVar19 * puVar4[0xb];
        puVar4[0xc] = (uint)bVar20 * auVar87._48_4_ | (uint)!bVar20 * puVar4[0xc];
        puVar4[0xd] = (uint)bVar21 * auVar87._52_4_ | (uint)!bVar21 * puVar4[0xd];
        puVar4[0xe] = (uint)bVar22 * auVar87._56_4_ | (uint)!bVar22 * puVar4[0xe];
        puVar4[0xf] = (uint)bVar23 * auVar87._60_4_ | (uint)!bVar23 * puVar4[0xf];
        puVar4 = puVar44 + (longlong)(int)uVar40 + 1;
        bVar7 = (bool)((byte)uVar42 & 1);
        bVar8 = (bool)((byte)(uVar42 >> 1) & 1);
        bVar9 = (bool)((byte)(uVar42 >> 2) & 1);
        bVar10 = (bool)((byte)(uVar42 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar42 >> 4) & 1);
        bVar12 = (bool)((byte)(uVar42 >> 5) & 1);
        bVar13 = (bool)((byte)(uVar42 >> 6) & 1);
        bVar14 = (bool)((byte)(uVar42 >> 7) & 1);
        bVar16 = (bool)(bVar15 & 1);
        bVar17 = (bool)((byte)(uVar42 >> 9) & 1);
        bVar18 = (bool)((byte)(uVar42 >> 10) & 1);
        bVar19 = (bool)((byte)(uVar42 >> 0xb) & 1);
        bVar20 = (bool)((byte)(uVar42 >> 0xc) & 1);
        bVar21 = (bool)((byte)(uVar42 >> 0xd) & 1);
        bVar22 = (bool)((byte)(uVar42 >> 0xe) & 1);
        bVar23 = SUB81(uVar42 >> 0xf,0);
        *puVar4 = (uint)bVar7 * auVar86._0_4_ | (uint)!bVar7 * *puVar4;
        puVar4[1] = (uint)bVar8 * auVar86._4_4_ | (uint)!bVar8 * puVar4[1];
        puVar4[2] = (uint)bVar9 * auVar86._8_4_ | (uint)!bVar9 * puVar4[2];
        puVar4[3] = (uint)bVar10 * auVar86._12_4_ | (uint)!bVar10 * puVar4[3];
        puVar4[4] = (uint)bVar11 * auVar86._16_4_ | (uint)!bVar11 * puVar4[4];
        puVar4[5] = (uint)bVar12 * auVar86._20_4_ | (uint)!bVar12 * puVar4[5];
        puVar4[6] = (uint)bVar13 * auVar86._24_4_ | (uint)!bVar13 * puVar4[6];
        puVar4[7] = (uint)bVar14 * auVar86._28_4_ | (uint)!bVar14 * puVar4[7];
        puVar4[8] = (uint)bVar16 * auVar86._32_4_ | (uint)!bVar16 * puVar4[8];
        puVar4[9] = (uint)bVar17 * auVar86._36_4_ | (uint)!bVar17 * puVar4[9];
        puVar4[10] = (uint)bVar18 * auVar86._40_4_ | (uint)!bVar18 * puVar4[10];
        puVar4[0xb] = (uint)bVar19 * auVar86._44_4_ | (uint)!bVar19 * puVar4[0xb];
        puVar4[0xc] = (uint)bVar20 * auVar86._48_4_ | (uint)!bVar20 * puVar4[0xc];
        puVar4[0xd] = (uint)bVar21 * auVar86._52_4_ | (uint)!bVar21 * puVar4[0xd];
        puVar4[0xe] = (uint)bVar22 * auVar86._56_4_ | (uint)!bVar22 * puVar4[0xe];
        puVar4[0xf] = (uint)bVar23 * auVar86._60_4_ | (uint)!bVar23 * puVar4[0xf];
      }
    }
  }
LAB_14013b775:
  puStack_130 = puVar44 + lVar45;
  puVar3 = puVar44 + lVar45 * 3;
  uStack_138 = 0;
  lVar59 = 0;
  lVar54 = param_3;
  do {
    puVar44[lVar45 * 4 + 1] = 0;
    lVar53 = 0;
    *puVar3 = 0xff7fffff;
    puVar3[1] = 0x7f7fffff;
    puVar44[lVar45 * 2] = *(undefined4 *)(param_3 + lVar59 * 4);
    uVar42 = 0;
    lVar64 = lVar54;
    if (1 < (int)(uint)param_5) {
      do {
        fVar93 = *(float *)(lVar64 + 4);
        iVar60 = 0;
        puVar44[lVar45 * 2 + uVar42 + 1] = fVar93;
        lVar49 = lVar53 * 4 + lVar45 * 0x10;
        fVar93 = fVar93 + (float)puVar44[uVar42 + 1];
        lVar43 = 0;
        lVar74 = lVar53;
        do {
          iVar60 = iVar60 + 1;
          lVar55 = (longlong)*(int *)((longlong)puVar44 + lVar43 + 4 + lVar49);
          fVar24 = ((fVar93 - *(float *)(lVar54 + lVar55 * 4)) - (float)puVar44[lVar55]) *
                   (float)puStack_130[uVar42 + (1 - lVar55)];
          lVar55 = lVar74;
          if (*(float *)((longlong)puVar3 + lVar43 + lVar53 * 4) < fVar24) break;
          lVar66 = (longlong)*(int *)((longlong)puVar44 + lVar43 + lVar49);
          lVar74 = (longlong)(iVar60 * -2 + (int)lVar53);
          lVar55 = lVar74 + 1;
          fVar24 = ((fVar93 - *(float *)(lVar54 + lVar66 * 4)) - (float)puVar44[lVar66]) *
                   (float)puStack_130[uVar42 + (1 - lVar66)];
          lVar66 = lVar43 + -4;
          lVar43 = lVar43 + -8;
        } while (fVar24 <= *(float *)((longlong)puVar3 + lVar66 + lVar53 * 4));
        lVar53 = lVar55 + 1;
        uVar68 = uVar42 + 1;
        puVar44[lVar45 * 4 + lVar55 + 2] = (int)uVar42 + 1;
        puVar3[lVar53] = fVar24;
        puVar3[lVar55 + 2] = 0x7f7fffff;
        uVar42 = uVar68;
        lVar64 = lVar64 + 4;
      } while (uVar68 < uVar46 - 1);
    }
    iVar60 = 0;
    uVar68 = 0;
    pfVar47 = (float *)(puVar3 + 1);
    uVar42 = uVar68;
    do {
      iVar73 = (int)uVar42;
      iVar67 = (int)uVar68;
      fVar93 = (float)iVar67;
      iVar57 = iVar73;
      if (*pfVar47 < fVar93) {
        iVar50 = iVar60;
        do {
          iVar50 = iVar50 + 1;
          iVar57 = iVar73 + -1 + iVar50 * 2;
          pfVar47 = (float *)(puVar3 + (longlong)iVar73 + (longlong)(iVar50 * 2));
          if (fVar93 <= *pfVar47) break;
          pfVar47 = (float *)(puVar3 + (longlong)iVar73 + 1 + (longlong)(iVar50 * 2));
          iVar57 = iVar73 + iVar50 * 2;
        } while (*pfVar47 < fVar93);
      }
      uVar42 = (ulonglong)iVar57;
      uVar40 = iVar67 - puVar44[lVar45 * 4 + uVar42 + 1];
      uVar56 = (int)uVar40 >> 0x1f;
      *(float *)(lVar54 + (longlong)iVar67 * 4) =
           (float)puVar44[(int)((uVar40 ^ uVar56) - uVar56)] +
           (float)puVar44[lVar45 * 2 + (longlong)(int)puVar44[lVar45 * 4 + uVar42 + 1]];
      uVar68 = (ulonglong)(iVar67 + 1U);
    } while (iVar67 + 1U < (uint)param_5);
    uStack_138 = uStack_138 + 1;
    lVar54 = lVar54 + lVar48 * 4;
    lVar59 = lVar59 + lVar48;
    if (uVar51 <= uStack_138) {
      do {
        FUN_141bb2480(param_3,param_3,(uint)param_5);
        iVar60 = iVar60 + 1;
        param_3 = param_3 + lVar48 * 4;
      } while (iVar60 < (int)param_5._4_4_);
      return 0;
    }
  } while( true );
}

