
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409f4800(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,int param_7,int param_8)

{
  int *piVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [64];
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
  bool bVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ushort uVar35;
  undefined1 auVar36 [64];
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
  undefined1 auVar49 [16];
  
  auVar41 = _DAT_14308e600;
  uVar23 = (ulonglong)param_7;
  lVar30 = (longlong)param_3;
  lVar20 = (longlong)(param_7 >> 1);
  lVar22 = (lVar30 - lVar20 >> 0x3f & uVar23) + (lVar30 - lVar20);
  if (lVar22 == 0) {
    uVar28 = 0;
    uVar31 = uVar23;
  }
  else {
    uVar28 = (ulonglong)(int)lVar22;
    uVar31 = uVar28;
  }
  lVar33 = uVar31 - 1;
  uVar31 = uVar28 + 1;
  if (uVar28 + 1 == uVar23) {
    uVar31 = 0;
  }
  uVar28 = (longlong)(int)lVar33;
  if ((longlong)(int)lVar33 < 1) {
    uVar28 = uVar23;
  }
  lVar32 = uVar28 - 1;
  if (0 < (longlong)param_5) {
    auVar49 = ZEXT416(*param_6);
    if ((longlong)param_5 < 0x10) {
      uVar28 = 0;
    }
    else {
      if ((longlong)param_5 < 0x27) {
        uVar27 = 0;
        uVar28 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar26 = param_2 * lVar22 + param_1;
        uVar27 = uVar26 & 0x3f;
        if ((uVar26 & 3) == 0) {
          if ((uVar27 != 0) && (uVar27 = 0x40 - uVar27 >> 2, (longlong)param_5 < (longlong)uVar27))
          {
            uVar27 = param_5;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar28 = param_5 - (param_5 - uVar27 & 0xf);
        if (uVar27 != 0) {
          auVar36 = vmovdqu32_avx512f(_DAT_14308e640);
          auVar37 = vmovdqu32_avx512f(_DAT_14308e680);
          auVar38 = vpbroadcastq_avx512f();
          auVar39 = vbroadcastss_avx512f(auVar49);
          uVar29 = 0;
          do {
            uVar17 = vpcmpgtq_avx512f(auVar38,auVar36);
            bVar19 = (byte)uVar17;
            uVar17 = vpcmpgtq_avx512f(auVar38,auVar37);
            bVar18 = (byte)uVar17;
            auVar36 = vpaddq_avx512f(auVar36,auVar41);
            auVar37 = vpaddq_avx512f(auVar37,auVar41);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(uVar26 + uVar29 * 4);
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
            piVar1 = (int *)(param_2 * lVar33 + param_1 + uVar29 * 4);
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
            auVar40 = vaddps_avx512f(auVar40,auVar42);
            auVar40 = vmulps_avx512f(auVar39,auVar40);
            puVar2 = (uint *)(uVar26 + uVar29 * 4);
            bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar11 = (bool)(bVar18 >> 1 & 1);
            bVar12 = (bool)(bVar18 >> 2 & 1);
            bVar13 = (bool)(bVar18 >> 3 & 1);
            bVar14 = (bool)(bVar18 >> 4 & 1);
            bVar15 = (bool)(bVar18 >> 5 & 1);
            bVar16 = (bool)(bVar18 >> 6 & 1);
            *puVar2 = (uint)(bVar19 & 1) * auVar40._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2;
            puVar2[1] = (uint)bVar4 * auVar40._4_4_ | (uint)!bVar4 * puVar2[1];
            puVar2[2] = (uint)bVar5 * auVar40._8_4_ | (uint)!bVar5 * puVar2[2];
            puVar2[3] = (uint)bVar6 * auVar40._12_4_ | (uint)!bVar6 * puVar2[3];
            puVar2[4] = (uint)bVar7 * auVar40._16_4_ | (uint)!bVar7 * puVar2[4];
            puVar2[5] = (uint)bVar8 * auVar40._20_4_ | (uint)!bVar8 * puVar2[5];
            puVar2[6] = (uint)bVar9 * auVar40._24_4_ | (uint)!bVar9 * puVar2[6];
            puVar2[7] = (uint)bVar10 * auVar40._28_4_ | (uint)!bVar10 * puVar2[7];
            puVar2[8] = (uint)(bVar18 & 1) * auVar40._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar11 * auVar40._36_4_ | (uint)!bVar11 * puVar2[9];
            puVar2[10] = (uint)bVar12 * auVar40._40_4_ | (uint)!bVar12 * puVar2[10];
            puVar2[0xb] = (uint)bVar13 * auVar40._44_4_ | (uint)!bVar13 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar14 * auVar40._48_4_ | (uint)!bVar14 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar15 * auVar40._52_4_ | (uint)!bVar15 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar16 * auVar40._56_4_ | (uint)!bVar16 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar18 >> 7) * auVar40._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
            uVar29 = uVar29 + 0x10;
          } while (uVar29 < uVar27);
          if (param_5 == uVar27) goto LAB_1409f4a73;
        }
      }
      if ((longlong)(uVar27 + 0x10) <= (longlong)uVar28) {
        auVar41 = vbroadcastss_avx512f(auVar49);
        lVar25 = param_2 * lVar22 + param_1;
        do {
          auVar36 = vaddps_avx512f(*(undefined1 (*) [64])(lVar25 + uVar27 * 4),
                                   *(undefined1 (*) [64])(param_2 * lVar33 + param_1 + uVar27 * 4));
          auVar36 = vmulps_avx512f(auVar41,auVar36);
          *(undefined1 (*) [64])(lVar25 + uVar27 * 4) = auVar36;
          uVar27 = uVar27 + 0x10;
        } while (uVar27 < uVar28);
      }
    }
    if (uVar28 + 1 <= param_5) {
      auVar41 = vbroadcastss_avx512f(auVar49);
      auVar36 = vpbroadcastq_avx512f();
      lVar25 = param_2 * lVar22 + param_1;
      uVar17 = vpcmpgtq_avx512f(auVar36,_DAT_14308e640);
      bVar19 = (byte)uVar17;
      uVar17 = vpcmpgtq_avx512f(auVar36,_DAT_14308e680);
      bVar18 = (byte)uVar17;
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar33 * param_2 + param_1 + uVar28 * 4);
      auVar36._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar1[1];
      auVar36._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar36._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar1[2];
      auVar36._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar1[3];
      auVar36._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar1[4];
      auVar36._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar1[5];
      auVar36._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar1[6];
      auVar36._28_4_ = (uint)((byte)(uVar35 >> 7) & 1) * piVar1[7];
      auVar36._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar36._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar36._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar36._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar36._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar36._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar36._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar36._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar25 + uVar28 * 4);
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
      auVar36 = vaddps_avx512f(auVar37,auVar36);
      auVar41 = vmulps_avx512f(auVar41,auVar36);
      puVar2 = (uint *)(lVar25 + uVar28 * 4);
      bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
      bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
      bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
      bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
      bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
      bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
      bVar11 = (bool)(bVar18 >> 1 & 1);
      bVar12 = (bool)(bVar18 >> 2 & 1);
      bVar13 = (bool)(bVar18 >> 3 & 1);
      bVar14 = (bool)(bVar18 >> 4 & 1);
      bVar15 = (bool)(bVar18 >> 5 & 1);
      bVar16 = (bool)(bVar18 >> 6 & 1);
      *puVar2 = (uint)(bVar19 & 1) * auVar41._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2;
      puVar2[1] = (uint)bVar4 * auVar41._4_4_ | (uint)!bVar4 * puVar2[1];
      puVar2[2] = (uint)bVar5 * auVar41._8_4_ | (uint)!bVar5 * puVar2[2];
      puVar2[3] = (uint)bVar6 * auVar41._12_4_ | (uint)!bVar6 * puVar2[3];
      puVar2[4] = (uint)bVar7 * auVar41._16_4_ | (uint)!bVar7 * puVar2[4];
      puVar2[5] = (uint)bVar8 * auVar41._20_4_ | (uint)!bVar8 * puVar2[5];
      puVar2[6] = (uint)bVar9 * auVar41._24_4_ | (uint)!bVar9 * puVar2[6];
      puVar2[7] = (uint)bVar10 * auVar41._28_4_ | (uint)!bVar10 * puVar2[7];
      puVar2[8] = (uint)(bVar18 & 1) * auVar41._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar11 * auVar41._36_4_ | (uint)!bVar11 * puVar2[9];
      puVar2[10] = (uint)bVar12 * auVar41._40_4_ | (uint)!bVar12 * puVar2[10];
      puVar2[0xb] = (uint)bVar13 * auVar41._44_4_ | (uint)!bVar13 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar14 * auVar41._48_4_ | (uint)!bVar14 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar15 * auVar41._52_4_ | (uint)!bVar15 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar16 * auVar41._56_4_ | (uint)!bVar16 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar18 >> 7) * auVar41._60_4_ | (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
    }
  }
