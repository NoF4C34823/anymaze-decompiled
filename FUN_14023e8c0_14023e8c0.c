
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14023e8c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  ushort uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auVar35 [64];
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
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  
  auVar39 = _DAT_143088900;
  lVar28 = (longlong)param_3;
  auVar35 = vbroadcastss_avx512f(ZEXT416(*param_6));
  auVar36 = vbroadcastss_avx512f(ZEXT416(param_6[1]));
  auVar37 = vbroadcastss_avx512f(ZEXT416(param_6[2]));
  auVar38 = vbroadcastss_avx512f(ZEXT416(param_6[3]));
  lVar31 = lVar28 + -3;
  if (SCARRY8(lVar28,-3) != lVar28 + -3 < 0) {
    lVar31 = lVar28 + 4;
  }
  uVar33 = 0;
  uVar26 = (longlong)(int)lVar31 + 1;
  if (6 < (longlong)uVar26) {
    uVar26 = uVar33;
  }
  uVar24 = (longlong)(int)uVar26 + 1;
  if (6 < (longlong)uVar24) {
    uVar24 = uVar33;
  }
  uVar21 = (longlong)(int)uVar24 + 1;
  if (6 < (longlong)uVar21) {
    uVar21 = uVar33;
  }
  uVar22 = (longlong)(int)uVar21 + 1;
  if (6 < (longlong)uVar22) {
    uVar22 = uVar33;
  }
  uVar34 = (longlong)(int)uVar22 + 1;
  if (6 < (longlong)uVar34) {
    uVar34 = uVar33;
  }
  lVar31 = param_2 * lVar31 + param_1;
  uVar32 = (longlong)(int)uVar34 + 1;
  if (6 < (longlong)uVar32) {
    uVar32 = uVar33;
  }
  lVar29 = param_2 * uVar26 + param_1;
  lVar27 = param_2 * uVar24 + param_1;
  lVar25 = param_2 * uVar21 + param_1;
  lVar28 = param_2 * uVar22 + param_1;
  lVar23 = param_2 * uVar34 + param_1;
  param_1 = param_1 + param_2 * uVar32;
  lVar30 = 0;
  if (param_8 == 0) {
    if (0 < (longlong)(param_5 & 0xfffffffffffffff0)) {
      do {
        auVar39 = vaddps_avx512f(*(undefined1 (*) [64])(lVar29 + lVar30 * 4),
                                 *(undefined1 (*) [64])(lVar23 + lVar30 * 4));
        auVar40 = vaddps_avx512f(*(undefined1 (*) [64])(lVar31 + lVar30 * 4),
                                 *(undefined1 (*) [64])(param_1 + lVar30 * 4));
        auVar41 = vaddps_avx512f(*(undefined1 (*) [64])(lVar27 + lVar30 * 4),
                                 *(undefined1 (*) [64])(lVar28 + lVar30 * 4));
        auVar39 = vmulps_avx512f(auVar36,auVar39);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar40,auVar35);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar41,auVar37);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar38,*(undefined1 (*) [64])(lVar25 + lVar30 * 4));
        *(undefined1 (*) [64])(param_4 + lVar30 * 4) = auVar39;
        lVar30 = lVar30 + 0x10;
      } while (lVar30 < (longlong)(param_5 & 0xfffffffffffffff0));
    }
    uVar20 = 0xffff >> (((int)lVar30 - (int)param_5) + 0x10U & 0x1f);
    if (uVar20 == 0) {
      return;
    }
    uVar19 = (ushort)uVar20;
    piVar1 = (int *)(lVar29 + lVar30 * 4);
    bVar3 = (byte)uVar20;
    auVar39._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar39._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar39._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar39._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar39._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar39._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar39._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar39._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    bVar11 = (byte)(uVar20 >> 8);
    auVar39._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar39._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar39._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar39._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar39._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar39._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar39._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar39._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar23 + lVar30 * 4);
    auVar40._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar40._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar40._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar40._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar40._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar40._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar40._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar40._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    auVar40._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar40._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar40._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar40._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar40._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar40._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar40._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar40._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar31 + lVar30 * 4);
    auVar41._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar41._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar41._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar41._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar41._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar41._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar41._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar41._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    auVar41._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar41._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar41._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar41._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar41._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar41._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar41._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar41._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(param_1 + lVar30 * 4);
    auVar42._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar42._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar42._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar42._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar42._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar42._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar42._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar42._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    auVar42._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar42._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar42._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar42._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar42._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar42._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar42._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar42._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar27 + lVar30 * 4);
    auVar48._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar48._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar48._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar48._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar48._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar48._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar48._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar48._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    auVar48._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar48._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar48._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar48._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar48._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar48._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar48._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar48._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar28 + lVar30 * 4);
    auVar49._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
    auVar49._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar49._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
    auVar49._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
    auVar49._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
    auVar49._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
    auVar49._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
    auVar49._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
    auVar49._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar49._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar49._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar49._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar49._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar49._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar49._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar49._60_4_ = (uVar20 >> 0xf & 1) * piVar1[0xf];
    auVar39 = vaddps_avx512f(auVar39,auVar40);
    auVar40 = vaddps_avx512f(auVar41,auVar42);
    auVar41 = vaddps_avx512f(auVar48,auVar49);
    auVar39 = vmulps_avx512f(auVar36,auVar39);
    auVar39 = vfmadd213ps_avx512f(auVar35,auVar40,auVar39);
    auVar39 = vfmadd213ps_avx512f(auVar37,auVar41,auVar39);
    auVar39 = vfmadd132ps_avx512f(auVar38,auVar39,*(undefined1 (*) [64])(lVar25 + lVar30 * 4));
    puVar2 = (uint *)(param_4 + lVar30 * 4);
    bVar4 = (bool)((byte)(uVar19 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar19 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar19 >> 3) & 1);
    bVar7 = (bool)((byte)(uVar19 >> 4) & 1);
    bVar8 = (bool)((byte)(uVar19 >> 5) & 1);
    bVar9 = (bool)((byte)(uVar19 >> 6) & 1);
    bVar10 = (bool)((byte)(uVar19 >> 7) & 1);
    bVar12 = (bool)(bVar11 >> 1 & 1);
    bVar13 = (bool)(bVar11 >> 2 & 1);
    bVar14 = (bool)(bVar11 >> 3 & 1);
    bVar15 = (bool)(bVar11 >> 4 & 1);
    bVar16 = (bool)(bVar11 >> 5 & 1);
    bVar17 = (bool)(bVar11 >> 6 & 1);
    *puVar2 = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar39._0_4_ |
              (uint)!(bool)(bVar3 & 1) * *puVar2;
    puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar39._4_4_ |
                (uint)!bVar4 * puVar2[1];
    puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar39._8_4_ |
                (uint)!bVar5 * puVar2[2];
    puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar39._12_4_ |
                (uint)!bVar6 * puVar2[3];
    puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar39._16_4_ |
                (uint)!bVar7 * puVar2[4];
    puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar39._20_4_ |
                (uint)!bVar8 * puVar2[5];
    puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar39._24_4_ |
                (uint)!bVar9 * puVar2[6];
    puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar39._28_4_ |
                (uint)!bVar10 * puVar2[7];
    puVar2[8] = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar39._32_4_ |
                (uint)!(bool)(bVar11 & 1) * puVar2[8];
    puVar2[9] = (uint)bVar12 * (uint)(bVar11 >> 1 & 1) * auVar39._36_4_ | (uint)!bVar12 * puVar2[9];
    puVar2[10] = (uint)bVar13 * (uint)(bVar11 >> 2 & 1) * auVar39._40_4_ |
                 (uint)!bVar13 * puVar2[10];
    puVar2[0xb] = (uint)bVar14 * (uint)(bVar11 >> 3 & 1) * auVar39._44_4_ |
                  (uint)!bVar14 * puVar2[0xb];
    puVar2[0xc] = (uint)bVar15 * (uint)(bVar11 >> 4 & 1) * auVar39._48_4_ |
                  (uint)!bVar15 * puVar2[0xc];
    puVar2[0xd] = (uint)bVar16 * (uint)(bVar11 >> 5 & 1) * auVar39._52_4_ |
                  (uint)!bVar16 * puVar2[0xd];
    puVar2[0xe] = (uint)bVar17 * (uint)(bVar11 >> 6 & 1) * auVar39._56_4_ |
                  (uint)!bVar17 * puVar2[0xe];
    puVar2[0xf] = (uint)(bVar11 >> 7) * (uVar20 >> 0xf & 1) * auVar39._60_4_ |
                  (uint)!(bool)(bVar11 >> 7) * puVar2[0xf];
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  uVar26 = uVar33;
  if (0xf < (longlong)param_5) {
    uVar24 = param_4 & 0x3f;
    if (uVar24 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14023ec14;
      uVar24 = 0x40 - uVar24 >> 2;
      if ((longlong)param_5 < (longlong)uVar24) {
        uVar24 = param_5;
      }
    }
    uVar26 = param_5 - (param_5 - uVar24 & 0xf);
    if (uVar24 != 0) {
      auVar40 = vmovdqu32_avx512f(_DAT_143088940);
      auVar41 = vmovdqu32_avx512f(_DAT_143088980);
      auVar42 = vpbroadcastq_avx512f();
      uVar21 = uVar33;
      do {
        uVar18 = vpcmpgtq_avx512f(auVar42,auVar40);
        bVar11 = (byte)uVar18;
        uVar18 = vpcmpgtq_avx512f(auVar42,auVar41);
        bVar3 = (byte)uVar18;
        auVar40 = vpaddq_avx512f(auVar40,auVar39);
        auVar41 = vpaddq_avx512f(auVar41,auVar39);
        uVar19 = CONCAT11(bVar3,bVar11);
        piVar1 = (int *)(lVar29 + uVar21 * 4);
        auVar50._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar50._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar50._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar50._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar50._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar50._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar50._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar50._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar50._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar50._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar50._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar50._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar50._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar50._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar50._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar50._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(lVar23 + uVar21 * 4);
        auVar43._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar43._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar43._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar43._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar43._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar43._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar43._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar43._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar43._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar43._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar43._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar43._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar43._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar43._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar43._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar43._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(lVar31 + uVar21 * 4);
        auVar44._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar44._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar44._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar44._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar44._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar44._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar44._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar44._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar44._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar44._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar44._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar44._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar44._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar44._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar44._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar44._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_1 + uVar21 * 4);
        auVar45._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar45._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar45._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar45._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar45._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar45._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar45._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar45._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar45._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar45._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar45._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar45._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar45._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar45._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar45._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar45._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(lVar27 + uVar21 * 4);
        auVar46._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar46._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar46._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar46._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar46._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar46._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar46._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar46._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar46._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar46._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar46._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar46._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar46._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar46._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar46._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar46._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(lVar28 + uVar21 * 4);
        auVar47._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
        auVar47._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar47._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
        auVar47._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
        auVar47._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
        auVar47._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
        auVar47._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
        auVar47._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
        auVar47._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar47._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar47._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar47._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar47._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar47._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar47._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar47._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        auVar48 = vaddps_avx512f(auVar50,auVar43);
        auVar49 = vaddps_avx512f(auVar44,auVar45);
        auVar50 = vaddps_avx512f(auVar46,auVar47);
        auVar48 = vmulps_avx512f(auVar36,auVar48);
        auVar48 = vfmadd231ps_avx512f(auVar48,auVar49,auVar35);
        auVar48 = vfmadd231ps_avx512f(auVar48,auVar50,auVar37);
        auVar48 = vfmadd231ps_avx512f(auVar48,auVar38,*(undefined1 (*) [64])(lVar25 + uVar21 * 4));
        puVar2 = (uint *)(param_4 + uVar21 * 4);
        bVar4 = (bool)((byte)(uVar19 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar19 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar19 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar19 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar19 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar19 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar19 >> 7) & 1);
        bVar12 = (bool)(bVar3 >> 1 & 1);
        bVar13 = (bool)(bVar3 >> 2 & 1);
        bVar14 = (bool)(bVar3 >> 3 & 1);
        bVar15 = (bool)(bVar3 >> 4 & 1);
        bVar16 = (bool)(bVar3 >> 5 & 1);
        bVar17 = (bool)(bVar3 >> 6 & 1);
        *puVar2 = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar48._0_4_ |
                  (uint)!(bool)(bVar11 & 1) * *puVar2;
        puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar48._4_4_ |
                    (uint)!bVar4 * puVar2[1];
        puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar48._8_4_ |
                    (uint)!bVar5 * puVar2[2];
        puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar48._12_4_ |
                    (uint)!bVar6 * puVar2[3];
        puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar48._16_4_ |
                    (uint)!bVar7 * puVar2[4];
        puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar48._20_4_ |
                    (uint)!bVar8 * puVar2[5];
        puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar48._24_4_ |
                    (uint)!bVar9 * puVar2[6];
        puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar48._28_4_ |
                    (uint)!bVar10 * puVar2[7];
        puVar2[8] = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar48._32_4_ |
                    (uint)!(bool)(bVar3 & 1) * puVar2[8];
        puVar2[9] = (uint)bVar12 * (uint)(bVar3 >> 1 & 1) * auVar48._36_4_ |
                    (uint)!bVar12 * puVar2[9];
        puVar2[10] = (uint)bVar13 * (uint)(bVar3 >> 2 & 1) * auVar48._40_4_ |
                     (uint)!bVar13 * puVar2[10];
        puVar2[0xb] = (uint)bVar14 * (uint)(bVar3 >> 3 & 1) * auVar48._44_4_ |
                      (uint)!bVar14 * puVar2[0xb];
        puVar2[0xc] = (uint)bVar15 * (uint)(bVar3 >> 4 & 1) * auVar48._48_4_ |
                      (uint)!bVar15 * puVar2[0xc];
        puVar2[0xd] = (uint)bVar16 * (uint)(bVar3 >> 5 & 1) * auVar48._52_4_ |
                      (uint)!bVar16 * puVar2[0xd];
        puVar2[0xe] = (uint)bVar17 * (uint)(bVar3 >> 6 & 1) * auVar48._56_4_ |
                      (uint)!bVar17 * puVar2[0xe];
        puVar2[0xf] = (uint)(bVar3 >> 7) * (uint)(bVar3 >> 7) * auVar48._60_4_ |
                      (uint)!(bool)(bVar3 >> 7) * puVar2[0xf];
        uVar21 = uVar21 + 0x10;
      } while (uVar21 < uVar24);
      if (param_5 == uVar24) {
        return;
      }
    }
    if ((longlong)(uVar24 + 0x10) <= (longlong)uVar26) {
      do {
        auVar39 = vaddps_avx512f(*(undefined1 (*) [64])(lVar29 + uVar24 * 4),
                                 *(undefined1 (*) [64])(lVar23 + uVar24 * 4));
        auVar40 = vaddps_avx512f(*(undefined1 (*) [64])(lVar31 + uVar24 * 4),
                                 *(undefined1 (*) [64])(param_1 + uVar24 * 4));
        auVar41 = vaddps_avx512f(*(undefined1 (*) [64])(lVar27 + uVar24 * 4),
                                 *(undefined1 (*) [64])(lVar28 + uVar24 * 4));
        auVar39 = vmulps_avx512f(auVar36,auVar39);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar40,auVar35);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar41,auVar37);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar38,*(undefined1 (*) [64])(lVar25 + uVar24 * 4));
        auVar39 = vmovntps_avx512f(auVar39);
        *(undefined1 (*) [64])(param_4 + uVar24 * 4) = auVar39;
        uVar24 = uVar24 + 0x10;
      } while (uVar24 < uVar26);
    }
  }
