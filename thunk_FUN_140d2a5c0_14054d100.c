
void thunk_FUN_140d2a5c0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 in_ZMM0 [64];
  undefined1 auVar13 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM4 [64];
  
  uVar8 = param_4 & 0xffffffffffffff80;
  lVar9 = 0;
  auVar18 = in_ZMM4._0_32_;
  if (param_5 == 3) {
    if (0 < (longlong)uVar8) {
      auVar18 = vpcmpeqd_avx2(auVar18,auVar18);
      in_ZMM4 = ZEXT3264(auVar18);
      do {
        auVar17 = vpminub_avx2(auVar18,*param_1);
        lVar9 = lVar9 + 0x80;
        auVar15 = vpminub_avx2(auVar18,param_1[1]);
        auVar4 = vpminub_avx2(auVar18,param_1[2]);
        auVar5 = vpminub_avx2(auVar18,param_1[3]);
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2 * 2));
        in_ZMM1 = ZEXT3264(auVar4);
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
        in_ZMM0 = ZEXT3264(auVar17);
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2 * 2));
        param_1 = param_1 + 4;
        *param_3 = auVar17;
        param_3[1] = auVar15;
        param_3[2] = auVar4;
        param_3[3] = auVar5;
        param_3 = param_3 + 4;
      } while (lVar9 < (longlong)uVar8);
    }
    while (lVar9 < (longlong)(param_4 & 0xffffffffffffffc0)) {
      in_ZMM0 = ZEXT3264(*param_1);
      lVar9 = lVar9 + 0x40;
      in_ZMM1 = ZEXT3264(param_1[1]);
      auVar18 = vpminub_avx2(*param_1,*(undefined1 (*) [32])(*param_1 + param_2));
      auVar17 = vpminub_avx2(param_1[1],*(undefined1 (*) [32])(param_1[1] + param_2));
      auVar18 = vpminub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
      in_ZMM4 = ZEXT3264(auVar18);
      auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
      param_1 = param_1 + 2;
      *param_3 = auVar18;
      param_3[1] = auVar17;
      param_3 = param_3 + 2;
    }
  }
  else if (param_5 == 5) {
    uVar6 = 0;
    if (0 < (longlong)uVar8) {
      uVar10 = (ulonglong)((longlong)(uVar8 + 0x7f) >> 6) >> 0x39;
      auVar18 = vpcmpeqd_avx2(auVar18,auVar18);
      in_ZMM4 = ZEXT3264(auVar18);
      lVar9 = (uVar10 + 0xff + uVar8 & 0xffffffffffffff80) - 0x80;
      lVar11 = 0;
      do {
        auVar17 = vpminub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar11));
        uVar6 = uVar6 + 1;
        auVar15 = vpminub_avx2(auVar18,*(undefined1 (*) [32])(param_1[1] + lVar11));
        auVar4 = vpminub_avx2(auVar18,*(undefined1 (*) [32])(param_1[2] + lVar11));
        auVar5 = vpminub_avx2(auVar18,*(undefined1 (*) [32])(param_1[3] + lVar11));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + lVar11 + param_2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2 + lVar11));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + lVar11 + param_2 * 2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 2 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2 * 2 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2 * 2 + lVar11));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + lVar11 + param_2 * 3));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 3 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2 * 3 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2 * 3 + lVar11));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + lVar11 + param_2 * 4));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + param_2 * 4 + lVar11));
        in_ZMM0 = ZEXT3264(auVar4);
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 4 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + param_2 * 4 + lVar11));
        in_ZMM1 = ZEXT3264(auVar5);
        *(undefined1 (*) [32])(*param_3 + lVar11) = auVar17;
        *(undefined1 (*) [32])(param_3[1] + lVar11) = auVar15;
        *(undefined1 (*) [32])(param_3[2] + lVar11) = auVar4;
        *(undefined1 (*) [32])(param_3[3] + lVar11) = auVar5;
        lVar11 = lVar11 + 0x80;
      } while (uVar6 < (ulonglong)((longlong)(uVar10 + 0x7f + uVar8) >> 7));
      param_1 = param_1 + uVar6 * 4;
      param_3 = param_3 + uVar6 * 4;
    }
    if (lVar9 < (longlong)(param_4 & 0xffffffffffffffc0)) {
      auVar18 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar18);
      do {
        auVar17 = vpminub_avx2(auVar18,*param_1);
        lVar9 = lVar9 + 0x40;
        auVar15 = vpminub_avx2(auVar18,param_1[1]);
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
        in_ZMM1 = ZEXT3264(auVar15);
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2 * 3));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 3));
        auVar17 = vpminub_avx2(auVar17,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
        in_ZMM4 = ZEXT3264(auVar17);
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
        param_1 = param_1 + 2;
        *param_3 = auVar17;
        param_3[1] = auVar15;
        param_3 = param_3 + 2;
      } while (lVar9 < (longlong)(param_4 & 0xffffffffffffffc0));
    }
  }
  else {
    if (0 < (longlong)uVar8) {
      auVar18 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar18);
      do {
        lVar11 = 0;
        auVar17 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
        in_ZMM4 = ZEXT3264(auVar17);
        in_ZMM1 = ZEXT3264(auVar18);
        pauVar7 = param_1;
        auVar17 = auVar18;
        auVar15 = auVar18;
        if (0 < param_5) {
          do {
            lVar11 = lVar11 + 1;
            auVar4 = vpminub_avx2(in_ZMM4._0_32_,*pauVar7);
            in_ZMM4 = ZEXT3264(auVar4);
            auVar17 = vpminub_avx2(auVar17,pauVar7[1]);
            auVar15 = vpminub_avx2(auVar15,pauVar7[2]);
            auVar4 = vpminub_avx2(in_ZMM1._0_32_,pauVar7[3]);
            in_ZMM1 = ZEXT3264(auVar4);
            pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2);
          } while (lVar11 < param_5);
        }
        lVar9 = lVar9 + 0x80;
        param_1 = param_1 + 4;
        *param_3 = in_ZMM4._0_32_;
        param_3[1] = auVar17;
        param_3[2] = auVar15;
        param_3[3] = in_ZMM1._0_32_;
        param_3 = param_3 + 4;
      } while (lVar9 < (longlong)uVar8);
    }
    if (lVar9 < (longlong)(param_4 & 0xffffffffffffffc0)) {
      auVar18 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar18);
      do {
        lVar11 = 0;
        auVar18 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
        in_ZMM1 = ZEXT3264(auVar18);
        auVar18 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
        in_ZMM0 = ZEXT3264(auVar18);
        pauVar7 = param_1;
        if (0 < param_5) {
          do {
            lVar11 = lVar11 + 1;
            auVar18 = vpminub_avx2(in_ZMM1._0_32_,*pauVar7);
            in_ZMM1 = ZEXT3264(auVar18);
            auVar18 = vpminub_avx2(in_ZMM0._0_32_,pauVar7[1]);
            in_ZMM0 = ZEXT3264(auVar18);
            pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2);
          } while (lVar11 < param_5);
        }
        lVar9 = lVar9 + 0x40;
        param_1 = param_1 + 2;
        *param_3 = in_ZMM1._0_32_;
        param_3[1] = in_ZMM0._0_32_;
        param_3 = param_3 + 2;
      } while (lVar9 < (longlong)(param_4 & 0xffffffffffffffc0));
    }
  }
  uVar6 = param_4 & 0xffffffffffffffc0;
  uVar8 = param_4 & 0xffffffffffffffe0;
  if (lVar9 < (longlong)uVar8) {
    auVar18 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar18);
    do {
      while( true ) {
        lVar12 = 0;
        in_ZMM1 = ZEXT3264(auVar18);
        lVar11 = 0;
        if (param_5 < 1) break;
        do {
          lVar12 = lVar12 + 1;
          auVar17 = vpminub_avx2(in_ZMM1._0_32_,*(undefined1 (*) [32])(*param_1 + lVar11));
          in_ZMM1 = ZEXT3264(auVar17);
          lVar11 = lVar11 + param_2;
        } while (lVar12 < param_5);
        lVar9 = lVar9 + 0x20;
        param_1 = param_1 + 1;
        *param_3 = auVar17;
        param_3 = param_3 + 1;
        if ((longlong)uVar8 <= lVar9) goto LAB_140d2a9e7;
      }
      lVar9 = lVar9 + 0x20;
      param_1 = param_1 + 1;
      *param_3 = auVar18;
      param_3 = param_3 + 1;
    } while (lVar9 < (longlong)uVar8);
