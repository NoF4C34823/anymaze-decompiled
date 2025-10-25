
void FUN_14059cf3a(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                  longlong param_4)

{
  undefined1 (*pauVar1) [64];
  longlong lVar2;
  undefined1 auVar3 [32];
  longlong in_RAX;
  ulonglong uVar4;
  undefined1 (*pauVar5) [64];
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [64];
  longlong in_R10;
  undefined1 (*pauVar10) [64];
  undefined1 (*pauVar11) [64];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  longlong lStack0000000000000058;
  ulonglong uStack0000000000000060;
  ulonglong in_stack_00000090;
  
  uStack0000000000000060 = in_stack_00000090;
  lVar2 = in_R10 * 4;
  lStack0000000000000058 = param_2;
  do {
    uVar7 = ((ulonglong)param_3 & 0x1f) >> 2;
    uVar4 = uStack0000000000000060;
    pauVar5 = param_1;
    pauVar9 = param_3;
    if (uVar7 != 0) {
      uVar7 = 8 - uVar7;
      if ((longlong)uStack0000000000000060 <= (longlong)uVar7) {
        uVar7 = uStack0000000000000060;
      }
      FUN_14059d1a0(param_1);
      pauVar5 = (undefined1 (*) [64])(*param_1 + uVar7 * 4);
      uVar4 = uStack0000000000000060 - uVar7;
      pauVar9 = (undefined1 (*) [64])(*param_3 + uVar7 * 4);
    }
    lVar8 = (longlong)uVar4 >> 4;
    if (lVar8 != 0) {
      pauVar10 = (undefined1 (*) [64])(*pauVar5 + in_R10 * 4);
      auVar14 = vmaxps_avx512f(*pauVar5,*pauVar10);
      pauVar11 = (undefined1 (*) [64])(*pauVar5 + in_R10 * 8);
      auVar15 = vmaxps_avx512f(auVar14,*pauVar11);
      lVar6 = 0;
      auVar14 = auVar15;
      if (1 < lVar8) {
        do {
          lVar6 = lVar6 + 1;
          auVar15 = vmaxps_avx512f(pauVar5[1],*(undefined1 (*) [64])(pauVar5[1] + lVar2));
          auVar15 = vmaxps_avx512f(auVar15,*(undefined1 (*) [64])(pauVar5[1] + in_R10 * 8));
          pauVar5 = pauVar5 + 1;
          auVar16 = valignd_avx512f(auVar15,auVar14,4);
          auVar17 = valignd_avx512f(auVar15,auVar14,8);
          auVar14 = vmaxps_avx512f(auVar16,auVar14);
          auVar14 = vmaxps_avx512f(auVar17,auVar14);
          *pauVar9 = auVar14;
          pauVar9 = pauVar9 + 1;
          auVar14 = auVar15;
        } while (lVar6 < lVar8 + -1);
        pauVar10 = (undefined1 (*) [64])(*pauVar5 + in_R10 * 4);
        pauVar11 = (undefined1 (*) [64])(*pauVar5 + in_R10 * 8);
      }
      pauVar1 = pauVar5 + 1;
      pauVar5 = pauVar5 + 1;
      auVar14 = vmaxps_avx512f(ZEXT3264(*(undefined1 (*) [32])*pauVar1),
                               ZEXT3264(*(undefined1 (*) [32])pauVar10[1]));
      auVar14 = vmaxps_avx512f(auVar14,ZEXT3264(*(undefined1 (*) [32])pauVar11[1]));
      auVar16 = valignd_avx512f(auVar14,auVar15,4);
      auVar14 = valignd_avx512f(auVar14,auVar15,8);
      auVar15 = vmaxps_avx512f(auVar16,auVar15);
      auVar14 = vmaxps_avx512f(auVar14,auVar15);
      *pauVar9 = auVar14;
      pauVar9 = pauVar9 + 1;
    }
    lVar8 = (longlong)(uVar4 - (uVar4 & 0xfffffffffffffff0)) >> 3;
    if (lVar8 != 0) {
      lVar6 = 0;
      auVar13 = vmaxps_avx(*(undefined1 (*) [32])*pauVar5,*(undefined1 (*) [32])(*pauVar5 + lVar2));
      auVar13 = vmaxps_avx(auVar13,*(undefined1 (*) [32])(*pauVar5 + in_R10 * 8));
      if (0 < lVar8) {
        do {
          lVar6 = lVar6 + 1;
          auVar3 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar5 + 0x20),
                              *(undefined1 (*) [32])(*pauVar5 + lVar2 + 0x20));
          auVar3 = vmaxps_avx(auVar3,*(undefined1 (*) [32])(*pauVar5 + in_R10 * 8 + 0x20));
          pauVar5 = (undefined1 (*) [64])(*pauVar5 + 0x20);
          auVar12 = vshuff32x4_avx512vl(auVar13,auVar3,1);
          auVar13 = vmaxps_avx(auVar12,auVar13);
          auVar12 = vpalignr_avx2(auVar3,auVar12,0x10);
          auVar13 = vmaxps_avx512vl(auVar12,auVar13);
          *(undefined1 (*) [32])*pauVar9 = auVar13;
          pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
          auVar13 = auVar3;
        } while (lVar6 < lVar8);
      }
    }
    if ((uVar4 & 7) != 0) {
      FUN_14059d1a0();
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [64])(*param_1 + in_R10 * 4);
    param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 4);
  } while (in_RAX < lStack0000000000000058);
  return;
}

