
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409a9740(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined1 (*pauVar2) [64];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ushort uVar35;
  undefined1 auVar36 [32];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [16];
  
  auVar42 = _DAT_14308df80;
  uVar20 = (ulonglong)param_7;
  param_7 = param_7 >> 1;
  lVar28 = (longlong)param_3;
  lVar30 = lVar28 - param_7;
  lVar30 = (lVar30 >> 0x3f & uVar20) + lVar30;
  if (lVar30 == 0) {
    uVar27 = 0;
    uVar31 = uVar20;
  }
  else {
    uVar27 = (ulonglong)(int)lVar30;
    uVar31 = uVar27;
  }
  lVar25 = uVar31 - 1;
  uVar31 = uVar27 + 1;
  if (uVar27 + 1 == uVar20) {
    uVar31 = 0;
  }
  uVar27 = (longlong)(int)lVar25;
  if ((longlong)(int)lVar25 < 1) {
    uVar27 = uVar20;
  }
  lVar32 = uVar27 - 1;
  if (0 < (longlong)param_5) {
    auVar52 = ZEXT416(*param_6);
    if ((longlong)param_5 < 0x10) {
      uVar27 = 0;
    }
    else {
      if ((longlong)param_5 < 0x27) {
        uVar33 = 0;
        uVar27 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar23 = param_2 * lVar30 + param_1;
        uVar33 = uVar23 & 0x3f;
        if ((uVar23 & 3) == 0) {
          if ((uVar33 != 0) && (uVar33 = 0x40 - uVar33 >> 2, (longlong)param_5 < (longlong)uVar33))
          {
            uVar33 = param_5;
          }
        }
        else {
          uVar33 = 0;
        }
        uVar27 = param_5 - (param_5 - uVar33 & 0xf);
        if (uVar33 != 0) {
          auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar39 = vpbroadcastq_avx512f();
          auVar40 = vbroadcastss_avx512f(auVar52);
          uVar29 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar38);
            bVar18 = (byte)uVar16;
            auVar37 = vpaddq_avx512f(auVar37,auVar42);
            auVar38 = vpaddq_avx512f(auVar38,auVar42);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(uVar23 + uVar29 * 4);
            auVar41._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar41._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar41._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar41._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar41._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar41._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar41._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar41._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar41._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar41._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar41._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar41._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar41._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar41._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar41._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar41._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar25 + param_1 + uVar29 * 4);
            auVar43._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar43._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar43._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar43._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar43._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar43._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar43._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar43._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar43._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar43._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar43._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar43._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar43._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar43._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar43._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar43._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar41 = vaddps_avx512f(auVar41,auVar43);
            auVar41 = vmulps_avx512f(auVar40,auVar41);
            puVar22 = (uint *)(uVar23 + uVar29 * 4);
            bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *puVar22 = (uint)(bVar19 & 1) * auVar41._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar22;
            puVar22[1] = (uint)bVar3 * auVar41._4_4_ | (uint)!bVar3 * puVar22[1];
            puVar22[2] = (uint)bVar4 * auVar41._8_4_ | (uint)!bVar4 * puVar22[2];
            puVar22[3] = (uint)bVar5 * auVar41._12_4_ | (uint)!bVar5 * puVar22[3];
            puVar22[4] = (uint)bVar6 * auVar41._16_4_ | (uint)!bVar6 * puVar22[4];
            puVar22[5] = (uint)bVar7 * auVar41._20_4_ | (uint)!bVar7 * puVar22[5];
            puVar22[6] = (uint)bVar8 * auVar41._24_4_ | (uint)!bVar8 * puVar22[6];
            puVar22[7] = (uint)bVar9 * auVar41._28_4_ | (uint)!bVar9 * puVar22[7];
            puVar22[8] = (uint)(bVar18 & 1) * auVar41._32_4_ |
                         (uint)!(bool)(bVar18 & 1) * puVar22[8];
            puVar22[9] = (uint)bVar10 * auVar41._36_4_ | (uint)!bVar10 * puVar22[9];
            puVar22[10] = (uint)bVar11 * auVar41._40_4_ | (uint)!bVar11 * puVar22[10];
            puVar22[0xb] = (uint)bVar12 * auVar41._44_4_ | (uint)!bVar12 * puVar22[0xb];
            puVar22[0xc] = (uint)bVar13 * auVar41._48_4_ | (uint)!bVar13 * puVar22[0xc];
            puVar22[0xd] = (uint)bVar14 * auVar41._52_4_ | (uint)!bVar14 * puVar22[0xd];
            puVar22[0xe] = (uint)bVar15 * auVar41._56_4_ | (uint)!bVar15 * puVar22[0xe];
            puVar22[0xf] = (uint)(bVar18 >> 7) * auVar41._60_4_ |
                           (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
            uVar29 = uVar29 + 0x10;
          } while (uVar29 < uVar33);
          if (param_5 == uVar33) goto LAB_1409a998d;
        }
      }
      if ((longlong)(uVar33 + 0x10) <= (longlong)uVar27) {
        auVar42 = vbroadcastss_avx512f(auVar52);
        lVar24 = param_2 * lVar30 + param_1;
        do {
          auVar37 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + uVar33 * 4),
                                   *(undefined1 (*) [64])(param_2 * lVar25 + param_1 + uVar33 * 4));
          auVar37 = vmulps_avx512f(auVar42,auVar37);
          *(undefined1 (*) [64])(lVar24 + uVar33 * 4) = auVar37;
          uVar33 = uVar33 + 0x10;
        } while (uVar33 < uVar27);
      }
    }
    if (uVar27 + 1 <= param_5) {
      auVar42 = vbroadcastss_avx512f(auVar52);
      auVar37 = vpbroadcastq_avx512f();
      lVar24 = param_2 * lVar30 + param_1;
      uVar16 = vpcmpgtq_avx512f(auVar37,_DAT_14308dfc0);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar37,_DAT_14308e000);
      bVar18 = (byte)uVar16;
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar25 * param_2 + param_1 + uVar27 * 4);
      auVar37._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar37._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar37._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar37._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar37._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar37._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar37._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar37._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar37._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar37._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar37._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar37._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar37._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar37._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar37._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar37._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar24 + uVar27 * 4);
      auVar38._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar38._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar38._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar38._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar38._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar38._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar38._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar38._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar38._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar38._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar38._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar38._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar38._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar38._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar38._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar38._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      auVar37 = vaddps_avx512f(auVar38,auVar37);
      auVar42 = vmulps_avx512f(auVar42,auVar37);
      puVar22 = (uint *)(lVar24 + uVar27 * 4);
      bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
      bVar10 = (bool)(bVar18 >> 1 & 1);
      bVar11 = (bool)(bVar18 >> 2 & 1);
      bVar12 = (bool)(bVar18 >> 3 & 1);
      bVar13 = (bool)(bVar18 >> 4 & 1);
      bVar14 = (bool)(bVar18 >> 5 & 1);
      bVar15 = (bool)(bVar18 >> 6 & 1);
      *puVar22 = (uint)(bVar19 & 1) * auVar42._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar22;
      puVar22[1] = (uint)bVar3 * auVar42._4_4_ | (uint)!bVar3 * puVar22[1];
      puVar22[2] = (uint)bVar4 * auVar42._8_4_ | (uint)!bVar4 * puVar22[2];
      puVar22[3] = (uint)bVar5 * auVar42._12_4_ | (uint)!bVar5 * puVar22[3];
      puVar22[4] = (uint)bVar6 * auVar42._16_4_ | (uint)!bVar6 * puVar22[4];
      puVar22[5] = (uint)bVar7 * auVar42._20_4_ | (uint)!bVar7 * puVar22[5];
      puVar22[6] = (uint)bVar8 * auVar42._24_4_ | (uint)!bVar8 * puVar22[6];
      puVar22[7] = (uint)bVar9 * auVar42._28_4_ | (uint)!bVar9 * puVar22[7];
      puVar22[8] = (uint)(bVar18 & 1) * auVar42._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar22[8];
      puVar22[9] = (uint)bVar10 * auVar42._36_4_ | (uint)!bVar10 * puVar22[9];
      puVar22[10] = (uint)bVar11 * auVar42._40_4_ | (uint)!bVar11 * puVar22[10];
      puVar22[0xb] = (uint)bVar12 * auVar42._44_4_ | (uint)!bVar12 * puVar22[0xb];
      puVar22[0xc] = (uint)bVar13 * auVar42._48_4_ | (uint)!bVar13 * puVar22[0xc];
      puVar22[0xd] = (uint)bVar14 * auVar42._52_4_ | (uint)!bVar14 * puVar22[0xd];
      puVar22[0xe] = (uint)bVar15 * auVar42._56_4_ | (uint)!bVar15 * puVar22[0xe];
      puVar22[0xf] = (uint)(bVar18 >> 7) * auVar42._60_4_ |
                     (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
    }
  }
