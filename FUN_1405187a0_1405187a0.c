
void FUN_1405187a0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
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
  undefined1 (*pauVar27) [32];
  longlong lVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [32];
  undefined1 (*pauVar31) [32];
  undefined1 (*pauVar32) [32];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
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
  undefined1 auVar38 [64];
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
  undefined1 auVar39 [64];
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
  undefined1 auVar40 [64];
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
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 (*pauStack_68) [32];
  undefined1 (*pauStack_60) [32];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  
  lVar28 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar26 = param_5;
      pauVar27 = param_3;
      pauVar32 = param_1;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar29 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar29) {
          uVar29 = param_5;
        }
        uVar26 = uVar29 & 0x1f;
        iVar24 = (int)uVar26 + 8;
        uVar33 = FUN_1405196e0(param_1);
        uVar34 = FUN_1405196e0(*param_1 + param_2,iVar24);
        uVar35 = FUN_1405196e0(*param_1 + param_2 * 2,iVar24);
        iVar24 = (int)uVar26 + -0x18;
        uVar36 = FUN_1405196e0(param_1 + 1);
        uVar37 = FUN_1405196e0(param_1[1] + param_2,iVar24);
        auVar38._0_8_ = FUN_1405196e0((longlong)(*param_1 + param_2 * 2) + 0x20,iVar24);
        auVar38._8_56_ = extraout_var;
        auVar6._8_8_ = extraout_XMM0_Qb;
        auVar6._0_8_ = uVar33;
        auVar6._16_8_ = extraout_YMM0_H;
        auVar6._24_8_ = extraout_var_03;
        auVar22._8_8_ = extraout_XMM0_Qb_02;
        auVar22._0_8_ = uVar36;
        auVar22._16_8_ = extraout_YMM0_H_02;
        auVar22._24_8_ = extraout_var_06;
        auVar44._8_8_ = extraout_XMM0_Qb_00;
        auVar44._0_8_ = uVar34;
        auVar44._16_8_ = extraout_YMM0_H_00;
        auVar44._24_8_ = extraout_var_04;
        auVar44 = vpmaxub_avx2(auVar6,auVar44);
        auVar5._8_8_ = extraout_XMM0_Qb_03;
        auVar5._0_8_ = uVar37;
        auVar5._16_8_ = extraout_YMM0_H_03;
        auVar5._24_8_ = extraout_var_07;
        auVar5 = vpmaxub_avx2(auVar22,auVar5);
        auVar7._8_8_ = extraout_XMM0_Qb_01;
        auVar7._0_8_ = uVar35;
        auVar7._16_8_ = extraout_YMM0_H_01;
        auVar7._24_8_ = extraout_var_05;
        auVar7 = vpmaxub_avx2(auVar44,auVar7);
        auVar44 = vpmaxub_avx2(auVar5,auVar38._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar5 = vpmaxub_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,8);
        auVar44 = vpmaxub_avx2(auVar5,auVar44);
        auVar42 = auVar44._0_16_;
        pauStack_68 = param_3;
        if (uVar26 < 0x10) {
LAB_1405189a7:
          if (7 < (longlong)uVar26) {
            *(longlong *)*pauStack_68 = auVar42._0_8_;
            pauStack_68 = (undefined1 (*) [32])(*pauStack_68 + 8);
            auVar42 = vpsrldq_avx(auVar42,8);
            uVar26 = uVar26 - 8;
            if (uVar26 == 0) goto LAB_140518a33;
          }
          if (3 < (longlong)uVar26) {
            *(int *)*pauStack_68 = auVar42._0_4_;
            pauStack_68 = (undefined1 (*) [32])(*pauStack_68 + 4);
            auVar42 = vpsrldq_avx(auVar42,4);
            uVar26 = uVar26 - 4;
            if (uVar26 == 0) goto LAB_140518a33;
          }
          auVar43 = auVar42;
          if (1 < (longlong)uVar26) {
            auVar43 = vpsrldq_avx(auVar42,2);
            *(short *)*pauStack_68 = auVar42._0_2_;
            pauStack_68 = (undefined1 (*) [32])(*pauStack_68 + 2);
            if (uVar26 == 2) goto LAB_140518a33;
          }
          (*pauStack_68)[0] = auVar43[0];
        }
        else {
          *(undefined1 (*) [16])*param_3 = auVar42;
          auVar42 = auVar44._16_16_;
          pauStack_68 = (undefined1 (*) [32])(*param_3 + 0x10);
          uVar26 = uVar26 - 0x10;
          if (uVar26 != 0) goto LAB_1405189a7;
        }
