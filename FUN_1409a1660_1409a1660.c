
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409a1660(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
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
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ushort uVar37;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar38 [32];
  
  auVar63 = _DAT_14308df80;
  lVar23 = (longlong)(param_5 >> 1);
  lVar19 = lVar23 * -2 + param_1;
  if (0 < (longlong)param_3) {
    auVar69 = ZEXT416(*param_4);
    if ((longlong)param_3 < 0x10) {
      uVar26 = 0;
    }
    else {
      if ((longlong)param_3 < 0x86) {
        uVar27 = 0;
        uVar26 = param_3 & 0xfffffffffffffff0;
      }
      else {
        uVar27 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar27 != 0) && (uVar27 = 0x40 - uVar27 >> 2, (longlong)param_3 < (longlong)uVar27))
          {
            uVar27 = param_3;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar26 = param_3 - (param_3 - uVar27 & 0xf);
        if (uVar27 != 0) {
          uVar33 = 0;
          auVar57 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar58 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar59 = vpbroadcastq_avx512f();
          auVar60 = vbroadcastss_avx512f(auVar69);
          lVar29 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar59,auVar57);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar59,auVar58);
            bVar17 = (byte)uVar16;
            auVar57 = vpaddq_avx512f(auVar57,auVar63);
            auVar58 = vpaddq_avx512f(auVar58,auVar63);
            uVar37 = CONCAT11(bVar17,bVar18);
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar29 + lVar23 * -2 + param_1));
            auVar39._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar39._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar39._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar39._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar39._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar39._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar39._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar39._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar39._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar39._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar39._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar39._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar39._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar39._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar39._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar39._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar29 + param_1 + lVar23 * 2));
            auVar40._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar40._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar40._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar40._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar40._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar40._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar40._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar40._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar40._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar40._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar40._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar40._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar40._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar40._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar40._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar40._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            auVar61 = vpmovzxwd_avx512f(auVar39);
            auVar62 = vpmovzxwd_avx512f(auVar40);
            auVar61 = vpaddd_avx512f(auVar61,auVar62);
            lVar29 = lVar29 + 0x20;
            auVar61 = vcvtdq2ps_avx512f(auVar61);
            auVar61 = vmulps_avx512f(auVar60,auVar61);
            puVar1 = (uint *)(param_2 + uVar33 * 4);
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
            *puVar1 = (uint)(bVar18 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * auVar61._4_4_ | (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * auVar61._8_4_ | (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar17 & 1) * auVar61._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * auVar61._36_4_ | (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * auVar61._40_4_ | (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * auVar61._44_4_ | (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * auVar61._48_4_ | (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * auVar61._52_4_ | (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * auVar61._56_4_ | (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar17 >> 7) * auVar61._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
            uVar33 = uVar33 + 0x10;
          } while (uVar33 < uVar27);
          if (param_3 == uVar27) goto LAB_1409a1884;
        }
      }
      if ((longlong)(uVar27 + 0x10) <= (longlong)uVar26) {
        auVar63 = vbroadcastss_avx512f(auVar69);
        do {
          auVar57 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar23 * -2 + param_1 + uVar27 * 2));
          auVar58 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(param_1 + lVar23 * 2 + uVar27 * 2));
          auVar57 = vpaddd_avx512f(auVar57,auVar58);
          auVar57 = vcvtdq2ps_avx512f(auVar57);
          auVar57 = vmulps_avx512f(auVar63,auVar57);
          *(undefined1 (*) [64])(param_2 + uVar27 * 4) = auVar57;
          uVar27 = uVar27 + 0x10;
        } while (uVar27 < uVar26);
      }
    }
    if (uVar26 + 1 <= param_3) {
      auVar63 = vpbroadcastq_avx512f();
      auVar57 = vbroadcastss_avx512f(auVar69);
      uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308dfc0);
      bVar18 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308e000);
      bVar17 = (byte)uVar16;
      uVar37 = CONCAT11(bVar17,bVar18);
      auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar23 * -2 + param_1 + uVar26 * 2));
      auVar41._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
      auVar41._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
      auVar41._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
      auVar41._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
      auVar41._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
      auVar41._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
      auVar41._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
      auVar41._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
      auVar41._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
      auVar41._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
      auVar41._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
      auVar41._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
      auVar41._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
      auVar41._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
      auVar41._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
      auVar41._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
      auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(param_1 + lVar23 * 2 + uVar26 * 2));
      auVar42._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
      auVar42._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
      auVar42._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
      auVar42._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
      auVar42._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
      auVar42._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
      auVar42._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
      auVar42._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
      auVar42._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
      auVar42._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
      auVar42._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
      auVar42._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
      auVar42._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
      auVar42._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
      auVar42._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
      auVar42._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
      auVar63 = vpmovzxwd_avx512f(auVar41);
      auVar58 = vpmovzxwd_avx512f(auVar42);
      auVar63 = vpaddd_avx512f(auVar63,auVar58);
      auVar63 = vcvtdq2ps_avx512f(auVar63);
      auVar63 = vmulps_avx512f(auVar57,auVar63);
      puVar1 = (uint *)(param_2 + uVar26 * 4);
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
      *puVar1 = (uint)(bVar18 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1;
      puVar1[1] = (uint)bVar3 * auVar63._4_4_ | (uint)!bVar3 * puVar1[1];
      puVar1[2] = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * puVar1[2];
      puVar1[3] = (uint)bVar5 * auVar63._12_4_ | (uint)!bVar5 * puVar1[3];
      puVar1[4] = (uint)bVar6 * auVar63._16_4_ | (uint)!bVar6 * puVar1[4];
      puVar1[5] = (uint)bVar7 * auVar63._20_4_ | (uint)!bVar7 * puVar1[5];
      puVar1[6] = (uint)bVar8 * auVar63._24_4_ | (uint)!bVar8 * puVar1[6];
      puVar1[7] = (uint)bVar9 * auVar63._28_4_ | (uint)!bVar9 * puVar1[7];
      puVar1[8] = (uint)(bVar17 & 1) * auVar63._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar1[8];
      puVar1[9] = (uint)bVar10 * auVar63._36_4_ | (uint)!bVar10 * puVar1[9];
      puVar1[10] = (uint)bVar11 * auVar63._40_4_ | (uint)!bVar11 * puVar1[10];
      puVar1[0xb] = (uint)bVar12 * auVar63._44_4_ | (uint)!bVar12 * puVar1[0xb];
      puVar1[0xc] = (uint)bVar13 * auVar63._48_4_ | (uint)!bVar13 * puVar1[0xc];
      puVar1[0xd] = (uint)bVar14 * auVar63._52_4_ | (uint)!bVar14 * puVar1[0xd];
      puVar1[0xe] = (uint)bVar15 * auVar63._56_4_ | (uint)!bVar15 * puVar1[0xe];
      puVar1[0xf] = (uint)(bVar17 >> 7) * auVar63._60_4_ | (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
    }
  }
