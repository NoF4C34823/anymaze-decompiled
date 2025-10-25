
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010f60(ulonglong *param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16],
                  int param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  auVar12 = _DAT_143086590;
  auVar11 = _DAT_143086580;
  auVar8 = _DAT_143086570;
  auVar31 = _DAT_143086560;
  auVar28 = _DAT_143086550;
  auVar27 = _DAT_143086540;
  auVar25 = _DAT_143086530;
  auVar29 = *param_4;
  auVar26 = vpunpcklqdq_avx(auVar29,auVar29);
  if (param_5 != 4) {
    auVar26 = vpsrldq_avx(auVar29,4);
    auVar7 = vpunpcklqdq_avx(auVar26,auVar29);
    iVar13 = 0;
    auVar26 = vpslldq_avx(auVar7,8);
    auVar26 = vpunpckhqdq_avx(auVar29,auVar26);
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        iVar13 = iVar13 + 8;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = *param_1;
        auVar32 = vpunpcklbw_avx((undefined1  [16])0x0,auVar33);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = param_1[1];
        auVar33 = vpunpcklbw_avx((undefined1  [16])0x0,auVar30);
        auVar30 = vpmulhuw_avx(auVar32,auVar29);
        auVar33 = vpmulhuw_avx(auVar33,auVar7);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = param_1[2];
        auVar6 = vpunpcklbw_avx((undefined1  [16])0x0,auVar32);
        auVar32 = vpand_avx(auVar30 ^ auVar33,auVar25);
        auVar6 = vpmulhuw_avx(auVar6,auVar26);
        param_1 = param_1 + 3;
        auVar9 = auVar30 ^ auVar33 ^ auVar33 ^ auVar32 ^ auVar6;
        auVar30 = vpand_avx(auVar9,auVar27);
        auVar6 = auVar6 ^ auVar30;
        auVar10 = auVar33 ^ auVar32 ^ auVar6;
        auVar30 = vpshufb_avx(auVar9 ^ auVar6,auVar31);
        auVar32 = vpand_avx(auVar10,auVar28);
        auVar33 = vpshufb_avx(auVar6 ^ auVar32,auVar11);
        auVar6 = vpshufb_avx(auVar10 ^ auVar6 ^ auVar32,auVar8);
        auVar32 = vpaddusw_avx(auVar33,auVar30);
        auVar32 = vpaddusw_avx(auVar32,auVar6);
        auVar32 = vpaddusw_avx(auVar32,auVar12);
        auVar32 = vpsraw_avx(auVar32,7);
        auVar32 = vpackuswb_avx(auVar32,auVar32);
        *param_2 = auVar32._0_8_;
        param_2 = param_2 + 1;
      } while (iVar13 < (int)(param_3 & 0xfffffff8));
    }
    if ((param_3 & 4) != 0) {
      uVar24 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = (ulonglong *)((longlong)param_1 + 0xc);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar24;
      auVar26 = vpunpcklbw_avx((undefined1  [16])0x0,auVar26);
      auVar25 = vpshufd_avx(ZEXT416((uint)*puVar1),0);
      auVar26 = vpmulhuw_avx(auVar26,auVar29);
      auVar25 = vpunpcklbw_avx((undefined1  [16])0x0,auVar25);
      auVar25 = vpmulhuw_avx(auVar25,auVar7);
      auVar27 = vpsrldq_avx(auVar26,6);
      auVar27 = vpunpcklwd_avx(auVar26,auVar27);
      auVar28 = vpsrldq_avx(auVar26,0xc);
      auVar26 = vpslldq_avx(auVar25,4);
      auVar25 = vpsrldq_avx(auVar25,2);
      auVar26 = vpor_avx(auVar28,auVar26);
      auVar25 = vpunpcklwd_avx(auVar26,auVar25);
      auVar28 = vpunpckldq_avx(auVar27,auVar25);
      auVar26 = vpunpckhqdq_avx(auVar28,auVar28);
      auVar25 = vpunpckhdq_avx(auVar27,auVar25);
      auVar26 = vpaddusw_avx(auVar26,auVar28);
      auVar26 = vpaddusw_avx(auVar26,auVar25);
      auVar26 = vpaddusw_avx(auVar26,auVar12);
      auVar26 = vpsraw_avx(auVar26,7);
      auVar26 = vpackuswb_avx(auVar26,auVar26);
      *(int *)param_2 = auVar26._0_4_;
      param_2 = (undefined8 *)((longlong)param_2 + 4);
    }
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      iVar15 = vpextrw_avx(auVar29,0);
      iVar13 = vpextrw_avx(auVar29,1);
      iVar23 = vpextrw_avx(auVar29,2);
      if (param_3 != 0) {
        iVar21 = 1;
        lVar18 = 0;
        if (param_3 >> 1 != 0) {
          uVar24 = 0;
          do {
            uVar20 = uVar24;
            *(char *)((longlong)param_2 + uVar20 * 2) =
                 (char)((uint)*(byte *)(lVar18 + (longlong)param_1) * iVar15 +
                        (uint)*(byte *)(lVar18 + 1 + (longlong)param_1) * iVar13 + 0x4000 +
                        (uint)*(byte *)(lVar18 + 2 + (longlong)param_1) * iVar23 >> 0xf);
            lVar3 = lVar18 + 3;
            lVar4 = lVar18 + 4;
            lVar5 = lVar18 + 5;
            lVar18 = lVar18 + 6;
            *(char *)((longlong)param_2 + uVar20 * 2 + 1) =
                 (char)((uint)*(byte *)(lVar3 + (longlong)param_1) * iVar15 +
                        (uint)*(byte *)(lVar4 + (longlong)param_1) * iVar13 + 0x4000 +
                        (uint)*(byte *)(lVar5 + (longlong)param_1) * iVar23 >> 0xf);
            uVar24 = uVar20 + 1;
          } while (uVar24 < param_3 >> 1);
          iVar21 = (int)uVar20 + 2 + (int)uVar24;
        }
        if (iVar21 - 1U < param_3) {
          lVar18 = (longlong)iVar21 * 3;
          *(char *)((longlong)iVar21 + -1 + (longlong)param_2) =
               (char)(iVar15 * (uint)*(byte *)(lVar18 + -3 + (longlong)param_1) +
                      iVar13 * (uint)*(byte *)(lVar18 + -2 + (longlong)param_1) + 0x4000 +
                      iVar23 * (uint)*(byte *)(lVar18 + -1 + (longlong)param_1) >> 0xf);
        }
      }
    }
    return;
  }
  iVar13 = 0;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      iVar13 = iVar13 + 8;
      puVar1 = param_1 + 1;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *param_1;
      auVar29 = vpunpcklbw_avx((undefined1  [16])0x0,auVar29);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = param_1[2];
      auVar25 = vpunpcklbw_avx((undefined1  [16])0x0,auVar25);
      auVar29 = vpmulhuw_avx(auVar29,auVar26);
      auVar25 = vpmulhuw_avx(auVar25,auVar26);
      puVar2 = param_1 + 3;
      param_1 = param_1 + 4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *puVar1;
      auVar27 = vpunpcklbw_avx((undefined1  [16])0x0,auVar27);
      auVar27 = vpmulhuw_avx(auVar27,auVar26);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *puVar2;
      auVar28 = vpunpcklbw_avx((undefined1  [16])0x0,auVar28);
      auVar28 = vpmulhuw_avx(auVar28,auVar26);
      auVar31 = vpunpcklqdq_avx(auVar29,auVar27);
      auVar29 = vpunpckhqdq_avx(auVar29,auVar27);
      auVar8 = vpunpcklqdq_avx(auVar25,auVar28);
      auVar25 = vpunpckhqdq_avx(auVar25,auVar28);
      auVar27 = vpunpcklwd_avx(auVar31,auVar29);
      auVar29 = vpunpckhwd_avx(auVar31,auVar29);
      auVar28 = vpunpcklwd_avx(auVar8,auVar25);
      auVar25 = vpunpckhwd_avx(auVar8,auVar25);
      auVar31 = vpunpckldq_avx(auVar27,auVar29);
      auVar29 = vpunpckhdq_avx(auVar27,auVar29);
      auVar27 = vpunpckldq_avx(auVar28,auVar25);
      auVar25 = vpunpckhdq_avx(auVar28,auVar25);
      auVar29 = vpunpcklqdq_avx(auVar29,auVar25);
      auVar28 = vpunpcklqdq_avx(auVar31,auVar27);
      auVar25 = vpunpckhqdq_avx(auVar31,auVar27);
      auVar29 = vpaddusw_avx(auVar29,auVar28);
      auVar29 = vpaddusw_avx(auVar29,auVar25);
      auVar29 = vpaddusw_avx(auVar29,auVar12);
      auVar29 = vpsraw_avx(auVar29,7);
      auVar29 = vpackuswb_avx(auVar29,auVar29);
      *param_2 = auVar29._0_8_;
      param_2 = param_2 + 1;
    } while (iVar13 < (int)(param_3 & 0xfffffff8));
  }
  auVar25 = _DAT_1430865b0;
  auVar29 = _DAT_1430865a0;
  uVar19 = param_3 & 7;
  if (uVar19 != 0) {
    uVar16 = vpextrw_avx(auVar26,0);
    uVar17 = vpextrw_avx(auVar26,1);
    uVar14 = vpextrw_avx(auVar26,2);
    if (uVar19 != 0) {
      uVar24 = (ulonglong)uVar19;
      if (((longlong)param_2 - (longlong)param_1 < (longlong)(uVar24 * 4 + -1)) &&
         (-((longlong)param_2 - (longlong)param_1) < (longlong)uVar24)) {
        iVar13 = 1;
        uVar24 = 0;
        if (uVar19 >> 1 != 0) {
          do {
            uVar20 = uVar24;
            *(char *)((longlong)param_2 + uVar20 * 2) =
                 (char)((byte)param_1[uVar20] * uVar16 +
                        *(byte *)((longlong)param_1 + uVar20 * 8 + 1) * uVar17 + 0x4000 +
                        *(byte *)((longlong)param_1 + uVar20 * 8 + 2) * uVar14 >> 0xf);
            *(char *)((longlong)param_2 + uVar20 * 2 + 1) =
                 (char)(*(byte *)((longlong)param_1 + uVar20 * 8 + 4) * uVar16 +
                        *(byte *)((longlong)param_1 + uVar20 * 8 + 5) * uVar17 + 0x4000 +
                        *(byte *)((longlong)param_1 + uVar20 * 8 + 6) * uVar14 >> 0xf);
            uVar24 = uVar20 + 1;
          } while (uVar24 < uVar19 >> 1);
          iVar13 = (int)uVar20 + 2 + (int)uVar24;
        }
        if (iVar13 - 1U < uVar19) {
          lVar18 = (longlong)iVar13;
          *(char *)(lVar18 + -1 + (longlong)param_2) =
               (char)(uVar16 * *(byte *)((longlong)param_1 + lVar18 * 4 + -4) +
                      uVar17 * *(byte *)((longlong)param_1 + lVar18 * 4 + -3) + 0x4000 +
                      uVar14 * *(byte *)((longlong)param_1 + lVar18 * 4 + -2) >> 0xf);
        }
      }
      else {
        if (uVar24 < 4) {
          FUN_1400114b8(auVar12._0_8_,0,0);
          return;
        }
        uVar20 = (ulonglong)(param_3 & 4);
        auVar26 = vpshufd_avx(ZEXT416(uVar16),0);
        uVar22 = 0;
        auVar27 = vpshufd_avx(ZEXT416(uVar17),0);
        auVar28 = vpshufd_avx(ZEXT416(uVar14),0);
        do {
          auVar31 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)param_1 + uVar22 * 4)),
                                (uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 4),1);
          auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 8),2);
          auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 0xc),3);
          auVar8 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)param_1 + uVar22 * 4 + 1)),
                               (uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 5),1);
          auVar8 = vpinsrb_avx(auVar8,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 9),2);
          auVar8 = vpinsrb_avx(auVar8,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 0xd),3);
          auVar31 = vpmovzxbd_avx(auVar31);
          auVar8 = vpmovzxbd_avx(auVar8);
          auVar31 = vpmulld_avx(auVar26,auVar31);
          auVar8 = vpmulld_avx(auVar27,auVar8);
          auVar31 = vpaddd_avx(auVar31,auVar8);
          auVar8 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)param_1 + uVar22 * 4 + 2)),
                               (uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 6),1);
          auVar8 = vpinsrb_avx(auVar8,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 10),2);
          auVar8 = vpinsrb_avx(auVar8,(uint)*(byte *)((longlong)param_1 + uVar22 * 4 + 0xe),3);
          auVar8 = vpmovzxbd_avx(auVar8);
          auVar8 = vpmulld_avx(auVar28,auVar8);
          auVar31 = vpaddd_avx(auVar31,auVar8);
          auVar31 = vpaddd_avx(auVar31,auVar29);
          auVar31 = vpsrad_avx(auVar31,0xf);
          auVar31 = vpshufb_avx(auVar31,auVar25);
          *(int *)(uVar22 + (longlong)param_2) = auVar31._0_4_;
          uVar22 = uVar22 + 4;
        } while (uVar22 < uVar20);
        for (; uVar20 < uVar24; uVar20 = uVar20 + 1) {
          *(char *)(uVar20 + (longlong)param_2) =
               (char)(*(byte *)((longlong)param_1 + uVar20 * 4) * uVar16 +
                      *(byte *)((longlong)param_1 + uVar20 * 4 + 1) * uVar17 + 0x4000 +
                      *(byte *)((longlong)param_1 + uVar20 * 4 + 2) * uVar14 >> 0xf);
        }
      }
    }
  }
  return;
}

