
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a2d0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
  longlong in_RAX;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong in_R10;
  longlong lVar22;
  longlong in_R11;
  ulonglong uVar23;
  ushort uVar24;
  uint uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  int in_stack_00000078;
  
  uVar25 = 0xffff >> (((int)in_R10 - (int)param_2) + 0x10U & 0x1f);
  if (uVar25 != 0) {
    uVar24 = (ushort)uVar25;
    piVar1 = (int *)(in_R11 + in_R10 * 4);
    bVar3 = (byte)uVar25;
    auVar27._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
    auVar27._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar27._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
    auVar27._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
    auVar27._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
    auVar27._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
    auVar27._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
    auVar27._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
    bVar11 = (byte)(uVar25 >> 8);
    auVar27._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar27._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar27._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar27._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar27._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar27._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar27._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar27._60_4_ = (uVar25 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(in_RAX + in_R10 * 4);
    auVar28._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
    auVar28._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar28._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
    auVar28._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
    auVar28._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
    auVar28._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
    auVar28._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
    auVar28._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
    auVar28._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar28._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar28._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar28._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar28._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar28._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar28._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar28._60_4_ = (uVar25 >> 0xf & 1) * piVar1[0xf];
    piVar1 = (int *)(param_1 + in_R10 * 4);
    auVar29._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
    auVar29._0_4_ = (uint)(bVar3 & 1) * *piVar1;
    auVar29._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
    auVar29._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
    auVar29._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
    auVar29._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
    auVar29._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
    auVar29._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
    auVar29._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
    auVar29._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
    auVar29._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
    auVar29._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
    auVar29._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
    auVar29._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
    auVar29._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
    auVar29._60_4_ = (uVar25 >> 0xf & 1) * piVar1[0xf];
    auVar27 = vmulps_avx512f(in_ZMM0,auVar27);
    auVar28 = vaddps_avx512f(auVar28,auVar29);
    auVar27 = vfmadd213ps_avx512f(in_ZMM1,auVar28,auVar27);
    puVar2 = (uint *)(param_3 + in_R10 * 4);
    bVar4 = (bool)((byte)(uVar24 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar24 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar24 >> 3) & 1);
    bVar7 = (bool)((byte)(uVar24 >> 4) & 1);
    bVar8 = (bool)((byte)(uVar24 >> 5) & 1);
    bVar9 = (bool)((byte)(uVar24 >> 6) & 1);
    bVar10 = (bool)((byte)(uVar24 >> 7) & 1);
    bVar12 = (bool)(bVar11 >> 1 & 1);
    bVar13 = (bool)(bVar11 >> 2 & 1);
    bVar14 = (bool)(bVar11 >> 3 & 1);
    bVar15 = (bool)(bVar11 >> 4 & 1);
    bVar16 = (bool)(bVar11 >> 5 & 1);
    bVar17 = (bool)(bVar11 >> 6 & 1);
    *puVar2 = (uint)(bVar3 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
    puVar2[1] = (uint)bVar4 * auVar27._4_4_ | (uint)!bVar4 * puVar2[1];
    puVar2[2] = (uint)bVar5 * auVar27._8_4_ | (uint)!bVar5 * puVar2[2];
    puVar2[3] = (uint)bVar6 * auVar27._12_4_ | (uint)!bVar6 * puVar2[3];
    puVar2[4] = (uint)bVar7 * auVar27._16_4_ | (uint)!bVar7 * puVar2[4];
    puVar2[5] = (uint)bVar8 * auVar27._20_4_ | (uint)!bVar8 * puVar2[5];
    puVar2[6] = (uint)bVar9 * auVar27._24_4_ | (uint)!bVar9 * puVar2[6];
    puVar2[7] = (uint)bVar10 * auVar27._28_4_ | (uint)!bVar10 * puVar2[7];
    puVar2[8] = (uint)(bVar11 & 1) * auVar27._32_4_ | (uint)!(bool)(bVar11 & 1) * puVar2[8];
    puVar2[9] = (uint)bVar12 * auVar27._36_4_ | (uint)!bVar12 * puVar2[9];
    puVar2[10] = (uint)bVar13 * auVar27._40_4_ | (uint)!bVar13 * puVar2[10];
    puVar2[0xb] = (uint)bVar14 * auVar27._44_4_ | (uint)!bVar14 * puVar2[0xb];
    puVar2[0xc] = (uint)bVar15 * auVar27._48_4_ | (uint)!bVar15 * puVar2[0xc];
    puVar2[0xd] = (uint)bVar16 * auVar27._52_4_ | (uint)!bVar16 * puVar2[0xd];
    puVar2[0xe] = (uint)bVar17 * auVar27._56_4_ | (uint)!bVar17 * puVar2[0xe];
    puVar2[0xf] = (uint)(bVar11 >> 7) * auVar27._60_4_ | (uint)!(bool)(bVar11 >> 7) * puVar2[0xf];
  }
  auVar27 = _DAT_143086fc0;
  if (in_stack_00000078 == 0) {
    if ((longlong)param_2 < 1) {
      return;
    }
    if ((longlong)param_2 < 0x20) {
      uVar21 = 0;
    }
    else {
      if ((longlong)param_2 < 0xf6) {
        uVar20 = 0;
        uVar21 = param_2 & 0xffffffffffffffe0;
      }
      else {
        uVar20 = param_4 & 0x3f;
        if ((param_4 & 1) == 0) {
          if ((uVar20 != 0) && (uVar20 = 0x40 - uVar20 >> 1, (longlong)param_2 < (longlong)uVar20))
          {
            uVar20 = param_2;
          }
        }
        else {
          uVar20 = 0;
        }
        uVar21 = param_2 - (param_2 - uVar20 & 0x1f);
        if (uVar20 != 0) {
          uVar23 = 0;
          lVar22 = 0;
          auVar28 = vmovdqu32_avx512f(_DAT_143087000);
          auVar29 = vmovdqu32_avx512f(_DAT_143087040);
          auVar30 = vpbroadcastq_avx512f();
          do {
            uVar18 = vpcmpgtq_avx512f(auVar30,auVar28);
            uVar19 = vpcmpgtq_avx512f(auVar30,auVar29);
            bVar3 = (byte)uVar19;
            auVar28 = vpaddq_avx512f(auVar28,auVar27);
            auVar29 = vpaddq_avx512f(auVar29,auVar27);
            uVar24 = CONCAT11(bVar3,(byte)uVar18);
            piVar1 = (int *)(param_3 + uVar23 * 4);
            auVar31._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
            auVar31._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
            auVar31._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
            auVar31._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
            auVar31._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
            auVar31._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
            auVar31._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
            auVar31._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
            auVar31._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar31._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar31._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar31._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar31._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar31._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar31._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar31._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            uVar23 = uVar23 + 0x10;
            auVar31 = vcvtps2dq_avx512f(auVar31);
            auVar26 = vextractf64x4_avx512f(auVar31,1);
            auVar26 = vpackusdw_avx512vl(auVar31._0_32_,auVar26);
            auVar26 = vpermq_avx512vl(auVar26,0xd8);
            auVar26 = vmovdqu16_avx512vl(auVar26);
            *(undefined1 (*) [32])(lVar22 + param_4) = auVar26;
            lVar22 = lVar22 + 0x20;
          } while (uVar23 < uVar20);
          if (param_2 == uVar20) {
            return;
          }
        }
      }
      if ((longlong)(uVar20 + 0x20) <= (longlong)uVar21) {
        do {
          auVar27 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_3 + uVar20 * 4));
          auVar28 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_3 + 0x40 + uVar20 * 4));
          auVar29 = vshuff32x4_avx512f(auVar27,auVar28,0x88);
          auVar27 = vshuff32x4_avx512f(auVar27,auVar28,0xdd);
          auVar27 = vpackusdw_avx512bw(auVar29,auVar27);
          auVar27 = vmovdqu32_avx512f(auVar27);
          *(undefined1 (*) [64])(param_4 + uVar20 * 2) = auVar27;
          uVar20 = uVar20 + 0x20;
        } while (uVar20 < uVar21);
      }
    }
    auVar27 = _DAT_143086fc0;
    if (param_2 < uVar21 + 1) {
      return;
    }
    uVar20 = 0;
    auVar28 = vmovdqu32_avx512f(_DAT_143087000);
    auVar29 = vmovdqu32_avx512f(_DAT_143087040);
    auVar30 = vpbroadcastq_avx512f();
    lVar22 = 0;
    do {
      uVar18 = vpcmpgtq_avx512f(auVar30,auVar28);
      uVar19 = vpcmpgtq_avx512f(auVar30,auVar29);
      bVar3 = (byte)uVar19;
      auVar28 = vpaddq_avx512f(auVar28,auVar27);
      auVar29 = vpaddq_avx512f(auVar29,auVar27);
      uVar24 = CONCAT11(bVar3,(byte)uVar18);
      piVar1 = (int *)(param_3 + uVar21 * 4 + uVar20 * 4);
      auVar32._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
      auVar32._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
      auVar32._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
      auVar32._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
      auVar32._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
      auVar32._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
      auVar32._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
      auVar32._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
      auVar32._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar32._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar32._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar32._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar32._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar32._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar32._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar32._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      uVar20 = uVar20 + 0x10;
      auVar31 = vcvtps2dq_avx512f(auVar32);
      auVar26 = vextractf64x4_avx512f(auVar31,1);
      auVar26 = vpackusdw_avx512vl(auVar31._0_32_,auVar26);
      auVar26 = vpermq_avx512vl(auVar26,0xd8);
      auVar26 = vmovdqu16_avx512vl(auVar26);
      *(undefined1 (*) [32])(lVar22 + param_4 + uVar21 * 2) = auVar26;
      lVar22 = lVar22 + 0x20;
    } while (uVar20 < param_2 - uVar21);
    return;
  }
  if ((longlong)param_2 < 1) {
    return;
  }
  if ((longlong)param_2 < 0x20) {
LAB_14010a710:
    uVar20 = 0;
  }
  else {
    uVar21 = param_4 & 0x3f;
    if (uVar21 != 0) {
      if ((param_4 & 1) != 0) goto LAB_14010a710;
      uVar21 = 0x40 - uVar21 >> 1;
      if ((longlong)param_2 < (longlong)uVar21) {
        uVar21 = param_2;
      }
    }
    uVar20 = param_2 - (param_2 - uVar21 & 0x1f);
    if (uVar21 != 0) {
      uVar23 = 0;
      lVar22 = 0;
      auVar28 = vmovdqu32_avx512f(_DAT_143087000);
      auVar29 = vmovdqu32_avx512f(_DAT_143087040);
      auVar30 = vpbroadcastq_avx512f();
      do {
        uVar18 = vpcmpgtq_avx512f(auVar30,auVar28);
        uVar19 = vpcmpgtq_avx512f(auVar30,auVar29);
        bVar3 = (byte)uVar19;
        auVar28 = vpaddq_avx512f(auVar28,auVar27);
        auVar29 = vpaddq_avx512f(auVar29,auVar27);
        uVar24 = CONCAT11(bVar3,(byte)uVar18);
        piVar1 = (int *)(param_3 + uVar23 * 4);
        auVar33._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
        auVar33._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
        auVar33._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
        auVar33._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
        auVar33._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
        auVar33._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
        auVar33._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
        auVar33._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
        auVar33._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar33._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar33._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar33._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar33._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar33._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar33._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar33._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        uVar23 = uVar23 + 0x10;
        auVar31 = vcvtps2dq_avx512f(auVar33);
        auVar26 = vextractf64x4_avx512f(auVar31,1);
        auVar26 = vpackusdw_avx512vl(auVar31._0_32_,auVar26);
        auVar26 = vpermq_avx512vl(auVar26,0xd8);
        auVar26 = vmovdqu16_avx512vl(auVar26);
        *(undefined1 (*) [32])(lVar22 + param_4) = auVar26;
        lVar22 = lVar22 + 0x20;
      } while (uVar23 < uVar21);
      if (param_2 == uVar21) {
        return;
      }
    }
    if ((longlong)(uVar21 + 0x20) <= (longlong)uVar20) {
      do {
        auVar27 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_3 + uVar21 * 4));
        auVar28 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_3 + 0x40 + uVar21 * 4));
        auVar29 = vshuff32x4_avx512f(auVar27,auVar28,0x88);
        auVar27 = vshuff32x4_avx512f(auVar27,auVar28,0xdd);
        auVar27 = vpackusdw_avx512bw(auVar29,auVar27);
        auVar27 = vmovntdq_avx512f(auVar27);
        *(undefined1 (*) [64])(param_4 + uVar21 * 2) = auVar27;
        uVar21 = uVar21 + 0x20;
      } while (uVar21 < uVar20);
    }
  }
  auVar27 = _DAT_143086fc0;
  if (uVar20 + 1 <= param_2) {
    uVar21 = 0;
    auVar28 = vmovdqu32_avx512f(_DAT_143087000);
    auVar29 = vmovdqu32_avx512f(_DAT_143087040);
    auVar30 = vpbroadcastq_avx512f();
    lVar22 = 0;
    do {
      uVar18 = vpcmpgtq_avx512f(auVar30,auVar28);
      uVar19 = vpcmpgtq_avx512f(auVar30,auVar29);
      bVar3 = (byte)uVar19;
      auVar28 = vpaddq_avx512f(auVar28,auVar27);
      auVar29 = vpaddq_avx512f(auVar29,auVar27);
      uVar24 = CONCAT11(bVar3,(byte)uVar18);
      piVar1 = (int *)(param_3 + uVar20 * 4 + uVar21 * 4);
      auVar34._4_4_ = (uint)((byte)(uVar24 >> 1) & 1) * piVar1[1];
      auVar34._0_4_ = (uint)((byte)uVar18 & 1) * *piVar1;
      auVar34._8_4_ = (uint)((byte)(uVar24 >> 2) & 1) * piVar1[2];
      auVar34._12_4_ = (uint)((byte)(uVar24 >> 3) & 1) * piVar1[3];
      auVar34._16_4_ = (uint)((byte)(uVar24 >> 4) & 1) * piVar1[4];
      auVar34._20_4_ = (uint)((byte)(uVar24 >> 5) & 1) * piVar1[5];
      auVar34._24_4_ = (uint)((byte)(uVar24 >> 6) & 1) * piVar1[6];
      auVar34._28_4_ = (uint)((byte)(uVar24 >> 7) & 1) * piVar1[7];
      auVar34._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar34._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar34._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar34._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar34._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar34._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar34._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar34._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      uVar21 = uVar21 + 0x10;
      auVar31 = vcvtps2dq_avx512f(auVar34);
      auVar26 = vextractf64x4_avx512f(auVar31,1);
      auVar26 = vpackusdw_avx512vl(auVar31._0_32_,auVar26);
      auVar26 = vpermq_avx512vl(auVar26,0xd8);
      auVar26 = vmovdqu16_avx512vl(auVar26);
      *(undefined1 (*) [32])(lVar22 + param_4 + uVar20 * 2) = auVar26;
      lVar22 = lVar22 + 0x20;
    } while (uVar21 < param_2 - uVar20);
  }
  return;
}

