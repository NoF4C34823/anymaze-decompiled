
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014059ca0b) overlaps instruction at (ram,0x00014059ca08)
    */
/* WARNING: Removing unreachable block (ram,0x00014059c96e) */

byte * FUN_14059c6fb(undefined1 (*param_1) [64],undefined1 (*param_2) [64],
                    undefined1 (*param_3) [64],byte *param_4)

{
  char *pcVar1;
  undefined1 (*pauVar2) [64];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong in_RAX;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined1 (*pauVar11) [64];
  undefined1 *puVar12;
  undefined1 (*pauVar13) [64];
  undefined1 (*pauVar14) [64];
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [32];
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined1 (*pauVar22) [64];
  uint uVar23;
  undefined1 (*in_R10) [64];
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [64];
  undefined1 (*pauVar27) [64];
  undefined1 (*pauVar28) [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar32 [32];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [32];
  undefined1 auVar45 [64];
  undefined1 in_ZMM18 [64];
  undefined1 in_YMM27 [32];
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  undefined1 (*pauStack0000000000000060) [64];
  ulonglong in_stack_000000a0;
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  
  lStack0000000000000058 = (longlong)in_R10 * 4;
  lStack0000000000000050 = (longlong)in_R10 * 8;
  pauStack0000000000000060 = param_2;
  do {
    uVar15 = ((ulonglong)param_3 & 0x1f) >> 2;
    pauVar13 = param_1;
    pauVar22 = param_3;
    uVar24 = in_stack_000000a0;
    if (uVar15 != 0) {
      uVar15 = 8 - uVar15;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar15) {
        uVar15 = in_stack_000000a0;
      }
                    /* WARNING: Call to offcut address within same function */
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14059c798;
      param_2 = in_R10;
      func_0x00014059ca00(param_1);
      pauVar13 = (undefined1 (*) [64])(*param_1 + uVar15 * 4);
      uVar24 = in_stack_000000a0 - uVar15;
      pauVar22 = (undefined1 (*) [64])(*param_3 + uVar15 * 4);
    }
    uVar15 = uVar24 & 7;
    lVar8 = (longlong)uVar24 >> 4;
    if (lVar8 == 0) {
      lVar8 = (longlong)(uVar24 - (uVar24 & 0xfffffffffffffff0)) >> 3;
      pbVar10 = (byte *)0x0;
      if (lVar8 != 0) {
        pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)in_R10 * 4);
        auVar32 = vmaxps_avx(*(undefined1 (*) [32])*pauVar13,*pauVar18);
        pauVar28 = (undefined1 (*) [32])(*pauVar13 + (longlong)in_R10 * 8);
        auVar32 = vmaxps_avx(auVar32,*pauVar28);
        pbVar10 = (byte *)0x0;
        uVar24 = lVar8 - 1;
        if (uVar24 != 0 && 0 < lVar8) {
          lVar16 = *(longlong *)((longlong)register0x00000020 + 0x50);
          pauVar26 = *(undefined1 (**) [64])((longlong)register0x00000020 + 0x58);
          pauVar11 = pauVar13;
          puVar19 = (undefined8 *)register0x00000020;
          goto LAB_14059c900;
        }
        goto LAB_14059c955;
      }
    }
    else {
      pauVar26 = (undefined1 (*) [64])(*pauVar13 + (longlong)in_R10 * 4);
      auVar33 = vmaxps_avx512f(*pauVar13,*pauVar26);
      param_2 = (undefined1 (*) [64])(*pauVar13 + (longlong)in_R10 * 8);
      auVar33 = vmaxps_avx512f(auVar33,*param_2);
      auVar32 = auVar33._0_32_;
      lVar16 = 0;
      lVar9 = lVar8 + -1;
      if (lVar9 != 0 && 0 < lVar8) {
        auVar34 = vmaxps_avx512f(pauVar13[1],
                                 *(undefined1 (*) [64])
                                  (pauVar13[1] + *(longlong *)((longlong)register0x00000020 + 0x58))
                                );
        auVar34 = vmaxps_avx512f(auVar34,*(undefined1 (*) [64])
                                          (pauVar13[1] +
                                          *(longlong *)((longlong)register0x00000020 + 0x50)));
        auVar34 = valignd_avx512f(auVar34,auVar33,4);
        vpalignr_avx512bw(auVar34,auVar33);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      auVar45 = ZEXT864(*(ulonglong *)pauVar26[1]);
      auVar34 = vmaxps_avx512f(ZEXT864(*(ulonglong *)pauVar13[1]),auVar45);
      auVar34 = vmaxps_avx512f(auVar34,ZEXT864(*(ulonglong *)param_2[1]));
      auVar34 = valignd_avx512f(auVar34,auVar33,4);
      in_ZmmResult = vpalignr_avx512bw(auVar34,auVar33);
      auVar31 = in_ZmmResult._0_32_;
      cVar7 = (byte)lVar9 + 0x62;
      pbVar10 = (byte *)CONCAT71((int7)((ulonglong)lVar9 >> 8),cVar7);
      if (pauVar13 != (undefined1 (*) [64])0xffffffffffffffc0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (cVar7 == '\0') {
        param_4 = *(byte **)register0x00000020;
        puVar20 = (undefined8 *)((longlong)register0x00000020 + 8);
        puVar19 = (undefined8 *)((longlong)register0x00000020 + 8);
        pauVar11 = (undefined1 (*) [64])0xfffffffffffffffe;
        if (cVar7 != '\0') {
          param_4[-0x38] = param_4[-0x38];
          goto code_r0x00014059c90f;
        }
        param_4[-0x40] = 0;
      }
      else {
        puVar19 = (undefined8 *)((longlong)register0x00000020 + -8);
        *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
        *(uint *)pbVar10 =
             (*(int *)pbVar10 - (int)(undefined8 *)((longlong)register0x00000020 + -8)) -
             (uint)(0x9d < (byte)lVar9);
        pauVar11 = (undefined1 (*) [64])0x0;
code_r0x00014059c90f:
        while( true ) {
          in_ZmmResult._0_32_ =
               vmaxps_avx512vl(auVar45._0_32_,*(undefined1 (*) [32])(*pauVar11 + lVar16 + 0x20));
          pauVar13 = (undefined1 (*) [64])(*pauVar11 + 0x20);
          auVar44 = auVar33._0_32_;
          auVar31 = vshuff32x4_avx512vl(auVar44,in_ZmmResult._0_32_,1);
          auVar32 = vpalignr_avx2(auVar31,auVar44,4);
          auVar31 = vpalignr_avx2(auVar31,auVar44,8);
          auVar32 = vmaxps_avx(auVar32,auVar44);
          auVar32 = vmaxps_avx512vl(auVar31,auVar32);
          *(undefined1 (*) [32])*pauVar22 = auVar32;
          pauVar22 = (undefined1 (*) [64])(*pauVar22 + 0x20);
          pauVar11 = pauVar13;
          auVar32 = in_ZmmResult._0_32_;
          if ((longlong)uVar24 <= (longlong)pbVar10) break;
LAB_14059c900:
          auVar33 = ZEXT3264(auVar32);
          pbVar10 = pbVar10 + 1;
          auVar32 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar11 + 0x20),
                               *(undefined1 (*) [32])(*pauVar26 + (longlong)*pauVar11 + 0x20));
          auVar45 = ZEXT3264(auVar32);
        }
        pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)in_R10 * 4);
        pauVar28 = (undefined1 (*) [32])(*pauVar13 + (longlong)in_R10 * 8);
        register0x00000020 = (BADSPACEBASE *)puVar19;
