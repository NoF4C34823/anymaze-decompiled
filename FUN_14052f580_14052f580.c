
void FUN_14052f580(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [32];
  longlong lVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [32];
  undefined1 (*pauVar32) [32];
  undefined1 (*pauVar33) [32];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_YMM0_H;
  undefined8 extraout_YMM0_H_00;
  undefined8 extraout_YMM0_H_01;
  undefined8 extraout_YMM0_H_02;
  undefined8 extraout_YMM0_H_03;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined1 auVar39 [64];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_YMM0_H_04;
  undefined8 extraout_YMM0_H_05;
  undefined8 extraout_YMM0_H_06;
  undefined8 extraout_YMM0_H_07;
  undefined8 extraout_YMM0_H_08;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined1 auVar40 [64];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_YMM0_H_09;
  undefined8 extraout_YMM0_H_10;
  undefined8 extraout_YMM0_H_11;
  undefined8 extraout_YMM0_H_12;
  undefined8 extraout_var_13;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined8 extraout_var_16;
  undefined1 auVar41 [64];
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_YMM0_H_13;
  undefined8 extraout_YMM0_H_14;
  undefined8 extraout_YMM0_H_15;
  undefined8 extraout_YMM0_H_16;
  undefined8 extraout_YMM0_H_17;
  undefined8 extraout_var_17;
  undefined8 extraout_var_18;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined8 extraout_var_21;
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 (*pauStack_70) [32];
  undefined1 (*pauStack_68) [32];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  
  lVar29 = 0;
  if (0 < param_6 + -1) {
    pauVar33 = param_1;
    do {
      uVar30 = ((ulonglong)param_3 & 0x1f) >> 1;
      if (uVar30 == 0) {
        param_1 = (undefined1 (*) [32])(*pauVar33 + param_2 * 2);
        uVar26 = param_5;
        pauVar28 = param_3;
      }
      else {
        uVar30 = 0x10 - uVar30;
        if ((longlong)param_5 <= (longlong)uVar30) {
          uVar30 = param_5;
        }
        uVar26 = uVar30 & 0xf;
        iVar24 = (int)uVar26 * 2 + 4;
        uVar34 = FUN_1405304a0(pauVar33);
        param_1 = (undefined1 (*) [32])(*pauVar33 + param_2 * 2);
        uVar35 = FUN_1405304a0(param_1,iVar24);
        uVar36 = FUN_1405304a0(*pauVar33 + param_2 * 4,iVar24);
        iVar24 = (int)uVar26 * 2 + -0x1c;
        uVar37 = FUN_1405304a0(pauVar33 + 1);
        uVar38 = FUN_1405304a0(param_1 + 1,iVar24);
        auVar39._0_8_ = FUN_1405304a0((longlong)(*pauVar33 + param_2 * 4) + 0x20,iVar24);
        auVar39._8_56_ = extraout_var;
        auVar22._8_8_ = extraout_XMM0_Qb;
        auVar22._0_8_ = uVar34;
        auVar22._16_8_ = extraout_YMM0_H;
        auVar22._24_8_ = extraout_var_03;
        auVar6._8_8_ = extraout_XMM0_Qb_02;
        auVar6._0_8_ = uVar37;
        auVar6._16_8_ = extraout_YMM0_H_02;
        auVar6._24_8_ = extraout_var_06;
        auVar44._8_8_ = extraout_XMM0_Qb_00;
        auVar44._0_8_ = uVar35;
        auVar44._16_8_ = extraout_YMM0_H_00;
        auVar44._24_8_ = extraout_var_04;
        auVar44 = vpmaxuw_avx2(auVar22,auVar44);
        auVar5._8_8_ = extraout_XMM0_Qb_03;
        auVar5._0_8_ = uVar38;
        auVar5._16_8_ = extraout_YMM0_H_03;
        auVar5._24_8_ = extraout_var_07;
        auVar5 = vpmaxuw_avx2(auVar6,auVar5);
        auVar7._8_8_ = extraout_XMM0_Qb_01;
        auVar7._0_8_ = uVar36;
        auVar7._16_8_ = extraout_YMM0_H_01;
        auVar7._24_8_ = extraout_var_05;
        auVar7 = vpmaxuw_avx2(auVar44,auVar7);
        auVar44 = vpmaxuw_avx2(auVar5,auVar39._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,2);
        auVar5 = vpmaxuw_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar44 = vpmaxuw_avx2(auVar5,auVar44);
        auVar43 = auVar44._0_16_;
        pauStack_70 = param_3;
        if (uVar26 < 8) {
LAB_14052f788:
          if (3 < (longlong)uVar26) {
            *(longlong *)*pauStack_70 = auVar43._0_8_;
            pauStack_70 = (undefined1 (*) [32])(*pauStack_70 + 8);
            auVar43 = vpsrldq_avx(auVar43,8);
            uVar26 = uVar26 - 4;
            if (uVar26 == 0) goto LAB_14052f7ee;
          }
          if (1 < (longlong)uVar26) {
            *(int *)*pauStack_70 = auVar43._0_4_;
            pauStack_70 = (undefined1 (*) [32])(*pauStack_70 + 4);
            auVar43 = vpsrldq_avx(auVar43,4);
            uVar26 = uVar26 - 2;
            if (uVar26 == 0) goto LAB_14052f7ee;
          }
          if (0 < (longlong)uVar26) {
            *(short *)*pauStack_70 = auVar43._0_2_;
          }
        }
        else {
          *(undefined1 (*) [16])*param_3 = auVar43;
          auVar43 = auVar44._16_16_;
          pauStack_70 = (undefined1 (*) [32])(*param_3 + 0x10);
          uVar26 = uVar26 - 8;
          if (uVar26 != 0) goto LAB_14052f788;
        }
LAB_14052f7ee:
        pauVar33 = (undefined1 (*) [32])(*pauVar33 + uVar30 * 2);
        uVar26 = param_5 - uVar30;
        pauVar28 = (undefined1 (*) [32])(*param_3 + uVar30 * 2);
      }
      uVar30 = uVar26 & 0xf;
      lVar25 = (longlong)uVar26 >> 4;
      if (lVar25 != 0) {
        auVar44 = vpmaxuw_avx2(*pauVar33,*(undefined1 (*) [32])(*pauVar33 + param_2 * 2));
        lVar23 = 0;
        auVar44 = vpmaxuw_avx2(auVar44,*(undefined1 (*) [32])(*pauVar33 + param_2 * 4));
        if (0 < lVar25) {
          do {
            lVar23 = lVar23 + 1;
            auVar5 = vpmaxuw_avx2(pauVar33[1],*(undefined1 (*) [32])(pauVar33[1] + param_2 * 2));
            auVar6 = vpmaxuw_avx2(auVar5,*(undefined1 (*) [32])(pauVar33[1] + param_2 * 4));
            pauVar33 = pauVar33 + 1;
            auVar7 = vperm2i128_avx2(auVar44,auVar6,0x21);
            auVar5 = vpalignr_avx2(auVar7,auVar44,2);
            auVar7 = vpalignr_avx2(auVar7,auVar44,4);
            auVar44 = vpmaxuw_avx2(auVar5,auVar44);
            auVar44 = vpmaxuw_avx2(auVar7,auVar44);
            *pauVar28 = auVar44;
            pauVar28 = pauVar28 + 1;
            auVar44 = auVar6;
          } while (lVar23 < lVar25);
        }
      }
      if (uVar30 != 0) {
        iVar24 = (int)uVar30 * 2 + 4;
        uVar34 = FUN_1405304a0(pauVar33);
        uVar35 = FUN_1405304a0(*pauVar33 + param_2 * 2,iVar24);
        uVar36 = FUN_1405304a0(*pauVar33 + param_2 * 4,iVar24);
        iVar24 = (int)uVar30 * 2 + -0x1c;
        uVar37 = FUN_1405304a0(pauVar33 + 1);
        uVar38 = FUN_1405304a0((longlong)(*pauVar33 + param_2 * 2) + 0x20,iVar24);
        auVar40._0_8_ = FUN_1405304a0((longlong)(*pauVar33 + param_2 * 4) + 0x20,iVar24);
        auVar40._8_56_ = extraout_var_00;
        auVar20._8_8_ = extraout_XMM0_Qb_04;
        auVar20._0_8_ = uVar34;
        auVar20._16_8_ = extraout_YMM0_H_04;
        auVar20._24_8_ = extraout_var_08;
        auVar18._8_8_ = extraout_XMM0_Qb_07;
        auVar18._0_8_ = uVar37;
        auVar18._16_8_ = extraout_YMM0_H_07;
        auVar18._24_8_ = extraout_var_11;
        auVar14._8_8_ = extraout_XMM0_Qb_05;
        auVar14._0_8_ = uVar35;
        auVar14._16_8_ = extraout_YMM0_H_05;
        auVar14._24_8_ = extraout_var_09;
        auVar44 = vpmaxuw_avx2(auVar20,auVar14);
        auVar9._8_8_ = extraout_XMM0_Qb_08;
        auVar9._0_8_ = uVar38;
        auVar9._16_8_ = extraout_YMM0_H_08;
        auVar9._24_8_ = extraout_var_12;
        auVar5 = vpmaxuw_avx2(auVar18,auVar9);
        auVar12._8_8_ = extraout_XMM0_Qb_06;
        auVar12._0_8_ = uVar36;
        auVar12._16_8_ = extraout_YMM0_H_06;
        auVar12._24_8_ = extraout_var_10;
        auVar7 = vpmaxuw_avx2(auVar44,auVar12);
        auVar44 = vpmaxuw_avx2(auVar5,auVar40._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,2);
        auVar5 = vpmaxuw_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar44 = vpmaxuw_avx2(auVar5,auVar44);
        auVar43 = auVar44._0_16_;
        if (7 < uVar30) {
          *(undefined1 (*) [16])*pauVar28 = auVar43;
          auVar43 = auVar44._16_16_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 0x10);
          uVar30 = uVar30 - 8;
          if (uVar30 == 0) goto LAB_14052fa1e;
        }
        if (3 < (longlong)uVar30) {
          *(longlong *)*pauVar28 = auVar43._0_8_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 8);
          auVar43 = vpsrldq_avx(auVar43,8);
          uVar30 = uVar30 - 4;
          if (uVar30 == 0) goto LAB_14052fa1e;
        }
        if (1 < (longlong)uVar30) {
          *(int *)*pauVar28 = auVar43._0_4_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 4);
          auVar43 = vpsrldq_avx(auVar43,4);
          uVar30 = uVar30 - 2;
          if (uVar30 == 0) goto LAB_14052fa1e;
        }
        if (0 < (longlong)uVar30) {
          *(short *)*pauVar28 = auVar43._0_2_;
        }
      }
