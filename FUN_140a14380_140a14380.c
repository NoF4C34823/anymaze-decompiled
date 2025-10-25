
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a14380(undefined1 (*param_1) [16],ulonglong param_2,ulonglong param_3,uint *param_4)

{
  uint *puVar1;
  bool bVar2;
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
  undefined8 uVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  ulonglong uVar22;
  ushort uVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
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
  undefined1 auVar24 [16];
  undefined1 auVar30 [16];
  
  auVar47 = _DAT_14308e940;
  if (0 < (longlong)param_3) {
    auVar30 = ZEXT416(*param_4);
    auVar31 = ZEXT416(param_4[1]);
    auVar32 = ZEXT416(param_4[2]);
    if ((longlong)param_3 < 0x20) {
      uVar21 = 0;
    }
    else {
      if ((longlong)param_3 < 0x1d1) {
        uVar19 = 0;
        uVar21 = param_3 & 0xffffffffffffffe0;
      }
      else {
        uVar19 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar19 != 0) && (uVar19 = 0x40 - uVar19 >> 2, (longlong)param_3 < (longlong)uVar19))
          {
            uVar19 = param_3;
          }
        }
        else {
          uVar19 = 0;
        }
        uVar21 = param_3 - (param_3 - uVar19 & 0x1f);
        if (uVar19 != 0) {
          uVar22 = 0;
          auVar38 = vmovdqu32_avx512f(_DAT_14308e980);
          auVar39 = vmovdqu32_avx512f(_DAT_14308e9c0);
          auVar40 = vpbroadcastq_avx512f();
          auVar41 = vbroadcastss_avx512f(auVar30);
          auVar42 = vbroadcastss_avx512f(auVar31);
          auVar43 = vbroadcastss_avx512f(auVar32);
          pauVar20 = param_1;
          do {
            uVar15 = vpcmpgtq_avx512f(auVar40,auVar38);
            bVar17 = (byte)uVar15;
            uVar15 = vpcmpgtq_avx512f(auVar40,auVar39);
            bVar16 = (byte)uVar15;
            auVar38 = vpaddq_avx512f(auVar38,auVar47);
            auVar39 = vpaddq_avx512f(auVar39,auVar47);
            uVar23 = CONCAT11(bVar16,bVar17);
            auVar24 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pauVar20[-1] + 0xf));
            auVar25[1] = ((byte)(uVar23 >> 1) & 1) * auVar24[1];
            auVar25[0] = (bVar17 & 1) * auVar24[0];
            auVar25[2] = ((byte)(uVar23 >> 2) & 1) * auVar24[2];
            auVar25[3] = ((byte)(uVar23 >> 3) & 1) * auVar24[3];
            auVar25[4] = ((byte)(uVar23 >> 4) & 1) * auVar24[4];
            auVar25[5] = ((byte)(uVar23 >> 5) & 1) * auVar24[5];
            auVar25[6] = ((byte)(uVar23 >> 6) & 1) * auVar24[6];
            auVar25[7] = ((byte)(uVar23 >> 7) & 1) * auVar24[7];
            auVar25[8] = (bVar16 & 1) * auVar24[8];
            auVar25[9] = (bVar16 >> 1 & 1) * auVar24[9];
            auVar25[10] = (bVar16 >> 2 & 1) * auVar24[10];
            auVar25[0xb] = (bVar16 >> 3 & 1) * auVar24[0xb];
            auVar25[0xc] = (bVar16 >> 4 & 1) * auVar24[0xc];
            auVar25[0xd] = (bVar16 >> 5 & 1) * auVar24[0xd];
            auVar25[0xe] = (bVar16 >> 6 & 1) * auVar24[0xe];
            cVar18 = (char)bVar16 >> 7;
            auVar25[0xf] = -cVar18 * auVar24[0xf];
            auVar24 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*pauVar20 + 1));
            auVar26[1] = ((byte)(uVar23 >> 1) & 1) * auVar24[1];
            auVar26[0] = (bVar17 & 1) * auVar24[0];
            auVar26[2] = ((byte)(uVar23 >> 2) & 1) * auVar24[2];
            auVar26[3] = ((byte)(uVar23 >> 3) & 1) * auVar24[3];
            auVar26[4] = ((byte)(uVar23 >> 4) & 1) * auVar24[4];
            auVar26[5] = ((byte)(uVar23 >> 5) & 1) * auVar24[5];
            auVar26[6] = ((byte)(uVar23 >> 6) & 1) * auVar24[6];
            auVar26[7] = ((byte)(uVar23 >> 7) & 1) * auVar24[7];
            auVar26[8] = (bVar16 & 1) * auVar24[8];
            auVar26[9] = (bVar16 >> 1 & 1) * auVar24[9];
            auVar26[10] = (bVar16 >> 2 & 1) * auVar24[10];
            auVar26[0xb] = (bVar16 >> 3 & 1) * auVar24[0xb];
            auVar26[0xc] = (bVar16 >> 4 & 1) * auVar24[0xc];
            auVar26[0xd] = (bVar16 >> 5 & 1) * auVar24[0xd];
            auVar26[0xe] = (bVar16 >> 6 & 1) * auVar24[0xe];
            auVar26[0xf] = -cVar18 * auVar24[0xf];
            auVar24 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pauVar20[-1] + 0xe));
            auVar27[1] = ((byte)(uVar23 >> 1) & 1) * auVar24[1];
            auVar27[0] = (bVar17 & 1) * auVar24[0];
            auVar27[2] = ((byte)(uVar23 >> 2) & 1) * auVar24[2];
            auVar27[3] = ((byte)(uVar23 >> 3) & 1) * auVar24[3];
            auVar27[4] = ((byte)(uVar23 >> 4) & 1) * auVar24[4];
            auVar27[5] = ((byte)(uVar23 >> 5) & 1) * auVar24[5];
            auVar27[6] = ((byte)(uVar23 >> 6) & 1) * auVar24[6];
            auVar27[7] = ((byte)(uVar23 >> 7) & 1) * auVar24[7];
            auVar27[8] = (bVar16 & 1) * auVar24[8];
            auVar27[9] = (bVar16 >> 1 & 1) * auVar24[9];
            auVar27[10] = (bVar16 >> 2 & 1) * auVar24[10];
            auVar27[0xb] = (bVar16 >> 3 & 1) * auVar24[0xb];
            auVar27[0xc] = (bVar16 >> 4 & 1) * auVar24[0xc];
            auVar27[0xd] = (bVar16 >> 5 & 1) * auVar24[0xd];
            auVar27[0xe] = (bVar16 >> 6 & 1) * auVar24[0xe];
            auVar27[0xf] = -cVar18 * auVar24[0xf];
            auVar24 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*pauVar20 + 2));
            auVar28[1] = ((byte)(uVar23 >> 1) & 1) * auVar24[1];
            auVar28[0] = (bVar17 & 1) * auVar24[0];
            auVar28[2] = ((byte)(uVar23 >> 2) & 1) * auVar24[2];
            auVar28[3] = ((byte)(uVar23 >> 3) & 1) * auVar24[3];
            auVar28[4] = ((byte)(uVar23 >> 4) & 1) * auVar24[4];
            auVar28[5] = ((byte)(uVar23 >> 5) & 1) * auVar24[5];
            auVar28[6] = ((byte)(uVar23 >> 6) & 1) * auVar24[6];
            auVar28[7] = ((byte)(uVar23 >> 7) & 1) * auVar24[7];
            auVar28[8] = (bVar16 & 1) * auVar24[8];
            auVar28[9] = (bVar16 >> 1 & 1) * auVar24[9];
            auVar28[10] = (bVar16 >> 2 & 1) * auVar24[10];
            auVar28[0xb] = (bVar16 >> 3 & 1) * auVar24[0xb];
            auVar28[0xc] = (bVar16 >> 4 & 1) * auVar24[0xc];
            auVar28[0xd] = (bVar16 >> 5 & 1) * auVar24[0xd];
            auVar28[0xe] = (bVar16 >> 6 & 1) * auVar24[0xe];
            auVar28[0xf] = -cVar18 * auVar24[0xf];
            auVar35 = vpmovzxbw_avx512vl(auVar25);
            auVar36 = vpmovzxbw_avx512vl(auVar26);
            auVar35 = vpaddw_avx512vl(auVar35,auVar36);
            auVar36 = vpmovzxbw_avx512vl(auVar27);
            auVar37 = vpmovzxbw_avx512vl(auVar28);
            auVar36 = vpaddw_avx512vl(auVar36,auVar37);
            auVar24 = vmovdqu8_avx512vl(*pauVar20);
            auVar29[1] = ((byte)(uVar23 >> 1) & 1) * auVar24[1];
            auVar29[0] = (bVar17 & 1) * auVar24[0];
            auVar29[2] = ((byte)(uVar23 >> 2) & 1) * auVar24[2];
            auVar29[3] = ((byte)(uVar23 >> 3) & 1) * auVar24[3];
            auVar29[4] = ((byte)(uVar23 >> 4) & 1) * auVar24[4];
            auVar29[5] = ((byte)(uVar23 >> 5) & 1) * auVar24[5];
            auVar29[6] = ((byte)(uVar23 >> 6) & 1) * auVar24[6];
            auVar29[7] = ((byte)(uVar23 >> 7) & 1) * auVar24[7];
            auVar29[8] = (bVar16 & 1) * auVar24[8];
            auVar29[9] = (bVar16 >> 1 & 1) * auVar24[9];
            auVar29[10] = (bVar16 >> 2 & 1) * auVar24[10];
            auVar29[0xb] = (bVar16 >> 3 & 1) * auVar24[0xb];
            auVar29[0xc] = (bVar16 >> 4 & 1) * auVar24[0xc];
            auVar29[0xd] = (bVar16 >> 5 & 1) * auVar24[0xd];
            auVar29[0xe] = (bVar16 >> 6 & 1) * auVar24[0xe];
            auVar29[0xf] = -cVar18 * auVar24[0xf];
            auVar44 = vpmovzxwd_avx512f(auVar35);
            auVar45 = vpmovzxwd_avx512f(auVar36);
            auVar44 = vcvtdq2ps_avx512f(auVar44);
            auVar45 = vcvtdq2ps_avx512f(auVar45);
            auVar44 = vmulps_avx512f(auVar42,auVar44);
            auVar35 = vpmovzxbw_avx512vl(auVar29);
            pauVar20 = pauVar20 + 1;
            auVar46 = vpmovzxwd_avx512f(auVar35);
            auVar44 = vfmadd231ps_avx512f(auVar44,auVar45,auVar41);
            auVar45 = vcvtdq2ps_avx512f(auVar46);
            auVar44 = vfmadd231ps_avx512f(auVar44,auVar45,auVar43);
            puVar1 = (uint *)(param_2 + uVar22 * 4);
            bVar2 = (bool)((byte)(uVar23 >> 1) & 1);
            bVar3 = (bool)((byte)(uVar23 >> 2) & 1);
            bVar4 = (bool)((byte)(uVar23 >> 3) & 1);
            bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
            bVar6 = (bool)((byte)(uVar23 >> 5) & 1);
            bVar7 = (bool)((byte)(uVar23 >> 6) & 1);
            bVar8 = (bool)((byte)(uVar23 >> 7) & 1);
            bVar9 = (bool)(bVar16 >> 1 & 1);
            bVar10 = (bool)(bVar16 >> 2 & 1);
            bVar11 = (bool)(bVar16 >> 3 & 1);
            bVar12 = (bool)(bVar16 >> 4 & 1);
            bVar13 = (bool)(bVar16 >> 5 & 1);
            bVar14 = (bool)(bVar16 >> 6 & 1);
            *puVar1 = (uint)(bVar17 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar17 & 1) * *puVar1;
            puVar1[1] = (uint)bVar2 * auVar44._4_4_ | (uint)!bVar2 * puVar1[1];
            puVar1[2] = (uint)bVar3 * auVar44._8_4_ | (uint)!bVar3 * puVar1[2];
            puVar1[3] = (uint)bVar4 * auVar44._12_4_ | (uint)!bVar4 * puVar1[3];
            puVar1[4] = (uint)bVar5 * auVar44._16_4_ | (uint)!bVar5 * puVar1[4];
            puVar1[5] = (uint)bVar6 * auVar44._20_4_ | (uint)!bVar6 * puVar1[5];
            puVar1[6] = (uint)bVar7 * auVar44._24_4_ | (uint)!bVar7 * puVar1[6];
            puVar1[7] = (uint)bVar8 * auVar44._28_4_ | (uint)!bVar8 * puVar1[7];
            puVar1[8] = (uint)(bVar16 & 1) * auVar44._32_4_ | (uint)!(bool)(bVar16 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar9 * auVar44._36_4_ | (uint)!bVar9 * puVar1[9];
            puVar1[10] = (uint)bVar10 * auVar44._40_4_ | (uint)!bVar10 * puVar1[10];
            puVar1[0xb] = (uint)bVar11 * auVar44._44_4_ | (uint)!bVar11 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar12 * auVar44._48_4_ | (uint)!bVar12 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar13 * auVar44._52_4_ | (uint)!bVar13 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar14 * auVar44._56_4_ | (uint)!bVar14 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar16 >> 7) * auVar44._60_4_ |
                          (uint)!(bool)(bVar16 >> 7) * puVar1[0xf];
            uVar22 = uVar22 + 0x10;
          } while (uVar22 < uVar19);
          if (param_3 == uVar19) {
            return;
          }
        }
      }
      if ((longlong)(uVar19 + 0x20) <= (longlong)uVar21) {
        auVar47 = vbroadcastss_avx512f(auVar30);
        auVar38 = vbroadcastss_avx512f(auVar31);
        auVar39 = vbroadcastss_avx512f(auVar32);
        do {
          auVar40 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(param_1[-1] + uVar19 + 0xf));
          auVar41 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(*param_1 + uVar19 + 1));
          auVar42 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(param_1[-1] + uVar19 + 0xe));
          auVar43 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(*param_1 + uVar19 + 2));
          auVar40 = vpaddw_avx512bw(auVar40,auVar41);
          auVar41 = vpaddw_avx512bw(auVar42,auVar43);
          auVar35 = vextractf64x4_avx512f(auVar40,1);
          auVar36 = vextractf64x4_avx512f(auVar41,1);
          auVar42 = vpmovzxwd_avx512f(auVar35);
          auVar43 = vpmovzxwd_avx512f(auVar36);
          auVar42 = vcvtdq2ps_avx512f(auVar42);
          auVar43 = vcvtdq2ps_avx512f(auVar43);
          auVar42 = vmulps_avx512f(auVar38,auVar42);
          auVar42 = vfmadd231ps_avx512f(auVar42,auVar43,auVar47);
          auVar40 = vpmovzxwd_avx512f(auVar40._0_32_);
          auVar40 = vcvtdq2ps_avx512f(auVar40);
          auVar41 = vpmovzxwd_avx512f(auVar41._0_32_);
          auVar41 = vcvtdq2ps_avx512f(auVar41);
          auVar40 = vmulps_avx512f(auVar38,auVar40);
          auVar40 = vfmadd231ps_avx512f(auVar40,auVar41,auVar47);
          auVar41 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(*param_1 + uVar19));
          auVar35 = vextractf64x4_avx512f(auVar41,1);
          auVar43 = vpmovzxwd_avx512f(auVar35);
          auVar43 = vcvtdq2ps_avx512f(auVar43);
          auVar42 = vfmadd231ps_avx512f(auVar42,auVar43,auVar39);
          *(undefined1 (*) [64])(param_2 + 0x40 + uVar19 * 4) = auVar42;
          auVar41 = vpmovzxwd_avx512f(auVar41._0_32_);
          auVar41 = vcvtdq2ps_avx512f(auVar41);
          auVar40 = vfmadd231ps_avx512f(auVar40,auVar41,auVar39);
          *(undefined1 (*) [64])(param_2 + uVar19 * 4) = auVar40;
          uVar19 = uVar19 + 0x20;
        } while (uVar19 < uVar21);
      }
    }
    auVar47 = _DAT_14308e940;
    if (uVar21 + 1 <= param_3) {
      uVar19 = 0;
      pauVar20 = (undefined1 (*) [16])(*param_1 + uVar21);
      auVar38 = vmovdqu32_avx512f(_DAT_14308e980);
      auVar39 = vmovdqu32_avx512f(_DAT_14308e9c0);
      auVar40 = vbroadcastss_avx512f(auVar30);
      auVar41 = vbroadcastss_avx512f(auVar31);
      auVar42 = vbroadcastss_avx512f(auVar32);
      auVar43 = vpbroadcastq_avx512f();
      do {
        uVar15 = vpcmpgtq_avx512f(auVar43,auVar38);
        bVar17 = (byte)uVar15;
        uVar15 = vpcmpgtq_avx512f(auVar43,auVar39);
        bVar16 = (byte)uVar15;
        auVar38 = vpaddq_avx512f(auVar38,auVar47);
        auVar39 = vpaddq_avx512f(auVar39,auVar47);
        uVar23 = CONCAT11(bVar16,bVar17);
        auVar30 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pauVar20[-1] + 0xf));
        auVar31[1] = ((byte)(uVar23 >> 1) & 1) * auVar30[1];
        auVar31[0] = (bVar17 & 1) * auVar30[0];
        auVar31[2] = ((byte)(uVar23 >> 2) & 1) * auVar30[2];
        auVar31[3] = ((byte)(uVar23 >> 3) & 1) * auVar30[3];
        auVar31[4] = ((byte)(uVar23 >> 4) & 1) * auVar30[4];
        auVar31[5] = ((byte)(uVar23 >> 5) & 1) * auVar30[5];
        auVar31[6] = ((byte)(uVar23 >> 6) & 1) * auVar30[6];
        auVar31[7] = ((byte)(uVar23 >> 7) & 1) * auVar30[7];
        auVar31[8] = (bVar16 & 1) * auVar30[8];
        auVar31[9] = (bVar16 >> 1 & 1) * auVar30[9];
        auVar31[10] = (bVar16 >> 2 & 1) * auVar30[10];
        auVar31[0xb] = (bVar16 >> 3 & 1) * auVar30[0xb];
        auVar31[0xc] = (bVar16 >> 4 & 1) * auVar30[0xc];
        auVar31[0xd] = (bVar16 >> 5 & 1) * auVar30[0xd];
        auVar31[0xe] = (bVar16 >> 6 & 1) * auVar30[0xe];
        cVar18 = (char)bVar16 >> 7;
        auVar31[0xf] = -cVar18 * auVar30[0xf];
        auVar30 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*pauVar20 + 1));
        auVar32[1] = ((byte)(uVar23 >> 1) & 1) * auVar30[1];
        auVar32[0] = (bVar17 & 1) * auVar30[0];
        auVar32[2] = ((byte)(uVar23 >> 2) & 1) * auVar30[2];
        auVar32[3] = ((byte)(uVar23 >> 3) & 1) * auVar30[3];
        auVar32[4] = ((byte)(uVar23 >> 4) & 1) * auVar30[4];
        auVar32[5] = ((byte)(uVar23 >> 5) & 1) * auVar30[5];
        auVar32[6] = ((byte)(uVar23 >> 6) & 1) * auVar30[6];
        auVar32[7] = ((byte)(uVar23 >> 7) & 1) * auVar30[7];
        auVar32[8] = (bVar16 & 1) * auVar30[8];
        auVar32[9] = (bVar16 >> 1 & 1) * auVar30[9];
        auVar32[10] = (bVar16 >> 2 & 1) * auVar30[10];
        auVar32[0xb] = (bVar16 >> 3 & 1) * auVar30[0xb];
        auVar32[0xc] = (bVar16 >> 4 & 1) * auVar30[0xc];
        auVar32[0xd] = (bVar16 >> 5 & 1) * auVar30[0xd];
        auVar32[0xe] = (bVar16 >> 6 & 1) * auVar30[0xe];
        auVar32[0xf] = -cVar18 * auVar30[0xf];
        auVar30 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*pauVar20 + 2));
        auVar24[1] = ((byte)(uVar23 >> 1) & 1) * auVar30[1];
        auVar24[0] = (bVar17 & 1) * auVar30[0];
        auVar24[2] = ((byte)(uVar23 >> 2) & 1) * auVar30[2];
        auVar24[3] = ((byte)(uVar23 >> 3) & 1) * auVar30[3];
        auVar24[4] = ((byte)(uVar23 >> 4) & 1) * auVar30[4];
        auVar24[5] = ((byte)(uVar23 >> 5) & 1) * auVar30[5];
        auVar24[6] = ((byte)(uVar23 >> 6) & 1) * auVar30[6];
        auVar24[7] = ((byte)(uVar23 >> 7) & 1) * auVar30[7];
        auVar24[8] = (bVar16 & 1) * auVar30[8];
        auVar24[9] = (bVar16 >> 1 & 1) * auVar30[9];
        auVar24[10] = (bVar16 >> 2 & 1) * auVar30[10];
        auVar24[0xb] = (bVar16 >> 3 & 1) * auVar30[0xb];
        auVar24[0xc] = (bVar16 >> 4 & 1) * auVar30[0xc];
        auVar24[0xd] = (bVar16 >> 5 & 1) * auVar30[0xd];
        auVar24[0xe] = (bVar16 >> 6 & 1) * auVar30[0xe];
        auVar24[0xf] = -cVar18 * auVar30[0xf];
        auVar30 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(pauVar20[-1] + 0xe));
        auVar33[1] = ((byte)(uVar23 >> 1) & 1) * auVar30[1];
        auVar33[0] = (bVar17 & 1) * auVar30[0];
        auVar33[2] = ((byte)(uVar23 >> 2) & 1) * auVar30[2];
        auVar33[3] = ((byte)(uVar23 >> 3) & 1) * auVar30[3];
        auVar33[4] = ((byte)(uVar23 >> 4) & 1) * auVar30[4];
        auVar33[5] = ((byte)(uVar23 >> 5) & 1) * auVar30[5];
        auVar33[6] = ((byte)(uVar23 >> 6) & 1) * auVar30[6];
        auVar33[7] = ((byte)(uVar23 >> 7) & 1) * auVar30[7];
        auVar33[8] = (bVar16 & 1) * auVar30[8];
        auVar33[9] = (bVar16 >> 1 & 1) * auVar30[9];
        auVar33[10] = (bVar16 >> 2 & 1) * auVar30[10];
        auVar33[0xb] = (bVar16 >> 3 & 1) * auVar30[0xb];
        auVar33[0xc] = (bVar16 >> 4 & 1) * auVar30[0xc];
        auVar33[0xd] = (bVar16 >> 5 & 1) * auVar30[0xd];
        auVar33[0xe] = (bVar16 >> 6 & 1) * auVar30[0xe];
        auVar33[0xf] = -cVar18 * auVar30[0xf];
        auVar30 = vmovdqu8_avx512vl(*pauVar20);
        auVar34[1] = ((byte)(uVar23 >> 1) & 1) * auVar30[1];
        auVar34[0] = (bVar17 & 1) * auVar30[0];
        auVar34[2] = ((byte)(uVar23 >> 2) & 1) * auVar30[2];
        auVar34[3] = ((byte)(uVar23 >> 3) & 1) * auVar30[3];
        auVar34[4] = ((byte)(uVar23 >> 4) & 1) * auVar30[4];
        auVar34[5] = ((byte)(uVar23 >> 5) & 1) * auVar30[5];
        auVar34[6] = ((byte)(uVar23 >> 6) & 1) * auVar30[6];
        auVar34[7] = ((byte)(uVar23 >> 7) & 1) * auVar30[7];
        auVar34[8] = (bVar16 & 1) * auVar30[8];
        auVar34[9] = (bVar16 >> 1 & 1) * auVar30[9];
        auVar34[10] = (bVar16 >> 2 & 1) * auVar30[10];
        auVar34[0xb] = (bVar16 >> 3 & 1) * auVar30[0xb];
        auVar34[0xc] = (bVar16 >> 4 & 1) * auVar30[0xc];
        auVar34[0xd] = (bVar16 >> 5 & 1) * auVar30[0xd];
        auVar34[0xe] = (bVar16 >> 6 & 1) * auVar30[0xe];
        auVar34[0xf] = -cVar18 * auVar30[0xf];
        auVar35 = vpmovzxbw_avx512vl(auVar31);
        pauVar20 = pauVar20 + 1;
        auVar36 = vpmovzxbw_avx512vl(auVar32);
        auVar35 = vpaddw_avx512vl(auVar35,auVar36);
        auVar44 = vpmovzxwd_avx512f(auVar35);
        auVar44 = vcvtdq2ps_avx512f(auVar44);
        auVar35 = vpmovzxbw_avx512vl(auVar24);
        auVar44 = vmulps_avx512f(auVar41,auVar44);
        auVar36 = vpmovzxbw_avx512vl(auVar33);
        auVar35 = vpaddw_avx512vl(auVar36,auVar35);
        auVar45 = vpmovzxwd_avx512f(auVar35);
        auVar45 = vcvtdq2ps_avx512f(auVar45);
        auVar44 = vfmadd231ps_avx512f(auVar44,auVar45,auVar40);
        auVar35 = vpmovzxbw_avx512vl(auVar34);
        auVar45 = vpmovzxwd_avx512f(auVar35);
        auVar45 = vcvtdq2ps_avx512f(auVar45);
        auVar44 = vfmadd231ps_avx512f(auVar44,auVar45,auVar42);
        puVar1 = (uint *)(param_2 + uVar21 * 4 + uVar19 * 4);
        bVar2 = (bool)((byte)(uVar23 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar23 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar23 >> 3) & 1);
        bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
        bVar6 = (bool)((byte)(uVar23 >> 5) & 1);
        bVar7 = (bool)((byte)(uVar23 >> 6) & 1);
        bVar8 = (bool)((byte)(uVar23 >> 7) & 1);
        bVar9 = (bool)(bVar16 >> 1 & 1);
        bVar10 = (bool)(bVar16 >> 2 & 1);
        bVar11 = (bool)(bVar16 >> 3 & 1);
        bVar12 = (bool)(bVar16 >> 4 & 1);
        bVar13 = (bool)(bVar16 >> 5 & 1);
        bVar14 = (bool)(bVar16 >> 6 & 1);
        *puVar1 = (uint)(bVar17 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar17 & 1) * *puVar1;
        puVar1[1] = (uint)bVar2 * auVar44._4_4_ | (uint)!bVar2 * puVar1[1];
        puVar1[2] = (uint)bVar3 * auVar44._8_4_ | (uint)!bVar3 * puVar1[2];
        puVar1[3] = (uint)bVar4 * auVar44._12_4_ | (uint)!bVar4 * puVar1[3];
        puVar1[4] = (uint)bVar5 * auVar44._16_4_ | (uint)!bVar5 * puVar1[4];
        puVar1[5] = (uint)bVar6 * auVar44._20_4_ | (uint)!bVar6 * puVar1[5];
        puVar1[6] = (uint)bVar7 * auVar44._24_4_ | (uint)!bVar7 * puVar1[6];
        puVar1[7] = (uint)bVar8 * auVar44._28_4_ | (uint)!bVar8 * puVar1[7];
        puVar1[8] = (uint)(bVar16 & 1) * auVar44._32_4_ | (uint)!(bool)(bVar16 & 1) * puVar1[8];
        puVar1[9] = (uint)bVar9 * auVar44._36_4_ | (uint)!bVar9 * puVar1[9];
        puVar1[10] = (uint)bVar10 * auVar44._40_4_ | (uint)!bVar10 * puVar1[10];
        puVar1[0xb] = (uint)bVar11 * auVar44._44_4_ | (uint)!bVar11 * puVar1[0xb];
        puVar1[0xc] = (uint)bVar12 * auVar44._48_4_ | (uint)!bVar12 * puVar1[0xc];
        puVar1[0xd] = (uint)bVar13 * auVar44._52_4_ | (uint)!bVar13 * puVar1[0xd];
        puVar1[0xe] = (uint)bVar14 * auVar44._56_4_ | (uint)!bVar14 * puVar1[0xe];
        puVar1[0xf] = (uint)(bVar16 >> 7) * auVar44._60_4_ |
                      (uint)!(bool)(bVar16 >> 7) * puVar1[0xf];
        uVar19 = uVar19 + 0x10;
      } while (uVar19 < param_3 - uVar21);
    }
  }
  return;
}

