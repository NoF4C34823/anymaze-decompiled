
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d29b20(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar16 = _DAT_143092200;
  uVar4 = param_4 & 0xffffffffffffffe0;
  lVar10 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar4) {
      do {
        lVar10 = lVar10 + 0x20;
        auVar16 = vminps_avx(*param_1,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
        auVar18 = vminps_avx(param_1[1],*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
        auVar17 = vminps_avx(param_1[2],*(undefined1 (*) [32])(param_1[2] + param_2 * 4));
        auVar15 = vminps_avx(param_1[3],*(undefined1 (*) [32])(param_1[3] + param_2 * 4));
        auVar16 = vminps_avx(auVar16,*(undefined1 (*) [32])(*param_1 + param_2 * 8));
        auVar18 = vminps_avx(auVar18,*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(param_1[2] + param_2 * 8));
        auVar15 = vminps_avx(auVar15,*(undefined1 (*) [32])(param_1[3] + param_2 * 8));
        *param_3 = auVar16;
        param_3[1] = auVar18;
        param_3[2] = auVar17;
        param_3[3] = auVar15;
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
      } while (lVar10 < (longlong)uVar4);
    }
  }
  else if (param_5 == 5) {
    uVar9 = 0;
    if (0 < (longlong)uVar4) {
      uVar6 = (ulonglong)((longlong)(uVar4 + 0x1f) >> 4) >> 0x3b;
      lVar5 = 0;
      lVar10 = (uVar6 + 0x3f + uVar4 & 0xffffffffffffffe0) - 0x20;
      do {
        uVar9 = uVar9 + 1;
        auVar16 = vminps_avx(*(undefined1 (*) [32])(*param_1 + lVar5),
                             *(undefined1 (*) [32])(*param_1 + lVar5 + param_2 * 4));
        auVar18 = vminps_avx(*(undefined1 (*) [32])(param_1[1] + lVar5),
                             *(undefined1 (*) [32])(param_1[1] + param_2 * 4 + lVar5));
        auVar17 = vminps_avx(*(undefined1 (*) [32])(param_1[2] + lVar5),
                             *(undefined1 (*) [32])(param_1[2] + param_2 * 4 + lVar5));
        auVar15 = vminps_avx(*(undefined1 (*) [32])(param_1[3] + lVar5),
                             *(undefined1 (*) [32])(param_1[3] + param_2 * 4 + lVar5));
        auVar16 = vminps_avx(auVar16,*(undefined1 (*) [32])(*param_1 + lVar5 + param_2 * 8));
        auVar18 = vminps_avx(auVar18,*(undefined1 (*) [32])(param_1[1] + param_2 * 8 + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(param_1[2] + param_2 * 8 + lVar5));
        auVar15 = vminps_avx(auVar15,*(undefined1 (*) [32])(param_1[3] + param_2 * 8 + lVar5));
        auVar16 = vminps_avx(auVar16,*(undefined1 (*) [32])(*param_1 + lVar5 + param_2 * 0xc));
        auVar18 = vminps_avx(auVar18,*(undefined1 (*) [32])(param_1[1] + param_2 * 0xc + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(param_1[2] + param_2 * 0xc + lVar5));
        auVar15 = vminps_avx(auVar15,*(undefined1 (*) [32])(param_1[3] + param_2 * 0xc + lVar5));
        auVar16 = vminps_avx(auVar16,*(undefined1 (*) [32])(*param_1 + lVar5 + param_2 * 0x10));
        auVar18 = vminps_avx(auVar18,*(undefined1 (*) [32])(param_1[1] + param_2 * 0x10 + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(param_1[2] + param_2 * 0x10 + lVar5));
        auVar15 = vminps_avx(auVar15,*(undefined1 (*) [32])(param_1[3] + param_2 * 0x10 + lVar5));
        *(undefined1 (*) [32])(*param_3 + lVar5) = auVar16;
        *(undefined1 (*) [32])(param_3[1] + lVar5) = auVar18;
        *(undefined1 (*) [32])(param_3[2] + lVar5) = auVar17;
        *(undefined1 (*) [32])(param_3[3] + lVar5) = auVar15;
        lVar5 = lVar5 + 0x80;
      } while (uVar9 < (ulonglong)((longlong)(uVar6 + 0x1f + uVar4) >> 5));
      param_1 = param_1 + uVar9 * 4;
      param_3 = param_3 + uVar9 * 4;
    }
  }
  else if (0 < (longlong)uVar4) {
    do {
      auVar12 = ZEXT3264(auVar16);
      lVar5 = 0;
      pauVar7 = param_1;
      auVar18 = auVar16;
      auVar17 = auVar16;
      auVar15 = auVar16;
      auVar14 = auVar16;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar18 = vminps_avx(auVar18,*pauVar7);
          auVar17 = vminps_avx(auVar17,pauVar7[1]);
          auVar15 = vminps_avx(auVar15,pauVar7[2]);
          auVar14 = vminps_avx(auVar12._0_32_,pauVar7[3]);
          auVar12 = ZEXT3264(auVar14);
          pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2 * 4);
        } while (lVar5 < param_5);
      }
      lVar10 = lVar10 + 0x20;
      param_1 = param_1 + 4;
      *param_3 = auVar18;
      param_3[1] = auVar17;
      param_3[2] = auVar15;
      param_3[3] = auVar14;
      param_3 = param_3 + 4;
    } while (lVar10 < (longlong)uVar4);
  }
  auVar18 = _DAT_143092200;
  auVar16 = _DAT_143092200;
  for (; _DAT_143092200 = auVar16, lVar10 < (longlong)(param_4 & 0xfffffffffffffff0);
      lVar10 = lVar10 + 0x10) {
    lVar5 = 0;
    pauVar7 = param_1;
    auVar16 = auVar18;
    auVar17 = auVar18;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar16 = vminps_avx(auVar16,*pauVar7);
        auVar17 = vminps_avx(auVar17,pauVar7[1]);
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2 * 4);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = auVar16;
    param_3[1] = auVar17;
    param_3 = param_3 + 2;
    auVar16 = _DAT_143092200;
  }
  auVar2 = _DAT_143092220;
  for (; lVar10 < (longlong)(param_4 & 0xfffffffffffffff8); lVar10 = lVar10 + 8) {
    lVar5 = 0;
    lVar8 = 0;
    auVar18 = auVar16;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar18 = vminps_avx(auVar18,*(undefined1 (*) [32])(*param_1 + lVar8 * 4));
        lVar8 = lVar8 + param_2;
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 1;
    _DAT_143092220 = auVar2;
    *param_3 = auVar18;
    param_3 = param_3 + 1;
    auVar2 = _DAT_143092220;
  }
  auVar3 = auVar2;
  for (; lVar10 < (longlong)(param_4 & 0xfffffffffffffffc); lVar10 = lVar10 + 4) {
    lVar5 = 0;
    lVar8 = 0;
    auVar13 = auVar2;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar13 = vminps_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar8 * 4));
        lVar8 = lVar8 + param_2;
      } while (lVar5 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_143092220 = auVar3;
    *(undefined1 (*) [16])*param_3 = auVar13;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
    auVar3 = _DAT_143092220;
  }
  auVar2 = auVar3;
  for (; _DAT_143092220 = auVar2, lVar10 < (longlong)(param_4 & 0xfffffffffffffffe);
      lVar10 = lVar10 + 2) {
    lVar8 = 0;
    uVar11 = auVar3._0_8_;
    lVar5 = 0;
    auVar2 = auVar3;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 4;
        auVar2 = vminps_avx(auVar2,auVar13);
        uVar11 = auVar2._0_8_;
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    *(undefined8 *)*param_3 = uVar11;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
    auVar2 = _DAT_143092220;
  }
  for (; lVar10 < (longlong)param_4; lVar10 = lVar10 + 1) {
    lVar8 = 0;
    auVar12 = ZEXT1664(auVar2);
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (uint *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 4;
        auVar3 = vminps_avx(auVar12._0_16_,ZEXT416(*puVar1));
        auVar12 = ZEXT1664(auVar3);
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = auVar12._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  return;
}

