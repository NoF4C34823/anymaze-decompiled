
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140976c40(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
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
  bool bVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  int iVar21;
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
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [64];
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ushort uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
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
  undefined1 auVar59 [16];
  
  auVar79 = _DAT_14308dc40;
  lVar48 = (longlong)(param_5 >> 1);
  lVar51 = param_1 - lVar48;
  if (0 < (longlong)param_3) {
    auVar56 = ZEXT416(*param_4);
    if ((longlong)param_3 < 0x20) {
      uVar36 = 0;
    }
    else {
      if ((longlong)param_3 < 0xa6) {
        uVar38 = 0;
        uVar36 = param_3 & 0xffffffffffffffe0;
      }
      else {
        uVar38 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar38 != 0) && (uVar38 = 0x40 - uVar38 >> 2, (longlong)param_3 < (longlong)uVar38))
          {
            uVar38 = param_3;
          }
        }
        else {
          uVar38 = 0;
        }
        uVar36 = param_3 - (param_3 - uVar38 & 0x1f);
        if (uVar38 != 0) {
          uVar44 = 0;
          auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar76 = vpbroadcastq_avx512f();
          auVar77 = vbroadcastss_avx512f(auVar56);
          do {
            uVar17 = vpcmpgtq_avx512f(auVar76,auVar74);
            bVar19 = (byte)uVar17;
            uVar17 = vpcmpgtq_avx512f(auVar76,auVar75);
            bVar18 = (byte)uVar17;
            auVar74 = vpaddq_avx512f(auVar74,auVar79);
            auVar75 = vpaddq_avx512f(auVar75,auVar79);
            uVar53 = CONCAT11(bVar18,bVar19);
            auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar44 + lVar51));
            auVar58[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
            auVar58[0] = (bVar19 & 1) * auVar54[0];
            auVar58[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
            auVar58[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
            auVar58[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
            auVar58[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
            auVar58[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
            auVar58[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
            auVar58[8] = (bVar18 & 1) * auVar54[8];
            auVar58[9] = (bVar18 >> 1 & 1) * auVar54[9];
            auVar58[10] = (bVar18 >> 2 & 1) * auVar54[10];
            auVar58[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
            auVar58[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
            auVar58[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
            auVar58[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
            auVar58[0xf] = -((char)bVar18 >> 7) * auVar54[0xf];
            auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar44 + lVar48 + param_1));
            auVar55[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
            auVar55[0] = (bVar19 & 1) * auVar54[0];
            auVar55[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
            auVar55[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
            auVar55[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
            auVar55[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
            auVar55[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
            auVar55[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
            auVar55[8] = (bVar18 & 1) * auVar54[8];
            auVar55[9] = (bVar18 >> 1 & 1) * auVar54[9];
            auVar55[10] = (bVar18 >> 2 & 1) * auVar54[10];
            auVar55[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
            auVar55[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
            auVar55[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
            auVar55[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
            auVar55[0xf] = -((char)bVar18 >> 7) * auVar54[0xf];
            auVar72 = vpmovzxbw_avx512vl(auVar58);
            auVar73 = vpmovzxbw_avx512vl(auVar55);
            auVar72 = vpaddw_avx512vl(auVar72,auVar73);
            auVar78 = vpmovzxwd_avx512f(auVar72);
            auVar78 = vcvtdq2ps_avx512f(auVar78);
            auVar78 = vmulps_avx512f(auVar77,auVar78);
            puVar1 = (uint *)(param_2 + uVar44 * 4);
            bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
            bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
            bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
            bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
            bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
            bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
            bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
            bVar11 = (bool)(bVar18 >> 1 & 1);
            bVar12 = (bool)(bVar18 >> 2 & 1);
            bVar13 = (bool)(bVar18 >> 3 & 1);
            bVar14 = (bool)(bVar18 >> 4 & 1);
            bVar15 = (bool)(bVar18 >> 5 & 1);
            bVar16 = (bool)(bVar18 >> 6 & 1);
            *puVar1 = (uint)(bVar19 & 1) * auVar78._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar1;
            puVar1[1] = (uint)bVar4 * auVar78._4_4_ | (uint)!bVar4 * puVar1[1];
            puVar1[2] = (uint)bVar5 * auVar78._8_4_ | (uint)!bVar5 * puVar1[2];
            puVar1[3] = (uint)bVar6 * auVar78._12_4_ | (uint)!bVar6 * puVar1[3];
            puVar1[4] = (uint)bVar7 * auVar78._16_4_ | (uint)!bVar7 * puVar1[4];
            puVar1[5] = (uint)bVar8 * auVar78._20_4_ | (uint)!bVar8 * puVar1[5];
            puVar1[6] = (uint)bVar9 * auVar78._24_4_ | (uint)!bVar9 * puVar1[6];
            puVar1[7] = (uint)bVar10 * auVar78._28_4_ | (uint)!bVar10 * puVar1[7];
            puVar1[8] = (uint)(bVar18 & 1) * auVar78._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar11 * auVar78._36_4_ | (uint)!bVar11 * puVar1[9];
            puVar1[10] = (uint)bVar12 * auVar78._40_4_ | (uint)!bVar12 * puVar1[10];
            puVar1[0xb] = (uint)bVar13 * auVar78._44_4_ | (uint)!bVar13 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar14 * auVar78._48_4_ | (uint)!bVar14 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar15 * auVar78._52_4_ | (uint)!bVar15 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar16 * auVar78._56_4_ | (uint)!bVar16 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar18 >> 7) * auVar78._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
            uVar44 = uVar44 + 0x10;
          } while (uVar44 < uVar38);
          if (param_3 == uVar38) goto LAB_140976ebe;
        }
      }
      if ((longlong)(uVar38 + 0x20) <= (longlong)uVar36) {
        auVar79 = vbroadcastss_avx512f(auVar56);
        do {
          auVar74 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar51 + uVar38));
          auVar75 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar48 + param_1 + uVar38));
          auVar74 = vpaddw_avx512bw(auVar74,auVar75);
          auVar72 = vextractf64x4_avx512f(auVar74,1);
          auVar75 = vpmovzxwd_avx512f(auVar72);
          auVar75 = vcvtdq2ps_avx512f(auVar75);
          auVar75 = vmulps_avx512f(auVar79,auVar75);
          *(undefined1 (*) [64])(param_2 + 0x40 + uVar38 * 4) = auVar75;
          auVar74 = vpmovzxwd_avx512f(auVar74._0_32_);
          auVar74 = vcvtdq2ps_avx512f(auVar74);
          auVar74 = vmulps_avx512f(auVar79,auVar74);
          *(undefined1 (*) [64])(param_2 + uVar38 * 4) = auVar74;
          uVar38 = uVar38 + 0x20;
        } while (uVar38 < uVar36);
      }
    }
    auVar79 = _DAT_14308dc40;
    if (uVar36 + 1 <= param_3) {
      uVar38 = 0;
      auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar76 = vbroadcastss_avx512f(auVar56);
      auVar77 = vpbroadcastq_avx512f();
      do {
        uVar17 = vpcmpgtq_avx512f(auVar77,auVar74);
        bVar19 = (byte)uVar17;
        uVar17 = vpcmpgtq_avx512f(auVar77,auVar75);
        bVar18 = (byte)uVar17;
        auVar74 = vpaddq_avx512f(auVar74,auVar79);
        auVar75 = vpaddq_avx512f(auVar75,auVar79);
        uVar53 = CONCAT11(bVar18,bVar19);
        auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar38 + uVar36 + lVar51));
        auVar54[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
        auVar54[0] = (bVar19 & 1) * auVar56[0];
        auVar54[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
        auVar54[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
        auVar54[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
        auVar54[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
        auVar54[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
        auVar54[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
        auVar54[8] = (bVar18 & 1) * auVar56[8];
        auVar54[9] = (bVar18 >> 1 & 1) * auVar56[9];
        auVar54[10] = (bVar18 >> 2 & 1) * auVar56[10];
        auVar54[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
        auVar54[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
        auVar54[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
        auVar54[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
        auVar54[0xf] = -((char)bVar18 >> 7) * auVar56[0xf];
        auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar38 + lVar48 + param_1 + uVar36));
        auVar57[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
        auVar57[0] = (bVar19 & 1) * auVar56[0];
        auVar57[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
        auVar57[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
        auVar57[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
        auVar57[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
        auVar57[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
        auVar57[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
        auVar57[8] = (bVar18 & 1) * auVar56[8];
        auVar57[9] = (bVar18 >> 1 & 1) * auVar56[9];
        auVar57[10] = (bVar18 >> 2 & 1) * auVar56[10];
        auVar57[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
        auVar57[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
        auVar57[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
        auVar57[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
        auVar57[0xf] = -((char)bVar18 >> 7) * auVar56[0xf];
        auVar72 = vpmovzxbw_avx512vl(auVar54);
        auVar73 = vpmovzxbw_avx512vl(auVar57);
        auVar72 = vpaddw_avx512vl(auVar72,auVar73);
        auVar78 = vpmovzxwd_avx512f(auVar72);
        auVar78 = vcvtdq2ps_avx512f(auVar78);
        auVar78 = vmulps_avx512f(auVar76,auVar78);
        puVar1 = (uint *)(param_2 + uVar36 * 4 + uVar38 * 4);
        bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
        bVar11 = (bool)(bVar18 >> 1 & 1);
        bVar12 = (bool)(bVar18 >> 2 & 1);
        bVar13 = (bool)(bVar18 >> 3 & 1);
        bVar14 = (bool)(bVar18 >> 4 & 1);
        bVar15 = (bool)(bVar18 >> 5 & 1);
        bVar16 = (bool)(bVar18 >> 6 & 1);
        *puVar1 = (uint)(bVar19 & 1) * auVar78._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar1;
        puVar1[1] = (uint)bVar4 * auVar78._4_4_ | (uint)!bVar4 * puVar1[1];
        puVar1[2] = (uint)bVar5 * auVar78._8_4_ | (uint)!bVar5 * puVar1[2];
        puVar1[3] = (uint)bVar6 * auVar78._12_4_ | (uint)!bVar6 * puVar1[3];
        puVar1[4] = (uint)bVar7 * auVar78._16_4_ | (uint)!bVar7 * puVar1[4];
        puVar1[5] = (uint)bVar8 * auVar78._20_4_ | (uint)!bVar8 * puVar1[5];
        puVar1[6] = (uint)bVar9 * auVar78._24_4_ | (uint)!bVar9 * puVar1[6];
        puVar1[7] = (uint)bVar10 * auVar78._28_4_ | (uint)!bVar10 * puVar1[7];
        puVar1[8] = (uint)(bVar18 & 1) * auVar78._32_4_ | (uint)!(bool)(bVar18 & 1) * puVar1[8];
        puVar1[9] = (uint)bVar11 * auVar78._36_4_ | (uint)!bVar11 * puVar1[9];
        puVar1[10] = (uint)bVar12 * auVar78._40_4_ | (uint)!bVar12 * puVar1[10];
        puVar1[0xb] = (uint)bVar13 * auVar78._44_4_ | (uint)!bVar13 * puVar1[0xb];
        puVar1[0xc] = (uint)bVar14 * auVar78._48_4_ | (uint)!bVar14 * puVar1[0xc];
        puVar1[0xd] = (uint)bVar15 * auVar78._52_4_ | (uint)!bVar15 * puVar1[0xd];
        puVar1[0xe] = (uint)bVar16 * auVar78._56_4_ | (uint)!bVar16 * puVar1[0xe];
        puVar1[0xf] = (uint)(bVar18 >> 7) * auVar78._60_4_ |
                      (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
        uVar38 = uVar38 + 0x10;
      } while (uVar38 < param_3 - uVar36);
    }
  }
LAB_140976ebe:
  auVar79 = _DAT_14308dc40;
  lVar42 = lVar51;
  if (1 < lVar48) {
    uVar36 = lVar48 - 1U >> 1;
    lVar43 = 0;
    lVar37 = 1;
    lVar45 = 0;
    if (uVar36 != 0) {
      uVar41 = param_2 & 0x3f;
      lVar37 = lVar48 + param_1;
      auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar44 = 0x40 - uVar41 >> 2;
      uVar38 = 0;
      lVar46 = lVar51;
      do {
        uVar39 = uVar38;
        lVar42 = lVar46 + 2;
        if (0 < (longlong)param_3) {
          auVar56 = ZEXT416(param_4[uVar39 * 2 + 2]);
          auVar54 = ZEXT416(param_4[uVar39 * 2 + 1]);
          if ((longlong)param_3 < 0x20) {
            uVar38 = 0;
          }
          else {
            if ((longlong)param_3 < 0x73) {
              uVar52 = 0;
              uVar38 = param_3 & 0xffffffffffffffe0;
            }
            else {
              if ((param_2 & 3) == 0) {
                uVar52 = uVar41;
                if ((uVar41 != 0) && (uVar52 = uVar44, (longlong)param_3 < (longlong)uVar44)) {
                  uVar52 = param_3;
                }
              }
              else {
                uVar52 = 0;
              }
              uVar38 = param_3 - (param_3 - uVar52 & 0x1f);
              if (uVar52 != 0) {
                uVar50 = 0;
                auVar78 = vbroadcastss_avx512f(auVar56);
                auVar80 = vpbroadcastq_avx512f();
                auVar81 = vbroadcastss_avx512f(auVar54);
                lVar47 = lVar46;
                lVar49 = lVar37;
                auVar76 = auVar75;
                auVar77 = auVar74;
                do {
                  uVar17 = vpcmpgtq_avx512f(auVar80,auVar77);
                  bVar19 = (byte)uVar17;
                  uVar17 = vpcmpgtq_avx512f(auVar80,auVar76);
                  bVar18 = (byte)uVar17;
                  auVar77 = vpaddq_avx512f(auVar77,auVar79);
                  auVar76 = vpaddq_avx512f(auVar76,auVar79);
                  uVar53 = CONCAT11(bVar18,bVar19);
                  auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + 1));
                  auVar59[1] = ((byte)(uVar53 >> 1) & 1) * auVar58[1];
                  auVar59[0] = (bVar19 & 1) * auVar58[0];
                  auVar59[2] = ((byte)(uVar53 >> 2) & 1) * auVar58[2];
                  auVar59[3] = ((byte)(uVar53 >> 3) & 1) * auVar58[3];
                  auVar59[4] = ((byte)(uVar53 >> 4) & 1) * auVar58[4];
                  auVar59[5] = ((byte)(uVar53 >> 5) & 1) * auVar58[5];
                  auVar59[6] = ((byte)(uVar53 >> 6) & 1) * auVar58[6];
                  auVar59[7] = ((byte)(uVar53 >> 7) & 1) * auVar58[7];
                  auVar59[8] = (bVar18 & 1) * auVar58[8];
                  auVar59[9] = (bVar18 >> 1 & 1) * auVar58[9];
                  auVar59[10] = (bVar18 >> 2 & 1) * auVar58[10];
                  auVar59[0xb] = (bVar18 >> 3 & 1) * auVar58[0xb];
                  auVar59[0xc] = (bVar18 >> 4 & 1) * auVar58[0xc];
                  auVar59[0xd] = (bVar18 >> 5 & 1) * auVar58[0xd];
                  auVar59[0xe] = (bVar18 >> 6 & 1) * auVar58[0xe];
                  cVar20 = (char)bVar18 >> 7;
                  auVar59[0xf] = -cVar20 * auVar58[0xf];
                  auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar49 + -1));
                  auVar60[1] = ((byte)(uVar53 >> 1) & 1) * auVar58[1];
                  auVar60[0] = (bVar19 & 1) * auVar58[0];
                  auVar60[2] = ((byte)(uVar53 >> 2) & 1) * auVar58[2];
                  auVar60[3] = ((byte)(uVar53 >> 3) & 1) * auVar58[3];
                  auVar60[4] = ((byte)(uVar53 >> 4) & 1) * auVar58[4];
                  auVar60[5] = ((byte)(uVar53 >> 5) & 1) * auVar58[5];
                  auVar60[6] = ((byte)(uVar53 >> 6) & 1) * auVar58[6];
                  auVar60[7] = ((byte)(uVar53 >> 7) & 1) * auVar58[7];
                  auVar60[8] = (bVar18 & 1) * auVar58[8];
                  auVar60[9] = (bVar18 >> 1 & 1) * auVar58[9];
                  auVar60[10] = (bVar18 >> 2 & 1) * auVar58[10];
                  auVar60[0xb] = (bVar18 >> 3 & 1) * auVar58[0xb];
                  auVar60[0xc] = (bVar18 >> 4 & 1) * auVar58[0xc];
                  auVar60[0xd] = (bVar18 >> 5 & 1) * auVar58[0xd];
                  auVar60[0xe] = (bVar18 >> 6 & 1) * auVar58[0xe];
                  auVar60[0xf] = -cVar20 * auVar58[0xf];
                  piVar2 = (int *)(param_2 + uVar50 * 4);
                  auVar83._4_4_ = (uint)((byte)(uVar53 >> 1) & 1) * piVar2[1];
                  auVar83._0_4_ = (uint)(bVar19 & 1) * *piVar2;
                  auVar83._8_4_ = (uint)((byte)(uVar53 >> 2) & 1) * piVar2[2];
                  auVar83._12_4_ = (uint)((byte)(uVar53 >> 3) & 1) * piVar2[3];
                  auVar83._16_4_ = (uint)((byte)(uVar53 >> 4) & 1) * piVar2[4];
                  auVar83._20_4_ = (uint)((byte)(uVar53 >> 5) & 1) * piVar2[5];
                  auVar83._24_4_ = (uint)((byte)(uVar53 >> 6) & 1) * piVar2[6];
                  auVar83._28_4_ = (uint)((byte)(uVar53 >> 7) & 1) * piVar2[7];
                  auVar83._32_4_ = (uint)(bVar18 & 1) * piVar2[8];
                  auVar83._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar2[9];
                  auVar83._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar2[10];
                  auVar83._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar2[0xb];
                  auVar83._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar2[0xc];
                  auVar83._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar2[0xd];
                  auVar83._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar2[0xe];
                  auVar83._60_4_ = (uint)(bVar18 >> 7) * piVar2[0xf];
                  auVar72 = vpmovzxbw_avx512vl(auVar59);
                  auVar73 = vpmovzxbw_avx512vl(auVar60);
                  auVar72 = vpaddw_avx512vl(auVar72,auVar73);
                  auVar82 = vpmovzxwd_avx512f(auVar72);
                  auVar82 = vcvtdq2ps_avx512f(auVar82);
                  auVar83 = vfmadd231ps_avx512f(auVar83,auVar82,auVar81);
                  puVar1 = (uint *)(param_2 + uVar50 * 4);
                  bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
                  bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
                  bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
                  bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
                  bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
                  bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
                  bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
                  bVar11 = (bool)(bVar18 >> 1 & 1);
                  bVar12 = (bool)(bVar18 >> 2 & 1);
                  bVar13 = (bool)(bVar18 >> 3 & 1);
                  bVar14 = (bool)(bVar18 >> 4 & 1);
                  bVar15 = (bool)(bVar18 >> 5 & 1);
                  bVar16 = (bool)(bVar18 >> 6 & 1);
                  *puVar1 = (uint)(bVar19 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar1
                  ;
                  puVar1[1] = (uint)bVar4 * auVar83._4_4_ | (uint)!bVar4 * puVar1[1];
                  puVar1[2] = (uint)bVar5 * auVar83._8_4_ | (uint)!bVar5 * puVar1[2];
                  puVar1[3] = (uint)bVar6 * auVar83._12_4_ | (uint)!bVar6 * puVar1[3];
                  puVar1[4] = (uint)bVar7 * auVar83._16_4_ | (uint)!bVar7 * puVar1[4];
                  puVar1[5] = (uint)bVar8 * auVar83._20_4_ | (uint)!bVar8 * puVar1[5];
                  puVar1[6] = (uint)bVar9 * auVar83._24_4_ | (uint)!bVar9 * puVar1[6];
                  puVar1[7] = (uint)bVar10 * auVar83._28_4_ | (uint)!bVar10 * puVar1[7];
                  puVar1[8] = (uint)(bVar18 & 1) * auVar83._32_4_ |
                              (uint)!(bool)(bVar18 & 1) * puVar1[8];
                  puVar1[9] = (uint)bVar11 * auVar83._36_4_ | (uint)!bVar11 * puVar1[9];
                  puVar1[10] = (uint)bVar12 * auVar83._40_4_ | (uint)!bVar12 * puVar1[10];
                  puVar1[0xb] = (uint)bVar13 * auVar83._44_4_ | (uint)!bVar13 * puVar1[0xb];
                  puVar1[0xc] = (uint)bVar14 * auVar83._48_4_ | (uint)!bVar14 * puVar1[0xc];
                  puVar1[0xd] = (uint)bVar15 * auVar83._52_4_ | (uint)!bVar15 * puVar1[0xd];
                  puVar1[0xe] = (uint)bVar16 * auVar83._56_4_ | (uint)!bVar16 * puVar1[0xe];
                  puVar1[0xf] = (uint)(bVar18 >> 7) * auVar83._60_4_ |
                                (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
                  auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + 2));
                  auVar61[1] = ((byte)(uVar53 >> 1) & 1) * auVar58[1];
                  auVar61[0] = (bVar19 & 1) * auVar58[0];
                  auVar61[2] = ((byte)(uVar53 >> 2) & 1) * auVar58[2];
                  auVar61[3] = ((byte)(uVar53 >> 3) & 1) * auVar58[3];
                  auVar61[4] = ((byte)(uVar53 >> 4) & 1) * auVar58[4];
                  auVar61[5] = ((byte)(uVar53 >> 5) & 1) * auVar58[5];
                  auVar61[6] = ((byte)(uVar53 >> 6) & 1) * auVar58[6];
                  auVar61[7] = ((byte)(uVar53 >> 7) & 1) * auVar58[7];
                  auVar61[8] = (bVar18 & 1) * auVar58[8];
                  auVar61[9] = (bVar18 >> 1 & 1) * auVar58[9];
                  auVar61[10] = (bVar18 >> 2 & 1) * auVar58[10];
                  auVar61[0xb] = (bVar18 >> 3 & 1) * auVar58[0xb];
                  auVar61[0xc] = (bVar18 >> 4 & 1) * auVar58[0xc];
                  auVar61[0xd] = (bVar18 >> 5 & 1) * auVar58[0xd];
                  auVar61[0xe] = (bVar18 >> 6 & 1) * auVar58[0xe];
                  auVar61[0xf] = -cVar20 * auVar58[0xf];
                  lVar47 = lVar47 + 0x10;
                  auVar58 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar49 + -2));
                  auVar62[1] = ((byte)(uVar53 >> 1) & 1) * auVar58[1];
                  auVar62[0] = (bVar19 & 1) * auVar58[0];
                  auVar62[2] = ((byte)(uVar53 >> 2) & 1) * auVar58[2];
                  auVar62[3] = ((byte)(uVar53 >> 3) & 1) * auVar58[3];
                  auVar62[4] = ((byte)(uVar53 >> 4) & 1) * auVar58[4];
                  auVar62[5] = ((byte)(uVar53 >> 5) & 1) * auVar58[5];
                  auVar62[6] = ((byte)(uVar53 >> 6) & 1) * auVar58[6];
                  auVar62[7] = ((byte)(uVar53 >> 7) & 1) * auVar58[7];
                  auVar62[8] = (bVar18 & 1) * auVar58[8];
                  auVar62[9] = (bVar18 >> 1 & 1) * auVar58[9];
                  auVar62[10] = (bVar18 >> 2 & 1) * auVar58[10];
                  auVar62[0xb] = (bVar18 >> 3 & 1) * auVar58[0xb];
                  auVar62[0xc] = (bVar18 >> 4 & 1) * auVar58[0xc];
                  auVar62[0xd] = (bVar18 >> 5 & 1) * auVar58[0xd];
                  auVar62[0xe] = (bVar18 >> 6 & 1) * auVar58[0xe];
                  auVar62[0xf] = -cVar20 * auVar58[0xf];
                  auVar72 = vpmovzxbw_avx512vl(auVar61);
                  lVar49 = lVar49 + 0x10;
                  auVar73 = vpmovzxbw_avx512vl(auVar62);
                  auVar72 = vpaddw_avx512vl(auVar72,auVar73);
                  auVar82 = vpmovzxwd_avx512f(auVar72);
                  auVar82 = vcvtdq2ps_avx512f(auVar82);
                  auVar84._4_4_ = (uint)((byte)(uVar53 >> 1) & 1) * auVar83._4_4_;
                  auVar84._0_4_ = (uint)(bVar19 & 1) * auVar83._0_4_;
                  auVar84._8_4_ = (uint)((byte)(uVar53 >> 2) & 1) * auVar83._8_4_;
                  auVar84._12_4_ = (uint)((byte)(uVar53 >> 3) & 1) * auVar83._12_4_;
                  auVar84._16_4_ = (uint)((byte)(uVar53 >> 4) & 1) * auVar83._16_4_;
                  auVar84._20_4_ = (uint)((byte)(uVar53 >> 5) & 1) * auVar83._20_4_;
                  auVar84._24_4_ = (uint)((byte)(uVar53 >> 6) & 1) * auVar83._24_4_;
                  auVar84._28_4_ = (uint)((byte)(uVar53 >> 7) & 1) * auVar83._28_4_;
                  auVar84._32_4_ = (uint)(bVar18 & 1) * auVar83._32_4_;
                  auVar84._36_4_ = (uint)(bVar18 >> 1 & 1) * auVar83._36_4_;
                  auVar84._40_4_ = (uint)(bVar18 >> 2 & 1) * auVar83._40_4_;
                  auVar84._44_4_ = (uint)(bVar18 >> 3 & 1) * auVar83._44_4_;
                  auVar84._48_4_ = (uint)(bVar18 >> 4 & 1) * auVar83._48_4_;
                  auVar84._52_4_ = (uint)(bVar18 >> 5 & 1) * auVar83._52_4_;
                  auVar84._56_4_ = (uint)(bVar18 >> 6 & 1) * auVar83._56_4_;
                  auVar84._60_4_ = (uint)(bVar18 >> 7) * auVar83._60_4_;
                  auVar82 = vfmadd231ps_avx512f(auVar84,auVar82,auVar78);
                  pauVar40 = (undefined1 (*) [64])(param_2 + uVar50 * 4);
                  auVar83 = *pauVar40;
                  bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
                  bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
                  bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
                  bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
                  bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
                  bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
                  bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
                  bVar11 = (bool)(bVar18 >> 1 & 1);
                  bVar12 = (bool)(bVar18 >> 2 & 1);
                  bVar13 = (bool)(bVar18 >> 3 & 1);
                  bVar14 = (bool)(bVar18 >> 4 & 1);
                  bVar15 = (bool)(bVar18 >> 5 & 1);
                  bVar16 = (bool)(bVar18 >> 6 & 1);
                  *(uint *)*pauVar40 =
                       (uint)(bVar19 & 1) * auVar82._0_4_ |
                       (uint)!(bool)(bVar19 & 1) * auVar83._0_4_;
                  *(uint *)(*pauVar40 + 4) =
                       (uint)bVar4 * auVar82._4_4_ | (uint)!bVar4 * auVar83._4_4_;
                  *(uint *)(*pauVar40 + 8) =
                       (uint)bVar5 * auVar82._8_4_ | (uint)!bVar5 * auVar83._8_4_;
                  *(uint *)(*pauVar40 + 0xc) =
                       (uint)bVar6 * auVar82._12_4_ | (uint)!bVar6 * auVar83._12_4_;
                  *(uint *)(*pauVar40 + 0x10) =
                       (uint)bVar7 * auVar82._16_4_ | (uint)!bVar7 * auVar83._16_4_;
                  *(uint *)(*pauVar40 + 0x14) =
                       (uint)bVar8 * auVar82._20_4_ | (uint)!bVar8 * auVar83._20_4_;
                  *(uint *)(*pauVar40 + 0x18) =
                       (uint)bVar9 * auVar82._24_4_ | (uint)!bVar9 * auVar83._24_4_;
                  *(uint *)(*pauVar40 + 0x1c) =
                       (uint)bVar10 * auVar82._28_4_ | (uint)!bVar10 * auVar83._28_4_;
                  *(uint *)(*pauVar40 + 0x20) =
                       (uint)(bVar18 & 1) * auVar82._32_4_ |
                       (uint)!(bool)(bVar18 & 1) * auVar83._32_4_;
                  *(uint *)(*pauVar40 + 0x24) =
                       (uint)bVar11 * auVar82._36_4_ | (uint)!bVar11 * auVar83._36_4_;
                  *(uint *)(*pauVar40 + 0x28) =
                       (uint)bVar12 * auVar82._40_4_ | (uint)!bVar12 * auVar83._40_4_;
                  *(uint *)(*pauVar40 + 0x2c) =
                       (uint)bVar13 * auVar82._44_4_ | (uint)!bVar13 * auVar83._44_4_;
                  *(uint *)(*pauVar40 + 0x30) =
                       (uint)bVar14 * auVar82._48_4_ | (uint)!bVar14 * auVar83._48_4_;
                  *(uint *)(*pauVar40 + 0x34) =
                       (uint)bVar15 * auVar82._52_4_ | (uint)!bVar15 * auVar83._52_4_;
                  *(uint *)(*pauVar40 + 0x38) =
                       (uint)bVar16 * auVar82._56_4_ | (uint)!bVar16 * auVar83._56_4_;
                  *(uint *)(*pauVar40 + 0x3c) =
                       (uint)(bVar18 >> 7) * auVar82._60_4_ |
                       (uint)!(bool)(bVar18 >> 7) * auVar83._60_4_;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar52);
                if (param_3 == uVar52) goto LAB_1409772de;
              }
            }
            if ((longlong)(uVar52 + 0x20) <= (longlong)uVar38) {
              lVar47 = uVar52 + lVar43;
              lVar49 = uVar52 + lVar45;
              auVar76 = vbroadcastss_avx512f(auVar56);
              auVar77 = vbroadcastss_avx512f(auVar54);
              do {
                auVar78 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar49 + 1 + (param_1 - lVar48))
                                            );
                auVar80 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar47 + -1 + param_1 + lVar48))
                ;
                auVar81 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar47 + -2 + param_1 + lVar48))
                ;
                auVar83 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar49 + 2 + (param_1 - lVar48))
                                            );
                auVar78 = vpaddw_avx512bw(auVar78,auVar80);
                auVar80 = vpaddw_avx512bw(auVar83,auVar81);
                auVar72 = vextractf64x4_avx512f(auVar78,1);
                auVar73 = vextractf64x4_avx512f(auVar80,1);
                auVar81 = vpmovzxwd_avx512f(auVar72);
                auVar83 = vpmovzxwd_avx512f(auVar73);
                auVar81 = vcvtdq2ps_avx512f(auVar81);
                auVar83 = vcvtdq2ps_avx512f(auVar83);
                auVar81 = vfmadd213ps_avx512f(auVar81,auVar77,
                                              *(undefined1 (*) [64])(param_2 + 0x40 + uVar52 * 4));
                auVar81 = vfmadd231ps_avx512f(auVar81,auVar83,auVar76);
                lVar47 = lVar47 + 0x20;
                *(undefined1 (*) [64])(param_2 + 0x40 + uVar52 * 4) = auVar81;
                lVar49 = lVar49 + 0x20;
                auVar78 = vpmovzxwd_avx512f(auVar78._0_32_);
                auVar78 = vcvtdq2ps_avx512f(auVar78);
                auVar78 = vfmadd213ps_avx512f(auVar78,auVar77,
                                              *(undefined1 (*) [64])(param_2 + uVar52 * 4));
                auVar80 = vpmovzxwd_avx512f(auVar80._0_32_);
                auVar80 = vcvtdq2ps_avx512f(auVar80);
                auVar78 = vfmadd231ps_avx512f(auVar78,auVar80,auVar76);
                *(undefined1 (*) [64])(param_2 + uVar52 * 4) = auVar78;
                uVar52 = uVar52 + 0x20;
              } while (uVar52 < uVar38);
            }
          }
          if (uVar38 + 1 <= param_3) {
            uVar52 = 0;
            lVar47 = uVar38 + lVar46;
            lVar49 = uVar38 + lVar37;
            auVar78 = vbroadcastss_avx512f(auVar56);
            lVar3 = param_2 + uVar38 * 4;
            auVar80 = vbroadcastss_avx512f(auVar54);
            auVar81 = vpbroadcastq_avx512f();
            auVar76 = auVar75;
            auVar77 = auVar74;
            do {
              uVar17 = vpcmpgtq_avx512f(auVar81,auVar77);
              bVar19 = (byte)uVar17;
              uVar17 = vpcmpgtq_avx512f(auVar81,auVar76);
              bVar18 = (byte)uVar17;
              auVar77 = vpaddq_avx512f(auVar77,auVar79);
              auVar76 = vpaddq_avx512f(auVar76,auVar79);
              uVar53 = CONCAT11(bVar18,bVar19);
              auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + 1));
              auVar63[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
              auVar63[0] = (bVar19 & 1) * auVar56[0];
              auVar63[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
              auVar63[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
              auVar63[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
              auVar63[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
              auVar63[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
              auVar63[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
              auVar63[8] = (bVar18 & 1) * auVar56[8];
              auVar63[9] = (bVar18 >> 1 & 1) * auVar56[9];
              auVar63[10] = (bVar18 >> 2 & 1) * auVar56[10];
              auVar63[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
              auVar63[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
              auVar63[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
              auVar63[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
              cVar20 = (char)bVar18 >> 7;
              auVar63[0xf] = -cVar20 * auVar56[0xf];
              auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar49 + -1));
              auVar56[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
              auVar56[0] = (bVar19 & 1) * auVar54[0];
              auVar56[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
              auVar56[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
              auVar56[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
              auVar56[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
              auVar56[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
              auVar56[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
              auVar56[8] = (bVar18 & 1) * auVar54[8];
              auVar56[9] = (bVar18 >> 1 & 1) * auVar54[9];
              auVar56[10] = (bVar18 >> 2 & 1) * auVar54[10];
              auVar56[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
              auVar56[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
              auVar56[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
              auVar56[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
              auVar56[0xf] = -cVar20 * auVar54[0xf];
              piVar2 = (int *)(lVar3 + uVar52 * 4);
              auVar82._4_4_ = (uint)((byte)(uVar53 >> 1) & 1) * piVar2[1];
              auVar82._0_4_ = (uint)(bVar19 & 1) * *piVar2;
              auVar82._8_4_ = (uint)((byte)(uVar53 >> 2) & 1) * piVar2[2];
              auVar82._12_4_ = (uint)((byte)(uVar53 >> 3) & 1) * piVar2[3];
              auVar82._16_4_ = (uint)((byte)(uVar53 >> 4) & 1) * piVar2[4];
              auVar82._20_4_ = (uint)((byte)(uVar53 >> 5) & 1) * piVar2[5];
              auVar82._24_4_ = (uint)((byte)(uVar53 >> 6) & 1) * piVar2[6];
              auVar82._28_4_ = (uint)((byte)(uVar53 >> 7) & 1) * piVar2[7];
              auVar82._32_4_ = (uint)(bVar18 & 1) * piVar2[8];
              auVar82._36_4_ = (uint)(bVar18 >> 1 & 1) * piVar2[9];
              auVar82._40_4_ = (uint)(bVar18 >> 2 & 1) * piVar2[10];
              auVar82._44_4_ = (uint)(bVar18 >> 3 & 1) * piVar2[0xb];
              auVar82._48_4_ = (uint)(bVar18 >> 4 & 1) * piVar2[0xc];
              auVar82._52_4_ = (uint)(bVar18 >> 5 & 1) * piVar2[0xd];
              auVar82._56_4_ = (uint)(bVar18 >> 6 & 1) * piVar2[0xe];
              auVar82._60_4_ = (uint)(bVar18 >> 7) * piVar2[0xf];
              auVar72 = vpmovzxbw_avx512vl(auVar63);
              auVar73 = vpmovzxbw_avx512vl(auVar56);
              auVar72 = vpaddw_avx512vl(auVar72,auVar73);
              auVar83 = vpmovzxwd_avx512f(auVar72);
              auVar83 = vcvtdq2ps_avx512f(auVar83);
              auVar83 = vfmadd231ps_avx512f(auVar82,auVar83,auVar80);
              puVar1 = (uint *)(lVar3 + uVar52 * 4);
              bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
              bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
              bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
              bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
              bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
              bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
              bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
              bVar11 = (bool)(bVar18 >> 1 & 1);
              bVar12 = (bool)(bVar18 >> 2 & 1);
              bVar13 = (bool)(bVar18 >> 3 & 1);
              bVar14 = (bool)(bVar18 >> 4 & 1);
              bVar15 = (bool)(bVar18 >> 5 & 1);
              bVar16 = (bool)(bVar18 >> 6 & 1);
              *puVar1 = (uint)(bVar19 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar19 & 1) * *puVar1;
              puVar1[1] = (uint)bVar4 * auVar83._4_4_ | (uint)!bVar4 * puVar1[1];
              puVar1[2] = (uint)bVar5 * auVar83._8_4_ | (uint)!bVar5 * puVar1[2];
              puVar1[3] = (uint)bVar6 * auVar83._12_4_ | (uint)!bVar6 * puVar1[3];
              puVar1[4] = (uint)bVar7 * auVar83._16_4_ | (uint)!bVar7 * puVar1[4];
              puVar1[5] = (uint)bVar8 * auVar83._20_4_ | (uint)!bVar8 * puVar1[5];
              puVar1[6] = (uint)bVar9 * auVar83._24_4_ | (uint)!bVar9 * puVar1[6];
              puVar1[7] = (uint)bVar10 * auVar83._28_4_ | (uint)!bVar10 * puVar1[7];
              puVar1[8] = (uint)(bVar18 & 1) * auVar83._32_4_ |
                          (uint)!(bool)(bVar18 & 1) * puVar1[8];
              puVar1[9] = (uint)bVar11 * auVar83._36_4_ | (uint)!bVar11 * puVar1[9];
              puVar1[10] = (uint)bVar12 * auVar83._40_4_ | (uint)!bVar12 * puVar1[10];
              puVar1[0xb] = (uint)bVar13 * auVar83._44_4_ | (uint)!bVar13 * puVar1[0xb];
              puVar1[0xc] = (uint)bVar14 * auVar83._48_4_ | (uint)!bVar14 * puVar1[0xc];
              puVar1[0xd] = (uint)bVar15 * auVar83._52_4_ | (uint)!bVar15 * puVar1[0xd];
              puVar1[0xe] = (uint)bVar16 * auVar83._56_4_ | (uint)!bVar16 * puVar1[0xe];
              puVar1[0xf] = (uint)(bVar18 >> 7) * auVar83._60_4_ |
                            (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
              auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar47 + 2));
              auVar64[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
              auVar64[0] = (bVar19 & 1) * auVar56[0];
              auVar64[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
              auVar64[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
              auVar64[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
              auVar64[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
              auVar64[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
              auVar64[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
              auVar64[8] = (bVar18 & 1) * auVar56[8];
              auVar64[9] = (bVar18 >> 1 & 1) * auVar56[9];
              auVar64[10] = (bVar18 >> 2 & 1) * auVar56[10];
              auVar64[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
              auVar64[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
              auVar64[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
              auVar64[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
              auVar64[0xf] = -cVar20 * auVar56[0xf];
              lVar47 = lVar47 + 0x10;
              auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar49 + -2));
              auVar65[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
              auVar65[0] = (bVar19 & 1) * auVar56[0];
              auVar65[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
              auVar65[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
              auVar65[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
              auVar65[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
              auVar65[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
              auVar65[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
              auVar65[8] = (bVar18 & 1) * auVar56[8];
              auVar65[9] = (bVar18 >> 1 & 1) * auVar56[9];
              auVar65[10] = (bVar18 >> 2 & 1) * auVar56[10];
              auVar65[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
              auVar65[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
              auVar65[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
              auVar65[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
              auVar65[0xf] = -cVar20 * auVar56[0xf];
              auVar72 = vpmovzxbw_avx512vl(auVar64);
              lVar49 = lVar49 + 0x10;
              auVar73 = vpmovzxbw_avx512vl(auVar65);
              auVar72 = vpaddw_avx512vl(auVar72,auVar73);
              auVar82 = vpmovzxwd_avx512f(auVar72);
              auVar82 = vcvtdq2ps_avx512f(auVar82);
              auVar85._4_4_ = (uint)((byte)(uVar53 >> 1) & 1) * auVar83._4_4_;
              auVar85._0_4_ = (uint)(bVar19 & 1) * auVar83._0_4_;
              auVar85._8_4_ = (uint)((byte)(uVar53 >> 2) & 1) * auVar83._8_4_;
              auVar85._12_4_ = (uint)((byte)(uVar53 >> 3) & 1) * auVar83._12_4_;
              auVar85._16_4_ = (uint)((byte)(uVar53 >> 4) & 1) * auVar83._16_4_;
              auVar85._20_4_ = (uint)((byte)(uVar53 >> 5) & 1) * auVar83._20_4_;
              auVar85._24_4_ = (uint)((byte)(uVar53 >> 6) & 1) * auVar83._24_4_;
              auVar85._28_4_ = (uint)((byte)(uVar53 >> 7) & 1) * auVar83._28_4_;
              auVar85._32_4_ = (uint)(bVar18 & 1) * auVar83._32_4_;
              auVar85._36_4_ = (uint)(bVar18 >> 1 & 1) * auVar83._36_4_;
              auVar85._40_4_ = (uint)(bVar18 >> 2 & 1) * auVar83._40_4_;
              auVar85._44_4_ = (uint)(bVar18 >> 3 & 1) * auVar83._44_4_;
              auVar85._48_4_ = (uint)(bVar18 >> 4 & 1) * auVar83._48_4_;
              auVar85._52_4_ = (uint)(bVar18 >> 5 & 1) * auVar83._52_4_;
              auVar85._56_4_ = (uint)(bVar18 >> 6 & 1) * auVar83._56_4_;
              auVar85._60_4_ = (uint)(bVar18 >> 7) * auVar83._60_4_;
              auVar82 = vfmadd231ps_avx512f(auVar85,auVar82,auVar78);
              pauVar40 = (undefined1 (*) [64])(lVar3 + uVar52 * 4);
              auVar83 = *pauVar40;
              bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
              bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
              bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
              bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
              bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
              bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
              bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
              bVar11 = (bool)(bVar18 >> 1 & 1);
              bVar12 = (bool)(bVar18 >> 2 & 1);
              bVar13 = (bool)(bVar18 >> 3 & 1);
              bVar14 = (bool)(bVar18 >> 4 & 1);
              bVar15 = (bool)(bVar18 >> 5 & 1);
              bVar16 = (bool)(bVar18 >> 6 & 1);
              *(uint *)*pauVar40 =
                   (uint)(bVar19 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar19 & 1) * auVar83._0_4_;
              *(uint *)(*pauVar40 + 4) = (uint)bVar4 * auVar82._4_4_ | (uint)!bVar4 * auVar83._4_4_;
              *(uint *)(*pauVar40 + 8) = (uint)bVar5 * auVar82._8_4_ | (uint)!bVar5 * auVar83._8_4_;
              *(uint *)(*pauVar40 + 0xc) =
                   (uint)bVar6 * auVar82._12_4_ | (uint)!bVar6 * auVar83._12_4_;
              *(uint *)(*pauVar40 + 0x10) =
                   (uint)bVar7 * auVar82._16_4_ | (uint)!bVar7 * auVar83._16_4_;
              *(uint *)(*pauVar40 + 0x14) =
                   (uint)bVar8 * auVar82._20_4_ | (uint)!bVar8 * auVar83._20_4_;
              *(uint *)(*pauVar40 + 0x18) =
                   (uint)bVar9 * auVar82._24_4_ | (uint)!bVar9 * auVar83._24_4_;
              *(uint *)(*pauVar40 + 0x1c) =
                   (uint)bVar10 * auVar82._28_4_ | (uint)!bVar10 * auVar83._28_4_;
              *(uint *)(*pauVar40 + 0x20) =
                   (uint)(bVar18 & 1) * auVar82._32_4_ | (uint)!(bool)(bVar18 & 1) * auVar83._32_4_;
              *(uint *)(*pauVar40 + 0x24) =
                   (uint)bVar11 * auVar82._36_4_ | (uint)!bVar11 * auVar83._36_4_;
              *(uint *)(*pauVar40 + 0x28) =
                   (uint)bVar12 * auVar82._40_4_ | (uint)!bVar12 * auVar83._40_4_;
              *(uint *)(*pauVar40 + 0x2c) =
                   (uint)bVar13 * auVar82._44_4_ | (uint)!bVar13 * auVar83._44_4_;
              *(uint *)(*pauVar40 + 0x30) =
                   (uint)bVar14 * auVar82._48_4_ | (uint)!bVar14 * auVar83._48_4_;
              *(uint *)(*pauVar40 + 0x34) =
                   (uint)bVar15 * auVar82._52_4_ | (uint)!bVar15 * auVar83._52_4_;
              *(uint *)(*pauVar40 + 0x38) =
                   (uint)bVar16 * auVar82._56_4_ | (uint)!bVar16 * auVar83._56_4_;
              *(uint *)(*pauVar40 + 0x3c) =
                   (uint)(bVar18 >> 7) * auVar82._60_4_ |
                   (uint)!(bool)(bVar18 >> 7) * auVar83._60_4_;
              uVar52 = uVar52 + 0x10;
            } while (uVar52 < param_3 - uVar38);
          }
        }
LAB_1409772de:
        uVar38 = uVar39 + 1;
        lVar37 = lVar37 + -2;
        lVar43 = lVar43 + -2;
        lVar46 = lVar46 + 2;
        lVar45 = lVar45 + 2;
      } while (uVar38 < uVar36);
      lVar37 = uVar39 + 2 + uVar38;
    }
    auVar79 = _DAT_14308dc40;
    if (lVar48 != lVar37) {
      lVar42 = lVar37 + lVar51;
      if (0 < (longlong)param_3) {
        auVar56 = ZEXT416(param_4[lVar37]);
        if ((longlong)param_3 < 0x20) {
          uVar36 = 0;
        }
        else {
          if ((longlong)param_3 < 0x5a) {
            uVar38 = 0;
            uVar36 = param_3 & 0xffffffffffffffe0;
          }
          else {
            uVar38 = param_2 & 0x3f;
            if ((param_2 & 3) == 0) {
              if ((uVar38 != 0) &&
                 (uVar38 = 0x40 - uVar38 >> 2, (longlong)param_3 < (longlong)uVar38)) {
                uVar38 = param_3;
              }
            }
            else {
              uVar38 = 0;
            }
            uVar36 = param_3 - (param_3 - uVar38 & 0x1f);
            if (uVar38 != 0) {
              auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
              auVar76 = vpbroadcastq_avx512f();
              auVar77 = vbroadcastss_avx512f(auVar56);
              uVar44 = 0;
              do {
                uVar17 = vpcmpgtq_avx512f(auVar76,auVar74);
                bVar19 = (byte)uVar17;
                uVar17 = vpcmpgtq_avx512f(auVar76,auVar75);
                bVar18 = (byte)uVar17;
                auVar74 = vpaddq_avx512f(auVar74,auVar79);
                auVar75 = vpaddq_avx512f(auVar75,auVar79);
                uVar53 = CONCAT11(bVar18,bVar19);
                auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar44 + lVar51 + lVar37));
                auVar66[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
                auVar66[0] = (bVar19 & 1) * auVar54[0];
                auVar66[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
                auVar66[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
                auVar66[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
                auVar66[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
                auVar66[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
                auVar66[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
                auVar66[8] = (bVar18 & 1) * auVar54[8];
                auVar66[9] = (bVar18 >> 1 & 1) * auVar54[9];
                auVar66[10] = (bVar18 >> 2 & 1) * auVar54[10];
                auVar66[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
                auVar66[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
                auVar66[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
                auVar66[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
                auVar66[0xf] = -((char)bVar18 >> 7) * auVar54[0xf];
                auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                             (uVar44 + ((lVar48 + param_1) - lVar37)));
                auVar67[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
                auVar67[0] = (bVar19 & 1) * auVar54[0];
                auVar67[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
                auVar67[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
                auVar67[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
                auVar67[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
                auVar67[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
                auVar67[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
                auVar67[8] = (bVar18 & 1) * auVar54[8];
                auVar67[9] = (bVar18 >> 1 & 1) * auVar54[9];
                auVar67[10] = (bVar18 >> 2 & 1) * auVar54[10];
                auVar67[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
                auVar67[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
                auVar67[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
                auVar67[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
                auVar67[0xf] = -((char)bVar18 >> 7) * auVar54[0xf];
                auVar72 = vpmovzxbw_avx512vl(auVar66);
                auVar73 = vpmovzxbw_avx512vl(auVar67);
                auVar72 = vpaddw_avx512vl(auVar72,auVar73);
                auVar78 = vpmovzxwd_avx512f(auVar72);
                auVar78 = vcvtdq2ps_avx512f(auVar78);
                auVar78 = vfmadd213ps_avx512f(auVar78,auVar77,
                                              *(undefined1 (*) [64])(param_2 + uVar44 * 4));
                puVar1 = (uint *)(param_2 + uVar44 * 4);
                bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
                bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
                bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
                bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
                bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
                bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
                bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
                bVar11 = (bool)(bVar18 >> 1 & 1);
                bVar12 = (bool)(bVar18 >> 2 & 1);
                bVar13 = (bool)(bVar18 >> 3 & 1);
                bVar14 = (bool)(bVar18 >> 4 & 1);
                bVar15 = (bool)(bVar18 >> 5 & 1);
                bVar16 = (bool)(bVar18 >> 6 & 1);
                *puVar1 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar78._0_4_ |
                          (uint)!(bool)(bVar19 & 1) * *puVar1;
                puVar1[1] = (uint)bVar4 * (uint)((byte)(uVar53 >> 1) & 1) * auVar78._4_4_ |
                            (uint)!bVar4 * puVar1[1];
                puVar1[2] = (uint)bVar5 * (uint)((byte)(uVar53 >> 2) & 1) * auVar78._8_4_ |
                            (uint)!bVar5 * puVar1[2];
                puVar1[3] = (uint)bVar6 * (uint)((byte)(uVar53 >> 3) & 1) * auVar78._12_4_ |
                            (uint)!bVar6 * puVar1[3];
                puVar1[4] = (uint)bVar7 * (uint)((byte)(uVar53 >> 4) & 1) * auVar78._16_4_ |
                            (uint)!bVar7 * puVar1[4];
                puVar1[5] = (uint)bVar8 * (uint)((byte)(uVar53 >> 5) & 1) * auVar78._20_4_ |
                            (uint)!bVar8 * puVar1[5];
                puVar1[6] = (uint)bVar9 * (uint)((byte)(uVar53 >> 6) & 1) * auVar78._24_4_ |
                            (uint)!bVar9 * puVar1[6];
                puVar1[7] = (uint)bVar10 * (uint)((byte)(uVar53 >> 7) & 1) * auVar78._28_4_ |
                            (uint)!bVar10 * puVar1[7];
                puVar1[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar78._32_4_ |
                            (uint)!(bool)(bVar18 & 1) * puVar1[8];
                puVar1[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar78._36_4_ |
                            (uint)!bVar11 * puVar1[9];
                puVar1[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar78._40_4_ |
                             (uint)!bVar12 * puVar1[10];
                puVar1[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar78._44_4_ |
                              (uint)!bVar13 * puVar1[0xb];
                puVar1[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar78._48_4_ |
                              (uint)!bVar14 * puVar1[0xc];
                puVar1[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar78._52_4_ |
                              (uint)!bVar15 * puVar1[0xd];
                puVar1[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar78._56_4_ |
                              (uint)!bVar16 * puVar1[0xe];
                puVar1[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar78._60_4_ |
                              (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
                uVar44 = uVar44 + 0x10;
              } while (uVar44 < uVar38);
              if (param_3 == uVar38) goto LAB_1409775a6;
            }
          }
          if ((longlong)(uVar38 + 0x20) <= (longlong)uVar36) {
            auVar79 = vbroadcastss_avx512f(auVar56);
            do {
              auVar74 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(lVar51 + lVar37 + uVar38));
              auVar75 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])
                                            (((lVar48 + param_1) - lVar37) + uVar38));
              auVar74 = vpaddw_avx512bw(auVar74,auVar75);
              auVar72 = vextractf64x4_avx512f(auVar74,1);
              auVar75 = vpmovzxwd_avx512f(auVar72);
              auVar75 = vcvtdq2ps_avx512f(auVar75);
              auVar75 = vfmadd213ps_avx512f(auVar75,auVar79,
                                            *(undefined1 (*) [64])(param_2 + 0x40 + uVar38 * 4));
              *(undefined1 (*) [64])(param_2 + 0x40 + uVar38 * 4) = auVar75;
              auVar74 = vpmovzxwd_avx512f(auVar74._0_32_);
              auVar74 = vcvtdq2ps_avx512f(auVar74);
              auVar74 = vfmadd213ps_avx512f(auVar74,auVar79,
                                            *(undefined1 (*) [64])(param_2 + uVar38 * 4));
              *(undefined1 (*) [64])(param_2 + uVar38 * 4) = auVar74;
              uVar38 = uVar38 + 0x20;
            } while (uVar38 < uVar36);
          }
        }
        auVar79 = _DAT_14308dc40;
        if (uVar36 + 1 <= param_3) {
          uVar38 = 0;
          pauVar40 = (undefined1 (*) [64])(param_2 + uVar36 * 4);
          auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar76 = vbroadcastss_avx512f(auVar56);
          auVar77 = vpbroadcastq_avx512f();
          do {
            uVar17 = vpcmpgtq_avx512f(auVar77,auVar74);
            bVar19 = (byte)uVar17;
            uVar17 = vpcmpgtq_avx512f(auVar77,auVar75);
            bVar18 = (byte)uVar17;
            auVar74 = vpaddq_avx512f(auVar74,auVar79);
            auVar75 = vpaddq_avx512f(auVar75,auVar79);
            uVar53 = CONCAT11(bVar18,bVar19);
            auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                         (uVar38 + (param_1 - (lVar48 - lVar37)) + uVar36));
            auVar68[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
            auVar68[0] = (bVar19 & 1) * auVar56[0];
            auVar68[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
            auVar68[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
            auVar68[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
            auVar68[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
            auVar68[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
            auVar68[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
            auVar68[8] = (bVar18 & 1) * auVar56[8];
            auVar68[9] = (bVar18 >> 1 & 1) * auVar56[9];
            auVar68[10] = (bVar18 >> 2 & 1) * auVar56[10];
            auVar68[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
            auVar68[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
            auVar68[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
            auVar68[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
            auVar68[0xf] = -((char)bVar18 >> 7) * auVar56[0xf];
            auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])
                                         (uVar38 + uVar36 + param_1 + (lVar48 - lVar37)));
            auVar69[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
            auVar69[0] = (bVar19 & 1) * auVar56[0];
            auVar69[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
            auVar69[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
            auVar69[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
            auVar69[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
            auVar69[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
            auVar69[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
            auVar69[8] = (bVar18 & 1) * auVar56[8];
            auVar69[9] = (bVar18 >> 1 & 1) * auVar56[9];
            auVar69[10] = (bVar18 >> 2 & 1) * auVar56[10];
            auVar69[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
            auVar69[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
            auVar69[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
            auVar69[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
            auVar69[0xf] = -((char)bVar18 >> 7) * auVar56[0xf];
            auVar72 = vpmovzxbw_avx512vl(auVar68);
            uVar38 = uVar38 + 0x10;
            auVar73 = vpmovzxbw_avx512vl(auVar69);
            auVar72 = vpaddw_avx512vl(auVar72,auVar73);
            auVar78 = vpmovzxwd_avx512f(auVar72);
            auVar78 = vcvtdq2ps_avx512f(auVar78);
            auVar78 = vfmadd213ps_avx512f(auVar78,auVar76,*pauVar40);
            iVar21 = *(int *)(*pauVar40 + 4);
            iVar22 = *(int *)(*pauVar40 + 8);
            iVar23 = *(int *)(*pauVar40 + 0xc);
            iVar24 = *(int *)(*pauVar40 + 0x10);
            iVar25 = *(int *)(*pauVar40 + 0x14);
            iVar26 = *(int *)(*pauVar40 + 0x18);
            iVar27 = *(int *)(*pauVar40 + 0x1c);
            iVar28 = *(int *)(*pauVar40 + 0x20);
            iVar29 = *(int *)(*pauVar40 + 0x24);
            iVar30 = *(int *)(*pauVar40 + 0x28);
            iVar31 = *(int *)(*pauVar40 + 0x2c);
            iVar32 = *(int *)(*pauVar40 + 0x30);
            iVar33 = *(int *)(*pauVar40 + 0x34);
            iVar34 = *(int *)(*pauVar40 + 0x38);
            iVar35 = *(int *)(*pauVar40 + 0x3c);
            bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
            bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
            bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
            bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
            bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
            bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
            bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
            bVar11 = (bool)(bVar18 >> 1 & 1);
            bVar12 = (bool)(bVar18 >> 2 & 1);
            bVar13 = (bool)(bVar18 >> 3 & 1);
            bVar14 = (bool)(bVar18 >> 4 & 1);
            bVar15 = (bool)(bVar18 >> 5 & 1);
            bVar16 = (bool)(bVar18 >> 6 & 1);
            *(uint *)*pauVar40 =
                 (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar78._0_4_ |
                 (uint)!(bool)(bVar19 & 1) * *(int *)*pauVar40;
            *(uint *)(*pauVar40 + 4) =
                 (uint)bVar4 * (uint)((byte)(uVar53 >> 1) & 1) * auVar78._4_4_ |
                 (uint)!bVar4 * iVar21;
            *(uint *)(*pauVar40 + 8) =
                 (uint)bVar5 * (uint)((byte)(uVar53 >> 2) & 1) * auVar78._8_4_ |
                 (uint)!bVar5 * iVar22;
            *(uint *)(*pauVar40 + 0xc) =
                 (uint)bVar6 * (uint)((byte)(uVar53 >> 3) & 1) * auVar78._12_4_ |
                 (uint)!bVar6 * iVar23;
            *(uint *)(*pauVar40 + 0x10) =
                 (uint)bVar7 * (uint)((byte)(uVar53 >> 4) & 1) * auVar78._16_4_ |
                 (uint)!bVar7 * iVar24;
            *(uint *)(*pauVar40 + 0x14) =
                 (uint)bVar8 * (uint)((byte)(uVar53 >> 5) & 1) * auVar78._20_4_ |
                 (uint)!bVar8 * iVar25;
            *(uint *)(*pauVar40 + 0x18) =
                 (uint)bVar9 * (uint)((byte)(uVar53 >> 6) & 1) * auVar78._24_4_ |
                 (uint)!bVar9 * iVar26;
            *(uint *)(*pauVar40 + 0x1c) =
                 (uint)bVar10 * (uint)((byte)(uVar53 >> 7) & 1) * auVar78._28_4_ |
                 (uint)!bVar10 * iVar27;
            *(uint *)(*pauVar40 + 0x20) =
                 (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar78._32_4_ |
                 (uint)!(bool)(bVar18 & 1) * iVar28;
            *(uint *)(*pauVar40 + 0x24) =
                 (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar78._36_4_ | (uint)!bVar11 * iVar29;
            *(uint *)(*pauVar40 + 0x28) =
                 (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar78._40_4_ | (uint)!bVar12 * iVar30;
            *(uint *)(*pauVar40 + 0x2c) =
                 (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar78._44_4_ | (uint)!bVar13 * iVar31;
            *(uint *)(*pauVar40 + 0x30) =
                 (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar78._48_4_ | (uint)!bVar14 * iVar32;
            *(uint *)(*pauVar40 + 0x34) =
                 (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar78._52_4_ | (uint)!bVar15 * iVar33;
            *(uint *)(*pauVar40 + 0x38) =
                 (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar78._56_4_ | (uint)!bVar16 * iVar34;
            *(uint *)(*pauVar40 + 0x3c) =
                 (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar78._60_4_ |
                 (uint)!(bool)(bVar18 >> 7) * iVar35;
            pauVar40 = pauVar40 + 1;
          } while (uVar38 < param_3 - uVar36);
        }
      }
    }
  }
LAB_1409775a6:
  auVar79 = _DAT_14308dc40;
  if (0 < (longlong)param_3) {
    auVar56 = ZEXT416(param_4[lVar48]);
    if ((longlong)param_3 < 0x20) {
      uVar36 = 0;
    }
    else {
      if ((longlong)param_3 < 0x3a) {
        uVar38 = 0;
        uVar36 = param_3 & 0xffffffffffffffe0;
      }
      else {
        uVar38 = param_2 & 0x3f;
        if ((param_2 & 3) == 0) {
          if ((uVar38 != 0) && (uVar38 = 0x40 - uVar38 >> 2, (longlong)param_3 < (longlong)uVar38))
          {
            uVar38 = param_3;
          }
        }
        else {
          uVar38 = 0;
        }
        uVar36 = param_3 - (param_3 - uVar38 & 0x1f);
        if (uVar38 != 0) {
          uVar44 = 0;
          auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
          auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
          auVar76 = vpbroadcastq_avx512f();
          auVar77 = vbroadcastss_avx512f(auVar56);
          do {
            uVar17 = vpcmpgtq_avx512f(auVar76,auVar74);
            bVar19 = (byte)uVar17;
            uVar17 = vpcmpgtq_avx512f(auVar76,auVar75);
            bVar18 = (byte)uVar17;
            auVar74 = vpaddq_avx512f(auVar74,auVar79);
            auVar75 = vpaddq_avx512f(auVar75,auVar79);
            uVar53 = CONCAT11(bVar18,bVar19);
            auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar44 + 1 + lVar42));
            auVar70[1] = ((byte)(uVar53 >> 1) & 1) * auVar54[1];
            auVar70[0] = (bVar19 & 1) * auVar54[0];
            auVar70[2] = ((byte)(uVar53 >> 2) & 1) * auVar54[2];
            auVar70[3] = ((byte)(uVar53 >> 3) & 1) * auVar54[3];
            auVar70[4] = ((byte)(uVar53 >> 4) & 1) * auVar54[4];
            auVar70[5] = ((byte)(uVar53 >> 5) & 1) * auVar54[5];
            auVar70[6] = ((byte)(uVar53 >> 6) & 1) * auVar54[6];
            auVar70[7] = ((byte)(uVar53 >> 7) & 1) * auVar54[7];
            auVar70[8] = (bVar18 & 1) * auVar54[8];
            auVar70[9] = (bVar18 >> 1 & 1) * auVar54[9];
            auVar70[10] = (bVar18 >> 2 & 1) * auVar54[10];
            auVar70[0xb] = (bVar18 >> 3 & 1) * auVar54[0xb];
            auVar70[0xc] = (bVar18 >> 4 & 1) * auVar54[0xc];
            auVar70[0xd] = (bVar18 >> 5 & 1) * auVar54[0xd];
            auVar70[0xe] = (bVar18 >> 6 & 1) * auVar54[0xe];
            auVar70[0xf] = -((char)bVar18 >> 7) * auVar54[0xf];
            auVar78 = vpmovzxbd_avx512f(auVar70);
            auVar78 = vcvtdq2ps_avx512f(auVar78);
            auVar78 = vfmadd213ps_avx512f(auVar78,auVar77,
                                          *(undefined1 (*) [64])(param_2 + uVar44 * 4));
            puVar1 = (uint *)(param_2 + uVar44 * 4);
            bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
            bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
            bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
            bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
            bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
            bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
            bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
            bVar11 = (bool)(bVar18 >> 1 & 1);
            bVar12 = (bool)(bVar18 >> 2 & 1);
            bVar13 = (bool)(bVar18 >> 3 & 1);
            bVar14 = (bool)(bVar18 >> 4 & 1);
            bVar15 = (bool)(bVar18 >> 5 & 1);
            bVar16 = (bool)(bVar18 >> 6 & 1);
            *puVar1 = (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar78._0_4_ |
                      (uint)!(bool)(bVar19 & 1) * *puVar1;
            puVar1[1] = (uint)bVar4 * (uint)((byte)(uVar53 >> 1) & 1) * auVar78._4_4_ |
                        (uint)!bVar4 * puVar1[1];
            puVar1[2] = (uint)bVar5 * (uint)((byte)(uVar53 >> 2) & 1) * auVar78._8_4_ |
                        (uint)!bVar5 * puVar1[2];
            puVar1[3] = (uint)bVar6 * (uint)((byte)(uVar53 >> 3) & 1) * auVar78._12_4_ |
                        (uint)!bVar6 * puVar1[3];
            puVar1[4] = (uint)bVar7 * (uint)((byte)(uVar53 >> 4) & 1) * auVar78._16_4_ |
                        (uint)!bVar7 * puVar1[4];
            puVar1[5] = (uint)bVar8 * (uint)((byte)(uVar53 >> 5) & 1) * auVar78._20_4_ |
                        (uint)!bVar8 * puVar1[5];
            puVar1[6] = (uint)bVar9 * (uint)((byte)(uVar53 >> 6) & 1) * auVar78._24_4_ |
                        (uint)!bVar9 * puVar1[6];
            puVar1[7] = (uint)bVar10 * (uint)((byte)(uVar53 >> 7) & 1) * auVar78._28_4_ |
                        (uint)!bVar10 * puVar1[7];
            puVar1[8] = (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar78._32_4_ |
                        (uint)!(bool)(bVar18 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar78._36_4_ |
                        (uint)!bVar11 * puVar1[9];
            puVar1[10] = (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar78._40_4_ |
                         (uint)!bVar12 * puVar1[10];
            puVar1[0xb] = (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar78._44_4_ |
                          (uint)!bVar13 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar78._48_4_ |
                          (uint)!bVar14 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar78._52_4_ |
                          (uint)!bVar15 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar78._56_4_ |
                          (uint)!bVar16 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar78._60_4_ |
                          (uint)!(bool)(bVar18 >> 7) * puVar1[0xf];
            uVar44 = uVar44 + 0x10;
          } while (uVar44 < uVar38);
          if (param_3 == uVar38) {
            return;
          }
        }
      }
      if ((longlong)(uVar38 + 0x20) <= (longlong)uVar36) {
        auVar79 = vbroadcastss_avx512f(auVar56);
        do {
          auVar72 = *(undefined1 (*) [32])(uVar38 + 1 + lVar42);
          auVar74 = vpmovzxbd_avx512f(auVar72._0_16_);
          auVar75 = vpmovzxbd_avx512f(auVar72._16_16_);
          auVar74 = vcvtdq2ps_avx512f(auVar74);
          auVar75 = vcvtdq2ps_avx512f(auVar75);
          auVar74 = vfmadd213ps_avx512f(auVar74,auVar79,*(undefined1 (*) [64])(param_2 + uVar38 * 4)
                                       );
          auVar75 = vfmadd213ps_avx512f(auVar75,auVar79,
                                        *(undefined1 (*) [64])(param_2 + 0x40 + uVar38 * 4));
          *(undefined1 (*) [64])(param_2 + uVar38 * 4) = auVar74;
          *(undefined1 (*) [64])(param_2 + 0x40 + uVar38 * 4) = auVar75;
          uVar38 = uVar38 + 0x20;
        } while (uVar38 < uVar36);
      }
    }
    auVar79 = _DAT_14308dc40;
    if (uVar36 + 1 <= param_3) {
      uVar38 = 0;
      pauVar40 = (undefined1 (*) [64])(param_2 + uVar36 * 4);
      auVar74 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar75 = vmovdqu32_avx512f(_DAT_14308dcc0);
      auVar76 = vbroadcastss_avx512f(auVar56);
      auVar77 = vpbroadcastq_avx512f();
      do {
        uVar17 = vpcmpgtq_avx512f(auVar77,auVar74);
        bVar19 = (byte)uVar17;
        uVar17 = vpcmpgtq_avx512f(auVar77,auVar75);
        bVar18 = (byte)uVar17;
        auVar74 = vpaddq_avx512f(auVar74,auVar79);
        auVar75 = vpaddq_avx512f(auVar75,auVar79);
        uVar53 = CONCAT11(bVar18,bVar19);
        auVar56 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar38 + 1 + lVar42 + uVar36));
        auVar71[1] = ((byte)(uVar53 >> 1) & 1) * auVar56[1];
        auVar71[0] = (bVar19 & 1) * auVar56[0];
        auVar71[2] = ((byte)(uVar53 >> 2) & 1) * auVar56[2];
        auVar71[3] = ((byte)(uVar53 >> 3) & 1) * auVar56[3];
        auVar71[4] = ((byte)(uVar53 >> 4) & 1) * auVar56[4];
        auVar71[5] = ((byte)(uVar53 >> 5) & 1) * auVar56[5];
        auVar71[6] = ((byte)(uVar53 >> 6) & 1) * auVar56[6];
        auVar71[7] = ((byte)(uVar53 >> 7) & 1) * auVar56[7];
        auVar71[8] = (bVar18 & 1) * auVar56[8];
        auVar71[9] = (bVar18 >> 1 & 1) * auVar56[9];
        auVar71[10] = (bVar18 >> 2 & 1) * auVar56[10];
        auVar71[0xb] = (bVar18 >> 3 & 1) * auVar56[0xb];
        auVar71[0xc] = (bVar18 >> 4 & 1) * auVar56[0xc];
        auVar71[0xd] = (bVar18 >> 5 & 1) * auVar56[0xd];
        auVar71[0xe] = (bVar18 >> 6 & 1) * auVar56[0xe];
        auVar71[0xf] = -((char)bVar18 >> 7) * auVar56[0xf];
        uVar38 = uVar38 + 0x10;
        auVar78 = vpmovzxbd_avx512f(auVar71);
        auVar78 = vcvtdq2ps_avx512f(auVar78);
        auVar78 = vfmadd213ps_avx512f(auVar78,auVar76,*pauVar40);
        iVar21 = *(int *)(*pauVar40 + 4);
        iVar22 = *(int *)(*pauVar40 + 8);
        iVar23 = *(int *)(*pauVar40 + 0xc);
        iVar24 = *(int *)(*pauVar40 + 0x10);
        iVar25 = *(int *)(*pauVar40 + 0x14);
        iVar26 = *(int *)(*pauVar40 + 0x18);
        iVar27 = *(int *)(*pauVar40 + 0x1c);
        iVar28 = *(int *)(*pauVar40 + 0x20);
        iVar29 = *(int *)(*pauVar40 + 0x24);
        iVar30 = *(int *)(*pauVar40 + 0x28);
        iVar31 = *(int *)(*pauVar40 + 0x2c);
        iVar32 = *(int *)(*pauVar40 + 0x30);
        iVar33 = *(int *)(*pauVar40 + 0x34);
        iVar34 = *(int *)(*pauVar40 + 0x38);
        iVar35 = *(int *)(*pauVar40 + 0x3c);
        bVar4 = (bool)((byte)(uVar53 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar53 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar53 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar53 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar53 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar53 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar53 >> 7) & 1);
        bVar11 = (bool)(bVar18 >> 1 & 1);
        bVar12 = (bool)(bVar18 >> 2 & 1);
        bVar13 = (bool)(bVar18 >> 3 & 1);
        bVar14 = (bool)(bVar18 >> 4 & 1);
        bVar15 = (bool)(bVar18 >> 5 & 1);
        bVar16 = (bool)(bVar18 >> 6 & 1);
        *(uint *)*pauVar40 =
             (uint)(bVar19 & 1) * (uint)(bVar19 & 1) * auVar78._0_4_ |
             (uint)!(bool)(bVar19 & 1) * *(int *)*pauVar40;
        *(uint *)(*pauVar40 + 4) =
             (uint)bVar4 * (uint)((byte)(uVar53 >> 1) & 1) * auVar78._4_4_ | (uint)!bVar4 * iVar21;
        *(uint *)(*pauVar40 + 8) =
             (uint)bVar5 * (uint)((byte)(uVar53 >> 2) & 1) * auVar78._8_4_ | (uint)!bVar5 * iVar22;
        *(uint *)(*pauVar40 + 0xc) =
             (uint)bVar6 * (uint)((byte)(uVar53 >> 3) & 1) * auVar78._12_4_ | (uint)!bVar6 * iVar23;
        *(uint *)(*pauVar40 + 0x10) =
             (uint)bVar7 * (uint)((byte)(uVar53 >> 4) & 1) * auVar78._16_4_ | (uint)!bVar7 * iVar24;
        *(uint *)(*pauVar40 + 0x14) =
             (uint)bVar8 * (uint)((byte)(uVar53 >> 5) & 1) * auVar78._20_4_ | (uint)!bVar8 * iVar25;
        *(uint *)(*pauVar40 + 0x18) =
             (uint)bVar9 * (uint)((byte)(uVar53 >> 6) & 1) * auVar78._24_4_ | (uint)!bVar9 * iVar26;
        *(uint *)(*pauVar40 + 0x1c) =
             (uint)bVar10 * (uint)((byte)(uVar53 >> 7) & 1) * auVar78._28_4_ |
             (uint)!bVar10 * iVar27;
        *(uint *)(*pauVar40 + 0x20) =
             (uint)(bVar18 & 1) * (uint)(bVar18 & 1) * auVar78._32_4_ |
             (uint)!(bool)(bVar18 & 1) * iVar28;
        *(uint *)(*pauVar40 + 0x24) =
             (uint)bVar11 * (uint)(bVar18 >> 1 & 1) * auVar78._36_4_ | (uint)!bVar11 * iVar29;
        *(uint *)(*pauVar40 + 0x28) =
             (uint)bVar12 * (uint)(bVar18 >> 2 & 1) * auVar78._40_4_ | (uint)!bVar12 * iVar30;
        *(uint *)(*pauVar40 + 0x2c) =
             (uint)bVar13 * (uint)(bVar18 >> 3 & 1) * auVar78._44_4_ | (uint)!bVar13 * iVar31;
        *(uint *)(*pauVar40 + 0x30) =
             (uint)bVar14 * (uint)(bVar18 >> 4 & 1) * auVar78._48_4_ | (uint)!bVar14 * iVar32;
        *(uint *)(*pauVar40 + 0x34) =
             (uint)bVar15 * (uint)(bVar18 >> 5 & 1) * auVar78._52_4_ | (uint)!bVar15 * iVar33;
        *(uint *)(*pauVar40 + 0x38) =
             (uint)bVar16 * (uint)(bVar18 >> 6 & 1) * auVar78._56_4_ | (uint)!bVar16 * iVar34;
        *(uint *)(*pauVar40 + 0x3c) =
             (uint)(bVar18 >> 7) * (uint)(bVar18 >> 7) * auVar78._60_4_ |
             (uint)!(bool)(bVar18 >> 7) * iVar35;
        pauVar40 = pauVar40 + 1;
      } while (uVar38 < param_3 - uVar36);
    }
  }
  return;
}