LAB_14023ec14:
  auVar39 = _DAT_143088900;
  if (uVar26 + 1 <= param_5) {
    auVar40 = vmovdqu32_avx512f(_DAT_143088940);
    auVar41 = vmovdqu32_avx512f(_DAT_143088980);
    auVar42 = vpbroadcastq_avx512f();
    do {
      uVar18 = vpcmpgtq_avx512f(auVar42,auVar40);
      bVar11 = (byte)uVar18;
      uVar18 = vpcmpgtq_avx512f(auVar42,auVar41);
      bVar3 = (byte)uVar18;
      auVar40 = vpaddq_avx512f(auVar40,auVar39);
      auVar41 = vpaddq_avx512f(auVar41,auVar39);
      uVar19 = CONCAT11(bVar3,bVar11);
      piVar1 = (int *)(lVar29 + uVar26 * 4 + uVar33 * 4);
      auVar51._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar51._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar51._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar51._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar51._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar51._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar51._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar51._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar51._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar51._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar51._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar51._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar51._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar51._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar51._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar51._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar23 + uVar26 * 4 + uVar33 * 4);
      auVar52._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar52._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar52._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar52._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar52._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar52._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar52._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar52._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar52._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar52._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar52._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar52._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar52._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar52._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar52._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar52._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar31 + uVar26 * 4 + uVar33 * 4);
      auVar53._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar53._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar53._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar53._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar53._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar53._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar53._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar53._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar53._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar53._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar53._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar53._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar53._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar53._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar53._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar53._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(param_1 + uVar26 * 4 + uVar33 * 4);
      auVar54._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar54._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar54._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar54._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar54._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar54._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar54._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar54._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar54._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar54._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar54._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar54._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar54._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar54._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar54._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar54._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar27 + uVar26 * 4 + uVar33 * 4);
      auVar55._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar55._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar55._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar55._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar55._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar55._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar55._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar55._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar55._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar55._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar55._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar55._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar55._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar55._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar55._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar55._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar28 + uVar26 * 4 + uVar33 * 4);
      auVar56._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar1[1];
      auVar56._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar56._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar1[2];
      auVar56._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar1[3];
      auVar56._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar1[4];
      auVar56._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar1[5];
      auVar56._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar1[6];
      auVar56._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar1[7];
      auVar56._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar56._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar56._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar56._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar56._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar56._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar56._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar56._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      auVar48 = vaddps_avx512f(auVar51,auVar52);
      auVar49 = vaddps_avx512f(auVar53,auVar54);
      auVar50 = vaddps_avx512f(auVar55,auVar56);
      auVar48 = vmulps_avx512f(auVar36,auVar48);
      auVar48 = vfmadd231ps_avx512f(auVar48,auVar49,auVar35);
      auVar48 = vfmadd231ps_avx512f(auVar48,auVar50,auVar37);
      auVar48 = vfmadd231ps_avx512f(auVar48,auVar38,
                                    *(undefined1 (*) [64])(lVar25 + uVar26 * 4 + uVar33 * 4));
      puVar2 = (uint *)(param_4 + uVar26 * 4 + uVar33 * 4);
      bVar4 = (bool)((byte)(uVar19 >> 1) & 1);
      bVar5 = (bool)((byte)(uVar19 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar19 >> 3) & 1);
      bVar7 = (bool)((byte)(uVar19 >> 4) & 1);
      bVar8 = (bool)((byte)(uVar19 >> 5) & 1);
      bVar9 = (bool)((byte)(uVar19 >> 6) & 1);
      bVar10 = (bool)((byte)(uVar19 >> 7) & 1);
      bVar12 = (bool)(bVar3 >> 1 & 1);
      bVar13 = (bool)(bVar3 >> 2 & 1);
      bVar14 = (bool)(bVar3 >> 3 & 1);
      bVar15 = (bool)(bVar3 >> 4 & 1);
      bVar16 = (bool)(bVar3 >> 5 & 1);
      bVar17 = (bool)(bVar3 >> 6 & 1);
      *puVar2 = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar48._0_4_ |
                (uint)!(bool)(bVar11 & 1) * *puVar2;
      puVar2[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar48._4_4_ |
                  (uint)!bVar4 * puVar2[1];
      puVar2[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar48._8_4_ |
                  (uint)!bVar5 * puVar2[2];
      puVar2[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar48._12_4_ |
                  (uint)!bVar6 * puVar2[3];
      puVar2[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar48._16_4_ |
                  (uint)!bVar7 * puVar2[4];
      puVar2[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar48._20_4_ |
                  (uint)!bVar8 * puVar2[5];
      puVar2[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar48._24_4_ |
                  (uint)!bVar9 * puVar2[6];
      puVar2[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar48._28_4_ |
                  (uint)!bVar10 * puVar2[7];
      puVar2[8] = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar48._32_4_ |
                  (uint)!(bool)(bVar3 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar12 * (uint)(bVar3 >> 1 & 1) * auVar48._36_4_ | (uint)!bVar12 * puVar2[9]
      ;
      puVar2[10] = (uint)bVar13 * (uint)(bVar3 >> 2 & 1) * auVar48._40_4_ |
                   (uint)!bVar13 * puVar2[10];
      puVar2[0xb] = (uint)bVar14 * (uint)(bVar3 >> 3 & 1) * auVar48._44_4_ |
                    (uint)!bVar14 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar15 * (uint)(bVar3 >> 4 & 1) * auVar48._48_4_ |
                    (uint)!bVar15 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar16 * (uint)(bVar3 >> 5 & 1) * auVar48._52_4_ |
                    (uint)!bVar16 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar17 * (uint)(bVar3 >> 6 & 1) * auVar48._56_4_ |
                    (uint)!bVar17 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar3 >> 7) * (uint)(bVar3 >> 7) * auVar48._60_4_ |
                    (uint)!(bool)(bVar3 >> 7) * puVar2[0xf];
      uVar33 = uVar33 + 0x10;
    } while (uVar33 < param_5 - uVar26);
  }
  return;
}

