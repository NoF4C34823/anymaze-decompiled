
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14023c9c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  ulonglong uVar19;
  ushort uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
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
  
  auVar30 = _DAT_143088900;
  uVar19 = 0;
  lVar22 = (longlong)param_3 + -1;
  auVar28 = vbroadcastss_avx512f(ZEXT416(*param_6));
  auVar29 = vbroadcastss_avx512f(ZEXT416(param_6[1]));
  if ((longlong)param_3 < 1) {
    lVar22 = 2;
  }
  uVar26 = (longlong)(int)lVar22 + 1;
  if (2 < (longlong)uVar26) {
    uVar26 = uVar19;
  }
  uVar25 = (longlong)(int)uVar26 + 1;
  if (2 < (longlong)uVar25) {
    uVar25 = uVar19;
  }
  lVar24 = param_2 * lVar22 + param_1;
  lVar23 = param_2 * uVar26 + param_1;
  param_1 = param_1 + param_2 * uVar25;
  lVar22 = 0;
  if (param_8 == 0) {
    if (0 < (longlong)(param_5 & 0xfffffffffffffff0)) {
      do {
        auVar30 = vmulps_avx512f(auVar29,*(undefined1 (*) [64])(lVar23 + lVar22 * 4));
        auVar31 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + lVar22 * 4),
                                 *(undefined1 (*) [64])(param_1 + lVar22 * 4));
        auVar30 = vfmadd231ps_avx512f(auVar30,auVar31,auVar28);
        *(undefined1 (*) [64])(param_4 + lVar22 * 4) = auVar30;
        lVar22 = lVar22 + 0x10;
      } while (lVar22 < (longlong)(param_5 & 0xfffffffffffffff0));
    }
    uVar21 = 0xffff >> (((int)lVar22 - (int)param_5) + 0x10U & 0x1f);
    if (uVar21 == 0) {
      return;
    }
    uVar20 = (ushort)uVar21;
    piVar1 = (int *)(lVar23 + lVar22 * 4);
    bVar3 = (byte)uVar21;
    auVar30._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
    auVar30._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar30._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
    auVar30._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
    auVar30._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
    auVar30._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
    auVar30._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
    auVar30._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
    bVar11 = (byte)(uVar21 >> 8);
    auVar30._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar30._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar30._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar30._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar30._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar30._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar30._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar30._60_4_ = (uVar21 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar24 + lVar22 * 4);
    auVar31._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
    auVar31._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar31._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
    auVar31._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
    auVar31._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
    auVar31._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
    auVar31._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
    auVar31._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
    auVar31._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar31._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar31._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar31._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar31._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar31._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar31._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar31._60_4_ = (uVar21 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(param_1 + lVar22 * 4);
    auVar32._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
    auVar32._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar32._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
    auVar32._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
    auVar32._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
    auVar32._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
    auVar32._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
    auVar32._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
    auVar32._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar32._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar32._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar32._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar32._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar32._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar32._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar32._60_4_ = (uVar21 >> 0xf & 1) * piVar1[0xf];
    auVar30 = vmulps_avx512f(auVar29,auVar30);
    auVar29 = vaddps_avx512f(auVar31,auVar32);
    auVar30 = vfmadd213ps_avx512f(auVar28,auVar29,auVar30);
    puVar2 = (uint *)(param_4 + lVar22 * 4);
    bVar4 = (bool)((byte)(uVar20 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar20 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar20 >> 3) & 1);
    bVar7 = (bool)((byte)(uVar20 >> 4) & 1);
    bVar8 = (bool)((byte)(uVar20 >> 5) & 1);
    bVar9 = (bool)((byte)(uVar20 >> 6) & 1);
    bVar10 = (bool)((byte)(uVar20 >> 7) & 1);
    bVar12 = (bool)(bVar11 >> 1 & 1);
    bVar13 = (bool)(bVar11 >> 2 & 1);
    bVar14 = (bool)(bVar11 >> 3 & 1);
    bVar15 = (bool)(bVar11 >> 4 & 1);
    bVar16 = (bool)(bVar11 >> 5 & 1);
    bVar17 = (bool)(bVar11 >> 6 & 1);
    *puVar2 = (uint)(bVar3 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
    puVar2[1] = (uint)bVar4 * auVar30._4_4_ | (uint)!bVar4 * puVar2[1];
    puVar2[2] = (uint)bVar5 * auVar30._8_4_ | (uint)!bVar5 * puVar2[2];
    puVar2[3] = (uint)bVar6 * auVar30._12_4_ | (uint)!bVar6 * puVar2[3];
    puVar2[4] = (uint)bVar7 * auVar30._16_4_ | (uint)!bVar7 * puVar2[4];
    puVar2[5] = (uint)bVar8 * auVar30._20_4_ | (uint)!bVar8 * puVar2[5];
    puVar2[6] = (uint)bVar9 * auVar30._24_4_ | (uint)!bVar9 * puVar2[6];
    puVar2[7] = (uint)bVar10 * auVar30._28_4_ | (uint)!bVar10 * puVar2[7];
    puVar2[8] = (uint)(bVar11 & 1) * auVar30._32_4_ | (uint)!(bool)(bVar11 & 1) * puVar2[8];
    puVar2[9] = (uint)bVar12 * auVar30._36_4_ | (uint)!bVar12 * puVar2[9];
    puVar2[10] = (uint)bVar13 * auVar30._40_4_ | (uint)!bVar13 * puVar2[10];
    puVar2[0xb] = (uint)bVar14 * auVar30._44_4_ | (uint)!bVar14 * puVar2[0xb];
    puVar2[0xc] = (uint)bVar15 * auVar30._48_4_ | (uint)!bVar15 * puVar2[0xc];
    puVar2[0xd] = (uint)bVar16 * auVar30._52_4_ | (uint)!bVar16 * puVar2[0xd];
    puVar2[0xe] = (uint)bVar17 * auVar30._56_4_ | (uint)!bVar17 * puVar2[0xe];
    puVar2[0xf] = (uint)(bVar11 >> 7) * auVar30._60_4_ | (uint)!(bool)(bVar11 >> 7) * puVar2[0xf];
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  uVar26 = uVar19;
  if (0xf < (longlong)param_5) {
    uVar25 = param_4 & 0x3f;
    if (uVar25 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14023cc0b;
      uVar25 = 0x40 - uVar25 >> 2;
      if ((longlong)param_5 < (longlong)uVar25) {
        uVar25 = param_5;
      }
    }
    uVar26 = param_5 - (param_5 - uVar25 & 0xf);
    if (uVar25 != 0) {
      auVar31 = vmovdqu32_avx512f(_DAT_143088940);
      auVar32 = vmovdqu32_avx512f(_DAT_143088980);
      auVar33 = vpbroadcastq_avx512f();
      uVar27 = uVar19;
      do {
        uVar18 = vpcmpgtq_avx512f(auVar33,auVar31);
        bVar11 = (byte)uVar18;
        uVar18 = vpcmpgtq_avx512f(auVar33,auVar32);
        bVar3 = (byte)uVar18;
        auVar31 = vpaddq_avx512f(auVar31,auVar30);
        auVar32 = vpaddq_avx512f(auVar32,auVar30);
        uVar20 = CONCAT11(bVar3,bVar11);
        piVar1 = (int *)(lVar23 + uVar27 * 4);
        auVar35._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
        auVar35._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar35._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
        auVar35._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
        auVar35._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
        auVar35._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
        auVar35._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
        auVar35._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
        auVar35._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar35._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar35._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar35._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar35._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar35._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar35._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar35._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(lVar24 + uVar27 * 4);
        auVar36._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
        auVar36._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar36._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
        auVar36._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
        auVar36._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
        auVar36._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
        auVar36._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
        auVar36._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
        auVar36._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar36._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar36._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar36._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar36._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar36._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar36._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar36._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_1 + uVar27 * 4);
        auVar34._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
        auVar34._0_4_ = (uint)(bVar11 & 1) * *piVar1;
        auVar34._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
        auVar34._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
        auVar34._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
        auVar34._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
        auVar34._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
        auVar34._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
        auVar34._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar34._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar34._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar34._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar34._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar34._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar34._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar34._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        auVar35 = vmulps_avx512f(auVar29,auVar35);
        auVar36 = vaddps_avx512f(auVar36,auVar34);
        auVar35 = vfmadd231ps_avx512f(auVar35,auVar36,auVar28);
        puVar2 = (uint *)(param_4 + uVar27 * 4);
        bVar4 = (bool)((byte)(uVar20 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar20 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar20 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar20 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar20 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar20 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar20 >> 7) & 1);
        bVar12 = (bool)(bVar3 >> 1 & 1);
        bVar13 = (bool)(bVar3 >> 2 & 1);
        bVar14 = (bool)(bVar3 >> 3 & 1);
        bVar15 = (bool)(bVar3 >> 4 & 1);
        bVar16 = (bool)(bVar3 >> 5 & 1);
        bVar17 = (bool)(bVar3 >> 6 & 1);
        *puVar2 = (uint)(bVar11 & 1) * auVar35._0_4_ | (uint)!(bool)(bVar11 & 1) * *puVar2;
        puVar2[1] = (uint)bVar4 * auVar35._4_4_ | (uint)!bVar4 * puVar2[1];
        puVar2[2] = (uint)bVar5 * auVar35._8_4_ | (uint)!bVar5 * puVar2[2];
        puVar2[3] = (uint)bVar6 * auVar35._12_4_ | (uint)!bVar6 * puVar2[3];
        puVar2[4] = (uint)bVar7 * auVar35._16_4_ | (uint)!bVar7 * puVar2[4];
        puVar2[5] = (uint)bVar8 * auVar35._20_4_ | (uint)!bVar8 * puVar2[5];
        puVar2[6] = (uint)bVar9 * auVar35._24_4_ | (uint)!bVar9 * puVar2[6];
        puVar2[7] = (uint)bVar10 * auVar35._28_4_ | (uint)!bVar10 * puVar2[7];
        puVar2[8] = (uint)(bVar3 & 1) * auVar35._32_4_ | (uint)!(bool)(bVar3 & 1) * puVar2[8];
        puVar2[9] = (uint)bVar12 * auVar35._36_4_ | (uint)!bVar12 * puVar2[9];
        puVar2[10] = (uint)bVar13 * auVar35._40_4_ | (uint)!bVar13 * puVar2[10];
        puVar2[0xb] = (uint)bVar14 * auVar35._44_4_ | (uint)!bVar14 * puVar2[0xb];
        puVar2[0xc] = (uint)bVar15 * auVar35._48_4_ | (uint)!bVar15 * puVar2[0xc];
        puVar2[0xd] = (uint)bVar16 * auVar35._52_4_ | (uint)!bVar16 * puVar2[0xd];
        puVar2[0xe] = (uint)bVar17 * auVar35._56_4_ | (uint)!bVar17 * puVar2[0xe];
        puVar2[0xf] = (uint)(bVar3 >> 7) * auVar35._60_4_ | (uint)!(bool)(bVar3 >> 7) * puVar2[0xf];
        uVar27 = uVar27 + 0x10;
      } while (uVar27 < uVar25);
      if (param_5 == uVar25) {
        return;
      }
    }
    if ((longlong)(uVar25 + 0x10) <= (longlong)uVar26) {
      do {
        auVar30 = vmulps_avx512f(auVar29,*(undefined1 (*) [64])(lVar23 + uVar25 * 4));
        auVar31 = vaddps_avx512f(*(undefined1 (*) [64])(lVar24 + uVar25 * 4),
                                 *(undefined1 (*) [64])(param_1 + uVar25 * 4));
        auVar30 = vfmadd231ps_avx512f(auVar30,auVar31,auVar28);
        auVar30 = vmovntps_avx512f(auVar30);
        *(undefined1 (*) [64])(param_4 + uVar25 * 4) = auVar30;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 < uVar26);
    }
  }
LAB_14023cc0b:
  auVar30 = _DAT_143088900;
  if (uVar26 + 1 <= param_5) {
    auVar31 = vmovdqu32_avx512f(_DAT_143088940);
    auVar32 = vmovdqu32_avx512f(_DAT_143088980);
    auVar33 = vpbroadcastq_avx512f();
    do {
      uVar18 = vpcmpgtq_avx512f(auVar33,auVar31);
      bVar11 = (byte)uVar18;
      uVar18 = vpcmpgtq_avx512f(auVar33,auVar32);
      bVar3 = (byte)uVar18;
      auVar31 = vpaddq_avx512f(auVar31,auVar30);
      auVar32 = vpaddq_avx512f(auVar32,auVar30);
      uVar20 = CONCAT11(bVar3,bVar11);
      piVar1 = (int *)(lVar23 + uVar26 * 4 + uVar19 * 4);
      auVar37._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
      auVar37._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar37._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
      auVar37._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
      auVar37._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
      auVar37._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
      auVar37._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
      auVar37._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
      auVar37._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar37._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar37._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar37._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar37._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar37._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar37._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar37._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar24 + uVar26 * 4 + uVar19 * 4);
      auVar38._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
      auVar38._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar38._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
      auVar38._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
      auVar38._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
      auVar38._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
      auVar38._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
      auVar38._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
      auVar38._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar38._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar38._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar38._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar38._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar38._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar38._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar38._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(param_1 + uVar26 * 4 + uVar19 * 4);
      auVar39._4_4_ = (uint)((byte)(uVar20 >> 1) & 1) * piVar1[1];
      auVar39._0_4_ = (uint)(bVar11 & 1) * *piVar1;
      auVar39._8_4_ = (uint)((byte)(uVar20 >> 2) & 1) * piVar1[2];
      auVar39._12_4_ = (uint)((byte)(uVar20 >> 3) & 1) * piVar1[3];
      auVar39._16_4_ = (uint)((byte)(uVar20 >> 4) & 1) * piVar1[4];
      auVar39._20_4_ = (uint)((byte)(uVar20 >> 5) & 1) * piVar1[5];
      auVar39._24_4_ = (uint)((byte)(uVar20 >> 6) & 1) * piVar1[6];
      auVar39._28_4_ = (uint)((byte)(uVar20 >> 7) & 1) * piVar1[7];
      auVar39._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar39._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar39._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar39._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar39._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar39._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar39._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar39._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      auVar35 = vmulps_avx512f(auVar29,auVar37);
      auVar36 = vaddps_avx512f(auVar38,auVar39);
      auVar35 = vfmadd231ps_avx512f(auVar35,auVar36,auVar28);
      puVar2 = (uint *)(param_4 + uVar26 * 4 + uVar19 * 4);
      bVar4 = (bool)((byte)(uVar20 >> 1) & 1);
      bVar5 = (bool)((byte)(uVar20 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar20 >> 3) & 1);
      bVar7 = (bool)((byte)(uVar20 >> 4) & 1);
      bVar8 = (bool)((byte)(uVar20 >> 5) & 1);
      bVar9 = (bool)((byte)(uVar20 >> 6) & 1);
      bVar10 = (bool)((byte)(uVar20 >> 7) & 1);
      bVar12 = (bool)(bVar3 >> 1 & 1);
      bVar13 = (bool)(bVar3 >> 2 & 1);
      bVar14 = (bool)(bVar3 >> 3 & 1);
      bVar15 = (bool)(bVar3 >> 4 & 1);
      bVar16 = (bool)(bVar3 >> 5 & 1);
      bVar17 = (bool)(bVar3 >> 6 & 1);
      *puVar2 = (uint)(bVar11 & 1) * auVar35._0_4_ | (uint)!(bool)(bVar11 & 1) * *puVar2;
      puVar2[1] = (uint)bVar4 * auVar35._4_4_ | (uint)!bVar4 * puVar2[1];
      puVar2[2] = (uint)bVar5 * auVar35._8_4_ | (uint)!bVar5 * puVar2[2];
      puVar2[3] = (uint)bVar6 * auVar35._12_4_ | (uint)!bVar6 * puVar2[3];
      puVar2[4] = (uint)bVar7 * auVar35._16_4_ | (uint)!bVar7 * puVar2[4];
      puVar2[5] = (uint)bVar8 * auVar35._20_4_ | (uint)!bVar8 * puVar2[5];
      puVar2[6] = (uint)bVar9 * auVar35._24_4_ | (uint)!bVar9 * puVar2[6];
      puVar2[7] = (uint)bVar10 * auVar35._28_4_ | (uint)!bVar10 * puVar2[7];
      puVar2[8] = (uint)(bVar3 & 1) * auVar35._32_4_ | (uint)!(bool)(bVar3 & 1) * puVar2[8];
      puVar2[9] = (uint)bVar12 * auVar35._36_4_ | (uint)!bVar12 * puVar2[9];
      puVar2[10] = (uint)bVar13 * auVar35._40_4_ | (uint)!bVar13 * puVar2[10];
      puVar2[0xb] = (uint)bVar14 * auVar35._44_4_ | (uint)!bVar14 * puVar2[0xb];
      puVar2[0xc] = (uint)bVar15 * auVar35._48_4_ | (uint)!bVar15 * puVar2[0xc];
      puVar2[0xd] = (uint)bVar16 * auVar35._52_4_ | (uint)!bVar16 * puVar2[0xd];
      puVar2[0xe] = (uint)bVar17 * auVar35._56_4_ | (uint)!bVar17 * puVar2[0xe];
      puVar2[0xf] = (uint)(bVar3 >> 7) * auVar35._60_4_ | (uint)!(bool)(bVar3 >> 7) * puVar2[0xf];
      uVar19 = uVar19 + 0x10;
    } while (uVar19 < param_5 - uVar26);
  }
  return;
}