LAB_140d2a9fb:
    if ((longlong)uVar6 <= lVar9) goto LAB_140d2aaf0;
    auVar13 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar13);
    do {
      auVar16 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar16);
      in_ZMM1 = ZEXT1664(auVar13);
      lVar11 = 0;
      pauVar7 = param_1;
      auVar16 = auVar13;
      auVar14 = auVar13;
      if (0 < param_5) {
        do {
          lVar11 = lVar11 + 1;
          auVar3 = vpminub_avx(in_ZMM4._0_16_,*(undefined1 (*) [16])*pauVar7);
          in_ZMM4 = ZEXT1664(auVar3);
          auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(*pauVar7 + 0x10));
          auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])pauVar7[1]);
          auVar3 = vpminub_avx(in_ZMM1._0_16_,*(undefined1 (*) [16])(pauVar7[1] + 0x10));
          in_ZMM1 = ZEXT1664(auVar3);
          pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2);
        } while (lVar11 < param_5);
      }
      lVar9 = lVar9 + 0x40;
      param_1 = param_1 + 2;
      *(undefined1 (*) [16])*param_3 = in_ZMM4._0_16_;
      *(undefined1 (*) [16])(*param_3 + 0x10) = auVar16;
      *(undefined1 (*) [16])param_3[1] = auVar14;
      *(undefined1 (*) [16])(param_3[1] + 0x10) = in_ZMM1._0_16_;
      param_3 = param_3 + 2;
    } while (lVar9 < (longlong)uVar6);
  }
  else {
LAB_140d2a9e7:
    if (param_5 == 3) {
      while (lVar9 < (longlong)uVar6) {
        auVar13 = vpminub_avx(*(undefined1 (*) [16])*param_1,
                              *(undefined1 (*) [16])(*param_1 + param_2));
        lVar9 = lVar9 + 0x40;
        auVar16 = vpminub_avx(*(undefined1 (*) [16])(*param_1 + 0x10),
                              *(undefined1 (*) [16])(*param_1 + param_2 + 0x10));
        auVar14 = vpminub_avx(*(undefined1 (*) [16])param_1[1],
                              *(undefined1 (*) [16])(param_1[1] + param_2));
        auVar3 = vpminub_avx(*(undefined1 (*) [16])(param_1[1] + 0x10),
                             *(undefined1 (*) [16])(param_1[1] + param_2 + 0x10));
        in_ZMM1 = ZEXT1664(auVar3);
        auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
        in_ZMM0 = ZEXT1664(auVar13);
        auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(*param_1 + param_2 * 2 + 0x10));
        auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
        auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + param_2 * 2 + 0x10));
        param_1 = param_1 + 2;
        *(undefined1 (*) [16])*param_3 = auVar13;
        *(undefined1 (*) [16])(*param_3 + 0x10) = auVar16;
        *(undefined1 (*) [16])param_3[1] = auVar14;
        *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar3;
        param_3 = param_3 + 2;
      }
    }
    else {
      if (param_5 != 5) goto LAB_140d2a9fb;
      if (lVar9 < (longlong)uVar6) {
        lVar11 = param_2 * 3;
        do {
          auVar13 = vpminub_avx(*(undefined1 (*) [16])*param_1,
                                *(undefined1 (*) [16])(*param_1 + param_2));
          lVar9 = lVar9 + 0x40;
          auVar16 = vpminub_avx(*(undefined1 (*) [16])(*param_1 + 0x10),
                                *(undefined1 (*) [16])(*param_1 + param_2 + 0x10));
          auVar14 = vpminub_avx(*(undefined1 (*) [16])param_1[1],
                                *(undefined1 (*) [16])(param_1[1] + param_2));
          auVar3 = vpminub_avx(*(undefined1 (*) [16])(param_1[1] + 0x10),
                               *(undefined1 (*) [16])(param_1[1] + param_2 + 0x10));
          auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
          auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(*param_1 + param_2 * 2 + 0x10));
          auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
          auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + param_2 * 2 + 0x10));
          auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar11));
          auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(*param_1 + lVar11 + 0x10));
          auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(param_1[1] + lVar11));
          auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + lVar11 + 0x10));
          auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(*param_1 + param_2 * 4));
          auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(*param_1 + param_2 * 4 + 0x10));
          auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(param_1[1] + param_2 * 4));
          in_ZMM0 = ZEXT1664(auVar14);
          auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + param_2 * 4 + 0x10));
          in_ZMM1 = ZEXT1664(auVar3);
          param_1 = param_1 + 2;
          *(undefined1 (*) [16])*param_3 = auVar13;
          *(undefined1 (*) [16])(*param_3 + 0x10) = auVar16;
          *(undefined1 (*) [16])param_3[1] = auVar14;
          *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar3;
          param_3 = param_3 + 2;
        } while (lVar9 < (longlong)uVar6);
      }
    }
  }
  for (; lVar9 < (longlong)uVar8; lVar9 = lVar9 + 0x20) {
    lVar11 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar13);
    auVar13 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar13);
    pauVar7 = param_1;
    if (0 < param_5) {
      do {
        lVar11 = lVar11 + 1;
        auVar13 = vpminub_avx(in_ZMM1._0_16_,*(undefined1 (*) [16])*pauVar7);
        in_ZMM1 = ZEXT1664(auVar13);
        auVar13 = vpminub_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*pauVar7 + 0x10));
        in_ZMM0 = ZEXT1664(auVar13);
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + param_2);
      } while (lVar11 < param_5);
    }
    param_1 = param_1 + 1;
    *(undefined1 (*) [16])*param_3 = in_ZMM1._0_16_;
    *(undefined1 (*) [16])(*param_3 + 0x10) = in_ZMM0._0_16_;
    param_3 = param_3 + 1;
  }
