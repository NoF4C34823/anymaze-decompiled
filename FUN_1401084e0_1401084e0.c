
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401084e0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  
  param_1 = param_2 * 5 + param_1;
  FUN_1401089c0();
  auVar16 = _DAT_143086fc0;
  if (param_8 == 0) {
    if (0 < (longlong)param_5) {
      if ((longlong)param_5 < 0x40) {
        uVar6 = 0;
      }
      else {
        if ((longlong)param_5 < 0x396) {
          uVar7 = 0;
          uVar6 = param_5 & 0xffffffffffffffc0;
        }
        else {
          uVar6 = param_4 & 0x3f;
          uVar7 = uVar6;
          if ((uVar6 != 0) && (uVar7 = 0x40 - uVar6, (longlong)param_5 < (longlong)(0x40 - uVar6)))
          {
            uVar7 = param_5;
          }
          uVar6 = param_5 - (param_5 - uVar7 & 0x3f);
          if (uVar7 != 0) {
            uVar5 = 0;
            auVar11 = vmovdqu32_avx512f(_DAT_143087000);
            auVar12 = vmovdqu32_avx512f(_DAT_143087040);
            auVar13 = vpbroadcastq_avx512f();
            do {
              uVar2 = vpcmpgtq_avx512f(auVar13,auVar11);
              uVar3 = vpcmpgtq_avx512f(auVar13,auVar12);
              bVar4 = (byte)uVar3;
              auVar11 = vpaddq_avx512f(auVar11,auVar16);
              auVar12 = vpaddq_avx512f(auVar12,auVar16);
              uVar8 = CONCAT11(bVar4,(byte)uVar2);
              piVar1 = (int *)(param_1 + uVar5 * 4);
              auVar14._4_4_ = (uint)((byte)(uVar8 >> 1) & 1) * piVar1[1];
              auVar14._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
              auVar14._8_4_ = (uint)((byte)(uVar8 >> 2) & 1) * piVar1[2];
              auVar14._12_4_ = (uint)((byte)(uVar8 >> 3) & 1) * piVar1[3];
              auVar14._16_4_ = (uint)((byte)(uVar8 >> 4) & 1) * piVar1[4];
              auVar14._20_4_ = (uint)((byte)(uVar8 >> 5) & 1) * piVar1[5];
              auVar14._24_4_ = (uint)((byte)(uVar8 >> 6) & 1) * piVar1[6];
              auVar14._28_4_ = (uint)((byte)(uVar8 >> 7) & 1) * piVar1[7];
              auVar14._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
              auVar14._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
              auVar14._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
              auVar14._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
              auVar14._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
              auVar14._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
              auVar14._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
              auVar14._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
              auVar15 = vcvtps2dq_avx512f(auVar14);
              auVar10 = vextractf64x4_avx512f(auVar15,1);
              auVar10 = vpackssdw_avx512vl(auVar15._0_32_,auVar10);
              auVar10 = vpermq_avx512vl(auVar10,0xd8);
              auVar9 = vextracti32x4_avx512vl(auVar10,1);
              auVar9 = vpackuswb_avx512vl(auVar10._0_16_,auVar9);
              auVar9 = vmovdqu8_avx512vl(auVar9);
              *(undefined1 (*) [16])(uVar5 + param_4) = auVar9;
              uVar5 = uVar5 + 0x10;
            } while (uVar5 < uVar7);
            if (param_5 == uVar7) {
              return;
            }
          }
        }
        if ((longlong)(uVar7 + 0x40) <= (longlong)uVar6) {
          do {
            auVar16 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + uVar7 * 4));
            auVar11 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0x40 + uVar7 * 4));
            auVar12 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0x80 + uVar7 * 4));
            auVar13 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0xc0 + uVar7 * 4));
            auVar15 = vshuff32x4_avx512f(auVar16,auVar11,0x88);
            auVar16 = vshuff32x4_avx512f(auVar16,auVar11,0xdd);
            auVar11 = vshuff32x4_avx512f(auVar12,auVar13,0x88);
            auVar12 = vshuff32x4_avx512f(auVar12,auVar13,0xdd);
            auVar16 = vpackssdw_avx512bw(auVar15,auVar16);
            auVar11 = vpackssdw_avx512bw(auVar11,auVar12);
            auVar12 = vshuff32x4_avx512f(auVar16,auVar11,0x88);
            auVar16 = vshuff32x4_avx512f(auVar16,auVar11,0xdd);
            auVar16 = vpackuswb_avx512bw(auVar12,auVar16);
            auVar16 = vmovdqu32_avx512f(auVar16);
            *(undefined1 (*) [64])(uVar7 + param_4) = auVar16;
            uVar7 = uVar7 + 0x40;
          } while (uVar7 < uVar6);
        }
      }
      auVar16 = _DAT_143086fc0;
      if (uVar6 + 1 <= param_5) {
        uVar7 = 0;
        auVar11 = vmovdqu32_avx512f(_DAT_143087000);
        auVar12 = vmovdqu32_avx512f(_DAT_143087040);
        auVar13 = vpbroadcastq_avx512f();
        do {
          uVar2 = vpcmpgtq_avx512f(auVar13,auVar11);
          uVar3 = vpcmpgtq_avx512f(auVar13,auVar12);
          bVar4 = (byte)uVar3;
          auVar11 = vpaddq_avx512f(auVar11,auVar16);
          auVar12 = vpaddq_avx512f(auVar12,auVar16);
          uVar8 = CONCAT11(bVar4,(byte)uVar2);
          piVar1 = (int *)(param_1 + uVar6 * 4 + uVar7 * 4);
          auVar17._4_4_ = (uint)((byte)(uVar8 >> 1) & 1) * piVar1[1];
          auVar17._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
          auVar17._8_4_ = (uint)((byte)(uVar8 >> 2) & 1) * piVar1[2];
          auVar17._12_4_ = (uint)((byte)(uVar8 >> 3) & 1) * piVar1[3];
          auVar17._16_4_ = (uint)((byte)(uVar8 >> 4) & 1) * piVar1[4];
          auVar17._20_4_ = (uint)((byte)(uVar8 >> 5) & 1) * piVar1[5];
          auVar17._24_4_ = (uint)((byte)(uVar8 >> 6) & 1) * piVar1[6];
          auVar17._28_4_ = (uint)((byte)(uVar8 >> 7) & 1) * piVar1[7];
          auVar17._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
          auVar17._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
          auVar17._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
          auVar17._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
          auVar17._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
          auVar17._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
          auVar17._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
          auVar17._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
          auVar15 = vcvtps2dq_avx512f(auVar17);
          auVar10 = vextractf64x4_avx512f(auVar15,1);
          auVar10 = vpackssdw_avx512vl(auVar15._0_32_,auVar10);
          auVar10 = vpermq_avx512vl(auVar10,0xd8);
          auVar9 = vextracti32x4_avx512vl(auVar10,1);
          auVar9 = vpackuswb_avx512vl(auVar10._0_16_,auVar9);
          auVar9 = vmovdqu8_avx512vl(auVar9);
          *(undefined1 (*) [16])(uVar7 + param_4 + uVar6) = auVar9;
          uVar7 = uVar7 + 0x10;
        } while (uVar7 < param_5 - uVar6);
      }
    }
  }
  else if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x40) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_4 & 0x3f;
      uVar7 = uVar6;
      if ((uVar6 != 0) && (uVar7 = 0x40 - uVar6, (longlong)param_5 < (longlong)(0x40 - uVar6))) {
        uVar7 = param_5;
      }
      uVar6 = param_5 - (param_5 - uVar7 & 0x3f);
      if (uVar7 != 0) {
        uVar5 = 0;
        auVar11 = vmovdqu32_avx512f(_DAT_143087000);
        auVar12 = vmovdqu32_avx512f(_DAT_143087040);
        auVar13 = vpbroadcastq_avx512f();
        do {
          uVar2 = vpcmpgtq_avx512f(auVar13,auVar11);
          uVar3 = vpcmpgtq_avx512f(auVar13,auVar12);
          bVar4 = (byte)uVar3;
          auVar11 = vpaddq_avx512f(auVar11,auVar16);
          auVar12 = vpaddq_avx512f(auVar12,auVar16);
          uVar8 = CONCAT11(bVar4,(byte)uVar2);
          piVar1 = (int *)(param_1 + uVar5 * 4);
          auVar15._4_4_ = (uint)((byte)(uVar8 >> 1) & 1) * piVar1[1];
          auVar15._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
          auVar15._8_4_ = (uint)((byte)(uVar8 >> 2) & 1) * piVar1[2];
          auVar15._12_4_ = (uint)((byte)(uVar8 >> 3) & 1) * piVar1[3];
          auVar15._16_4_ = (uint)((byte)(uVar8 >> 4) & 1) * piVar1[4];
          auVar15._20_4_ = (uint)((byte)(uVar8 >> 5) & 1) * piVar1[5];
          auVar15._24_4_ = (uint)((byte)(uVar8 >> 6) & 1) * piVar1[6];
          auVar15._28_4_ = (uint)((byte)(uVar8 >> 7) & 1) * piVar1[7];
          auVar15._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
          auVar15._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
          auVar15._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
          auVar15._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
          auVar15._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
          auVar15._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
          auVar15._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
          auVar15._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
          auVar15 = vcvtps2dq_avx512f(auVar15);
          auVar10 = vextractf64x4_avx512f(auVar15,1);
          auVar10 = vpackssdw_avx512vl(auVar15._0_32_,auVar10);
          auVar10 = vpermq_avx512vl(auVar10,0xd8);
          auVar9 = vextracti32x4_avx512vl(auVar10,1);
          auVar9 = vpackuswb_avx512vl(auVar10._0_16_,auVar9);
          auVar9 = vmovdqu8_avx512vl(auVar9);
          *(undefined1 (*) [16])(uVar5 + param_4) = auVar9;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar7);
        if (param_5 == uVar7) {
          return;
        }
      }
      if ((longlong)(uVar7 + 0x40) <= (longlong)uVar6) {
        do {
          auVar16 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + uVar7 * 4));
          auVar11 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0x40 + uVar7 * 4));
          auVar12 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0x80 + uVar7 * 4));
          auVar13 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(param_1 + 0xc0 + uVar7 * 4));
          auVar15 = vshuff32x4_avx512f(auVar16,auVar11,0x88);
          auVar16 = vshuff32x4_avx512f(auVar16,auVar11,0xdd);
          auVar11 = vshuff32x4_avx512f(auVar12,auVar13,0x88);
          auVar12 = vshuff32x4_avx512f(auVar12,auVar13,0xdd);
          auVar16 = vpackssdw_avx512bw(auVar15,auVar16);
          auVar11 = vpackssdw_avx512bw(auVar11,auVar12);
          auVar12 = vshuff32x4_avx512f(auVar16,auVar11,0x88);
          auVar16 = vshuff32x4_avx512f(auVar16,auVar11,0xdd);
          auVar16 = vpackuswb_avx512bw(auVar12,auVar16);
          auVar16 = vmovntdq_avx512f(auVar16);
          *(undefined1 (*) [64])(uVar7 + param_4) = auVar16;
          uVar7 = uVar7 + 0x40;
        } while (uVar7 < uVar6);
      }
    }
    auVar16 = _DAT_143086fc0;
    if (uVar6 + 1 <= param_5) {
      uVar7 = 0;
      auVar11 = vmovdqu32_avx512f(_DAT_143087000);
      auVar12 = vmovdqu32_avx512f(_DAT_143087040);
      auVar13 = vpbroadcastq_avx512f();
      do {
        uVar2 = vpcmpgtq_avx512f(auVar13,auVar11);
        uVar3 = vpcmpgtq_avx512f(auVar13,auVar12);
        bVar4 = (byte)uVar3;
        auVar11 = vpaddq_avx512f(auVar11,auVar16);
        auVar12 = vpaddq_avx512f(auVar12,auVar16);
        uVar8 = CONCAT11(bVar4,(byte)uVar2);
        piVar1 = (int *)(param_1 + uVar6 * 4 + uVar7 * 4);
        auVar18._4_4_ = (uint)((byte)(uVar8 >> 1) & 1) * piVar1[1];
        auVar18._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
        auVar18._8_4_ = (uint)((byte)(uVar8 >> 2) & 1) * piVar1[2];
        auVar18._12_4_ = (uint)((byte)(uVar8 >> 3) & 1) * piVar1[3];
        auVar18._16_4_ = (uint)((byte)(uVar8 >> 4) & 1) * piVar1[4];
        auVar18._20_4_ = (uint)((byte)(uVar8 >> 5) & 1) * piVar1[5];
        auVar18._24_4_ = (uint)((byte)(uVar8 >> 6) & 1) * piVar1[6];
        auVar18._28_4_ = (uint)((byte)(uVar8 >> 7) & 1) * piVar1[7];
        auVar18._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
        auVar18._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
        auVar18._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
        auVar18._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
        auVar18._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
        auVar18._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
        auVar18._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
        auVar18._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
        auVar15 = vcvtps2dq_avx512f(auVar18);
        auVar10 = vextractf64x4_avx512f(auVar15,1);
        auVar10 = vpackssdw_avx512vl(auVar15._0_32_,auVar10);
        auVar10 = vpermq_avx512vl(auVar10,0xd8);
        auVar9 = vextracti32x4_avx512vl(auVar10,1);
        auVar9 = vpackuswb_avx512vl(auVar10._0_16_,auVar9);
        auVar9 = vmovdqu8_avx512vl(auVar9);
        *(undefined1 (*) [16])(uVar7 + param_4 + uVar6) = auVar9;
        uVar7 = uVar7 + 0x10;
      } while (uVar7 < param_5 - uVar6);
    }
  }
  return;
}

