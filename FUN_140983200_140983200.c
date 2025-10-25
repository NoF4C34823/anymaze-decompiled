
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140983200(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  
  lVar8 = param_2 * 7 + param_1;
  FUN_14097fcc0(param_1,param_2,param_3,lVar8,param_5,param_6,param_7,0);
  auVar16 = _DAT_14308dc40;
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x20) {
      uVar5 = 0;
    }
    else {
      if ((longlong)param_5 < 0x121) {
        uVar7 = 0;
        uVar5 = param_5 & 0xffffffffffffffe0;
      }
      else {
        uVar7 = param_4 & 0x3f;
        if ((param_4 & 1) == 0) {
          if ((uVar7 != 0) && (uVar7 = 0x40 - uVar7 >> 1, (longlong)param_5 < (longlong)uVar7)) {
            uVar7 = param_5;
          }
        }
        else {
          uVar7 = 0;
        }
        uVar5 = param_5 - (param_5 - uVar7 & 0x1f);
        if (uVar7 != 0) {
          uVar9 = 0;
          lVar6 = 0;
          auVar12 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar13 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar14 = vpbroadcastq_avx512f();
          do {
            uVar2 = vpcmpgtq_avx512f(auVar14,auVar12);
            uVar3 = vpcmpgtq_avx512f(auVar14,auVar13);
            bVar4 = (byte)uVar3;
            auVar12 = vpaddq_avx512f(auVar12,auVar16);
            auVar13 = vpaddq_avx512f(auVar13,auVar16);
            uVar10 = CONCAT11(bVar4,(byte)uVar2);
            piVar1 = (int *)(lVar8 + uVar9 * 4);
            auVar15._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
            auVar15._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
            auVar15._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
            auVar15._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
            auVar15._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
            auVar15._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
            auVar15._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
            auVar15._28_4_ = (uint)((byte)(uVar10 >> 7) & 1) * piVar1[7];
            auVar15._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
            auVar15._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
            auVar15._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
            auVar15._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
            auVar15._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
            auVar15._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
            auVar15._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
            auVar15._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
            uVar9 = uVar9 + 0x10;
            auVar15 = vcvtps2dq_avx512f(auVar15);
            auVar11 = vextractf64x4_avx512f(auVar15,1);
            auVar11 = vpackssdw_avx512vl(auVar15._0_32_,auVar11);
            auVar11 = vpermq_avx512vl(auVar11,0xd8);
            auVar11 = vmovdqu16_avx512vl(auVar11);
            *(undefined1 (*) [32])(lVar6 + param_4) = auVar11;
            lVar6 = lVar6 + 0x20;
          } while (uVar9 < uVar7);
          if (param_5 == uVar7) {
            return;
          }
        }
      }
      if ((longlong)(uVar7 + 0x20) <= (longlong)uVar5) {
        do {
          auVar16 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar8 + uVar7 * 4));
          auVar12 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar8 + 0x40 + uVar7 * 4));
          auVar13 = vshuff32x4_avx512f(auVar16,auVar12,0x88);
          auVar16 = vshuff32x4_avx512f(auVar16,auVar12,0xdd);
          auVar16 = vpackssdw_avx512bw(auVar13,auVar16);
          auVar16 = vmovdqu32_avx512f(auVar16);
          *(undefined1 (*) [64])(param_4 + uVar7 * 2) = auVar16;
          uVar7 = uVar7 + 0x20;
        } while (uVar7 < uVar5);
      }
    }
    auVar16 = _DAT_14308dc40;
    if (param_5 < uVar5 + 1) {
      return;
    }
    uVar7 = 0;
    auVar12 = vmovdqu32_avx512f(_DAT_14308dc80);
    auVar13 = vmovdqu32_avx512f(_DAT_14308dcc0);
    auVar14 = vpbroadcastq_avx512f();
    lVar6 = 0;
    do {
      uVar2 = vpcmpgtq_avx512f(auVar14,auVar12);
      uVar3 = vpcmpgtq_avx512f(auVar14,auVar13);
      bVar4 = (byte)uVar3;
      auVar12 = vpaddq_avx512f(auVar12,auVar16);
      auVar13 = vpaddq_avx512f(auVar13,auVar16);
      uVar10 = CONCAT11(bVar4,(byte)uVar2);
      piVar1 = (int *)(lVar8 + uVar5 * 4 + uVar7 * 4);
      auVar17._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
      auVar17._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
      auVar17._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
      auVar17._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
      auVar17._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
      auVar17._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
      auVar17._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
      auVar17._28_4_ = (uint)((byte)(uVar10 >> 7) & 1) * piVar1[7];
      auVar17._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
      auVar17._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
      auVar17._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
      auVar17._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
      auVar17._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
      auVar17._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
      auVar17._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
      auVar17._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
      uVar7 = uVar7 + 0x10;
      auVar15 = vcvtps2dq_avx512f(auVar17);
      auVar11 = vextractf64x4_avx512f(auVar15,1);
      auVar11 = vpackssdw_avx512vl(auVar15._0_32_,auVar11);
      auVar11 = vpermq_avx512vl(auVar11,0xd8);
      auVar11 = vmovdqu16_avx512vl(auVar11);
      *(undefined1 (*) [32])(lVar6 + param_4 + uVar5 * 2) = auVar11;
      lVar6 = lVar6 + 0x20;
    } while (uVar7 < param_5 - uVar5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x20) {
LAB_140983652:
    uVar7 = 0;
  }
  else {
    uVar5 = param_4 & 0x3f;
    if (uVar5 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140983652;
      uVar5 = 0x40 - uVar5 >> 1;
      if ((longlong)param_5 < (longlong)uVar5) {
        uVar5 = param_5;
      }
    }
    uVar7 = param_5 - (param_5 - uVar5 & 0x1f);
    if (uVar5 != 0) {
      uVar9 = 0;
      lVar6 = 0;
      auVar12 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar13 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar14 = vpbroadcastq_avx512f();
      do {
        uVar2 = vpcmpgtq_avx512f(auVar14,auVar12);
        uVar3 = vpcmpgtq_avx512f(auVar14,auVar13);
        bVar4 = (byte)uVar3;
        auVar12 = vpaddq_avx512f(auVar12,auVar16);
        auVar13 = vpaddq_avx512f(auVar13,auVar16);
        uVar10 = CONCAT11(bVar4,(byte)uVar2);
        piVar1 = (int *)(lVar8 + uVar9 * 4);
        auVar18._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
        auVar18._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
        auVar18._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
        auVar18._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
        auVar18._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
        auVar18._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
        auVar18._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
        auVar18._28_4_ = (uint)((byte)(uVar10 >> 7) & 1) * piVar1[7];
        auVar18._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
        auVar18._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
        auVar18._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
        auVar18._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
        auVar18._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
        auVar18._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
        auVar18._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
        auVar18._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
        uVar9 = uVar9 + 0x10;
        auVar15 = vcvtps2dq_avx512f(auVar18);
        auVar11 = vextractf64x4_avx512f(auVar15,1);
        auVar11 = vpackssdw_avx512vl(auVar15._0_32_,auVar11);
        auVar11 = vpermq_avx512vl(auVar11,0xd8);
        auVar11 = vmovdqu16_avx512vl(auVar11);
        *(undefined1 (*) [32])(lVar6 + param_4) = auVar11;
        lVar6 = lVar6 + 0x20;
      } while (uVar9 < uVar5);
      if (param_5 == uVar5) {
        return;
      }
    }
    if ((longlong)(uVar5 + 0x20) <= (longlong)uVar7) {
      do {
        auVar16 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar8 + uVar5 * 4));
        auVar12 = vcvtps2dq_avx512f(*(undefined1 (*) [64])(lVar8 + 0x40 + uVar5 * 4));
        auVar13 = vshuff32x4_avx512f(auVar16,auVar12,0x88);
        auVar16 = vshuff32x4_avx512f(auVar16,auVar12,0xdd);
        auVar16 = vpackssdw_avx512bw(auVar13,auVar16);
        auVar16 = vmovntdq_avx512f(auVar16);
        *(undefined1 (*) [64])(param_4 + uVar5 * 2) = auVar16;
        uVar5 = uVar5 + 0x20;
      } while (uVar5 < uVar7);
    }
  }
  auVar16 = _DAT_14308dc40;
  if (uVar7 + 1 <= param_5) {
    uVar5 = 0;
    auVar12 = vmovdqu32_avx512f(_DAT_14308dc80);
    auVar13 = vmovdqu32_avx512f(_DAT_14308dcc0);
    auVar14 = vpbroadcastq_avx512f();
    lVar6 = 0;
    do {
      uVar2 = vpcmpgtq_avx512f(auVar14,auVar12);
      uVar3 = vpcmpgtq_avx512f(auVar14,auVar13);
      bVar4 = (byte)uVar3;
      auVar12 = vpaddq_avx512f(auVar12,auVar16);
      auVar13 = vpaddq_avx512f(auVar13,auVar16);
      uVar10 = CONCAT11(bVar4,(byte)uVar2);
      piVar1 = (int *)(lVar8 + uVar7 * 4 + uVar5 * 4);
      auVar19._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
      auVar19._0_4_ = (uint)((byte)uVar2 & 1) * *piVar1;
      auVar19._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
      auVar19._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
      auVar19._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
      auVar19._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
      auVar19._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
      auVar19._28_4_ = (uint)((byte)(uVar10 >> 7) & 1) * piVar1[7];
      auVar19._32_4_ = (uint)(bVar4 & 1) * piVar1[8];
      auVar19._36_4_ = (uint)(bVar4 >> 1 & 1) * piVar1[9];
      auVar19._40_4_ = (uint)(bVar4 >> 2 & 1) * piVar1[10];
      auVar19._44_4_ = (uint)(bVar4 >> 3 & 1) * piVar1[0xb];
      auVar19._48_4_ = (uint)(bVar4 >> 4 & 1) * piVar1[0xc];
      auVar19._52_4_ = (uint)(bVar4 >> 5 & 1) * piVar1[0xd];
      auVar19._56_4_ = (uint)(bVar4 >> 6 & 1) * piVar1[0xe];
      auVar19._60_4_ = (uint)(bVar4 >> 7) * piVar1[0xf];
      uVar5 = uVar5 + 0x10;
      auVar15 = vcvtps2dq_avx512f(auVar19);
      auVar11 = vextractf64x4_avx512f(auVar15,1);
      auVar11 = vpackssdw_avx512vl(auVar15._0_32_,auVar11);
      auVar11 = vpermq_avx512vl(auVar11,0xd8);
      auVar11 = vmovdqu16_avx512vl(auVar11);
      *(undefined1 (*) [32])(lVar6 + param_4 + uVar7 * 2) = auVar11;
      lVar6 = lVar6 + 0x20;
    } while (uVar5 < param_5 - uVar7);
  }
  return;
}

