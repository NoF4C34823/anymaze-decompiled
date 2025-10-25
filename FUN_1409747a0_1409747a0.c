
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409747a0(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
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
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [64];
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ushort uVar37;
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
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  auVar43 = _DAT_14308dc40;
  lVar24 = (longlong)(param_5 >> 1);
  lVar25 = param_1 + lVar24 * -4;
  if (0 < (longlong)param_3) {
    auVar62 = ZEXT416(*param_4);
    if ((longlong)param_3 < 0x10) {
      uVar26 = 0;
    }
    else {
      if ((longlong)param_3 < 0x7b) {
        uVar19 = 0;
        uVar26 = param_3 & 0xfffffffffffffff0;
      }
      else {
        uVar19 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar19 != 0) && (uVar19 = 0x40 - uVar19 >> 2, (longlong)param_3 < (longlong)uVar19))
          {
            uVar19 = param_3;
          }
        }
        else {
          uVar19 = 0;
        }
        uVar26 = param_3 - (param_3 - uVar19 & 0xf);
        if (uVar19 != 0) {
          auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar39 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar40 = vpbroadcastq_avx512f();
          auVar41 = vbroadcastss_avx512f(auVar62);
          uVar32 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar17 = (byte)uVar16;
            auVar38 = vpaddq_avx512f(auVar38,auVar43);
            auVar39 = vpaddq_avx512f(auVar39,auVar43);
            uVar37 = CONCAT11(bVar17,bVar18);
            piVar1 = (int *)(lVar24 * -4 + param_1 + uVar32 * 4);
            auVar42._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar42._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar42._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar42._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar42._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar42._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar42._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar42._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar42._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar42._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar42._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar42._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar42._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar42._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar42._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar42._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_1 + lVar24 * 4 + uVar32 * 4);
            auVar44._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar44._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar44._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar44._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar44._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar44._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar44._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar44._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar44._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar44._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar44._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar44._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar44._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar44._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar44._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar44._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            auVar42 = vaddps_avx512f(auVar42,auVar44);
            auVar42 = vmulps_avx512f(auVar41,auVar42);
            puVar2 = (uint *)(param_2 + uVar32 * 4);
            bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
            bVar10 = (bool)(bVar17 >> 1 & 1);
            bVar11 = (bool)(bVar17 >> 2 & 1);
            bVar12 = (bool)(bVar17 >> 3 & 1);
            bVar13 = (bool)(bVar17 >> 4 & 1);
            bVar14 = (bool)(bVar17 >> 5 & 1);
            bVar15 = (bool)(bVar17 >> 6 & 1);
            *puVar2 = (uint)(bVar18 & 1) * auVar42._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * auVar42._4_4_ | (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * auVar42._8_4_ | (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * auVar42._12_4_ | (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * auVar42._16_4_ | (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * auVar42._20_4_ | (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * auVar42._24_4_ | (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * auVar42._28_4_ | (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar17 & 1) * auVar42._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * auVar42._36_4_ | (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * auVar42._40_4_ | (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * auVar42._44_4_ | (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * auVar42._48_4_ | (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * auVar42._52_4_ | (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * auVar42._56_4_ | (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar17 >> 7) * auVar42._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
            uVar32 = uVar32 + 0x10;
          } while (uVar32 < uVar19);
          if (param_3 == uVar19) goto LAB_14097498a;
        }
      }
      if ((longlong)(uVar19 + 0x10) <= (longlong)uVar26) {
        auVar43 = vbroadcastss_avx512f(auVar62);
        do {
          auVar38 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 * -4 + param_1 + uVar19 * 4),
                                   *(undefined1 (*) [64])(param_1 + lVar24 * 4 + uVar19 * 4));
          auVar38 = vmulps_avx512f(auVar43,auVar38);
          *(undefined1 (*) [64])(param_2 + uVar19 * 4) = auVar38;
          uVar19 = uVar19 + 0x10;
        } while (uVar19 < uVar26);
      }
    }
    if (uVar26 + 1 <= param_3) {
      auVar43 = vpbroadcastq_avx512f();
      auVar38 = vbroadcastss_avx512f(auVar62);
      uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dc80);
      bVar18 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dcc0);
      bVar17 = (byte)uVar16;
      uVar37 = CONCAT11(bVar17,bVar18);
      piVar1 = (int *)(lVar24 * -4 + param_1 + uVar26 * 4);
      auVar43._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
      auVar43._0_4_ = (uint)(bVar18 & 1) * *piVar1;
      auVar43._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
      auVar43._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
      auVar43._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
      auVar43._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
      auVar43._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
      auVar43._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
      auVar43._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
      auVar43._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
      auVar43._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
      auVar43._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
      auVar43._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
      auVar43._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
      auVar43._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
      auVar43._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
      piVar1 = (int *)(param_1 + lVar24 * 4 + uVar26 * 4);
      auVar39._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
      auVar39._0_4_ = (uint)(bVar18 & 1) * *piVar1;
      auVar39._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
      auVar39._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
      auVar39._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
      auVar39._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
      auVar39._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
      auVar39._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
      auVar39._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
      auVar39._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
      auVar39._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
      auVar39._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
      auVar39._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
      auVar39._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
      auVar39._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
      auVar39._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
      auVar43 = vaddps_avx512f(auVar43,auVar39);
      auVar43 = vmulps_avx512f(auVar38,auVar43);
      puVar2 = (uint *)(param_2 + uVar26 * 4);
      bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
      bVar10 = (bool)(bVar17 >> 1 & 1);
      bVar11 = (bool)(bVar17 >> 2 & 1);
      bVar12 = (bool)(bVar17 >> 3 & 1);
      bVar13 = (bool)(bVar17 >> 4 & 1);
      bVar14 = (bool)(bVar17 >> 5 & 1);
      bVar15 = (bool)(bVar17 >> 6 & 1);
      *puVar2 = (uint)(bVar18 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar2;
      puVar2[1] = (uint)bVar3 * auVar43._4_4_ | (uint)!bVar3 * puVar2[1];
      puVar2[2] = (uint)bVar4 * auVar43._8_4_ | (uint)!bVar4 * puVar2[2];
      puVar2[3] = (uint)bVar5 * auVar43._12_4_ | (uint)!bVar5 * puVar2[3];
      puVar2[4] = (uint)bVar6 * auVar43._16_4_ | (uint)!bVar6 * puVar2[4];
      puVar2[5] = (uint)bVar7 * auVar43._20_4_ | (uint)!bVar7 * puVar2[5];
      puVar2[6] = (uint)bVar8 * auVar43._24_4_ | (uint)!bVar8 * puVar2[6];
      puVar2[7] = (uint)bVar9 * auVar43._28_4_ | (uint)!bVar9 * puVar2[7];
      puVar2[8] = (uint)(bVar17 & 1) * auVar43._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar10 * auVar43._36_4_ | (uint)!bVar10 * puVar2[9];
      puVar2[10] = (uint)bVar11 * auVar43._40_4_ | (uint)!bVar11 * puVar2[10];
      puVar2[0xb] = (uint)bVar12 * auVar43._44_4_ | (uint)!bVar12 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar13 * auVar43._48_4_ | (uint)!bVar13 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar14 * auVar43._52_4_ | (uint)!bVar14 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar15 * auVar43._56_4_ | (uint)!bVar15 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar17 >> 7) * auVar43._60_4_ | (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
    }
  }
LAB_14097498a:
  auVar43 = _DAT_14308dc40;
  if (1 < lVar24) {
    uVar26 = lVar24 - 1U >> 1;
    lVar31 = 0;
    lVar27 = 1;
    lVar33 = 0;
    if (uVar26 != 0) {
      lVar27 = param_1 + lVar24 * 4;
      uVar35 = param_2 & 0x3f;
      lVar28 = lVar24 * -4 + param_1;
      auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar39 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar32 = 0x40 - uVar35 >> 2;
      lVar30 = lVar27;
      uVar19 = 0;
      do {
        uVar34 = uVar19;
        lVar25 = lVar28 + 8;
        if (0 < (longlong)param_3) {
          auVar61 = ZEXT416(*(uint *)(lVar31 + 8 + (longlong)param_4));
          auVar62 = ZEXT416(*(uint *)(lVar31 + 4 + (longlong)param_4));
          if ((longlong)param_3 < 0x10) {
            uVar19 = 0;
          }
          else {
            if ((longlong)param_3 < 0x4b) {
              uVar36 = 0;
              uVar19 = param_3 & 0xfffffffffffffff0;
            }
            else {
              if ((param_2 & 3) == 0) {
                uVar36 = uVar35;
                if ((uVar35 != 0) && (uVar36 = uVar32, (longlong)param_3 < (longlong)uVar32)) {
                  uVar36 = param_3;
                }
              }
              else {
                uVar36 = 0;
              }
              uVar19 = param_3 - (param_3 - uVar36 & 0xf);
              if (uVar36 != 0) {
                uVar20 = 0;
                auVar42 = vbroadcastss_avx512f(auVar61);
                auVar44 = vpbroadcastq_avx512f();
                auVar45 = vbroadcastss_avx512f(auVar62);
                auVar40 = auVar39;
                auVar41 = auVar38;
                do {
                  uVar16 = vpcmpgtq_avx512f(auVar44,auVar41);
                  bVar18 = (byte)uVar16;
                  uVar16 = vpcmpgtq_avx512f(auVar44,auVar40);
                  bVar17 = (byte)uVar16;
                  auVar41 = vpaddq_avx512f(auVar41,auVar43);
                  auVar40 = vpaddq_avx512f(auVar40,auVar43);
                  uVar37 = CONCAT11(bVar17,bVar18);
                  piVar1 = (int *)(lVar28 + 4 + uVar20 * 4);
                  auVar49._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                  auVar49._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                  auVar49._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                  auVar49._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                  auVar49._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                  auVar49._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                  auVar49._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                  auVar49._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                  auVar49._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                  auVar49._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                  auVar49._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                  auVar49._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                  auVar49._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                  auVar49._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                  auVar49._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                  auVar49._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar30 + -4 + uVar20 * 4);
                  auVar50._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                  auVar50._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                  auVar50._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                  auVar50._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                  auVar50._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                  auVar50._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                  auVar50._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                  auVar50._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                  auVar50._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                  auVar50._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                  auVar50._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                  auVar50._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                  auVar50._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                  auVar50._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                  auVar50._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                  auVar50._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(param_2 + uVar20 * 4);
                  auVar46._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                  auVar46._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                  auVar46._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                  auVar46._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                  auVar46._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                  auVar46._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                  auVar46._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                  auVar46._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                  auVar46._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                  auVar46._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                  auVar46._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                  auVar46._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                  auVar46._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                  auVar46._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                  auVar46._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                  auVar46._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar28 + 8 + uVar20 * 4);
                  auVar47._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                  auVar47._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                  auVar47._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                  auVar47._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                  auVar47._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                  auVar47._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                  auVar47._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                  auVar47._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                  auVar47._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                  auVar47._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                  auVar47._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                  auVar47._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                  auVar47._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                  auVar47._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                  auVar47._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                  auVar47._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar30 + -8 + uVar20 * 4);
                  auVar48._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                  auVar48._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                  auVar48._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                  auVar48._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                  auVar48._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                  auVar48._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                  auVar48._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                  auVar48._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                  auVar48._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                  auVar48._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                  auVar48._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                  auVar48._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                  auVar48._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                  auVar48._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                  auVar48._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                  auVar48._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                  auVar49 = vaddps_avx512f(auVar49,auVar50);
                  auVar50 = vaddps_avx512f(auVar47,auVar48);
                  auVar49 = vfmadd231ps_avx512f(auVar46,auVar49,auVar45);
                  auVar51._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * auVar49._4_4_;
                  auVar51._0_4_ = (uint)(bVar18 & 1) * auVar49._0_4_;
                  auVar51._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * auVar49._8_4_;
                  auVar51._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * auVar49._12_4_;
                  auVar51._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * auVar49._16_4_;
                  auVar51._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * auVar49._20_4_;
                  auVar51._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * auVar49._24_4_;
                  auVar51._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * auVar49._28_4_;
                  auVar51._32_4_ = (uint)(bVar17 & 1) * auVar49._32_4_;
                  auVar51._36_4_ = (uint)(bVar17 >> 1 & 1) * auVar49._36_4_;
                  auVar51._40_4_ = (uint)(bVar17 >> 2 & 1) * auVar49._40_4_;
                  auVar51._44_4_ = (uint)(bVar17 >> 3 & 1) * auVar49._44_4_;
                  auVar51._48_4_ = (uint)(bVar17 >> 4 & 1) * auVar49._48_4_;
                  auVar51._52_4_ = (uint)(bVar17 >> 5 & 1) * auVar49._52_4_;
                  auVar51._56_4_ = (uint)(bVar17 >> 6 & 1) * auVar49._56_4_;
                  auVar51._60_4_ = (uint)(bVar17 >> 7) * auVar49._60_4_;
                  auVar49 = vfmadd231ps_avx512f(auVar51,auVar50,auVar42);
                  puVar2 = (uint *)(param_2 + uVar20 * 4);
                  bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
                  bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
                  bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
                  bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
                  bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
                  bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
                  bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
                  bVar10 = (bool)(bVar17 >> 1 & 1);
                  bVar11 = (bool)(bVar17 >> 2 & 1);
                  bVar12 = (bool)(bVar17 >> 3 & 1);
                  bVar13 = (bool)(bVar17 >> 4 & 1);
                  bVar14 = (bool)(bVar17 >> 5 & 1);
                  bVar15 = (bool)(bVar17 >> 6 & 1);
                  *puVar2 = (uint)(bVar18 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar2
                  ;
                  puVar2[1] = (uint)bVar3 * auVar49._4_4_ | (uint)!bVar3 * puVar2[1];
                  puVar2[2] = (uint)bVar4 * auVar49._8_4_ | (uint)!bVar4 * puVar2[2];
                  puVar2[3] = (uint)bVar5 * auVar49._12_4_ | (uint)!bVar5 * puVar2[3];
                  puVar2[4] = (uint)bVar6 * auVar49._16_4_ | (uint)!bVar6 * puVar2[4];
                  puVar2[5] = (uint)bVar7 * auVar49._20_4_ | (uint)!bVar7 * puVar2[5];
                  puVar2[6] = (uint)bVar8 * auVar49._24_4_ | (uint)!bVar8 * puVar2[6];
                  puVar2[7] = (uint)bVar9 * auVar49._28_4_ | (uint)!bVar9 * puVar2[7];
                  puVar2[8] = (uint)(bVar17 & 1) * auVar49._32_4_ |
                              (uint)!(bool)(bVar17 & 1) * puVar2[8];
                  puVar2[9] = (uint)bVar10 * auVar49._36_4_ | (uint)!bVar10 * puVar2[9];
                  puVar2[10] = (uint)bVar11 * auVar49._40_4_ | (uint)!bVar11 * puVar2[10];
                  puVar2[0xb] = (uint)bVar12 * auVar49._44_4_ | (uint)!bVar12 * puVar2[0xb];
                  puVar2[0xc] = (uint)bVar13 * auVar49._48_4_ | (uint)!bVar13 * puVar2[0xc];
                  puVar2[0xd] = (uint)bVar14 * auVar49._52_4_ | (uint)!bVar14 * puVar2[0xd];
                  puVar2[0xe] = (uint)bVar15 * auVar49._56_4_ | (uint)!bVar15 * puVar2[0xe];
                  puVar2[0xf] = (uint)(bVar17 >> 7) * auVar49._60_4_ |
                                (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
                  uVar20 = uVar20 + 0x10;
                } while (uVar20 < uVar36);
                if (param_3 == uVar36) goto LAB_140974caa;
              }
            }
            if ((longlong)(uVar36 + 0x10) <= (longlong)uVar19) {
              pauVar29 = (undefined1 (*) [64])(param_2 + uVar36 * 4);
              lVar22 = lVar33 + uVar36 * 4;
              lVar21 = lVar31 + uVar36 * 4;
              auVar40 = vbroadcastss_avx512f(auVar61);
              auVar41 = vbroadcastss_avx512f(auVar62);
              lVar23 = lVar24 * -4 + param_1;
              do {
                uVar36 = uVar36 + 0x10;
                auVar42 = vaddps_avx512f(*(undefined1 (*) [64])(lVar21 + 4 + lVar23),
                                         *(undefined1 (*) [64])(lVar22 + -4 + lVar27));
                auVar44 = vaddps_avx512f(*(undefined1 (*) [64])(lVar21 + 8 + lVar23),
                                         *(undefined1 (*) [64])(lVar22 + -8 + lVar27));
                auVar42 = vfmadd213ps_avx512f(auVar42,auVar41,*pauVar29);
                auVar42 = vfmadd231ps_avx512f(auVar42,auVar44,auVar40);
                lVar21 = lVar21 + 0x40;
                *pauVar29 = auVar42;
                pauVar29 = pauVar29 + 1;
                lVar22 = lVar22 + 0x40;
              } while (uVar36 < uVar19);
            }
          }
          if (uVar19 + 1 <= param_3) {
            auVar40 = vbroadcastss_avx512f(auVar61);
            auVar41 = vpbroadcastq_avx512f();
            auVar42 = vbroadcastss_avx512f(auVar62);
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar38);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar39);
            bVar17 = (byte)uVar16;
            uVar37 = CONCAT11(bVar17,bVar18);
            piVar1 = (int *)(lVar28 + 4 + uVar19 * 4);
            auVar41._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar41._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar41._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar41._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar41._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar41._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar41._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar41._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar41._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar41._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar41._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar41._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar41._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar41._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar41._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar41._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar30 + -4 + uVar19 * 4);
            auVar45._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar45._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar45._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar45._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar45._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar45._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar45._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar45._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar45._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar45._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar45._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar45._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar45._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar45._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar45._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar45._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 + uVar19 * 4);
            auVar52._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar52._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar52._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar52._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar52._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar52._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar52._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar52._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar52._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar52._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar52._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar52._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar52._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar52._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar52._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar52._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar28 + 8 + uVar19 * 4);
            auVar53._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar53._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar53._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar53._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar53._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar53._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar53._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar53._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar53._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar53._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar53._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar53._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar53._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar53._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar53._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar53._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar30 + -8 + uVar19 * 4);
            auVar54._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar54._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar54._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar54._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar54._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar54._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar54._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar54._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar54._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar54._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar54._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar54._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar54._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar54._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar54._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar54._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            auVar41 = vaddps_avx512f(auVar41,auVar45);
            auVar44 = vaddps_avx512f(auVar53,auVar54);
            auVar41 = vfmadd213ps_avx512f(auVar42,auVar41,auVar52);
            auVar55._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * auVar41._4_4_;
            auVar55._0_4_ = (uint)(bVar18 & 1) * auVar41._0_4_;
            auVar55._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * auVar41._8_4_;
            auVar55._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * auVar41._12_4_;
            auVar55._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * auVar41._16_4_;
            auVar55._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * auVar41._20_4_;
            auVar55._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * auVar41._24_4_;
            auVar55._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * auVar41._28_4_;
            auVar55._32_4_ = (uint)(bVar17 & 1) * auVar41._32_4_;
            auVar55._36_4_ = (uint)(bVar17 >> 1 & 1) * auVar41._36_4_;
            auVar55._40_4_ = (uint)(bVar17 >> 2 & 1) * auVar41._40_4_;
            auVar55._44_4_ = (uint)(bVar17 >> 3 & 1) * auVar41._44_4_;
            auVar55._48_4_ = (uint)(bVar17 >> 4 & 1) * auVar41._48_4_;
            auVar55._52_4_ = (uint)(bVar17 >> 5 & 1) * auVar41._52_4_;
            auVar55._56_4_ = (uint)(bVar17 >> 6 & 1) * auVar41._56_4_;
            auVar55._60_4_ = (uint)(bVar17 >> 7) * auVar41._60_4_;
            auVar40 = vfmadd213ps_avx512f(auVar40,auVar44,auVar55);
            puVar2 = (uint *)(param_2 + uVar19 * 4);
            bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
            bVar10 = (bool)(bVar17 >> 1 & 1);
            bVar11 = (bool)(bVar17 >> 2 & 1);
            bVar12 = (bool)(bVar17 >> 3 & 1);
            bVar13 = (bool)(bVar17 >> 4 & 1);
            bVar14 = (bool)(bVar17 >> 5 & 1);
            bVar15 = (bool)(bVar17 >> 6 & 1);
            *puVar2 = (uint)(bVar18 & 1) * auVar40._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * auVar40._4_4_ | (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * auVar40._8_4_ | (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * auVar40._12_4_ | (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * auVar40._16_4_ | (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * auVar40._20_4_ | (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * auVar40._24_4_ | (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * auVar40._28_4_ | (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar17 & 1) * auVar40._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * auVar40._36_4_ | (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * auVar40._40_4_ | (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * auVar40._44_4_ | (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * auVar40._48_4_ | (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * auVar40._52_4_ | (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * auVar40._56_4_ | (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar17 >> 7) * auVar40._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
          }
        }
LAB_140974caa:
        uVar19 = uVar34 + 1;
        lVar28 = lVar28 + 8;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + -8;
        lVar33 = lVar33 + -8;
      } while (uVar19 < uVar26);
      lVar27 = uVar34 + 2 + uVar19;
    }
    auVar43 = _DAT_14308dc40;
    if (lVar24 != lVar27) {
      lVar25 = lVar24 * -4 + param_1 + lVar27 * 4;
      if (0 < (longlong)param_3) {
        auVar62 = ZEXT416(param_4[lVar27]);
        if ((longlong)param_3 < 0x10) {
          uVar26 = 0;
        }
        else {
          if ((longlong)param_3 < 0x41) {
            uVar19 = 0;
            uVar26 = param_3 & 0xfffffffffffffff0;
          }
          else {
            uVar19 = param_2 & 0x3f;
            if ((param_2 & 3) == 0) {
              if ((uVar19 != 0) &&
                 (uVar19 = 0x40 - uVar19 >> 2, (longlong)param_3 < (longlong)uVar19)) {
                uVar19 = param_3;
              }
            }
            else {
              uVar19 = 0;
            }
            uVar26 = param_3 - (param_3 - uVar19 & 0xf);
            if (uVar19 != 0) {
              auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar39 = vmovdqu32_avx512f(_DAT_14308dcc0);
              auVar40 = vpbroadcastq_avx512f();
              auVar41 = vbroadcastss_avx512f(auVar62);
              uVar32 = 0;
              do {
                uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
                bVar18 = (byte)uVar16;
                uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
                bVar17 = (byte)uVar16;
                auVar38 = vpaddq_avx512f(auVar38,auVar43);
                auVar39 = vpaddq_avx512f(auVar39,auVar43);
                uVar37 = CONCAT11(bVar17,bVar18);
                piVar1 = (int *)(lVar25 + uVar32 * 4);
                auVar56._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                auVar56._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                auVar56._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                auVar56._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                auVar56._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                auVar56._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                auVar56._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                auVar56._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                auVar56._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                auVar56._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                auVar56._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                auVar56._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                auVar56._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                auVar56._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                auVar56._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                auVar56._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                piVar1 = (int *)(param_1 + lVar24 * 4 + lVar27 * -4 + uVar32 * 4);
                auVar57._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
                auVar57._0_4_ = (uint)(bVar18 & 1) * *piVar1;
                auVar57._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
                auVar57._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
                auVar57._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
                auVar57._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
                auVar57._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
                auVar57._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
                auVar57._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
                auVar57._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
                auVar57._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
                auVar57._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
                auVar57._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
                auVar57._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
                auVar57._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
                auVar57._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
                auVar42 = vaddps_avx512f(auVar56,auVar57);
                auVar42 = vfmadd213ps_avx512f(auVar42,auVar41,
                                              *(undefined1 (*) [64])(param_2 + uVar32 * 4));
                puVar2 = (uint *)(param_2 + uVar32 * 4);
                bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
                bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
                bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
                bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
                bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
                bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
                bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
                bVar10 = (bool)(bVar17 >> 1 & 1);
                bVar11 = (bool)(bVar17 >> 2 & 1);
                bVar12 = (bool)(bVar17 >> 3 & 1);
                bVar13 = (bool)(bVar17 >> 4 & 1);
                bVar14 = (bool)(bVar17 >> 5 & 1);
                bVar15 = (bool)(bVar17 >> 6 & 1);
                *puVar2 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar42._0_4_ |
                          (uint)!(bool)(bVar18 & 1) * *puVar2;
                puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar42._4_4_ |
                            (uint)!bVar3 * puVar2[1];
                puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar42._8_4_ |
                            (uint)!bVar4 * puVar2[2];
                puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar42._12_4_ |
                            (uint)!bVar5 * puVar2[3];
                puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar42._16_4_ |
                            (uint)!bVar6 * puVar2[4];
                puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar42._20_4_ |
                            (uint)!bVar7 * puVar2[5];
                puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar42._24_4_ |
                            (uint)!bVar8 * puVar2[6];
                puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar42._28_4_ |
                            (uint)!bVar9 * puVar2[7];
                puVar2[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar42._32_4_ |
                            (uint)!(bool)(bVar17 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar42._36_4_ |
                            (uint)!bVar10 * puVar2[9];
                puVar2[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar42._40_4_ |
                             (uint)!bVar11 * puVar2[10];
                puVar2[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar42._44_4_ |
                              (uint)!bVar12 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar42._48_4_ |
                              (uint)!bVar13 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar42._52_4_ |
                              (uint)!bVar14 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar42._56_4_ |
                              (uint)!bVar15 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar42._60_4_ |
                              (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
                uVar32 = uVar32 + 0x10;
              } while (uVar32 < uVar19);
              if (param_3 == uVar19) goto LAB_140974ed1;
            }
          }
          if ((longlong)(uVar19 + 0x10) <= (longlong)uVar26) {
            auVar43 = vbroadcastss_avx512f(auVar62);
            do {
              auVar38 = vaddps_avx512f(*(undefined1 (*) [64])(lVar25 + uVar19 * 4),
                                       *(undefined1 (*) [64])
                                        (param_1 + lVar24 * 4 + lVar27 * -4 + uVar19 * 4));
              auVar38 = vfmadd213ps_avx512f(auVar38,auVar43,
                                            *(undefined1 (*) [64])(param_2 + uVar19 * 4));
              *(undefined1 (*) [64])(param_2 + uVar19 * 4) = auVar38;
              uVar19 = uVar19 + 0x10;
            } while (uVar19 < uVar26);
          }
        }
        if (uVar26 + 1 <= param_3) {
          auVar43 = vpbroadcastq_avx512f();
          auVar38 = vbroadcastss_avx512f(auVar62);
          uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dc80);
          bVar18 = (byte)uVar16;
          uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dcc0);
          bVar17 = (byte)uVar16;
          uVar37 = CONCAT11(bVar17,bVar18);
          piVar1 = (int *)(param_1 + lVar24 * 4 + lVar27 * -4 + uVar26 * 4);
          auVar40._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
          auVar40._0_4_ = (uint)(bVar18 & 1) * *piVar1;
          auVar40._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
          auVar40._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
          auVar40._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
          auVar40._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
          auVar40._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
          auVar40._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
          auVar40._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
          auVar40._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
          auVar40._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
          auVar40._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
          auVar40._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
          auVar40._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
          auVar40._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
          auVar40._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
          piVar1 = (int *)(lVar25 + uVar26 * 4);
          auVar58._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
          auVar58._0_4_ = (uint)(bVar18 & 1) * *piVar1;
          auVar58._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
          auVar58._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
          auVar58._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
          auVar58._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
          auVar58._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
          auVar58._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
          auVar58._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
          auVar58._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
          auVar58._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
          auVar58._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
          auVar58._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
          auVar58._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
          auVar58._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
          auVar58._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
          auVar43 = vaddps_avx512f(auVar58,auVar40);
          auVar43 = vfmadd213ps_avx512f(auVar38,auVar43,*(undefined1 (*) [64])(param_2 + uVar26 * 4)
                                       );
          puVar2 = (uint *)(param_2 + uVar26 * 4);
          bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
          bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
          bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
          bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
          bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
          bVar10 = (bool)(bVar17 >> 1 & 1);
          bVar11 = (bool)(bVar17 >> 2 & 1);
          bVar12 = (bool)(bVar17 >> 3 & 1);
          bVar13 = (bool)(bVar17 >> 4 & 1);
          bVar14 = (bool)(bVar17 >> 5 & 1);
          bVar15 = (bool)(bVar17 >> 6 & 1);
          *puVar2 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar43._0_4_ |
                    (uint)!(bool)(bVar18 & 1) * *puVar2;
          puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_ |
                      (uint)!bVar3 * puVar2[1];
          puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_ |
                      (uint)!bVar4 * puVar2[2];
          puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_ |
                      (uint)!bVar5 * puVar2[3];
          puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_ |
                      (uint)!bVar6 * puVar2[4];
          puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_ |
                      (uint)!bVar7 * puVar2[5];
          puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_ |
                      (uint)!bVar8 * puVar2[6];
          puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar43._28_4_ |
                      (uint)!bVar9 * puVar2[7];
          puVar2[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar43._32_4_ |
                      (uint)!(bool)(bVar17 & 1) * puVar2[8];
          puVar2[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar43._36_4_ |
                      (uint)!bVar10 * puVar2[9];
          puVar2[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar43._40_4_ |
                       (uint)!bVar11 * puVar2[10];
          puVar2[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar43._44_4_ |
                        (uint)!bVar12 * puVar2[0xb];
          puVar2[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar43._48_4_ |
                        (uint)!bVar13 * puVar2[0xc];
          puVar2[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar43._52_4_ |
                        (uint)!bVar14 * puVar2[0xd];
          puVar2[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar43._56_4_ |
                        (uint)!bVar15 * puVar2[0xe];
          puVar2[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar43._60_4_ |
                        (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
        }
      }
    }
  }
LAB_140974ed1:
  auVar43 = _DAT_14308dc40;
  if (0 < (longlong)param_3) {
    auVar62 = ZEXT416(param_4[lVar24]);
    if ((longlong)param_3 < 0x10) {
      uVar26 = 0;
    }
    else {
      if ((longlong)param_3 < 0x27) {
        uVar19 = 0;
        uVar26 = param_3 & 0xfffffffffffffff0;
      }
      else {
        uVar19 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar19 != 0) && (uVar19 = 0x40 - uVar19 >> 2, (longlong)param_3 < (longlong)uVar19))
          {
            uVar19 = param_3;
          }
        }
        else {
          uVar19 = 0;
        }
        uVar26 = param_3 - (param_3 - uVar19 & 0xf);
        if (uVar19 != 0) {
          uVar32 = 0;
          auVar38 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar39 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar40 = vpbroadcastq_avx512f();
          auVar41 = vbroadcastss_avx512f(auVar62);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar17 = (byte)uVar16;
            auVar38 = vpaddq_avx512f(auVar38,auVar43);
            auVar39 = vpaddq_avx512f(auVar39,auVar43);
            uVar37 = CONCAT11(bVar17,bVar18);
            piVar1 = (int *)(lVar25 + 4 + uVar32 * 4);
            auVar59._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
            auVar59._0_4_ = (uint)(bVar18 & 1) * *piVar1;
            auVar59._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
            auVar59._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
            auVar59._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
            auVar59._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
            auVar59._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
            auVar59._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
            auVar59._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
            auVar59._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
            auVar59._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
            auVar59._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
            auVar59._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
            auVar59._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
            auVar59._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
            auVar59._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
            auVar42 = vfmadd213ps_avx512f(auVar59,auVar41,
                                          *(undefined1 (*) [64])(param_2 + uVar32 * 4));
            puVar2 = (uint *)(param_2 + uVar32 * 4);
            bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
            bVar10 = (bool)(bVar17 >> 1 & 1);
            bVar11 = (bool)(bVar17 >> 2 & 1);
            bVar12 = (bool)(bVar17 >> 3 & 1);
            bVar13 = (bool)(bVar17 >> 4 & 1);
            bVar14 = (bool)(bVar17 >> 5 & 1);
            bVar15 = (bool)(bVar17 >> 6 & 1);
            *puVar2 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar42._0_4_ |
                      (uint)!(bool)(bVar18 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar42._4_4_ |
                        (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar42._8_4_ |
                        (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar42._12_4_ |
                        (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar42._16_4_ |
                        (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar42._20_4_ |
                        (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar42._24_4_ |
                        (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar42._28_4_ |
                        (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar42._32_4_ |
                        (uint)!(bool)(bVar17 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar42._36_4_ |
                        (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar42._40_4_ |
                         (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar42._44_4_ |
                          (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar42._48_4_ |
                          (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar42._52_4_ |
                          (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar42._56_4_ |
                          (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar42._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
            uVar32 = uVar32 + 0x10;
          } while (uVar32 < uVar19);
          if (param_3 == uVar19) {
            return;
          }
        }
      }
      if ((longlong)(uVar19 + 0x10) <= (longlong)uVar26) {
        auVar43 = vbroadcastss_avx512f(auVar62);
        do {
          auVar38 = vfmadd213ps_avx512f(*(undefined1 (*) [64])(lVar25 + 4 + uVar19 * 4),auVar43,
                                        *(undefined1 (*) [64])(param_2 + uVar19 * 4));
          *(undefined1 (*) [64])(param_2 + uVar19 * 4) = auVar38;
          uVar19 = uVar19 + 0x10;
        } while (uVar19 < uVar26);
      }
    }
    if (uVar26 + 1 <= param_3) {
      auVar43 = vpbroadcastq_avx512f();
      auVar38 = vbroadcastss_avx512f(auVar62);
      uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dc80);
      bVar18 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar43,_DAT_14308dcc0);
      bVar17 = (byte)uVar16;
      uVar37 = CONCAT11(bVar17,bVar18);
      piVar1 = (int *)(lVar25 + 4 + uVar26 * 4);
      auVar60._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar1[1];
      auVar60._0_4_ = (uint)(bVar18 & 1) * *piVar1;
      auVar60._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar1[2];
      auVar60._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar1[3];
      auVar60._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar1[4];
      auVar60._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar1[5];
      auVar60._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar1[6];
      auVar60._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar1[7];
      auVar60._32_4_ = (uint)(bVar17 & 1) * piVar1[8];
      auVar60._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar1[9];
      auVar60._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar1[10];
      auVar60._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar1[0xb];
      auVar60._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar1[0xc];
      auVar60._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar1[0xd];
      auVar60._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar1[0xe];
      auVar60._60_4_ = (uint)(bVar17 >> 7) * piVar1[0xf];
      auVar43 = vfmadd213ps_avx512f(auVar38,auVar60,*(undefined1 (*) [64])(param_2 + uVar26 * 4));
      puVar2 = (uint *)(param_2 + uVar26 * 4);
      bVar3 = (bool)((byte)(uVar37 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar37 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar37 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar37 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar37 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar37 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar37 >> 7) & 1);
      bVar10 = (bool)(bVar17 >> 1 & 1);
      bVar11 = (bool)(bVar17 >> 2 & 1);
      bVar12 = (bool)(bVar17 >> 3 & 1);
      bVar13 = (bool)(bVar17 >> 4 & 1);
      bVar14 = (bool)(bVar17 >> 5 & 1);
      bVar15 = (bool)(bVar17 >> 6 & 1);
      *puVar2 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar43._0_4_ |
                (uint)!(bool)(bVar18 & 1) * *puVar2;
      puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_ |
                  (uint)!bVar3 * puVar2[1];
      puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_ |
                  (uint)!bVar4 * puVar2[2];
      puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_ |
                  (uint)!bVar5 * puVar2[3];
      puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_ |
                  (uint)!bVar6 * puVar2[4];
      puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_ |
                  (uint)!bVar7 * puVar2[5];
      puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_ |
                  (uint)!bVar8 * puVar2[6];
      puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar43._28_4_ |
                  (uint)!bVar9 * puVar2[7];
      puVar2[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar43._32_4_ |
                  (uint)!(bool)(bVar17 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar43._36_4_ |
                  (uint)!bVar10 * puVar2[9];
      puVar2[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar43._40_4_ |
                   (uint)!bVar11 * puVar2[10];
      puVar2[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar43._44_4_ |
                    (uint)!bVar12 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar43._48_4_ |
                    (uint)!bVar13 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar43._52_4_ |
                    (uint)!bVar14 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar43._56_4_ |
                    (uint)!bVar15 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar43._60_4_ |
                    (uint)!(bool)(bVar17 >> 7) * puVar2[0xf];
    }
  }
  return;
}

