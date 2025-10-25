
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409c4480(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4,int param_5)

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
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [64];
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ushort uVar38;
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
  undefined1 auVar61 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  auVar44 = _DAT_14308e2c0;
  uVar17 = param_3 * 3;
  lVar24 = (longlong)(param_5 >> 1);
  lVar26 = lVar24 * -0xc + param_1;
  if (0 < (longlong)uVar17) {
    auVar63 = ZEXT416(*param_4);
    if ((longlong)uVar17 < 0x10) {
      uVar20 = 0;
    }
    else {
      if ((longlong)uVar17 < 0x7b) {
        uVar28 = 0;
        uVar20 = uVar17 & 0xfffffffffffffff0;
      }
      else {
        uVar28 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar28 != 0) && (uVar28 = 0x40 - uVar28 >> 2, (longlong)uVar17 < (longlong)uVar28)) {
            uVar28 = uVar17;
          }
        }
        else {
          uVar28 = 0;
        }
        uVar20 = uVar17 - (uVar17 - uVar28 & 0xf);
        if (uVar28 != 0) {
          auVar39 = vmovdqu32_avx512f(_DAT_14308e300);
          auVar40 = vmovdqu32_avx512f(_DAT_14308e340);
          auVar41 = vpbroadcastq_avx512f();
          auVar42 = vbroadcastss_avx512f(auVar63);
          uVar33 = 0;
          do {
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar39);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar40);
            bVar18 = (byte)uVar16;
            auVar39 = vpaddq_avx512f(auVar39,auVar44);
            auVar40 = vpaddq_avx512f(auVar40,auVar44);
            uVar38 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar24 * -0xc + param_1 + uVar33 * 4);
            auVar43._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar43._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar43._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar43._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar43._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar43._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar43._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar43._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar43._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar43._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar43._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar43._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar43._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar43._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar43._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar43._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_1 + lVar24 * 0xc + uVar33 * 4);
            auVar45._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar45._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar45._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar45._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar45._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar45._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar45._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar45._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar45._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar45._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar45._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar45._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar45._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar45._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar45._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar45._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar43 = vaddps_avx512f(auVar43,auVar45);
            auVar43 = vmulps_avx512f(auVar42,auVar43);
            puVar2 = (uint *)(param_2 + uVar33 * 4);
            bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *puVar2 = (uint)(bVar19 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * auVar43._4_4_ | (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * auVar43._8_4_ | (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * auVar43._12_4_ | (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * auVar43._16_4_ | (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * auVar43._20_4_ | (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * auVar43._24_4_ | (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * auVar43._28_4_ | (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar18 & 1) * auVar43._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * auVar43._36_4_ | (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * auVar43._40_4_ | (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * auVar43._44_4_ | (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * auVar43._48_4_ | (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * auVar43._52_4_ | (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * auVar43._56_4_ | (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar18 >> 7) * auVar43._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
            uVar33 = uVar33 + 0x10;
          } while (uVar33 < uVar28);
          if (uVar17 == uVar28) goto LAB_1409c466e;
        }
      }
      if ((longlong)(uVar28 + 0x10) <= (longlong)uVar20) {
        auVar44 = vbroadcastss_avx512f(auVar63);
        do {
          auVar39 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 * -0xc + param_1 + uVar28 * 4),
                                   *(undefined1 (*) [64])(param_1 + lVar24 * 0xc + uVar28 * 4));
          auVar39 = vmulps_avx512f(auVar44,auVar39);
          *(undefined1 (*) [64])(param_2 + uVar28 * 4) = auVar39;
          uVar28 = uVar28 + 0x10;
        } while (uVar28 < uVar20);
      }
    }
    if (uVar20 + 1 <= uVar17) {
      auVar44 = vpbroadcastq_avx512f();
      auVar39 = vbroadcastss_avx512f(auVar63);
      uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e300);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e340);
      bVar18 = (byte)uVar16;
      uVar38 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(param_1 + lVar24 * 0xc + uVar20 * 4);
      auVar44._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
      auVar44._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar44._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
      auVar44._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
      auVar44._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
      auVar44._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
      auVar44._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
      auVar44._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
      auVar44._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar44._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar44._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar44._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar44._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar44._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar44._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar44._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar24 * -0xc + param_1 + uVar20 * 4);
      auVar40._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
      auVar40._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar40._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
      auVar40._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
      auVar40._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
      auVar40._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
      auVar40._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
      auVar40._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
      auVar40._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar40._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar40._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar40._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar40._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar40._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar40._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar40._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      auVar44 = vaddps_avx512f(auVar40,auVar44);
      auVar44 = vmulps_avx512f(auVar39,auVar44);
      puVar2 = (uint *)(param_2 + uVar20 * 4);
      bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
      bVar10 = (bool)(bVar18 >> 1 & 1);
      bVar11 = (bool)(bVar18 >> 2 & 1);
      bVar12 = (bool)(bVar18 >> 3 & 1);
      bVar13 = (bool)(bVar18 >> 4 & 1);
      bVar14 = (bool)(bVar18 >> 5 & 1);
      bVar15 = (bool)(bVar18 >> 6 & 1);
      *puVar2 = (uint)(bVar19 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2;
      puVar2[1] = (uint)bVar3 * auVar44._4_4_ | (uint)!bVar3 * puVar2[1];
      puVar2[2] = (uint)bVar4 * auVar44._8_4_ | (uint)!bVar4 * puVar2[2];
      puVar2[3] = (uint)bVar5 * auVar44._12_4_ | (uint)!bVar5 * puVar2[3];
      puVar2[4] = (uint)bVar6 * auVar44._16_4_ | (uint)!bVar6 * puVar2[4];
      puVar2[5] = (uint)bVar7 * auVar44._20_4_ | (uint)!bVar7 * puVar2[5];
      puVar2[6] = (uint)bVar8 * auVar44._24_4_ | (uint)!bVar8 * puVar2[6];
      puVar2[7] = (uint)bVar9 * auVar44._28_4_ | (uint)!bVar9 * puVar2[7];
      puVar2[8] = (uint)(bVar18 & 1) * auVar44._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar10 * auVar44._36_4_ | (uint)!bVar10 * puVar2[9];
      puVar2[10] = (uint)bVar11 * auVar44._40_4_ | (uint)!bVar11 * puVar2[10];
      puVar2[0xb] = (uint)bVar12 * auVar44._44_4_ | (uint)!bVar12 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar13 * auVar44._48_4_ | (uint)!bVar13 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar14 * auVar44._52_4_ | (uint)!bVar14 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar15 * auVar44._56_4_ | (uint)!bVar15 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar18 >> 7) * auVar44._60_4_ | (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
    }
  }
LAB_1409c466e:
  auVar44 = _DAT_14308e2c0;
  if (1 < lVar24) {
    uVar20 = lVar24 - 1U >> 1;
    lVar30 = 0;
    lVar34 = 1;
    lVar32 = 0;
    if (uVar20 != 0) {
      lVar34 = param_1 + lVar24 * 0xc;
      uVar33 = param_2 & 0x3f;
      lVar35 = lVar24 * -0xc + param_1;
      auVar39 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar40 = vmovdqu32_avx512f(_DAT_14308e340);
      uVar29 = 0x40 - uVar33 >> 2;
      lVar25 = lVar34;
      uVar28 = 0;
      do {
        uVar36 = uVar28;
        lVar26 = lVar35 + 0x18;
        if (0 < (longlong)uVar17) {
          auVar62 = ZEXT416(param_4[uVar36 * 2 + 2]);
          auVar63 = ZEXT416(param_4[uVar36 * 2 + 1]);
          if ((longlong)uVar17 < 0x10) {
            uVar28 = 0;
          }
          else {
            if ((longlong)uVar17 < 0x4b) {
              uVar31 = 0;
              uVar28 = uVar17 & 0xfffffffffffffff0;
            }
            else {
              if ((param_2 & 3) == 0) {
                uVar31 = uVar33;
                if ((uVar33 != 0) && (uVar31 = uVar29, (longlong)uVar17 < (longlong)uVar29)) {
                  uVar31 = uVar17;
                }
              }
              else {
                uVar31 = 0;
              }
              uVar28 = uVar17 - (uVar17 - uVar31 & 0xf);
              if (uVar31 != 0) {
                uVar21 = 0;
                auVar43 = vbroadcastss_avx512f(auVar62);
                auVar45 = vpbroadcastq_avx512f();
                auVar46 = vbroadcastss_avx512f(auVar63);
                auVar41 = auVar40;
                auVar42 = auVar39;
                do {
                  uVar16 = vpcmpgtq_avx512f(auVar45,auVar42);
                  bVar19 = (byte)uVar16;
                  uVar16 = vpcmpgtq_avx512f(auVar45,auVar41);
                  bVar18 = (byte)uVar16;
                  auVar42 = vpaddq_avx512f(auVar42,auVar44);
                  auVar41 = vpaddq_avx512f(auVar41,auVar44);
                  uVar38 = CONCAT11(bVar18,bVar19);
                  piVar1 = (int *)(lVar35 + 0xc + uVar21 * 4);
                  auVar50._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                  auVar50._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                  auVar50._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                  auVar50._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                  auVar50._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                  auVar50._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                  auVar50._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                  auVar50._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                  auVar50._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                  auVar50._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                  auVar50._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                  auVar50._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                  auVar50._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                  auVar50._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                  auVar50._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                  auVar50._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar25 + -0xc + uVar21 * 4);
                  auVar51._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                  auVar51._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                  auVar51._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                  auVar51._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                  auVar51._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                  auVar51._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                  auVar51._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                  auVar51._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                  auVar51._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                  auVar51._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                  auVar51._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                  auVar51._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                  auVar51._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                  auVar51._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                  auVar51._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                  auVar51._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(param_2 + uVar21 * 4);
                  auVar47._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                  auVar47._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                  auVar47._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                  auVar47._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                  auVar47._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                  auVar47._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                  auVar47._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                  auVar47._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                  auVar47._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                  auVar47._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                  auVar47._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                  auVar47._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                  auVar47._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                  auVar47._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                  auVar47._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                  auVar47._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar35 + 0x18 + uVar21 * 4);
                  auVar48._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                  auVar48._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                  auVar48._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                  auVar48._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                  auVar48._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                  auVar48._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                  auVar48._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                  auVar48._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                  auVar48._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                  auVar48._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                  auVar48._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                  auVar48._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                  auVar48._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                  auVar48._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                  auVar48._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                  auVar48._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                  piVar1 = (int *)(lVar25 + -0x18 + uVar21 * 4);
                  auVar49._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                  auVar49._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                  auVar49._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                  auVar49._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                  auVar49._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                  auVar49._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                  auVar49._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                  auVar49._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                  auVar49._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                  auVar49._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                  auVar49._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                  auVar49._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                  auVar49._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                  auVar49._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                  auVar49._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                  auVar49._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                  auVar50 = vaddps_avx512f(auVar50,auVar51);
                  auVar51 = vaddps_avx512f(auVar48,auVar49);
                  auVar50 = vfmadd231ps_avx512f(auVar47,auVar50,auVar46);
                  auVar52._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar50._4_4_;
                  auVar52._0_4_ = (uint)(bVar19 & 1) * auVar50._0_4_;
                  auVar52._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar50._8_4_;
                  auVar52._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar50._12_4_;
                  auVar52._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar50._16_4_;
                  auVar52._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar50._20_4_;
                  auVar52._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar50._24_4_;
                  auVar52._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * auVar50._28_4_;
                  auVar52._32_4_ = (uint)(bVar18 & 1) * auVar50._32_4_;
                  auVar52._36_4_ = (uint)(bVar18 >> 1 & 1) * auVar50._36_4_;
                  auVar52._40_4_ = (uint)(bVar18 >> 2 & 1) * auVar50._40_4_;
                  auVar52._44_4_ = (uint)(bVar18 >> 3 & 1) * auVar50._44_4_;
                  auVar52._48_4_ = (uint)(bVar18 >> 4 & 1) * auVar50._48_4_;
                  auVar52._52_4_ = (uint)(bVar18 >> 5 & 1) * auVar50._52_4_;
                  auVar52._56_4_ = (uint)(bVar18 >> 6 & 1) * auVar50._56_4_;
                  auVar52._60_4_ = (uint)(bVar18 >> 7) * auVar50._60_4_;
                  auVar50 = vfmadd231ps_avx512f(auVar52,auVar51,auVar43);
                  puVar2 = (uint *)(param_2 + uVar21 * 4);
                  bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
                  bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
                  bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
                  bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
                  bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
                  bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
                  bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
                  bVar10 = (bool)(bVar18 >> 1 & 1);
                  bVar11 = (bool)(bVar18 >> 2 & 1);
                  bVar12 = (bool)(bVar18 >> 3 & 1);
                  bVar13 = (bool)(bVar18 >> 4 & 1);
                  bVar14 = (bool)(bVar18 >> 5 & 1);
                  bVar15 = (bool)(bVar18 >> 6 & 1);
                  *puVar2 = (uint)(bVar19 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2
                  ;
                  puVar2[1] = (uint)bVar3 * auVar50._4_4_ | (uint)!bVar3 * puVar2[1];
                  puVar2[2] = (uint)bVar4 * auVar50._8_4_ | (uint)!bVar4 * puVar2[2];
                  puVar2[3] = (uint)bVar5 * auVar50._12_4_ | (uint)!bVar5 * puVar2[3];
                  puVar2[4] = (uint)bVar6 * auVar50._16_4_ | (uint)!bVar6 * puVar2[4];
                  puVar2[5] = (uint)bVar7 * auVar50._20_4_ | (uint)!bVar7 * puVar2[5];
                  puVar2[6] = (uint)bVar8 * auVar50._24_4_ | (uint)!bVar8 * puVar2[6];
                  puVar2[7] = (uint)bVar9 * auVar50._28_4_ | (uint)!bVar9 * puVar2[7];
                  puVar2[8] = (uint)(bVar18 & 1) * auVar50._32_4_ |
                              (uint)!(bool)(bVar18 & 1) * puVar2[8];
                  puVar2[9] = (uint)bVar10 * auVar50._36_4_ | (uint)!bVar10 * puVar2[9];
                  puVar2[10] = (uint)bVar11 * auVar50._40_4_ | (uint)!bVar11 * puVar2[10];
                  puVar2[0xb] = (uint)bVar12 * auVar50._44_4_ | (uint)!bVar12 * puVar2[0xb];
                  puVar2[0xc] = (uint)bVar13 * auVar50._48_4_ | (uint)!bVar13 * puVar2[0xc];
                  puVar2[0xd] = (uint)bVar14 * auVar50._52_4_ | (uint)!bVar14 * puVar2[0xd];
                  puVar2[0xe] = (uint)bVar15 * auVar50._56_4_ | (uint)!bVar15 * puVar2[0xe];
                  puVar2[0xf] = (uint)(bVar18 >> 7) * auVar50._60_4_ |
                                (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
                  uVar21 = uVar21 + 0x10;
                } while (uVar21 < uVar31);
                if (uVar17 == uVar31) goto LAB_1409c49cc;
              }
            }
            if ((longlong)(uVar31 + 0x10) <= (longlong)uVar28) {
              pauVar27 = (undefined1 (*) [64])(param_2 + uVar31 * 4);
              lVar37 = lVar32 + uVar31 * 4;
              lVar22 = lVar30 + uVar31 * 4;
              auVar41 = vbroadcastss_avx512f(auVar62);
              auVar42 = vbroadcastss_avx512f(auVar63);
              lVar23 = lVar24 * -0xc + param_1;
              do {
                uVar31 = uVar31 + 0x10;
                auVar43 = vaddps_avx512f(*(undefined1 (*) [64])(lVar37 + 0xc + lVar23),
                                         *(undefined1 (*) [64])(lVar22 + -0xc + lVar34));
                auVar45 = vaddps_avx512f(*(undefined1 (*) [64])(lVar37 + 0x18 + lVar23),
                                         *(undefined1 (*) [64])(lVar22 + -0x18 + lVar34));
                auVar43 = vfmadd213ps_avx512f(auVar43,auVar42,*pauVar27);
                auVar43 = vfmadd231ps_avx512f(auVar43,auVar45,auVar41);
                lVar22 = lVar22 + 0x40;
                *pauVar27 = auVar43;
                pauVar27 = pauVar27 + 1;
                lVar37 = lVar37 + 0x40;
              } while (uVar31 < uVar28);
            }
          }
          if (uVar28 + 1 <= uVar17) {
            auVar41 = vbroadcastss_avx512f(auVar62);
            auVar42 = vpbroadcastq_avx512f();
            auVar43 = vbroadcastss_avx512f(auVar63);
            uVar16 = vpcmpgtq_avx512f(auVar42,auVar39);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar42,auVar40);
            bVar18 = (byte)uVar16;
            uVar38 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar35 + 0xc + uVar28 * 4);
            auVar42._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar42._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar42._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar42._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar42._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar42._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar42._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar42._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar42._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar42._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar42._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar42._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar42._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar42._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar42._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar42._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar25 + -0xc + uVar28 * 4);
            auVar46._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar46._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar46._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar46._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar46._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar46._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar46._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar46._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar46._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar46._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar46._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar46._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar46._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar46._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar46._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar46._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 + uVar28 * 4);
            auVar53._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar53._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar53._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar53._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar53._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar53._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar53._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar53._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar53._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar53._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar53._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar53._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar53._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar53._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar53._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar53._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar35 + 0x18 + uVar28 * 4);
            auVar54._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar54._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar54._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar54._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar54._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar54._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar54._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar54._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar54._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar54._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar54._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar54._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar54._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar54._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar54._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar54._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            piVar1 = (int *)(lVar25 + -0x18 + uVar28 * 4);
            auVar55._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar55._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar55._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar55._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar55._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar55._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar55._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar55._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar55._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar55._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar55._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar55._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar55._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar55._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar55._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar55._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar42 = vaddps_avx512f(auVar42,auVar46);
            auVar45 = vaddps_avx512f(auVar54,auVar55);
            auVar42 = vfmadd213ps_avx512f(auVar43,auVar42,auVar53);
            auVar56._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar42._4_4_;
            auVar56._0_4_ = (uint)(bVar19 & 1) * auVar42._0_4_;
            auVar56._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar42._8_4_;
            auVar56._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar42._12_4_;
            auVar56._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar42._16_4_;
            auVar56._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar42._20_4_;
            auVar56._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar42._24_4_;
            auVar56._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * auVar42._28_4_;
            auVar56._32_4_ = (uint)(bVar18 & 1) * auVar42._32_4_;
            auVar56._36_4_ = (uint)(bVar18 >> 1 & 1) * auVar42._36_4_;
            auVar56._40_4_ = (uint)(bVar18 >> 2 & 1) * auVar42._40_4_;
            auVar56._44_4_ = (uint)(bVar18 >> 3 & 1) * auVar42._44_4_;
            auVar56._48_4_ = (uint)(bVar18 >> 4 & 1) * auVar42._48_4_;
            auVar56._52_4_ = (uint)(bVar18 >> 5 & 1) * auVar42._52_4_;
            auVar56._56_4_ = (uint)(bVar18 >> 6 & 1) * auVar42._56_4_;
            auVar56._60_4_ = (uint)(bVar18 >> 7) * auVar42._60_4_;
            auVar41 = vfmadd213ps_avx512f(auVar41,auVar45,auVar56);
            puVar2 = (uint *)(param_2 + uVar28 * 4);
            bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *puVar2 = (uint)(bVar19 & 1) * auVar41._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * auVar41._4_4_ | (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * auVar41._8_4_ | (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * auVar41._12_4_ | (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * auVar41._16_4_ | (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * auVar41._20_4_ | (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * auVar41._24_4_ | (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * auVar41._28_4_ | (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar18 & 1) * auVar41._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * auVar41._36_4_ | (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * auVar41._40_4_ | (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * auVar41._44_4_ | (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * auVar41._48_4_ | (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * auVar41._52_4_ | (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * auVar41._56_4_ | (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar18 >> 7) * auVar41._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
          }
        }
LAB_1409c49cc:
        uVar28 = uVar36 + 1;
        lVar25 = lVar25 + -0x18;
        lVar30 = lVar30 + -0x18;
        lVar35 = lVar35 + 0x18;
        lVar32 = lVar32 + 0x18;
      } while (uVar28 < uVar20);
      lVar34 = uVar36 + 2 + uVar28;
    }
    auVar44 = _DAT_14308e2c0;
    if (lVar24 != lVar34) {
      lVar26 = lVar24 * -0xc + param_1 + lVar34 * 0xc;
      if (0 < (longlong)uVar17) {
        auVar63 = ZEXT416(param_4[lVar34]);
        if ((longlong)uVar17 < 0x10) {
          uVar20 = 0;
        }
        else {
          if ((longlong)uVar17 < 0x41) {
            uVar28 = 0;
            uVar20 = uVar17 & 0xfffffffffffffff0;
          }
          else {
            uVar28 = param_2 & 0x3f;
            if ((param_2 & 3) == 0) {
              if ((uVar28 != 0) &&
                 (uVar28 = 0x40 - uVar28 >> 2, (longlong)uVar17 < (longlong)uVar28)) {
                uVar28 = uVar17;
              }
            }
            else {
              uVar28 = 0;
            }
            uVar20 = uVar17 - (uVar17 - uVar28 & 0xf);
            if (uVar28 != 0) {
              auVar39 = vmovdqu32_avx512f(_DAT_14308e300);
              auVar40 = vmovdqu32_avx512f(_DAT_14308e340);
              auVar41 = vpbroadcastq_avx512f();
              auVar42 = vbroadcastss_avx512f(auVar63);
              uVar33 = 0;
              do {
                uVar16 = vpcmpgtq_avx512f(auVar41,auVar39);
                bVar19 = (byte)uVar16;
                uVar16 = vpcmpgtq_avx512f(auVar41,auVar40);
                bVar18 = (byte)uVar16;
                auVar39 = vpaddq_avx512f(auVar39,auVar44);
                auVar40 = vpaddq_avx512f(auVar40,auVar44);
                uVar38 = CONCAT11(bVar18,bVar19);
                piVar1 = (int *)(lVar26 + uVar33 * 4);
                auVar57._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                auVar57._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                auVar57._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                auVar57._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                auVar57._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                auVar57._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                auVar57._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                auVar57._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                auVar57._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                auVar57._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                auVar57._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                auVar57._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                auVar57._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                auVar57._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                auVar57._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                auVar57._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                piVar1 = (int *)(param_1 + lVar24 * 0xc + lVar34 * -0xc + uVar33 * 4);
                auVar58._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
                auVar58._0_4_ = (uint)(bVar19 & 1) * *piVar1;
                auVar58._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
                auVar58._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
                auVar58._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
                auVar58._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
                auVar58._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
                auVar58._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
                auVar58._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
                auVar58._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
                auVar58._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
                auVar58._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
                auVar58._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
                auVar58._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
                auVar58._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
                auVar58._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
                auVar43 = vaddps_avx512f(auVar57,auVar58);
                auVar43 = vfmadd213ps_avx512f(auVar43,auVar42,
                                              *(undefined1 (*) [64])(param_2 + uVar33 * 4));
                puVar2 = (uint *)(param_2 + uVar33 * 4);
                bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
                bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
                bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
                bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
                bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
                bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
                bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
                bVar10 = (bool)(bVar18 >> 1 & 1);
                bVar11 = (bool)(bVar18 >> 2 & 1);
                bVar12 = (bool)(bVar18 >> 3 & 1);
                bVar13 = (bool)(bVar18 >> 4 & 1);
                bVar14 = (bool)(bVar18 >> 5 & 1);
                bVar15 = (bool)(bVar18 >> 6 & 1);
                *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar43._0_4_ |
                          (uint)!(bool)(bVar19 & 1) * *puVar2;
                puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar38 >> 1) & 1) * auVar43._4_4_ |
                            (uint)!bVar3 * puVar2[1];
                puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar38 >> 2) & 1) * auVar43._8_4_ |
                            (uint)!bVar4 * puVar2[2];
                puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar38 >> 3) & 1) * auVar43._12_4_ |
                            (uint)!bVar5 * puVar2[3];
                puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar38 >> 4) & 1) * auVar43._16_4_ |
                            (uint)!bVar6 * puVar2[4];
                puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar43._20_4_ |
                            (uint)!bVar7 * puVar2[5];
                puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar38 >> 6) & 1) * auVar43._24_4_ |
                            (uint)!bVar8 * puVar2[6];
                puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar38 >> 7) & 1) * auVar43._28_4_ |
                            (uint)!bVar9 * puVar2[7];
                puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar43._32_4_ |
                            (uint)!(bool)(bVar18 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar43._36_4_ |
                            (uint)!bVar10 * puVar2[9];
                puVar2[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar43._40_4_ |
                             (uint)!bVar11 * puVar2[10];
                puVar2[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar43._44_4_ |
                              (uint)!bVar12 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar43._48_4_ |
                              (uint)!bVar13 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar43._52_4_ |
                              (uint)!bVar14 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar43._56_4_ |
                              (uint)!bVar15 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar43._60_4_ |
                              (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
                uVar33 = uVar33 + 0x10;
              } while (uVar33 < uVar28);
              if (uVar17 == uVar28) goto LAB_1409c4bf9;
            }
          }
          if ((longlong)(uVar28 + 0x10) <= (longlong)uVar20) {
            auVar44 = vbroadcastss_avx512f(auVar63);
            do {
              auVar39 = vaddps_avx512f(*(undefined1 (*) [64])(lVar26 + uVar28 * 4),
                                       *(undefined1 (*) [64])
                                        (param_1 + lVar24 * 0xc + lVar34 * -0xc + uVar28 * 4));
              auVar39 = vfmadd213ps_avx512f(auVar39,auVar44,
                                            *(undefined1 (*) [64])(param_2 + uVar28 * 4));
              *(undefined1 (*) [64])(param_2 + uVar28 * 4) = auVar39;
              uVar28 = uVar28 + 0x10;
            } while (uVar28 < uVar20);
          }
        }
        if (uVar20 + 1 <= uVar17) {
          auVar44 = vpbroadcastq_avx512f();
          auVar39 = vbroadcastss_avx512f(auVar63);
          uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e300);
          bVar19 = (byte)uVar16;
          uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e340);
          bVar18 = (byte)uVar16;
          uVar38 = CONCAT11(bVar18,bVar19);
          piVar1 = (int *)(lVar26 + uVar20 * 4);
          auVar41._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
          auVar41._0_4_ = (uint)(bVar19 & 1) * *piVar1;
          auVar41._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
          auVar41._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
          auVar41._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
          auVar41._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
          auVar41._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
          auVar41._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
          auVar41._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
          auVar41._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
          auVar41._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
          auVar41._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
          auVar41._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
          auVar41._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
          auVar41._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
          auVar41._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
          piVar1 = (int *)(param_1 + lVar24 * 0xc + lVar34 * -0xc + uVar20 * 4);
          auVar59._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
          auVar59._0_4_ = (uint)(bVar19 & 1) * *piVar1;
          auVar59._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
          auVar59._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
          auVar59._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
          auVar59._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
          auVar59._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
          auVar59._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
          auVar59._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
          auVar59._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
          auVar59._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
          auVar59._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
          auVar59._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
          auVar59._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
          auVar59._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
          auVar59._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
          auVar44 = vaddps_avx512f(auVar41,auVar59);
          auVar44 = vfmadd213ps_avx512f(auVar39,auVar44,*(undefined1 (*) [64])(param_2 + uVar20 * 4)
                                       );
          puVar2 = (uint *)(param_2 + uVar20 * 4);
          bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
          bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
          bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
          bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
          bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
          bVar10 = (bool)(bVar18 >> 1 & 1);
          bVar11 = (bool)(bVar18 >> 2 & 1);
          bVar12 = (bool)(bVar18 >> 3 & 1);
          bVar13 = (bool)(bVar18 >> 4 & 1);
          bVar14 = (bool)(bVar18 >> 5 & 1);
          bVar15 = (bool)(bVar18 >> 6 & 1);
          *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar44._0_4_ |
                    (uint)!(bool)(bVar19 & 1) * *puVar2;
          puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar38 >> 1) & 1) * auVar44._4_4_ |
                      (uint)!bVar3 * puVar2[1];
          puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar38 >> 2) & 1) * auVar44._8_4_ |
                      (uint)!bVar4 * puVar2[2];
          puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar38 >> 3) & 1) * auVar44._12_4_ |
                      (uint)!bVar5 * puVar2[3];
          puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar38 >> 4) & 1) * auVar44._16_4_ |
                      (uint)!bVar6 * puVar2[4];
          puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar44._20_4_ |
                      (uint)!bVar7 * puVar2[5];
          puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar38 >> 6) & 1) * auVar44._24_4_ |
                      (uint)!bVar8 * puVar2[6];
          puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar38 >> 7) & 1) * auVar44._28_4_ |
                      (uint)!bVar9 * puVar2[7];
          puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar44._32_4_ |
                      (uint)!(bool)(bVar18 & 1) * puVar2[8];
          puVar2[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar44._36_4_ |
                      (uint)!bVar10 * puVar2[9];
          puVar2[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar44._40_4_ |
                       (uint)!bVar11 * puVar2[10];
          puVar2[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar44._44_4_ |
                        (uint)!bVar12 * puVar2[0xb];
          puVar2[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar44._48_4_ |
                        (uint)!bVar13 * puVar2[0xc];
          puVar2[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar44._52_4_ |
                        (uint)!bVar14 * puVar2[0xd];
          puVar2[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar44._56_4_ |
                        (uint)!bVar15 * puVar2[0xe];
          puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar44._60_4_ |
                        (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
        }
      }
    }
  }
LAB_1409c4bf9:
  auVar44 = _DAT_14308e2c0;
  if (0 < (longlong)uVar17) {
    auVar63 = ZEXT416(param_4[lVar24]);
    if ((longlong)uVar17 < 0x10) {
      uVar20 = 0;
    }
    else {
      if ((longlong)uVar17 < 0x27) {
        uVar28 = 0;
        uVar20 = uVar17 & 0xfffffffffffffff0;
      }
      else {
        uVar28 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar28 != 0) && (uVar28 = 0x40 - uVar28 >> 2, (longlong)uVar17 < (longlong)uVar28)) {
            uVar28 = uVar17;
          }
        }
        else {
          uVar28 = 0;
        }
        uVar20 = uVar17 - (uVar17 - uVar28 & 0xf);
        if (uVar28 != 0) {
          uVar33 = 0;
          auVar39 = vmovdqu32_avx512f(_DAT_14308e300);
          auVar40 = vmovdqu32_avx512f(_DAT_14308e340);
          auVar41 = vpbroadcastq_avx512f();
          auVar42 = vbroadcastss_avx512f(auVar63);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar39);
            bVar19 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar41,auVar40);
            bVar18 = (byte)uVar16;
            auVar39 = vpaddq_avx512f(auVar39,auVar44);
            auVar40 = vpaddq_avx512f(auVar40,auVar44);
            uVar38 = CONCAT11(bVar18,bVar19);
            piVar1 = (int *)(lVar26 + 0xc + uVar33 * 4);
            auVar60._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
            auVar60._0_4_ = (uint)(bVar19 & 1) * *piVar1;
            auVar60._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
            auVar60._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
            auVar60._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
            auVar60._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
            auVar60._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
            auVar60._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
            auVar60._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
            auVar60._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
            auVar60._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
            auVar60._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
            auVar60._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
            auVar60._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
            auVar60._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
            auVar60._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
            auVar43 = vfmadd213ps_avx512f(auVar60,auVar42,
                                          *(undefined1 (*) [64])(param_2 + uVar33 * 4));
            puVar2 = (uint *)(param_2 + uVar33 * 4);
            bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
            bVar10 = (bool)(bVar18 >> 1 & 1);
            bVar11 = (bool)(bVar18 >> 2 & 1);
            bVar12 = (bool)(bVar18 >> 3 & 1);
            bVar13 = (bool)(bVar18 >> 4 & 1);
            bVar14 = (bool)(bVar18 >> 5 & 1);
            bVar15 = (bool)(bVar18 >> 6 & 1);
            *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar43._0_4_ |
                      (uint)!(bool)(bVar19 & 1) * *puVar2;
            puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar38 >> 1) & 1) * auVar43._4_4_ |
                        (uint)!bVar3 * puVar2[1];
            puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar38 >> 2) & 1) * auVar43._8_4_ |
                        (uint)!bVar4 * puVar2[2];
            puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar38 >> 3) & 1) * auVar43._12_4_ |
                        (uint)!bVar5 * puVar2[3];
            puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar38 >> 4) & 1) * auVar43._16_4_ |
                        (uint)!bVar6 * puVar2[4];
            puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar43._20_4_ |
                        (uint)!bVar7 * puVar2[5];
            puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar38 >> 6) & 1) * auVar43._24_4_ |
                        (uint)!bVar8 * puVar2[6];
            puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar38 >> 7) & 1) * auVar43._28_4_ |
                        (uint)!bVar9 * puVar2[7];
            puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar43._32_4_ |
                        (uint)!(bool)(bVar18 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar43._36_4_ |
                        (uint)!bVar10 * puVar2[9];
            puVar2[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar43._40_4_ |
                         (uint)!bVar11 * puVar2[10];
            puVar2[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar43._44_4_ |
                          (uint)!bVar12 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar43._48_4_ |
                          (uint)!bVar13 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar43._52_4_ |
                          (uint)!bVar14 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar43._56_4_ |
                          (uint)!bVar15 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar43._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
            uVar33 = uVar33 + 0x10;
          } while (uVar33 < uVar28);
          if (uVar17 == uVar28) {
            return;
          }
        }
      }
      if ((longlong)(uVar28 + 0x10) <= (longlong)uVar20) {
        auVar44 = vbroadcastss_avx512f(auVar63);
        do {
          auVar39 = vfmadd213ps_avx512f(*(undefined1 (*) [64])(lVar26 + 0xc + uVar28 * 4),auVar44,
                                        *(undefined1 (*) [64])(param_2 + uVar28 * 4));
          *(undefined1 (*) [64])(param_2 + uVar28 * 4) = auVar39;
          uVar28 = uVar28 + 0x10;
        } while (uVar28 < uVar20);
      }
    }
    if (uVar20 + 1 <= uVar17) {
      auVar44 = vpbroadcastq_avx512f();
      auVar39 = vbroadcastss_avx512f(auVar63);
      uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e300);
      bVar19 = (byte)uVar16;
      uVar16 = vpcmpgtq_avx512f(auVar44,_DAT_14308e340);
      bVar18 = (byte)uVar16;
      uVar38 = CONCAT11(bVar18,bVar19);
      piVar1 = (int *)(lVar26 + 0xc + uVar20 * 4);
      auVar61._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar1[1];
      auVar61._0_4_ = (uint)(bVar19 & 1) * *piVar1;
      auVar61._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar1[2];
      auVar61._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar1[3];
      auVar61._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar1[4];
      auVar61._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar1[5];
      auVar61._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar1[6];
      auVar61._28_4_ = (uint)((byte)(uVar38 >> 7) & 1) * piVar1[7];
      auVar61._32_4_ = (uint)(bVar18 & 1) * piVar1[8];
      auVar61._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar1[9];
      auVar61._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar1[10];
      auVar61._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar1[0xb];
      auVar61._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar1[0xc];
      auVar61._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar1[0xd];
      auVar61._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar1[0xe];
      auVar61._60_4_ = (uint)(bVar18 >> 7) * piVar1[0xf];
      auVar44 = vfmadd213ps_avx512f(auVar39,auVar61,*(undefined1 (*) [64])(param_2 + uVar20 * 4));
      puVar2 = (uint *)(param_2 + uVar20 * 4);
      bVar3 = (bool)((byte)(uVar38 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar38 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar38 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar38 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar38 >> 6) & 1);
      bVar9 = (bool)((byte)(uVar38 >> 7) & 1);
      bVar10 = (bool)(bVar18 >> 1 & 1);
      bVar11 = (bool)(bVar18 >> 2 & 1);
      bVar12 = (bool)(bVar18 >> 3 & 1);
      bVar13 = (bool)(bVar18 >> 4 & 1);
      bVar14 = (bool)(bVar18 >> 5 & 1);
      bVar15 = (bool)(bVar18 >> 6 & 1);
      *puVar2 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar44._0_4_ |
                (uint)!(bool)(bVar19 & 1) * *puVar2;
      puVar2[1] = (uint)bVar3 * (uint)((byte)(uVar38 >> 1) & 1) * auVar44._4_4_ |
                  (uint)!bVar3 * puVar2[1];
      puVar2[2] = (uint)bVar4 * (uint)((byte)(uVar38 >> 2) & 1) * auVar44._8_4_ |
                  (uint)!bVar4 * puVar2[2];
      puVar2[3] = (uint)bVar5 * (uint)((byte)(uVar38 >> 3) & 1) * auVar44._12_4_ |
                  (uint)!bVar5 * puVar2[3];
      puVar2[4] = (uint)bVar6 * (uint)((byte)(uVar38 >> 4) & 1) * auVar44._16_4_ |
                  (uint)!bVar6 * puVar2[4];
      puVar2[5] = (uint)bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar44._20_4_ |
                  (uint)!bVar7 * puVar2[5];
      puVar2[6] = (uint)bVar8 * (uint)((byte)(uVar38 >> 6) & 1) * auVar44._24_4_ |
                  (uint)!bVar8 * puVar2[6];
      puVar2[7] = (uint)bVar9 * (uint)((byte)(uVar38 >> 7) & 1) * auVar44._28_4_ |
                  (uint)!bVar9 * puVar2[7];
      puVar2[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar44._32_4_ |
                  (uint)!(bool)(bVar18 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar10 * (uint)(bVar18 >> 1 & 1) * auVar44._36_4_ |
                  (uint)!bVar10 * puVar2[9];
      puVar2[10] = (uint)bVar11 * (uint)(bVar18 >> 2 & 1) * auVar44._40_4_ |
                   (uint)!bVar11 * puVar2[10];
      puVar2[0xb] = (uint)bVar12 * (uint)(bVar18 >> 3 & 1) * auVar44._44_4_ |
                    (uint)!bVar12 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar13 * (uint)(bVar18 >> 4 & 1) * auVar44._48_4_ |
                    (uint)!bVar13 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar14 * (uint)(bVar18 >> 5 & 1) * auVar44._52_4_ |
                    (uint)!bVar14 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar15 * (uint)(bVar18 >> 6 & 1) * auVar44._56_4_ |
                    (uint)!bVar15 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar44._60_4_ |
                    (uint)!(bool)(bVar18 >> 7) * puVar2[0xf];
    }
  }
  return;
}