LAB_1409a1884:
  auVar63 = _DAT_14308df80;
  if (1 < lVar23) {
    uVar26 = lVar23 - 1U >> 1;
    lVar30 = 0;
    lVar29 = 1;
    lVar31 = 0;
    if (uVar26 != 0) {
      lVar29 = param_1 + lVar23 * 2;
      uVar35 = param_2 & 0x3f;
      lVar20 = lVar23 * -2 + param_1;
      auVar57 = vmovdqu32_avx512f(_DAT_14308dfc0);
      auVar58 = vmovdqu32_avx512f(_DAT_14308e000);
      uVar33 = 0x40 - uVar35 >> 2;
      uVar27 = 0;
      lVar34 = lVar20;
      lVar36 = lVar29;
      do {
        uVar28 = uVar27;
        lVar19 = lVar34 + 4;
        if (0 < (longlong)param_3) {
          auVar68 = ZEXT416(param_4[uVar28 * 2 + 2]);
          auVar69 = ZEXT416(param_4[uVar28 * 2 + 1]);
          if ((longlong)param_3 < 0x10) {
            uVar27 = 0;
          }
          else {
            if ((longlong)param_3 < 0x53) {
              uVar32 = 0;
              uVar27 = param_3 & 0xfffffffffffffff0;
            }
            else {
              if ((param_2 & 3) == 0) {
                uVar32 = uVar35;
                if ((uVar35 != 0) && (uVar32 = uVar33, (longlong)param_3 < (longlong)uVar33)) {
                  uVar32 = param_3;
                }
              }
              else {
                uVar32 = 0;
              }
              uVar27 = param_3 - (param_3 - uVar32 & 0xf);
              if (uVar32 != 0) {
                uVar21 = 0;
                lVar24 = 0;
                auVar61 = vbroadcastss_avx512f(auVar68);
                auVar62 = vpbroadcastq_avx512f();
                auVar64 = vbroadcastss_avx512f(auVar69);
                auVar59 = auVar58;
                auVar60 = auVar57;
                do {
                  uVar16 = vpcmpgtq_avx512f(auVar62,auVar60);
                  bVar18 = (byte)uVar16;
                  uVar16 = vpcmpgtq_avx512f(auVar62,auVar59);
                  bVar17 = (byte)uVar16;
                  auVar60 = vpaddq_avx512f(auVar60,auVar63);
                  auVar59 = vpaddq_avx512f(auVar59,auVar63);
                  uVar37 = CONCAT11(bVar17,bVar18);
                  auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar24 + 2 + lVar34));
                  auVar43._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                  auVar43._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                  auVar43._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                  auVar43._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                  auVar43._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                  auVar43._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                  auVar43._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                  auVar43._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                  auVar43._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                  auVar43._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                  auVar43._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                  auVar43._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                  auVar43._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                  auVar43._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                  auVar43._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                  auVar43._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                  auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar24 + -2 + lVar36));
                  auVar44._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                  auVar44._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                  auVar44._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                  auVar44._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                  auVar44._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                  auVar44._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                  auVar44._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                  auVar44._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                  auVar44._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                  auVar44._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                  auVar44._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                  auVar44._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                  auVar44._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                  auVar44._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                  auVar44._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                  auVar44._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                  piVar2 = (int *)(param_2 + uVar21 * 4);
                  auVar67._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar2[1];
                  auVar67._0_4_ = (uint)(bVar18 & 1) * *piVar2;
                  auVar67._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar2[2];
                  auVar67._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar2[3];
                  auVar67._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar2[4];
                  auVar67._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar2[5];
                  auVar67._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar2[6];
                  auVar67._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar2[7];
                  auVar67._32_4_ = (uint)(bVar17 & 1) * piVar2[8];
                  auVar67._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar2[9];
                  auVar67._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar2[10];
                  auVar67._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar2[0xb];
                  auVar67._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar2[0xc];
                  auVar67._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar2[0xd];
                  auVar67._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar2[0xe];
                  auVar67._60_4_ = (uint)(bVar17 >> 7) * piVar2[0xf];
                  auVar65 = vpmovzxwd_avx512f(auVar43);
                  auVar66 = vpmovzxwd_avx512f(auVar44);
                  auVar65 = vpaddd_avx512f(auVar65,auVar66);
                  auVar65 = vcvtdq2ps_avx512f(auVar65);
                  auVar67 = vfmadd231ps_avx512f(auVar67,auVar65,auVar64);
                  puVar1 = (uint *)(param_2 + uVar21 * 4);
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
                  *puVar1 = (uint)(bVar18 & 1) * auVar67._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1
                  ;
                  puVar1[1] = (uint)bVar3 * auVar67._4_4_ | (uint)!bVar3 * puVar1[1];
                  puVar1[2] = (uint)bVar4 * auVar67._8_4_ | (uint)!bVar4 * puVar1[2];
                  puVar1[3] = (uint)bVar5 * auVar67._12_4_ | (uint)!bVar5 * puVar1[3];
                  puVar1[4] = (uint)bVar6 * auVar67._16_4_ | (uint)!bVar6 * puVar1[4];
                  puVar1[5] = (uint)bVar7 * auVar67._20_4_ | (uint)!bVar7 * puVar1[5];
                  puVar1[6] = (uint)bVar8 * auVar67._24_4_ | (uint)!bVar8 * puVar1[6];
                  puVar1[7] = (uint)bVar9 * auVar67._28_4_ | (uint)!bVar9 * puVar1[7];
                  puVar1[8] = (uint)(bVar17 & 1) * auVar67._32_4_ |
                              (uint)!(bool)(bVar17 & 1) * puVar1[8];
                  puVar1[9] = (uint)bVar10 * auVar67._36_4_ | (uint)!bVar10 * puVar1[9];
                  puVar1[10] = (uint)bVar11 * auVar67._40_4_ | (uint)!bVar11 * puVar1[10];
                  puVar1[0xb] = (uint)bVar12 * auVar67._44_4_ | (uint)!bVar12 * puVar1[0xb];
                  puVar1[0xc] = (uint)bVar13 * auVar67._48_4_ | (uint)!bVar13 * puVar1[0xc];
                  puVar1[0xd] = (uint)bVar14 * auVar67._52_4_ | (uint)!bVar14 * puVar1[0xd];
                  puVar1[0xe] = (uint)bVar15 * auVar67._56_4_ | (uint)!bVar15 * puVar1[0xe];
                  puVar1[0xf] = (uint)(bVar17 >> 7) * auVar67._60_4_ |
                                (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
                  auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar24 + 4 + lVar34));
                  auVar45._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                  auVar45._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                  auVar45._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                  auVar45._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                  auVar45._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                  auVar45._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                  auVar45._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                  auVar45._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                  auVar45._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                  auVar45._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                  auVar45._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                  auVar45._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                  auVar45._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                  auVar45._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                  auVar45._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                  auVar45._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                  auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar24 + -4 + lVar36));
                  auVar46._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                  auVar46._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                  auVar46._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                  auVar46._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                  auVar46._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                  auVar46._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                  auVar46._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                  auVar46._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                  auVar46._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                  auVar46._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                  auVar46._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                  auVar46._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                  auVar46._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                  auVar46._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                  auVar46._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                  auVar46._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                  auVar65 = vpmovzxwd_avx512f(auVar45);
                  auVar66 = vpmovzxwd_avx512f(auVar46);
                  auVar65 = vpaddd_avx512f(auVar65,auVar66);
                  lVar24 = lVar24 + 0x20;
                  auVar65 = vcvtdq2ps_avx512f(auVar65);
                  auVar66._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * auVar67._4_4_;
                  auVar66._0_4_ = (uint)(bVar18 & 1) * auVar67._0_4_;
                  auVar66._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * auVar67._8_4_;
                  auVar66._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * auVar67._12_4_;
                  auVar66._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * auVar67._16_4_;
                  auVar66._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * auVar67._20_4_;
                  auVar66._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * auVar67._24_4_;
                  auVar66._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * auVar67._28_4_;
                  auVar66._32_4_ = (uint)(bVar17 & 1) * auVar67._32_4_;
                  auVar66._36_4_ = (uint)(bVar17 >> 1 & 1) * auVar67._36_4_;
                  auVar66._40_4_ = (uint)(bVar17 >> 2 & 1) * auVar67._40_4_;
                  auVar66._44_4_ = (uint)(bVar17 >> 3 & 1) * auVar67._44_4_;
                  auVar66._48_4_ = (uint)(bVar17 >> 4 & 1) * auVar67._48_4_;
                  auVar66._52_4_ = (uint)(bVar17 >> 5 & 1) * auVar67._52_4_;
                  auVar66._56_4_ = (uint)(bVar17 >> 6 & 1) * auVar67._56_4_;
                  auVar66._60_4_ = (uint)(bVar17 >> 7) * auVar67._60_4_;
                  auVar67 = vfmadd231ps_avx512f(auVar66,auVar65,auVar61);
                  puVar1 = (uint *)(param_2 + uVar21 * 4);
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
                  *puVar1 = (uint)(bVar18 & 1) * auVar67._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1
                  ;
                  puVar1[1] = (uint)bVar3 * auVar67._4_4_ | (uint)!bVar3 * puVar1[1];
                  puVar1[2] = (uint)bVar4 * auVar67._8_4_ | (uint)!bVar4 * puVar1[2];
                  puVar1[3] = (uint)bVar5 * auVar67._12_4_ | (uint)!bVar5 * puVar1[3];
                  puVar1[4] = (uint)bVar6 * auVar67._16_4_ | (uint)!bVar6 * puVar1[4];
                  puVar1[5] = (uint)bVar7 * auVar67._20_4_ | (uint)!bVar7 * puVar1[5];
                  puVar1[6] = (uint)bVar8 * auVar67._24_4_ | (uint)!bVar8 * puVar1[6];
                  puVar1[7] = (uint)bVar9 * auVar67._28_4_ | (uint)!bVar9 * puVar1[7];
                  puVar1[8] = (uint)(bVar17 & 1) * auVar67._32_4_ |
                              (uint)!(bool)(bVar17 & 1) * puVar1[8];
                  puVar1[9] = (uint)bVar10 * auVar67._36_4_ | (uint)!bVar10 * puVar1[9];
                  puVar1[10] = (uint)bVar11 * auVar67._40_4_ | (uint)!bVar11 * puVar1[10];
                  puVar1[0xb] = (uint)bVar12 * auVar67._44_4_ | (uint)!bVar12 * puVar1[0xb];
                  puVar1[0xc] = (uint)bVar13 * auVar67._48_4_ | (uint)!bVar13 * puVar1[0xc];
                  puVar1[0xd] = (uint)bVar14 * auVar67._52_4_ | (uint)!bVar14 * puVar1[0xd];
                  puVar1[0xe] = (uint)bVar15 * auVar67._56_4_ | (uint)!bVar15 * puVar1[0xe];
                  puVar1[0xf] = (uint)(bVar17 >> 7) * auVar67._60_4_ |
                                (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
                  uVar21 = uVar21 + 0x10;
                } while (uVar21 < uVar32);
                if (param_3 == uVar32) goto LAB_1409a1c0e;
              }
            }
            if ((longlong)(uVar32 + 0x10) <= (longlong)uVar27) {
              lVar24 = lVar30 + uVar32 * 2;
              lVar25 = lVar31 + uVar32 * 2;
              auVar59 = vbroadcastss_avx512f(auVar68);
              auVar60 = vbroadcastss_avx512f(auVar69);
              lVar22 = lVar23 * -2 + param_1;
              do {
                auVar61 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar25 + 2 + lVar22));
                auVar62 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar24 + -2 + lVar29));
                auVar64 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar24 + -4 + lVar29));
                auVar67 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar25 + 4 + lVar22));
                auVar61 = vpaddd_avx512f(auVar61,auVar62);
                auVar62 = vpaddd_avx512f(auVar67,auVar64);
                auVar61 = vcvtdq2ps_avx512f(auVar61);
                auVar62 = vcvtdq2ps_avx512f(auVar62);
                auVar61 = vfmadd213ps_avx512f(auVar61,auVar60,
                                              *(undefined1 (*) [64])(param_2 + uVar32 * 4));
                auVar61 = vfmadd231ps_avx512f(auVar61,auVar62,auVar59);
                lVar24 = lVar24 + 0x20;
                *(undefined1 (*) [64])(param_2 + uVar32 * 4) = auVar61;
                uVar32 = uVar32 + 0x10;
                lVar25 = lVar25 + 0x20;
              } while (uVar32 < uVar27);
            }
          }
          if (uVar27 + 1 <= param_3) {
            lVar24 = lVar20 + uVar27 * 2;
            lVar25 = lVar29 + uVar27 * 2;
            auVar59 = vbroadcastss_avx512f(auVar68);
            auVar60 = vpbroadcastq_avx512f();
            auVar61 = vbroadcastss_avx512f(auVar69);
            uVar16 = vpcmpgtq_avx512f(auVar60,auVar57);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar60,auVar58);
            bVar17 = (byte)uVar16;
            uVar37 = CONCAT11(bVar17,bVar18);
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar31 + 2 + lVar24));
            auVar47._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar47._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar47._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar47._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar47._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar47._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar47._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar47._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar47._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar47._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar47._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar47._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar47._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar47._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar47._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar47._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar25 + -2 + lVar30));
            auVar48._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar48._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar48._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar48._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar48._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar48._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar48._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar48._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar48._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar48._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar48._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar48._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar48._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar48._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar48._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar48._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            piVar2 = (int *)(param_2 + uVar27 * 4);
            auVar60._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * piVar2[1];
            auVar60._0_4_ = (uint)(bVar18 & 1) * *piVar2;
            auVar60._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * piVar2[2];
            auVar60._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * piVar2[3];
            auVar60._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * piVar2[4];
            auVar60._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * piVar2[5];
            auVar60._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * piVar2[6];
            auVar60._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * piVar2[7];
            auVar60._32_4_ = (uint)(bVar17 & 1) * piVar2[8];
            auVar60._36_4_ = (uint)(bVar17 >> 1 & 1) * piVar2[9];
            auVar60._40_4_ = (uint)(bVar17 >> 2 & 1) * piVar2[10];
            auVar60._44_4_ = (uint)(bVar17 >> 3 & 1) * piVar2[0xb];
            auVar60._48_4_ = (uint)(bVar17 >> 4 & 1) * piVar2[0xc];
            auVar60._52_4_ = (uint)(bVar17 >> 5 & 1) * piVar2[0xd];
            auVar60._56_4_ = (uint)(bVar17 >> 6 & 1) * piVar2[0xe];
            auVar60._60_4_ = (uint)(bVar17 >> 7) * piVar2[0xf];
            auVar62 = vpmovzxwd_avx512f(auVar47);
            auVar64 = vpmovzxwd_avx512f(auVar48);
            auVar62 = vpaddd_avx512f(auVar62,auVar64);
            auVar62 = vcvtdq2ps_avx512f(auVar62);
            auVar60 = vfmadd213ps_avx512f(auVar61,auVar62,auVar60);
            puVar1 = (uint *)(param_2 + uVar27 * 4);
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
            *puVar1 = (uint)(bVar18 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * auVar60._4_4_ | (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * auVar60._12_4_ | (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * auVar60._16_4_ | (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * auVar60._20_4_ | (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * auVar60._24_4_ | (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * auVar60._28_4_ | (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar17 & 1) * auVar60._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * auVar60._36_4_ | (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * auVar60._40_4_ | (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * auVar60._44_4_ | (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * auVar60._48_4_ | (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * auVar60._52_4_ | (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * auVar60._56_4_ | (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar17 >> 7) * auVar60._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar31 + 4 + lVar24));
            auVar49._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar49._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar49._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar49._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar49._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar49._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar49._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar49._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar49._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar49._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar49._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar49._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar49._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar49._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar49._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar49._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar25 + -4 + lVar30));
            auVar50._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar50._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar50._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar50._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar50._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar50._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar50._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar50._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar50._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar50._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar50._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar50._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar50._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar50._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar50._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar50._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            auVar61 = vpmovzxwd_avx512f(auVar49);
            auVar62 = vpmovzxwd_avx512f(auVar50);
            auVar61 = vpaddd_avx512f(auVar61,auVar62);
            auVar61 = vcvtdq2ps_avx512f(auVar61);
            auVar62._4_4_ = (uint)((byte)(uVar37 >> 1) & 1) * auVar60._4_4_;
            auVar62._0_4_ = (uint)(bVar18 & 1) * auVar60._0_4_;
            auVar62._8_4_ = (uint)((byte)(uVar37 >> 2) & 1) * auVar60._8_4_;
            auVar62._12_4_ = (uint)((byte)(uVar37 >> 3) & 1) * auVar60._12_4_;
            auVar62._16_4_ = (uint)((byte)(uVar37 >> 4) & 1) * auVar60._16_4_;
            auVar62._20_4_ = (uint)((byte)(uVar37 >> 5) & 1) * auVar60._20_4_;
            auVar62._24_4_ = (uint)((byte)(uVar37 >> 6) & 1) * auVar60._24_4_;
            auVar62._28_4_ = (uint)((byte)(uVar37 >> 7) & 1) * auVar60._28_4_;
            auVar62._32_4_ = (uint)(bVar17 & 1) * auVar60._32_4_;
            auVar62._36_4_ = (uint)(bVar17 >> 1 & 1) * auVar60._36_4_;
            auVar62._40_4_ = (uint)(bVar17 >> 2 & 1) * auVar60._40_4_;
            auVar62._44_4_ = (uint)(bVar17 >> 3 & 1) * auVar60._44_4_;
            auVar62._48_4_ = (uint)(bVar17 >> 4 & 1) * auVar60._48_4_;
            auVar62._52_4_ = (uint)(bVar17 >> 5 & 1) * auVar60._52_4_;
            auVar62._56_4_ = (uint)(bVar17 >> 6 & 1) * auVar60._56_4_;
            auVar62._60_4_ = (uint)(bVar17 >> 7) * auVar60._60_4_;
            auVar59 = vfmadd213ps_avx512f(auVar59,auVar61,auVar62);
            puVar1 = (uint *)(param_2 + uVar27 * 4);
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
            *puVar1 = (uint)(bVar18 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar18 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * auVar59._4_4_ | (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * auVar59._28_4_ | (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar17 & 1) * auVar59._32_4_ | (uint)!(bool)(bVar17 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * auVar59._36_4_ | (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * auVar59._40_4_ | (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * auVar59._44_4_ | (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * auVar59._48_4_ | (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * auVar59._52_4_ | (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * auVar59._56_4_ | (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar17 >> 7) * auVar59._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
          }
        }
LAB_1409a1c0e:
        uVar27 = uVar28 + 1;
        lVar36 = lVar36 + -4;
        lVar30 = lVar30 + -4;
        lVar34 = lVar34 + 4;
        lVar31 = lVar31 + 4;
      } while (uVar27 < uVar26);
      lVar29 = uVar28 + 2 + uVar27;
    }
    auVar63 = _DAT_14308df80;
    if (lVar23 != lVar29) {
      lVar19 = lVar23 * -2 + param_1 + lVar29 * 2;
      if (0 < (longlong)param_3) {
        auVar69 = ZEXT416(param_4[lVar29]);
        if ((longlong)param_3 < 0x10) {
          uVar26 = 0;
        }
        else {
          if ((longlong)param_3 < 0x47) {
            uVar27 = 0;
            uVar26 = param_3 & 0xfffffffffffffff0;
          }
          else {
            uVar27 = param_2 & 0x3f;
            if ((param_2 & 3) == 0) {
              if ((uVar27 != 0) &&
                 (uVar27 = 0x40 - uVar27 >> 2, (longlong)param_3 < (longlong)uVar27)) {
                uVar27 = param_3;
              }
            }
            else {
              uVar27 = 0;
            }
            uVar26 = param_3 - (param_3 - uVar27 & 0xf);
            if (uVar27 != 0) {
              uVar33 = 0;
              auVar57 = vmovdqu32_avx512f(_DAT_14308dfc0);
              auVar58 = vmovdqu32_avx512f(_DAT_14308e000);
              auVar59 = vpbroadcastq_avx512f();
              auVar60 = vbroadcastss_avx512f(auVar69);
              lVar30 = 0;
              do {
                uVar16 = vpcmpgtq_avx512f(auVar59,auVar57);
                bVar18 = (byte)uVar16;
                uVar16 = vpcmpgtq_avx512f(auVar59,auVar58);
                bVar17 = (byte)uVar16;
                auVar57 = vpaddq_avx512f(auVar57,auVar63);
                auVar58 = vpaddq_avx512f(auVar58,auVar63);
                uVar37 = CONCAT11(bVar17,bVar18);
                auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar30 + lVar19));
                auVar51._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                auVar51._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                auVar51._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                auVar51._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                auVar51._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                auVar51._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                auVar51._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                auVar51._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                auVar51._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                auVar51._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                auVar51._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                auVar51._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                auVar51._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                auVar51._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                auVar51._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                auVar51._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                              (lVar30 + param_1 + lVar23 * 2 + lVar29 * -2));
                auVar52._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
                auVar52._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
                auVar52._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
                auVar52._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
                auVar52._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
                auVar52._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
                auVar52._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
                auVar52._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
                auVar52._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
                auVar52._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
                auVar52._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
                auVar52._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
                auVar52._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
                auVar52._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
                auVar52._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
                auVar52._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
                auVar61 = vpmovzxwd_avx512f(auVar51);
                auVar62 = vpmovzxwd_avx512f(auVar52);
                auVar61 = vpaddd_avx512f(auVar61,auVar62);
                lVar30 = lVar30 + 0x20;
                auVar61 = vcvtdq2ps_avx512f(auVar61);
                auVar61 = vfmadd213ps_avx512f(auVar61,auVar60,
                                              *(undefined1 (*) [64])(param_2 + uVar33 * 4));
                puVar1 = (uint *)(param_2 + uVar33 * 4);
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
                *puVar1 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar61._0_4_ |
                          (uint)!(bool)(bVar18 & 1) * *puVar1;
                puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar61._4_4_ |
                            (uint)!bVar3 * puVar1[1];
                puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar61._8_4_ |
                            (uint)!bVar4 * puVar1[2];
                puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar61._12_4_ |
                            (uint)!bVar5 * puVar1[3];
                puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar61._16_4_ |
                            (uint)!bVar6 * puVar1[4];
                puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar61._20_4_ |
                            (uint)!bVar7 * puVar1[5];
                puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar61._24_4_ |
                            (uint)!bVar8 * puVar1[6];
                puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar61._28_4_ |
                            (uint)!bVar9 * puVar1[7];
                puVar1[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar61._32_4_ |
                            (uint)!(bool)(bVar17 & 1) * puVar1[8];
                puVar1[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar61._36_4_ |
                            (uint)!bVar10 * puVar1[9];
                puVar1[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar61._40_4_ |
                             (uint)!bVar11 * puVar1[10];
                puVar1[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar61._44_4_ |
                              (uint)!bVar12 * puVar1[0xb];
                puVar1[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar61._48_4_ |
                              (uint)!bVar13 * puVar1[0xc];
                puVar1[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar61._52_4_ |
                              (uint)!bVar14 * puVar1[0xd];
                puVar1[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar61._56_4_ |
                              (uint)!bVar15 * puVar1[0xe];
                puVar1[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar61._60_4_ |
                              (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
                uVar33 = uVar33 + 0x10;
              } while (uVar33 < uVar27);
              if (param_3 == uVar27) goto LAB_1409a1e6c;
            }
          }
          if ((longlong)(uVar27 + 0x10) <= (longlong)uVar26) {
            auVar63 = vbroadcastss_avx512f(auVar69);
            do {
              auVar57 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar19 + uVar27 * 2));
              auVar58 = vpmovzxwd_avx512f(*(undefined1 (*) [32])
                                           (param_1 + lVar23 * 2 + lVar29 * -2 + uVar27 * 2));
              auVar57 = vpaddd_avx512f(auVar57,auVar58);
              auVar57 = vcvtdq2ps_avx512f(auVar57);
              auVar57 = vfmadd213ps_avx512f(auVar57,auVar63,
                                            *(undefined1 (*) [64])(param_2 + uVar27 * 4));
              *(undefined1 (*) [64])(param_2 + uVar27 * 4) = auVar57;
              uVar27 = uVar27 + 0x10;
            } while (uVar27 < uVar26);
          }
        }
        if (uVar26 + 1 <= param_3) {
          auVar63 = vpbroadcastq_avx512f();
          auVar57 = vbroadcastss_avx512f(auVar69);
          uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308dfc0);
          bVar18 = (byte)uVar16;
          uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308e000);
          bVar17 = (byte)uVar16;
          uVar37 = CONCAT11(bVar17,bVar18);
          auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                        (param_1 + lVar23 * 2 + lVar29 * -2 + uVar26 * 2));
          auVar53._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
          auVar53._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
          auVar53._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
          auVar53._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
          auVar53._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
          auVar53._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
          auVar53._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
          auVar53._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
          auVar53._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
          auVar53._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
          auVar53._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
          auVar53._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
          auVar53._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
          auVar53._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
          auVar53._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
          auVar53._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
          auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar19 + uVar26 * 2));
          auVar54._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
          auVar54._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
          auVar54._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
          auVar54._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
          auVar54._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
          auVar54._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
          auVar54._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
          auVar54._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
          auVar54._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
          auVar54._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
          auVar54._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
          auVar54._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
          auVar54._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
          auVar54._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
          auVar54._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
          auVar54._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
          auVar63 = vpmovzxwd_avx512f(auVar53);
          auVar58 = vpmovzxwd_avx512f(auVar54);
          auVar63 = vpaddd_avx512f(auVar58,auVar63);
          auVar63 = vcvtdq2ps_avx512f(auVar63);
          auVar63 = vfmadd213ps_avx512f(auVar57,auVar63,*(undefined1 (*) [64])(param_2 + uVar26 * 4)
                                       );
          puVar1 = (uint *)(param_2 + uVar26 * 4);
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
          *puVar1 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar63._0_4_ |
                    (uint)!(bool)(bVar18 & 1) * *puVar1;
          puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar63._4_4_ |
                      (uint)!bVar3 * puVar1[1];
          puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar63._8_4_ |
                      (uint)!bVar4 * puVar1[2];
          puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar63._12_4_ |
                      (uint)!bVar5 * puVar1[3];
          puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar63._16_4_ |
                      (uint)!bVar6 * puVar1[4];
          puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar63._20_4_ |
                      (uint)!bVar7 * puVar1[5];
          puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar63._24_4_ |
                      (uint)!bVar8 * puVar1[6];
          puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar63._28_4_ |
                      (uint)!bVar9 * puVar1[7];
          puVar1[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar63._32_4_ |
                      (uint)!(bool)(bVar17 & 1) * puVar1[8];
          puVar1[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar63._36_4_ |
                      (uint)!bVar10 * puVar1[9];
          puVar1[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar63._40_4_ |
                       (uint)!bVar11 * puVar1[10];
          puVar1[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar63._44_4_ |
                        (uint)!bVar12 * puVar1[0xb];
          puVar1[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar63._48_4_ |
                        (uint)!bVar13 * puVar1[0xc];
          puVar1[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar63._52_4_ |
                        (uint)!bVar14 * puVar1[0xd];
          puVar1[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar63._56_4_ |
                        (uint)!bVar15 * puVar1[0xe];
          puVar1[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar63._60_4_ |
                        (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
        }
      }
    }
  }
LAB_1409a1e6c:
  auVar63 = _DAT_14308df80;
  if (0 < (longlong)param_3) {
    auVar69 = ZEXT416(param_4[lVar23]);
    if ((longlong)param_3 < 0x10) {
      uVar26 = 0;
    }
    else {
      if ((longlong)param_3 < 0x27) {
        uVar27 = 0;
        uVar26 = param_3 & 0xfffffffffffffff0;
      }
      else {
        uVar27 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar27 != 0) && (uVar27 = 0x40 - uVar27 >> 2, (longlong)param_3 < (longlong)uVar27))
          {
            uVar27 = param_3;
          }
        }
        else {
          uVar27 = 0;
        }
        uVar26 = param_3 - (param_3 - uVar27 & 0xf);
        if (uVar27 != 0) {
          uVar33 = 0;
          lVar23 = 0;
          auVar57 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar58 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar59 = vpbroadcastq_avx512f();
          auVar60 = vbroadcastss_avx512f(auVar69);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar59,auVar57);
            bVar18 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar59,auVar58);
            bVar17 = (byte)uVar16;
            auVar57 = vpaddq_avx512f(auVar57,auVar63);
            auVar58 = vpaddq_avx512f(auVar58,auVar63);
            uVar37 = CONCAT11(bVar17,bVar18);
            auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar23 + 2 + lVar19));
            auVar55._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
            auVar55._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
            auVar55._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
            auVar55._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
            auVar55._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
            auVar55._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
            auVar55._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
            auVar55._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
            auVar55._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
            auVar55._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
            auVar55._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
            auVar55._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
            auVar55._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
            auVar55._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
            auVar55._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
            auVar55._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
            lVar23 = lVar23 + 0x20;
            auVar61 = vpmovzxwd_avx512f(auVar55);
            auVar61 = vcvtdq2ps_avx512f(auVar61);
            auVar61 = vfmadd213ps_avx512f(auVar61,auVar60,
                                          *(undefined1 (*) [64])(param_2 + uVar33 * 4));
            puVar1 = (uint *)(param_2 + uVar33 * 4);
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
            *puVar1 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar61._0_4_ |
                      (uint)!(bool)(bVar18 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar61._4_4_ |
                        (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar61._8_4_ |
                        (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar61._12_4_ |
                        (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar61._16_4_ |
                        (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar61._20_4_ |
                        (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar61._24_4_ |
                        (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar61._28_4_ |
                        (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar61._32_4_ |
                        (uint)!(bool)(bVar17 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar61._36_4_ |
                        (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar61._40_4_ |
                         (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar61._44_4_ |
                          (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar61._48_4_ |
                          (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar61._52_4_ |
                          (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar61._56_4_ |
                          (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar61._60_4_ |
                          (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
            uVar33 = uVar33 + 0x10;
          } while (uVar33 < uVar27);
          if (param_3 == uVar27) {
            return;
          }
        }
      }
      if ((longlong)(uVar27 + 0x10) <= (longlong)uVar26) {
        auVar63 = vbroadcastss_avx512f(auVar69);
        do {
          auVar57 = vpmovzxwd_avx512f(*(undefined1 (*) [32])(lVar19 + 2 + uVar27 * 2));
          auVar57 = vcvtdq2ps_avx512f(auVar57);
          auVar57 = vfmadd213ps_avx512f(auVar57,auVar63,*(undefined1 (*) [64])(param_2 + uVar27 * 4)
                                       );
          *(undefined1 (*) [64])(param_2 + uVar27 * 4) = auVar57;
          uVar27 = uVar27 + 0x10;
        } while (uVar27 < uVar26);
      }
    }
    if (uVar26 + 1 <= param_3) {
      auVar63 = vpbroadcastq_avx512f();
      auVar57 = vbroadcastss_avx512f(auVar69);
      uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308dfc0);
      bVar18 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar63,_DAT_14308e000);
      bVar17 = (byte)uVar16;
      uVar37 = CONCAT11(bVar17,bVar18);
      auVar38 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar19 + 2 + uVar26 * 2));
      auVar56._2_2_ = (ushort)((byte)(uVar37 >> 1) & 1) * auVar38._2_2_;
      auVar56._0_2_ = (ushort)(bVar18 & 1) * auVar38._0_2_;
      auVar56._4_2_ = (ushort)((byte)(uVar37 >> 2) & 1) * auVar38._4_2_;
      auVar56._6_2_ = (ushort)((byte)(uVar37 >> 3) & 1) * auVar38._6_2_;
      auVar56._8_2_ = (ushort)((byte)(uVar37 >> 4) & 1) * auVar38._8_2_;
      auVar56._10_2_ = (ushort)((byte)(uVar37 >> 5) & 1) * auVar38._10_2_;
      auVar56._12_2_ = (ushort)((byte)(uVar37 >> 6) & 1) * auVar38._12_2_;
      auVar56._14_2_ = (ushort)((byte)(uVar37 >> 7) & 1) * auVar38._14_2_;
      auVar56._16_2_ = (ushort)(bVar17 & 1) * auVar38._16_2_;
      auVar56._18_2_ = (ushort)(bVar17 >> 1 & 1) * auVar38._18_2_;
      auVar56._20_2_ = (ushort)(bVar17 >> 2 & 1) * auVar38._20_2_;
      auVar56._22_2_ = (ushort)(bVar17 >> 3 & 1) * auVar38._22_2_;
      auVar56._24_2_ = (ushort)(bVar17 >> 4 & 1) * auVar38._24_2_;
      auVar56._26_2_ = (ushort)(bVar17 >> 5 & 1) * auVar38._26_2_;
      auVar56._28_2_ = (ushort)(bVar17 >> 6 & 1) * auVar38._28_2_;
      auVar56._30_2_ = (ushort)(bVar17 >> 7) * auVar38._30_2_;
      auVar63 = vpmovzxwd_avx512f(auVar56);
      auVar63 = vcvtdq2ps_avx512f(auVar63);
      auVar63 = vfmadd213ps_avx512f(auVar57,auVar63,*(undefined1 (*) [64])(param_2 + uVar26 * 4));
      puVar1 = (uint *)(param_2 + uVar26 * 4);
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
      *puVar1 = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar63._0_4_ |
                (uint)!(bool)(bVar18 & 1) * *puVar1;
      puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar37 >> 1) & 1) * auVar63._4_4_ |
                  (uint)!bVar3 * puVar1[1];
      puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar63._8_4_ |
                  (uint)!bVar4 * puVar1[2];
      puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar37 >> 3) & 1) * auVar63._12_4_ |
                  (uint)!bVar5 * puVar1[3];
      puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar37 >> 4) & 1) * auVar63._16_4_ |
                  (uint)!bVar6 * puVar1[4];
      puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar37 >> 5) & 1) * auVar63._20_4_ |
                  (uint)!bVar7 * puVar1[5];
      puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar37 >> 6) & 1) * auVar63._24_4_ |
                  (uint)!bVar8 * puVar1[6];
      puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar37 >> 7) & 1) * auVar63._28_4_ |
                  (uint)!bVar9 * puVar1[7];
      puVar1[8] = (uint)(bVar17 & 1) * (uint)(bVar17 & 1) * auVar63._32_4_ |
                  (uint)!(bool)(bVar17 & 1) * puVar1[8];
      puVar1[9] = (uint)bVar10 * (uint)(bVar17 >> 1 & 1) * auVar63._36_4_ |
                  (uint)!bVar10 * puVar1[9];
      puVar1[10] = (uint)bVar11 * (uint)(bVar17 >> 2 & 1) * auVar63._40_4_ |
                   (uint)!bVar11 * puVar1[10];
      puVar1[0xb] = (uint)bVar12 * (uint)(bVar17 >> 3 & 1) * auVar63._44_4_ |
                    (uint)!bVar12 * puVar1[0xb];
      puVar1[0xc] = (uint)bVar13 * (uint)(bVar17 >> 4 & 1) * auVar63._48_4_ |
                    (uint)!bVar13 * puVar1[0xc];
      puVar1[0xd] = (uint)bVar14 * (uint)(bVar17 >> 5 & 1) * auVar63._52_4_ |
                    (uint)!bVar14 * puVar1[0xd];
      puVar1[0xe] = (uint)bVar15 * (uint)(bVar17 >> 6 & 1) * auVar63._56_4_ |
                    (uint)!bVar15 * puVar1[0xe];
      puVar1[0xf] = (uint)(bVar17 >> 7) * (uint)(bVar17 >> 7) * auVar63._60_4_ |
                    (uint)!(bool)(bVar17 >> 7) * puVar1[0xf];
    }
  }
  return;
}