LAB_140518a33:
        uVar26 = param_5 - uVar29;
        pauVar27 = (undefined1 (*) [32])(*param_3 + uVar29);
        pauVar32 = (undefined1 (*) [32])(*param_1 + uVar29);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      uVar29 = uVar26 & 0x1f;
      lVar25 = (longlong)uVar26 >> 5;
      if (lVar25 != 0) {
        auVar44 = vpmaxub_avx2(*pauVar32,*(undefined1 (*) [32])(*pauVar32 + param_2));
        auVar44 = vpmaxub_avx2(auVar44,*(undefined1 (*) [32])(*pauVar32 + param_2 * 2));
        lVar23 = 0;
        if (0 < lVar25) {
          do {
            lVar23 = lVar23 + 1;
            auVar5 = vpmaxub_avx2(pauVar32[1],*(undefined1 (*) [32])(pauVar32[1] + param_2));
            auVar6 = vpmaxub_avx2(auVar5,*(undefined1 (*) [32])(pauVar32[1] + param_2 * 2));
            pauVar32 = pauVar32 + 1;
            auVar7 = vperm2i128_avx2(auVar44,auVar6,0x21);
            auVar5 = vpalignr_avx2(auVar7,auVar44,4);
            auVar7 = vpalignr_avx2(auVar7,auVar44,8);
            auVar44 = vpmaxub_avx2(auVar5,auVar44);
            auVar44 = vpmaxub_avx2(auVar7,auVar44);
            *pauVar27 = auVar44;
            pauVar27 = pauVar27 + 1;
            auVar44 = auVar6;
          } while (lVar23 < lVar25);
        }
      }
      if (uVar29 != 0) {
        iVar24 = (int)uVar29 + 8;
        uVar33 = FUN_1405196e0(pauVar32);
        uVar34 = FUN_1405196e0(*pauVar32 + param_2,iVar24);
        uVar35 = FUN_1405196e0(*pauVar32 + param_2 * 2,iVar24);
        iVar24 = (int)uVar29 + -0x18;
        uVar36 = FUN_1405196e0(pauVar32 + 1);
        uVar37 = FUN_1405196e0(pauVar32[1] + param_2,iVar24);
        auVar39._0_8_ = FUN_1405196e0((longlong)(*pauVar32 + param_2 * 2) + 0x20,iVar24);
        auVar39._8_56_ = extraout_var_00;
        auVar17._8_8_ = extraout_XMM0_Qb_04;
        auVar17._0_8_ = uVar33;
        auVar17._16_8_ = extraout_YMM0_H_04;
        auVar17._24_8_ = extraout_var_08;
        auVar20._8_8_ = extraout_XMM0_Qb_07;
        auVar20._0_8_ = uVar36;
        auVar20._16_8_ = extraout_YMM0_H_07;
        auVar20._24_8_ = extraout_var_11;
        auVar12._8_8_ = extraout_XMM0_Qb_05;
        auVar12._0_8_ = uVar34;
        auVar12._16_8_ = extraout_YMM0_H_05;
        auVar12._24_8_ = extraout_var_09;
        auVar44 = vpmaxub_avx2(auVar17,auVar12);
        auVar9._8_8_ = extraout_XMM0_Qb_08;
        auVar9._0_8_ = uVar37;
        auVar9._16_8_ = extraout_YMM0_H_08;
        auVar9._24_8_ = extraout_var_12;
        auVar5 = vpmaxub_avx2(auVar20,auVar9);
        auVar15._8_8_ = extraout_XMM0_Qb_06;
        auVar15._0_8_ = uVar35;
        auVar15._16_8_ = extraout_YMM0_H_06;
        auVar15._24_8_ = extraout_var_10;
        auVar7 = vpmaxub_avx2(auVar44,auVar15);
        auVar44 = vpmaxub_avx2(auVar5,auVar39._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar5 = vpmaxub_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,8);
        auVar44 = vpmaxub_avx2(auVar5,auVar44);
        auVar42 = auVar44._0_16_;
        if (0xf < uVar29) {
          *(undefined1 (*) [16])*pauVar27 = auVar42;
          auVar42 = auVar44._16_16_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 0x10);
          uVar29 = uVar29 - 0x10;
          if (uVar29 == 0) goto LAB_140518c3b;
        }
        if (7 < (longlong)uVar29) {
          *(longlong *)*pauVar27 = auVar42._0_8_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 8);
          auVar42 = vpsrldq_avx(auVar42,8);
          uVar29 = uVar29 - 8;
          if (uVar29 == 0) goto LAB_140518c3b;
        }
        if (3 < (longlong)uVar29) {
          *(int *)*pauVar27 = auVar42._0_4_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 4);
          auVar42 = vpsrldq_avx(auVar42,4);
          uVar29 = uVar29 - 4;
          if (uVar29 == 0) goto LAB_140518c3b;
        }
        auVar43 = auVar42;
        if (1 < (longlong)uVar29) {
          auVar43 = vpsrldq_avx(auVar42,2);
          *(short *)*pauVar27 = auVar42._0_2_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 2);
          if (uVar29 == 2) goto LAB_140518c3b;
        }
        (*pauVar27)[0] = auVar43[0];
      }
