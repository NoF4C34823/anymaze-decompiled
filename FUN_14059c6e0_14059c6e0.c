
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014059ca0b) overlaps instruction at (ram,0x00014059ca08)
    */
/* WARNING: Removing unreachable block (ram,0x00014059c96e) */

byte * FUN_14059c6e0(undefined1 (*param_1) [64],undefined1 (*param_2) [64],
                    undefined1 (*param_3) [64],byte *param_4,ulonglong param_5,
                    undefined1 (*param_6) [64])

{
  char *pcVar1;
  undefined1 (*pauVar2) [64];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined1 (*pauVar11) [64];
  longlong lVar12;
  undefined1 (*pauVar13) [64];
  undefined1 (*pauVar14) [64];
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [32];
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  undefined1 (*pauVar23) [64];
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [64];
  undefined1 (*pauVar28) [64];
  undefined1 (*pauVar29) [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar33 [32];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [32];
  undefined1 auVar46 [64];
  undefined1 in_ZMM18 [64];
  undefined1 in_YMM27 [32];
  undefined1 auStack_78 [32];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  
  puVar20 = (undefined8 *)auStack_78;
  pbVar10 = (byte *)0x0;
  pbVar22 = pbVar10;
  if (0 < (longlong)param_6) {
    do {
      uVar15 = ((ulonglong)param_3 & 0x1f) >> 2;
      pauVar13 = param_1;
      pauVar23 = param_3;
      uVar25 = param_5;
      if (uVar15 != 0) {
        uVar15 = 8 - uVar15;
        if ((longlong)param_5 <= (longlong)uVar15) {
          uVar15 = param_5;
        }
                    /* WARNING: Call to offcut address within same function */
        puVar20[-1] = 0x14059c798;
        param_6 = param_2;
        func_0x00014059ca00(param_1,param_2,param_3,uVar15);
        pauVar13 = (undefined1 (*) [64])(*param_1 + uVar15 * 4);
        uVar25 = param_5 - uVar15;
        pauVar23 = (undefined1 (*) [64])(*param_3 + uVar15 * 4);
      }
      uVar15 = uVar25 & 7;
      lVar8 = (longlong)uVar25 >> 4;
      if (lVar8 == 0) {
        lVar8 = (longlong)(uVar25 - (uVar25 & 0xfffffffffffffff0)) >> 3;
        pbVar10 = (byte *)0x0;
        if (lVar8 != 0) {
          pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 4);
          auVar33 = vmaxps_avx(*(undefined1 (*) [32])*pauVar13,*pauVar18);
          pauVar29 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 8);
          auVar33 = vmaxps_avx(auVar33,*pauVar29);
          pbVar10 = (byte *)0x0;
          uVar25 = lVar8 - 1;
          if (uVar25 != 0 && 0 < lVar8) {
            lVar16 = puVar20[10];
            pauVar27 = (undefined1 (*) [64])puVar20[0xb];
            pauVar11 = pauVar13;
            puVar19 = puVar20;
            goto LAB_14059c900;
          }
          goto LAB_14059c955;
        }
      }
      else {
        pauVar27 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 4);
        auVar34 = vmaxps_avx512f(*pauVar13,*pauVar27);
        param_6 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 8);
        auVar34 = vmaxps_avx512f(auVar34,*param_6);
        auVar33 = auVar34._0_32_;
        lVar16 = 0;
        lVar9 = lVar8 + -1;
        if (lVar9 != 0 && 0 < lVar8) {
          auVar35 = vmaxps_avx512f(pauVar13[1],*(undefined1 (*) [64])(pauVar13[1] + puVar20[0xb]));
          auVar35 = vmaxps_avx512f(auVar35,*(undefined1 (*) [64])(pauVar13[1] + puVar20[10]));
          auVar35 = valignd_avx512f(auVar35,auVar34,4);
          vpalignr_avx512bw(auVar35,auVar34);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar46 = ZEXT864(*(ulonglong *)pauVar27[1]);
        auVar35 = vmaxps_avx512f(ZEXT864(*(ulonglong *)pauVar13[1]),auVar46);
        auVar35 = vmaxps_avx512f(auVar35,ZEXT864(*(ulonglong *)param_6[1]));
        auVar35 = valignd_avx512f(auVar35,auVar34,4);
        in_ZmmResult = vpalignr_avx512bw(auVar35,auVar34);
        auVar32 = in_ZmmResult._0_32_;
        cVar7 = (byte)lVar9 + 0x62;
        pbVar10 = (byte *)CONCAT71((int7)((ulonglong)lVar9 >> 8),cVar7);
        if (pauVar13 != (undefined1 (*) [64])0xffffffffffffffc0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (cVar7 == '\0') {
          param_4 = (byte *)*puVar20;
          puVar21 = puVar20 + 1;
          puVar19 = puVar20 + 1;
          pauVar11 = (undefined1 (*) [64])0xfffffffffffffffe;
          if (cVar7 != '\0') {
            param_4[-0x38] = param_4[-0x38];
            goto code_r0x00014059c90f;
          }
          param_4[-0x40] = 0;
        }
        else {
          puVar19 = puVar20 + -1;
          puVar20[-1] = puVar20;
          *(uint *)pbVar10 = (*(int *)pbVar10 - (int)(puVar20 + -1)) - (uint)(0x9d < (byte)lVar9);
          pauVar11 = (undefined1 (*) [64])0x0;
code_r0x00014059c90f:
          while( true ) {
            in_ZmmResult._0_32_ =
                 vmaxps_avx512vl(auVar46._0_32_,*(undefined1 (*) [32])(*pauVar11 + lVar16 + 0x20));
            pauVar13 = (undefined1 (*) [64])(*pauVar11 + 0x20);
            auVar45 = auVar34._0_32_;
            auVar32 = vshuff32x4_avx512vl(auVar45,in_ZmmResult._0_32_,1);
            auVar33 = vpalignr_avx2(auVar32,auVar45,4);
            auVar32 = vpalignr_avx2(auVar32,auVar45,8);
            auVar33 = vmaxps_avx(auVar33,auVar45);
            auVar33 = vmaxps_avx512vl(auVar32,auVar33);
            *(undefined1 (*) [32])*pauVar23 = auVar33;
            pauVar23 = (undefined1 (*) [64])(*pauVar23 + 0x20);
            pauVar11 = pauVar13;
            auVar33 = in_ZmmResult._0_32_;
            if ((longlong)uVar25 <= (longlong)pbVar10) break;
LAB_14059c900:
            auVar34 = ZEXT3264(auVar33);
            pbVar10 = pbVar10 + 1;
            auVar33 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar11 + 0x20),
                                 *(undefined1 (*) [32])(*pauVar27 + (longlong)*pauVar11 + 0x20));
            auVar46 = ZEXT3264(auVar33);
          }
          pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 4);
          pauVar29 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 8);
          puVar20 = puVar19;
