
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001405a9672) overlaps instruction at (ram,0x0001405a9671)
    */

void FUN_1405a9320(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                  undefined4 *param_4,ulonglong param_5,longlong param_6)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 (*pauVar11) [64];
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 (*pauVar16) [64];
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined8 uVar28;
  unkbyte10 in_ST0;
  undefined1 in_ZMM5 [64];
  undefined1 in_YMM19 [32];
  undefined1 auStack_68 [30];
  undefined1 auStack_4a [2];
  longlong lStack_48;
  longlong lStack_40;
  
  lVar13 = 0;
  lStack_48 = param_6 + -1;
  iVar14 = (int)auStack_68;
  if (0 < lStack_48) {
    lStack_40 = param_6;
    lVar9 = param_6;
    do {
      uVar8 = param_5;
      pauVar11 = param_1;
      pauVar16 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar18 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar18) {
          uVar18 = param_5;
        }
        in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
        lVar9 = param_2;
        FUN_1405a96a0(param_1,param_2,param_3,uVar18);
        pauVar11 = (undefined1 (*) [64])(*param_1 + uVar18);
        uVar8 = param_5 - uVar18;
        pauVar16 = (undefined1 (*) [64])(*param_3 + uVar18);
      }
      lVar19 = (longlong)uVar8 >> 6;
      if (lVar19 != 0) {
        lVar17 = 0;
        auVar25 = vpminub_avx512bw(*pauVar11,*(undefined1 (*) [64])(*pauVar11 + param_2));
        auVar25 = vpminub_avx512bw(auVar25,*(undefined1 (*) [64])(*pauVar11 + param_2 * 2));
        if (0 < lVar19) {
          do {
            lVar17 = lVar17 + 1;
            auVar26 = vpminub_avx512bw(pauVar11[1],*(undefined1 (*) [64])(pauVar11[1] + param_2));
            auVar26 = vpminub_avx512bw(auVar26,*(undefined1 (*) [64])(pauVar11[1] + param_2 * 2));
            pauVar11 = pauVar11 + 1;
            auVar27 = valignd_avx512f(auVar26,auVar25,4);
            auVar27 = vpalignr_avx512bw(auVar27,auVar25);
            *(int *)(lVar9 + -0xd) = *(int *)(lVar9 + -0xd) + iVar14;
            uVar28 = psubsb((longlong)in_ST0,*(undefined8 *)(lVar9 + 0xff00000000));
            in_ST0 = CONCAT28((short)((unkuint10)in_ST0 >> 0x40),uVar28);
            auVar25 = vpminub_avx512bw(auVar27,auVar25);
            auVar25 = vpminub_avx512bw(in_ZMM5,auVar25);
            *pauVar16 = auVar25;
            pauVar16 = pauVar16 + 1;
            auVar25 = auVar26;
          } while (lVar17 < lVar19);
        }
      }
      lVar19 = (longlong)(uVar8 - (uVar8 & 0xffffffffffffffc0)) >> 5;
      if (lVar19 != 0) {
        lVar17 = 0;
        auVar23 = vpminub_avx2(*(undefined1 (*) [32])*pauVar11,
                               *(undefined1 (*) [32])(*pauVar11 + param_2));
        auVar23 = vpminub_avx2(auVar23,*(undefined1 (*) [32])(*pauVar11 + param_2 * 2));
        if (0 < lVar19) {
          do {
            lVar17 = lVar17 + 1;
            auVar24 = vpminub_avx2(*(undefined1 (*) [32])(*pauVar11 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar11 + param_2 + 0x20));
            auVar21 = vpminub_avx512vl(auVar24,*(undefined1 (*) [32])
                                                (*pauVar11 + param_2 * 2 + 0x20));
            pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
            auVar22 = vshufi32x4_avx512vl(auVar23,auVar21,1);
            auVar24 = vpalignr_avx2(auVar22,auVar23,1);
            auVar22 = vpalignr_avx2(auVar22,auVar23,2);
            in_ZMM5 = ZEXT3264(auVar22);
            auVar23 = vpminub_avx2(auVar24,auVar23);
            auVar23 = vpminub_avx512vl(auVar22,auVar23);
            auVar23 = vmovdqu32_avx512vl(auVar23);
            *(undefined1 (*) [32])*pauVar16 = auVar23;
            pauVar16 = (undefined1 (*) [64])(*pauVar16 + 0x20);
            auVar23 = vmovdqa32_avx512vl(auVar21);
          } while (lVar17 < lVar19);
        }
      }
      if ((uVar8 & 0x1f) != 0) {
        in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
        lVar9 = param_2;
        FUN_1405a96a0();
      }
      lVar13 = lVar13 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [64])(*param_3 + (longlong)param_4);
      param_6 = lStack_40;
    } while (lVar13 < lStack_48);
  }
  if (lVar13 < param_6) {
    lStack_48 = param_2 * 2;
    lStack_40 = param_6;
    do {
      uVar8 = param_5;
      pauVar11 = param_1;
      pauVar16 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar18 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar18) {
          uVar18 = param_5;
        }
        FUN_1405a96a0(param_1,param_2,param_3,uVar18);
        pauVar11 = (undefined1 (*) [64])(*param_1 + uVar18);
        uVar8 = param_5 - uVar18;
        pauVar16 = (undefined1 (*) [64])(*param_3 + uVar18);
      }
      lVar9 = (longlong)uVar8 >> 5;
      puVar15 = param_4;
      if (lVar9 != 0) {
        pauVar20 = (undefined1 (*) [32])(*pauVar11 + param_2);
        auVar23 = vpminub_avx2(*(undefined1 (*) [32])*pauVar11,*pauVar20);
        pauVar12 = (undefined1 (*) [32])(*pauVar11 + param_2 * 2);
        auVar23 = vpminub_avx2(auVar23,*pauVar12);
        auVar25 = ZEXT3264(auVar23);
        lVar19 = 0;
        pcVar10 = (char *)(lVar9 + -1);
        if (pcVar10 == (char *)0x0 || lVar9 < 1) goto LAB_1405a9615;
        do {
          lVar19 = lVar19 + 1;
          auVar23 = vpminub_avx2(*(undefined1 (*) [32])(*pauVar11 + 0x20),
                                 *(undefined1 (*) [32])(*pauVar11 + param_2 + 0x20));
          auVar22 = vpminub_avx512vl(auVar23,*(undefined1 (*) [32])(*pauVar11 + lStack_48 + 0x20));
          pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x20);
          auVar21 = auVar25._0_32_;
          auVar24 = vshufi32x4_avx512vl(auVar21,auVar22,1);
          auVar23 = vpalignr_avx2(auVar24,auVar21,1);
          auVar24 = vpalignr_avx2(auVar24,auVar21,2);
          auVar23 = vpminub_avx2(auVar23,auVar21);
          auVar23 = vpminub_avx512vl(auVar24,auVar23);
          auVar23 = vmovdqu32_avx512vl(auVar23);
          *(undefined1 (*) [32])*pauVar16 = auVar23;
          pauVar16 = (undefined1 (*) [64])(*pauVar16 + 0x20);
          auVar23 = vmovdqa32_avx512vl(auVar22);
          auVar25 = ZEXT3264(auVar23);
        } while (lVar19 < (longlong)pcVar10);
        do {
          pauVar20 = (undefined1 (*) [32])(*pauVar11 + param_2);
          pauVar12 = (undefined1 (*) [32])(*pauVar11 + param_2 * 2);
          puVar15 = param_4;
LAB_1405a9615:
          uVar4 = *(ushort *)pauVar20[1];
          uVar5 = *(ushort *)pauVar12[1];
          uVar6 = *(ushort *)(*pauVar11 + 0x20);
          do {
            auVar23 = vpminub_avx2(ZEXT232(uVar6),ZEXT232(uVar4));
            auVar23 = vpminub_avx2(auVar23,ZEXT232(uVar5));
            auVar23 = vshufi32x4_avx512vl(auVar25._0_32_,auVar23,1);
            vpalignr_avx512vl(auVar23,auVar25._0_32_);
            piVar2 = (int *)(pauVar12[-1] + 3);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + iVar14;
            if (SCARRY4(iVar3,iVar14) != *piVar2 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (pauVar11 == (undefined1 (*) [64])0xffffffffffffffe1) {
              if (*piVar2 == 0) {
                *pcVar10 = *pcVar10 + (char)pcVar10;
                pcVar10[-1] = pcVar10[-1];
                return;
              }
              auVar23 = vmovdqu32_avx512vl(in_YMM19);
              *(undefined1 (*) [32])*pauVar16 = auVar23;
              pauVar16 = (undefined1 (*) [64])(*pauVar16 + 0x20);
              pauVar11 = (undefined1 (*) [64])0x0;
              goto LAB_1405a966a;
            }
            uVar7 = in(0xda);
            pcVar10 = (char *)(ulonglong)uVar7;
            pauVar11 = (undefined1 (*) [64])(*pauVar11 + 0x1e);
            if (pauVar11 == (undefined1 (*) [64])0x0 || *piVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            pbVar1 = pauVar12[-3] + 0x11;
            *pbVar1 = *pbVar1 & (byte)(uVar7 >> 8);
          } while (-1 < (char)*pbVar1);
          param_4 = puVar15 + 1;
          out(*puVar15,(short)pauVar12);
          pbVar1 = param_3[-1] + lVar13 + 0x18;
          *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
          lVar13 = CONCAT71((int7)((ulonglong)lVar13 >> 8),0x4d);
          param_3 = (undefined1 (*) [64])((ulonglong)(auStack_68 + (longlong)pauVar11) & 0xffffffff)
          ;
        } while( true );
      }
LAB_1405a966a:
      if ((uVar8 & 0x1f) != 0) {
        FUN_1405a96a0(pauVar11,param_2,pauVar16);
      }
      lVar13 = lVar13 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [64])(*param_3 + (longlong)puVar15);
      param_4 = puVar15;
    } while (lVar13 < lStack_40);
  }
  return;
}