LAB_140518c3b:
      lVar28 = lVar28 + 1;
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar28 < param_6 + -1);
  }
  if (lVar28 < param_6) {
    do {
      uVar26 = param_5;
      pauVar27 = param_3;
      pauVar32 = param_1;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar29 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar29) {
          uVar29 = param_5;
        }
        uVar26 = uVar29 & 0x1f;
        iVar24 = (int)uVar26 + 8;
        uVar33 = FUN_1405196e0(param_1);
        uVar34 = FUN_1405196e0(*param_1 + param_2,iVar24);
        puVar2 = *param_1 + param_2 * 2;
        uVar35 = FUN_1405196e0(puVar2,iVar24);
        uVar36 = FUN_1405196e0(param_1 + 1);
        auVar40._0_8_ = FUN_1405196e0(param_1[1] + param_2,uVar26 - 0x18 & 0xffffffff);
        auVar40._8_56_ = extraout_var_01;
        auVar45 = (undefined1  [32])0x0;
        switch(uVar26 - 0x18 & 0xffffffff) {
        case 1:
          auVar42 = vpinsrb_avx(ZEXT816(0),(uint)(byte)puVar2[0x20],0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42;
          break;
        case 2:
          auVar42 = vpinsrw_avx(ZEXT816(0),(uint)*(ushort *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42;
          break;
        case 3:
          auVar43 = vpinsrw_avx(ZEXT816(0),(uint)*(ushort *)(puVar2 + 0x20),0);
          auVar42 = vpinsrb_avx(auVar43,(uint)(byte)puVar2[0x22],2);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar42;
          break;
        case 4:
          auVar42 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42;
          break;
        case 5:
          auVar43 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar42 = vpinsrb_avx(auVar43,(uint)(byte)puVar2[0x24],4);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar42;
          break;
        case 6:
          auVar42 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x24),2);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42) +
               ZEXT116(0) * auVar43;
          break;
        case 7:
          auVar43 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)(puVar2 + 0x20),0);
          auVar3 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x24),2);
          auVar42 = vpinsrb_avx(auVar3,(uint)(byte)puVar2[0x26],6);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0)));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43)
               + ZEXT116(0) * auVar3) + ZEXT116(0) * auVar42;
          break;
        case 8:
          auVar42 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0);
          auVar45._16_16_ =
               ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42;
          break;
        case 9:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar42 = vpinsrb_avx(auVar43,(uint)(byte)puVar2[0x28],8);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar42;
          break;
        case 10:
          auVar42 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x28),4);
          auVar45._0_16_ =
               ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar42 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar42) +
               ZEXT116(0) * auVar43;
          break;
        case 0xb:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar3 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x28),4);
          auVar42 = vpinsrb_avx(auVar3,(uint)(byte)puVar2[0x2a],10);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0)));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43)
               + ZEXT116(0) * auVar3) + ZEXT116(0) * auVar42;
          break;
        case 0xc:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar42 = vpinsrd_avx(auVar43,*(undefined4 *)(puVar2 + 0x28),2);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43) +
               ZEXT116(0) * auVar42;
          break;
        case 0xd:
          auVar3 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrd_avx(auVar3,*(undefined4 *)(puVar2 + 0x28),2);
          auVar42 = vpinsrb_avx(auVar43,(uint)(byte)puVar2[0x2c],0xc);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0)));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar3) +
               ZEXT116(0) * auVar43) + ZEXT116(0) * auVar42;
          break;
        case 0xe:
          auVar43 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar42 = vpinsrd_avx(auVar43,*(undefined4 *)(puVar2 + 0x28),2);
          auVar3 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x2c),6);
          auVar45._0_16_ =
               ZEXT116(1) * auVar3 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0)));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar43)
               + ZEXT116(0) * auVar42) + ZEXT116(0) * auVar3;
          break;
        case 0xf:
          auVar3 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)(puVar2 + 0x20),0);
          auVar43 = vpinsrd_avx(auVar3,*(undefined4 *)(puVar2 + 0x28),2);
          auVar4 = vpinsrw_avx(auVar43,(uint)*(ushort *)(puVar2 + 0x2c),6);
          auVar42 = vpinsrb_avx(auVar4,(uint)(byte)puVar2[0x2e],0xe);
          auVar45._0_16_ =
               ZEXT116(1) * auVar42 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar4 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar43 +
               ZEXT116(0) *
               (ZEXT116(1) * auVar3 + ZEXT116(0) * SUB6416(ZEXT3264((undefined1  [32])0x0),0))));
          auVar45._16_16_ =
               ZEXT116(1) *
               (ZEXT116(1) *
                (ZEXT116(1) *
                 (ZEXT116(1) * SUB6416(ZEXT3264((undefined1  [32])0x0),0x10) + ZEXT116(0) * auVar3)
                + ZEXT116(0) * auVar43) + ZEXT116(0) * auVar4) + ZEXT116(0) * auVar42;
          break;
        case 0x10:
          auVar45 = ZEXT1632(*(undefined1 (*) [16])(puVar2 + 0x20));
          break;
        case 0x11:
          auVar42 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)puVar2[0x30],0);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x12:
          auVar42 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x13:
          auVar42 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(puVar2 + 0x30),0);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x32],2);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x14:
          auVar42 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x15:
          auVar42 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x34],4);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x16:
          auVar42 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x34),2);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x17:
          auVar42 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x34),2);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x36],6);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x18:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x19:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x38],8);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1a:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x38),4);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1b:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x38),4);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x3a],10);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1c:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrd_avx(auVar42,*(undefined4 *)(puVar2 + 0x38),2);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1d:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrd_avx(auVar42,*(undefined4 *)(puVar2 + 0x38),2);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x3c],0xc);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1e:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrd_avx(auVar42,*(undefined4 *)(puVar2 + 0x38),2);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x3c),6);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
          break;
        case 0x1f:
          auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(puVar2 + 0x30),0);
          auVar42 = vpinsrd_avx(auVar42,*(undefined4 *)(puVar2 + 0x38),2);
          auVar42 = vpinsrw_avx(auVar42,(uint)*(ushort *)(puVar2 + 0x3c),6);
          auVar42 = vpinsrb_avx(auVar42,(uint)(byte)puVar2[0x3e],0xe);
          auVar45._0_16_ = ZEXT116(0) * auVar42 + ZEXT116(1) * *(undefined1 (*) [16])(puVar2 + 0x20)
          ;
          auVar45._16_16_ = ZEXT116(1) * auVar42;
        }
        auVar19._8_8_ = extraout_XMM0_Qb_09;
        auVar19._0_8_ = uVar33;
        auVar19._16_8_ = extraout_YMM0_H_09;
        auVar19._24_8_ = extraout_var_13;
        auVar18._8_8_ = extraout_XMM0_Qb_10;
        auVar18._0_8_ = uVar34;
        auVar18._16_8_ = extraout_YMM0_H_10;
        auVar18._24_8_ = extraout_var_14;
        auVar44 = vpmaxub_avx2(auVar19,auVar18);
        auVar21._8_8_ = extraout_XMM0_Qb_12;
        auVar21._0_8_ = uVar36;
        auVar21._16_8_ = extraout_YMM0_H_12;
        auVar21._24_8_ = extraout_var_16;
        auVar5 = vpmaxub_avx2(auVar40._0_32_,auVar21);
        auVar16._8_8_ = extraout_XMM0_Qb_11;
        auVar16._0_8_ = uVar35;
        auVar16._16_8_ = extraout_YMM0_H_11;
        auVar16._24_8_ = extraout_var_15;
        auVar7 = vpmaxub_avx2(auVar44,auVar16);
        auVar44 = vpmaxub_avx2(auVar5,auVar45);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar5 = vpmaxub_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,8);
        auVar44 = vpmaxub_avx2(auVar5,auVar44);
        auVar42 = auVar44._0_16_;
        pauStack_60 = param_3;
        if (uVar26 < 0x10) {
LAB_1405193b2:
          if (7 < (longlong)uVar26) {
            *(longlong *)*pauStack_60 = auVar42._0_8_;
            pauStack_60 = (undefined1 (*) [32])(*pauStack_60 + 8);
            auVar42 = vpsrldq_avx(auVar42,8);
            uVar26 = uVar26 - 8;
            if (uVar26 == 0) goto LAB_14051943e;
          }
          if (3 < (longlong)uVar26) {
            *(int *)*pauStack_60 = auVar42._0_4_;
            pauStack_60 = (undefined1 (*) [32])(*pauStack_60 + 4);
            auVar42 = vpsrldq_avx(auVar42,4);
            uVar26 = uVar26 - 4;
            if (uVar26 == 0) goto LAB_14051943e;
          }
          auVar43 = auVar42;
          if (1 < (longlong)uVar26) {
            auVar43 = vpsrldq_avx(auVar42,2);
            *(short *)*pauStack_60 = auVar42._0_2_;
            pauStack_60 = (undefined1 (*) [32])(*pauStack_60 + 2);
            if (uVar26 == 2) goto LAB_14051943e;
          }
          (*pauStack_60)[0] = auVar43[0];
        }
        else {
          *(undefined1 (*) [16])*param_3 = auVar42;
          auVar42 = auVar44._16_16_;
          pauStack_60 = (undefined1 (*) [32])(*param_3 + 0x10);
          uVar26 = uVar26 - 0x10;
          if (uVar26 != 0) goto LAB_1405193b2;
        }
