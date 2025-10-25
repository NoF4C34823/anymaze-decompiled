
void FUN_14059eb60(undefined1 (*param_1) [32],longlong param_2,uint *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
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
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [32];
  ushort uVar20;
  uint uVar21;
  char unaff_BL;
  longlong unaff_RBP;
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  int in_XMM17_Da;
  int in_XMM17_Db;
  int in_XMM17_Dc;
  int in_XMM17_Dd;
  int in_YMM17_H;
  int in_register_00001654;
  int in_register_00001658;
  int in_register_0000165c;
  int in_register_00001660;
  int in_register_00001664;
  int in_register_00001668;
  int in_register_0000166c;
  int in_register_00001670;
  int in_register_00001674;
  int in_register_00001678;
  int in_register_0000167c;
  undefined1 auVar28 [64];
  undefined1 auVar26 [32];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar27 [32];
  
  param_4 = param_4 & 7;
  auVar27 = (undefined1  [32])0x0;
  auVar28._32_32_ = in_ZmmResult._32_32_;
  auVar23 = vmovdqu8_avx512vl(*param_1);
  auVar24 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar25 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  if (param_4 == 0) {
    auVar26 = ZEXT832(0) << 0x40;
    auVar19 = auVar26;
  }
  else {
    uVar22 = 0xffffffffffffffffU >> ((ulonglong)(uint)((int)param_4 * -4) & 0x3f) & 0xffffffff;
    auVar28._0_32_ = vmovdqu8_avx512vl(param_1[1]);
    bVar1 = (byte)uVar22;
    auVar29[1] = ((byte)(uVar22 >> 1) & 1) * auVar28[1];
    auVar29[0] = (bVar1 & 1) * auVar28[0];
    auVar29[2] = ((byte)(uVar22 >> 2) & 1) * auVar28[2];
    auVar29[3] = ((byte)(uVar22 >> 3) & 1) * auVar28[3];
    auVar29[4] = ((byte)(uVar22 >> 4) & 1) * auVar28[4];
    auVar29[5] = ((byte)(uVar22 >> 5) & 1) * auVar28[5];
    auVar29[6] = ((byte)(uVar22 >> 6) & 1) * auVar28[6];
    auVar29[7] = ((byte)(uVar22 >> 7) & 1) * auVar28[7];
    bVar2 = (byte)(uVar22 >> 8);
    auVar29[8] = (bVar2 & 1) * auVar28[8];
    auVar29[9] = ((byte)(uVar22 >> 9) & 1) * auVar28[9];
    auVar29[10] = ((byte)(uVar22 >> 10) & 1) * auVar28[10];
    auVar29[0xb] = ((byte)(uVar22 >> 0xb) & 1) * auVar28[0xb];
    auVar29[0xc] = ((byte)(uVar22 >> 0xc) & 1) * auVar28[0xc];
    auVar29[0xd] = ((byte)(uVar22 >> 0xd) & 1) * auVar28[0xd];
    auVar29[0xe] = ((byte)(uVar22 >> 0xe) & 1) * auVar28[0xe];
    auVar29[0xf] = ((byte)(uVar22 >> 0xf) & 1) * auVar28[0xf];
    bVar3 = (byte)(uVar22 >> 0x10);
    auVar29[0x10] = (bVar3 & 1) * auVar28[0x10];
    auVar29[0x11] = ((byte)(uVar22 >> 0x11) & 1) * auVar28[0x11];
    auVar29[0x12] = ((byte)(uVar22 >> 0x12) & 1) * auVar28[0x12];
    auVar29[0x13] = ((byte)(uVar22 >> 0x13) & 1) * auVar28[0x13];
    auVar29[0x14] = ((byte)(uVar22 >> 0x14) & 1) * auVar28[0x14];
    auVar29[0x15] = ((byte)(uVar22 >> 0x15) & 1) * auVar28[0x15];
    auVar29[0x16] = ((byte)(uVar22 >> 0x16) & 1) * auVar28[0x16];
    auVar29[0x17] = ((byte)(uVar22 >> 0x17) & 1) * auVar28[0x17];
    bVar4 = (byte)(uVar22 >> 0x18);
    auVar29[0x18] = (bVar4 & 1) * auVar28[0x18];
    auVar29[0x19] = ((byte)(uVar22 >> 0x19) & 1) * auVar28[0x19];
    auVar29[0x1a] = ((byte)(uVar22 >> 0x1a) & 1) * auVar28[0x1a];
    auVar29[0x1b] = ((byte)(uVar22 >> 0x1b) & 1) * auVar28[0x1b];
    auVar29[0x1c] = ((byte)(uVar22 >> 0x1c) & 1) * auVar28[0x1c];
    auVar29._30_34_ = auVar28._30_34_;
    auVar29[0x1d] = ((byte)(uVar22 >> 0x1d) & 1) * auVar28[0x1d];
    auVar26 = auVar29._0_32_;
    auVar30._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
    auVar30._32_32_ = auVar28._32_32_;
    auVar31[1] = ((byte)(uVar22 >> 1) & 1) * auVar30[1];
    auVar31[0] = (bVar1 & 1) * auVar30[0];
    auVar31[2] = ((byte)(uVar22 >> 2) & 1) * auVar30[2];
    auVar31[3] = ((byte)(uVar22 >> 3) & 1) * auVar30[3];
    auVar31[4] = ((byte)(uVar22 >> 4) & 1) * auVar30[4];
    auVar31[5] = ((byte)(uVar22 >> 5) & 1) * auVar30[5];
    auVar31[6] = ((byte)(uVar22 >> 6) & 1) * auVar30[6];
    auVar31[7] = ((byte)(uVar22 >> 7) & 1) * auVar30[7];
    auVar31[8] = (bVar2 & 1) * auVar30[8];
    auVar31[9] = ((byte)(uVar22 >> 9) & 1) * auVar30[9];
    auVar31[10] = ((byte)(uVar22 >> 10) & 1) * auVar30[10];
    auVar31[0xb] = ((byte)(uVar22 >> 0xb) & 1) * auVar30[0xb];
    auVar31[0xc] = ((byte)(uVar22 >> 0xc) & 1) * auVar30[0xc];
    auVar31[0xd] = ((byte)(uVar22 >> 0xd) & 1) * auVar30[0xd];
    auVar31[0xe] = ((byte)(uVar22 >> 0xe) & 1) * auVar30[0xe];
    auVar31[0xf] = ((byte)(uVar22 >> 0xf) & 1) * auVar30[0xf];
    auVar31[0x10] = (bVar3 & 1) * auVar30[0x10];
    auVar31[0x11] = ((byte)(uVar22 >> 0x11) & 1) * auVar30[0x11];
    auVar31[0x12] = ((byte)(uVar22 >> 0x12) & 1) * auVar30[0x12];
    auVar31[0x13] = ((byte)(uVar22 >> 0x13) & 1) * auVar30[0x13];
    auVar31[0x14] = ((byte)(uVar22 >> 0x14) & 1) * auVar30[0x14];
    auVar31[0x15] = ((byte)(uVar22 >> 0x15) & 1) * auVar30[0x15];
    auVar31[0x16] = ((byte)(uVar22 >> 0x16) & 1) * auVar30[0x16];
    auVar31[0x17] = ((byte)(uVar22 >> 0x17) & 1) * auVar30[0x17];
    auVar31[0x18] = (bVar4 & 1) * auVar30[0x18];
    auVar31[0x19] = ((byte)(uVar22 >> 0x19) & 1) * auVar30[0x19];
    auVar31[0x1a] = ((byte)(uVar22 >> 0x1a) & 1) * auVar30[0x1a];
    auVar31[0x1b] = ((byte)(uVar22 >> 0x1b) & 1) * auVar30[0x1b];
    auVar31[0x1c] = ((byte)(uVar22 >> 0x1c) & 1) * auVar30[0x1c];
    auVar31._30_34_ = auVar30._30_34_;
    auVar31[0x1d] = ((byte)(uVar22 >> 0x1d) & 1) * auVar30[0x1d];
    auVar32._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
    auVar32._32_32_ = auVar28._32_32_;
    auVar33[1] = ((byte)(uVar22 >> 1) & 1) * auVar32[1];
    auVar33[0] = (bVar1 & 1) * auVar32[0];
    auVar33[2] = ((byte)(uVar22 >> 2) & 1) * auVar32[2];
    auVar33[3] = ((byte)(uVar22 >> 3) & 1) * auVar32[3];
    auVar33[4] = ((byte)(uVar22 >> 4) & 1) * auVar32[4];
    auVar33[5] = ((byte)(uVar22 >> 5) & 1) * auVar32[5];
    auVar33[6] = ((byte)(uVar22 >> 6) & 1) * auVar32[6];
    auVar33[7] = ((byte)(uVar22 >> 7) & 1) * auVar32[7];
    auVar33[8] = (bVar2 & 1) * auVar32[8];
    auVar33[9] = ((byte)(uVar22 >> 9) & 1) * auVar32[9];
    auVar33[10] = ((byte)(uVar22 >> 10) & 1) * auVar32[10];
    auVar33[0xb] = ((byte)(uVar22 >> 0xb) & 1) * auVar32[0xb];
    auVar33[0xc] = ((byte)(uVar22 >> 0xc) & 1) * auVar32[0xc];
    auVar33[0xd] = ((byte)(uVar22 >> 0xd) & 1) * auVar32[0xd];
    auVar33[0xe] = ((byte)(uVar22 >> 0xe) & 1) * auVar32[0xe];
    auVar33[0xf] = ((byte)(uVar22 >> 0xf) & 1) * auVar32[0xf];
    auVar33[0x10] = (bVar3 & 1) * auVar32[0x10];
    auVar33[0x11] = ((byte)(uVar22 >> 0x11) & 1) * auVar32[0x11];
    auVar33[0x12] = ((byte)(uVar22 >> 0x12) & 1) * auVar32[0x12];
    auVar33[0x13] = ((byte)(uVar22 >> 0x13) & 1) * auVar32[0x13];
    auVar33[0x14] = ((byte)(uVar22 >> 0x14) & 1) * auVar32[0x14];
    auVar33[0x15] = ((byte)(uVar22 >> 0x15) & 1) * auVar32[0x15];
    auVar33[0x16] = ((byte)(uVar22 >> 0x16) & 1) * auVar32[0x16];
    auVar33[0x17] = ((byte)(uVar22 >> 0x17) & 1) * auVar32[0x17];
    auVar33[0x18] = (bVar4 & 1) * auVar32[0x18];
    auVar33[0x19] = ((byte)(uVar22 >> 0x19) & 1) * auVar32[0x19];
    auVar33[0x1a] = ((byte)(uVar22 >> 0x1a) & 1) * auVar32[0x1a];
    auVar33[0x1b] = ((byte)(uVar22 >> 0x1b) & 1) * auVar32[0x1b];
    auVar33[0x1c] = ((byte)(uVar22 >> 0x1c) & 1) * auVar32[0x1c];
    auVar33._30_34_ = auVar32._30_34_;
    auVar33[0x1d] = ((byte)(uVar22 >> 0x1d) & 1) * auVar32[0x1d];
    auVar27 = auVar33._0_32_;
    auVar19 = auVar31._0_32_;
  }
  auVar23 = vminps_avx(auVar23,auVar24);
  auVar24 = vminps_avx(auVar26,auVar19);
  auVar23 = vminps_avx(auVar23,auVar25);
  auVar24 = vminps_avx(auVar24,auVar27);
  auVar25 = vshuff32x4_avx512vl(auVar23,auVar24,1);
  vminps_avx(auVar23,auVar25);
  vpalignr_avx512vl(auVar24,auVar25);
  *(char *)(param_2 + -0x5f) = *(char *)(param_2 + -0x5f) + (0xfffffffffffffff7 < -param_4);
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) - unaff_BL;
  uVar21 = 0xff >> ((int)-param_4 + 8U & 0x1f);
  uVar20 = (ushort)uVar21;
  bVar5 = (bool)((byte)uVar21 & 1);
  bVar6 = (bool)((byte)(uVar20 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar20 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar20 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar20 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar20 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar20 >> 6) & 1);
  bVar12 = (bool)((byte)(uVar20 >> 7) & 1);
  bVar1 = (byte)(uVar21 >> 8);
  bVar13 = (bool)(bVar1 >> 1 & 1);
  bVar14 = (bool)(bVar1 >> 2 & 1);
  bVar15 = (bool)(bVar1 >> 3 & 1);
  bVar16 = (bool)(bVar1 >> 4 & 1);
  bVar17 = (bool)(bVar1 >> 5 & 1);
  bVar18 = (bool)(bVar1 >> 6 & 1);
  *param_3 = (uint)bVar5 * in_XMM17_Da | (uint)!bVar5 * *param_3;
  param_3[1] = (uint)bVar6 * in_XMM17_Db | (uint)!bVar6 * param_3[1];
  param_3[2] = (uint)bVar7 * in_XMM17_Dc | (uint)!bVar7 * param_3[2];
  param_3[3] = (uint)bVar8 * in_XMM17_Dd | (uint)!bVar8 * param_3[3];
  param_3[4] = (uint)bVar9 * in_YMM17_H | (uint)!bVar9 * param_3[4];
  param_3[5] = (uint)bVar10 * in_register_00001654 | (uint)!bVar10 * param_3[5];
  param_3[6] = (uint)bVar11 * in_register_00001658 | (uint)!bVar11 * param_3[6];
  param_3[7] = (uint)bVar12 * in_register_0000165c | (uint)!bVar12 * param_3[7];
  param_3[8] = (uint)(bVar1 & 1) * in_register_00001660 | (uint)!(bool)(bVar1 & 1) * param_3[8];
  param_3[9] = (uint)bVar13 * in_register_00001664 | (uint)!bVar13 * param_3[9];
  param_3[10] = (uint)bVar14 * in_register_00001668 | (uint)!bVar14 * param_3[10];
  param_3[0xb] = (uint)bVar15 * in_register_0000166c | (uint)!bVar15 * param_3[0xb];
  param_3[0xc] = (uint)bVar16 * in_register_00001670 | (uint)!bVar16 * param_3[0xc];
  param_3[0xd] = (uint)bVar17 * in_register_00001674 | (uint)!bVar17 * param_3[0xd];
  param_3[0xe] = (uint)bVar18 * in_register_00001678 | (uint)!bVar18 * param_3[0xe];
  param_3[0xf] = (uint)(bVar1 >> 7) * in_register_0000167c |
                 (uint)!(bool)(bVar1 >> 7) * param_3[0xf];
  return;
}

