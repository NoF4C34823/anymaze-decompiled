
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d1e620(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  undefined1 (*pauVar1) [32];
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined8 uVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [64];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  
  auVar22 = _DAT_143091fa0;
  uVar5 = param_4 & 0xffffffffffffffe0;
  lVar11 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar5) {
      do {
        lVar11 = lVar11 + 0x20;
        auVar26._16_16_ = *(undefined1 (*) [16])(*param_1 + param_2 * 4 + 0x10);
        auVar26._0_16_ = *(undefined1 (*) [16])(*param_1 + param_2 * 4);
        auVar22 = vminps_avx(*param_1,auVar26);
        auVar27._16_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 4 + 0x10);
        auVar27._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 4);
        auVar32._16_16_ = *(undefined1 (*) [16])(param_1[1] + 0x10);
        auVar32._0_16_ = *(undefined1 (*) [16])param_1[1];
        auVar13 = vminps_avx(auVar32,auVar27);
        auVar42._16_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 4 + 0x10);
        auVar42._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 4);
        auVar28 = vminps_avx(param_1[2],auVar42);
        auVar33._16_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 4 + 0x10);
        auVar33._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 4);
        auVar29 = vminps_avx(param_1[3],auVar33);
        auVar38._16_16_ = *(undefined1 (*) [16])(*param_1 + param_2 * 8 + 0x10);
        auVar38._0_16_ = *(undefined1 (*) [16])(*param_1 + param_2 * 8);
        auVar22 = vminps_avx(auVar22,auVar38);
        auVar12._16_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 8 + 0x10);
        auVar12._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 8);
        auVar13 = vminps_avx(auVar13,auVar12);
        auVar20._16_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 8 + 0x10);
        auVar20._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 8);
        auVar28 = vminps_avx(auVar28,auVar20);
        auVar21._16_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 8 + 0x10);
        auVar21._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 8);
        param_1 = param_1 + 4;
        auVar29 = vminps_avx(auVar29,auVar21);
        *param_3 = auVar22._0_16_;
        param_3[2] = auVar13._0_16_;
        param_3[4] = auVar28._0_16_;
        param_3[6] = auVar29._0_16_;
        param_3[1] = auVar22._16_16_;
        param_3[3] = auVar13._16_16_;
        param_3[5] = auVar28._16_16_;
        param_3[7] = auVar29._16_16_;
        param_3 = param_3 + 8;
      } while (lVar11 < (longlong)uVar5);
    }
  }
  else if (param_5 == 5) {
    uVar10 = 0;
    if (0 < (longlong)uVar5) {
      uVar7 = (ulonglong)((longlong)(uVar5 + 0x1f) >> 4) >> 0x3b;
      lVar6 = 0;
      lVar11 = (uVar7 + 0x3f + uVar5 & 0xffffffffffffffe0) - 0x20;
      do {
        uVar10 = uVar10 + 1;
        auVar34._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10);
        auVar34._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6);
        auVar43._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + 0x10);
        auVar43._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6);
        auVar13._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + 0x10);
        auVar13._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6);
        auVar39._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + 0x10);
        auVar39._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6);
        auVar22._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + param_2 * 4);
        auVar22._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + param_2 * 4);
        auVar22 = vminps_avx(auVar34,auVar22);
        auVar28._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + param_2 * 4 + 0x10);
        auVar28._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 4 + lVar6);
        auVar13 = vminps_avx(auVar13,auVar28);
        auVar29._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + param_2 * 4 + 0x10);
        auVar29._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 4 + lVar6);
        auVar28 = vminps_avx(auVar43,auVar29);
        auVar30._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + param_2 * 4 + 0x10);
        auVar30._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 4 + lVar6);
        auVar29 = vminps_avx(auVar39,auVar30);
        auVar31._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + param_2 * 8);
        auVar31._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + param_2 * 8);
        auVar22 = vminps_avx(auVar22,auVar31);
        auVar40._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + param_2 * 8 + 0x10);
        auVar40._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 8 + lVar6);
        auVar13 = vminps_avx(auVar13,auVar40);
        auVar23._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + param_2 * 8 + 0x10);
        auVar23._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 8 + lVar6);
        auVar28 = vminps_avx(auVar28,auVar23);
        auVar41._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + param_2 * 8 + 0x10);
        auVar41._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 8 + lVar6);
        auVar29 = vminps_avx(auVar29,auVar41);
        auVar44._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + param_2 * 0xc);
        auVar44._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + param_2 * 0xc);
        auVar22 = vminps_avx(auVar22,auVar44);
        auVar35._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + param_2 * 0xc + 0x10);
        auVar35._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 0xc + lVar6);
        auVar13 = vminps_avx(auVar13,auVar35);
        auVar45._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + param_2 * 0xc + 0x10);
        auVar45._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 0xc + lVar6);
        auVar28 = vminps_avx(auVar28,auVar45);
        auVar14._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + param_2 * 0xc + 0x10);
        auVar14._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 0xc + lVar6);
        auVar29 = vminps_avx(auVar29,auVar14);
        auVar15._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + param_2 * 0x10);
        auVar15._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + param_2 * 0x10);
        auVar22 = vminps_avx(auVar22,auVar15);
        auVar16._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + param_2 * 0x10 + 0x10);
        auVar16._0_16_ = *(undefined1 (*) [16])(param_1[1] + param_2 * 0x10 + lVar6);
        auVar13 = vminps_avx(auVar13,auVar16);
        auVar17._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + param_2 * 0x10 + 0x10);
        auVar17._0_16_ = *(undefined1 (*) [16])(param_1[2] + param_2 * 0x10 + lVar6);
        auVar28 = vminps_avx(auVar28,auVar17);
        auVar18._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + param_2 * 0x10 + 0x10);
        auVar18._0_16_ = *(undefined1 (*) [16])(param_1[3] + param_2 * 0x10 + lVar6);
        auVar29 = vminps_avx(auVar29,auVar18);
        *(undefined1 (*) [16])(*param_3 + lVar6) = auVar22._0_16_;
        *(undefined1 (*) [16])(param_3[2] + lVar6) = auVar13._0_16_;
        *(undefined1 (*) [16])(param_3[4] + lVar6) = auVar28._0_16_;
        *(undefined1 (*) [16])(param_3[6] + lVar6) = auVar29._0_16_;
        *(undefined1 (*) [16])(param_3[1] + lVar6) = auVar22._16_16_;
        *(undefined1 (*) [16])(param_3[3] + lVar6) = auVar13._16_16_;
        *(undefined1 (*) [16])(param_3[5] + lVar6) = auVar28._16_16_;
        *(undefined1 (*) [16])(param_3[7] + lVar6) = auVar29._16_16_;
        lVar6 = lVar6 + 0x80;
      } while (uVar10 < (ulonglong)((longlong)(uVar7 + 0x1f + uVar5) >> 5));
      param_1 = param_1 + uVar10 * 4;
      param_3 = param_3 + uVar10 * 8;
    }
  }
  else if (0 < (longlong)uVar5) {
    do {
      auVar37 = ZEXT3264(auVar22);
      lVar6 = 0;
      auVar24 = ZEXT3264(auVar22);
      pauVar8 = param_1;
      auVar13 = auVar22;
      auVar28 = auVar22;
      auVar29 = auVar22;
      auVar14 = auVar22;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar13 = vminps_avx(auVar13,*pauVar8);
          auVar28 = vminps_avx(auVar28,pauVar8[1]);
          auVar29 = vminps_avx(auVar24._0_32_,pauVar8[2]);
          auVar24 = ZEXT3264(auVar29);
          pauVar1 = pauVar8 + 3;
          pauVar8 = (undefined1 (*) [32])(*pauVar8 + param_2 * 4);
          auVar14 = vminps_avx(auVar37._0_32_,*pauVar1);
          auVar37 = ZEXT3264(auVar14);
        } while (lVar6 < param_5);
      }
      lVar11 = lVar11 + 0x20;
      param_1 = param_1 + 4;
      param_3[1] = auVar13._16_16_;
      *param_3 = auVar13._0_16_;
      param_3[2] = auVar28._0_16_;
      param_3[4] = auVar29._0_16_;
      param_3[6] = auVar14._0_16_;
      param_3[3] = auVar28._16_16_;
      param_3[5] = auVar29._16_16_;
      param_3[7] = auVar14._16_16_;
      param_3 = param_3 + 8;
    } while (lVar11 < (longlong)uVar5);
  }
  auVar13 = _DAT_143091fa0;
  auVar22 = _DAT_143091fa0;
  for (; _DAT_143091fa0 = auVar22, lVar11 < (longlong)(param_4 & 0xfffffffffffffff0);
      lVar11 = lVar11 + 0x10) {
    lVar6 = 0;
    pauVar8 = param_1;
    auVar22 = auVar13;
    auVar28 = auVar13;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar22 = vminps_avx(auVar22,*pauVar8);
        auVar46._16_16_ = *(undefined1 (*) [16])(pauVar8[1] + 0x10);
        auVar46._0_16_ = *(undefined1 (*) [16])pauVar8[1];
        pauVar8 = (undefined1 (*) [32])(*pauVar8 + param_2 * 4);
        auVar28 = vminps_avx(auVar28,auVar46);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = auVar22._0_16_;
    param_3[2] = auVar28._0_16_;
    param_3[1] = auVar22._16_16_;
    param_3[3] = auVar28._16_16_;
    param_3 = param_3 + 4;
    auVar22 = _DAT_143091fa0;
  }
  auVar3 = _DAT_143091fc0;
  for (; lVar11 < (longlong)(param_4 & 0xfffffffffffffff8); lVar11 = lVar11 + 8) {
    lVar6 = 0;
    lVar9 = 0;
    auVar13 = auVar22;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar36._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar9 * 4 + 0x10);
        auVar36._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar9 * 4);
        lVar9 = lVar9 + param_2;
        auVar13 = vminps_avx(auVar13,auVar36);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 1;
    _DAT_143091fc0 = auVar3;
    *param_3 = auVar13._0_16_;
    param_3[1] = auVar13._16_16_;
    param_3 = param_3 + 2;
    auVar3 = _DAT_143091fc0;
  }
  auVar4 = auVar3;
  for (; lVar11 < (longlong)(param_4 & 0xfffffffffffffffc); lVar11 = lVar11 + 4) {
    lVar6 = 0;
    lVar9 = 0;
    auVar25 = auVar3;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar25 = vminps_avx(auVar25,*(undefined1 (*) [16])(*param_1 + lVar9 * 4));
        lVar9 = lVar9 + param_2;
      } while (lVar6 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_143091fc0 = auVar4;
    *param_3 = auVar25;
    param_3 = param_3 + 1;
    auVar4 = _DAT_143091fc0;
  }
  auVar3 = auVar4;
  for (; _DAT_143091fc0 = auVar3, lVar11 < (longlong)(param_4 & 0xfffffffffffffffe);
      lVar11 = lVar11 + 2) {
    lVar9 = 0;
    uVar19 = auVar4._0_8_;
    lVar6 = 0;
    auVar3 = auVar4;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = *(ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + param_2 * 4;
        auVar3 = vminps_avx(auVar3,auVar25);
        uVar19 = auVar3._0_8_;
      } while (lVar9 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    *(undefined8 *)*param_3 = uVar19;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar3 = _DAT_143091fc0;
  }
  for (; lVar11 < (longlong)param_4; lVar11 = lVar11 + 1) {
    lVar9 = 0;
    auVar24 = ZEXT1664(auVar3);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        puVar2 = (uint *)(*param_1 + lVar6);
        lVar6 = lVar6 + param_2 * 4;
        auVar4 = vminps_avx(auVar24._0_16_,ZEXT416(*puVar2));
        auVar24 = ZEXT1664(auVar4);
      } while (lVar9 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = auVar24._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  return;
}