LAB_14051943e:
        uVar26 = param_5 - uVar29;
        pauVar27 = (undefined1 (*) [32])(*param_3 + uVar29);
        pauVar32 = (undefined1 (*) [32])(*param_1 + uVar29);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      uVar29 = uVar26 & 0x1f;
      lVar25 = (longlong)uVar26 >> 5;
      if (lVar25 != 0) {
        pauVar30 = (undefined1 (*) [32])(*pauVar32 + param_2);
        auVar44 = vpmaxub_avx2(*pauVar32,*pauVar30);
        pauVar31 = (undefined1 (*) [32])(*pauVar32 + param_2 * 2);
        auVar44 = vpmaxub_avx2(auVar44,*pauVar31);
        lVar23 = 0;
        auVar5 = auVar44;
        if (1 < lVar25) {
          do {
            lVar23 = lVar23 + 1;
            auVar44 = vpmaxub_avx2(pauVar32[1],*(undefined1 (*) [32])(pauVar32[1] + param_2));
            auVar44 = vpmaxub_avx2(auVar44,*(undefined1 (*) [32])(pauVar32[1] + param_2 * 2));
            pauVar32 = pauVar32 + 1;
            auVar6 = vperm2i128_avx2(auVar5,auVar44,0x21);
            auVar7 = vpalignr_avx2(auVar6,auVar5,4);
            auVar6 = vpalignr_avx2(auVar6,auVar5,8);
            auVar5 = vpmaxub_avx2(auVar7,auVar5);
            auVar5 = vpmaxub_avx2(auVar6,auVar5);
            *pauVar27 = auVar5;
            pauVar27 = pauVar27 + 1;
            auVar5 = auVar44;
          } while (lVar23 < lVar25 + -1);
          pauVar30 = (undefined1 (*) [32])(*pauVar32 + param_2);
          pauVar31 = (undefined1 (*) [32])(*pauVar32 + param_2 * 2);
        }
        pauVar1 = pauVar32 + 1;
        pauVar32 = pauVar32 + 1;
        auVar5 = vpmaxub_avx2(ZEXT832(*(ulonglong *)*pauVar1),ZEXT832(*(ulonglong *)pauVar30[1]));
        auVar5 = vpmaxub_avx2(auVar5,ZEXT832(*(ulonglong *)pauVar31[1]));
        auVar7 = vperm2i128_avx2(auVar44,auVar5,0x21);
        auVar5 = vpalignr_avx2(auVar7,auVar44,4);
        auVar7 = vpalignr_avx2(auVar7,auVar44,8);
        auVar44 = vpmaxub_avx2(auVar5,auVar44);
        auVar44 = vpmaxub_avx2(auVar7,auVar44);
        *pauVar27 = auVar44;
        pauVar27 = pauVar27 + 1;
      }
      if (uVar29 != 0) {
        iVar24 = (int)uVar29 + 8;
        uVar33 = FUN_1405196e0(pauVar32);
        uVar34 = FUN_1405196e0(*pauVar32 + param_2,iVar24);
        uVar35 = FUN_1405196e0(*pauVar32 + param_2 * 2,iVar24);
        iVar24 = (int)uVar29 + -0x18;
        uVar36 = FUN_1405196e0(pauVar32 + 1);
        uVar37 = FUN_1405196e0(pauVar32[1] + param_2,iVar24);
        auVar41._0_8_ = FUN_1405196e0((longlong)(*pauVar32 + param_2 * 2) + 0x20,iVar24);
        auVar41._8_56_ = extraout_var_02;
        auVar14._8_8_ = extraout_XMM0_Qb_13;
        auVar14._0_8_ = uVar33;
        auVar14._16_8_ = extraout_YMM0_H_13;
        auVar14._24_8_ = extraout_var_17;
        auVar13._8_8_ = extraout_XMM0_Qb_16;
        auVar13._0_8_ = uVar36;
        auVar13._16_8_ = extraout_YMM0_H_16;
        auVar13._24_8_ = extraout_var_20;
        auVar10._8_8_ = extraout_XMM0_Qb_14;
        auVar10._0_8_ = uVar34;
        auVar10._16_8_ = extraout_YMM0_H_14;
        auVar10._24_8_ = extraout_var_18;
        auVar44 = vpmaxub_avx2(auVar14,auVar10);
        auVar11._8_8_ = extraout_XMM0_Qb_17;
        auVar11._0_8_ = uVar37;
        auVar11._16_8_ = extraout_YMM0_H_17;
        auVar11._24_8_ = extraout_var_21;
        auVar5 = vpmaxub_avx2(auVar13,auVar11);
        auVar8._8_8_ = extraout_XMM0_Qb_15;
        auVar8._0_8_ = uVar35;
        auVar8._16_8_ = extraout_YMM0_H_15;
        auVar8._24_8_ = extraout_var_19;
        auVar7 = vpmaxub_avx2(auVar44,auVar8);
        auVar44 = vpmaxub_avx2(auVar5,auVar41._0_32_);
        auVar6 = vperm2i128_avx2(auVar7,auVar44,0x21);
        auVar44 = vpalignr_avx2(auVar6,auVar7,4);
        auVar5 = vpmaxub_avx2(auVar7,auVar44);
        auVar44 = vpalignr_avx2(auVar6,auVar7,8);
        auVar44 = vpmaxub_avx2(auVar5,auVar44);
        auVar42 = auVar44._0_16_;
        if (0xf < uVar29) {
          *(undefined1 (*) [16])*pauVar27 = auVar42;
          auVar42 = auVar44._16_16_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 0x10);
          uVar29 = uVar29 - 0x10;
          if (uVar29 == 0) goto LAB_140519697;
        }
        if (7 < (longlong)uVar29) {
          *(longlong *)*pauVar27 = auVar42._0_8_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 8);
          auVar42 = vpsrldq_avx(auVar42,8);
          uVar29 = uVar29 - 8;
          if (uVar29 == 0) goto LAB_140519697;
        }
        if (3 < (longlong)uVar29) {
          *(int *)*pauVar27 = auVar42._0_4_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 4);
          auVar42 = vpsrldq_avx(auVar42,4);
          uVar29 = uVar29 - 4;
          if (uVar29 == 0) goto LAB_140519697;
        }
        auVar43 = auVar42;
        if (1 < (longlong)uVar29) {
          auVar43 = vpsrldq_avx(auVar42,2);
          *(short *)*pauVar27 = auVar42._0_2_;
          pauVar27 = (undefined1 (*) [32])(*pauVar27 + 2);
          if (uVar29 == 2) goto LAB_140519697;
        }
        (*pauVar27)[0] = auVar43[0];
      }
LAB_140519697:
      lVar28 = lVar28 + 1;
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar28 < param_6);
  }
  return;
}

