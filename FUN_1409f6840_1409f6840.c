
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409f6840(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  longlong lVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ushort uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
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
  undefined1 auVar52 [64];
  
  auVar43 = _DAT_14308e600;
  uVar33 = (ulonglong)param_7;
  lVar31 = (longlong)param_3;
  param_7 = param_7 >> 1;
  lVar20 = lVar31 - param_7;
  lVar20 = (lVar20 >> 0x3f & uVar33) + lVar20;
  if (lVar20 == 0) {
    uVar26 = 0;
    uVar29 = uVar33;
  }
  else {
    uVar26 = (ulonglong)(int)lVar20;
    uVar29 = uVar26;
  }
  lVar28 = uVar29 - 1;
  uVar29 = uVar26 + 1;
  if (uVar26 + 1 == uVar33) {
    uVar29 = 0;
  }
  uVar26 = (longlong)(int)lVar28;
  if ((longlong)(int)lVar28 < 1) {
    uVar26 = uVar33;
  }
  lVar30 = uVar26 - 1;
  if (0 < (longlong)param_5) {
    auVar36 = ZEXT416(*param_6);
    if ((longlong)param_5 < 0x10) {
      uVar26 = 0;
    }
    else {
      if ((longlong)param_5 < 0x27) {
        uVar24 = 0;
        uVar26 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar23 = param_2 * lVar20 + param_1;
        uVar24 = uVar23 & 0x3f;
        if ((uVar23 & 3) == 0) {
          if ((uVar24 != 0) && (uVar24 = 0x40 - uVar24 >> 2, (longlong)param_5 < (longlong)uVar24))
          {
            uVar24 = param_5;
          }
        }
        else {
          uVar24 = 0;
        }
        uVar26 = param_5 - (param_5 - uVar24 & 0xf);
        if (uVar24 != 0) {
          auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
          auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
          auVar40 = vpbroadcastq_avx512f();
          auVar41 = vbroadcastss_avx512f(auVar36);
          uVar25 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar18 = (byte)uVar16;
            auVar38 = vpaddq_avx512f(auVar38,auVar43);
            auVar39 = vpaddq_avx512f(auVar39,auVar43);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(uVar23 + uVar25 * 4);
            auVar42._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar42._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar42._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
            auVar42._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
            auVar42._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
            auVar42._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
            auVar42._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
            auVar42._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
            auVar42._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar42._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar42._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar42._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar42._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar42._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar42._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar42._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar28 + param_1 + uVar25 * 4);
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
            auVar42 = vaddps_avx512f(auVar42,auVar44);
            auVar42 = vmulps_avx512f(auVar41,auVar42);
            puVar22 = (uint *)(uVar23 + uVar25 * 4);
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
            puVar22[8] = (uint)(bVar18 & 1) * auVar42._32_4_ |
                         (uint)!(bool)(bVar18 & 1) * puVar22[8];
            puVar22[9] = (uint)bVar10 * auVar42._36_4_ | (uint)!bVar10 * puVar22[9];
            puVar22[10] = (uint)bVar11 * auVar42._40_4_ | (uint)!bVar11 * puVar22[10];
            puVar22[0xb] = (uint)bVar12 * auVar42._44_4_ | (uint)!bVar12 * puVar22[0xb];
            puVar22[0xc] = (uint)bVar13 * auVar42._48_4_ | (uint)!bVar13 * puVar22[0xc];
            puVar22[0xd] = (uint)bVar14 * auVar42._52_4_ | (uint)!bVar14 * puVar22[0xd];
            puVar22[0xe] = (uint)bVar15 * auVar42._56_4_ | (uint)!bVar15 * puVar22[0xe];
            puVar22[0xf] = (uint)(bVar18 >> 7) * auVar42._60_4_ |
                           (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
            uVar25 = uVar25 + 0x10;
          } while (uVar25 < uVar24);
          if (param_5 == uVar24) goto LAB_1409f6ab2;
        }
      }
      if ((longlong)(uVar24 + 0x10) <= (longlong)uVar26) {
        auVar43 = vbroadcastss_avx512f(auVar36);
        lVar21 = param_2 * lVar20 + param_1;
        do {
          auVar38 = vaddps_avx512f(*(undefined1 (*) [64])(lVar21 + uVar24 * 4),
                                   *(undefined1 (*) [64])(param_2 * lVar28 + param_1 + uVar24 * 4));
          auVar38 = vmulps_avx512f(auVar43,auVar38);
          *(undefined1 (*) [64])(lVar21 + uVar24 * 4) = auVar38;
          uVar24 = uVar24 + 0x10;
        } while (uVar24 < uVar26);
      }
    }
    if (uVar26 + 1 <= param_5) {
      auVar43 = vbroadcastss_avx512f(auVar36);
      auVar38 = vpbroadcastq_avx512f();
      lVar21 = param_2 * lVar20 + param_1;
      uVar16 = vpcmpgtq_avx512f(auVar38,_DAT_14308e640);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar38,_DAT_14308e680);
      bVar18 = (byte)uVar16;
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar28 * param_2 + param_1 + uVar26 * 4);
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
      piVar1 = (int *)(lVar21 + uVar26 * 4);
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
      auVar38 = vaddps_avx512f(auVar39,auVar38);
      auVar43 = vmulps_avx512f(auVar43,auVar38);
      puVar22 = (uint *)(lVar21 + uVar26 * 4);
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
      *puVar22 = (uint)(bVar19 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar22;
      puVar22[1] = (uint)bVar3 * auVar43._4_4_ | (uint)!bVar3 * puVar22[1];
      puVar22[2] = (uint)bVar4 * auVar43._8_4_ | (uint)!bVar4 * puVar22[2];
      puVar22[3] = (uint)bVar5 * auVar43._12_4_ | (uint)!bVar5 * puVar22[3];
      puVar22[4] = (uint)bVar6 * auVar43._16_4_ | (uint)!bVar6 * puVar22[4];
      puVar22[5] = (uint)bVar7 * auVar43._20_4_ | (uint)!bVar7 * puVar22[5];
      puVar22[6] = (uint)bVar8 * auVar43._24_4_ | (uint)!bVar8 * puVar22[6];
      puVar22[7] = (uint)bVar9 * auVar43._28_4_ | (uint)!bVar9 * puVar22[7];
      puVar22[8] = (uint)(bVar18 & 1) * auVar43._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar22[8];
      puVar22[9] = (uint)bVar10 * auVar43._36_4_ | (uint)!bVar10 * puVar22[9];
      puVar22[10] = (uint)bVar11 * auVar43._40_4_ | (uint)!bVar11 * puVar22[10];
      puVar22[0xb] = (uint)bVar12 * auVar43._44_4_ | (uint)!bVar12 * puVar22[0xb];
      puVar22[0xc] = (uint)bVar13 * auVar43._48_4_ | (uint)!bVar13 * puVar22[0xc];
      puVar22[0xd] = (uint)bVar14 * auVar43._52_4_ | (uint)!bVar14 * puVar22[0xd];
      puVar22[0xe] = (uint)bVar15 * auVar43._56_4_ | (uint)!bVar15 * puVar22[0xe];
      puVar22[0xf] = (uint)(bVar18 >> 7) * auVar43._60_4_ |
                     (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
    }
  }
