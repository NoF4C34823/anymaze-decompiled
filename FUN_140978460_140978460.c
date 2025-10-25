
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140978460(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
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
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  byte bVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined1 (*pauVar39) [64];
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  longlong lVar54;
  ushort uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar61 [16];
  
  auVar81 = _DAT_14308dc40;
  uVar17 = param_3 * 3;
  lVar54 = (longlong)(param_5 >> 1);
  lVar18 = lVar54 * 3;
  lVar46 = param_1 + lVar54 * -3;
  if (0 < (longlong)uVar17) {
    auVar58 = ZEXT416(*param_4);
    if ((longlong)uVar17 < 0x20) {
      uVar42 = 0;
    }
    else {
      if ((longlong)uVar17 < 0xa6) {
        uVar37 = 0;
        uVar42 = uVar17 & 0xffffffffffffffe0;
      }
      else {
        uVar37 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar37 != 0) && (uVar37 = 0x40 - uVar37 >> 2, (longlong)uVar17 < (longlong)uVar37)) {
            uVar37 = uVar17;
          }
        }
        else {
          uVar37 = 0;
        }
        uVar42 = uVar17 - (uVar17 - uVar37 & 0x1f);
        if (uVar37 != 0) {
          uVar50 = 0;
          auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar78 = vpbroadcastq_avx512f();
          auVar79 = vbroadcastss_avx512f(auVar58);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar78,auVar76);
            bVar20 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar78,auVar77);
            bVar19 = (byte)uVar16;
            auVar76 = vpaddq_avx512f(auVar76,auVar81);
            auVar77 = vpaddq_avx512f(auVar77,auVar81);
            uVar55 = CONCAT11(bVar19,bVar20);
            auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar50 + lVar54 * -3 + param_1));
            auVar60[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
            auVar60[0] = (bVar20 & 1) * auVar56[0];
            auVar60[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
            auVar60[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
            auVar60[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
            auVar60[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
            auVar60[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
            auVar60[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
            auVar60[8] = (bVar19 & 1) * auVar56[8];
            auVar60[9] = (bVar19 >> 1 & 1) * auVar56[9];
            auVar60[10] = (bVar19 >> 2 & 1) * auVar56[10];
            auVar60[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
            auVar60[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
            auVar60[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
            auVar60[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
            auVar60[0xf] = -((char)bVar19 >> 7) * auVar56[0xf];
            auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar50 + param_1 + lVar18));
            auVar57[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
            auVar57[0] = (bVar20 & 1) * auVar56[0];
            auVar57[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
            auVar57[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
            auVar57[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
            auVar57[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
            auVar57[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
            auVar57[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
            auVar57[8] = (bVar19 & 1) * auVar56[8];
            auVar57[9] = (bVar19 >> 1 & 1) * auVar56[9];
            auVar57[10] = (bVar19 >> 2 & 1) * auVar56[10];
            auVar57[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
            auVar57[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
            auVar57[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
            auVar57[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
            auVar57[0xf] = -((char)bVar19 >> 7) * auVar56[0xf];
            auVar74 = vpmovzxbw_avx512vl(auVar60);
            auVar75 = vpmovzxbw_avx512vl(auVar57);
            auVar74 = vpaddw_avx512vl(auVar74,auVar75);
            auVar80 = vpmovzxwd_avx512f(auVar74);
            auVar80 = vcvtdq2ps_avx512f(auVar80);
            auVar80 = vmulps_avx512f(auVar79,auVar80);
            puVar1 = (uint *)(param_2 + uVar50 * 4);
            bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar10 = (bool)(bVar19 >> 1 & 1);
            bVar11 = (bool)(bVar19 >> 2 & 1);
            bVar12 = (bool)(bVar19 >> 3 & 1);
            bVar13 = (bool)(bVar19 >> 4 & 1);
            bVar14 = (bool)(bVar19 >> 5 & 1);
            bVar15 = (bool)(bVar19 >> 6 & 1);
            *puVar1 = (uint)(bVar20 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar20 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * auVar80._4_4_ | (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * auVar80._8_4_ | (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * auVar80._12_4_ | (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * auVar80._16_4_ | (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * auVar80._20_4_ | (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * auVar80._24_4_ | (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * auVar80._28_4_ | (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar19 & 1) * auVar80._32_4_ | (uint)!(bool)(bVar19 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * auVar80._36_4_ | (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * auVar80._40_4_ | (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * auVar80._44_4_ | (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * auVar80._48_4_ | (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * auVar80._52_4_ | (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * auVar80._56_4_ | (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar19 >> 7) * auVar80._60_4_ |
                          (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
            uVar50 = uVar50 + 0x10;
          } while (uVar50 < uVar37);
          if (uVar17 == uVar37) goto LAB_1409786fe;
        }
      }
      if ((longlong)(uVar37 + 0x20) <= (longlong)uVar42) {
        auVar81 = vbroadcastss_avx512f(auVar58);
        do {
          auVar76 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar54 * -3 + param_1 + uVar37));
          auVar77 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(param_1 + lVar18 + uVar37));
          auVar76 = vpaddw_avx512bw(auVar76,auVar77);
          auVar74 = vextractf64x4_avx512f(auVar76,1);
          auVar77 = vpmovzxwd_avx512f(auVar74);
          auVar77 = vcvtdq2ps_avx512f(auVar77);
          auVar77 = vmulps_avx512f(auVar81,auVar77);
          *(undefined1 (*) [64])(param_2 + 0x40 + uVar37 * 4) = auVar77;
          auVar76 = vpmovzxwd_avx512f(auVar76._0_32_);
          auVar76 = vcvtdq2ps_avx512f(auVar76);
          auVar76 = vmulps_avx512f(auVar81,auVar76);
          *(undefined1 (*) [64])(param_2 + uVar37 * 4) = auVar76;
          uVar37 = uVar37 + 0x20;
        } while (uVar37 < uVar42);
      }
    }
    auVar81 = _DAT_14308dc40;
    if (uVar42 + 1 <= uVar17) {
      uVar37 = 0;
      auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar78 = vbroadcastss_avx512f(auVar58);
      auVar79 = vpbroadcastq_avx512f();
      do {
        uVar16 = vpcmpgtq_avx512f(auVar79,auVar76);
        bVar20 = (byte)uVar16;
        uVar16 = vpcmpgtq_avx512f(auVar79,auVar77);
        bVar19 = (byte)uVar16;
        auVar76 = vpaddq_avx512f(auVar76,auVar81);
        auVar77 = vpaddq_avx512f(auVar77,auVar81);
        uVar55 = CONCAT11(bVar19,bVar20);
        auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar37 + lVar54 * -3 + param_1 + uVar42))
        ;
        auVar56[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
        auVar56[0] = (bVar20 & 1) * auVar58[0];
        auVar56[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
        auVar56[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
        auVar56[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
        auVar56[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
        auVar56[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
        auVar56[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
        auVar56[8] = (bVar19 & 1) * auVar58[8];
        auVar56[9] = (bVar19 >> 1 & 1) * auVar58[9];
        auVar56[10] = (bVar19 >> 2 & 1) * auVar58[10];
        auVar56[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
        auVar56[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
        auVar56[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
        auVar56[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
        auVar56[0xf] = -((char)bVar19 >> 7) * auVar58[0xf];
        auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar37 + param_1 + lVar18 + uVar42));
        auVar59[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
        auVar59[0] = (bVar20 & 1) * auVar58[0];
        auVar59[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
        auVar59[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
        auVar59[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
        auVar59[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
        auVar59[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
        auVar59[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
        auVar59[8] = (bVar19 & 1) * auVar58[8];
        auVar59[9] = (bVar19 >> 1 & 1) * auVar58[9];
        auVar59[10] = (bVar19 >> 2 & 1) * auVar58[10];
        auVar59[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
        auVar59[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
        auVar59[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
        auVar59[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
        auVar59[0xf] = -((char)bVar19 >> 7) * auVar58[0xf];
        auVar74 = vpmovzxbw_avx512vl(auVar56);
        auVar75 = vpmovzxbw_avx512vl(auVar59);
        auVar74 = vpaddw_avx512vl(auVar74,auVar75);
        auVar80 = vpmovzxwd_avx512f(auVar74);
        auVar80 = vcvtdq2ps_avx512f(auVar80);
        auVar80 = vmulps_avx512f(auVar78,auVar80);
        puVar1 = (uint *)(param_2 + uVar42 * 4 + uVar37 * 4);
        bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
        bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
        bVar10 = (bool)(bVar19 >> 1 & 1);
        bVar11 = (bool)(bVar19 >> 2 & 1);
        bVar12 = (bool)(bVar19 >> 3 & 1);
        bVar13 = (bool)(bVar19 >> 4 & 1);
        bVar14 = (bool)(bVar19 >> 5 & 1);
        bVar15 = (bool)(bVar19 >> 6 & 1);
        *puVar1 = (uint)(bVar20 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar20 & 1) * *puVar1;
        puVar1[1] = (uint)bVar3 * auVar80._4_4_ | (uint)!bVar3 * puVar1[1];
        puVar1[2] = (uint)bVar4 * auVar80._8_4_ | (uint)!bVar4 * puVar1[2];
        puVar1[3] = (uint)bVar5 * auVar80._12_4_ | (uint)!bVar5 * puVar1[3];
        puVar1[4] = (uint)bVar6 * auVar80._16_4_ | (uint)!bVar6 * puVar1[4];
        puVar1[5] = (uint)bVar7 * auVar80._20_4_ | (uint)!bVar7 * puVar1[5];
        puVar1[6] = (uint)bVar8 * auVar80._24_4_ | (uint)!bVar8 * puVar1[6];
        puVar1[7] = (uint)bVar9 * auVar80._28_4_ | (uint)!bVar9 * puVar1[7];
        puVar1[8] = (uint)(bVar19 & 1) * auVar80._32_4_ | (uint)!(bool)(bVar19 & 1) * puVar1[8];
        puVar1[9] = (uint)bVar10 * auVar80._36_4_ | (uint)!bVar10 * puVar1[9];
        puVar1[10] = (uint)bVar11 * auVar80._40_4_ | (uint)!bVar11 * puVar1[10];
        puVar1[0xb] = (uint)bVar12 * auVar80._44_4_ | (uint)!bVar12 * puVar1[0xb];
        puVar1[0xc] = (uint)bVar13 * auVar80._48_4_ | (uint)!bVar13 * puVar1[0xc];
        puVar1[0xd] = (uint)bVar14 * auVar80._52_4_ | (uint)!bVar14 * puVar1[0xd];
        puVar1[0xe] = (uint)bVar15 * auVar80._56_4_ | (uint)!bVar15 * puVar1[0xe];
        puVar1[0xf] = (uint)(bVar19 >> 7) * auVar80._60_4_ |
                      (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
        uVar37 = uVar37 + 0x10;
      } while (uVar37 < uVar17 - uVar42);
    }
  }
LAB_1409786fe:
  auVar81 = _DAT_14308dc40;
  lVar41 = lVar46;
  if (1 < lVar54) {
    uVar42 = lVar54 - 1U >> 1;
    lVar45 = 0;
    lVar38 = 1;
    lVar53 = 0;
    if (uVar42 != 0) {
      lVar38 = param_1 + lVar18;
      uVar40 = param_2 & 0x3f;
      auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar50 = 0x40 - uVar40 >> 2;
      lVar44 = lVar46;
      uVar37 = 0;
      do {
        uVar51 = uVar37;
        lVar41 = lVar44 + 6;
        if (0 < (longlong)uVar17) {
          auVar58 = ZEXT416(param_4[uVar51 * 2 + 2]);
          auVar56 = ZEXT416(param_4[uVar51 * 2 + 1]);
          if ((longlong)uVar17 < 0x20) {
            uVar37 = 0;
          }
          else {
            if ((longlong)uVar17 < 0x73) {
              uVar52 = 0;
              uVar37 = uVar17 & 0xffffffffffffffe0;
            }
            else {
              if ((param_2 & 3) == 0) {
                uVar52 = uVar40;
                if ((uVar40 != 0) && (uVar52 = uVar50, (longlong)uVar17 < (longlong)uVar50)) {
                  uVar52 = uVar17;
                }
              }
              else {
                uVar52 = 0;
              }
              uVar37 = uVar17 - (uVar17 - uVar52 & 0x1f);
              if (uVar52 != 0) {
                uVar49 = 0;
                auVar80 = vbroadcastss_avx512f(auVar58);
                auVar82 = vpbroadcastq_avx512f();
                auVar83 = vbroadcastss_avx512f(auVar56);
                lVar43 = lVar44;
                lVar47 = lVar38;
                auVar78 = auVar77;
                auVar79 = auVar76;
                do {
                  uVar16 = vpcmpgtq_avx512f(auVar82,auVar79);
                  bVar20 = (byte)uVar16;
                  uVar16 = vpcmpgtq_avx512f(auVar82,auVar78);
                  bVar19 = (byte)uVar16;
                  auVar79 = vpaddq_avx512f(auVar79,auVar81);
                  auVar78 = vpaddq_avx512f(auVar78,auVar81);
                  uVar55 = CONCAT11(bVar19,bVar20);
                  auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar43 + 3));
                  auVar61[1] = ((byte)(uVar55 >> 1) & 1) * auVar60[1];
                  auVar61[0] = (bVar20 & 1) * auVar60[0];
                  auVar61[2] = ((byte)(uVar55 >> 2) & 1) * auVar60[2];
                  auVar61[3] = ((byte)(uVar55 >> 3) & 1) * auVar60[3];
                  auVar61[4] = ((byte)(uVar55 >> 4) & 1) * auVar60[4];
                  auVar61[5] = ((byte)(uVar55 >> 5) & 1) * auVar60[5];
                  auVar61[6] = ((byte)(uVar55 >> 6) & 1) * auVar60[6];
                  auVar61[7] = ((byte)(uVar55 >> 7) & 1) * auVar60[7];
                  auVar61[8] = (bVar19 & 1) * auVar60[8];
                  auVar61[9] = (bVar19 >> 1 & 1) * auVar60[9];
                  auVar61[10] = (bVar19 >> 2 & 1) * auVar60[10];
                  auVar61[0xb] = (bVar19 >> 3 & 1) * auVar60[0xb];
                  auVar61[0xc] = (bVar19 >> 4 & 1) * auVar60[0xc];
                  auVar61[0xd] = (bVar19 >> 5 & 1) * auVar60[0xd];
                  auVar61[0xe] = (bVar19 >> 6 & 1) * auVar60[0xe];
                  cVar21 = (char)bVar19 >> 7;
                  auVar61[0xf] = -cVar21 * auVar60[0xf];
                  auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + -3));
                  auVar62[1] = ((byte)(uVar55 >> 1) & 1) * auVar60[1];
                  auVar62[0] = (bVar20 & 1) * auVar60[0];
                  auVar62[2] = ((byte)(uVar55 >> 2) & 1) * auVar60[2];
                  auVar62[3] = ((byte)(uVar55 >> 3) & 1) * auVar60[3];
                  auVar62[4] = ((byte)(uVar55 >> 4) & 1) * auVar60[4];
                  auVar62[5] = ((byte)(uVar55 >> 5) & 1) * auVar60[5];
                  auVar62[6] = ((byte)(uVar55 >> 6) & 1) * auVar60[6];
                  auVar62[7] = ((byte)(uVar55 >> 7) & 1) * auVar60[7];
                  auVar62[8] = (bVar19 & 1) * auVar60[8];
                  auVar62[9] = (bVar19 >> 1 & 1) * auVar60[9];
                  auVar62[10] = (bVar19 >> 2 & 1) * auVar60[10];
                  auVar62[0xb] = (bVar19 >> 3 & 1) * auVar60[0xb];
                  auVar62[0xc] = (bVar19 >> 4 & 1) * auVar60[0xc];
                  auVar62[0xd] = (bVar19 >> 5 & 1) * auVar60[0xd];
                  auVar62[0xe] = (bVar19 >> 6 & 1) * auVar60[0xe];
                  auVar62[0xf] = -cVar21 * auVar60[0xf];
                  piVar2 = (int *)(param_2 + uVar49 * 4);
                  auVar85._4_4_ = (uint)((byte)(uVar55 >> 1) & 1) * piVar2[1];
                  auVar85._0_4_ = (uint)(bVar20 & 1) * *piVar2;
                  auVar85._8_4_ = (uint)((byte)(uVar55 >> 2) & 1) * piVar2[2];
                  auVar85._12_4_ = (uint)((byte)(uVar55 >> 3) & 1) * piVar2[3];
                  auVar85._16_4_ = (uint)((byte)(uVar55 >> 4) & 1) * piVar2[4];
                  auVar85._20_4_ = (uint)((byte)(uVar55 >> 5) & 1) * piVar2[5];
                  auVar85._24_4_ = (uint)((byte)(uVar55 >> 6) & 1) * piVar2[6];
                  auVar85._28_4_ = (uint)((byte)(uVar55 >> 7) & 1) * piVar2[7];
                  auVar85._32_4_ = (uint)(bVar19 & 1) * piVar2[8];
                  auVar85._36_4_ = (uint)(bVar19 >> 1 & 1) * piVar2[9];
                  auVar85._40_4_ = (uint)(bVar19 >> 2 & 1) * piVar2[10];
                  auVar85._44_4_ = (uint)(bVar19 >> 3 & 1) * piVar2[0xb];
                  auVar85._48_4_ = (uint)(bVar19 >> 4 & 1) * piVar2[0xc];
                  auVar85._52_4_ = (uint)(bVar19 >> 5 & 1) * piVar2[0xd];
                  auVar85._56_4_ = (uint)(bVar19 >> 6 & 1) * piVar2[0xe];
                  auVar85._60_4_ = (uint)(bVar19 >> 7) * piVar2[0xf];
                  auVar74 = vpmovzxbw_avx512vl(auVar61);
                  auVar75 = vpmovzxbw_avx512vl(auVar62);
                  auVar74 = vpaddw_avx512vl(auVar74,auVar75);
                  auVar84 = vpmovzxwd_avx512f(auVar74);
                  auVar84 = vcvtdq2ps_avx512f(auVar84);
                  auVar85 = vfmadd231ps_avx512f(auVar85,auVar84,auVar83);
                  puVar1 = (uint *)(param_2 + uVar49 * 4);
                  bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
                  bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
                  bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
                  bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
                  bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
                  bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
                  bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
                  bVar10 = (bool)(bVar19 >> 1 & 1);
                  bVar11 = (bool)(bVar19 >> 2 & 1);
                  bVar12 = (bool)(bVar19 >> 3 & 1);
                  bVar13 = (bool)(bVar19 >> 4 & 1);
                  bVar14 = (bool)(bVar19 >> 5 & 1);
                  bVar15 = (bool)(bVar19 >> 6 & 1);
                  *puVar1 = (uint)(bVar20 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar20 & 1) * *puVar1
                  ;
                  puVar1[1] = (uint)bVar3 * auVar85._4_4_ | (uint)!bVar3 * puVar1[1];
                  puVar1[2] = (uint)bVar4 * auVar85._8_4_ | (uint)!bVar4 * puVar1[2];
                  puVar1[3] = (uint)bVar5 * auVar85._12_4_ | (uint)!bVar5 * puVar1[3];
                  puVar1[4] = (uint)bVar6 * auVar85._16_4_ | (uint)!bVar6 * puVar1[4];
                  puVar1[5] = (uint)bVar7 * auVar85._20_4_ | (uint)!bVar7 * puVar1[5];
                  puVar1[6] = (uint)bVar8 * auVar85._24_4_ | (uint)!bVar8 * puVar1[6];
                  puVar1[7] = (uint)bVar9 * auVar85._28_4_ | (uint)!bVar9 * puVar1[7];
                  puVar1[8] = (uint)(bVar19 & 1) * auVar85._32_4_ |
                              (uint)!(bool)(bVar19 & 1) * puVar1[8];
                  puVar1[9] = (uint)bVar10 * auVar85._36_4_ | (uint)!bVar10 * puVar1[9];
                  puVar1[10] = (uint)bVar11 * auVar85._40_4_ | (uint)!bVar11 * puVar1[10];
                  puVar1[0xb] = (uint)bVar12 * auVar85._44_4_ | (uint)!bVar12 * puVar1[0xb];
                  puVar1[0xc] = (uint)bVar13 * auVar85._48_4_ | (uint)!bVar13 * puVar1[0xc];
                  puVar1[0xd] = (uint)bVar14 * auVar85._52_4_ | (uint)!bVar14 * puVar1[0xd];
                  puVar1[0xe] = (uint)bVar15 * auVar85._56_4_ | (uint)!bVar15 * puVar1[0xe];
                  puVar1[0xf] = (uint)(bVar19 >> 7) * auVar85._60_4_ |
                                (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
                  auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar43 + 6));
                  auVar63[1] = ((byte)(uVar55 >> 1) & 1) * auVar60[1];
                  auVar63[0] = (bVar20 & 1) * auVar60[0];
                  auVar63[2] = ((byte)(uVar55 >> 2) & 1) * auVar60[2];
                  auVar63[3] = ((byte)(uVar55 >> 3) & 1) * auVar60[3];
                  auVar63[4] = ((byte)(uVar55 >> 4) & 1) * auVar60[4];
                  auVar63[5] = ((byte)(uVar55 >> 5) & 1) * auVar60[5];
                  auVar63[6] = ((byte)(uVar55 >> 6) & 1) * auVar60[6];
                  auVar63[7] = ((byte)(uVar55 >> 7) & 1) * auVar60[7];
                  auVar63[8] = (bVar19 & 1) * auVar60[8];
                  auVar63[9] = (bVar19 >> 1 & 1) * auVar60[9];
                  auVar63[10] = (bVar19 >> 2 & 1) * auVar60[10];
                  auVar63[0xb] = (bVar19 >> 3 & 1) * auVar60[0xb];
                  auVar63[0xc] = (bVar19 >> 4 & 1) * auVar60[0xc];
                  auVar63[0xd] = (bVar19 >> 5 & 1) * auVar60[0xd];
                  auVar63[0xe] = (bVar19 >> 6 & 1) * auVar60[0xe];
                  auVar63[0xf] = -cVar21 * auVar60[0xf];
                  lVar43 = lVar43 + 0x10;
                  auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + -6));
                  auVar64[1] = ((byte)(uVar55 >> 1) & 1) * auVar60[1];
                  auVar64[0] = (bVar20 & 1) * auVar60[0];
                  auVar64[2] = ((byte)(uVar55 >> 2) & 1) * auVar60[2];
                  auVar64[3] = ((byte)(uVar55 >> 3) & 1) * auVar60[3];
                  auVar64[4] = ((byte)(uVar55 >> 4) & 1) * auVar60[4];
                  auVar64[5] = ((byte)(uVar55 >> 5) & 1) * auVar60[5];
                  auVar64[6] = ((byte)(uVar55 >> 6) & 1) * auVar60[6];
                  auVar64[7] = ((byte)(uVar55 >> 7) & 1) * auVar60[7];
                  auVar64[8] = (bVar19 & 1) * auVar60[8];
                  auVar64[9] = (bVar19 >> 1 & 1) * auVar60[9];
                  auVar64[10] = (bVar19 >> 2 & 1) * auVar60[10];
                  auVar64[0xb] = (bVar19 >> 3 & 1) * auVar60[0xb];
                  auVar64[0xc] = (bVar19 >> 4 & 1) * auVar60[0xc];
                  auVar64[0xd] = (bVar19 >> 5 & 1) * auVar60[0xd];
                  auVar64[0xe] = (bVar19 >> 6 & 1) * auVar60[0xe];
                  auVar64[0xf] = -cVar21 * auVar60[0xf];
                  auVar74 = vpmovzxbw_avx512vl(auVar63);
                  lVar47 = lVar47 + 0x10;
                  auVar75 = vpmovzxbw_avx512vl(auVar64);
                  auVar74 = vpaddw_avx512vl(auVar74,auVar75);
                  auVar84 = vpmovzxwd_avx512f(auVar74);
                  auVar84 = vcvtdq2ps_avx512f(auVar84);
                  auVar86._4_4_ = (uint)((byte)(uVar55 >> 1) & 1) * auVar85._4_4_;
                  auVar86._0_4_ = (uint)(bVar20 & 1) * auVar85._0_4_;
                  auVar86._8_4_ = (uint)((byte)(uVar55 >> 2) & 1) * auVar85._8_4_;
                  auVar86._12_4_ = (uint)((byte)(uVar55 >> 3) & 1) * auVar85._12_4_;
                  auVar86._16_4_ = (uint)((byte)(uVar55 >> 4) & 1) * auVar85._16_4_;
                  auVar86._20_4_ = (uint)((byte)(uVar55 >> 5) & 1) * auVar85._20_4_;
                  auVar86._24_4_ = (uint)((byte)(uVar55 >> 6) & 1) * auVar85._24_4_;
                  auVar86._28_4_ = (uint)((byte)(uVar55 >> 7) & 1) * auVar85._28_4_;
                  auVar86._32_4_ = (uint)(bVar19 & 1) * auVar85._32_4_;
                  auVar86._36_4_ = (uint)(bVar19 >> 1 & 1) * auVar85._36_4_;
                  auVar86._40_4_ = (uint)(bVar19 >> 2 & 1) * auVar85._40_4_;
                  auVar86._44_4_ = (uint)(bVar19 >> 3 & 1) * auVar85._44_4_;
                  auVar86._48_4_ = (uint)(bVar19 >> 4 & 1) * auVar85._48_4_;
                  auVar86._52_4_ = (uint)(bVar19 >> 5 & 1) * auVar85._52_4_;
                  auVar86._56_4_ = (uint)(bVar19 >> 6 & 1) * auVar85._56_4_;
                  auVar86._60_4_ = (uint)(bVar19 >> 7) * auVar85._60_4_;
                  auVar84 = vfmadd231ps_avx512f(auVar86,auVar84,auVar80);
                  pauVar39 = (undefined1 (*) [64])(param_2 + uVar49 * 4);
                  auVar85 = *pauVar39;
                  bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
                  bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
                  bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
                  bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
                  bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
                  bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
                  bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
                  bVar10 = (bool)(bVar19 >> 1 & 1);
                  bVar11 = (bool)(bVar19 >> 2 & 1);
                  bVar12 = (bool)(bVar19 >> 3 & 1);
                  bVar13 = (bool)(bVar19 >> 4 & 1);
                  bVar14 = (bool)(bVar19 >> 5 & 1);
                  bVar15 = (bool)(bVar19 >> 6 & 1);
                  *(uint *)*pauVar39 =
                       (uint)(bVar20 & 1) * auVar84._0_4_ |
                       (uint)!(bool)(bVar20 & 1) * auVar85._0_4_;
                  *(uint *)(*pauVar39 + 4) =
                       (uint)bVar3 * auVar84._4_4_ | (uint)!bVar3 * auVar85._4_4_;
                  *(uint *)(*pauVar39 + 8) =
                       (uint)bVar4 * auVar84._8_4_ | (uint)!bVar4 * auVar85._8_4_;
                  *(uint *)(*pauVar39 + 0xc) =
                       (uint)bVar5 * auVar84._12_4_ | (uint)!bVar5 * auVar85._12_4_;
                  *(uint *)(*pauVar39 + 0x10) =
                       (uint)bVar6 * auVar84._16_4_ | (uint)!bVar6 * auVar85._16_4_;
                  *(uint *)(*pauVar39 + 0x14) =
                       (uint)bVar7 * auVar84._20_4_ | (uint)!bVar7 * auVar85._20_4_;
                  *(uint *)(*pauVar39 + 0x18) =
                       (uint)bVar8 * auVar84._24_4_ | (uint)!bVar8 * auVar85._24_4_;
                  *(uint *)(*pauVar39 + 0x1c) =
                       (uint)bVar9 * auVar84._28_4_ | (uint)!bVar9 * auVar85._28_4_;
                  *(uint *)(*pauVar39 + 0x20) =
                       (uint)(bVar19 & 1) * auVar84._32_4_ |
                       (uint)!(bool)(bVar19 & 1) * auVar85._32_4_;
                  *(uint *)(*pauVar39 + 0x24) =
                       (uint)bVar10 * auVar84._36_4_ | (uint)!bVar10 * auVar85._36_4_;
                  *(uint *)(*pauVar39 + 0x28) =
                       (uint)bVar11 * auVar84._40_4_ | (uint)!bVar11 * auVar85._40_4_;
                  *(uint *)(*pauVar39 + 0x2c) =
                       (uint)bVar12 * auVar84._44_4_ | (uint)!bVar12 * auVar85._44_4_;
                  *(uint *)(*pauVar39 + 0x30) =
                       (uint)bVar13 * auVar84._48_4_ | (uint)!bVar13 * auVar85._48_4_;
                  *(uint *)(*pauVar39 + 0x34) =
                       (uint)bVar14 * auVar84._52_4_ | (uint)!bVar14 * auVar85._52_4_;
                  *(uint *)(*pauVar39 + 0x38) =
                       (uint)bVar15 * auVar84._56_4_ | (uint)!bVar15 * auVar85._56_4_;
                  *(uint *)(*pauVar39 + 0x3c) =
                       (uint)(bVar19 >> 7) * auVar84._60_4_ |
                       (uint)!(bool)(bVar19 >> 7) * auVar85._60_4_;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar52);
                if (uVar17 == uVar52) goto LAB_140978b3e;
              }
            }
            if ((longlong)(uVar52 + 0x20) <= (longlong)uVar37) {
              lVar43 = uVar52 + lVar45;
              lVar47 = uVar52 + lVar53;
              lVar48 = lVar54 * -3 + param_1;
              auVar78 = vbroadcastss_avx512f(auVar58);
              auVar79 = vbroadcastss_avx512f(auVar56);
              do {
                auVar80 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar47 + 3 + lVar48));
                auVar82 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar43 + -3 + param_1 + lVar18))
                ;
                auVar83 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar43 + -6 + param_1 + lVar18))
                ;
                auVar85 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar47 + 6 + lVar48));
                auVar80 = vpaddw_avx512bw(auVar80,auVar82);
                auVar82 = vpaddw_avx512bw(auVar85,auVar83);
                auVar74 = vextractf64x4_avx512f(auVar80,1);
                auVar75 = vextractf64x4_avx512f(auVar82,1);
                auVar83 = vpmovzxwd_avx512f(auVar74);
                auVar85 = vpmovzxwd_avx512f(auVar75);
                auVar83 = vcvtdq2ps_avx512f(auVar83);
                auVar85 = vcvtdq2ps_avx512f(auVar85);
                auVar83 = vfmadd213ps_avx512f(auVar83,auVar79,
                                              *(undefined1 (*) [64])(param_2 + 0x40 + uVar52 * 4));
                auVar83 = vfmadd231ps_avx512f(auVar83,auVar85,auVar78);
                lVar43 = lVar43 + 0x20;
                *(undefined1 (*) [64])(param_2 + 0x40 + uVar52 * 4) = auVar83;
                lVar47 = lVar47 + 0x20;
                auVar80 = vpmovzxwd_avx512f(auVar80._0_32_);
                auVar80 = vcvtdq2ps_avx512f(auVar80);
                auVar80 = vfmadd213ps_avx512f(auVar80,auVar79,
                                              *(undefined1 (*) [64])(param_2 + uVar52 * 4));
                auVar82 = vpmovzxwd_avx512f(auVar82._0_32_);
                auVar82 = vcvtdq2ps_avx512f(auVar82);
                auVar80 = vfmadd231ps_avx512f(auVar80,auVar82,auVar78);
                *(undefined1 (*) [64])(param_2 + uVar52 * 4) = auVar80;
                uVar52 = uVar52 + 0x20;
              } while (uVar52 < uVar37);
            }
          }
          if (uVar37 + 1 <= uVar17) {
            uVar52 = 0;
            lVar43 = uVar37 + lVar44;
            lVar47 = uVar37 + lVar38;
            auVar80 = vbroadcastss_avx512f(auVar58);
            lVar48 = param_2 + uVar37 * 4;
            auVar82 = vbroadcastss_avx512f(auVar56);
            auVar83 = vpbroadcastq_avx512f();
            auVar78 = auVar77;
            auVar79 = auVar76;
            do {
              uVar16 = vpcmpgtq_avx512f(auVar83,auVar79);
              bVar20 = (byte)uVar16;
              uVar16 = vpcmpgtq_avx512f(auVar83,auVar78);
              bVar19 = (byte)uVar16;
              auVar79 = vpaddq_avx512f(auVar79,auVar81);
              auVar78 = vpaddq_avx512f(auVar78,auVar81);
              uVar55 = CONCAT11(bVar19,bVar20);
              auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar43 + 3));
              auVar65[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
              auVar65[0] = (bVar20 & 1) * auVar58[0];
              auVar65[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
              auVar65[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
              auVar65[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
              auVar65[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
              auVar65[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
              auVar65[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
              auVar65[8] = (bVar19 & 1) * auVar58[8];
              auVar65[9] = (bVar19 >> 1 & 1) * auVar58[9];
              auVar65[10] = (bVar19 >> 2 & 1) * auVar58[10];
              auVar65[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
              auVar65[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
              auVar65[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
              auVar65[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
              cVar21 = (char)bVar19 >> 7;
              auVar65[0xf] = -cVar21 * auVar58[0xf];
              auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + -3));
              auVar58[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
              auVar58[0] = (bVar20 & 1) * auVar56[0];
              auVar58[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
              auVar58[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
              auVar58[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
              auVar58[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
              auVar58[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
              auVar58[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
              auVar58[8] = (bVar19 & 1) * auVar56[8];
              auVar58[9] = (bVar19 >> 1 & 1) * auVar56[9];
              auVar58[10] = (bVar19 >> 2 & 1) * auVar56[10];
              auVar58[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
              auVar58[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
              auVar58[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
              auVar58[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
              auVar58[0xf] = -cVar21 * auVar56[0xf];
              piVar2 = (int *)(lVar48 + uVar52 * 4);
              auVar84._4_4_ = (uint)((byte)(uVar55 >> 1) & 1) * piVar2[1];
              auVar84._0_4_ = (uint)(bVar20 & 1) * *piVar2;
              auVar84._8_4_ = (uint)((byte)(uVar55 >> 2) & 1) * piVar2[2];
              auVar84._12_4_ = (uint)((byte)(uVar55 >> 3) & 1) * piVar2[3];
              auVar84._16_4_ = (uint)((byte)(uVar55 >> 4) & 1) * piVar2[4];
              auVar84._20_4_ = (uint)((byte)(uVar55 >> 5) & 1) * piVar2[5];
              auVar84._24_4_ = (uint)((byte)(uVar55 >> 6) & 1) * piVar2[6];
              auVar84._28_4_ = (uint)((byte)(uVar55 >> 7) & 1) * piVar2[7];
              auVar84._32_4_ = (uint)(bVar19 & 1) * piVar2[8];
              auVar84._36_4_ = (uint)(bVar19 >> 1 & 1) * piVar2[9];
              auVar84._40_4_ = (uint)(bVar19 >> 2 & 1) * piVar2[10];
              auVar84._44_4_ = (uint)(bVar19 >> 3 & 1) * piVar2[0xb];
              auVar84._48_4_ = (uint)(bVar19 >> 4 & 1) * piVar2[0xc];
              auVar84._52_4_ = (uint)(bVar19 >> 5 & 1) * piVar2[0xd];
              auVar84._56_4_ = (uint)(bVar19 >> 6 & 1) * piVar2[0xe];
              auVar84._60_4_ = (uint)(bVar19 >> 7) * piVar2[0xf];
              auVar74 = vpmovzxbw_avx512vl(auVar65);
              auVar75 = vpmovzxbw_avx512vl(auVar58);
              auVar74 = vpaddw_avx512vl(auVar74,auVar75);
              auVar85 = vpmovzxwd_avx512f(auVar74);
              auVar85 = vcvtdq2ps_avx512f(auVar85);
              auVar85 = vfmadd231ps_avx512f(auVar84,auVar85,auVar82);
              puVar1 = (uint *)(lVar48 + uVar52 * 4);
              bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
              bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
              bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
              bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
              bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
              bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
              bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
              bVar10 = (bool)(bVar19 >> 1 & 1);
              bVar11 = (bool)(bVar19 >> 2 & 1);
              bVar12 = (bool)(bVar19 >> 3 & 1);
              bVar13 = (bool)(bVar19 >> 4 & 1);
              bVar14 = (bool)(bVar19 >> 5 & 1);
              bVar15 = (bool)(bVar19 >> 6 & 1);
              *puVar1 = (uint)(bVar20 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar20 & 1) * *puVar1;
              puVar1[1] = (uint)bVar3 * auVar85._4_4_ | (uint)!bVar3 * puVar1[1];
              puVar1[2] = (uint)bVar4 * auVar85._8_4_ | (uint)!bVar4 * puVar1[2];
              puVar1[3] = (uint)bVar5 * auVar85._12_4_ | (uint)!bVar5 * puVar1[3];
              puVar1[4] = (uint)bVar6 * auVar85._16_4_ | (uint)!bVar6 * puVar1[4];
              puVar1[5] = (uint)bVar7 * auVar85._20_4_ | (uint)!bVar7 * puVar1[5];
              puVar1[6] = (uint)bVar8 * auVar85._24_4_ | (uint)!bVar8 * puVar1[6];
              puVar1[7] = (uint)bVar9 * auVar85._28_4_ | (uint)!bVar9 * puVar1[7];
              puVar1[8] = (uint)(bVar19 & 1) * auVar85._32_4_ |
                          (uint)!(bool)(bVar19 & 1) * puVar1[8];
              puVar1[9] = (uint)bVar10 * auVar85._36_4_ | (uint)!bVar10 * puVar1[9];
              puVar1[10] = (uint)bVar11 * auVar85._40_4_ | (uint)!bVar11 * puVar1[10];
              puVar1[0xb] = (uint)bVar12 * auVar85._44_4_ | (uint)!bVar12 * puVar1[0xb];
              puVar1[0xc] = (uint)bVar13 * auVar85._48_4_ | (uint)!bVar13 * puVar1[0xc];
              puVar1[0xd] = (uint)bVar14 * auVar85._52_4_ | (uint)!bVar14 * puVar1[0xd];
              puVar1[0xe] = (uint)bVar15 * auVar85._56_4_ | (uint)!bVar15 * puVar1[0xe];
              puVar1[0xf] = (uint)(bVar19 >> 7) * auVar85._60_4_ |
                            (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
              auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar43 + 6));
              auVar66[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
              auVar66[0] = (bVar20 & 1) * auVar58[0];
              auVar66[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
              auVar66[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
              auVar66[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
              auVar66[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
              auVar66[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
              auVar66[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
              auVar66[8] = (bVar19 & 1) * auVar58[8];
              auVar66[9] = (bVar19 >> 1 & 1) * auVar58[9];
              auVar66[10] = (bVar19 >> 2 & 1) * auVar58[10];
              auVar66[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
              auVar66[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
              auVar66[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
              auVar66[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
              auVar66[0xf] = -cVar21 * auVar58[0xf];
              lVar43 = lVar43 + 0x10;
              auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + -6));
              auVar67[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
              auVar67[0] = (bVar20 & 1) * auVar58[0];
              auVar67[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
              auVar67[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
              auVar67[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
              auVar67[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
              auVar67[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
              auVar67[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
              auVar67[8] = (bVar19 & 1) * auVar58[8];
              auVar67[9] = (bVar19 >> 1 & 1) * auVar58[9];
              auVar67[10] = (bVar19 >> 2 & 1) * auVar58[10];
              auVar67[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
              auVar67[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
              auVar67[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
              auVar67[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
              auVar67[0xf] = -cVar21 * auVar58[0xf];
              auVar74 = vpmovzxbw_avx512vl(auVar66);
              lVar47 = lVar47 + 0x10;
              auVar75 = vpmovzxbw_avx512vl(auVar67);
              auVar74 = vpaddw_avx512vl(auVar74,auVar75);
              auVar84 = vpmovzxwd_avx512f(auVar74);
              auVar84 = vcvtdq2ps_avx512f(auVar84);
              auVar87._4_4_ = (uint)((byte)(uVar55 >> 1) & 1) * auVar85._4_4_;
              auVar87._0_4_ = (uint)(bVar20 & 1) * auVar85._0_4_;
              auVar87._8_4_ = (uint)((byte)(uVar55 >> 2) & 1) * auVar85._8_4_;
              auVar87._12_4_ = (uint)((byte)(uVar55 >> 3) & 1) * auVar85._12_4_;
              auVar87._16_4_ = (uint)((byte)(uVar55 >> 4) & 1) * auVar85._16_4_;
              auVar87._20_4_ = (uint)((byte)(uVar55 >> 5) & 1) * auVar85._20_4_;
              auVar87._24_4_ = (uint)((byte)(uVar55 >> 6) & 1) * auVar85._24_4_;
              auVar87._28_4_ = (uint)((byte)(uVar55 >> 7) & 1) * auVar85._28_4_;
              auVar87._32_4_ = (uint)(bVar19 & 1) * auVar85._32_4_;
              auVar87._36_4_ = (uint)(bVar19 >> 1 & 1) * auVar85._36_4_;
              auVar87._40_4_ = (uint)(bVar19 >> 2 & 1) * auVar85._40_4_;
              auVar87._44_4_ = (uint)(bVar19 >> 3 & 1) * auVar85._44_4_;
              auVar87._48_4_ = (uint)(bVar19 >> 4 & 1) * auVar85._48_4_;
              auVar87._52_4_ = (uint)(bVar19 >> 5 & 1) * auVar85._52_4_;
              auVar87._56_4_ = (uint)(bVar19 >> 6 & 1) * auVar85._56_4_;
              auVar87._60_4_ = (uint)(bVar19 >> 7) * auVar85._60_4_;
              auVar84 = vfmadd231ps_avx512f(auVar87,auVar84,auVar80);
              pauVar39 = (undefined1 (*) [64])(lVar48 + uVar52 * 4);
              auVar85 = *pauVar39;
              bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
              bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
              bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
              bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
              bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
              bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
              bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
              bVar10 = (bool)(bVar19 >> 1 & 1);
              bVar11 = (bool)(bVar19 >> 2 & 1);
              bVar12 = (bool)(bVar19 >> 3 & 1);
              bVar13 = (bool)(bVar19 >> 4 & 1);
              bVar14 = (bool)(bVar19 >> 5 & 1);
              bVar15 = (bool)(bVar19 >> 6 & 1);
              *(uint *)*pauVar39 =
                   (uint)(bVar20 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar85._0_4_;
              *(uint *)(*pauVar39 + 4) = (uint)bVar3 * auVar84._4_4_ | (uint)!bVar3 * auVar85._4_4_;
              *(uint *)(*pauVar39 + 8) = (uint)bVar4 * auVar84._8_4_ | (uint)!bVar4 * auVar85._8_4_;
              *(uint *)(*pauVar39 + 0xc) =
                   (uint)bVar5 * auVar84._12_4_ | (uint)!bVar5 * auVar85._12_4_;
              *(uint *)(*pauVar39 + 0x10) =
                   (uint)bVar6 * auVar84._16_4_ | (uint)!bVar6 * auVar85._16_4_;
              *(uint *)(*pauVar39 + 0x14) =
                   (uint)bVar7 * auVar84._20_4_ | (uint)!bVar7 * auVar85._20_4_;
              *(uint *)(*pauVar39 + 0x18) =
                   (uint)bVar8 * auVar84._24_4_ | (uint)!bVar8 * auVar85._24_4_;
              *(uint *)(*pauVar39 + 0x1c) =
                   (uint)bVar9 * auVar84._28_4_ | (uint)!bVar9 * auVar85._28_4_;
              *(uint *)(*pauVar39 + 0x20) =
                   (uint)(bVar19 & 1) * auVar84._32_4_ | (uint)!(bool)(bVar19 & 1) * auVar85._32_4_;
              *(uint *)(*pauVar39 + 0x24) =
                   (uint)bVar10 * auVar84._36_4_ | (uint)!bVar10 * auVar85._36_4_;
              *(uint *)(*pauVar39 + 0x28) =
                   (uint)bVar11 * auVar84._40_4_ | (uint)!bVar11 * auVar85._40_4_;
              *(uint *)(*pauVar39 + 0x2c) =
                   (uint)bVar12 * auVar84._44_4_ | (uint)!bVar12 * auVar85._44_4_;
              *(uint *)(*pauVar39 + 0x30) =
                   (uint)bVar13 * auVar84._48_4_ | (uint)!bVar13 * auVar85._48_4_;
              *(uint *)(*pauVar39 + 0x34) =
                   (uint)bVar14 * auVar84._52_4_ | (uint)!bVar14 * auVar85._52_4_;
              *(uint *)(*pauVar39 + 0x38) =
                   (uint)bVar15 * auVar84._56_4_ | (uint)!bVar15 * auVar85._56_4_;
              *(uint *)(*pauVar39 + 0x3c) =
                   (uint)(bVar19 >> 7) * auVar84._60_4_ |
                   (uint)!(bool)(bVar19 >> 7) * auVar85._60_4_;
              uVar52 = uVar52 + 0x10;
            } while (uVar52 < uVar17 - uVar37);
          }
        }
LAB_140978b3e:
        uVar37 = uVar51 + 1;
        lVar38 = lVar38 + -6;
        lVar45 = lVar45 + -6;
        lVar44 = lVar44 + 6;
        lVar53 = lVar53 + 6;
      } while (uVar37 < uVar42);
      lVar38 = uVar51 + 2 + uVar37;
    }
    auVar81 = _DAT_14308dc40;
    if (lVar54 != lVar38) {
      lVar41 = lVar46 + lVar38 * 3;
      if (0 < (longlong)uVar17) {
        auVar58 = ZEXT416(param_4[lVar38]);
        if ((longlong)uVar17 < 0x20) {
          uVar42 = 0;
        }
        else {
          if ((longlong)uVar17 < 0x5a) {
            uVar37 = 0;
            uVar42 = uVar17 & 0xffffffffffffffe0;
          }
          else {
            uVar37 = param_2 & 0x3f;
            if ((param_2 & 3) == 0) {
              if ((uVar37 != 0) &&
                 (uVar37 = 0x40 - uVar37 >> 2, (longlong)uVar17 < (longlong)uVar37)) {
                uVar37 = uVar17;
              }
            }
            else {
              uVar37 = 0;
            }
            uVar42 = uVar17 - (uVar17 - uVar37 & 0x1f);
            if (uVar37 != 0) {
              auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
              auVar78 = vpbroadcastq_avx512f();
              auVar79 = vbroadcastss_avx512f(auVar58);
              uVar50 = 0;
              do {
                uVar16 = vpcmpgtq_avx512f(auVar78,auVar76);
                bVar20 = (byte)uVar16;
                uVar16 = vpcmpgtq_avx512f(auVar78,auVar77);
                bVar19 = (byte)uVar16;
                auVar76 = vpaddq_avx512f(auVar76,auVar81);
                auVar77 = vpaddq_avx512f(auVar77,auVar81);
                uVar55 = CONCAT11(bVar19,bVar20);
                auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar50 + lVar41));
                auVar68[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
                auVar68[0] = (bVar20 & 1) * auVar56[0];
                auVar68[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
                auVar68[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
                auVar68[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
                auVar68[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
                auVar68[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
                auVar68[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
                auVar68[8] = (bVar19 & 1) * auVar56[8];
                auVar68[9] = (bVar19 >> 1 & 1) * auVar56[9];
                auVar68[10] = (bVar19 >> 2 & 1) * auVar56[10];
                auVar68[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
                auVar68[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
                auVar68[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
                auVar68[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
                auVar68[0xf] = -((char)bVar19 >> 7) * auVar56[0xf];
                auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                             (uVar50 + param_1 + lVar18 + lVar38 * -3));
                auVar69[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
                auVar69[0] = (bVar20 & 1) * auVar56[0];
                auVar69[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
                auVar69[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
                auVar69[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
                auVar69[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
                auVar69[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
                auVar69[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
                auVar69[8] = (bVar19 & 1) * auVar56[8];
                auVar69[9] = (bVar19 >> 1 & 1) * auVar56[9];
                auVar69[10] = (bVar19 >> 2 & 1) * auVar56[10];
                auVar69[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
                auVar69[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
                auVar69[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
                auVar69[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
                auVar69[0xf] = -((char)bVar19 >> 7) * auVar56[0xf];
                auVar74 = vpmovzxbw_avx512vl(auVar68);
                auVar75 = vpmovzxbw_avx512vl(auVar69);
                auVar74 = vpaddw_avx512vl(auVar74,auVar75);
                auVar80 = vpmovzxwd_avx512f(auVar74);
                auVar80 = vcvtdq2ps_avx512f(auVar80);
                auVar80 = vfmadd213ps_avx512f(auVar80,auVar79,
                                              *(undefined1 (*) [64])(param_2 + uVar50 * 4));
                puVar1 = (uint *)(param_2 + uVar50 * 4);
                bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
                bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
                bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
                bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
                bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
                bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
                bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
                bVar10 = (bool)(bVar19 >> 1 & 1);
                bVar11 = (bool)(bVar19 >> 2 & 1);
                bVar12 = (bool)(bVar19 >> 3 & 1);
                bVar13 = (bool)(bVar19 >> 4 & 1);
                bVar14 = (bool)(bVar19 >> 5 & 1);
                bVar15 = (bool)(bVar19 >> 6 & 1);
                *puVar1 = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * auVar80._0_4_ |
                          (uint)!(bool)(bVar20 & 1) * *puVar1;
                puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar55 >> 1) & 1) * auVar80._4_4_ |
                            (uint)!bVar3 * puVar1[1];
                puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar55 >> 2) & 1) * auVar80._8_4_ |
                            (uint)!bVar4 * puVar1[2];
                puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar55 >> 3) & 1) * auVar80._12_4_ |
                            (uint)!bVar5 * puVar1[3];
                puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar55 >> 4) & 1) * auVar80._16_4_ |
                            (uint)!bVar6 * puVar1[4];
                puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar55 >> 5) & 1) * auVar80._20_4_ |
                            (uint)!bVar7 * puVar1[5];
                puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar55 >> 6) & 1) * auVar80._24_4_ |
                            (uint)!bVar8 * puVar1[6];
                puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar55 >> 7) & 1) * auVar80._28_4_ |
                            (uint)!bVar9 * puVar1[7];
                puVar1[8] = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar80._32_4_ |
                            (uint)!(bool)(bVar19 & 1) * puVar1[8];
                puVar1[9] = (uint)bVar10 * (uint)(bVar19 >> 1 & 1) * auVar80._36_4_ |
                            (uint)!bVar10 * puVar1[9];
                puVar1[10] = (uint)bVar11 * (uint)(bVar19 >> 2 & 1) * auVar80._40_4_ |
                             (uint)!bVar11 * puVar1[10];
                puVar1[0xb] = (uint)bVar12 * (uint)(bVar19 >> 3 & 1) * auVar80._44_4_ |
                              (uint)!bVar12 * puVar1[0xb];
                puVar1[0xc] = (uint)bVar13 * (uint)(bVar19 >> 4 & 1) * auVar80._48_4_ |
                              (uint)!bVar13 * puVar1[0xc];
                puVar1[0xd] = (uint)bVar14 * (uint)(bVar19 >> 5 & 1) * auVar80._52_4_ |
                              (uint)!bVar14 * puVar1[0xd];
                puVar1[0xe] = (uint)bVar15 * (uint)(bVar19 >> 6 & 1) * auVar80._56_4_ |
                              (uint)!bVar15 * puVar1[0xe];
                puVar1[0xf] = (uint)(bVar19 >> 7) * (uint)(bVar19 >> 7) * auVar80._60_4_ |
                              (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
                uVar50 = uVar50 + 0x10;
              } while (uVar50 < uVar37);
              if (uVar17 == uVar37) goto LAB_140978e04;
            }
          }
          if ((longlong)(uVar37 + 0x20) <= (longlong)uVar42) {
            auVar81 = vbroadcastss_avx512f(auVar58);
            do {
              auVar76 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar41 + uVar37));
              auVar77 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])
                                            (param_1 + lVar18 + lVar38 * -3 + uVar37));
              auVar76 = vpaddw_avx512bw(auVar76,auVar77);
              auVar74 = vextractf64x4_avx512f(auVar76,1);
              auVar77 = vpmovzxwd_avx512f(auVar74);
              auVar77 = vcvtdq2ps_avx512f(auVar77);
              auVar77 = vfmadd213ps_avx512f(auVar77,auVar81,
                                            *(undefined1 (*) [64])(param_2 + 0x40 + uVar37 * 4));
              *(undefined1 (*) [64])(param_2 + 0x40 + uVar37 * 4) = auVar77;
              auVar76 = vpmovzxwd_avx512f(auVar76._0_32_);
              auVar76 = vcvtdq2ps_avx512f(auVar76);
              auVar76 = vfmadd213ps_avx512f(auVar76,auVar81,
                                            *(undefined1 (*) [64])(param_2 + uVar37 * 4));
              *(undefined1 (*) [64])(param_2 + uVar37 * 4) = auVar76;
              uVar37 = uVar37 + 0x20;
            } while (uVar37 < uVar42);
          }
        }
        auVar81 = _DAT_14308dc40;
        if (uVar42 + 1 <= uVar17) {
          uVar37 = 0;
          auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar78 = vbroadcastss_avx512f(auVar58);
          auVar79 = vpbroadcastq_avx512f();
          pauVar39 = (undefined1 (*) [64])(param_2 + uVar42 * 4);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar79,auVar76);
            bVar20 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar79,auVar77);
            bVar19 = (byte)uVar16;
            auVar76 = vpaddq_avx512f(auVar76,auVar81);
            auVar77 = vpaddq_avx512f(auVar77,auVar81);
            uVar55 = CONCAT11(bVar19,bVar20);
            auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                         (uVar37 + (param_1 - (lVar38 * -3 + lVar18)) + uVar42));
            auVar70[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
            auVar70[0] = (bVar20 & 1) * auVar58[0];
            auVar70[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
            auVar70[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
            auVar70[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
            auVar70[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
            auVar70[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
            auVar70[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
            auVar70[8] = (bVar19 & 1) * auVar58[8];
            auVar70[9] = (bVar19 >> 1 & 1) * auVar58[9];
            auVar70[10] = (bVar19 >> 2 & 1) * auVar58[10];
            auVar70[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
            auVar70[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
            auVar70[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
            auVar70[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
            auVar70[0xf] = -((char)bVar19 >> 7) * auVar58[0xf];
            auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                         (uVar37 + param_1 + lVar18 + lVar38 * -3 + uVar42));
            auVar71[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
            auVar71[0] = (bVar20 & 1) * auVar58[0];
            auVar71[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
            auVar71[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
            auVar71[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
            auVar71[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
            auVar71[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
            auVar71[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
            auVar71[8] = (bVar19 & 1) * auVar58[8];
            auVar71[9] = (bVar19 >> 1 & 1) * auVar58[9];
            auVar71[10] = (bVar19 >> 2 & 1) * auVar58[10];
            auVar71[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
            auVar71[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
            auVar71[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
            auVar71[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
            auVar71[0xf] = -((char)bVar19 >> 7) * auVar58[0xf];
            auVar74 = vpmovzxbw_avx512vl(auVar70);
            uVar37 = uVar37 + 0x10;
            auVar75 = vpmovzxbw_avx512vl(auVar71);
            auVar74 = vpaddw_avx512vl(auVar74,auVar75);
            auVar80 = vpmovzxwd_avx512f(auVar74);
            auVar80 = vcvtdq2ps_avx512f(auVar80);
            auVar80 = vfmadd213ps_avx512f(auVar80,auVar78,*pauVar39);
            iVar22 = *(int *)(*pauVar39 + 4);
            iVar23 = *(int *)(*pauVar39 + 8);
            iVar24 = *(int *)(*pauVar39 + 0xc);
            iVar25 = *(int *)(*pauVar39 + 0x10);
            iVar26 = *(int *)(*pauVar39 + 0x14);
            iVar27 = *(int *)(*pauVar39 + 0x18);
            iVar28 = *(int *)(*pauVar39 + 0x1c);
            iVar29 = *(int *)(*pauVar39 + 0x20);
            iVar30 = *(int *)(*pauVar39 + 0x24);
            iVar31 = *(int *)(*pauVar39 + 0x28);
            iVar32 = *(int *)(*pauVar39 + 0x2c);
            iVar33 = *(int *)(*pauVar39 + 0x30);
            iVar34 = *(int *)(*pauVar39 + 0x34);
            iVar35 = *(int *)(*pauVar39 + 0x38);
            iVar36 = *(int *)(*pauVar39 + 0x3c);
            bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar10 = (bool)(bVar19 >> 1 & 1);
            bVar11 = (bool)(bVar19 >> 2 & 1);
            bVar12 = (bool)(bVar19 >> 3 & 1);
            bVar13 = (bool)(bVar19 >> 4 & 1);
            bVar14 = (bool)(bVar19 >> 5 & 1);
            bVar15 = (bool)(bVar19 >> 6 & 1);
            *(uint *)*pauVar39 =
                 (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * auVar80._0_4_ |
                 (uint)!(bool)(bVar20 & 1) * *(int *)*pauVar39;
            *(uint *)(*pauVar39 + 4) =
                 (uint)bVar3 * (uint)((byte)(uVar55 >> 1) & 1) * auVar80._4_4_ |
                 (uint)!bVar3 * iVar22;
            *(uint *)(*pauVar39 + 8) =
                 (uint)bVar4 * (uint)((byte)(uVar55 >> 2) & 1) * auVar80._8_4_ |
                 (uint)!bVar4 * iVar23;
            *(uint *)(*pauVar39 + 0xc) =
                 (uint)bVar5 * (uint)((byte)(uVar55 >> 3) & 1) * auVar80._12_4_ |
                 (uint)!bVar5 * iVar24;
            *(uint *)(*pauVar39 + 0x10) =
                 (uint)bVar6 * (uint)((byte)(uVar55 >> 4) & 1) * auVar80._16_4_ |
                 (uint)!bVar6 * iVar25;
            *(uint *)(*pauVar39 + 0x14) =
                 (uint)bVar7 * (uint)((byte)(uVar55 >> 5) & 1) * auVar80._20_4_ |
                 (uint)!bVar7 * iVar26;
            *(uint *)(*pauVar39 + 0x18) =
                 (uint)bVar8 * (uint)((byte)(uVar55 >> 6) & 1) * auVar80._24_4_ |
                 (uint)!bVar8 * iVar27;
            *(uint *)(*pauVar39 + 0x1c) =
                 (uint)bVar9 * (uint)((byte)(uVar55 >> 7) & 1) * auVar80._28_4_ |
                 (uint)!bVar9 * iVar28;
            *(uint *)(*pauVar39 + 0x20) =
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar80._32_4_ |
                 (uint)!(bool)(bVar19 & 1) * iVar29;
            *(uint *)(*pauVar39 + 0x24) =
                 (uint)bVar10 * (uint)(bVar19 >> 1 & 1) * auVar80._36_4_ | (uint)!bVar10 * iVar30;
            *(uint *)(*pauVar39 + 0x28) =
                 (uint)bVar11 * (uint)(bVar19 >> 2 & 1) * auVar80._40_4_ | (uint)!bVar11 * iVar31;
            *(uint *)(*pauVar39 + 0x2c) =
                 (uint)bVar12 * (uint)(bVar19 >> 3 & 1) * auVar80._44_4_ | (uint)!bVar12 * iVar32;
            *(uint *)(*pauVar39 + 0x30) =
                 (uint)bVar13 * (uint)(bVar19 >> 4 & 1) * auVar80._48_4_ | (uint)!bVar13 * iVar33;
            *(uint *)(*pauVar39 + 0x34) =
                 (uint)bVar14 * (uint)(bVar19 >> 5 & 1) * auVar80._52_4_ | (uint)!bVar14 * iVar34;
            *(uint *)(*pauVar39 + 0x38) =
                 (uint)bVar15 * (uint)(bVar19 >> 6 & 1) * auVar80._56_4_ | (uint)!bVar15 * iVar35;
            *(uint *)(*pauVar39 + 0x3c) =
                 (uint)(bVar19 >> 7) * (uint)(bVar19 >> 7) * auVar80._60_4_ |
                 (uint)!(bool)(bVar19 >> 7) * iVar36;
            pauVar39 = pauVar39 + 1;
          } while (uVar37 < uVar17 - uVar42);
        }
      }
    }
  }
LAB_140978e04:
  auVar81 = _DAT_14308dc40;
  if (0 < (longlong)uVar17) {
    auVar58 = ZEXT416(param_4[lVar54]);
    if ((longlong)uVar17 < 0x20) {
      uVar42 = 0;
    }
    else {
      if ((longlong)uVar17 < 0x3a) {
        uVar37 = 0;
        uVar42 = uVar17 & 0xffffffffffffffe0;
      }
      else {
        uVar37 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar37 != 0) && (uVar37 = 0x40 - uVar37 >> 2, (longlong)uVar17 < (longlong)uVar37)) {
            uVar37 = uVar17;
          }
        }
        else {
          uVar37 = 0;
        }
        uVar42 = uVar17 - (uVar17 - uVar37 & 0x1f);
        if (uVar37 != 0) {
          uVar50 = 0;
          auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar78 = vpbroadcastq_avx512f();
          auVar79 = vbroadcastss_avx512f(auVar58);
          do {
            uVar16 = vpcmpgtq_avx512f(auVar78,auVar76);
            bVar20 = (byte)uVar16;
            uVar16 = vpcmpgtq_avx512f(auVar78,auVar77);
            bVar19 = (byte)uVar16;
            auVar76 = vpaddq_avx512f(auVar76,auVar81);
            auVar77 = vpaddq_avx512f(auVar77,auVar81);
            uVar55 = CONCAT11(bVar19,bVar20);
            auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar50 + 3 + lVar41));
            auVar72[1] = ((byte)(uVar55 >> 1) & 1) * auVar56[1];
            auVar72[0] = (bVar20 & 1) * auVar56[0];
            auVar72[2] = ((byte)(uVar55 >> 2) & 1) * auVar56[2];
            auVar72[3] = ((byte)(uVar55 >> 3) & 1) * auVar56[3];
            auVar72[4] = ((byte)(uVar55 >> 4) & 1) * auVar56[4];
            auVar72[5] = ((byte)(uVar55 >> 5) & 1) * auVar56[5];
            auVar72[6] = ((byte)(uVar55 >> 6) & 1) * auVar56[6];
            auVar72[7] = ((byte)(uVar55 >> 7) & 1) * auVar56[7];
            auVar72[8] = (bVar19 & 1) * auVar56[8];
            auVar72[9] = (bVar19 >> 1 & 1) * auVar56[9];
            auVar72[10] = (bVar19 >> 2 & 1) * auVar56[10];
            auVar72[0xb] = (bVar19 >> 3 & 1) * auVar56[0xb];
            auVar72[0xc] = (bVar19 >> 4 & 1) * auVar56[0xc];
            auVar72[0xd] = (bVar19 >> 5 & 1) * auVar56[0xd];
            auVar72[0xe] = (bVar19 >> 6 & 1) * auVar56[0xe];
            auVar72[0xf] = -((char)bVar19 >> 7) * auVar56[0xf];
            auVar80 = vpmovzxbd_avx512f(auVar72);
            auVar80 = vcvtdq2ps_avx512f(auVar80);
            auVar80 = vfmadd213ps_avx512f(auVar80,auVar79,
                                          *(undefined1 (*) [64])(param_2 + uVar50 * 4));
            puVar1 = (uint *)(param_2 + uVar50 * 4);
            bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar10 = (bool)(bVar19 >> 1 & 1);
            bVar11 = (bool)(bVar19 >> 2 & 1);
            bVar12 = (bool)(bVar19 >> 3 & 1);
            bVar13 = (bool)(bVar19 >> 4 & 1);
            bVar14 = (bool)(bVar19 >> 5 & 1);
            bVar15 = (bool)(bVar19 >> 6 & 1);
            *puVar1 = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * auVar80._0_4_ |
                      (uint)!(bool)(bVar20 & 1) * *puVar1;
            puVar1[1] = (uint)bVar3 * (uint)((byte)(uVar55 >> 1) & 1) * auVar80._4_4_ |
                        (uint)!bVar3 * puVar1[1];
            puVar1[2] = (uint)bVar4 * (uint)((byte)(uVar55 >> 2) & 1) * auVar80._8_4_ |
                        (uint)!bVar4 * puVar1[2];
            puVar1[3] = (uint)bVar5 * (uint)((byte)(uVar55 >> 3) & 1) * auVar80._12_4_ |
                        (uint)!bVar5 * puVar1[3];
            puVar1[4] = (uint)bVar6 * (uint)((byte)(uVar55 >> 4) & 1) * auVar80._16_4_ |
                        (uint)!bVar6 * puVar1[4];
            puVar1[5] = (uint)bVar7 * (uint)((byte)(uVar55 >> 5) & 1) * auVar80._20_4_ |
                        (uint)!bVar7 * puVar1[5];
            puVar1[6] = (uint)bVar8 * (uint)((byte)(uVar55 >> 6) & 1) * auVar80._24_4_ |
                        (uint)!bVar8 * puVar1[6];
            puVar1[7] = (uint)bVar9 * (uint)((byte)(uVar55 >> 7) & 1) * auVar80._28_4_ |
                        (uint)!bVar9 * puVar1[7];
            puVar1[8] = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar80._32_4_ |
                        (uint)!(bool)(bVar19 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar10 * (uint)(bVar19 >> 1 & 1) * auVar80._36_4_ |
                        (uint)!bVar10 * puVar1[9];
            puVar1[10] = (uint)bVar11 * (uint)(bVar19 >> 2 & 1) * auVar80._40_4_ |
                         (uint)!bVar11 * puVar1[10];
            puVar1[0xb] = (uint)bVar12 * (uint)(bVar19 >> 3 & 1) * auVar80._44_4_ |
                          (uint)!bVar12 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar13 * (uint)(bVar19 >> 4 & 1) * auVar80._48_4_ |
                          (uint)!bVar13 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar14 * (uint)(bVar19 >> 5 & 1) * auVar80._52_4_ |
                          (uint)!bVar14 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar15 * (uint)(bVar19 >> 6 & 1) * auVar80._56_4_ |
                          (uint)!bVar15 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar19 >> 7) * (uint)(bVar19 >> 7) * auVar80._60_4_ |
                          (uint)!(bool)(bVar19 >> 7) * puVar1[0xf];
            uVar50 = uVar50 + 0x10;
          } while (uVar50 < uVar37);
          if (uVar17 == uVar37) {
            return;
          }
        }
      }
      if ((longlong)(uVar37 + 0x20) <= (longlong)uVar42) {
        auVar81 = vbroadcastss_avx512f(auVar58);
        do {
          auVar74 = *(undefined1 (*) [32])(uVar37 + 3 + lVar41);
          auVar76 = vpmovzxbd_avx512f(auVar74._0_16_);
          auVar77 = vpmovzxbd_avx512f(auVar74._16_16_);
          auVar76 = vcvtdq2ps_avx512f(auVar76);
          auVar77 = vcvtdq2ps_avx512f(auVar77);
          auVar76 = vfmadd213ps_avx512f(auVar76,auVar81,*(undefined1 (*) [64])(param_2 + uVar37 * 4)
                                       );
          auVar77 = vfmadd213ps_avx512f(auVar77,auVar81,
                                        *(undefined1 (*) [64])(param_2 + 0x40 + uVar37 * 4));
          *(undefined1 (*) [64])(param_2 + uVar37 * 4) = auVar76;
          *(undefined1 (*) [64])(param_2 + 0x40 + uVar37 * 4) = auVar77;
          uVar37 = uVar37 + 0x20;
        } while (uVar37 < uVar42);
      }
    }
    auVar81 = _DAT_14308dc40;
    if (uVar42 + 1 <= uVar17) {
      uVar37 = 0;
      pauVar39 = (undefined1 (*) [64])(param_2 + uVar42 * 4);
      auVar76 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar77 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar78 = vbroadcastss_avx512f(auVar58);
      auVar79 = vpbroadcastq_avx512f();
      do {
        uVar16 = vpcmpgtq_avx512f(auVar79,auVar76);
        bVar20 = (byte)uVar16;
        uVar16 = vpcmpgtq_avx512f(auVar79,auVar77);
        bVar19 = (byte)uVar16;
        auVar76 = vpaddq_avx512f(auVar76,auVar81);
        auVar77 = vpaddq_avx512f(auVar77,auVar81);
        uVar55 = CONCAT11(bVar19,bVar20);
        auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar37 + 3 + lVar41 + uVar42));
        auVar73[1] = ((byte)(uVar55 >> 1) & 1) * auVar58[1];
        auVar73[0] = (bVar20 & 1) * auVar58[0];
        auVar73[2] = ((byte)(uVar55 >> 2) & 1) * auVar58[2];
        auVar73[3] = ((byte)(uVar55 >> 3) & 1) * auVar58[3];
        auVar73[4] = ((byte)(uVar55 >> 4) & 1) * auVar58[4];
        auVar73[5] = ((byte)(uVar55 >> 5) & 1) * auVar58[5];
        auVar73[6] = ((byte)(uVar55 >> 6) & 1) * auVar58[6];
        auVar73[7] = ((byte)(uVar55 >> 7) & 1) * auVar58[7];
        auVar73[8] = (bVar19 & 1) * auVar58[8];
        auVar73[9] = (bVar19 >> 1 & 1) * auVar58[9];
        auVar73[10] = (bVar19 >> 2 & 1) * auVar58[10];
        auVar73[0xb] = (bVar19 >> 3 & 1) * auVar58[0xb];
        auVar73[0xc] = (bVar19 >> 4 & 1) * auVar58[0xc];
        auVar73[0xd] = (bVar19 >> 5 & 1) * auVar58[0xd];
        auVar73[0xe] = (bVar19 >> 6 & 1) * auVar58[0xe];
        auVar73[0xf] = -((char)bVar19 >> 7) * auVar58[0xf];
        uVar37 = uVar37 + 0x10;
        auVar80 = vpmovzxbd_avx512f(auVar73);
        auVar80 = vcvtdq2ps_avx512f(auVar80);
        auVar80 = vfmadd213ps_avx512f(auVar80,auVar78,*pauVar39);
        iVar22 = *(int *)(*pauVar39 + 4);
        iVar23 = *(int *)(*pauVar39 + 8);
        iVar24 = *(int *)(*pauVar39 + 0xc);
        iVar25 = *(int *)(*pauVar39 + 0x10);
        iVar26 = *(int *)(*pauVar39 + 0x14);
        iVar27 = *(int *)(*pauVar39 + 0x18);
        iVar28 = *(int *)(*pauVar39 + 0x1c);
        iVar29 = *(int *)(*pauVar39 + 0x20);
        iVar30 = *(int *)(*pauVar39 + 0x24);
        iVar31 = *(int *)(*pauVar39 + 0x28);
        iVar32 = *(int *)(*pauVar39 + 0x2c);
        iVar33 = *(int *)(*pauVar39 + 0x30);
        iVar34 = *(int *)(*pauVar39 + 0x34);
        iVar35 = *(int *)(*pauVar39 + 0x38);
        iVar36 = *(int *)(*pauVar39 + 0x3c);
        bVar3 = (bool)((byte)(uVar55 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar55 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar55 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar55 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar55 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar55 >> 6) & 1);
        bVar9 = (bool)((byte)(uVar55 >> 7) & 1);
        bVar10 = (bool)(bVar19 >> 1 & 1);
        bVar11 = (bool)(bVar19 >> 2 & 1);
        bVar12 = (bool)(bVar19 >> 3 & 1);
        bVar13 = (bool)(bVar19 >> 4 & 1);
        bVar14 = (bool)(bVar19 >> 5 & 1);
        bVar15 = (bool)(bVar19 >> 6 & 1);
        *(uint *)*pauVar39 =
             (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * auVar80._0_4_ |
             (uint)!(bool)(bVar20 & 1) * *(int *)*pauVar39;
        *(uint *)(*pauVar39 + 4) =
             (uint)bVar3 * (uint)((byte)(uVar55 >> 1) & 1) * auVar80._4_4_ | (uint)!bVar3 * iVar22;
        *(uint *)(*pauVar39 + 8) =
             (uint)bVar4 * (uint)((byte)(uVar55 >> 2) & 1) * auVar80._8_4_ | (uint)!bVar4 * iVar23;
        *(uint *)(*pauVar39 + 0xc) =
             (uint)bVar5 * (uint)((byte)(uVar55 >> 3) & 1) * auVar80._12_4_ | (uint)!bVar5 * iVar24;
        *(uint *)(*pauVar39 + 0x10) =
             (uint)bVar6 * (uint)((byte)(uVar55 >> 4) & 1) * auVar80._16_4_ | (uint)!bVar6 * iVar25;
        *(uint *)(*pauVar39 + 0x14) =
             (uint)bVar7 * (uint)((byte)(uVar55 >> 5) & 1) * auVar80._20_4_ | (uint)!bVar7 * iVar26;
        *(uint *)(*pauVar39 + 0x18) =
             (uint)bVar8 * (uint)((byte)(uVar55 >> 6) & 1) * auVar80._24_4_ | (uint)!bVar8 * iVar27;
        *(uint *)(*pauVar39 + 0x1c) =
             (uint)bVar9 * (uint)((byte)(uVar55 >> 7) & 1) * auVar80._28_4_ | (uint)!bVar9 * iVar28;
        *(uint *)(*pauVar39 + 0x20) =
             (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar80._32_4_ |
             (uint)!(bool)(bVar19 & 1) * iVar29;
        *(uint *)(*pauVar39 + 0x24) =
             (uint)bVar10 * (uint)(bVar19 >> 1 & 1) * auVar80._36_4_ | (uint)!bVar10 * iVar30;
        *(uint *)(*pauVar39 + 0x28) =
             (uint)bVar11 * (uint)(bVar19 >> 2 & 1) * auVar80._40_4_ | (uint)!bVar11 * iVar31;
        *(uint *)(*pauVar39 + 0x2c) =
             (uint)bVar12 * (uint)(bVar19 >> 3 & 1) * auVar80._44_4_ | (uint)!bVar12 * iVar32;
        *(uint *)(*pauVar39 + 0x30) =
             (uint)bVar13 * (uint)(bVar19 >> 4 & 1) * auVar80._48_4_ | (uint)!bVar13 * iVar33;
        *(uint *)(*pauVar39 + 0x34) =
             (uint)bVar14 * (uint)(bVar19 >> 5 & 1) * auVar80._52_4_ | (uint)!bVar14 * iVar34;
        *(uint *)(*pauVar39 + 0x38) =
             (uint)bVar15 * (uint)(bVar19 >> 6 & 1) * auVar80._56_4_ | (uint)!bVar15 * iVar35;
        *(uint *)(*pauVar39 + 0x3c) =
             (uint)(bVar19 >> 7) * (uint)(bVar19 >> 7) * auVar80._60_4_ |
             (uint)!(bool)(bVar19 >> 7) * iVar36;
        pauVar39 = pauVar39 + 1;
      } while (uVar37 < uVar17 - uVar42);
    }
  }
  return;
}

