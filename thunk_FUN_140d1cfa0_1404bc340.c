
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d1cfa0(undefined1 (*param_1) [32],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

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
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined8 uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
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
  undefined1 auVar37 [32];
  undefined1 auVar38 [64];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  
  auVar23 = _DAT_143091ee0;
  uVar5 = param_3 & 0xffffffffffffffe0;
  lVar12 = 0;
  lVar10 = (longlong)param_5;
  if (param_4 == 3) {
    if (0 < (longlong)uVar5) {
      do {
        lVar12 = lVar12 + 0x20;
        auVar27._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar10 * 4 + 0x10);
        auVar27._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar10 * 4);
        auVar23 = vmaxps_avx(*param_1,auVar27);
        auVar28._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 4 + 0x10);
        auVar28._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 4);
        auVar33._16_16_ = *(undefined1 (*) [16])(param_1[1] + 0x10);
        auVar33._0_16_ = *(undefined1 (*) [16])param_1[1];
        auVar14 = vmaxps_avx(auVar33,auVar28);
        auVar43._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 4 + 0x10);
        auVar43._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 4);
        auVar29 = vmaxps_avx(param_1[2],auVar43);
        auVar34._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 4 + 0x10);
        auVar34._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 4);
        auVar30 = vmaxps_avx(param_1[3],auVar34);
        auVar39._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar10 * 8 + 0x10);
        auVar39._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar10 * 8);
        auVar23 = vmaxps_avx(auVar23,auVar39);
        auVar13._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 8 + 0x10);
        auVar13._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 8);
        auVar14 = vmaxps_avx(auVar14,auVar13);
        auVar21._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 8 + 0x10);
        auVar21._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 8);
        auVar29 = vmaxps_avx(auVar29,auVar21);
        auVar22._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 8 + 0x10);
        auVar22._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 8);
        param_1 = param_1 + 4;
        auVar30 = vmaxps_avx(auVar30,auVar22);
        *param_2 = auVar23._0_16_;
        param_2[2] = auVar14._0_16_;
        param_2[4] = auVar29._0_16_;
        param_2[6] = auVar30._0_16_;
        param_2[1] = auVar23._16_16_;
        param_2[3] = auVar14._16_16_;
        param_2[5] = auVar29._16_16_;
        param_2[7] = auVar30._16_16_;
        param_2 = param_2 + 8;
      } while (lVar12 < (longlong)uVar5);
    }
  }
  else if (param_4 == 5) {
    uVar11 = 0;
    if (0 < (longlong)uVar5) {
      uVar7 = (ulonglong)((longlong)(uVar5 + 0x1f) >> 4) >> 0x3b;
      lVar6 = 0;
      lVar12 = (uVar7 + 0x3f + uVar5 & 0xffffffffffffffe0) - 0x20;
      do {
        uVar11 = uVar11 + 1;
        auVar35._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10);
        auVar35._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6);
        auVar44._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + 0x10);
        auVar44._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6);
        auVar14._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + 0x10);
        auVar14._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6);
        auVar40._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + 0x10);
        auVar40._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6);
        auVar23._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + lVar10 * 4);
        auVar23._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 4);
        auVar23 = vmaxps_avx(auVar35,auVar23);
        auVar29._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + lVar10 * 4 + 0x10);
        auVar29._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 4 + lVar6);
        auVar14 = vmaxps_avx(auVar14,auVar29);
        auVar30._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + lVar10 * 4 + 0x10);
        auVar30._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 4 + lVar6);
        auVar29 = vmaxps_avx(auVar44,auVar30);
        auVar31._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + lVar10 * 4 + 0x10);
        auVar31._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 4 + lVar6);
        auVar30 = vmaxps_avx(auVar40,auVar31);
        auVar32._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + lVar10 * 8);
        auVar32._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 8);
        auVar23 = vmaxps_avx(auVar23,auVar32);
        auVar41._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + lVar10 * 8 + 0x10);
        auVar41._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 8 + lVar6);
        auVar14 = vmaxps_avx(auVar14,auVar41);
        auVar24._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + lVar10 * 8 + 0x10);
        auVar24._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 8 + lVar6);
        auVar29 = vmaxps_avx(auVar29,auVar24);
        auVar42._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + lVar10 * 8 + 0x10);
        auVar42._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 8 + lVar6);
        auVar30 = vmaxps_avx(auVar30,auVar42);
        auVar45._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + lVar10 * 0xc);
        auVar45._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 0xc);
        auVar23 = vmaxps_avx(auVar23,auVar45);
        auVar36._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + lVar10 * 0xc + 0x10);
        auVar36._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 0xc + lVar6);
        auVar14 = vmaxps_avx(auVar14,auVar36);
        auVar46._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + lVar10 * 0xc + 0x10);
        auVar46._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 0xc + lVar6);
        auVar29 = vmaxps_avx(auVar29,auVar46);
        auVar15._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + lVar10 * 0xc + 0x10);
        auVar15._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 0xc + lVar6);
        auVar30 = vmaxps_avx(auVar30,auVar15);
        auVar16._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + 0x10 + lVar10 * 0x10);
        auVar16._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 0x10);
        auVar23 = vmaxps_avx(auVar23,auVar16);
        auVar17._16_16_ = *(undefined1 (*) [16])(param_1[1] + lVar6 + lVar10 * 0x10 + 0x10);
        auVar17._0_16_ = *(undefined1 (*) [16])(param_1[1] + lVar10 * 0x10 + lVar6);
        auVar14 = vmaxps_avx(auVar14,auVar17);
        auVar18._16_16_ = *(undefined1 (*) [16])(param_1[2] + lVar6 + lVar10 * 0x10 + 0x10);
        auVar18._0_16_ = *(undefined1 (*) [16])(param_1[2] + lVar10 * 0x10 + lVar6);
        auVar29 = vmaxps_avx(auVar29,auVar18);
        auVar19._16_16_ = *(undefined1 (*) [16])(param_1[3] + lVar6 + lVar10 * 0x10 + 0x10);
        auVar19._0_16_ = *(undefined1 (*) [16])(param_1[3] + lVar10 * 0x10 + lVar6);
        auVar30 = vmaxps_avx(auVar30,auVar19);
        *(undefined1 (*) [16])(*param_2 + lVar6) = auVar23._0_16_;
        *(undefined1 (*) [16])(param_2[2] + lVar6) = auVar14._0_16_;
        *(undefined1 (*) [16])(param_2[4] + lVar6) = auVar29._0_16_;
        *(undefined1 (*) [16])(param_2[6] + lVar6) = auVar30._0_16_;
        *(undefined1 (*) [16])(param_2[1] + lVar6) = auVar23._16_16_;
        *(undefined1 (*) [16])(param_2[3] + lVar6) = auVar14._16_16_;
        *(undefined1 (*) [16])(param_2[5] + lVar6) = auVar29._16_16_;
        *(undefined1 (*) [16])(param_2[7] + lVar6) = auVar30._16_16_;
        lVar6 = lVar6 + 0x80;
      } while (uVar11 < (ulonglong)((longlong)(uVar7 + 0x1f + uVar5) >> 5));
      param_1 = param_1 + uVar11 * 4;
      param_2 = param_2 + uVar11 * 8;
    }
  }
  else if (0 < (longlong)uVar5) {
    do {
      auVar38 = ZEXT3264(auVar23);
      lVar6 = 0;
      auVar25 = ZEXT3264(auVar23);
      pauVar8 = param_1;
      auVar14 = auVar23;
      auVar29 = auVar23;
      auVar30 = auVar23;
      auVar15 = auVar23;
      if (0 < param_4) {
        do {
          lVar6 = lVar6 + 1;
          auVar14 = vmaxps_avx(auVar14,*pauVar8);
          auVar29 = vmaxps_avx(auVar29,pauVar8[1]);
          auVar30 = vmaxps_avx(auVar25._0_32_,pauVar8[2]);
          auVar25 = ZEXT3264(auVar30);
          pauVar1 = pauVar8 + 3;
          pauVar8 = (undefined1 (*) [32])(*pauVar8 + lVar10 * 4);
          auVar15 = vmaxps_avx(auVar38._0_32_,*pauVar1);
          auVar38 = ZEXT3264(auVar15);
        } while (lVar6 < param_4);
      }
      lVar12 = lVar12 + 0x20;
      param_1 = param_1 + 4;
      param_2[1] = auVar14._16_16_;
      *param_2 = auVar14._0_16_;
      param_2[2] = auVar29._0_16_;
      param_2[4] = auVar30._0_16_;
      param_2[6] = auVar15._0_16_;
      param_2[3] = auVar29._16_16_;
      param_2[5] = auVar30._16_16_;
      param_2[7] = auVar15._16_16_;
      param_2 = param_2 + 8;
    } while (lVar12 < (longlong)uVar5);
  }
  auVar14 = _DAT_143091ee0;
  auVar23 = _DAT_143091ee0;
  for (; _DAT_143091ee0 = auVar23, lVar12 < (longlong)(param_3 & 0xfffffffffffffff0);
      lVar12 = lVar12 + 0x10) {
    lVar6 = 0;
    pauVar8 = param_1;
    auVar23 = auVar14;
    auVar29 = auVar14;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar23 = vmaxps_avx(auVar23,*pauVar8);
        auVar47._16_16_ = *(undefined1 (*) [16])(pauVar8[1] + 0x10);
        auVar47._0_16_ = *(undefined1 (*) [16])pauVar8[1];
        pauVar8 = (undefined1 (*) [32])(*pauVar8 + lVar10 * 4);
        auVar29 = vmaxps_avx(auVar29,auVar47);
      } while (lVar6 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = auVar23._0_16_;
    param_2[2] = auVar29._0_16_;
    param_2[1] = auVar23._16_16_;
    param_2[3] = auVar29._16_16_;
    param_2 = param_2 + 4;
    auVar23 = _DAT_143091ee0;
  }
  auVar3 = _DAT_143091f00;
  for (; lVar12 < (longlong)(param_3 & 0xfffffffffffffff8); lVar12 = lVar12 + 8) {
    lVar6 = 0;
    lVar9 = 0;
    auVar14 = auVar23;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar37._16_16_ = *(undefined1 (*) [16])(*param_1 + lVar9 * 4 + 0x10);
        auVar37._0_16_ = *(undefined1 (*) [16])(*param_1 + lVar9 * 4);
        lVar9 = lVar9 + lVar10;
        auVar14 = vmaxps_avx(auVar14,auVar37);
      } while (lVar6 < param_4);
    }
    param_1 = param_1 + 1;
    _DAT_143091f00 = auVar3;
    *param_2 = auVar14._0_16_;
    param_2[1] = auVar14._16_16_;
    param_2 = param_2 + 2;
    auVar3 = _DAT_143091f00;
  }
  auVar4 = auVar3;
  for (; lVar12 < (longlong)(param_3 & 0xfffffffffffffffc); lVar12 = lVar12 + 4) {
    lVar6 = 0;
    lVar9 = 0;
    auVar26 = auVar3;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar26 = vmaxps_avx(auVar26,*(undefined1 (*) [16])(*param_1 + lVar9 * 4));
        lVar9 = lVar9 + lVar10;
      } while (lVar6 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_143091f00 = auVar4;
    *param_2 = auVar26;
    param_2 = param_2 + 1;
    auVar4 = _DAT_143091f00;
  }
  auVar3 = auVar4;
  for (; _DAT_143091f00 = auVar3, lVar12 < (longlong)(param_3 & 0xfffffffffffffffe);
      lVar12 = lVar12 + 2) {
    lVar9 = 0;
    uVar20 = auVar4._0_8_;
    lVar6 = 0;
    auVar3 = auVar4;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + lVar10 * 4;
        auVar3 = vmaxps_avx(auVar3,auVar26);
        uVar20 = auVar3._0_8_;
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    *(undefined8 *)*param_2 = uVar20;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    auVar3 = _DAT_143091f00;
  }
  for (; lVar12 < (longlong)param_3; lVar12 = lVar12 + 1) {
    lVar9 = 0;
    auVar25 = ZEXT1664(auVar3);
    lVar6 = 0;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        puVar2 = (uint *)(*param_1 + lVar6);
        lVar6 = lVar6 + lVar10 * 4;
        auVar4 = vmaxps_avx(auVar25._0_16_,ZEXT416(*puVar2));
        auVar25 = ZEXT1664(auVar4);
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = auVar25._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  return;
}