LAB_14052fa1e:
      lVar29 = lVar29 + 1;
      param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
      pauVar33 = param_1;
    } while (lVar29 < param_6 + -1);
  }
  if (lVar29 < param_6) {
    do {
      uVar30 = ((ulonglong)param_3 & 0x1f) >> 1;
      if (uVar30 == 0) {
        pauVar33 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
        uVar26 = param_5;
        pauVar28 = param_3;
      }
      else {
        uVar30 = 0x10 - uVar30;
        if ((longlong)param_5 <= (longlong)uVar30) {
          uVar30 = param_5;
        }
        uVar27 = uVar30 & 0xf;
        iVar24 = (int)uVar27 * 2 + 4;
        uVar34 = FUN_1405304a0(param_1);
        pauVar33 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
        uVar35 = FUN_1405304a0(pauVar33,iVar24);
        puVar2 = *param_1 + param_2 * 4;
        uVar36 = FUN_1405304a0(puVar2,iVar24);
        uVar26 = uVar27 * 2 - 0x1c;
        uVar37 = FUN_1405304a0(param_1 + 1);
        auVar41._0_8_ = FUN_1405304a0(pauVar33 + 1,uVar26 & 0xffffffff);
        auVar41._8_56_ = extraout_var_01;
        auVar45 = (undefined1  [32])0x0;
        switch(uVar26 & 0xffffffff) {
        case 2:
          auVar43 = vpinsrw_avx(ZEXT816(0),(uint)*(ushort *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43;
          break;
        case 4:
          auVar43 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43;
          break;
        case 6:
          auVar43 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar3 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x24),2);
          auVar45._0_16_ =
               ZEXT116(1) * auVar3 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar3;
          break;
        case 8:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43;
          break;
        case 10:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar3 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x28),4);
          auVar45._0_16_ =
               ZEXT116(1) * auVar3 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar3;
          break;
        case 0xc:
          auVar3 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrd_avx(auVar3,*(undefined4 *)(puVar2 + 0x28),2);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar3) +
               ZEXT116(0) * auVar43;
          break;
        case 0xe:
          auVar3 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrd_avx(auVar3,*(undefined4 *)(puVar2 + 0x28),2);
          auVar4 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x2c),6);
          auVar45._0_16_ =
               ZEXT116(1) * auVar4 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0)));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar3) +
               ZEXT116(0) * auVar43) + ZEXT116(0) * auVar4;
          break;
        case 0x10:
          auVar45 = ZEXT1632(*(undefined1 (*) [16])(puVar2 + 0x20));
          break;
        case 0x12:
          auVar43 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x14:
          auVar43 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x16:
          auVar43 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar43 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x34),2);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x18:
          auVar43 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x1a:
          auVar43 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar43 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x38),4);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x1c:
          auVar43 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar43 = vpinsrd_avx(auVar43,*(undefined4 *)(puVar2 + 0x38),2);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
          break;
        case 0x1e:
          auVar43 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar43 = vpinsrd_avx(auVar43,*(undefined4 *)(puVar2 + 0x38),2);
          auVar43 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x3c),6);
          auVar45._0_16_ = ZEXT116(0) * auVar43 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar43;
        }
        auVar21._8_8_ = extraout_XMM0_Qb_09;
        auVar21._0_8_ = uVar34;
        auVar21._16_8_ = extraout_YMM0_H_09;
        auVar21._24_8_ = extraout_var_13;
        auVar16._8_8_ = extraout_XMM0_Qb_10;
        auVar16._0_8_ = uVar35;
        auVar16._16_8_ = extraout_YMM0_H_10;
        auVar16._24_8_ = extraout_var_14;
        auVar44 = vpmaxuw_avx2(auVar21,auVar16);
        auVar19._8_8_ = extraout_XMM0_Qb_12;
        auVar19._0_8_ = uVar37;
        auVar19._16_8_ = extraout_YMM0_H_12;
        auVar19._24_8_ = extraout_var_16;
        auVar5 = vpmaxuw_avx2(auVar41._0_32_,auVar19);
        auVar17._8_8_ = extraout_XMM0_Qb_11;
        auVar17._0_8_ = uVar36;
        auVar17._16_8_ = extraout_YMM0_H_11;
        auVar17._24_8_ = extraout_var_15;
        auVar7 = vpmaxuw_avx2(auVar44,auVar17);
        auVar44 = vpmaxuw_avx2(auVar5,auVar45);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,2);
        auVar5 = vpmaxuw_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar44 = vpmaxuw_avx2(auVar5,auVar44);
        auVar43 = auVar44._0_16_;
        pauStack_68 = param_3;
        if (uVar27 < 8) {
LAB_140530193:
          if (3 < (longlong)uVar27) {
            *(longlong *)*pauStack_68 = auVar43._0_8_;
            pauStack_68 = (undefined1 (*) [32])(*pauStack_68 + 8);
            auVar43 = vpsrldq_avx(auVar43,8);
            uVar27 = uVar27 - 4;
            if (uVar27 == 0) goto LAB_1405301f9;
          }
          if (1 < (longlong)uVar27) {
            *(int *)*pauStack_68 = auVar43._0_4_;
            pauStack_68 = (undefined1 (*) [32])(*pauStack_68 + 4);
            auVar43 = vpsrldq_avx(auVar43,4);
            uVar27 = uVar27 - 2;
            if (uVar27 == 0) goto LAB_1405301f9;
          }
          if (0 < (longlong)uVar27) {
            *(short *)*pauStack_68 = auVar43._0_2_;
          }
        }
        else {
          *(undefined1 (*) [16])*param_3 = auVar43;
          auVar43 = auVar44._16_16_;
          pauStack_68 = (undefined1 (*) [32])(*param_3 + 0x10);
          uVar27 = uVar27 - 8;
          if (uVar27 != 0) goto LAB_140530193;
        }
