
void FUN_1405a98a0(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined1 (*pauVar9) [64];
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 (*pauVar14) [64];
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined8 in_MM0;
  undefined1 in_ZMM5 [64];
  undefined1 auStack_68 [32];
  longlong lStack_48;
  longlong lStack_40;
  
  puVar12 = auStack_68;
  lVar11 = 0;
  puVar13 = auStack_68;
  if (0 < param_6 + -1) {
    lStack_40 = param_6 + -1;
    lStack_48 = param_6;
    do {
      uVar8 = param_5;
      pauVar9 = param_1;
      pauVar14 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar16 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar16) {
          uVar16 = param_5;
        }
        in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
        *(undefined8 *)(puVar12 + -8) = 0x1405a9934;
        param_6 = param_2;
        FUN_1405a9c40(param_1,param_2,param_3,uVar16);
        pauVar9 = (undefined1 (*) [64])(*param_1 + uVar16);
        uVar8 = param_5 - uVar16;
        pauVar14 = (undefined1 (*) [64])(*param_3 + uVar16);
      }
      lVar17 = (longlong)uVar8 >> 6;
      if (lVar17 != 0) {
        lVar15 = 0;
        auVar23 = vpminub_avx512bw(*pauVar9,*(undefined1 (*) [64])(*pauVar9 + param_2));
        auVar23 = vpminub_avx512bw(auVar23,*(undefined1 (*) [64])(*pauVar9 + param_2 * 2));
        if (0 < lVar17) {
          do {
            lVar15 = lVar15 + 1;
            auVar24 = vpminub_avx512bw(pauVar9[1],*(undefined1 (*) [64])(pauVar9[1] + param_2));
            auVar24 = vpminub_avx512bw(auVar24,*(undefined1 (*) [64])(pauVar9[1] + param_2 * 2));
            pauVar9 = pauVar9 + 1;
            auVar25 = valignd_avx512f(auVar24,auVar23,4);
            auVar25 = vpalignr_avx512bw(auVar25,auVar23);
            puVar12 = (undefined1 *)(ulonglong)(uint)((int)puVar12 + *(int *)(param_6 + -0xd));
            in_MM0 = psubsb(in_MM0,*(undefined8 *)param_3[0x3fc000000]);
            auVar23 = vpminub_avx512bw(auVar25,auVar23);
            auVar23 = vpminub_avx512bw(in_ZMM5,auVar23);
            *pauVar14 = auVar23;
            pauVar14 = pauVar14 + 1;
            auVar23 = auVar24;
          } while (lVar15 < lVar17);
        }
      }
      lVar17 = (longlong)(uVar8 - (uVar8 & 0xffffffffffffffc0)) >> 5;
      if (lVar17 != 0) {
        lVar15 = 0;
        auVar21 = vpminub_avx2(*(undefined1 (*) [32])*pauVar9,
                               *(undefined1 (*) [32])(*pauVar9 + param_2));
        auVar21 = vpminub_avx2(auVar21,*(undefined1 (*) [32])(*pauVar9 + param_2 * 2));
        if (0 < lVar17) {
          do {
            lVar15 = lVar15 + 1;
            auVar22 = vpminub_avx2(*(undefined1 (*) [32])(*pauVar9 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar9 + param_2 + 0x20));
            auVar19 = vpminub_avx512vl(auVar22,*(undefined1 (*) [32])(*pauVar9 + param_2 * 2 + 0x20)
                                      );
            pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
            auVar20 = vshufi32x4_avx512vl(auVar21,auVar19,1);
            auVar22 = vpalignr_avx2(auVar20,auVar21,3);
            auVar20 = vpalignr_avx2(auVar20,auVar21,6);
            in_ZMM5 = ZEXT3264(auVar20);
            auVar21 = vpminub_avx2(auVar22,auVar21);
            auVar21 = vpminub_avx512vl(auVar20,auVar21);
            auVar21 = vmovdqu32_avx512vl(auVar21);
            *(undefined1 (*) [32])*pauVar14 = auVar21;
            pauVar14 = (undefined1 (*) [64])(*pauVar14 + 0x20);
            auVar21 = vmovdqa32_avx512vl(auVar19);
          } while (lVar15 < lVar17);
        }
      }
      if ((uVar8 & 0x1f) != 0) {
        in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
        *(undefined8 *)(puVar12 + -8) = 0x1405a9a5c;
        param_6 = param_2;
        FUN_1405a9c40();
      }
      lVar11 = lVar11 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4);
    } while (lVar11 < *(longlong *)(puVar12 + 0x28));
    param_6 = *(longlong *)(puVar12 + 0x20);
    puVar13 = puVar12;
  }
  if (lVar11 < param_6) {
    *(longlong *)(puVar13 + 0x28) = param_4;
    *(longlong *)(puVar13 + 0x20) = param_2 * 2;
    do {
      uVar8 = param_5;
      pauVar9 = param_1;
      pauVar14 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar16 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar16) {
          uVar16 = param_5;
        }
        *(undefined8 *)(puVar13 + -8) = 0x1405a9af4;
        FUN_1405a9c40(param_1,param_2,param_3,uVar16);
        pauVar9 = (undefined1 (*) [64])(*param_1 + uVar16);
        uVar8 = param_5 - uVar16;
        pauVar14 = (undefined1 (*) [64])(*param_3 + uVar16);
      }
      lVar17 = (longlong)uVar8 >> 5;
      if (lVar17 != 0) {
        pauVar18 = (undefined1 (*) [32])(*pauVar9 + param_2);
        auVar21 = vpminub_avx2(*(undefined1 (*) [32])*pauVar9,*pauVar18);
        pauVar10 = (undefined1 (*) [32])(*pauVar9 + param_2 * 2);
        auVar21 = vpminub_avx2(auVar21,*pauVar10);
        lVar11 = 0;
        if (1 < lVar17) {
          lVar15 = *(longlong *)(puVar13 + 0x20);
          do {
            lVar11 = lVar11 + 1;
            auVar22 = vpminub_avx2(*(undefined1 (*) [32])(*pauVar9 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar9 + param_2 + 0x20));
            auVar19 = vpminub_avx512vl(auVar22,*(undefined1 (*) [32])(*pauVar9 + lVar15 + 0x20));
            pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
            auVar20 = vshufi32x4_avx512vl(auVar21,auVar19,1);
            auVar22 = vpalignr_avx2(auVar20,auVar21,3);
            auVar20 = vpalignr_avx2(auVar20,auVar21,6);
            auVar21 = vpminub_avx2(auVar22,auVar21);
            auVar21 = vpminub_avx512vl(auVar20,auVar21);
            auVar21 = vmovdqu32_avx512vl(auVar21);
            *(undefined1 (*) [32])*pauVar14 = auVar21;
            pauVar14 = (undefined1 (*) [64])(*pauVar14 + 0x20);
            auVar21 = vmovdqa32_avx512vl(auVar19);
          } while (lVar11 < lVar17 + -1);
          pauVar18 = (undefined1 (*) [32])(*pauVar9 + param_2);
          pauVar10 = (undefined1 (*) [32])(*pauVar9 + param_2 * 2);
        }
        uVar1 = *(uint *)(*pauVar9 + 0x20);
        uVar2 = *(uint *)pauVar18[1];
        auVar6 = vpinsrw_avx512bw(ZEXT416(uVar2),(uint)*(ushort *)(pauVar18[2] + 8),2);
        uVar3 = *(uint *)pauVar10[1];
        auVar5 = vpinsrw_avx(ZEXT416(uVar3),(uint)*(ushort *)(pauVar10[1] + 4),2);
        auVar7 = vpinsrw_avx512bw(ZEXT416(uVar1),(uint)*(ushort *)(pauVar9[1] + 8),2);
        auVar22 = vinserti32x4_avx512vl(ZEXT432(uVar1),auVar7,0);
        auVar20 = vinserti32x4_avx512vl(ZEXT432(uVar2),auVar6,0);
        auVar22 = vpminub_avx512vl(auVar22,auVar20);
        auVar20 = vinserti32x4_avx512vl(ZEXT432(uVar3),auVar5,0);
        auVar22 = vpminub_avx512vl(auVar22,auVar20);
        auVar22 = vshufi32x4_avx512vl(auVar21,auVar22,1);
        vpalignr_avx512vl(auVar22,auVar21);
        (*pauVar18)[0] = (*pauVar18)[0] & (byte)(uVar8 & 0x1f);
        (*param_3)[0] = (*param_3)[0] << 2 | (byte)(*param_3)[0] >> 6;
        pcVar4 = (code *)swi(1);
        (*pcVar4)(*pauVar9 + 0x20,uVar1,uVar2,uVar3);
        return;
      }
      if ((uVar8 & 0x1f) != 0) {
        *(undefined8 *)(puVar13 + -8) = 0x1405a9c1a;
        FUN_1405a9c40(pauVar9,param_2);
      }
      lVar11 = lVar11 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [64])(*param_3 + *(longlong *)(puVar13 + 0x28));
    } while (lVar11 < param_6);
  }
  return;
}

