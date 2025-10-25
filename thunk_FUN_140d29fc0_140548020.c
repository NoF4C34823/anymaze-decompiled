
void thunk_FUN_140d29fc0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 in_ZMM0 [64];
  undefined1 auVar14 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar15 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar16 [32];
  undefined1 in_ZMM4 [64];
  
  uVar10 = param_3 & 0xffffffffffffff80;
  lVar8 = (longlong)param_5;
  lVar9 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar10) {
      auVar3 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      do {
        auVar16 = vpminub_avx2(auVar3,*param_1);
        lVar9 = lVar9 + 0x80;
        auVar15 = vpminub_avx2(auVar3,param_1[1]);
        auVar4 = vpminub_avx2(auVar3,param_1[2]);
        auVar5 = vpminub_avx2(auVar3,param_1[3]);
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 2));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8 * 2));
        in_ZMM1 = ZEXT3264(auVar4);
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        in_ZMM0 = ZEXT3264(auVar16);
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8 * 2));
        param_1 = param_1 + 4;
        *param_2 = auVar16;
        param_2[1] = auVar15;
        param_2[2] = auVar4;
        param_2[3] = auVar5;
        param_2 = param_2 + 4;
      } while (lVar9 < (longlong)uVar10);
    }
    if (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      do {
        auVar16 = vpminub_avx2(auVar3,*param_1);
        lVar9 = lVar9 + 0x40;
        auVar15 = vpminub_avx2(auVar3,param_1[1]);
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 2));
        in_ZMM1 = ZEXT3264(auVar15);
        param_1 = param_1 + 2;
        *param_2 = auVar16;
        param_2[1] = auVar15;
        param_2 = param_2 + 2;
      } while (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
    if (lVar9 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      do {
        auVar16 = vpminub_avx2(auVar3,*param_1);
        in_ZMM1 = ZEXT3264(auVar16);
        lVar9 = lVar9 + 0x20;
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        param_1 = param_1 + 1;
        *param_2 = auVar16;
        param_2 = param_2 + 1;
      } while (lVar9 < (longlong)(param_3 & 0xffffffffffffffe0));
    }
  }
  else if (param_4 == 5) {
    uVar6 = 0;
    if (0 < (longlong)uVar10) {
      uVar12 = (ulonglong)((longlong)(uVar10 + 0x7f) >> 6) >> 0x39;
      auVar3 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      lVar9 = (uVar12 + 0xff + uVar10 & 0xffffffffffffff80) - 0x80;
      lVar11 = 0;
      do {
        auVar16 = vpminub_avx2(auVar3,*(undefined1 (*) [32])(*param_1 + lVar11));
        uVar6 = uVar6 + 1;
        auVar15 = vpminub_avx2(auVar3,*(undefined1 (*) [32])(param_1[1] + lVar11));
        auVar4 = vpminub_avx2(auVar3,*(undefined1 (*) [32])(param_1[2] + lVar11));
        auVar5 = vpminub_avx2(auVar3,*(undefined1 (*) [32])(param_1[3] + lVar11));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar11 + lVar8));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8 + lVar11));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar11 + lVar8 * 2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 2 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8 * 2 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8 * 2 + lVar11));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar11 + lVar8 * 3));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 3 + lVar11));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8 * 3 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8 * 3 + lVar11));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar11 + lVar8 * 4));
        auVar4 = vpminub_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar8 * 4 + lVar11));
        in_ZMM0 = ZEXT3264(auVar4);
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 4 + lVar11));
        auVar5 = vpminub_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar8 * 4 + lVar11));
        in_ZMM1 = ZEXT3264(auVar5);
        *(undefined1 (*) [32])(*param_2 + lVar11) = auVar16;
        *(undefined1 (*) [32])(param_2[1] + lVar11) = auVar15;
        *(undefined1 (*) [32])(param_2[2] + lVar11) = auVar4;
        *(undefined1 (*) [32])(param_2[3] + lVar11) = auVar5;
        lVar11 = lVar11 + 0x80;
      } while (uVar6 < (ulonglong)((longlong)(uVar12 + 0x7f + uVar10) >> 7));
      param_1 = param_1 + uVar6 * 4;
      param_2 = param_2 + uVar6 * 4;
    }
    if (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      do {
        auVar16 = vpminub_avx2(auVar3,*param_1);
        lVar9 = lVar9 + 0x40;
        auVar15 = vpminub_avx2(auVar3,param_1[1]);
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 2));
        in_ZMM1 = ZEXT3264(auVar15);
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 3));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 3));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 4));
        auVar15 = vpminub_avx2(auVar15,*(undefined1 (*) [32])(param_1[1] + lVar8 * 4));
        param_1 = param_1 + 2;
        *param_2 = auVar16;
        param_2[1] = auVar15;
        param_2 = param_2 + 2;
      } while (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
    if (lVar9 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      do {
        auVar16 = vpminub_avx2(auVar3,*param_1);
        in_ZMM1 = ZEXT3264(auVar16);
        lVar9 = lVar9 + 0x20;
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 3));
        auVar16 = vpminub_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar8 * 4));
        param_1 = param_1 + 1;
        *param_2 = auVar16;
        param_2 = param_2 + 1;
      } while (lVar9 < (longlong)(param_3 & 0xffffffffffffffe0));
    }
  }
  else {
    if (0 < (longlong)uVar10) {
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      do {
        lVar11 = 0;
        auVar16 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
        in_ZMM4 = ZEXT3264(auVar16);
        in_ZMM1 = ZEXT3264(auVar3);
        pauVar7 = param_1;
        auVar16 = auVar3;
        auVar15 = auVar3;
        if (0 < param_4) {
          do {
            lVar11 = lVar11 + 1;
            auVar4 = vpminub_avx2(in_ZMM4._0_32_,*pauVar7);
            in_ZMM4 = ZEXT3264(auVar4);
            auVar16 = vpminub_avx2(auVar16,pauVar7[1]);
            auVar15 = vpminub_avx2(auVar15,pauVar7[2]);
            auVar4 = vpminub_avx2(in_ZMM1._0_32_,pauVar7[3]);
            in_ZMM1 = ZEXT3264(auVar4);
            pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar8);
          } while (lVar11 < param_4);
        }
        lVar9 = lVar9 + 0x80;
        param_1 = param_1 + 4;
        *param_2 = in_ZMM4._0_32_;
        param_2[1] = auVar16;
        param_2[2] = auVar15;
        param_2[3] = in_ZMM1._0_32_;
        param_2 = param_2 + 4;
      } while (lVar9 < (longlong)uVar10);
    }
    for (; lVar9 < (longlong)(param_3 & 0xffffffffffffffe0); lVar9 = lVar9 + 0x20) {
      lVar13 = 0;
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      lVar11 = 0;
      if (0 < param_4) {
        do {
          lVar13 = lVar13 + 1;
          auVar3 = vpminub_avx2(in_ZMM0._0_32_,*(undefined1 (*) [32])(*param_1 + lVar11));
          in_ZMM0 = ZEXT3264(auVar3);
          lVar11 = lVar11 + lVar8;
        } while (lVar13 < param_4);
      }
      param_1 = param_1 + 1;
      *param_2 = in_ZMM0._0_32_;
      param_2 = param_2 + 1;
    }
  }
  for (; lVar9 < (longlong)(param_3 & 0xfffffffffffffff0); lVar9 = lVar9 + 0x10) {
    lVar13 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar14);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar13 = lVar13 + 1;
        auVar14 = vpminub_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar11));
        in_ZMM0 = ZEXT1664(auVar14);
        lVar11 = lVar11 + lVar8;
      } while (lVar13 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_2 = in_ZMM0._0_16_;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
  }
  while (lVar9 < (longlong)(param_3 & 0xfffffffffffffff8)) {
    lVar13 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar14);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar13 = lVar13 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar11);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar11 = lVar11 + lVar8;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *puVar1;
        auVar14 = vpminub_avx(in_ZMM0._0_16_,auVar14);
        in_ZMM0 = ZEXT1664(auVar14);
      } while (lVar13 < param_4);
    }
    lVar9 = lVar9 + 8;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
  }
  for (; lVar9 < (longlong)(param_3 & 0xfffffffffffffffc); lVar9 = lVar9 + 4) {
    lVar13 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar14);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        auVar14 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar11),0);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + lVar8;
        auVar14 = vpminub_avx(in_ZMM1._0_16_,auVar14);
        in_ZMM1 = ZEXT1664(auVar14);
      } while (lVar13 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = in_ZMM1._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  while (lVar9 < (longlong)(param_3 & 0xfffffffffffffffe)) {
    lVar13 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar14);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar13 = lVar13 + 1;
        auVar14 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar11),0);
        lVar11 = lVar11 + lVar8;
        auVar14 = vpminub_avx(in_ZMM1._0_16_,auVar14);
        in_ZMM1 = ZEXT1664(auVar14);
      } while (lVar13 < param_4);
    }
    lVar9 = lVar9 + 2;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
    param_2 = (undefined1 (*) [32])(*param_2 + 2);
  }
  for (; lVar9 < (longlong)param_3; lVar9 = lVar9 + 1) {
    lVar13 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar14);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        auVar14 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar11],0);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + lVar8;
        auVar14 = vpminub_avx(in_ZMM1._0_16_,auVar14);
        in_ZMM1 = ZEXT1664(auVar14);
      } while (lVar13 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 1);
    (*param_2)[0] = in_ZMM1[0];
    param_2 = (undefined1 (*) [32])(*param_2 + 1);
  }
  return;
}