LAB_14059c955:
          pauVar11 = (undefined1 (*) [64])(*pauVar13 + 0x20);
          auVar32 = vmaxps_avx(ZEXT832(*(ulonglong *)(*pauVar13 + 0x20)),
                               ZEXT832(*(ulonglong *)pauVar18[1]));
          auVar32 = vmaxps_avx(auVar32,ZEXT832(*(ulonglong *)pauVar29[1]));
          auVar32 = vshuff32x4_avx512vl(auVar33,auVar32,1);
          auVar32 = vpalignr_avx512vl(auVar32,auVar33);
          cVar7 = (char)pbVar10 + 'b';
          pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),cVar7);
          puVar21 = puVar20;
          if (pauVar11 == (undefined1 (*) [64])0x0) {
            pcVar1 = pauVar13[-2] + 0x23;
            *pcVar1 = *pcVar1;
            pauVar27 = (undefined1 (*) [64])(*pauVar13 + 0x1f);
            if (pauVar27 != (undefined1 (*) [64])0x0 && *pcVar1 == '\0') {
              *pbVar10 = *pbVar10 + cVar7;
              pcVar1 = (char *)(((ulonglong)pbVar10 & 0xffffffff) - 9);
              *pcVar1 = *pcVar1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar33 = (undefined1  [32])0x0;
            uVar25 = 0xffffffffffffffffU >> ((ulonglong)(uint)-((int)uVar15 * 4 + 8) & 0x3f) &
                     0xffffffff;
            auVar34._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar27);
            auVar34._32_32_ = in_ZmmResult._32_32_;
            bVar3 = (byte)uVar25;
            auVar35[1] = ((byte)(uVar25 >> 1) & 1) * auVar34[1];
            auVar35[0] = (bVar3 & 1) * auVar34[0];
            auVar35[2] = ((byte)(uVar25 >> 2) & 1) * auVar34[2];
            auVar35[3] = ((byte)(uVar25 >> 3) & 1) * auVar34[3];
            auVar35[4] = ((byte)(uVar25 >> 4) & 1) * auVar34[4];
            auVar35[5] = ((byte)(uVar25 >> 5) & 1) * auVar34[5];
            auVar35[6] = ((byte)(uVar25 >> 6) & 1) * auVar34[6];
            auVar35[7] = ((byte)(uVar25 >> 7) & 1) * auVar34[7];
            bVar4 = (byte)(uVar25 >> 8);
            auVar35[8] = (bVar4 & 1) * auVar34[8];
            auVar35[9] = ((byte)(uVar25 >> 9) & 1) * auVar34[9];
            auVar35[10] = ((byte)(uVar25 >> 10) & 1) * auVar34[10];
            auVar35[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar34[0xb];
            auVar35[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar34[0xc];
            auVar35[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar34[0xd];
            auVar35[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar34[0xe];
            auVar35[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar34[0xf];
            bVar5 = (byte)(uVar25 >> 0x10);
            auVar35[0x10] = (bVar5 & 1) * auVar34[0x10];
            auVar35[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar34[0x11];
            auVar35[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar34[0x12];
            auVar35[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar34[0x13];
            auVar35[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar34[0x14];
            auVar35[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar34[0x15];
            auVar35[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar34[0x16];
            auVar35[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar34[0x17];
            bVar6 = (byte)(uVar25 >> 0x18);
            auVar35[0x18] = (bVar6 & 1) * auVar34[0x18];
            auVar35[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar34[0x19];
            auVar35[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar34[0x1a];
            auVar35[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar34[0x1b];
            auVar35[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar34[0x1c];
            auVar35._30_34_ = auVar34._30_34_;
            auVar35[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar34[0x1d];
            auVar46._0_32_ =
                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar27 + (longlong)param_6 * 4));
            auVar46._32_32_ = in_ZmmResult._32_32_;
            auVar44[1] = ((byte)(uVar25 >> 1) & 1) * auVar46[1];
            auVar44[0] = (bVar3 & 1) * auVar46[0];
            auVar44[2] = ((byte)(uVar25 >> 2) & 1) * auVar46[2];
            auVar44[3] = ((byte)(uVar25 >> 3) & 1) * auVar46[3];
            auVar44[4] = ((byte)(uVar25 >> 4) & 1) * auVar46[4];
            auVar44[5] = ((byte)(uVar25 >> 5) & 1) * auVar46[5];
            auVar44[6] = ((byte)(uVar25 >> 6) & 1) * auVar46[6];
            auVar44[7] = ((byte)(uVar25 >> 7) & 1) * auVar46[7];
            auVar44[8] = (bVar4 & 1) * auVar46[8];
            auVar44[9] = ((byte)(uVar25 >> 9) & 1) * auVar46[9];
            auVar44[10] = ((byte)(uVar25 >> 10) & 1) * auVar46[10];
            auVar44[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar46[0xb];
            auVar44[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar46[0xc];
            auVar44[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar46[0xd];
            auVar44[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar46[0xe];
            auVar44[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar46[0xf];
            auVar44[0x10] = (bVar5 & 1) * auVar46[0x10];
            auVar44[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar46[0x11];
            auVar44[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar46[0x12];
            auVar44[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar46[0x13];
            auVar44[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar46[0x14];
            auVar44[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar46[0x15];
            auVar44[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar46[0x16];
            auVar44[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar46[0x17];
            auVar44[0x18] = (bVar6 & 1) * auVar46[0x18];
            auVar44[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar46[0x19];
            auVar44[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar46[0x1a];
            auVar44[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar46[0x1b];
            auVar44[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar46[0x1c];
            auVar44._30_34_ = auVar46._30_34_;
            auVar44[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar46[0x1d];
            auVar36._0_32_ =
                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar27 + (longlong)param_6 * 8));
            auVar36._32_32_ = in_ZmmResult._32_32_;
            auVar37[1] = ((byte)(uVar25 >> 1) & 1) * auVar36[1];
            auVar37[0] = (bVar3 & 1) * auVar36[0];
            auVar37[2] = ((byte)(uVar25 >> 2) & 1) * auVar36[2];
            auVar37[3] = ((byte)(uVar25 >> 3) & 1) * auVar36[3];
            auVar37[4] = ((byte)(uVar25 >> 4) & 1) * auVar36[4];
            auVar37[5] = ((byte)(uVar25 >> 5) & 1) * auVar36[5];
            auVar37[6] = ((byte)(uVar25 >> 6) & 1) * auVar36[6];
            auVar37[7] = ((byte)(uVar25 >> 7) & 1) * auVar36[7];
            auVar37[8] = (bVar4 & 1) * auVar36[8];
            auVar37[9] = ((byte)(uVar25 >> 9) & 1) * auVar36[9];
            auVar37[10] = ((byte)(uVar25 >> 10) & 1) * auVar36[10];
            auVar37[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar36[0xb];
            auVar37[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar36[0xc];
            auVar37[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar36[0xd];
            auVar37[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar36[0xe];
            auVar37[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar36[0xf];
            auVar37[0x10] = (bVar5 & 1) * auVar36[0x10];
            auVar37[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar36[0x11];
            auVar37[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar36[0x12];
            auVar37[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar36[0x13];
            auVar37[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar36[0x14];
            auVar37[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar36[0x15];
            auVar37[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar36[0x16];
            auVar37[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar36[0x17];
            auVar37[0x18] = (bVar6 & 1) * auVar36[0x18];
            auVar37[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar36[0x19];
            auVar37[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar36[0x1a];
            auVar37[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar36[0x1b];
            auVar37[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar36[0x1c];
            auVar37._30_34_ = auVar36._30_34_;
            auVar37[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar36[0x1d];
            uVar24 = (int)uVar15 * 4 - 0x18;
            uVar24 = ~((int)uVar24 >> 0x1f) & uVar24;
            if ((int)uVar24 < 1) {
              auVar32 = ZEXT832(0) << 0x20;
              in_ZmmResult._32_32_ = auVar32;
            }
            else {
              uVar25 = 0xffffffffffffffffU >> ((ulonglong)-uVar24 & 0x3f) & 0xffffffff;
              auVar38._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar13 + 0x3f));
              auVar38._32_32_ = in_ZmmResult._32_32_;
              bVar3 = (byte)uVar25;
              auVar39[1] = ((byte)(uVar25 >> 1) & 1) * auVar38[1];
              auVar39[0] = (bVar3 & 1) * auVar38[0];
              auVar39[2] = ((byte)(uVar25 >> 2) & 1) * auVar38[2];
              auVar39[3] = ((byte)(uVar25 >> 3) & 1) * auVar38[3];
              auVar39[4] = ((byte)(uVar25 >> 4) & 1) * auVar38[4];
              auVar39[5] = ((byte)(uVar25 >> 5) & 1) * auVar38[5];
              auVar39[6] = ((byte)(uVar25 >> 6) & 1) * auVar38[6];
              auVar39[7] = ((byte)(uVar25 >> 7) & 1) * auVar38[7];
              bVar4 = (byte)(uVar25 >> 8);
              auVar39[8] = (bVar4 & 1) * auVar38[8];
              auVar39[9] = ((byte)(uVar25 >> 9) & 1) * auVar38[9];
              auVar39[10] = ((byte)(uVar25 >> 10) & 1) * auVar38[10];
              auVar39[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar38[0xb];
              auVar39[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar38[0xc];
              auVar39[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar38[0xd];
              auVar39[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar38[0xe];
              auVar39[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar38[0xf];
              bVar5 = (byte)(uVar25 >> 0x10);
              auVar39[0x10] = (bVar5 & 1) * auVar38[0x10];
              auVar39[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar38[0x11];
              auVar39[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar38[0x12];
              auVar39[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar38[0x13];
              auVar39[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar38[0x14];
              auVar39[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar38[0x15];
              auVar39[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar38[0x16];
              auVar39[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar38[0x17];
              bVar6 = (byte)(uVar25 >> 0x18);
              auVar39[0x18] = (bVar6 & 1) * auVar38[0x18];
              auVar39[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar38[0x19];
              auVar39[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar38[0x1a];
              auVar39[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar38[0x1b];
              auVar39[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar38[0x1c];
              auVar39._30_34_ = auVar38._30_34_;
              auVar39[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar38[0x1d];
              auVar32 = auVar39._0_32_;
              auVar40._0_32_ =
                   vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                      (*pauVar13 + (longlong)param_6 * 4 + 0x3f));
              auVar40._32_32_ = in_ZmmResult._32_32_;
              auVar41[1] = ((byte)(uVar25 >> 1) & 1) * auVar40[1];
              auVar41[0] = (bVar3 & 1) * auVar40[0];
              auVar41[2] = ((byte)(uVar25 >> 2) & 1) * auVar40[2];
              auVar41[3] = ((byte)(uVar25 >> 3) & 1) * auVar40[3];
              auVar41[4] = ((byte)(uVar25 >> 4) & 1) * auVar40[4];
              auVar41[5] = ((byte)(uVar25 >> 5) & 1) * auVar40[5];
              auVar41[6] = ((byte)(uVar25 >> 6) & 1) * auVar40[6];
              auVar41[7] = ((byte)(uVar25 >> 7) & 1) * auVar40[7];
              auVar41[8] = (bVar4 & 1) * auVar40[8];
              auVar41[9] = ((byte)(uVar25 >> 9) & 1) * auVar40[9];
              auVar41[10] = ((byte)(uVar25 >> 10) & 1) * auVar40[10];
              auVar41[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar40[0xb];
              auVar41[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar40[0xc];
              auVar41[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar40[0xd];
              auVar41[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar40[0xe];
              auVar41[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar40[0xf];
              auVar41[0x10] = (bVar5 & 1) * auVar40[0x10];
              auVar41[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar40[0x11];
              auVar41[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar40[0x12];
              auVar41[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar40[0x13];
              auVar41[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar40[0x14];
              auVar41[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar40[0x15];
              auVar41[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar40[0x16];
              auVar41[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar40[0x17];
              auVar41[0x18] = (bVar6 & 1) * auVar40[0x18];
              auVar41[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar40[0x19];
              auVar41[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar40[0x1a];
              auVar41[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar40[0x1b];
              auVar41[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar40[0x1c];
              auVar41._30_34_ = auVar40._30_34_;
              auVar41[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar40[0x1d];
              auVar42._0_32_ =
                   vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                      (*pauVar13 + (longlong)param_6 * 8 + 0x3f));
              auVar42._32_32_ = in_ZmmResult._32_32_;
              auVar43[1] = ((byte)(uVar25 >> 1) & 1) * auVar42[1];
              auVar43[0] = (bVar3 & 1) * auVar42[0];
              auVar43[2] = ((byte)(uVar25 >> 2) & 1) * auVar42[2];
              auVar43[3] = ((byte)(uVar25 >> 3) & 1) * auVar42[3];
              auVar43[4] = ((byte)(uVar25 >> 4) & 1) * auVar42[4];
              auVar43[5] = ((byte)(uVar25 >> 5) & 1) * auVar42[5];
              auVar43[6] = ((byte)(uVar25 >> 6) & 1) * auVar42[6];
              auVar43[7] = ((byte)(uVar25 >> 7) & 1) * auVar42[7];
              auVar43[8] = (bVar4 & 1) * auVar42[8];
              auVar43[9] = ((byte)(uVar25 >> 9) & 1) * auVar42[9];
              auVar43[10] = ((byte)(uVar25 >> 10) & 1) * auVar42[10];
              auVar43[0xb] = ((byte)(uVar25 >> 0xb) & 1) * auVar42[0xb];
              auVar43[0xc] = ((byte)(uVar25 >> 0xc) & 1) * auVar42[0xc];
              auVar43[0xd] = ((byte)(uVar25 >> 0xd) & 1) * auVar42[0xd];
              auVar43[0xe] = ((byte)(uVar25 >> 0xe) & 1) * auVar42[0xe];
              auVar43[0xf] = ((byte)(uVar25 >> 0xf) & 1) * auVar42[0xf];
              auVar43[0x10] = (bVar5 & 1) * auVar42[0x10];
              auVar43[0x11] = ((byte)(uVar25 >> 0x11) & 1) * auVar42[0x11];
              auVar43[0x12] = ((byte)(uVar25 >> 0x12) & 1) * auVar42[0x12];
              auVar43[0x13] = ((byte)(uVar25 >> 0x13) & 1) * auVar42[0x13];
              auVar43[0x14] = ((byte)(uVar25 >> 0x14) & 1) * auVar42[0x14];
              auVar43[0x15] = ((byte)(uVar25 >> 0x15) & 1) * auVar42[0x15];
              auVar43[0x16] = ((byte)(uVar25 >> 0x16) & 1) * auVar42[0x16];
              auVar43[0x17] = ((byte)(uVar25 >> 0x17) & 1) * auVar42[0x17];
              auVar43[0x18] = (bVar6 & 1) * auVar42[0x18];
              auVar43[0x19] = ((byte)(uVar25 >> 0x19) & 1) * auVar42[0x19];
              auVar43[0x1a] = ((byte)(uVar25 >> 0x1a) & 1) * auVar42[0x1a];
              auVar43[0x1b] = ((byte)(uVar25 >> 0x1b) & 1) * auVar42[0x1b];
              auVar43[0x1c] = ((byte)(uVar25 >> 0x1c) & 1) * auVar42[0x1c];
              auVar43._30_34_ = auVar42._30_34_;
              auVar43[0x1d] = ((byte)(uVar25 >> 0x1d) & 1) * auVar42[0x1d];
              auVar33 = auVar43._0_32_;
              in_ZmmResult._32_32_ = auVar41._0_32_;
            }
            auVar45 = vmaxps_avx(auVar35._0_32_,auVar44._0_32_);
            in_ZmmResult._32_32_ = vmaxps_avx(auVar32,in_ZmmResult._32_32_);
            auVar32 = vmaxps_avx(auVar45,auVar37._0_32_);
            in_ZmmResult._32_32_ = vmaxps_avx(in_ZmmResult._32_32_,auVar33);
            in_ZmmResult._32_32_ = vshuff32x4_avx512vl(auVar32,in_ZmmResult._32_32_,1);
            uVar15 = 8 - uVar15;
            vpalignr_avx2(in_ZmmResult._32_32_,auVar32,4);
            vpalignr_avx512vl(in_ZmmResult._32_32_,auVar32);
            pcVar1 = param_6[-1] + 0x21;
            *pcVar1 = *pcVar1;
            if (*pcVar1 == '\0') {
              DAT_000000ff = DAT_000000ff + -1;
              *(ulonglong *)((longlong)puVar20 + -8) = param_5;
              pbVar10 = (byte *)0x0;
              if (0 < *(longlong *)((longlong)puVar20 + 0x30)) {
                uVar25 = *(ulonglong *)((longlong)puVar20 + 0x28);
                *(longlong *)((longlong)puVar20 + -0x20) = (longlong)param_6 * 4;
                *(longlong *)((longlong)puVar20 + -0x28) = (longlong)param_6 * 8;
                *(longlong *)((longlong)puVar20 + -0x18) = *(longlong *)((longlong)puVar20 + 0x30);
                *(undefined1 (**) [32])((longlong)puVar20 + -0x58) = pauVar18;
                *(byte **)((longlong)puVar20 + -0x50) = pbVar22;
                *(byte **)((longlong)puVar20 + -0x48) = param_4;
                *(undefined1 (**) [64])((longlong)puVar20 + -0x40) = param_3;
                *(undefined1 (**) [64])((longlong)puVar20 + -0x38) = param_2;
                *(undefined1 (**) [64])((longlong)puVar20 + -0x30) = param_1;
                pbVar22 = pbVar10;
                do {
                  uVar17 = ((ulonglong)pauVar23 & 0x1f) >> 2;
                  pauVar13 = pauVar27;
                  pauVar11 = pauVar23;
                  uVar26 = uVar25;
                  if (uVar17 != 0) {
                    uVar17 = 8 - uVar17;
                    if ((longlong)uVar25 <= (longlong)uVar17) {
                      uVar17 = uVar25;
                    }
                    *(undefined8 *)((longlong)puVar20 + -0x80) = 0x14059cb98;
                    FUN_14059ce40(pauVar27,param_6,pauVar23,uVar17);
                    pauVar13 = (undefined1 (*) [64])(*pauVar27 + uVar17 * 4);
                    uVar26 = uVar25 - uVar17;
                    pauVar11 = (undefined1 (*) [64])(*pauVar23 + uVar17 * 4);
                  }
                  pbVar10 = (byte *)((longlong)uVar26 >> 4);
                  if (pbVar10 != (byte *)0x0) {
                    pauVar28 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_6 * 4);
                    auVar34 = vmaxps_avx512f(*pauVar13,*pauVar28);
                    pauVar14 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_6 * 8);
                    auVar34 = vmaxps_avx512f(auVar34,*pauVar14);
                    lVar8 = 0;
                    if (1 < (longlong)pbVar10) {
                      lVar16 = *(longlong *)((longlong)puVar20 + -0x28);
                      lVar9 = *(longlong *)((longlong)puVar20 + -0x20);
                      auVar35 = auVar34;
                      do {
                        lVar8 = lVar8 + 1;
                        auVar34 = vmaxps_avx512f(pauVar13[1],
                                                 *(undefined1 (*) [64])(pauVar13[1] + lVar9));
                        auVar34 = vmaxps_avx512f(auVar34,*(undefined1 (*) [64])
                                                          (pauVar13[1] + lVar16));
                        pauVar13 = pauVar13 + 1;
                        auVar46 = valignd_avx512f(auVar34,auVar35,3);
                        auVar44 = valignd_avx512f(auVar34,auVar35,6);
                        auVar35 = vmaxps_avx512f(auVar46,auVar35);
                        auVar35 = vmaxps_avx512f(auVar44,auVar35);
                        *pauVar11 = auVar35;
                        pauVar11 = pauVar11 + 1;
                        auVar35 = auVar34;
                      } while (lVar8 < (longlong)(pbVar10 + -1));
                      pauVar28 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_6 * 4);
                      pauVar14 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_6 * 8);
                    }
                    pbVar10 = (byte *)0x3f;
                    pauVar2 = pauVar13 + 1;
                    pauVar13 = pauVar13 + 1;
                    auVar35 = vmaxps_avx512f(ZEXT2464(SUB3224(*(undefined1 (*) [32])*pauVar2,0)),
                                             ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar28[1],0)))
                    ;
                    auVar35 = vmaxps_avx512f(auVar35,ZEXT2464(SUB3224(*(undefined1 (*) [32])
                                                                       pauVar14[1],0)));
                    auVar46 = valignd_avx512f(auVar35,auVar34,3);
                    auVar35 = valignd_avx512f(auVar35,auVar34,6);
                    auVar34 = vmaxps_avx512f(auVar46,auVar34);
                    auVar34 = vmaxps_avx512f(auVar35,auVar34);
                    *pauVar11 = auVar34;
                    pauVar11 = pauVar11 + 1;
                  }
                  lVar8 = (longlong)(uVar26 - (uVar26 & 0xfffffffffffffff0)) >> 3;
                  if (lVar8 != 0) {
                    pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_6 * 4);
                    in_ZmmResult._32_32_ = vmaxps_avx(*(undefined1 (*) [32])*pauVar13,*pauVar18);
                    pauVar29 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_6 * 8);
                    in_ZmmResult._32_32_ = vmaxps_avx(in_ZmmResult._32_32_,*pauVar29);
                    uVar17 = 0;
                    if (1 < lVar8) {
                      lVar16 = *(longlong *)((longlong)puVar20 + -0x28);
                      lVar9 = *(longlong *)((longlong)puVar20 + -0x20);
                      auVar33 = in_ZmmResult._32_32_;
                      do {
                        uVar17 = uVar17 + 1;
                        in_ZmmResult._32_32_ =
                             vmaxps_avx(*(undefined1 (*) [32])(*pauVar13 + 0x20),
                                        *(undefined1 (*) [32])(*pauVar13 + lVar9 + 0x20));
                        in_ZmmResult._32_32_ =
                             vmaxps_avx512vl(in_ZmmResult._32_32_,
                                             *(undefined1 (*) [32])(*pauVar13 + lVar16 + 0x20));
                        lVar12 = (longlong)*pauVar13 + 0x20;
                        auVar32 = vshuff32x4_avx512vl(auVar33,in_ZmmResult._32_32_,1);
                        vpalignr_avx2(auVar32,auVar33,0xc);
                        auVar32 = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar32);
                        pauVar13 = (undefined1 (*) [64])
                                   CONCAT62((int6)((ulonglong)lVar12 >> 0x10),
                                            CONCAT11((byte)((ulonglong)lVar12 >> 8) | (byte)uVar17,
                                                     (char)lVar12));
                        auVar33 = vmaxps_avx512vl(auVar32,auVar33);
                        *(undefined1 (*) [32])*pauVar11 = auVar33;
                        pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
                        auVar33 = in_ZmmResult._32_32_;
                      } while ((longlong)uVar17 < lVar8 + -1);
                      pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_6 * 4);
                      pauVar29 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_6 * 8);
                    }
                    auVar30 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar18[1]),1);
                    auVar31 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(*pauVar13 + 0x30),0)
                    ;
                    auVar30 = vpinsrq_avx512dq(auVar30,*(undefined8 *)(pauVar18[1] + 0x10),0);
                    auVar33 = vinserti32x4_avx512vl
                                        (ZEXT1632(*(undefined1 (*) [16])(*pauVar13 + 0x20)),auVar31,
                                         1);
                    pauVar13 = (undefined1 (*) [64])(*pauVar13 + 0x20);
                    auVar32 = vinserti32x4_avx512vl
                                        (ZEXT1632(*(undefined1 (*) [16])pauVar18[1]),auVar30,1);
                    auVar33 = vmaxps_avx512vl(auVar33,auVar32);
                    auVar31 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar29[1]),1);
                    auVar31 = vpinsrq_avx512dq(auVar31,*(undefined8 *)(pauVar29[1] + 0x10),0);
                    auVar32 = vinserti32x4_avx512vl
                                        (ZEXT1632(*(undefined1 (*) [16])pauVar29[1]),auVar31,1);
                    auVar33 = vmaxps_avx512vl(auVar33,auVar32);
                    auVar33 = vshuff32x4_avx512vl(in_ZmmResult._32_32_,auVar33,1);
                    auVar33 = vpalignr_avx512vl(auVar33,in_ZmmResult._32_32_);
                    pbVar10 = (byte *)(uVar17 | 0x62);
                    uVar15 = (ulonglong)(uint)((int)uVar15 + Rsrc_FILE_ENGLANG_809._85969703_4_);
                    in_ZmmResult._32_32_ = vmaxps_avx512vl(auVar33,in_ZmmResult._32_32_);
                    in_ZmmResult._32_32_ = vmaxps_avx512vl(in_YMM27,in_ZmmResult._32_32_);
                    *(undefined1 (*) [32])*pauVar11 = in_ZmmResult._32_32_;
                    pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
                  }
                  if ((uVar26 & 7) != 0) {
                    *(undefined8 *)((longlong)puVar20 + -0x80) = 0x14059cdf1;
                    pbVar10 = (byte *)FUN_14059ce40(pauVar13,param_6,pauVar11);
                  }
                  pbVar22 = pbVar22 + 1;
                  pauVar27 = (undefined1 (*) [64])(*pauVar27 + (longlong)param_6 * 4);
                  pauVar23 = (undefined1 (*) [64])(*pauVar23 + uVar15 * 4);
                } while ((longlong)pbVar22 < *(longlong *)((longlong)puVar20 + -0x18));
              }
              return pbVar10;
            }
            return &DAT_000000ff;
          }
        }
        *param_4 = *param_4 & (byte)pauVar11;
        *pbVar10 = *pbVar10 >> 1 | *pbVar10 << 7;
        auVar33 = vmaxps_avx512vl(auVar32,auVar33);
        in_ZmmResult._0_32_ = vmaxps_avx512vl(in_ZMM18._0_32_,auVar33);
        *(undefined1 (*) [32])*pauVar23 = in_ZmmResult._0_32_;
        pauVar23 = (undefined1 (*) [64])(*pauVar23 + 0x20);
        pauVar13 = pauVar11;
        puVar20 = puVar21;
      }
      if (uVar15 != 0) {
                    /* WARNING: Call to offcut address within same function */
        *(undefined8 *)((longlong)puVar20 + -8) = 0x14059c9ac;
        param_6 = param_2;
        pbVar10 = (byte *)func_0x00014059ca00(pauVar13,param_2,pauVar23);
      }
      pbVar22 = pbVar22 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + (longlong)param_2 * 4);
      param_3 = (undefined1 (*) [64])(*param_3 + (longlong)param_4 * 4);
    } while ((longlong)pbVar22 < *(longlong *)((longlong)puVar20 + 0x60));
  }
  return pbVar10;
}