LAB_1405301f9:
        param_1 = (undefined1 (*) [32])(*param_1 + uVar30 * 2);
        uVar26 = param_5 - uVar30;
        pauVar28 = (undefined1 (*) [32])(*param_3 + uVar30 * 2);
      }
      uVar30 = uVar26 & 0xf;
      lVar25 = (longlong)uVar26 >> 4;
      if (lVar25 != 0) {
        pauVar31 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
        auVar44 = vpmaxuw_avx2(*param_1,*pauVar31);
        pauVar32 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
        auVar44 = vpmaxuw_avx2(auVar44,*pauVar32);
        lVar23 = 0;
        auVar5 = auVar44;
        if (1 < lVar25) {
          do {
            lVar23 = lVar23 + 1;
            auVar44 = vpmaxuw_avx2(param_1[1],*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
            auVar44 = vpmaxuw_avx2(auVar44,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
            param_1 = param_1 + 1;
            auVar6 = vperm2i128_avx2(auVar5,auVar44,0x21);
            auVar7 = vpalignr_avx2(auVar6,auVar5,2);
            auVar6 = vpalignr_avx2(auVar6,auVar5,4);
            auVar5 = vpmaxuw_avx2(auVar7,auVar5);
            auVar5 = vpmaxuw_avx2(auVar6,auVar5);
            *pauVar28 = auVar5;
            pauVar28 = pauVar28 + 1;
            auVar5 = auVar44;
          } while (lVar23 < lVar25 + -1);
          pauVar31 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
          pauVar32 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
        }
        pauVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        auVar5 = vpmaxuw_avx2(ZEXT432(*(uint *)*pauVar1),ZEXT432(*(uint *)pauVar31[1]));
        auVar5 = vpmaxuw_avx2(auVar5,ZEXT432(*(uint *)pauVar32[1]));
        auVar7 = vperm2i128_avx2(auVar44,auVar5,0x21);
        auVar5 = vpalignr_avx2(auVar7,auVar44,2);
        auVar7 = vpalignr_avx2(auVar7,auVar44,4);
        auVar44 = vpmaxuw_avx2(auVar5,auVar44);
        auVar44 = vpmaxuw_avx2(auVar7,auVar44);
        *pauVar28 = auVar44;
        pauVar28 = pauVar28 + 1;
      }
      if (uVar30 != 0) {
        iVar24 = (int)uVar30 * 2 + 4;
        uVar34 = FUN_1405304a0(param_1);
        uVar35 = FUN_1405304a0(*param_1 + param_2 * 2,iVar24);
        uVar36 = FUN_1405304a0(*param_1 + param_2 * 4,iVar24);
        iVar24 = (int)uVar30 * 2 + -0x1c;
        uVar37 = FUN_1405304a0(param_1 + 1);
        uVar38 = FUN_1405304a0((longlong)(*param_1 + param_2 * 2) + 0x20,iVar24);
        auVar42._0_8_ = FUN_1405304a0((longlong)(*param_1 + param_2 * 4) + 0x20,iVar24);
        auVar42._8_56_ = extraout_var_02;
        auVar13._8_8_ = extraout_XMM0_Qb_13;
        auVar13._0_8_ = uVar34;
        auVar13._16_8_ = extraout_YMM0_H_13;
        auVar13._24_8_ = extraout_var_17;
        auVar15._8_8_ = extraout_XMM0_Qb_16;
        auVar15._0_8_ = uVar37;
        auVar15._16_8_ = extraout_YMM0_H_16;
        auVar15._24_8_ = extraout_var_20;
        auVar8._8_8_ = extraout_XMM0_Qb_14;
        auVar8._0_8_ = uVar35;
        auVar8._16_8_ = extraout_YMM0_H_14;
        auVar8._24_8_ = extraout_var_18;
        auVar44 = vpmaxuw_avx2(auVar13,auVar8);
        auVar11._8_8_ = extraout_XMM0_Qb_17;
        auVar11._0_8_ = uVar38;
        auVar11._16_8_ = extraout_YMM0_H_17;
        auVar11._24_8_ = extraout_var_21;
        auVar5 = vpmaxuw_avx2(auVar15,auVar11);
        auVar10._8_8_ = extraout_XMM0_Qb_15;
        auVar10._0_8_ = uVar36;
        auVar10._16_8_ = extraout_YMM0_H_15;
        auVar10._24_8_ = extraout_var_19;
        auVar7 = vpmaxuw_avx2(auVar44,auVar10);
        auVar44 = vpmaxuw_avx2(auVar5,auVar42._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,2);
        auVar5 = vpmaxuw_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar44 = vpmaxuw_avx2(auVar5,auVar44);
        auVar43 = auVar44._0_16_;
        if (7 < uVar30) {
          *(undefined1 (*) [16])*pauVar28 = auVar43;
          auVar43 = auVar44._16_16_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 0x10);
          uVar30 = uVar30 - 8;
          if (uVar30 == 0) goto LAB_14053045e;
        }
        if (3 < (longlong)uVar30) {
          *(longlong *)*pauVar28 = auVar43._0_8_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 8);
          auVar43 = vpsrldq_avx(auVar43,8);
          uVar30 = uVar30 - 4;
          if (uVar30 == 0) goto LAB_14053045e;
        }
        if (1 < (longlong)uVar30) {
          *(int *)*pauVar28 = auVar43._0_4_;
          pauVar28 = (undefined1 (*) [32])(*pauVar28 + 4);
          auVar43 = vpsrldq_avx(auVar43,4);
          uVar30 = uVar30 - 2;
          if (uVar30 == 0) goto LAB_14053045e;
        }
        if (0 < (longlong)uVar30) {
          *(short *)*pauVar28 = auVar43._0_2_;
        }
      }
LAB_14053045e:
      lVar29 = lVar29 + 1;
      param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
      param_1 = pauVar33;
    } while (lVar29 < param_6);
  }
  return;
}

