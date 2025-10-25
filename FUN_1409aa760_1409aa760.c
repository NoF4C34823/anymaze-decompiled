
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409aa760(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  auVar28 = _DAT_14308df80;
  lVar12 = (longlong)param_3;
  lVar13 = lVar12 + -2;
  if (SCARRY8(lVar12,-2) != lVar12 + -2 < 0) {
    lVar13 = lVar12 + 3;
  }
  lVar12 = (longlong)(int)lVar13 + 1;
  uVar5 = 0;
  if (4 < lVar12) {
    lVar12 = 0;
  }
  lVar8 = (longlong)(int)lVar12 + 1;
  if (4 < lVar8) {
    lVar8 = 0;
  }
  lVar11 = (longlong)(int)lVar8 + 1;
  if (4 < lVar11) {
    lVar11 = 0;
  }
  lVar10 = (longlong)(int)lVar11 + 1;
  if (4 < lVar10) {
    lVar10 = 0;
  }
  auVar42 = ZEXT416(*param_6);
  auVar41 = ZEXT416(param_6[1]);
  auVar40 = ZEXT416(param_6[2]);
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (0xf < (longlong)param_5) {
      if ((longlong)param_5 < 0x399) {
        uVar6 = 0;
        uVar5 = param_5 & 0xfffffffffffffff0;
      }
      else {
        uVar6 = param_4 & 0x3f;
        if ((param_4 & 1) == 0) {
          if ((uVar6 != 0) && (uVar6 = 0x40 - uVar6 >> 1, (longlong)param_5 < (longlong)uVar6)) {
            uVar6 = param_5;
          }
        }
        else {
          uVar6 = 0;
        }
        uVar5 = param_5 - (param_5 - uVar6 & 0xf);
        if (uVar6 != 0) {
          auVar17 = vmovdqu32_avx512f(_DAT_14308dfc0);
          auVar18 = vmovdqu32_avx512f(_DAT_14308e000);
          auVar19 = vbroadcastss_avx512f(auVar42);
          auVar20 = vbroadcastss_avx512f(auVar41);
          auVar21 = vbroadcastss_avx512f(auVar40);
          auVar22 = vpbroadcastq_avx512f();
          uVar9 = 0;
          uVar14 = uVar9;
          do {
            uVar2 = vpcmpgtq_avx512f(auVar22,auVar17);
            bVar4 = (byte)uVar2;
            uVar2 = vpcmpgtq_avx512f(auVar22,auVar18);
            bVar3 = (byte)uVar2;
            auVar17 = vpaddq_avx512f(auVar17,auVar28);
            auVar18 = vpaddq_avx512f(auVar18,auVar28);
            uVar15 = CONCAT11(bVar3,bVar4);
            piVar1 = (int *)(param_2 * lVar12 + param_1 + uVar14 * 4);
            auVar26._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
            auVar26._0_4_ = (uint)(bVar4 & 1) * *piVar1;
            auVar26._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
            auVar26._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
            auVar26._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
            auVar26._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
            auVar26._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
            auVar26._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
            auVar26._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar26._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar26._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar26._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar26._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar26._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar26._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar26._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar11 + param_1 + uVar14 * 4);
            auVar27._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
            auVar27._0_4_ = (uint)(bVar4 & 1) * *piVar1;
            auVar27._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
            auVar27._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
            auVar27._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
            auVar27._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
            auVar27._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
            auVar27._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
            auVar27._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar27._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar27._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar27._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar27._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar27._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar27._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar27._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar13 + param_1 + uVar14 * 4);
            auVar23._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
            auVar23._0_4_ = (uint)(bVar4 & 1) * *piVar1;
            auVar23._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
            auVar23._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
            auVar23._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
            auVar23._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
            auVar23._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
            auVar23._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
            auVar23._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar23._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar23._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar23._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar23._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar23._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar23._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar23._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar10 + param_1 + uVar14 * 4);
            auVar24._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
            auVar24._0_4_ = (uint)(bVar4 & 1) * *piVar1;
            auVar24._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
            auVar24._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
            auVar24._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
            auVar24._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
            auVar24._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
            auVar24._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
            auVar24._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar24._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar24._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar24._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar24._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar24._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar24._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar24._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            piVar1 = (int *)(param_2 * lVar8 + param_1 + uVar14 * 4);
            auVar25._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
            auVar25._0_4_ = (uint)(bVar4 & 1) * *piVar1;
            auVar25._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
            auVar25._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
            auVar25._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
            auVar25._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
            auVar25._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
            auVar25._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
            auVar25._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
            auVar25._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
            auVar25._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
            auVar25._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
            auVar25._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
            auVar25._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
            auVar25._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
            auVar25._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
            auVar26 = vaddps_avx512f(auVar26,auVar27);
            auVar27 = vaddps_avx512f(auVar23,auVar24);
            auVar26 = vmulps_avx512f(auVar20,auVar26);
            auVar26 = vfmadd231ps_avx512f(auVar26,auVar27,auVar19);
            uVar14 = uVar14 + 0x10;
            auVar26 = vfmadd231ps_avx512f(auVar26,auVar25,auVar21);
            auVar26 = vcvtps2dq_avx512f(auVar26);
            auVar16 = vpmovdw_avx512f(auVar26);
            auVar16 = vmovdqu16_avx512vl(auVar16);
            *(undefined1 (*) [32])(uVar9 + param_4) = auVar16;
            uVar9 = uVar9 + 0x20;
          } while (uVar14 < uVar6);
          if (param_5 == uVar6) {
            return;
          }
        }
      }
      if ((longlong)(uVar6 + 0x10) <= (longlong)uVar5) {
        auVar28 = vbroadcastss_avx512f(auVar42);
        auVar17 = vbroadcastss_avx512f(auVar41);
        auVar18 = vbroadcastss_avx512f(auVar40);
        do {
          auVar19 = vaddps_avx512f(*(undefined1 (*) [64])(param_2 * lVar12 + param_1 + uVar6 * 4),
                                   *(undefined1 (*) [64])(param_2 * lVar11 + param_1 + uVar6 * 4));
          auVar20 = vaddps_avx512f(*(undefined1 (*) [64])(param_2 * lVar13 + param_1 + uVar6 * 4),
                                   *(undefined1 (*) [64])(param_2 * lVar10 + param_1 + uVar6 * 4));
          auVar19 = vmulps_avx512f(auVar17,auVar19);
          auVar19 = vfmadd231ps_avx512f(auVar19,auVar20,auVar28);
          auVar19 = vfmadd231ps_avx512f(auVar19,auVar18,
                                        *(undefined1 (*) [64])
                                         (param_2 * lVar8 + param_1 + uVar6 * 4));
          auVar19 = vcvtps2dq_avx512f(auVar19);
          auVar16 = vpmovdw_avx512f(auVar19);
          *(undefined1 (*) [32])(param_4 + uVar6 * 2) = auVar16;
          uVar6 = uVar6 + 0x10;
        } while (uVar6 < uVar5);
      }
    }
    if (param_5 < uVar5 + 1) {
      return;
    }
    auVar28 = vbroadcastss_avx512f(auVar41);
    auVar17 = vbroadcastss_avx512f(auVar42);
    auVar18 = vbroadcastss_avx512f(auVar40);
    auVar19 = vpbroadcastq_avx512f();
    uVar2 = vpcmpgtq_avx512f(auVar19,_DAT_14308dfc0);
    bVar4 = (byte)uVar2;
    uVar2 = vpcmpgtq_avx512f(auVar19,_DAT_14308e000);
    bVar3 = (byte)uVar2;
    uVar15 = CONCAT11(bVar3,bVar4);
    piVar1 = (int *)(lVar12 * param_2 + param_1 + uVar5 * 4);
    auVar19._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
    auVar19._0_4_ = (uint)(bVar4 & 1) * *piVar1;
    auVar19._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
    auVar19._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
    auVar19._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
    auVar19._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
    auVar19._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
    auVar19._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
    auVar19._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
    auVar19._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
    auVar19._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
    auVar19._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
    auVar19._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
    auVar19._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
    auVar19._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
    auVar19._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
    piVar1 = (int *)(lVar11 * param_2 + param_1 + uVar5 * 4);
    auVar20._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
    auVar20._0_4_ = (uint)(bVar4 & 1) * *piVar1;
    auVar20._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
    auVar20._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
    auVar20._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
    auVar20._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
    auVar20._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
    auVar20._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
    auVar20._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
    auVar20._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
    auVar20._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
    auVar20._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
    auVar20._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
    auVar20._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
    auVar20._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
    auVar20._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
    piVar1 = (int *)(lVar13 * param_2 + param_1 + uVar5 * 4);
    auVar21._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
    auVar21._0_4_ = (uint)(bVar4 & 1) * *piVar1;
    auVar21._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
    auVar21._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
    auVar21._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
    auVar21._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
    auVar21._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
    auVar21._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
    auVar21._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
    auVar21._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
    auVar21._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
    auVar21._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
    auVar21._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
    auVar21._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
    auVar21._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
    auVar21._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
    piVar1 = (int *)(lVar10 * param_2 + param_1 + uVar5 * 4);
    auVar22._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
    auVar22._0_4_ = (uint)(bVar4 & 1) * *piVar1;
    auVar22._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
    auVar22._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
    auVar22._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
    auVar22._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
    auVar22._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
    auVar22._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
    auVar22._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
    auVar22._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
    auVar22._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
    auVar22._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
    auVar22._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
    auVar22._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
    auVar22._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
    auVar22._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
    piVar1 = (int *)(param_1 + param_2 * lVar8 + uVar5 * 4);
    auVar29._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
    auVar29._0_4_ = (uint)(bVar4 & 1) * *piVar1;
    auVar29._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
    auVar29._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
    auVar29._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
    auVar29._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
    auVar29._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
    auVar29._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
    auVar29._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
    auVar29._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
    auVar29._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
    auVar29._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
    auVar29._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
    auVar29._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
    auVar29._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
    auVar29._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
    auVar19 = vaddps_avx512f(auVar19,auVar20);
    auVar20 = vaddps_avx512f(auVar21,auVar22);
    auVar28 = vmulps_avx512f(auVar28,auVar19);
    auVar28 = vfmadd213ps_avx512f(auVar17,auVar20,auVar28);
    auVar28 = vfmadd213ps_avx512f(auVar18,auVar29,auVar28);
    auVar28 = vcvtps2dq_avx512f(auVar28);
    auVar16 = vpmovdw_avx512f(auVar28);
    auVar16 = vmovdqu16_avx512vl(auVar16);
    *(undefined1 (*) [32])(param_4 + uVar5 * 2) = auVar16;
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_1409aaebe:
    uVar6 = 0;
  }
  else {
    uVar5 = param_4 & 0x3f;
    if (uVar5 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1409aaebe;
      uVar5 = 0x40 - uVar5 >> 1;
      if ((longlong)param_5 < (longlong)uVar5) {
        uVar5 = param_5;
      }
    }
    uVar6 = param_5 - (param_5 - uVar5 & 0xf);
    if (uVar5 != 0) {
      auVar17 = vmovdqu32_avx512f(_DAT_14308dfc0);
      auVar18 = vmovdqu32_avx512f(_DAT_14308e000);
      auVar19 = vbroadcastss_avx512f(auVar42);
      auVar20 = vbroadcastss_avx512f(auVar41);
      auVar21 = vbroadcastss_avx512f(auVar40);
      auVar22 = vpbroadcastq_avx512f();
      uVar9 = 0;
      uVar14 = uVar9;
      do {
        uVar2 = vpcmpgtq_avx512f(auVar22,auVar17);
        bVar4 = (byte)uVar2;
        uVar2 = vpcmpgtq_avx512f(auVar22,auVar18);
        bVar3 = (byte)uVar2;
        auVar17 = vpaddq_avx512f(auVar17,auVar28);
        auVar18 = vpaddq_avx512f(auVar18,auVar28);
        uVar15 = CONCAT11(bVar3,bVar4);
        piVar1 = (int *)(param_2 * lVar12 + param_1 + uVar14 * 4);
        auVar30._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
        auVar30._0_4_ = (uint)(bVar4 & 1) * *piVar1;
        auVar30._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
        auVar30._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
        auVar30._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
        auVar30._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
        auVar30._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
        auVar30._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
        auVar30._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar30._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar30._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar30._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar30._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar30._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar30._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar30._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_2 * lVar11 + param_1 + uVar14 * 4);
        auVar31._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
        auVar31._0_4_ = (uint)(bVar4 & 1) * *piVar1;
        auVar31._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
        auVar31._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
        auVar31._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
        auVar31._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
        auVar31._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
        auVar31._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
        auVar31._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar31._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar31._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar31._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar31._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar31._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar31._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar31._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_2 * lVar13 + param_1 + uVar14 * 4);
        auVar32._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
        auVar32._0_4_ = (uint)(bVar4 & 1) * *piVar1;
        auVar32._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
        auVar32._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
        auVar32._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
        auVar32._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
        auVar32._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
        auVar32._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
        auVar32._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar32._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar32._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar32._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar32._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar32._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar32._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar32._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_2 * lVar10 + param_1 + uVar14 * 4);
        auVar33._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
        auVar33._0_4_ = (uint)(bVar4 & 1) * *piVar1;
        auVar33._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
        auVar33._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
        auVar33._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
        auVar33._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
        auVar33._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
        auVar33._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
        auVar33._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar33._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar33._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar33._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar33._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar33._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar33._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar33._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        piVar1 = (int *)(param_2 * lVar8 + param_1 + uVar14 * 4);
        auVar34._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
        auVar34._0_4_ = (uint)(bVar4 & 1) * *piVar1;
        auVar34._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
        auVar34._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
        auVar34._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
        auVar34._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
        auVar34._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
        auVar34._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
        auVar34._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
        auVar34._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
        auVar34._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
        auVar34._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
        auVar34._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
        auVar34._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
        auVar34._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
        auVar34._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
        auVar26 = vaddps_avx512f(auVar30,auVar31);
        auVar27 = vaddps_avx512f(auVar32,auVar33);
        auVar26 = vmulps_avx512f(auVar20,auVar26);
        auVar26 = vfmadd231ps_avx512f(auVar26,auVar27,auVar19);
        uVar14 = uVar14 + 0x10;
        auVar26 = vfmadd231ps_avx512f(auVar26,auVar34,auVar21);
        auVar26 = vcvtps2dq_avx512f(auVar26);
        auVar16 = vpmovdw_avx512f(auVar26);
        auVar16 = vmovdqu16_avx512vl(auVar16);
        *(undefined1 (*) [32])(uVar9 + param_4) = auVar16;
        uVar9 = uVar9 + 0x20;
      } while (uVar14 < uVar5);
      if (param_5 == uVar5) {
        return;
      }
    }
    if ((longlong)(uVar5 + 0x10) <= (longlong)uVar6) {
      auVar28 = vbroadcastss_avx512f(auVar42);
      auVar17 = vbroadcastss_avx512f(auVar41);
      auVar18 = vbroadcastss_avx512f(auVar40);
      do {
        auVar19 = vaddps_avx512f(*(undefined1 (*) [64])(param_2 * lVar12 + param_1 + uVar5 * 4),
                                 *(undefined1 (*) [64])(param_2 * lVar11 + param_1 + uVar5 * 4));
        auVar20 = vaddps_avx512f(*(undefined1 (*) [64])(param_2 * lVar13 + param_1 + uVar5 * 4),
                                 *(undefined1 (*) [64])(param_2 * lVar10 + param_1 + uVar5 * 4));
        auVar19 = vmulps_avx512f(auVar17,auVar19);
        auVar19 = vfmadd231ps_avx512f(auVar19,auVar20,auVar28);
        auVar19 = vfmadd231ps_avx512f(auVar19,auVar18,
                                      *(undefined1 (*) [64])(param_2 * lVar8 + param_1 + uVar5 * 4))
        ;
        auVar19 = vcvtps2dq_avx512f(auVar19);
        auVar16 = vpmovdw_avx512f(auVar19);
        auVar16 = vmovntdq_avx512vl(auVar16);
        *(undefined1 (*) [32])(param_4 + uVar5 * 2) = auVar16;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 < uVar6);
    }
  }
  auVar28 = _DAT_14308df80;
  if (uVar6 + 1 <= param_5) {
    auVar17 = vmovdqu32_avx512f(_DAT_14308dfc0);
    auVar18 = vmovdqu32_avx512f(_DAT_14308e000);
    auVar19 = vbroadcastss_avx512f(auVar42);
    auVar20 = vbroadcastss_avx512f(auVar41);
    auVar21 = vbroadcastss_avx512f(auVar40);
    uVar5 = 0;
    auVar22 = vpbroadcastq_avx512f();
    lVar7 = 0;
    do {
      uVar2 = vpcmpgtq_avx512f(auVar22,auVar17);
      bVar4 = (byte)uVar2;
      uVar2 = vpcmpgtq_avx512f(auVar22,auVar18);
      bVar3 = (byte)uVar2;
      auVar17 = vpaddq_avx512f(auVar17,auVar28);
      auVar18 = vpaddq_avx512f(auVar18,auVar28);
      uVar15 = CONCAT11(bVar3,bVar4);
      piVar1 = (int *)(lVar12 * param_2 + param_1 + uVar6 * 4 + uVar5 * 4);
      auVar35._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
      auVar35._0_4_ = (uint)(bVar4 & 1) * *piVar1;
      auVar35._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
      auVar35._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
      auVar35._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
      auVar35._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
      auVar35._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
      auVar35._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
      auVar35._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar35._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar35._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar35._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar35._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar35._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar35._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar35._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar11 * param_2 + param_1 + uVar6 * 4 + uVar5 * 4);
      auVar36._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
      auVar36._0_4_ = (uint)(bVar4 & 1) * *piVar1;
      auVar36._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
      auVar36._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
      auVar36._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
      auVar36._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
      auVar36._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
      auVar36._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
      auVar36._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar36._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar36._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar36._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar36._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar36._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar36._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar36._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar13 * param_2 + param_1 + uVar6 * 4 + uVar5 * 4);
      auVar37._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
      auVar37._0_4_ = (uint)(bVar4 & 1) * *piVar1;
      auVar37._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
      auVar37._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
      auVar37._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
      auVar37._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
      auVar37._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
      auVar37._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
      auVar37._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar37._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar37._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar37._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar37._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar37._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar37._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar37._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(lVar10 * param_2 + param_1 + uVar6 * 4 + uVar5 * 4);
      auVar38._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
      auVar38._0_4_ = (uint)(bVar4 & 1) * *piVar1;
      auVar38._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
      auVar38._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
      auVar38._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
      auVar38._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
      auVar38._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
      auVar38._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
      auVar38._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar38._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar38._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar38._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar38._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar38._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar38._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar38._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      piVar1 = (int *)(param_1 + param_2 * lVar8 + uVar6 * 4 + uVar5 * 4);
      auVar39._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
      auVar39._0_4_ = (uint)(bVar4 & 1) * *piVar1;
      auVar39._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
      auVar39._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
      auVar39._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
      auVar39._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
      auVar39._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
      auVar39._28_4_ = (uint)((byte)(uVar15 >> 7) & 1) * piVar1[7];
      auVar39._32_4_ = (uint)(bVar3 & 1) * piVar1[8];
      auVar39._36_4_ = (uint)(bVar3 >> 1 & 1) * piVar1[9];
      auVar39._40_4_ = (uint)(bVar3 >> 2 & 1) * piVar1[10];
      auVar39._44_4_ = (uint)(bVar3 >> 3 & 1) * piVar1[0xb];
      auVar39._48_4_ = (uint)(bVar3 >> 4 & 1) * piVar1[0xc];
      auVar39._52_4_ = (uint)(bVar3 >> 5 & 1) * piVar1[0xd];
      auVar39._56_4_ = (uint)(bVar3 >> 6 & 1) * piVar1[0xe];
      auVar39._60_4_ = (uint)(bVar3 >> 7) * piVar1[0xf];
      auVar26 = vaddps_avx512f(auVar35,auVar36);
      auVar27 = vaddps_avx512f(auVar37,auVar38);
      auVar26 = vmulps_avx512f(auVar20,auVar26);
      auVar26 = vfmadd231ps_avx512f(auVar26,auVar27,auVar19);
      uVar5 = uVar5 + 0x10;
      auVar26 = vfmadd231ps_avx512f(auVar26,auVar39,auVar21);
      auVar26 = vcvtps2dq_avx512f(auVar26);
      auVar16 = vpmovdw_avx512f(auVar26);
      auVar16 = vmovdqu16_avx512vl(auVar16);
      *(undefined1 (*) [32])(lVar7 + param_4 + uVar6 * 2) = auVar16;
      lVar7 = lVar7 + 0x20;
    } while (uVar5 < param_5 - uVar6);
  }
  return;
}

