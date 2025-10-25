
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140241180(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ushort uVar28;
  uint uVar29;
  undefined1 auVar30 [32];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  
  param_3 = param_3 + -1;
  if (param_3 < 0) {
    param_3 = 2;
  }
  auVar31 = vbroadcastss_avx512f(ZEXT416(*param_6));
  auVar32 = vbroadcastss_avx512f(ZEXT416(param_6[1]));
  lVar23 = param_2 * 3 + param_1;
  lVar25 = (longlong)(param_3 + 1);
  if (2 < (longlong)(param_3 + 1)) {
    lVar25 = 0;
  }
  lVar20 = param_3 * param_2 + param_1;
  lVar24 = lVar25 + 1;
  if (2 < lVar25 + 1) {
    lVar24 = 0;
  }
  lVar26 = param_2 * lVar25 + param_1;
  param_1 = param_1 + param_2 * lVar24;
  lVar25 = 0;
  if (0 < (longlong)(param_5 & 0xfffffffffffffff0)) {
    do {
      auVar33 = vmulps_avx512f(auVar32,*(undefined1 (*) [64])(lVar26 + lVar25 * 4));
      auVar34 = vaddps_avx512f(*(undefined1 (*) [64])(lVar20 + lVar25 * 4),
                               *(undefined1 (*) [64])(param_1 + lVar25 * 4));
      auVar33 = vfmadd231ps_avx512f(auVar33,auVar34,auVar31);
      *(undefined1 (*) [64])(lVar23 + lVar25 * 4) = auVar33;
      lVar25 = lVar25 + 0x10;
    } while (lVar25 < (longlong)(param_5 & 0xfffffffffffffff0));
  }
  uVar29 = 0xffff >> (((int)lVar25 - (int)param_5) + 0x10U & 0x1f);
  if (uVar29 != 0) {
    uVar28 = (ushort)uVar29;
    piVar1 = (int *)(lVar26 + lVar25 * 4);
    bVar3 = (byte)uVar29;
    auVar33._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
    auVar33._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar33._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
    auVar33._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
    auVar33._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
    auVar33._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
    auVar33._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
    auVar33._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
    bVar11 = (byte)(uVar29 >> 8);
    auVar33._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar33._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar33._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar33._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar33._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar33._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar33._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar33._60_4_ = (uVar29 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(lVar20 + lVar25 * 4);
    auVar34._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
    auVar34._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar34._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
    auVar34._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
    auVar34._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
    auVar34._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
    auVar34._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
    auVar34._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
    auVar34._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar34._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar34._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar34._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar34._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar34._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar34._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar34._60_4_ = (uVar29 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(param_1 + lVar25 * 4);
    auVar36._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
    auVar36._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar36._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
    auVar36._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
    auVar36._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
    auVar36._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
    auVar36._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
    auVar36._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
    auVar36._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar36._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar36._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar36._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar36._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar36._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar36._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar36._60_4_ = (uVar29 >> 0xf & 1) * piVar1[0xf];
    auVar32 = vmulps_avx512f(auVar32,auVar33);
    auVar33 = vaddps_avx512f(auVar34,auVar36);
    auVar31 = vfmadd213ps_avx512f(auVar31,auVar33,auVar32);
    puVar2 = (uint *)(lVar23 + lVar25 * 4);
    bVar4 = (bool)((byte)(uVar28 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar28 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar28 >> 3) & 1);
    bVar7 = (bool)((byte)(uVar28 >> 4) & 1);
    bVar8 = (bool)((byte)(uVar28 >> 5) & 1);
    bVar9 = (bool)((byte)(uVar28 >> 6) & 1);
    bVar10 = (bool)((byte)(uVar28 >> 7) & 1);
    bVar12 = (bool)(bVar11 >> 1 & 1);
    bVar13 = (bool)(bVar11 >> 2 & 1);
    bVar14 = (bool)(bVar11 >> 3 & 1);
    bVar15 = (bool)(bVar11 >> 4 & 1);
    bVar16 = (bool)(bVar11 >> 5 & 1);
    bVar17 = (bool)(bVar11 >> 6 & 1);
    *puVar2 = (uint)(bVar3 & 1) * auVar31._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
    puVar2[1] = (uint)bVar4 * auVar31._4_4_ | (uint)!bVar4 * puVar2[1];
    puVar2[2] = (uint)bVar5 * auVar31._8_4_ | (uint)!bVar5 * puVar2[2];
    puVar2[3] = (uint)bVar6 * auVar31._12_4_ | (uint)!bVar6 * puVar2[3];
    puVar2[4] = (uint)bVar7 * auVar31._16_4_ | (uint)!bVar7 * puVar2[4];
    puVar2[5] = (uint)bVar8 * auVar31._20_4_ | (uint)!bVar8 * puVar2[5];
    puVar2[6] = (uint)bVar9 * auVar31._24_4_ | (uint)!bVar9 * puVar2[6];
    puVar2[7] = (uint)bVar10 * auVar31._28_4_ | (uint)!bVar10 * puVar2[7];
    puVar2[8] = (uint)(bVar11 & 1) * auVar31._32_4_ | (uint)!(bool)(bVar11 & 1) * puVar2[8];
    puVar2[9] = (uint)bVar12 * auVar31._36_4_ | (uint)!bVar12 * puVar2[9];
    puVar2[10] = (uint)bVar13 * auVar31._40_4_ | (uint)!bVar13 * puVar2[10];
    puVar2[0xb] = (uint)bVar14 * auVar31._44_4_ | (uint)!bVar14 * puVar2[0xb];
    puVar2[0xc] = (uint)bVar15 * auVar31._48_4_ | (uint)!bVar15 * puVar2[0xc];
    puVar2[0xd] = (uint)bVar16 * auVar31._52_4_ | (uint)!bVar16 * puVar2[0xd];
    puVar2[0xe] = (uint)bVar17 * auVar31._56_4_ | (uint)!bVar17 * puVar2[0xe];
    puVar2[0xf] = (uint)(bVar11 >> 7) * auVar31._60_4_ | (uint)!(bool)(bVar11 >> 7) * puVar2[0xf];
  }
  auVar31 = _DAT_143088900;
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x20) {
      uVar22 = 0;
    }
    else {
      if ((longlong)param_5 < 0x121) {
        uVar21 = 0;
        uVar22 = param_5 & 0xffffffffffffffe0;
      }
      else {
        uVar21 = param_4 & 0x3f;
        if ((param_4 & 1) == 0) {
          if ((uVar21 != 0) && (uVar21 = 0x40 - uVar21 >> 1, (longlong)param_5 < (longlong)uVar21))
          {
            uVar21 = param_5;
          }
        }
        else {
          uVar21 = 0;
        }
        uVar22 = param_5 - (param_5 - uVar21 & 0x1f);
        if (uVar21 != 0) {
          uVar27 = 0;
          lVar25 = 0;
          auVar32 = vmovdqu32_avx512f(_DAT_143088940);
          auVar33 = vmovdqu32_avx512f(_DAT_143088980);
          auVar34 = vpbroadcastq_avx512f();
          do {
            uVar18 = vpcmpgtq_avx512f(auVar34,auVar32);
            uVar19 = vpcmpgtq_avx512f(auVar34,auVar33);
            bVar3 = (byte)uVar19;
            auVar32 = vpaddq_avx512f(auVar32,auVar31);
            auVar33 = vpaddq_avx512f(auVar33,auVar31);
            uVar28 = CONCAT11(bVar3,(byte)uVar18);
            piVar1 = (int *)(lVar23 + uVar27 * 4);
            auVar35._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
            auVar35._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
            auVar35._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
            auVar35._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
            auVar35._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
            auVar35._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
            auVar35._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
            auVar35._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
            auVar35._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar35._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar35._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar35._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar35._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar35._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar35._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar35._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            uVar27 = uVar27 + 0x10;
            auVar36 = vcvtps2dq_avx512f(auVar35);
            auVar30 = vextractf64x4_avx512f(auVar36,1);
            auVar30 = vpackssdw_avx512vl(auVar36._0_32_,auVar30);
            auVar30 = vpermq_avx512vl(auVar30,0xd8);
            auVar30 = vmovdqu16_avx512vl(auVar30);
            *(undefined1 (*) [32])(lVar25 + param_4) = auVar30;
            lVar25 = lVar25 + 0x20;
          } while (uVar27 < uVar21);
          if (param_5 == uVar21) {
            return;
          }
        }
      }
      if ((longlong)(uVar21 + 0x20) <= (longlong)uVar22) {
        do {
          auVar31 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar23 + uVar21 * 4));
          auVar32 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar23 + 0x40 + uVar21 * 4));
          auVar33 = vshuff32x4_avx512f(auVar31,auVar32,0x88);
          auVar31 = vshuff32x4_avx512f(auVar31,auVar32,0xdd);
          auVar31 = vpackssdw_avx512bw(auVar33,auVar31);
          auVar31 = vmovdqu32_avx512f(auVar31);
          *(undefined1 (*) [64])(param_4 + uVar21 * 2) = auVar31;
          uVar21 = uVar21 + 0x20;
        } while (uVar21 < uVar22);
      }
    }
    auVar31 = _DAT_143088900;
    if (param_5 < uVar22 + 1) {
      return;
    }
    uVar21 = 0;
    auVar32 = vmovdqu32_avx512f(_DAT_143088940);
    auVar33 = vmovdqu32_avx512f(_DAT_143088980);
    auVar34 = vpbroadcastq_avx512f();
    lVar25 = 0;
    do {
      uVar18 = vpcmpgtq_avx512f(auVar34,auVar32);
      uVar19 = vpcmpgtq_avx512f(auVar34,auVar33);
      bVar3 = (byte)uVar19;
      auVar32 = vpaddq_avx512f(auVar32,auVar31);
      auVar33 = vpaddq_avx512f(auVar33,auVar31);
      uVar28 = CONCAT11(bVar3,(byte)uVar18);
      piVar1 = (int *)(lVar23 + uVar22 * 4 + uVar21 * 4);
      auVar37._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
      auVar37._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
      auVar37._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
      auVar37._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
      auVar37._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
      auVar37._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
      auVar37._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
      auVar37._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
      auVar37._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar37._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar37._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar37._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar37._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar37._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar37._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar37._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      uVar21 = uVar21 + 0x10;
      auVar36 = vcvtps2dq_avx512f(auVar37);
      auVar30 = vextractf64x4_avx512f(auVar36,1);
      auVar30 = vpackssdw_avx512vl(auVar36._0_32_,auVar30);
      auVar30 = vpermq_avx512vl(auVar30,0xd8);
      auVar30 = vmovdqu16_avx512vl(auVar30);
      *(undefined1 (*) [32])(lVar25 + param_4 + uVar22 * 2) = auVar30;
      lVar25 = lVar25 + 0x20;
    } while (uVar21 < param_5 - uVar22);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x20) {
LAB_140241670:
    uVar21 = 0;
  }
  else {
    uVar22 = param_4 & 0x3f;
    if (uVar22 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140241670;
      uVar22 = 0x40 - uVar22 >> 1;
      if ((longlong)param_5 < (longlong)uVar22) {
        uVar22 = param_5;
      }
    }
    uVar21 = param_5 - (param_5 - uVar22 & 0x1f);
    if (uVar22 != 0) {
      uVar27 = 0;
      lVar25 = 0;
      auVar32 = vmovdqu32_avx512f(_DAT_143088940);
      auVar33 = vmovdqu32_avx512f(_DAT_143088980);
      auVar34 = vpbroadcastq_avx512f();
      do {
        uVar18 = vpcmpgtq_avx512f(auVar34,auVar32);
        uVar19 = vpcmpgtq_avx512f(auVar34,auVar33);
        bVar3 = (byte)uVar19;
        auVar32 = vpaddq_avx512f(auVar32,auVar31);
        auVar33 = vpaddq_avx512f(auVar33,auVar31);
        uVar28 = CONCAT11(bVar3,(byte)uVar18);
        piVar1 = (int *)(lVar23 + uVar27 * 4);
        auVar38._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
        auVar38._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
        auVar38._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
        auVar38._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
        auVar38._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
        auVar38._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
        auVar38._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
        auVar38._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
        auVar38._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar38._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar38._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar38._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar38._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar38._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar38._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar38._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        uVar27 = uVar27 + 0x10;
        auVar36 = vcvtps2dq_avx512f(auVar38);
        auVar30 = vextractf64x4_avx512f(auVar36,1);
        auVar30 = vpackssdw_avx512vl(auVar36._0_32_,auVar30);
        auVar30 = vpermq_avx512vl(auVar30,0xd8);
        auVar30 = vmovdqu16_avx512vl(auVar30);
        *(undefined1 (*) [32])(lVar25 + param_4) = auVar30;
        lVar25 = lVar25 + 0x20;
      } while (uVar27 < uVar22);
      if (param_5 == uVar22) {
        return;
      }
    }
    if ((longlong)(uVar22 + 0x20) <= (longlong)uVar21) {
      do {
        auVar31 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar23 + uVar22 * 4));
        auVar32 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar23 + 0x40 + uVar22 * 4));
        auVar33 = vshuff32x4_avx512f(auVar31,auVar32,0x88);
        auVar31 = vshuff32x4_avx512f(auVar31,auVar32,0xdd);
        auVar31 = vpackssdw_avx512bw(auVar33,auVar31);
        auVar31 = vmovntdq_avx512f(auVar31);
        *(undefined1 (*) [64])(param_4 + uVar22 * 2) = auVar31;
        uVar22 = uVar22 + 0x20;
      } while (uVar22 < uVar21);
    }
  }
  auVar31 = _DAT_143088900;
  if (uVar21 + 1 <= param_5) {
    uVar22 = 0;
    auVar32 = vmovdqu32_avx512f(_DAT_143088940);
    auVar33 = vmovdqu32_avx512f(_DAT_143088980);
    auVar34 = vpbroadcastq_avx512f();
    lVar25 = 0;
    do {
      uVar18 = vpcmpgtq_avx512f(auVar34,auVar32);
      uVar19 = vpcmpgtq_avx512f(auVar34,auVar33);
      bVar3 = (byte)uVar19;
      auVar32 = vpaddq_avx512f(auVar32,auVar31);
      auVar33 = vpaddq_avx512f(auVar33,auVar31);
      uVar28 = CONCAT11(bVar3,(byte)uVar18);
      piVar1 = (int *)(lVar23 + uVar21 * 4 + uVar22 * 4);
      auVar39._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar1[1];
      auVar39._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
      auVar39._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar1[2];
      auVar39._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar1[3];
      auVar39._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar1[4];
      auVar39._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar1[5];
      auVar39._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar1[6];
      auVar39._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar1[7];
      auVar39._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar39._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar39._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar39._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar39._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar39._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar39._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar39._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      uVar22 = uVar22 + 0x10;
      auVar36 = vcvtps2dq_avx512f(auVar39);
      auVar30 = vextractf64x4_avx512f(auVar36,1);
      auVar30 = vpackssdw_avx512vl(auVar36._0_32_,auVar30);
      auVar30 = vpermq_avx512vl(auVar30,0xd8);
      auVar30 = vmovdqu16_avx512vl(auVar30);
      *(undefined1 (*) [32])(lVar25 + param_4 + uVar21 * 2) = auVar30;
      lVar25 = lVar25 + 0x20;
    } while (uVar22 < param_5 - uVar21);
  }
  return;
}