LAB_140d2aaf0:
  for (; lVar9 < (longlong)(param_4 & 0xfffffffffffffff0); lVar9 = lVar9 + 0x10) {
    lVar12 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar13);
    lVar11 = 0;
    if (0 < param_5) {
      do {
        lVar12 = lVar12 + 1;
        auVar13 = vpminub_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar11));
        in_ZMM0 = ZEXT1664(auVar13);
        lVar11 = lVar11 + param_2;
      } while (lVar12 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_3 = in_ZMM0._0_16_;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
  }
  while (lVar9 < (longlong)(param_4 & 0xfffffffffffffff8)) {
    lVar12 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar13);
    lVar11 = 0;
    if (0 < param_5) {
      do {
        lVar12 = lVar12 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar11);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar11 = lVar11 + param_2;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar1;
        auVar13 = vpminub_avx(in_ZMM0._0_16_,auVar13);
        in_ZMM0 = ZEXT1664(auVar13);
      } while (lVar12 < param_5);
    }
    lVar9 = lVar9 + 8;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
  }
  for (; lVar9 < (longlong)(param_4 & 0xfffffffffffffffc); lVar9 = lVar9 + 4) {
    lVar12 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar13);
    lVar11 = 0;
    if (0 < param_5) {
      do {
        auVar13 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar11),0);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + param_2;
        auVar13 = vpminub_avx(in_ZMM1._0_16_,auVar13);
        in_ZMM1 = ZEXT1664(auVar13);
      } while (lVar12 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = in_ZMM1._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  while (lVar9 < (longlong)(param_4 & 0xfffffffffffffffe)) {
    lVar12 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar13);
    lVar11 = 0;
    if (0 < param_5) {
      do {
        lVar12 = lVar12 + 1;
        auVar13 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar11),0);
        lVar11 = lVar11 + param_2;
        auVar13 = vpminub_avx(in_ZMM1._0_16_,auVar13);
        in_ZMM1 = ZEXT1664(auVar13);
      } while (lVar12 < param_5);
    }
    lVar9 = lVar9 + 2;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
    param_3 = (undefined1 (*) [32])(*param_3 + 2);
  }
  for (; lVar9 < (longlong)param_4; lVar9 = lVar9 + 1) {
    lVar12 = 0;
    auVar13 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar13);
    lVar11 = 0;
    if (0 < param_5) {
      do {
        auVar13 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar11],0);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + param_2;
        auVar13 = vpminub_avx(in_ZMM1._0_16_,auVar13);
        in_ZMM1 = ZEXT1664(auVar13);
      } while (lVar12 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 1);
    (*param_3)[0] = in_ZMM1[0];
    param_3 = (undefined1 (*) [32])(*param_3 + 1);
  }
  return;
}