LAB_1409f6ab2:
  auVar43 = _DAT_14308e600;
  if (1 < param_7) {
    auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
    auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
    uVar26 = param_2 * lVar20 + param_1;
    uVar24 = uVar26 & 0x3f;
    uVar27 = 0;
    uVar23 = 0x40 - uVar24 >> 2;
    puVar22 = param_6;
    do {
      while( true ) {
        lVar21 = param_2 * uVar29;
        lVar28 = param_2 * lVar30;
        uVar29 = uVar29 + 1;
        uVar25 = 0;
        if (uVar29 == uVar33) {
          uVar29 = uVar25;
        }
        lVar30 = lVar30 + -1;
        if (lVar30 < 0) {
          lVar30 = uVar33 - 1;
        }
        lVar21 = lVar21 + param_1;
        lVar28 = lVar28 + param_1;
        if ((longlong)param_5 < 1) break;
        auVar36 = ZEXT416(puVar22[1]);
        if ((longlong)param_5 < 0x10) {
LAB_1409f6ca5:
          if (uVar25 + 1 <= param_5) {
            auVar40 = vpbroadcastq_avx512f();
            auVar41 = vbroadcastss_avx512f(auVar36);
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar18 = (byte)uVar16;
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar21 + uVar25 * 4);
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
            piVar1 = (int *)(lVar28 + uVar25 * 4);
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
            auVar40 = vaddps_avx512f(auVar40,auVar47);
            auVar41 = vfmadd213ps_avx512f(auVar41,auVar40,
                                          *(undefined1 (*) [64])(uVar26 + uVar25 * 4));
            pauVar2 = (undefined1 (*) [64])(uVar26 + uVar25 * 4);
            auVar40 = *pauVar2;
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
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar41._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * auVar40._0_4_;
            *(uint *)(*pauVar2 + 4) =
                 (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar41._4_4_ |
                 (uint)!bVar3 * auVar40._4_4_;
            *(uint *)(*pauVar2 + 8) =
                 (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar41._8_4_ |
                 (uint)!bVar4 * auVar40._8_4_;
            *(uint *)(*pauVar2 + 0xc) =
                 (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar41._12_4_ |
                 (uint)!bVar5 * auVar40._12_4_;
            *(uint *)(*pauVar2 + 0x10) =
                 (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar41._16_4_ |
                 (uint)!bVar6 * auVar40._16_4_;
            *(uint *)(*pauVar2 + 0x14) =
                 (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar41._20_4_ |
                 (uint)!bVar7 * auVar40._20_4_;
            *(uint *)(*pauVar2 + 0x18) =
                 (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar41._24_4_ |
                 (uint)!bVar8 * auVar40._24_4_;
            *(uint *)(*pauVar2 + 0x1c) =
                 (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar41._28_4_ |
                 (uint)!bVar9 * auVar40._28_4_;
            *(uint *)(*pauVar2 + 0x20) =
                 (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar41._32_4_ |
                 (uint)!(bool)(bVar18 & 1) * auVar40._32_4_;
            *(uint *)(*pauVar2 + 0x24) =
                 (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar41._36_4_ |
                 (uint)!bVar10 * auVar40._36_4_;
            *(uint *)(*pauVar2 + 0x28) =
                 (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar41._40_4_ |
                 (uint)!bVar11 * auVar40._40_4_;
            *(uint *)(*pauVar2 + 0x2c) =
                 (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar41._44_4_ |
                 (uint)!bVar12 * auVar40._44_4_;
            *(uint *)(*pauVar2 + 0x30) =
                 (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar41._48_4_ |
                 (uint)!bVar13 * auVar40._48_4_;
            *(uint *)(*pauVar2 + 0x34) =
                 (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar41._52_4_ |
                 (uint)!bVar14 * auVar40._52_4_;
            *(uint *)(*pauVar2 + 0x38) =
                 (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar41._56_4_ |
                 (uint)!bVar15 * auVar40._56_4_;
            *(uint *)(*pauVar2 + 0x3c) =
                 (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar41._60_4_ |
                 (uint)!(bool)(bVar18 >> 7) * auVar40._60_4_;
          }
        }
        else {
          if ((longlong)param_5 < 0x41) {
            uVar32 = 0;
            uVar25 = param_5 & 0xfffffffffffffff0;
LAB_1409f6c70:
            if ((longlong)(uVar32 + 0x10) <= (longlong)uVar25) {
              auVar40 = vbroadcastss_avx512f(auVar36);
              do {
                auVar41 = vaddps_avx512f(*(undefined1 (*) [64])(lVar21 + uVar32 * 4),
                                         *(undefined1 (*) [64])(lVar28 + uVar32 * 4));
                auVar41 = vfmadd213ps_avx512f(auVar41,auVar40,
                                              *(undefined1 (*) [64])(uVar26 + uVar32 * 4));
                *(undefined1 (*) [64])(uVar26 + uVar32 * 4) = auVar41;
                uVar32 = uVar32 + 0x10;
              } while (uVar32 < uVar25);
            }
            goto LAB_1409f6ca5;
          }
          if ((uVar26 & 3) == 0) {
            uVar32 = uVar24;
            if ((uVar24 != 0) && (uVar32 = param_5, (longlong)uVar23 <= (longlong)param_5)) {
              uVar32 = uVar23;
            }
          }
          else {
            uVar32 = 0;
          }
          uVar25 = param_5 - (param_5 - uVar32 & 0xf);
          if (uVar32 == 0) goto LAB_1409f6c70;
          uVar34 = 0;
          auVar42 = vpbroadcastq_avx512f();
          auVar44 = vbroadcastss_avx512f(auVar36);
          auVar40 = auVar39;
          auVar41 = auVar38;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar42,auVar41);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar42,auVar40);
            bVar18 = (byte)uVar16;
            auVar41 = vpaddq_avx512f(auVar41,auVar43);
            auVar40 = vpaddq_avx512f(auVar40,auVar43);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar21 + uVar34 * 4);
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
            piVar1 = (int *)(lVar28 + uVar34 * 4);
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
            auVar45 = vaddps_avx512f(auVar45,auVar46);
            auVar46 = vfmadd213ps_avx512f(auVar45,auVar44,
                                          *(undefined1 (*) [64])(uVar26 + uVar34 * 4));
            pauVar2 = (undefined1 (*) [64])(uVar26 + uVar34 * 4);
            auVar45 = *pauVar2;
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
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar46._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * auVar45._0_4_;
            *(uint *)(*pauVar2 + 4) =
                 (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar46._4_4_ |
                 (uint)!bVar3 * auVar45._4_4_;
            *(uint *)(*pauVar2 + 8) =
                 (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar46._8_4_ |
                 (uint)!bVar4 * auVar45._8_4_;
            *(uint *)(*pauVar2 + 0xc) =
                 (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar46._12_4_ |
                 (uint)!bVar5 * auVar45._12_4_;
            *(uint *)(*pauVar2 + 0x10) =
                 (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar46._16_4_ |
                 (uint)!bVar6 * auVar45._16_4_;
            *(uint *)(*pauVar2 + 0x14) =
                 (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar46._20_4_ |
                 (uint)!bVar7 * auVar45._20_4_;
            *(uint *)(*pauVar2 + 0x18) =
                 (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar46._24_4_ |
                 (uint)!bVar8 * auVar45._24_4_;
            *(uint *)(*pauVar2 + 0x1c) =
                 (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar46._28_4_ |
                 (uint)!bVar9 * auVar45._28_4_;
            *(uint *)(*pauVar2 + 0x20) =
                 (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar46._32_4_ |
                 (uint)!(bool)(bVar18 & 1) * auVar45._32_4_;
            *(uint *)(*pauVar2 + 0x24) =
                 (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar46._36_4_ |
                 (uint)!bVar10 * auVar45._36_4_;
            *(uint *)(*pauVar2 + 0x28) =
                 (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar46._40_4_ |
                 (uint)!bVar11 * auVar45._40_4_;
            *(uint *)(*pauVar2 + 0x2c) =
                 (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar46._44_4_ |
                 (uint)!bVar12 * auVar45._44_4_;
            *(uint *)(*pauVar2 + 0x30) =
                 (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar46._48_4_ |
                 (uint)!bVar13 * auVar45._48_4_;
            *(uint *)(*pauVar2 + 0x34) =
                 (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar46._52_4_ |
                 (uint)!bVar14 * auVar45._52_4_;
            *(uint *)(*pauVar2 + 0x38) =
                 (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar46._56_4_ |
                 (uint)!bVar15 * auVar45._56_4_;
            *(uint *)(*pauVar2 + 0x3c) =
                 (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar46._60_4_ |
                 (uint)!(bool)(bVar18 >> 7) * auVar45._60_4_;
            uVar34 = uVar34 + 0x10;
          } while (uVar34 < uVar32);
          if (param_5 != uVar32) goto LAB_1409f6c70;
        }
        uVar27 = uVar27 + 1;
        puVar22 = puVar22 + 1;
        if (param_7 - 1U <= uVar27) goto LAB_1409f6d28;
      }
      uVar27 = uVar27 + 1;
      puVar22 = puVar22 + 1;
    } while (uVar27 < param_7 - 1U);
  }
LAB_1409f6d28:
  auVar43 = _DAT_14308e600;
  if (0 < (longlong)param_5) {
    auVar36 = ZEXT416(param_6[param_7]);
    if ((longlong)param_5 < 0x10) {
      uVar29 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b) {
        uVar26 = 0;
        uVar29 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar24 = param_2 * uVar33 + param_1;
        uVar26 = uVar24 & 0x3f;
        if ((uVar24 & 3) == 0) {
          if ((uVar26 != 0) && (uVar26 = 0x40 - uVar26 >> 2, (longlong)param_5 < (longlong)uVar26))
          {
            uVar26 = param_5;
          }
        }
        else {
          uVar26 = 0;
        }
        uVar29 = param_5 - (param_5 - uVar26 & 0xf);
        if (uVar26 != 0) {
          auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
          auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
          auVar40 = vpbroadcastq_avx512f();
          auVar41 = vbroadcastss_avx512f(auVar36);
          uVar23 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar18 = (byte)uVar16;
            auVar38 = vpaddq_avx512f(auVar38,auVar43);
            auVar39 = vpaddq_avx512f(auVar39,auVar43);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(param_2 * lVar31 + param_1 + uVar23 * 4);
            auVar48._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
            auVar48._0_4_ = (uint)(bVar19 & 1) * *piVar1;
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
            auVar42 = vfmadd213ps_avx512f(auVar48,auVar41,
                                          *(undefined1 (*) [64])
                                           (param_2 * lVar20 + param_1 + uVar23 * 4));
            puVar22 = (uint *)(uVar24 + uVar23 * 4);
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
            uVar23 = uVar23 + 0x10;
          } while (uVar23 < uVar26);
          if (param_5 == uVar26) goto LAB_1409f6eff;
        }
      }
      if ((longlong)(uVar26 + 0x10) <= (longlong)uVar29) {
        auVar43 = vbroadcastss_avx512f(auVar36);
        do {
          auVar38 = vfmadd213ps_avx512f(*(undefined1 (*) [64])
                                         (param_2 * lVar31 + param_1 + uVar26 * 4),auVar43,
                                        *(undefined1 (*) [64])
                                         (param_2 * lVar20 + param_1 + uVar26 * 4));
          *(undefined1 (*) [64])(param_2 * uVar33 + param_1 + uVar26 * 4) = auVar38;
          uVar26 = uVar26 + 0x10;
        } while (uVar26 < uVar29);
      }
    }
    if (uVar29 + 1 <= param_5) {
      auVar43 = vbroadcastss_avx512f(auVar36);
      auVar38 = vpbroadcastq_avx512f();
      uVar16 = vpcmpgtq_avx512f(auVar38,_DAT_14308e640);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar38,_DAT_14308e680);
      bVar18 = (byte)uVar16;
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar31 * param_2 + param_1 + uVar29 * 4);
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
      auVar43 = vfmadd213ps_avx512f(auVar43,auVar41,
                                    *(undefined1 (*) [64])(lVar20 * param_2 + param_1 + uVar29 * 4))
      ;
      puVar22 = (uint *)(param_2 * uVar33 + param_1 + uVar29 * 4);
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
      *puVar22 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar43._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * *puVar22;
      puVar22[1] = (uint)bVar3 * (uint)((byte)(uVar35 >> 1) & 1) * auVar43._4_4_ |
                   (uint)!bVar3 * puVar22[1];
      puVar22[2] = (uint)bVar4 * (uint)((byte)(uVar35 >> 2) & 1) * auVar43._8_4_ |
                   (uint)!bVar4 * puVar22[2];
      puVar22[3] = (uint)bVar5 * (uint)((byte)(uVar35 >> 3) & 1) * auVar43._12_4_ |
                   (uint)!bVar5 * puVar22[3];
      puVar22[4] = (uint)bVar6 * (uint)((byte)(uVar35 >> 4) & 1) * auVar43._16_4_ |
                   (uint)!bVar6 * puVar22[4];
      puVar22[5] = (uint)bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar43._20_4_ |
                   (uint)!bVar7 * puVar22[5];
      puVar22[6] = (uint)bVar8 * (uint)((byte)(uVar35 >> 6) & 1) * auVar43._24_4_ |
                   (uint)!bVar8 * puVar22[6];
      puVar22[7] = (uint)bVar9 * (uint)((byte)(uVar35 >> 7) & 1) * auVar43._28_4_ |
                   (uint)!bVar9 * puVar22[7];
      puVar22[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar43._32_4_ |
                   (uint)!(bool)(bVar18 & 1) * puVar22[8];
      puVar22[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar43._36_4_ |
                   (uint)!bVar10 * puVar22[9];
      puVar22[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar43._40_4_ |
                    (uint)!bVar11 * puVar22[10];
      puVar22[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar43._44_4_ |
                     (uint)!bVar12 * puVar22[0xb];
      puVar22[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar43._48_4_ |
                     (uint)!bVar13 * puVar22[0xc];
      puVar22[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar43._52_4_ |
                     (uint)!bVar14 * puVar22[0xd];
      puVar22[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar43._56_4_ |
                     (uint)!bVar15 * puVar22[0xe];
      puVar22[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar43._60_4_ |
                     (uint)!(bool)(bVar18 >> 7) * puVar22[0xf];
    }
  }
LAB_1409f6eff:
  auVar43 = _DAT_14308e600;
  if (param_8 == 0) {
    if (0 < (longlong)param_5) {
      if ((longlong)param_5 < 0x40) {
        uVar29 = 0;
      }
      else {
        if ((longlong)param_5 < 0x396) {
          uVar26 = 0;
          uVar29 = param_5 & 0xffffffffffffffc0;
        }
        else {
          uVar29 = param_4 & 0x3f;
          uVar26 = uVar29;
          if ((uVar29 != 0) &&
             (uVar26 = 0x40 - uVar29, (longlong)param_5 < (longlong)(0x40 - uVar29))) {
            uVar26 = param_5;
          }
          uVar29 = param_5 - (param_5 - uVar26 & 0x3f);
          if (uVar26 != 0) {
            uVar24 = 0;
            auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
            auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
            auVar40 = vpbroadcastq_avx512f();
            do {
              uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
              uVar17 = vpcmpgtq_avx512f(auVar40,auVar39);
              bVar18 = (byte)uVar17;
              auVar38 = vpaddq_avx512f(auVar38,auVar43);
              auVar39 = vpaddq_avx512f(auVar39,auVar43);
              uVar35 = CONCAT11(bVar18,(byte)uVar16);
              piVar1 = (int *)(param_2 * uVar33 + param_1 + uVar24 * 4);
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
              auVar41 = vcvtps2dq_avx512f(auVar49);
              auVar37 = vextractf64x4_avx512f(auVar41,1);
              auVar37 = vpackssdw_avx512vl(auVar41._0_32_,auVar37);
              auVar37 = vpermq_avx512vl(auVar37,0xd8);
              auVar36 = vextracti32x4_avx512vl(auVar37,1);
              auVar36 = vpackuswb_avx512vl(auVar37._0_16_,auVar36);
              auVar36 = vmovdqu8_avx512vl(auVar36);
              *(undefined1 (*) [16])(uVar24 + param_4) = auVar36;
              uVar24 = uVar24 + 0x10;
            } while (uVar24 < uVar26);
            if (param_5 == uVar26) {
              return;
            }
          }
        }
        if ((longlong)(uVar26 + 0x40) <= (longlong)uVar29) {
          lVar20 = param_2 * uVar33 + param_1;
          do {
            auVar43 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + uVar26 * 4));
            auVar38 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0x40 + uVar26 * 4));
            auVar39 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0x80 + uVar26 * 4));
            auVar40 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0xc0 + uVar26 * 4));
            auVar41 = vshuff32x4_avx512f(auVar43,auVar38,0x88);
            auVar43 = vshuff32x4_avx512f(auVar43,auVar38,0xdd);
            auVar38 = vshuff32x4_avx512f(auVar39,auVar40,0x88);
            auVar39 = vshuff32x4_avx512f(auVar39,auVar40,0xdd);
            auVar43 = vpackssdw_avx512bw(auVar41,auVar43);
            auVar38 = vpackssdw_avx512bw(auVar38,auVar39);
            auVar39 = vshuff32x4_avx512f(auVar43,auVar38,0x88);
            auVar43 = vshuff32x4_avx512f(auVar43,auVar38,0xdd);
            auVar43 = vpackuswb_avx512bw(auVar39,auVar43);
            auVar43 = vmovdqu32_avx512f(auVar43);
            *(undefined1 (*) [64])(uVar26 + param_4) = auVar43;
            uVar26 = uVar26 + 0x40;
          } while (uVar26 < uVar29);
        }
      }
      auVar43 = _DAT_14308e600;
      if (uVar29 + 1 <= param_5) {
        auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
        auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
        auVar40 = vpbroadcastq_avx512f();
        uVar26 = 0;
        do {
          uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
          uVar17 = vpcmpgtq_avx512f(auVar40,auVar39);
          bVar18 = (byte)uVar17;
          auVar38 = vpaddq_avx512f(auVar38,auVar43);
          auVar39 = vpaddq_avx512f(auVar39,auVar43);
          uVar35 = CONCAT11(bVar18,(byte)uVar16);
          piVar1 = (int *)(param_1 + param_2 * uVar33 + uVar29 * 4 + uVar26 * 4);
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
          auVar41 = vcvtps2dq_avx512f(auVar50);
          auVar37 = vextractf64x4_avx512f(auVar41,1);
          auVar37 = vpackssdw_avx512vl(auVar41._0_32_,auVar37);
          auVar37 = vpermq_avx512vl(auVar37,0xd8);
          auVar36 = vextracti32x4_avx512vl(auVar37,1);
          auVar36 = vpackuswb_avx512vl(auVar37._0_16_,auVar36);
          auVar36 = vmovdqu8_avx512vl(auVar36);
          *(undefined1 (*) [16])(uVar26 + param_4 + uVar29) = auVar36;
          uVar26 = uVar26 + 0x10;
        } while (uVar26 < param_5 - uVar29);
      }
    }
  }
  else if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x40) {
      uVar29 = 0;
    }
    else {
      uVar29 = param_4 & 0x3f;
      uVar26 = uVar29;
      if ((uVar29 != 0) && (uVar26 = 0x40 - uVar29, (longlong)param_5 < (longlong)(0x40 - uVar29)))
      {
        uVar26 = param_5;
      }
      uVar29 = param_5 - (param_5 - uVar26 & 0x3f);
      if (uVar26 != 0) {
        uVar24 = 0;
        auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
        auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
        auVar40 = vpbroadcastq_avx512f();
        do {
          uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
          uVar17 = vpcmpgtq_avx512f(auVar40,auVar39);
          bVar18 = (byte)uVar17;
          auVar38 = vpaddq_avx512f(auVar38,auVar43);
          auVar39 = vpaddq_avx512f(auVar39,auVar43);
          uVar35 = CONCAT11(bVar18,(byte)uVar16);
          piVar1 = (int *)(param_2 * uVar33 + param_1 + uVar24 * 4);
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
          auVar41 = vcvtps2dq_avx512f(auVar51);
          auVar37 = vextractf64x4_avx512f(auVar41,1);
          auVar37 = vpackssdw_avx512vl(auVar41._0_32_,auVar37);
          auVar37 = vpermq_avx512vl(auVar37,0xd8);
          auVar36 = vextracti32x4_avx512vl(auVar37,1);
          auVar36 = vpackuswb_avx512vl(auVar37._0_16_,auVar36);
          auVar36 = vmovdqu8_avx512vl(auVar36);
          *(undefined1 (*) [16])(uVar24 + param_4) = auVar36;
          uVar24 = uVar24 + 0x10;
        } while (uVar24 < uVar26);
        if (param_5 == uVar26) {
          return;
        }
      }
      if ((longlong)(uVar26 + 0x40) <= (longlong)uVar29) {
        lVar20 = param_2 * uVar33 + param_1;
        do {
          auVar43 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + uVar26 * 4));
          auVar38 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0x40 + uVar26 * 4));
          auVar39 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0x80 + uVar26 * 4));
          auVar40 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar20 + 0xc0 + uVar26 * 4));
          auVar41 = vshuff32x4_avx512f(auVar43,auVar38,0x88);
          auVar43 = vshuff32x4_avx512f(auVar43,auVar38,0xdd);
          auVar38 = vshuff32x4_avx512f(auVar39,auVar40,0x88);
          auVar39 = vshuff32x4_avx512f(auVar39,auVar40,0xdd);
          auVar43 = vpackssdw_avx512bw(auVar41,auVar43);
          auVar38 = vpackssdw_avx512bw(auVar38,auVar39);
          auVar39 = vshuff32x4_avx512f(auVar43,auVar38,0x88);
          auVar43 = vshuff32x4_avx512f(auVar43,auVar38,0xdd);
          auVar43 = vpackuswb_avx512bw(auVar39,auVar43);
          auVar43 = vmovntdq_avx512f(auVar43);
          *(undefined1 (*) [64])(uVar26 + param_4) = auVar43;
          uVar26 = uVar26 + 0x40;
        } while (uVar26 < uVar29);
      }
    }
    auVar43 = _DAT_14308e600;
    if (uVar29 + 1 <= param_5) {
      auVar38 = vmovdqu32_avx512f(_DAT_14308e640);
      auVar39 = vmovdqu32_avx512f(_DAT_14308e680);
      auVar40 = vpbroadcastq_avx512f();
      uVar26 = 0;
      do {
        uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
        uVar17 = vpcmpgtq_avx512f(auVar40,auVar39);
        bVar18 = (byte)uVar17;
        auVar38 = vpaddq_avx512f(auVar38,auVar43);
        auVar39 = vpaddq_avx512f(auVar39,auVar43);
        uVar35 = CONCAT11(bVar18,(byte)uVar16);
        piVar1 = (int *)(param_1 + param_2 * uVar33 + uVar29 * 4 + uVar26 * 4);
        auVar52._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
        auVar52._0_4_ = (uint)((byte)uVar16 & 1) * *piVar1;
        auVar52._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
        auVar52._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
        auVar52._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
        auVar52._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
        auVar52._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
        auVar52._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
        auVar52._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
        auVar52._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
        auVar52._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
        auVar52._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
        auVar52._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
        auVar52._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
        auVar52._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
        auVar52._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
        auVar41 = vcvtps2dq_avx512f(auVar52);
        auVar37 = vextractf64x4_avx512f(auVar41,1);
        auVar37 = vpackssdw_avx512vl(auVar41._0_32_,auVar37);
        auVar37 = vpermq_avx512vl(auVar37,0xd8);
        auVar36 = vextracti32x4_avx512vl(auVar37,1);
        auVar36 = vpackuswb_avx512vl(auVar37._0_16_,auVar36);
        auVar36 = vmovdqu8_avx512vl(auVar36);
        *(undefined1 (*) [16])(uVar26 + param_4 + uVar29) = auVar36;
        uVar26 = uVar26 + 0x10;
      } while (uVar26 < param_5 - uVar29);
    }
  }
  return;
}