LAB_1409a998d:
  auVar42 = _DAT_14308df80;
  if (1 < param_7) {
    auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
    auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
    uVar27 = param_2 * lVar30 + param_1;
    uVar23 = uVar27 & 0x3f;
    uVar26 = 0;
    uVar33 = 0x40 - uVar23 >> 2;
    puVar22 = param_6;
    do {
      while( true ) {
        lVar24 = param_2 * uVar31;
        lVar25 = param_2 * lVar32;
        uVar31 = uVar31 + 1;
        uVar29 = 0;
        if (uVar31 == uVar20) {
          uVar31 = uVar29;
        }
        lVar32 = lVar32 + -1;
        if (lVar32 < 0) {
          lVar32 = uVar20 - 1;
        }
        lVar24 = lVar24 + param_1;
        lVar25 = lVar25 + param_1;
        if ((longlong)param_5 < 1) break;
        auVar52 = ZEXT416(puVar22[1]);
        if ((longlong)param_5 < 0x10) {
LAB_1409a9b87:
          if (uVar29 + 1 <= param_5) {
            auVar39 = vpbroadcastq_avx512f();
            auVar40 = vbroadcastss_avx512f(auVar52);
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar38);
            bVar18 = (byte)uVar16;
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar24 + uVar29 * 4);
            auVar39._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar39._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar39._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar39._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar39._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar39._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar39._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar39._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar39._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar39._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar39._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar39._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar39._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar39._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar39._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar39._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar25 + uVar29 * 4);
            auVar46._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar46._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar46._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar46._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar46._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar46._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar46._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar46._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar46._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar46._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar46._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar46._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar46._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar46._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar46._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar46._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar39 = vaddps_avx512f(auVar39,auVar46);
            auVar40 = vfmadd213ps_avx512f(auVar40,auVar39,
                                          *(undefined1 (*) [64])(uVar27 + uVar29 * 4));
            pauVar2 = (undefined1 (*) [64])(uVar27 + uVar29 * 4);
            auVar39 = *pauVar2;
            bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *(uint *)*pauVar2 =
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar40._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * auVar39._0_4_;
            *(uint *)(*pauVar2 + 4) =
                 (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar40._4_4_ |
                 (uint)!bVar3 * auVar39._4_4_;
            *(uint *)(*pauVar2 + 8) =
                 (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar40._8_4_ |
                 (uint)!bVar4 * auVar39._8_4_;
            *(uint *)(*pauVar2 + 0xc) =
                 (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar40._12_4_ |
                 (uint)!bVar5 * auVar39._12_4_;
            *(uint *)(*pauVar2 + 0x10) =
                 (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar40._16_4_ |
                 (uint)!bVar6 * auVar39._16_4_;
            *(uint *)(*pauVar2 + 0x14) =
                 (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar40._20_4_ |
                 (uint)!bVar7 * auVar39._20_4_;
            *(uint *)(*pauVar2 + 0x18) =
                 (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar40._24_4_ |
                 (uint)!bVar8 * auVar39._24_4_;
            *(uint *)(*pauVar2 + 0x1c) =
                 (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar40._28_4_ |
                 (uint)!bVar9 * auVar39._28_4_;
            *(uint *)(*pauVar2 + 0x20) =
                 (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar40._32_4_ |
                 (uint)!(bool)(bVar18 & 1) * auVar39._32_4_;
            *(uint *)(*pauVar2 + 0x24) =
                 (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar40._36_4_ |
                 (uint)!bVar10 * auVar39._36_4_;
            *(uint *)(*pauVar2 + 0x28) =
                 (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar40._40_4_ |
                 (uint)!bVar11 * auVar39._40_4_;
            *(uint *)(*pauVar2 + 0x2c) =
                 (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar40._44_4_ |
                 (uint)!bVar12 * auVar39._44_4_;
            *(uint *)(*pauVar2 + 0x30) =
                 (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar40._48_4_ |
                 (uint)!bVar13 * auVar39._48_4_;
            *(uint *)(*pauVar2 + 0x34) =
                 (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar40._52_4_ |
                 (uint)!bVar14 * auVar39._52_4_;
            *(uint *)(*pauVar2 + 0x38) =
                 (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar40._56_4_ |
                 (uint)!bVar15 * auVar39._56_4_;
            *(uint *)(*pauVar2 + 0x3c) =
                 (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar40._60_4_ |
                 (uint)!(bool)(bVar18 >> 7) * auVar39._60_4_;
          }
        }
        else {
          if ((longlong)param_5 < 0x41) {
            uVar21 = 0;
            uVar29 = param_5 & 0xfffffffffffffff0;
LAB_1409a9b32:
            if ((longlong)(uVar21 + 0x10) <= (longlong)uVar29) {
              auVar39 = vbroadcastss_avx512f(auVar52);
              do {
                auVar40 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + uVar21 * 4),
                                         *(undefined1 (*) [64])(lVar25 + uVar21 * 4));
                auVar40 = vfmadd213ps_avx512f(auVar40,auVar39,
                                              *(undefined1 (*) [64])(uVar27 + uVar21 * 4));
                *(undefined1 (*) [64])(uVar27 + uVar21 * 4) = auVar40;
                uVar21 = uVar21 + 0x10;
              } while (uVar21 < uVar29);
            }
            goto LAB_1409a9b87;
          }
          if ((uVar27 & 3) == 0) {
            uVar21 = uVar23;
            if ((uVar23 != 0) && (uVar21 = param_5, (longlong)uVar33 <= (longlong)param_5)) {
              uVar21 = uVar33;
            }
          }
          else {
            uVar21 = 0;
          }
          uVar29 = param_5 - (param_5 - uVar21 & 0xf);
          if (uVar21 == 0) goto LAB_1409a9b32;
          uVar34 = 0;
          auVar41 = vpbroadcastq_avx512f();
          auVar43 = vbroadcastss_avx512f(auVar52);
          auVar39 = auVar38;
          auVar40 = auVar37;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar40);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar39);
            bVar18 = (byte)uVar16;
            auVar40 = vpaddq_avx512f(auVar40,auVar42);
            auVar39 = vpaddq_avx512f(auVar39,auVar42);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar24 + uVar34 * 4);
            auVar44._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar44._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar44._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar44._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar44._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar44._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar44._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar44._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar44._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar44._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar44._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar44._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar44._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar25 + uVar34 * 4);
            auVar45._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar45._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar45._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar45._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar45._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar45._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar45._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar45._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar45._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar45._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar45._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar45._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar45._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar45._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar45._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar45._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar44 = vaddps_avx512f(auVar44,auVar45);
            auVar45 = vfmadd213ps_avx512f(auVar44,auVar43,
                                          *(undefined1 (*) [64])(uVar27 + uVar34 * 4));
            pauVar2 = (undefined1 (*) [64])(uVar27 + uVar34 * 4);
            auVar44 = *pauVar2;
            bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *(uint *)*pauVar2 =
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar45._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * auVar44._0_4_;
            *(uint *)(*pauVar2 + 4) =
                 (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_ |
                 (uint)!bVar3 * auVar44._4_4_;
            *(uint *)(*pauVar2 + 8) =
                 (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_ |
                 (uint)!bVar4 * auVar44._8_4_;
            *(uint *)(*pauVar2 + 0xc) =
                 (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_ |
                 (uint)!bVar5 * auVar44._12_4_;
            *(uint *)(*pauVar2 + 0x10) =
                 (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_ |
                 (uint)!bVar6 * auVar44._16_4_;
            *(uint *)(*pauVar2 + 0x14) =
                 (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_ |
                 (uint)!bVar7 * auVar44._20_4_;
            *(uint *)(*pauVar2 + 0x18) =
                 (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_ |
                 (uint)!bVar8 * auVar44._24_4_;
            *(uint *)(*pauVar2 + 0x1c) =
                 (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar45._28_4_ |
                 (uint)!bVar9 * auVar44._28_4_;
            *(uint *)(*pauVar2 + 0x20) =
                 (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar45._32_4_ |
                 (uint)!(bool)(bVar18 & 1) * auVar44._32_4_;
            *(uint *)(*pauVar2 + 0x24) =
                 (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar45._36_4_ |
                 (uint)!bVar10 * auVar44._36_4_;
            *(uint *)(*pauVar2 + 0x28) =
                 (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar45._40_4_ |
                 (uint)!bVar11 * auVar44._40_4_;
            *(uint *)(*pauVar2 + 0x2c) =
                 (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar45._44_4_ |
                 (uint)!bVar12 * auVar44._44_4_;
            *(uint *)(*pauVar2 + 0x30) =
                 (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar45._48_4_ |
                 (uint)!bVar13 * auVar44._48_4_;
            *(uint *)(*pauVar2 + 0x34) =
                 (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar45._52_4_ |
                 (uint)!bVar14 * auVar44._52_4_;
            *(uint *)(*pauVar2 + 0x38) =
                 (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar45._56_4_ |
                 (uint)!bVar15 * auVar44._56_4_;
            *(uint *)(*pauVar2 + 0x3c) =
                 (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar45._60_4_ |
                 (uint)!(bool)(bVar18 >> 7) * auVar44._60_4_;
            uVar34 = uVar34 + 0x10;
          } while (uVar34 < uVar21);
          if (param_5 != uVar21) goto LAB_1409a9b32;
        }
        uVar26 = uVar26 + 1;
        puVar22 = puVar22 + 1;
        if (param_7 - 1U <= uVar26) goto LAB_1409a9c07;
      }
      uVar26 = uVar26 + 1;
      puVar22 = puVar22 + 1;
    } while (uVar26 < param_7 - 1U);
  }
LAB_1409a9c07:
  auVar42 = _DAT_14308df80;
  if (0 < (longlong)param_5) {
    auVar52 = ZEXT416(param_6[param_7]);
    if ((longlong)param_5 < 0x10) {
      uVar31 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b) {
        uVar27 = 0;
        uVar31 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar33 = param_2 * uVar20 + param_1;
        uVar27 = uVar33 & 0x3f;
        if ((uVar33 & 3) == 0) {
          if ((uVar27 != 0) && (uVar27 = 0x40 - uVar27 >> 2, (longlong)param_5 < (longlong)uVar27))
          {
            uVar27 = param_5;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar31 = param_5 - (param_5 - uVar27 & 0xf);
        if (uVar27 != 0) {
          auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar39 = vpbroadcastq_avx512f();
          auVar40 = vbroadcastss_avx512f(auVar52);
          uVar23 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar38);
            bVar18 = (byte)uVar16;
            auVar37 = vpaddq_avx512f(auVar37,auVar42);
            auVar38 = vpaddq_avx512f(auVar38,auVar42);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(param_2 * lVar28 + param_1 + uVar23 * 4);
            auVar47._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar47._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar47._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar47._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar47._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar47._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar47._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar47._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar47._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar47._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar47._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar47._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar47._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar47._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar47._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar47._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar41 = vfmadd213ps_avx512f(auVar47,auVar40,
                                          *(undefined1 (*) [64])
                                           (param_2 * lVar30 + param_1 + uVar23 * 4));
            puVar22 = (uint *)(uVar33 + uVar23 * 4);
            bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *puVar22 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar41._0_4_ |
                       (uint)!(bool)(bVar19 & 1) * *puVar22;
            puVar22[1] = (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar41._4_4_ |
                         (uint)!bVar3 * puVar22[1];
            puVar22[2] = (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar41._8_4_ |
                         (uint)!bVar4 * puVar22[2];
            puVar22[3] = (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar41._12_4_ |
                         (uint)!bVar5 * puVar22[3];
            puVar22[4] = (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar41._16_4_ |
                         (uint)!bVar6 * puVar22[4];
            puVar22[5] = (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar41._20_4_ |
                         (uint)!bVar7 * puVar22[5];
            puVar22[6] = (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar41._24_4_ |
                         (uint)!bVar8 * puVar22[6];
            puVar22[7] = (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar41._28_4_ |
                         (uint)!bVar9 * puVar22[7];
            puVar22[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar41._32_4_ |
                         (uint)!(bool)(bVar18 & 1) * puVar22[8];
            puVar22[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar41._36_4_ |
                         (uint)!bVar10 * puVar22[9];
            puVar22[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar41._40_4_ |
                          (uint)!bVar11 * puVar22[10];
            puVar22[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar41._44_4_ |
                           (uint)!bVar12 * puVar22[0xb];
            puVar22[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar41._48_4_ |
                           (uint)!bVar13 * puVar22[0xc];
            puVar22[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar41._52_4_ |
                           (uint)!bVar14 * puVar22[0xd];
            puVar22[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar41._56_4_ |
                           (uint)!bVar15 * puVar22[0xe];
            puVar22[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar41._60_4_ |
                           (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
            uVar23 = uVar23 + 0x10;
          } while (uVar23 < uVar27);
          if (param_5 == uVar27) goto LAB_1409a9ddf;
        }
      }
      if ((longlong)(uVar27 + 0x10) <= (longlong)uVar31) {
        auVar42 = vbroadcastss_avx512f(auVar52);
        do {
          auVar37 = vfmadd213ps_avx512f(*(undefined1 (*) [64])
                                         (param_2 * lVar28 + param_1 + uVar27 * 4),auVar42,
                                        *(undefined1 (*) [64])
                                         (param_2 * lVar30 + param_1 + uVar27 * 4));
          *(undefined1 (*) [64])(param_2 * uVar20 + param_1 + uVar27 * 4) = auVar37;
          uVar27 = uVar27 + 0x10;
        } while (uVar27 < uVar31);
      }
    }
    if (uVar31 + 1 <= param_5) {
      auVar42 = vbroadcastss_avx512f(auVar52);
      auVar37 = vpbroadcastq_avx512f();
      uVar16 = vpcmpgtq_avx512f(auVar37,_DAT_14308dfc0);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar37,_DAT_14308e000);
      bVar18 = (byte)uVar16;
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar28 * param_2 + param_1 + uVar31 * 4);
      auVar40._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar40._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar40._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar40._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar40._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar40._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar40._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar40._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar40._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar40._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar40._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar40._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar40._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar40._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar40._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar40._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      auVar42 = vfmadd213ps_avx512f(auVar42,auVar40,
                                    *(undefined1 (*) [64])(lVar30 * param_2 + param_1 + uVar31 * 4))
      ;
      puVar22 = (uint *)(param_2 * uVar20 + param_1 + uVar31 * 4);
      bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar35 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar35 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar35 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar35 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar35 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar35 >> 7) & 1);
      bVar10 = (bool)(bVar18 >> 1 & 1);
      bVar11 = (bool)(bVar18 >> 2 & 1);
      bVar12 = (bool)(bVar18 >> 3 & 1);
      bVar13 = (bool)(bVar18 >> 4 & 1);
      bVar14 = (bool)(bVar18 >> 5 & 1);
      bVar15 = (bool)(bVar18 >> 6 & 1);
      *puVar22 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar42._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * *puVar22;
      puVar22[1] = (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar42._4_4_ |
                   (uint)!bVar3 * puVar22[1];
      puVar22[2] = (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar42._8_4_ |
                   (uint)!bVar4 * puVar22[2];
      puVar22[3] = (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar42._12_4_ |
                   (uint)!bVar5 * puVar22[3];
      puVar22[4] = (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar42._16_4_ |
                   (uint)!bVar6 * puVar22[4];
      puVar22[5] = (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar42._20_4_ |
                   (uint)!bVar7 * puVar22[5];
      puVar22[6] = (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar42._24_4_ |
                   (uint)!bVar8 * puVar22[6];
      puVar22[7] = (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar42._28_4_ |
                   (uint)!bVar9 * puVar22[7];
      puVar22[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar42._32_4_ |
                   (uint)!(bool)(bVar18 & 1) * puVar22[8];
      puVar22[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar42._36_4_ |
                   (uint)!bVar10 * puVar22[9];
      puVar22[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar42._40_4_ |
                    (uint)!bVar11 * puVar22[10];
      puVar22[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar42._44_4_ |
                     (uint)!bVar12 * puVar22[0xb];
      puVar22[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar42._48_4_ |
                     (uint)!bVar13 * puVar22[0xc];
      puVar22[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar42._52_4_ |
                     (uint)!bVar14 * puVar22[0xd];
      puVar22[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar42._56_4_ |
                     (uint)!bVar15 * puVar22[0xe];
      puVar22[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar42._60_4_ |
                     (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
    }
  }
LAB_1409a9ddf:
  auVar42 = _DAT_14308df80;
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x20) {
      uVar31 = 0;
    }
    else {
      if ((longlong)param_5 < 0xf6) {
        uVar27 = 0;
        uVar31 = param_5 & 0xffffffffffffffe0;
      }
      else {
        uVar27 = param_4 & 0x3f;
        if ((param_4 & 1) == 0) {
          if ((uVar27 != 0) && (uVar27 = 0x40 - uVar27 >> 1, (longlong)param_5 < (longlong)uVar27))
          {
            uVar27 = param_5;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar31 = param_5 - (param_5 - uVar27 & 0x1f);
        if (uVar27 != 0) {
          uVar33 = 0;
          auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar39 = vpbroadcastq_avx512f();
          lVar30 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
            uVar17 = vpcmpgtq_avx512f(auVar39,auVar38);
            bVar18 = (byte)uVar17;
            auVar37 = vpaddq_avx512f(auVar37,auVar42);
            auVar38 = vpaddq_avx512f(auVar38,auVar42);
            uVar35 = CONCAT11(bVar18,(byte)uVar16);
            piVar1 = (int *)(param_2 * uVar20 + param_1 + uVar33 * 4);
            auVar48._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar48._0_4_ = (uint)((byte)uVar16 & 1) * *piVar1;
            auVar48._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar48._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar48._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar48._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar48._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar48._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar48._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar48._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar48._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar48._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar48._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar48._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar48._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar48._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            uVar33 = uVar33 + 0x10;
            auVar40 = vcvtps2dq_avx512f(auVar48);
            auVar36 = vextractf64x4_avx512f(auVar40,1);
            auVar36 = vpackusdw_avx512vl(auVar40._0_32_,auVar36);
            auVar36 = vpermq_avx512vl(auVar36,0xd8);
            auVar36 = vmovdqu16_avx512vl(auVar36);
            *(undefined1 (*) [32])(lVar30 + param_4) = auVar36;
            lVar30 = lVar30 + 0x20;
          } while (uVar33 < uVar27);
          if (param_5 == uVar27) {
            return;
          }
        }
      }
      if ((longlong)(uVar27 + 0x20) <= (longlong)uVar31) {
        lVar30 = param_2 * uVar20 + param_1;
        do {
          auVar42 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar30 + uVar27 * 4));
          auVar37 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar30 + 0x40 + uVar27 * 4));
          auVar38 = vshuff32x4_avx512f(auVar42,auVar37,0x88);
          auVar42 = vshuff32x4_avx512f(auVar42,auVar37,0xdd);
          auVar42 = vpackusdw_avx512bw(auVar38,auVar42);
          auVar42 = vmovdqu32_avx512f(auVar42);
          *(undefined1 (*) [64])(param_4 + uVar27 * 2) = auVar42;
          uVar27 = uVar27 + 0x20;
        } while (uVar27 < uVar31);
      }
    }
    auVar42 = _DAT_14308df80;
    if (param_5 < uVar31 + 1) {
      return;
    }
    auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
    auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
    uVar27 = 0;
    auVar39 = vpbroadcastq_avx512f();
    lVar30 = 0;
    do {
      uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
      uVar17 = vpcmpgtq_avx512f(auVar39,auVar38);
      bVar18 = (byte)uVar17;
      auVar37 = vpaddq_avx512f(auVar37,auVar42);
      auVar38 = vpaddq_avx512f(auVar38,auVar42);
      uVar35 = CONCAT11(bVar18,(byte)uVar16);
      piVar1 = (int *)(param_1 + param_2 * uVar20 + uVar31 * 4 + uVar27 * 4);
      auVar49._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar49._0_4_ = (uint)((byte)uVar16 & 1) * *piVar1;
      auVar49._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar49._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar49._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar49._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar49._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar49._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar49._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar49._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar49._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar49._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar49._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      uVar27 = uVar27 + 0x10;
      auVar40 = vcvtps2dq_avx512f(auVar49);
      auVar36 = vextractf64x4_avx512f(auVar40,1);
      auVar36 = vpackusdw_avx512vl(auVar40._0_32_,auVar36);
      auVar36 = vpermq_avx512vl(auVar36,0xd8);
      auVar36 = vmovdqu16_avx512vl(auVar36);
      *(undefined1 (*) [32])(lVar30 + param_4 + uVar31 * 2) = auVar36;
      lVar30 = lVar30 + 0x20;
    } while (uVar27 < param_5 - uVar31);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x20) {
LAB_1409aa22d:
    uVar27 = 0;
  }
  else {
    uVar31 = param_4 & 0x3f;
    if (uVar31 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1409aa22d;
      uVar31 = 0x40 - uVar31 >> 1;
      if ((longlong)param_5 < (longlong)uVar31) {
        uVar31 = param_5;
      }
    }
    uVar27 = param_5 - (param_5 - uVar31 & 0x1f);
    if (uVar31 != 0) {
      uVar33 = 0;
      auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
      auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
      auVar39 = vpbroadcastq_avx512f();
      lVar30 = 0;
      do {
        uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
        uVar17 = vpcmpgtq_avx512f(auVar39,auVar38);
        bVar18 = (byte)uVar17;
        auVar37 = vpaddq_avx512f(auVar37,auVar42);
        auVar38 = vpaddq_avx512f(auVar38,auVar42);
        uVar35 = CONCAT11(bVar18,(byte)uVar16);
        piVar1 = (int *)(param_2 * uVar20 + param_1 + uVar33 * 4);
        auVar50._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
        auVar50._0_4_ = (uint)((byte)uVar16 & 1) * *piVar1;
        auVar50._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
        auVar50._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
        auVar50._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
        auVar50._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
        auVar50._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
        auVar50._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
        auVar50._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
        auVar50._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
        auVar50._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
        auVar50._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
        auVar50._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
        auVar50._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
        auVar50._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
        auVar50._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
        uVar33 = uVar33 + 0x10;
        auVar40 = vcvtps2dq_avx512f(auVar50);
        auVar36 = vextractf64x4_avx512f(auVar40,1);
        auVar36 = vpackusdw_avx512vl(auVar40._0_32_,auVar36);
        auVar36 = vpermq_avx512vl(auVar36,0xd8);
        auVar36 = vmovdqu16_avx512vl(auVar36);
        *(undefined1 (*) [32])(lVar30 + param_4) = auVar36;
        lVar30 = lVar30 + 0x20;
      } while (uVar33 < uVar31);
      if (param_5 == uVar31) {
        return;
      }
    }
    if ((longlong)(uVar31 + 0x20) <= (longlong)uVar27) {
      lVar30 = param_2 * uVar20 + param_1;
      do {
        auVar42 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar30 + uVar31 * 4));
        auVar37 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar30 + 0x40 + uVar31 * 4));
        auVar38 = vshuff32x4_avx512f(auVar42,auVar37,0x88);
        auVar42 = vshuff32x4_avx512f(auVar42,auVar37,0xdd);
        auVar42 = vpackusdw_avx512bw(auVar38,auVar42);
        auVar42 = vmovntdq_avx512f(auVar42);
        *(undefined1 (*) [64])(param_4 + uVar31 * 2) = auVar42;
        uVar31 = uVar31 + 0x20;
      } while (uVar31 < uVar27);
    }
  }
  auVar42 = _DAT_14308df80;
  if (uVar27 + 1 <= param_5) {
    auVar37 = vmovdqu32_avx512f(_DAT_14308dfc0);
    auVar38 = vmovdqu32_avx512f(_DAT_14308e000);
    uVar31 = 0;
    auVar39 = vpbroadcastq_avx512f();
    lVar30 = 0;
    do {
      uVar16 = vpcmpgtq_avx512f(auVar39,auVar37);
      uVar17 = vpcmpgtq_avx512f(auVar39,auVar38);
      bVar18 = (byte)uVar17;
      auVar37 = vpaddq_avx512f(auVar37,auVar42);
      auVar38 = vpaddq_avx512f(auVar38,auVar42);
      uVar35 = CONCAT11(bVar18,(byte)uVar16);
      piVar1 = (int *)(param_1 + param_2 * uVar20 + uVar27 * 4 + uVar31 * 4);
      auVar51._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar51._0_4_ = (uint)((byte)uVar16 & 1) * *piVar1;
      auVar51._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar51._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar51._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar51._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar51._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar51._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar51._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar51._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar51._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar51._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar51._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      uVar31 = uVar31 + 0x10;
      auVar40 = vcvtps2dq_avx512f(auVar51);
      auVar36 = vextractf64x4_avx512f(auVar40,1);
      auVar36 = vpackusdw_avx512vl(auVar40._0_32_,auVar36);
      auVar36 = vpermq_avx512vl(auVar36,0xd8);
      auVar36 = vmovdqu16_avx512vl(auVar36);
      *(undefined1 (*) [32])(lVar30 + param_4 + uVar27 * 2) = auVar36;
      lVar30 = lVar30 + 0x20;
    } while (uVar31 < param_5 - uVar27);
  }
  return;
}

