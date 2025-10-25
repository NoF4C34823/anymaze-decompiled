
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14097f440(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  uint *puVar1;
  int *piVar2;
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
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
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
  
  auVar33 = _DAT_14308dc40;
  lVar25 = (longlong)param_3;
  auVar30 = vbroadcastss_avx512f(ZEXT416(*param_6));
  auVar31 = vbroadcastss_avx512f(ZEXT416(param_6[1]));
  auVar32 = vbroadcastss_avx512f(ZEXT416(param_6[2]));
  lVar24 = lVar25 + -2;
  if (SCARRY8(lVar25,-2) != lVar25 + -2 < 0) {
    lVar24 = lVar25 + 3;
  }
  uVar21 = 0;
  uVar28 = (longlong)(int)lVar24 + 1;
  if (4 < (longlong)uVar28) {
    uVar28 = uVar21;
  }
  lVar25 = param_2 * lVar24 + param_1;
  uVar26 = (longlong)(int)uVar28 + 1;
  lVar24 = param_2 * uVar28 + param_1;
  if (4 < (longlong)uVar26) {
    uVar26 = uVar21;
  }
  uVar28 = (longlong)(int)uVar26 + 1;
  if (4 < (longlong)uVar28) {
    uVar28 = uVar21;
  }
  uVar29 = (longlong)(int)uVar28 + 1;
  if (4 < (longlong)uVar29) {
    uVar29 = uVar21;
  }
  lVar23 = param_2 * uVar26 + param_1;
  lVar27 = param_2 * uVar28 + param_1;
  param_1 = param_1 + param_2 * uVar29;
  lVar22 = 0;
  if (param_8 == 0) {
    if (0 < (longlong)(param_5 & 0xfffffffffffffff0)) {
      do {
        auVar33 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + lVar22 * 4),
                                 *(undefined1 (*) [64])(lVar27 + lVar22 * 4));
        auVar34 = vaddps_avx512f(*(undefined1 (*) [64])(lVar25 + lVar22 * 4),
                                 *(undefined1 (*) [64])(param_1 + lVar22 * 4));
        auVar33 = vmulps_avx512f(auVar31,auVar33);
        auVar33 = vfmadd231ps_avx512f(auVar33,auVar34,auVar30);
        auVar33 = vfmadd231ps_avx512f(auVar33,auVar32,*(undefined1 (*) [64])(lVar23 + lVar22 * 4));
        *(undefined1 (*) [64])(param_4 + lVar22 * 4) = auVar33;
        lVar22 = lVar22 + 0x10;
      } while (lVar22 < (longlong)(param_5 & 0xfffffffffffffff0));
    }
    uVar20 = 0xffff >> (((int)lVar22 - (int)param_5) + 0x10U & 0x1f);
    if (uVar20 == 0) {
      return;
    }
    uVar19 = (ushort)uVar20;
    piVar2 = (int *)(lVar24 + lVar22 * 4);
    bVar3 = (byte)uVar20;
    auVar33._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
    auVar33._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar33._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
    auVar33._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
    auVar33._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
    auVar33._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
    auVar33._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
    auVar33._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
    bVar11 = (byte)(uVar20 >> 8);
    auVar33._32_4_ = (uint)(bVar11 & 1) * piVar2[8];
    auVar33._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar2[9];
    auVar33._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar2[10];
    auVar33._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar2[0xb];
    auVar33._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar2[0xc];
    auVar33._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar2[0xd];
    auVar33._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar2[0xe];
    auVar33._60_4_ = (uVar20 >> 0xf & 1) * piVar2[0xf];
    piVar2 = (int *)(lVar27 + lVar22 * 4);
    auVar34._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
    auVar34._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar34._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
    auVar34._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
    auVar34._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
    auVar34._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
    auVar34._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
    auVar34._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
    auVar34._32_4_ = (uint)(bVar11 & 1) * piVar2[8];
    auVar34._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar2[9];
    auVar34._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar2[10];
    auVar34._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar2[0xb];
    auVar34._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar2[0xc];
    auVar34._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar2[0xd];
    auVar34._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar2[0xe];
    auVar34._60_4_ = (uVar20 >> 0xf & 1) * piVar2[0xf];
    piVar2 = (int *)(lVar25 + lVar22 * 4);
    auVar35._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
    auVar35._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar35._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
    auVar35._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
    auVar35._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
    auVar35._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
    auVar35._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
    auVar35._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
    auVar35._32_4_ = (uint)(bVar11 & 1) * piVar2[8];
    auVar35._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar2[9];
    auVar35._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar2[10];
    auVar35._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar2[0xb];
    auVar35._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar2[0xc];
    auVar35._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar2[0xd];
    auVar35._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar2[0xe];
    auVar35._60_4_ = (uVar20 >> 0xf & 1) * piVar2[0xf];
    piVar2 = (int *)(param_1 + lVar22 * 4);
    auVar36._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
    auVar36._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar36._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
    auVar36._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
    auVar36._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
    auVar36._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
    auVar36._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
    auVar36._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
    auVar36._32_4_ = (uint)(bVar11 & 1) * piVar2[8];
    auVar36._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar2[9];
    auVar36._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar2[10];
    auVar36._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar2[0xb];
    auVar36._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar2[0xc];
    auVar36._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar2[0xd];
    auVar36._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar2[0xe];
    auVar36._60_4_ = (uVar20 >> 0xf & 1) * piVar2[0xf];
    auVar33 = vaddps_avx512f(auVar33,auVar34);
    auVar34 = vaddps_avx512f(auVar35,auVar36);
    auVar33 = vmulps_avx512f(auVar31,auVar33);
    auVar33 = vfmadd213ps_avx512f(auVar30,auVar34,auVar33);
    auVar33 = vfmadd132ps_avx512f(auVar32,auVar33,*(undefined1 (*) [64])(lVar23 + lVar22 * 4));
    puVar1 = (uint *)(param_4 + lVar22 * 4);
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
    *puVar1 = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar33._0_4_ |
              (uint)!(bool)(bVar3 & 1) * *puVar1;
    puVar1[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar33._4_4_ |
                (uint)!bVar4 * puVar1[1];
    puVar1[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar33._8_4_ |
                (uint)!bVar5 * puVar1[2];
    puVar1[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar33._12_4_ |
                (uint)!bVar6 * puVar1[3];
    puVar1[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar33._16_4_ |
                (uint)!bVar7 * puVar1[4];
    puVar1[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar33._20_4_ |
                (uint)!bVar8 * puVar1[5];
    puVar1[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar33._24_4_ |
                (uint)!bVar9 * puVar1[6];
    puVar1[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar33._28_4_ |
                (uint)!bVar10 * puVar1[7];
    puVar1[8] = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar33._32_4_ |
                (uint)!(bool)(bVar11 & 1) * puVar1[8];
    puVar1[9] = (uint)bVar12 * (uint)(bVar11 >> 1 & 1) * auVar33._36_4_ | (uint)!bVar12 * puVar1[9];
    puVar1[10] = (uint)bVar13 * (uint)(bVar11 >> 2 & 1) * auVar33._40_4_ |
                 (uint)!bVar13 * puVar1[10];
    puVar1[0xb] = (uint)bVar14 * (uint)(bVar11 >> 3 & 1) * auVar33._44_4_ |
                  (uint)!bVar14 * puVar1[0xb];
    puVar1[0xc] = (uint)bVar15 * (uint)(bVar11 >> 4 & 1) * auVar33._48_4_ |
                  (uint)!bVar15 * puVar1[0xc];
    puVar1[0xd] = (uint)bVar16 * (uint)(bVar11 >> 5 & 1) * auVar33._52_4_ |
                  (uint)!bVar16 * puVar1[0xd];
    puVar1[0xe] = (uint)bVar17 * (uint)(bVar11 >> 6 & 1) * auVar33._56_4_ |
                  (uint)!bVar17 * puVar1[0xe];
    puVar1[0xf] = (uint)(bVar11 >> 7) * (uVar20 >> 0xf & 1) * auVar33._60_4_ |
                  (uint)!(bool)(bVar11 >> 7) * puVar1[0xf];
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  uVar28 = uVar21;
  if (0xf < (longlong)param_5) {
    uVar26 = param_4 & 0x3f;
    if (uVar26 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14097f700;
      uVar26 = 0x40 - uVar26 >> 2;
      if ((longlong)param_5 < (longlong)uVar26) {
        uVar26 = param_5;
      }
    }
    uVar28 = param_5 - (param_5 - uVar26 & 0xf);
    if (uVar26 != 0) {
      auVar34 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar35 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar36 = vpbroadcastq_avx512f();
      uVar29 = uVar21;
      do {
        uVar18 = vpcmpgtq_avx512f(auVar36,auVar34);
        bVar11 = (byte)uVar18;
        uVar18 = vpcmpgtq_avx512f(auVar36,auVar35);
        bVar3 = (byte)uVar18;
        auVar34 = vpaddq_avx512f(auVar34,auVar33);
        auVar35 = vpaddq_avx512f(auVar35,auVar33);
        uVar19 = CONCAT11(bVar3,bVar11);
        piVar2 = (int *)(lVar24 + uVar29 * 4);
        auVar39._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
        auVar39._0_4_ = (uint)(bVar11 & 1) * *piVar2;
        auVar39._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
        auVar39._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
        auVar39._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
        auVar39._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
        auVar39._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
        auVar39._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
        auVar39._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
        auVar39._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
        auVar39._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
        auVar39._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
        auVar39._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
        auVar39._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
        auVar39._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
        auVar39._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
        piVar2 = (int *)(lVar27 + uVar29 * 4);
        auVar40._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
        auVar40._0_4_ = (uint)(bVar11 & 1) * *piVar2;
        auVar40._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
        auVar40._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
        auVar40._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
        auVar40._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
        auVar40._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
        auVar40._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
        auVar40._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
        auVar40._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
        auVar40._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
        auVar40._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
        auVar40._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
        auVar40._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
        auVar40._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
        auVar40._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
        piVar2 = (int *)(lVar25 + uVar29 * 4);
        auVar37._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
        auVar37._0_4_ = (uint)(bVar11 & 1) * *piVar2;
        auVar37._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
        auVar37._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
        auVar37._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
        auVar37._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
        auVar37._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
        auVar37._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
        auVar37._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
        auVar37._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
        auVar37._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
        auVar37._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
        auVar37._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
        auVar37._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
        auVar37._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
        auVar37._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
        piVar2 = (int *)(param_1 + uVar29 * 4);
        auVar38._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
        auVar38._0_4_ = (uint)(bVar11 & 1) * *piVar2;
        auVar38._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
        auVar38._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
        auVar38._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
        auVar38._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
        auVar38._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
        auVar38._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
        auVar38._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
        auVar38._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
        auVar38._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
        auVar38._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
        auVar38._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
        auVar38._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
        auVar38._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
        auVar38._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
        auVar39 = vaddps_avx512f(auVar39,auVar40);
        auVar40 = vaddps_avx512f(auVar37,auVar38);
        auVar39 = vmulps_avx512f(auVar31,auVar39);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar40,auVar30);
        auVar39 = vfmadd231ps_avx512f(auVar39,auVar32,*(undefined1 (*) [64])(lVar23 + uVar29 * 4));
        puVar1 = (uint *)(param_4 + uVar29 * 4);
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
        *puVar1 = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar39._0_4_ |
                  (uint)!(bool)(bVar11 & 1) * *puVar1;
        puVar1[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar39._4_4_ |
                    (uint)!bVar4 * puVar1[1];
        puVar1[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar39._8_4_ |
                    (uint)!bVar5 * puVar1[2];
        puVar1[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar39._12_4_ |
                    (uint)!bVar6 * puVar1[3];
        puVar1[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar39._16_4_ |
                    (uint)!bVar7 * puVar1[4];
        puVar1[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar39._20_4_ |
                    (uint)!bVar8 * puVar1[5];
        puVar1[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar39._24_4_ |
                    (uint)!bVar9 * puVar1[6];
        puVar1[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar39._28_4_ |
                    (uint)!bVar10 * puVar1[7];
        puVar1[8] = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar39._32_4_ |
                    (uint)!(bool)(bVar3 & 1) * puVar1[8];
        puVar1[9] = (uint)bVar12 * (uint)(bVar3 >> 1 & 1) * auVar39._36_4_ |
                    (uint)!bVar12 * puVar1[9];
        puVar1[10] = (uint)bVar13 * (uint)(bVar3 >> 2 & 1) * auVar39._40_4_ |
                     (uint)!bVar13 * puVar1[10];
        puVar1[0xb] = (uint)bVar14 * (uint)(bVar3 >> 3 & 1) * auVar39._44_4_ |
                      (uint)!bVar14 * puVar1[0xb];
        puVar1[0xc] = (uint)bVar15 * (uint)(bVar3 >> 4 & 1) * auVar39._48_4_ |
                      (uint)!bVar15 * puVar1[0xc];
        puVar1[0xd] = (uint)bVar16 * (uint)(bVar3 >> 5 & 1) * auVar39._52_4_ |
                      (uint)!bVar16 * puVar1[0xd];
        puVar1[0xe] = (uint)bVar17 * (uint)(bVar3 >> 6 & 1) * auVar39._56_4_ |
                      (uint)!bVar17 * puVar1[0xe];
        puVar1[0xf] = (uint)(bVar3 >> 7) * (uint)(bVar3 >> 7) * auVar39._60_4_ |
                      (uint)!(bool)(bVar3 >> 7) * puVar1[0xf];
        uVar29 = uVar29 + 0x10;
      } while (uVar29 < uVar26);
      if (param_5 == uVar26) {
        return;
      }
    }
    if ((longlong)(uVar26 + 0x10) <= (longlong)uVar28) {
      do {
        auVar33 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + uVar26 * 4),
                                 *(undefined1 (*) [64])(lVar27 + uVar26 * 4));
        auVar34 = vaddps_avx512f(*(undefined1 (*) [64])(lVar25 + uVar26 * 4),
                                 *(undefined1 (*) [64])(param_1 + uVar26 * 4));
        auVar33 = vmulps_avx512f(auVar31,auVar33);
        auVar33 = vfmadd231ps_avx512f(auVar33,auVar34,auVar30);
        auVar33 = vfmadd231ps_avx512f(auVar33,auVar32,*(undefined1 (*) [64])(lVar23 + uVar26 * 4));
        auVar33 = vmovntps_avx512f(auVar33);
        *(undefined1 (*) [64])(param_4 + uVar26 * 4) = auVar33;
        uVar26 = uVar26 + 0x10;
      } while (uVar26 < uVar28);
    }
  }
LAB_14097f700:
  auVar33 = _DAT_14308dc40;
  if (uVar28 + 1 <= param_5) {
    auVar34 = vmovdqu32_avx512f(_DAT_14308dc80);
    auVar35 = vmovdqu32_avx512f(_DAT_14308dcc0);
    auVar36 = vpbroadcastq_avx512f();
    do {
      uVar18 = vpcmpgtq_avx512f(auVar36,auVar34);
      bVar11 = (byte)uVar18;
      uVar18 = vpcmpgtq_avx512f(auVar36,auVar35);
      bVar3 = (byte)uVar18;
      auVar34 = vpaddq_avx512f(auVar34,auVar33);
      auVar35 = vpaddq_avx512f(auVar35,auVar33);
      uVar19 = CONCAT11(bVar3,bVar11);
      piVar2 = (int *)(lVar24 + uVar28 * 4 + uVar21 * 4);
      auVar41._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
      auVar41._0_4_ = (uint)(bVar11 & 1) * *piVar2;
      auVar41._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
      auVar41._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
      auVar41._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
      auVar41._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
      auVar41._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
      auVar41._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
      auVar41._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
      auVar41._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
      auVar41._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
      auVar41._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
      auVar41._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
      auVar41._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
      auVar41._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
      auVar41._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
      piVar2 = (int *)(lVar27 + uVar28 * 4 + uVar21 * 4);
      auVar42._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
      auVar42._0_4_ = (uint)(bVar11 & 1) * *piVar2;
      auVar42._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
      auVar42._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
      auVar42._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
      auVar42._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
      auVar42._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
      auVar42._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
      auVar42._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
      auVar42._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
      auVar42._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
      auVar42._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
      auVar42._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
      auVar42._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
      auVar42._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
      auVar42._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
      piVar2 = (int *)(lVar25 + uVar28 * 4 + uVar21 * 4);
      auVar43._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
      auVar43._0_4_ = (uint)(bVar11 & 1) * *piVar2;
      auVar43._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
      auVar43._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
      auVar43._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
      auVar43._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
      auVar43._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
      auVar43._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
      auVar43._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
      auVar43._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
      auVar43._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
      auVar43._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
      auVar43._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
      auVar43._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
      auVar43._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
      auVar43._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
      piVar2 = (int *)(param_1 + uVar28 * 4 + uVar21 * 4);
      auVar44._4_4_ = (uint)((byte)(uVar19 >> 1) & 1) * piVar2[1];
      auVar44._0_4_ = (uint)(bVar11 & 1) * *piVar2;
      auVar44._8_4_ = (uint)((byte)(uVar19 >> 2) & 1) * piVar2[2];
      auVar44._12_4_ = (uint)((byte)(uVar19 >> 3) & 1) * piVar2[3];
      auVar44._16_4_ = (uint)((byte)(uVar19 >> 4) & 1) * piVar2[4];
      auVar44._20_4_ = (uint)((byte)(uVar19 >> 5) & 1) * piVar2[5];
      auVar44._24_4_ = (uint)((byte)(uVar19 >> 6) & 1) * piVar2[6];
      auVar44._28_4_ = (uint)((byte)(uVar19 >> 7) & 1) * piVar2[7];
      auVar44._32_4_ = (uint)(bVar3 & 1) * piVar2[8];
      auVar44._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar2[9];
      auVar44._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar2[10];
      auVar44._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar2[0xb];
      auVar44._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar2[0xc];
      auVar44._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar2[0xd];
      auVar44._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar2[0xe];
      auVar44._60_4_ = (uint)(bVar3 >> 7) * piVar2[0xf];
      auVar39 = vaddps_avx512f(auVar41,auVar42);
      auVar40 = vaddps_avx512f(auVar43,auVar44);
      auVar39 = vmulps_avx512f(auVar31,auVar39);
      auVar39 = vfmadd231ps_avx512f(auVar39,auVar40,auVar30);
      auVar39 = vfmadd231ps_avx512f(auVar39,auVar32,
                                    *(undefined1 (*) [64])(lVar23 + uVar28 * 4 + uVar21 * 4));
      puVar1 = (uint *)(param_4 + uVar28 * 4 + uVar21 * 4);
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
      *puVar1 = (uint)(bVar11 & 1) * (uint)(bVar11 & 1) * auVar39._0_4_ |
                (uint)!(bool)(bVar11 & 1) * *puVar1;
      puVar1[1] = (uint)bVar4 * (uint)((byte)(uVar19 >> 1) & 1) * auVar39._4_4_ |
                  (uint)!bVar4 * puVar1[1];
      puVar1[2] = (uint)bVar5 * (uint)((byte)(uVar19 >> 2) & 1) * auVar39._8_4_ |
                  (uint)!bVar5 * puVar1[2];
      puVar1[3] = (uint)bVar6 * (uint)((byte)(uVar19 >> 3) & 1) * auVar39._12_4_ |
                  (uint)!bVar6 * puVar1[3];
      puVar1[4] = (uint)bVar7 * (uint)((byte)(uVar19 >> 4) & 1) * auVar39._16_4_ |
                  (uint)!bVar7 * puVar1[4];
      puVar1[5] = (uint)bVar8 * (uint)((byte)(uVar19 >> 5) & 1) * auVar39._20_4_ |
                  (uint)!bVar8 * puVar1[5];
      puVar1[6] = (uint)bVar9 * (uint)((byte)(uVar19 >> 6) & 1) * auVar39._24_4_ |
                  (uint)!bVar9 * puVar1[6];
      puVar1[7] = (uint)bVar10 * (uint)((byte)(uVar19 >> 7) & 1) * auVar39._28_4_ |
                  (uint)!bVar10 * puVar1[7];
      puVar1[8] = (uint)(bVar3 & 1) * (uint)(bVar3 & 1) * auVar39._32_4_ |
                  (uint)!(bool)(bVar3 & 1) * puVar1[8];
      puVar1[9] = (uint)bVar12 * (uint)(bVar3 >> 1 & 1) * auVar39._36_4_ | (uint)!bVar12 * puVar1[9]
      ;
      puVar1[10] = (uint)bVar13 * (uint)(bVar3 >> 2 & 1) * auVar39._40_4_ |
                   (uint)!bVar13 * puVar1[10];
      puVar1[0xb] = (uint)bVar14 * (uint)(bVar3 >> 3 & 1) * auVar39._44_4_ |
                    (uint)!bVar14 * puVar1[0xb];
      puVar1[0xc] = (uint)bVar15 * (uint)(bVar3 >> 4 & 1) * auVar39._48_4_ |
                    (uint)!bVar15 * puVar1[0xc];
      puVar1[0xd] = (uint)bVar16 * (uint)(bVar3 >> 5 & 1) * auVar39._52_4_ |
                    (uint)!bVar16 * puVar1[0xd];
      puVar1[0xe] = (uint)bVar17 * (uint)(bVar3 >> 6 & 1) * auVar39._56_4_ |
                    (uint)!bVar17 * puVar1[0xe];
      puVar1[0xf] = (uint)(bVar3 >> 7) * (uint)(bVar3 >> 7) * auVar39._60_4_ |
                    (uint)!(bool)(bVar3 >> 7) * puVar1[0xf];
      uVar21 = uVar21 + 0x10;
    } while (uVar21 < param_5 - uVar28);
  }
  return;
}