LAB_1409f4a73:
  auVar41 = _DAT_14308e600;
  if (1 < lVar20) {
    auVar36 = vmovdqu32_avx512f(_DAT_14308e640);
    auVar37 = vmovdqu32_avx512f(_DAT_14308e680);
    uVar26 = param_2 * lVar22 + param_1;
    uVar29 = 0;
    uVar28 = uVar26 & 0x3f;
    uVar27 = 0x40 - uVar28 >> 2;
    do {
      lVar33 = param_2 * lVar32;
      lVar25 = param_2 * uVar31;
      uVar31 = uVar31 + 1;
      uVar21 = 0;
      if (uVar31 == uVar23) {
        uVar31 = uVar21;
      }
      lVar32 = lVar32 + -1;
      if (lVar32 < 0) {
        lVar32 = uVar23 - 1;
      }
      lVar25 = lVar25 + param_1;
      lVar33 = lVar33 + param_1;
      if (0 < (longlong)param_5) {
        auVar49 = ZEXT416(param_6[uVar29 + 1]);
        if (0xf < (longlong)param_5) {
          if ((longlong)param_5 < 0x41) {
            uVar24 = 0;
            uVar21 = param_5 & 0xfffffffffffffff0;
          }
          else {
            if ((uVar26 & 3) == 0) {
              uVar24 = uVar28;
              if ((uVar28 != 0) && (uVar24 = param_5, (longlong)uVar27 <= (longlong)param_5)) {
                uVar24 = uVar27;
              }
            }
            else {
              uVar24 = 0;
            }
            uVar21 = param_5 - (param_5 - uVar24 & 0xf);
            if (uVar24 != 0) {
              uVar34 = 0;
              auVar40 = vpbroadcastq_avx512f();
              auVar42 = vbroadcastss_avx512f(auVar49);
              auVar38 = auVar37;
              auVar39 = auVar36;
              do {
                uVar17 = vpcmpgtq_avx512f(auVar40,auVar39);
                bVar19 = (byte)uVar17;
                uVar17 = vpcmpgtq_avx512f(auVar40,auVar38);
                bVar18 = (byte)uVar17;
                auVar39 = vpaddq_avx512f(auVar39,auVar41);
                auVar38 = vpaddq_avx512f(auVar38,auVar41);
                uVar35 = CONCAT11(bVar18,bVar19);
                piVar1 = (int *)(lVar25 + uVar34 * 4);
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
                piVar1 = (int *)(lVar33 + uVar34 * 4);
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
                auVar43 = vaddps_avx512f(auVar43,auVar44);
                auVar44 = vfmadd213ps_avx512f(auVar43,auVar42,
                                              *(undefined1 (*) [64])(uVar26 + uVar34 * 4));
                pauVar3 = (undefined1 (*) [64])(uVar26 + uVar34 * 4);
                auVar43 = *pauVar3;
                bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
                bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
                bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
                bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
                bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
                bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
                bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
                bVar11 = (bool)(bVar18 >> 1 & 1);
                bVar12 = (bool)(bVar18 >> 2 & 1);
                bVar13 = (bool)(bVar18 >> 3 & 1);
                bVar14 = (bool)(bVar18 >> 4 & 1);
                bVar15 = (bool)(bVar18 >> 5 & 1);
                bVar16 = (bool)(bVar18 >> 6 & 1);
                *(uint *)*pauVar3 =
                     (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar44._0_4_ |
                     (uint)!(bool)(bVar19 & 1) * auVar43._0_4_;
                *(uint *)(*pauVar3 + 4) =
                     (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_ |
                     (uint)!bVar4 * auVar43._4_4_;
                *(uint *)(*pauVar3 + 8) =
                     (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_ |
                     (uint)!bVar5 * auVar43._8_4_;
                *(uint *)(*pauVar3 + 0xc) =
                     (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_ |
                     (uint)!bVar6 * auVar43._12_4_;
                *(uint *)(*pauVar3 + 0x10) =
                     (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_ |
                     (uint)!bVar7 * auVar43._16_4_;
                *(uint *)(*pauVar3 + 0x14) =
                     (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_ |
                     (uint)!bVar8 * auVar43._20_4_;
                *(uint *)(*pauVar3 + 0x18) =
                     (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_ |
                     (uint)!bVar9 * auVar43._24_4_;
                *(uint *)(*pauVar3 + 0x1c) =
                     (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar44._28_4_ |
                     (uint)!bVar10 * auVar43._28_4_;
                *(uint *)(*pauVar3 + 0x20) =
                     (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar44._32_4_ |
                     (uint)!(bool)(bVar18 & 1) * auVar43._32_4_;
                *(uint *)(*pauVar3 + 0x24) =
                     (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar44._36_4_ |
                     (uint)!bVar11 * auVar43._36_4_;
                *(uint *)(*pauVar3 + 0x28) =
                     (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar44._40_4_ |
                     (uint)!bVar12 * auVar43._40_4_;
                *(uint *)(*pauVar3 + 0x2c) =
                     (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar44._44_4_ |
                     (uint)!bVar13 * auVar43._44_4_;
                *(uint *)(*pauVar3 + 0x30) =
                     (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar44._48_4_ |
                     (uint)!bVar14 * auVar43._48_4_;
                *(uint *)(*pauVar3 + 0x34) =
                     (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar44._52_4_ |
                     (uint)!bVar15 * auVar43._52_4_;
                *(uint *)(*pauVar3 + 0x38) =
                     (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar44._56_4_ |
                     (uint)!bVar16 * auVar43._56_4_;
                *(uint *)(*pauVar3 + 0x3c) =
                     (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar44._60_4_ |
                     (uint)!(bool)(bVar18 >> 7) * auVar43._60_4_;
                uVar34 = uVar34 + 0x10;
              } while (uVar34 < uVar24);
              if (param_5 == uVar24) goto LAB_1409f4cd6;
            }
          }
          if ((longlong)(uVar24 + 0x10) <= (longlong)uVar21) {
            auVar38 = vbroadcastss_avx512f(auVar49);
            do {
              auVar39 = vaddps_avx512f(*(undefined1 (*) [64])(lVar25 + uVar24 * 4),
                                       *(undefined1 (*) [64])(lVar33 + uVar24 * 4));
              auVar39 = vfmadd213ps_avx512f(auVar39,auVar38,
                                            *(undefined1 (*) [64])(uVar26 + uVar24 * 4));
              *(undefined1 (*) [64])(uVar26 + uVar24 * 4) = auVar39;
              uVar24 = uVar24 + 0x10;
            } while (uVar24 < uVar21);
          }
        }
        if (uVar21 + 1 <= param_5) {
          auVar38 = vpbroadcastq_avx512f();
          auVar39 = vbroadcastss_avx512f(auVar49);
          uVar17 = vpcmpgtq_avx512f(auVar38,auVar36);
          bVar19 = (byte)uVar17;
          uVar17 = vpcmpgtq_avx512f(auVar38,auVar37);
          bVar18 = (byte)uVar17;
          uVar35 = CONCAT11(bVar18,bVar19);
          piVar1 = (int *)(lVar25 + uVar21 * 4);
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
          piVar1 = (int *)(lVar33 + uVar21 * 4);
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
          auVar38 = vaddps_avx512f(auVar38,auVar45);
          auVar39 = vfmadd213ps_avx512f(auVar39,auVar38,*(undefined1 (*) [64])(uVar26 + uVar21 * 4))
          ;
          pauVar3 = (undefined1 (*) [64])(uVar26 + uVar21 * 4);
          auVar38 = *pauVar3;
          bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
          bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
          bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
          bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
          bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
          bVar11 = (bool)(bVar18 >> 1 & 1);
          bVar12 = (bool)(bVar18 >> 2 & 1);
          bVar13 = (bool)(bVar18 >> 3 & 1);
          bVar14 = (bool)(bVar18 >> 4 & 1);
          bVar15 = (bool)(bVar18 >> 5 & 1);
          bVar16 = (bool)(bVar18 >> 6 & 1);
          *(uint *)*pauVar3 =
               (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar39._0_4_ |
               (uint)!(bool)(bVar19 & 1) * auVar38._0_4_;
          *(uint *)(*pauVar3 + 4) =
               (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar39._4_4_ |
               (uint)!bVar4 * auVar38._4_4_;
          *(uint *)(*pauVar3 + 8) =
               (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar39._8_4_ |
               (uint)!bVar5 * auVar38._8_4_;
          *(uint *)(*pauVar3 + 0xc) =
               (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar39._12_4_ |
               (uint)!bVar6 * auVar38._12_4_;
          *(uint *)(*pauVar3 + 0x10) =
               (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar39._16_4_ |
               (uint)!bVar7 * auVar38._16_4_;
          *(uint *)(*pauVar3 + 0x14) =
               (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar39._20_4_ |
               (uint)!bVar8 * auVar38._20_4_;
          *(uint *)(*pauVar3 + 0x18) =
               (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar39._24_4_ |
               (uint)!bVar9 * auVar38._24_4_;
          *(uint *)(*pauVar3 + 0x1c) =
               (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar39._28_4_ |
               (uint)!bVar10 * auVar38._28_4_;
          *(uint *)(*pauVar3 + 0x20) =
               (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar39._32_4_ |
               (uint)!(bool)(bVar18 & 1) * auVar38._32_4_;
          *(uint *)(*pauVar3 + 0x24) =
               (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar39._36_4_ |
               (uint)!bVar11 * auVar38._36_4_;
          *(uint *)(*pauVar3 + 0x28) =
               (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar39._40_4_ |
               (uint)!bVar12 * auVar38._40_4_;
          *(uint *)(*pauVar3 + 0x2c) =
               (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar39._44_4_ |
               (uint)!bVar13 * auVar38._44_4_;
          *(uint *)(*pauVar3 + 0x30) =
               (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar39._48_4_ |
               (uint)!bVar14 * auVar38._48_4_;
          *(uint *)(*pauVar3 + 0x34) =
               (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar39._52_4_ |
               (uint)!bVar15 * auVar38._52_4_;
          *(uint *)(*pauVar3 + 0x38) =
               (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar39._56_4_ |
               (uint)!bVar16 * auVar38._56_4_;
          *(uint *)(*pauVar3 + 0x3c) =
               (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar39._60_4_ |
               (uint)!(bool)(bVar18 >> 7) * auVar38._60_4_;
        }
      }
LAB_1409f4cd6:
      uVar29 = uVar29 + 1;
    } while (uVar29 < lVar20 - 1U);
  }
  auVar41 = _DAT_14308e600;
  auVar49 = ZEXT416(param_6[lVar20]);
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
      uVar23 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b) {
        uVar31 = 0;
        uVar23 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar31 = param_4 & 0x3f;
        if ((param_4 & 3) == 0) {
          if ((uVar31 != 0) && (uVar31 = 0x40 - uVar31 >> 2, (longlong)param_5 < (longlong)uVar31))
          {
            uVar31 = param_5;
          }
        }
        else {
          uVar31 = 0;
        }
        uVar23 = param_5 - (param_5 - uVar31 & 0xf);
        if (uVar31 != 0) {
          auVar36 = vmovdqu32_avx512f(_DAT_14308e640);
          auVar37 = vmovdqu32_avx512f(_DAT_14308e680);
          auVar38 = vbroadcastss_avx512f(auVar49);
          auVar39 = vpbroadcastq_avx512f();
          uVar28 = 0;
          do {
            uVar17 = vpcmpgtq_avx512f(auVar39,auVar36);
            bVar19 = (byte)uVar17;
            uVar17 = vpcmpgtq_avx512f(auVar39,auVar37);
            bVar18 = (byte)uVar17;
            auVar36 = vpaddq_avx512f(auVar36,auVar41);
            auVar37 = vpaddq_avx512f(auVar37,auVar41);
            uVar35 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(param_2 * lVar30 + param_1 + uVar28 * 4);
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
            auVar40 = vfmadd213ps_avx512f(auVar46,auVar38,
                                          *(undefined1 (*) [64])
                                           (param_2 * lVar22 + param_1 + uVar28 * 4));
            puVar2 = (uint *)(param_4 + uVar28 * 4);
            bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
            bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
            bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
            bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
            bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
            bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
            bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
            bVar11 = (bool)(bVar18 >> 1 & 1);
            bVar12 = (bool)(bVar18 >> 2 & 1);
            bVar13 = (bool)(bVar18 >> 3 & 1);
            bVar14 = (bool)(bVar18 >> 4 & 1);
            bVar15 = (bool)(bVar18 >> 5 & 1);
            bVar16 = (bool)(bVar18 >> 6 & 1);
            *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar40._0_4_ |
                      (uint)!(bool)(bVar19 & 1) * *puVar2;
            puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar40._4_4_ |
                        (uint)!bVar4 * puVar2[1];
            puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar40._8_4_ |
                        (uint)!bVar5 * puVar2[2];
            puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar40._12_4_ |
                        (uint)!bVar6 * puVar2[3];
            puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar40._16_4_ |
                        (uint)!bVar7 * puVar2[4];
            puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar40._20_4_ |
                        (uint)!bVar8 * puVar2[5];
            puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar40._24_4_ |
                        (uint)!bVar9 * puVar2[6];
            puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar40._28_4_ |
                        (uint)!bVar10 * puVar2[7];
            puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar40._32_4_ |
                        (uint)!(bool)(bVar18 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar40._36_4_ |
                        (uint)!bVar11 * puVar2[9];
            puVar2[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar40._40_4_ |
                         (uint)!bVar12 * puVar2[10];
            puVar2[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar40._44_4_ |
                          (uint)!bVar13 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar40._48_4_ |
                          (uint)!bVar14 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar40._52_4_ |
                          (uint)!bVar15 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar40._56_4_ |
                          (uint)!bVar16 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar40._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
            uVar28 = uVar28 + 0x10;
          } while (uVar28 < uVar31);
          if (param_5 == uVar31) {
            return;
          }
        }
      }
      if ((longlong)(uVar31 + 0x10) <= (longlong)uVar23) {
        auVar41 = vbroadcastss_avx512f(auVar49);
        do {
          auVar36 = vfmadd213ps_avx512f(*(undefined1 (*) [64])
                                         (param_2 * lVar30 + param_1 + uVar31 * 4),auVar41,
                                        *(undefined1 (*) [64])
                                         (param_2 * lVar22 + param_1 + uVar31 * 4));
          *(undefined1 (*) [64])(param_4 + uVar31 * 4) = auVar36;
          uVar31 = uVar31 + 0x10;
        } while (uVar31 < uVar23);
      }
    }
    if (param_5 < uVar23 + 1) {
      return;
    }
    auVar41 = vbroadcastss_avx512f(auVar49);
    auVar36 = vpbroadcastq_avx512f();
    uVar17 = vpcmpgtq_avx512f(auVar36,_DAT_14308e640);
    bVar19 = (byte)uVar17;
    uVar17 = vpcmpgtq_avx512f(auVar36,_DAT_14308e680);
    bVar18 = (byte)uVar17;
    uVar35 = CONCAT11(bVar18,bVar19);
    piVar1 = (int *)(param_1 + param_2 * lVar30 + uVar23 * 4);
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
    auVar41 = vfmadd213ps_avx512f(auVar41,auVar39,
                                  *(undefined1 (*) [64])(lVar22 * param_2 + param_1 + uVar23 * 4));
    puVar2 = (uint *)(param_4 + uVar23 * 4);
    bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
    bVar11 = (bool)(bVar18 >> 1 & 1);
    bVar12 = (bool)(bVar18 >> 2 & 1);
    bVar13 = (bool)(bVar18 >> 3 & 1);
    bVar14 = (bool)(bVar18 >> 4 & 1);
    bVar15 = (bool)(bVar18 >> 5 & 1);
    bVar16 = (bool)(bVar18 >> 6 & 1);
    *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar41._0_4_ |
              (uint)!(bool)(bVar19 & 1) * *puVar2;
    puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar41._4_4_ |
                (uint)!bVar4 * puVar2[1];
    puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar41._8_4_ |
                (uint)!bVar5 * puVar2[2];
    puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar41._12_4_ |
                (uint)!bVar6 * puVar2[3];
    puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar41._16_4_ |
                (uint)!bVar7 * puVar2[4];
    puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar41._20_4_ |
                (uint)!bVar8 * puVar2[5];
    puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar41._24_4_ |
                (uint)!bVar9 * puVar2[6];
    puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar41._28_4_ |
                (uint)!bVar10 * puVar2[7];
    puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar41._32_4_ |
                (uint)!(bool)(bVar18 & 1) * puVar2[8];
    puVar2[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar41._36_4_ | (uint)!bVar11 * puVar2[9];
    puVar2[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar41._40_4_ |
                 (uint)!bVar12 * puVar2[10];
    puVar2[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar41._44_4_ |
                  (uint)!bVar13 * puVar2[0xb];
    puVar2[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar41._48_4_ |
                  (uint)!bVar14 * puVar2[0xc];
    puVar2[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar41._52_4_ |
                  (uint)!bVar15 * puVar2[0xd];
    puVar2[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar41._56_4_ |
                  (uint)!bVar16 * puVar2[0xe];
    puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar41._60_4_ |
                  (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_1409f50d6:
    uVar31 = 0;
  }
  else {
    uVar23 = param_4 & 0x3f;
    if (uVar23 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1409f50d6;
      uVar23 = 0x40 - uVar23 >> 2;
      if ((longlong)param_5 < (longlong)uVar23) {
        uVar23 = param_5;
      }
    }
    uVar31 = param_5 - (param_5 - uVar23 & 0xf);
    if (uVar23 != 0) {
      auVar36 = vmovdqu32_avx512f(_DAT_14308e640);
      auVar37 = vmovdqu32_avx512f(_DAT_14308e680);
      auVar38 = vbroadcastss_avx512f(auVar49);
      auVar39 = vpbroadcastq_avx512f();
      uVar28 = 0;
      do {
        uVar17 = vpcmpgtq_avx512f(auVar39,auVar36);
        bVar19 = (byte)uVar17;
        uVar17 = vpcmpgtq_avx512f(auVar39,auVar37);
        bVar18 = (byte)uVar17;
        auVar36 = vpaddq_avx512f(auVar36,auVar41);
        auVar37 = vpaddq_avx512f(auVar37,auVar41);
        uVar35 = CONCAT11(bVar18,bVar19);
        piVar1 = (int *)(param_2 * lVar30 + param_1 + uVar28 * 4);
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
        auVar40 = vfmadd213ps_avx512f(auVar47,auVar38,
                                      *(undefined1 (*) [64])
                                       (param_2 * lVar22 + param_1 + uVar28 * 4));
        puVar2 = (uint *)(param_4 + uVar28 * 4);
        bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
        bVar11 = (bool)(bVar18 >> 1 & 1);
        bVar12 = (bool)(bVar18 >> 2 & 1);
        bVar13 = (bool)(bVar18 >> 3 & 1);
        bVar14 = (bool)(bVar18 >> 4 & 1);
        bVar15 = (bool)(bVar18 >> 5 & 1);
        bVar16 = (bool)(bVar18 >> 6 & 1);
        *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar40._0_4_ |
                  (uint)!(bool)(bVar19 & 1) * *puVar2;
        puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar40._4_4_ |
                    (uint)!bVar4 * puVar2[1];
        puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar40._8_4_ |
                    (uint)!bVar5 * puVar2[2];
        puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar40._12_4_ |
                    (uint)!bVar6 * puVar2[3];
        puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar40._16_4_ |
                    (uint)!bVar7 * puVar2[4];
        puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar40._20_4_ |
                    (uint)!bVar8 * puVar2[5];
        puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar40._24_4_ |
                    (uint)!bVar9 * puVar2[6];
        puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar40._28_4_ |
                    (uint)!bVar10 * puVar2[7];
        puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar40._32_4_ |
                    (uint)!(bool)(bVar18 & 1) * puVar2[8];
        puVar2[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar40._36_4_ |
                    (uint)!bVar11 * puVar2[9];
        puVar2[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar40._40_4_ |
                     (uint)!bVar12 * puVar2[10];
        puVar2[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar40._44_4_ |
                      (uint)!bVar13 * puVar2[0xb];
        puVar2[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar40._48_4_ |
                      (uint)!bVar14 * puVar2[0xc];
        puVar2[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar40._52_4_ |
                      (uint)!bVar15 * puVar2[0xd];
        puVar2[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar40._56_4_ |
                      (uint)!bVar16 * puVar2[0xe];
        puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar40._60_4_ |
                      (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
        uVar28 = uVar28 + 0x10;
      } while (uVar28 < uVar23);
      if (param_5 == uVar23) {
        return;
      }
    }
    if ((longlong)(uVar23 + 0x10) <= (longlong)uVar31) {
      auVar41 = vbroadcastss_avx512f(auVar49);
      do {
        auVar36 = vfmadd213ps_avx512f(*(undefined1 (*) [64])
                                       (param_2 * lVar30 + param_1 + uVar23 * 4),auVar41,
                                      *(undefined1 (*) [64])
                                       (param_2 * lVar22 + param_1 + uVar23 * 4));
        auVar36 = vmovntps_avx512f(auVar36);
        *(undefined1 (*) [64])(param_4 + uVar23 * 4) = auVar36;
        uVar23 = uVar23 + 0x10;
      } while (uVar23 < uVar31);
    }
  }
  auVar41 = _DAT_14308e600;
  if (uVar31 + 1 <= param_5) {
    auVar36 = vmovdqu32_avx512f(_DAT_14308e640);
    auVar37 = vmovdqu32_avx512f(_DAT_14308e680);
    auVar38 = vbroadcastss_avx512f(auVar49);
    uVar23 = 0;
    auVar39 = vpbroadcastq_avx512f();
    do {
      uVar17 = vpcmpgtq_avx512f(auVar39,auVar36);
      bVar19 = (byte)uVar17;
      uVar17 = vpcmpgtq_avx512f(auVar39,auVar37);
      bVar18 = (byte)uVar17;
      auVar36 = vpaddq_avx512f(auVar36,auVar41);
      auVar37 = vpaddq_avx512f(auVar37,auVar41);
      uVar35 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(param_1 + param_2 * lVar30 + uVar31 * 4 + uVar23 * 4);
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
      auVar40 = vfmadd213ps_avx512f(auVar48,auVar38,
                                    *(undefined1 (*) [64])
                                     (lVar22 * param_2 + param_1 + uVar31 * 4 + uVar23 * 4));
      puVar2 = (uint *)(param_4 + uVar31 * 4 + uVar23 * 4);
      bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
      bVar5 = (bool)((byte)(uVar35 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
      bVar7 = (bool)((byte)(uVar35 >> 4) & 1);
      bVar8 = (bool)((byte)(uVar35 >> 5) & 1);
      bVar9 = (bool)((byte)(uVar35 >> 6) & 1);
      bVar10 = (bool)((byte)(uVar35 >> 7) & 1);
      bVar11 = (bool)(bVar18 >> 1 & 1);
      bVar12 = (bool)(bVar18 >> 2 & 1);
      bVar13 = (bool)(bVar18 >> 3 & 1);
      bVar14 = (bool)(bVar18 >> 4 & 1);
      bVar15 = (bool)(bVar18 >> 5 & 1);
      bVar16 = (bool)(bVar18 >> 6 & 1);
      *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar40._0_4_ |
                (uint)!(bool)(bVar19 & 1) * *puVar2;
      puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar35 >> 1) & 1) * auVar40._4_4_ |
                  (uint)!bVar4 * puVar2[1];
      puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar35 >> 2) & 1) * auVar40._8_4_ |
                  (uint)!bVar5 * puVar2[2];
      puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar35 >> 3) & 1) * auVar40._12_4_ |
                  (uint)!bVar6 * puVar2[3];
      puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar40._16_4_ |
                  (uint)!bVar7 * puVar2[4];
      puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar35 >> 5) & 1) * auVar40._20_4_ |
                  (uint)!bVar8 * puVar2[5];
      puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar35 >> 6) & 1) * auVar40._24_4_ |
                  (uint)!bVar9 * puVar2[6];
      puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar35 >> 7) & 1) * auVar40._28_4_ |
                  (uint)!bVar10 * puVar2[7];
      puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar40._32_4_ |
                  (uint)!(bool)(bVar18 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar40._36_4_ |
                  (uint)!bVar11 * puVar2[9];
      puVar2[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar40._40_4_ |
                   (uint)!bVar12 * puVar2[10];
      puVar2[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar40._44_4_ |
                    (uint)!bVar13 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar40._48_4_ |
                    (uint)!bVar14 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar40._52_4_ |
                    (uint)!bVar15 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar40._56_4_ |
                    (uint)!bVar16 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar40._60_4_ |
                    (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
      uVar23 = uVar23 + 0x10;
    } while (uVar23 < param_5 - uVar31);
  }
  return;
}