LAB_14059c955:
        pauVar11 = (undefined1 (*) [64])(*pauVar13 + 0x20);
        auVar31 = vmaxps_avx(ZEXT832(*(ulonglong *)(*pauVar13 + 0x20)),
                             ZEXT832(*(ulonglong *)pauVar18[1]));
        auVar31 = vmaxps_avx(auVar31,ZEXT832(*(ulonglong *)pauVar28[1]));
        auVar31 = vshuff32x4_avx512vl(auVar32,auVar31,1);
        auVar31 = vpalignr_avx512vl(auVar31,auVar32);
        cVar7 = (char)pbVar10 + 'b';
        pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),cVar7);
        puVar20 = (undefined8 *)register0x00000020;
        if (pauVar11 == (undefined1 (*) [64])0x0) {
          pcVar1 = pauVar13[-2] + 0x23;
          *pcVar1 = *pcVar1;
          pauVar26 = (undefined1 (*) [64])(*pauVar13 + 0x1f);
          if (pauVar26 != (undefined1 (*) [64])0x0 && *pcVar1 == '\0') {
            *pbVar10 = *pbVar10 + cVar7;
            pcVar1 = (char *)(((ulonglong)pbVar10 & 0xffffffff) - 9);
            *pcVar1 = *pcVar1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar32 = (undefined1  [32])0x0;
          uVar24 = 0xffffffffffffffffU >> ((ulonglong)(uint)-((int)uVar15 * 4 + 8) & 0x3f) &
                   0xffffffff;
          auVar33._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar26);
          auVar33._32_32_ = in_ZmmResult._32_32_;
          bVar3 = (byte)uVar24;
          auVar34[1] = ((byte)(uVar24 >> 1) & 1) * auVar33[1];
          auVar34[0] = (bVar3 & 1) * auVar33[0];
          auVar34[2] = ((byte)(uVar24 >> 2) & 1) * auVar33[2];
          auVar34[3] = ((byte)(uVar24 >> 3) & 1) * auVar33[3];
          auVar34[4] = ((byte)(uVar24 >> 4) & 1) * auVar33[4];
          auVar34[5] = ((byte)(uVar24 >> 5) & 1) * auVar33[5];
          auVar34[6] = ((byte)(uVar24 >> 6) & 1) * auVar33[6];
          auVar34[7] = ((byte)(uVar24 >> 7) & 1) * auVar33[7];
          bVar4 = (byte)(uVar24 >> 8);
          auVar34[8] = (bVar4 & 1) * auVar33[8];
          auVar34[9] = ((byte)(uVar24 >> 9) & 1) * auVar33[9];
          auVar34[10] = ((byte)(uVar24 >> 10) & 1) * auVar33[10];
          auVar34[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar33[0xb];
          auVar34[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar33[0xc];
          auVar34[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar33[0xd];
          auVar34[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar33[0xe];
          auVar34[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar33[0xf];
          bVar5 = (byte)(uVar24 >> 0x10);
          auVar34[0x10] = (bVar5 & 1) * auVar33[0x10];
          auVar34[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar33[0x11];
          auVar34[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar33[0x12];
          auVar34[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar33[0x13];
          auVar34[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar33[0x14];
          auVar34[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar33[0x15];
          auVar34[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar33[0x16];
          auVar34[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar33[0x17];
          bVar6 = (byte)(uVar24 >> 0x18);
          auVar34[0x18] = (bVar6 & 1) * auVar33[0x18];
          auVar34[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar33[0x19];
          auVar34[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar33[0x1a];
          auVar34[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar33[0x1b];
          auVar34[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar33[0x1c];
          auVar34._30_34_ = auVar33._30_34_;
          auVar34[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar33[0x1d];
          auVar45._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + (longlong)param_2 * 4));
          auVar45._32_32_ = in_ZmmResult._32_32_;
          auVar43[1] = ((byte)(uVar24 >> 1) & 1) * auVar45[1];
          auVar43[0] = (bVar3 & 1) * auVar45[0];
          auVar43[2] = ((byte)(uVar24 >> 2) & 1) * auVar45[2];
          auVar43[3] = ((byte)(uVar24 >> 3) & 1) * auVar45[3];
          auVar43[4] = ((byte)(uVar24 >> 4) & 1) * auVar45[4];
          auVar43[5] = ((byte)(uVar24 >> 5) & 1) * auVar45[5];
          auVar43[6] = ((byte)(uVar24 >> 6) & 1) * auVar45[6];
          auVar43[7] = ((byte)(uVar24 >> 7) & 1) * auVar45[7];
          auVar43[8] = (bVar4 & 1) * auVar45[8];
          auVar43[9] = ((byte)(uVar24 >> 9) & 1) * auVar45[9];
          auVar43[10] = ((byte)(uVar24 >> 10) & 1) * auVar45[10];
          auVar43[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar45[0xb];
          auVar43[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar45[0xc];
          auVar43[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar45[0xd];
          auVar43[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar45[0xe];
          auVar43[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar45[0xf];
          auVar43[0x10] = (bVar5 & 1) * auVar45[0x10];
          auVar43[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar45[0x11];
          auVar43[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar45[0x12];
          auVar43[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar45[0x13];
          auVar43[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar45[0x14];
          auVar43[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar45[0x15];
          auVar43[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar45[0x16];
          auVar43[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar45[0x17];
          auVar43[0x18] = (bVar6 & 1) * auVar45[0x18];
          auVar43[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar45[0x19];
          auVar43[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar45[0x1a];
          auVar43[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar45[0x1b];
          auVar43[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar45[0x1c];
          auVar43._30_34_ = auVar45._30_34_;
          auVar43[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar45[0x1d];
          auVar35._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + (longlong)param_2 * 8));
          auVar35._32_32_ = in_ZmmResult._32_32_;
          auVar36[1] = ((byte)(uVar24 >> 1) & 1) * auVar35[1];
          auVar36[0] = (bVar3 & 1) * auVar35[0];
          auVar36[2] = ((byte)(uVar24 >> 2) & 1) * auVar35[2];
          auVar36[3] = ((byte)(uVar24 >> 3) & 1) * auVar35[3];
          auVar36[4] = ((byte)(uVar24 >> 4) & 1) * auVar35[4];
          auVar36[5] = ((byte)(uVar24 >> 5) & 1) * auVar35[5];
          auVar36[6] = ((byte)(uVar24 >> 6) & 1) * auVar35[6];
          auVar36[7] = ((byte)(uVar24 >> 7) & 1) * auVar35[7];
          auVar36[8] = (bVar4 & 1) * auVar35[8];
          auVar36[9] = ((byte)(uVar24 >> 9) & 1) * auVar35[9];
          auVar36[10] = ((byte)(uVar24 >> 10) & 1) * auVar35[10];
          auVar36[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar35[0xb];
          auVar36[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar35[0xc];
          auVar36[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar35[0xd];
          auVar36[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar35[0xe];
          auVar36[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar35[0xf];
          auVar36[0x10] = (bVar5 & 1) * auVar35[0x10];
          auVar36[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar35[0x11];
          auVar36[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar35[0x12];
          auVar36[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar35[0x13];
          auVar36[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar35[0x14];
          auVar36[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar35[0x15];
          auVar36[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar35[0x16];
          auVar36[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar35[0x17];
          auVar36[0x18] = (bVar6 & 1) * auVar35[0x18];
          auVar36[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar35[0x19];
          auVar36[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar35[0x1a];
          auVar36[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar35[0x1b];
          auVar36[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar35[0x1c];
          auVar36._30_34_ = auVar35._30_34_;
          auVar36[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar35[0x1d];
          uVar23 = (int)uVar15 * 4 - 0x18;
          uVar23 = ~((int)uVar23 >> 0x1f) & uVar23;
          if ((int)uVar23 < 1) {
            auVar31 = ZEXT832(0) << 0x20;
            in_ZmmResult._32_32_ = auVar31;
          }
          else {
            uVar24 = 0xffffffffffffffffU >> ((ulonglong)-uVar23 & 0x3f) & 0xffffffff;
            auVar37._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar13 + 0x3f));
            auVar37._32_32_ = in_ZmmResult._32_32_;
            bVar3 = (byte)uVar24;
            auVar38[1] = ((byte)(uVar24 >> 1) & 1) * auVar37[1];
            auVar38[0] = (bVar3 & 1) * auVar37[0];
            auVar38[2] = ((byte)(uVar24 >> 2) & 1) * auVar37[2];
            auVar38[3] = ((byte)(uVar24 >> 3) & 1) * auVar37[3];
            auVar38[4] = ((byte)(uVar24 >> 4) & 1) * auVar37[4];
            auVar38[5] = ((byte)(uVar24 >> 5) & 1) * auVar37[5];
            auVar38[6] = ((byte)(uVar24 >> 6) & 1) * auVar37[6];
            auVar38[7] = ((byte)(uVar24 >> 7) & 1) * auVar37[7];
            bVar4 = (byte)(uVar24 >> 8);
            auVar38[8] = (bVar4 & 1) * auVar37[8];
            auVar38[9] = ((byte)(uVar24 >> 9) & 1) * auVar37[9];
            auVar38[10] = ((byte)(uVar24 >> 10) & 1) * auVar37[10];
            auVar38[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar37[0xb];
            auVar38[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar37[0xc];
            auVar38[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar37[0xd];
            auVar38[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar37[0xe];
            auVar38[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar37[0xf];
            bVar5 = (byte)(uVar24 >> 0x10);
            auVar38[0x10] = (bVar5 & 1) * auVar37[0x10];
            auVar38[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar37[0x11];
            auVar38[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar37[0x12];
            auVar38[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar37[0x13];
            auVar38[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar37[0x14];
            auVar38[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar37[0x15];
            auVar38[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar37[0x16];
            auVar38[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar37[0x17];
            bVar6 = (byte)(uVar24 >> 0x18);
            auVar38[0x18] = (bVar6 & 1) * auVar37[0x18];
            auVar38[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar37[0x19];
            auVar38[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar37[0x1a];
            auVar38[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar37[0x1b];
            auVar38[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar37[0x1c];
            auVar38._30_34_ = auVar37._30_34_;
            auVar38[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar37[0x1d];
            auVar31 = auVar38._0_32_;
            auVar39._0_32_ =
                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 4 + 0x3f))
            ;
            auVar39._32_32_ = in_ZmmResult._32_32_;
            auVar40[1] = ((byte)(uVar24 >> 1) & 1) * auVar39[1];
            auVar40[0] = (bVar3 & 1) * auVar39[0];
            auVar40[2] = ((byte)(uVar24 >> 2) & 1) * auVar39[2];
            auVar40[3] = ((byte)(uVar24 >> 3) & 1) * auVar39[3];
            auVar40[4] = ((byte)(uVar24 >> 4) & 1) * auVar39[4];
            auVar40[5] = ((byte)(uVar24 >> 5) & 1) * auVar39[5];
            auVar40[6] = ((byte)(uVar24 >> 6) & 1) * auVar39[6];
            auVar40[7] = ((byte)(uVar24 >> 7) & 1) * auVar39[7];
            auVar40[8] = (bVar4 & 1) * auVar39[8];
            auVar40[9] = ((byte)(uVar24 >> 9) & 1) * auVar39[9];
            auVar40[10] = ((byte)(uVar24 >> 10) & 1) * auVar39[10];
            auVar40[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar39[0xb];
            auVar40[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar39[0xc];
            auVar40[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar39[0xd];
            auVar40[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar39[0xe];
            auVar40[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar39[0xf];
            auVar40[0x10] = (bVar5 & 1) * auVar39[0x10];
            auVar40[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar39[0x11];
            auVar40[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar39[0x12];
            auVar40[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar39[0x13];
            auVar40[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar39[0x14];
            auVar40[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar39[0x15];
            auVar40[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar39[0x16];
            auVar40[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar39[0x17];
            auVar40[0x18] = (bVar6 & 1) * auVar39[0x18];
            auVar40[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar39[0x19];
            auVar40[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar39[0x1a];
            auVar40[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar39[0x1b];
            auVar40[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar39[0x1c];
            auVar40._30_34_ = auVar39._30_34_;
            auVar40[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar39[0x1d];
            auVar41._0_32_ =
                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 8 + 0x3f))
            ;
            auVar41._32_32_ = in_ZmmResult._32_32_;
            auVar42[1] = ((byte)(uVar24 >> 1) & 1) * auVar41[1];
            auVar42[0] = (bVar3 & 1) * auVar41[0];
            auVar42[2] = ((byte)(uVar24 >> 2) & 1) * auVar41[2];
            auVar42[3] = ((byte)(uVar24 >> 3) & 1) * auVar41[3];
            auVar42[4] = ((byte)(uVar24 >> 4) & 1) * auVar41[4];
            auVar42[5] = ((byte)(uVar24 >> 5) & 1) * auVar41[5];
            auVar42[6] = ((byte)(uVar24 >> 6) & 1) * auVar41[6];
            auVar42[7] = ((byte)(uVar24 >> 7) & 1) * auVar41[7];
            auVar42[8] = (bVar4 & 1) * auVar41[8];
            auVar42[9] = ((byte)(uVar24 >> 9) & 1) * auVar41[9];
            auVar42[10] = ((byte)(uVar24 >> 10) & 1) * auVar41[10];
            auVar42[0xb] = ((byte)(uVar24 >> 0xb) & 1) * auVar41[0xb];
            auVar42[0xc] = ((byte)(uVar24 >> 0xc) & 1) * auVar41[0xc];
            auVar42[0xd] = ((byte)(uVar24 >> 0xd) & 1) * auVar41[0xd];
            auVar42[0xe] = ((byte)(uVar24 >> 0xe) & 1) * auVar41[0xe];
            auVar42[0xf] = ((byte)(uVar24 >> 0xf) & 1) * auVar41[0xf];
            auVar42[0x10] = (bVar5 & 1) * auVar41[0x10];
            auVar42[0x11] = ((byte)(uVar24 >> 0x11) & 1) * auVar41[0x11];
            auVar42[0x12] = ((byte)(uVar24 >> 0x12) & 1) * auVar41[0x12];
            auVar42[0x13] = ((byte)(uVar24 >> 0x13) & 1) * auVar41[0x13];
            auVar42[0x14] = ((byte)(uVar24 >> 0x14) & 1) * auVar41[0x14];
            auVar42[0x15] = ((byte)(uVar24 >> 0x15) & 1) * auVar41[0x15];
            auVar42[0x16] = ((byte)(uVar24 >> 0x16) & 1) * auVar41[0x16];
            auVar42[0x17] = ((byte)(uVar24 >> 0x17) & 1) * auVar41[0x17];
            auVar42[0x18] = (bVar6 & 1) * auVar41[0x18];
            auVar42[0x19] = ((byte)(uVar24 >> 0x19) & 1) * auVar41[0x19];
            auVar42[0x1a] = ((byte)(uVar24 >> 0x1a) & 1) * auVar41[0x1a];
            auVar42[0x1b] = ((byte)(uVar24 >> 0x1b) & 1) * auVar41[0x1b];
            auVar42[0x1c] = ((byte)(uVar24 >> 0x1c) & 1) * auVar41[0x1c];
            auVar42._30_34_ = auVar41._30_34_;
            auVar42[0x1d] = ((byte)(uVar24 >> 0x1d) & 1) * auVar41[0x1d];
            auVar32 = auVar42._0_32_;
            in_ZmmResult._32_32_ = auVar40._0_32_;
          }
          auVar44 = vmaxps_avx(auVar34._0_32_,auVar43._0_32_);
          in_ZmmResult._32_32_ = vmaxps_avx(auVar31,in_ZmmResult._32_32_);
          auVar31 = vmaxps_avx(auVar44,auVar36._0_32_);
          in_ZmmResult._32_32_ = vmaxps_avx(in_ZmmResult._32_32_,auVar32);
          in_ZmmResult._32_32_ = vshuff32x4_avx512vl(auVar31,in_ZmmResult._32_32_,1);
          uVar15 = 8 - uVar15;
          vpalignr_avx2(in_ZmmResult._32_32_,auVar31,4);
          vpalignr_avx512vl(in_ZmmResult._32_32_,auVar31);
          pcVar1 = param_2[-1] + 0x21;
          *pcVar1 = *pcVar1;
          if (*pcVar1 == '\0') {
            DAT_000000ff = DAT_000000ff + -1;
            *(ulonglong *)((longlong)register0x00000020 + -8) = in_stack_000000a0;
            pbVar10 = (byte *)0x0;
            if (0 < *(longlong *)((longlong)register0x00000020 + 0x30)) {
              uVar24 = *(ulonglong *)((longlong)register0x00000020 + 0x28);
              *(longlong *)((longlong)register0x00000020 + -0x20) = (longlong)param_2 * 4;
              *(longlong *)((longlong)register0x00000020 + -0x28) = (longlong)param_2 * 8;
              *(longlong *)((longlong)register0x00000020 + -0x18) =
                   *(longlong *)((longlong)register0x00000020 + 0x30);
              *(undefined1 (**) [32])((longlong)register0x00000020 + -0x58) = pauVar18;
              *(longlong *)((longlong)register0x00000020 + -0x50) = in_RAX;
              *(byte **)((longlong)register0x00000020 + -0x48) = param_4;
              *(undefined1 (**) [64])((longlong)register0x00000020 + -0x40) = param_3;
              *(undefined1 (**) [64])((longlong)register0x00000020 + -0x38) = in_R10;
              *(undefined1 (**) [64])((longlong)register0x00000020 + -0x30) = param_1;
              pbVar21 = pbVar10;
              do {
                uVar17 = ((ulonglong)pauVar22 & 0x1f) >> 2;
                pauVar13 = pauVar26;
                pauVar11 = pauVar22;
                uVar25 = uVar24;
                if (uVar17 != 0) {
                  uVar17 = 8 - uVar17;
                  if ((longlong)uVar24 <= (longlong)uVar17) {
                    uVar17 = uVar24;
                  }
                  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x14059cb98;
                  FUN_14059ce40(pauVar26,param_2,pauVar22,uVar17);
                  pauVar13 = (undefined1 (*) [64])(*pauVar26 + uVar17 * 4);
                  uVar25 = uVar24 - uVar17;
                  pauVar11 = (undefined1 (*) [64])(*pauVar22 + uVar17 * 4);
                }
                pbVar10 = (byte *)((longlong)uVar25 >> 4);
                if (pbVar10 != (byte *)0x0) {
                  pauVar27 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 4);
                  auVar33 = vmaxps_avx512f(*pauVar13,*pauVar27);
                  pauVar14 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 8);
                  auVar33 = vmaxps_avx512f(auVar33,*pauVar14);
                  lVar8 = 0;
                  if (1 < (longlong)pbVar10) {
                    lVar16 = *(longlong *)((longlong)register0x00000020 + -0x28);
                    lVar9 = *(longlong *)((longlong)register0x00000020 + -0x20);
                    auVar34 = auVar33;
                    do {
                      lVar8 = lVar8 + 1;
                      auVar33 = vmaxps_avx512f(pauVar13[1],
                                               *(undefined1 (*) [64])(pauVar13[1] + lVar9));
                      auVar33 = vmaxps_avx512f(auVar33,*(undefined1 (*) [64])(pauVar13[1] + lVar16))
                      ;
                      pauVar13 = pauVar13 + 1;
                      auVar45 = valignd_avx512f(auVar33,auVar34,3);
                      auVar43 = valignd_avx512f(auVar33,auVar34,6);
                      auVar34 = vmaxps_avx512f(auVar45,auVar34);
                      auVar34 = vmaxps_avx512f(auVar43,auVar34);
                      *pauVar11 = auVar34;
                      pauVar11 = pauVar11 + 1;
                      auVar34 = auVar33;
                    } while (lVar8 < (longlong)(pbVar10 + -1));
                    pauVar27 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 4);
                    pauVar14 = (undefined1 (*) [64])(*pauVar13 + (longlong)param_2 * 8);
                  }
                  pbVar10 = (byte *)0x3f;
                  pauVar2 = pauVar13 + 1;
                  pauVar13 = pauVar13 + 1;
                  auVar34 = vmaxps_avx512f(ZEXT2464(SUB3224(*(undefined1 (*) [32])*pauVar2,0)),
                                           ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar27[1],0)));
                  auVar34 = vmaxps_avx512f(auVar34,ZEXT2464(SUB3224(*(undefined1 (*) [32])
                                                                     pauVar14[1],0)));
                  auVar45 = valignd_avx512f(auVar34,auVar33,3);
                  auVar34 = valignd_avx512f(auVar34,auVar33,6);
                  auVar33 = vmaxps_avx512f(auVar45,auVar33);
                  auVar33 = vmaxps_avx512f(auVar34,auVar33);
                  *pauVar11 = auVar33;
                  pauVar11 = pauVar11 + 1;
                }
                lVar8 = (longlong)(uVar25 - (uVar25 & 0xfffffffffffffff0)) >> 3;
                if (lVar8 != 0) {
                  pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 4);
                  in_ZmmResult._32_32_ = vmaxps_avx(*(undefined1 (*) [32])*pauVar13,*pauVar18);
                  pauVar28 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 8);
                  in_ZmmResult._32_32_ = vmaxps_avx(in_ZmmResult._32_32_,*pauVar28);
                  uVar17 = 0;
                  if (1 < lVar8) {
                    lVar16 = *(longlong *)((longlong)register0x00000020 + -0x28);
                    lVar9 = *(longlong *)((longlong)register0x00000020 + -0x20);
                    auVar32 = in_ZmmResult._32_32_;
                    do {
                      uVar17 = uVar17 + 1;
                      in_ZmmResult._32_32_ =
                           vmaxps_avx(*(undefined1 (*) [32])(*pauVar13 + 0x20),
                                      *(undefined1 (*) [32])(*pauVar13 + lVar9 + 0x20));
                      in_ZmmResult._32_32_ =
                           vmaxps_avx512vl(in_ZmmResult._32_32_,
                                           *(undefined1 (*) [32])(*pauVar13 + lVar16 + 0x20));
                      puVar12 = *pauVar13 + 0x20;
                      auVar31 = vshuff32x4_avx512vl(auVar32,in_ZmmResult._32_32_,1);
                      vpalignr_avx2(auVar31,auVar32,0xc);
                      auVar31 = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar31);
                      pauVar13 = (undefined1 (*) [64])
                                 CONCAT62((int6)((ulonglong)puVar12 >> 0x10),
                                          CONCAT11((byte)((ulonglong)puVar12 >> 8) | (byte)uVar17,
                                                   (char)puVar12));
                      auVar32 = vmaxps_avx512vl(auVar31,auVar32);
                      *(undefined1 (*) [32])*pauVar11 = auVar32;
                      pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
                      auVar32 = in_ZmmResult._32_32_;
                    } while ((longlong)uVar17 < lVar8 + -1);
                    pauVar18 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 4);
                    pauVar28 = (undefined1 (*) [32])(*pauVar13 + (longlong)param_2 * 8);
                  }
                  auVar29 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar18[1]),1);
                  auVar30 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(*pauVar13 + 0x30),0);
                  auVar29 = vpinsrq_avx512dq(auVar29,*(undefined8 *)(pauVar18[1] + 0x10),0);
                  auVar32 = vinserti32x4_avx512vl
                                      (ZEXT1632(*(undefined1 (*) [16])(*pauVar13 + 0x20)),auVar30,1)
                  ;
                  pauVar13 = (undefined1 (*) [64])(*pauVar13 + 0x20);
                  auVar31 = vinserti32x4_avx512vl
                                      (ZEXT1632(*(undefined1 (*) [16])pauVar18[1]),auVar29,1);
                  auVar32 = vmaxps_avx512vl(auVar32,auVar31);
                  auVar30 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar28[1]),1);
                  auVar30 = vpinsrq_avx512dq(auVar30,*(undefined8 *)(pauVar28[1] + 0x10),0);
                  auVar31 = vinserti32x4_avx512vl
                                      (ZEXT1632(*(undefined1 (*) [16])pauVar28[1]),auVar30,1);
                  auVar32 = vmaxps_avx512vl(auVar32,auVar31);
                  auVar32 = vshuff32x4_avx512vl(in_ZmmResult._32_32_,auVar32,1);
                  auVar32 = vpalignr_avx512vl(auVar32,in_ZmmResult._32_32_);
                  pbVar10 = (byte *)(uVar17 | 0x62);
                  uVar15 = (ulonglong)(uint)((int)uVar15 + Rsrc_FILE_ENGLANG_809._85969703_4_);
                  in_ZmmResult._32_32_ = vmaxps_avx512vl(auVar32,in_ZmmResult._32_32_);
                  in_ZmmResult._32_32_ = vmaxps_avx512vl(in_YMM27,in_ZmmResult._32_32_);
                  *(undefined1 (*) [32])*pauVar11 = in_ZmmResult._32_32_;
                  pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
                }
                if ((uVar25 & 7) != 0) {
                  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x14059cdf1;
                  pbVar10 = (byte *)FUN_14059ce40(pauVar13,param_2,pauVar11);
                }
                pbVar21 = pbVar21 + 1;
                pauVar26 = (undefined1 (*) [64])(*pauVar26 + (longlong)param_2 * 4);
                pauVar22 = (undefined1 (*) [64])(*pauVar22 + uVar15 * 4);
              } while ((longlong)pbVar21 < *(longlong *)((longlong)register0x00000020 + -0x18));
            }
            return pbVar10;
          }
          return &DAT_000000ff;
        }
      }
      *param_4 = *param_4 & (byte)pauVar11;
      *pbVar10 = *pbVar10 >> 1 | *pbVar10 << 7;
      auVar32 = vmaxps_avx512vl(auVar31,auVar32);
      in_ZmmResult._0_32_ = vmaxps_avx512vl(in_ZMM18._0_32_,auVar32);
      *(undefined1 (*) [32])*pauVar22 = in_ZmmResult._0_32_;
      register0x00000020 = (BADSPACEBASE *)puVar20;
    }
    if (uVar15 != 0) {
                    /* WARNING: Call to offcut address within same function */
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14059c9ac;
      param_2 = in_R10;
      pbVar10 = (byte *)func_0x00014059ca00();
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [64])(*param_1 + (longlong)in_R10 * 4);
    param_3 = (undefined1 (*) [64])(*param_3 + (longlong)param_4 * 4);
    if (*(longlong *)((longlong)register0x00000020 + 0x60) <= in_RAX) {
      return pbVar10;
    }
  } while( true );
}

