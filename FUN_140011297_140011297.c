
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140011297(ulonglong *param_1,undefined8 *param_2,uint param_3)

{
  int in_EAX;
  uint uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int unaff_EBX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 in_ZMM0 [64];
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  do {
    puVar3 = param_2;
    puVar2 = param_1;
    in_EAX = in_EAX + 8;
    auVar12 = in_ZMM1._0_16_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *puVar2;
    auVar17 = vpunpcklbw_avx(auVar12,auVar17);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = puVar2[2];
    auVar14 = vpunpcklbw_avx(auVar12,auVar14);
    auVar13 = in_ZMM2._0_16_;
    auVar17 = vpmulhuw_avx(auVar17,auVar13);
    auVar14 = vpmulhuw_avx(auVar14,auVar13);
    param_1 = puVar2 + 4;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = puVar2[1];
    auVar16 = vpunpcklbw_avx(auVar12,auVar16);
    auVar16 = vpmulhuw_avx(auVar16,auVar13);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = puVar2[3];
    auVar12 = vpunpcklbw_avx(auVar12,auVar15);
    auVar12 = vpmulhuw_avx(auVar12,auVar13);
    auVar15 = vpunpcklqdq_avx(auVar17,auVar16);
    auVar17 = vpunpckhqdq_avx(auVar17,auVar16);
    auVar18 = vpunpcklqdq_avx(auVar14,auVar12);
    auVar14 = vpunpckhqdq_avx(auVar14,auVar12);
    auVar16 = vpunpcklwd_avx(auVar15,auVar17);
    auVar17 = vpunpckhwd_avx(auVar15,auVar17);
    auVar12 = vpunpcklwd_avx(auVar18,auVar14);
    auVar14 = vpunpckhwd_avx(auVar18,auVar14);
    auVar15 = vpunpckldq_avx(auVar16,auVar17);
    auVar17 = vpunpckhdq_avx(auVar16,auVar17);
    auVar16 = vpunpckldq_avx(auVar12,auVar14);
    auVar14 = vpunpckhdq_avx(auVar12,auVar14);
    auVar17 = vpunpcklqdq_avx(auVar17,auVar14);
    auVar12 = vpunpcklqdq_avx(auVar15,auVar16);
    auVar14 = vpunpckhqdq_avx(auVar15,auVar16);
    auVar17 = vpaddusw_avx(auVar17,auVar12);
    auVar17 = vpaddusw_avx(auVar17,auVar14);
    auVar17 = vpaddusw_avx(auVar17,in_ZMM0._0_16_);
    auVar17 = vpsraw_avx(auVar17,7);
    auVar17 = vpackuswb_avx(auVar17,auVar17);
    *puVar3 = auVar17._0_8_;
    auVar14 = _DAT_1430865b0;
    auVar17 = _DAT_1430865a0;
    param_2 = puVar3 + 1;
  } while (in_EAX < unaff_EBX);
  uVar6 = param_3 & 7;
  if (uVar6 != 0) {
    uVar4 = vpextrw_avx(auVar13,0);
    uVar5 = vpextrw_avx(auVar13,1);
    uVar1 = vpextrw_avx(auVar13,2);
    if (uVar6 != 0) {
      uVar11 = (ulonglong)uVar6;
      if (((longlong)param_2 - (longlong)param_1 < (longlong)(uVar11 * 4 + -1)) &&
         (-((longlong)param_2 - (longlong)param_1) < (longlong)uVar11)) {
        iVar9 = 1;
        uVar11 = 0;
        if (uVar6 >> 1 != 0) {
          do {
            uVar7 = uVar11;
            *(char *)((longlong)param_2 + uVar7 * 2) =
                 (char)((byte)param_1[uVar7] * uVar4 +
                        *(byte *)((longlong)puVar2 + uVar7 * 8 + 0x21) * uVar5 + 0x4000 +
                        *(byte *)((longlong)puVar2 + uVar7 * 8 + 0x22) * uVar1 >> 0xf);
            *(char *)((longlong)puVar3 + uVar7 * 2 + 9) =
                 (char)(*(byte *)((longlong)puVar2 + uVar7 * 8 + 0x24) * uVar4 +
                        *(byte *)((longlong)puVar2 + uVar7 * 8 + 0x25) * uVar5 + 0x4000 +
                        *(byte *)((longlong)puVar2 + uVar7 * 8 + 0x26) * uVar1 >> 0xf);
            uVar11 = uVar7 + 1;
          } while (uVar11 < uVar6 >> 1);
          iVar9 = (int)uVar7 + 2 + (int)uVar11;
        }
        if (iVar9 - 1U < uVar6) {
          lVar10 = (longlong)iVar9;
          *(char *)(lVar10 + -1 + (longlong)param_2) =
               (char)(uVar4 * *(byte *)((longlong)puVar2 + lVar10 * 4 + 0x1c) +
                      uVar5 * *(byte *)((longlong)puVar2 + lVar10 * 4 + 0x1d) + 0x4000 +
                      uVar1 * *(byte *)((longlong)puVar2 + lVar10 * 4 + 0x1e) >> 0xf);
        }
      }
      else {
        if (uVar11 < 4) {
          FUN_1400114b8(param_1,param_2,0);
          return;
        }
        uVar7 = (ulonglong)(param_3 & 4);
        auVar16 = vpshufd_avx(ZEXT416(uVar4),0);
        uVar8 = 0;
        auVar12 = vpshufd_avx(ZEXT416(uVar5),0);
        auVar15 = vpshufd_avx(ZEXT416(uVar1),0);
        do {
          auVar18 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)param_1 + uVar8 * 4)),
                                (uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x24),1);
          auVar18 = vpinsrb_avx(auVar18,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x28),2);
          auVar18 = vpinsrb_avx(auVar18,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x2c),3);
          auVar13 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x21)),
                                (uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x25),1);
          auVar13 = vpinsrb_avx(auVar13,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x29),2);
          auVar13 = vpinsrb_avx(auVar13,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x2d),3);
          auVar18 = vpmovzxbd_avx(auVar18);
          auVar13 = vpmovzxbd_avx(auVar13);
          auVar18 = vpmulld_avx(auVar16,auVar18);
          auVar13 = vpmulld_avx(auVar12,auVar13);
          auVar18 = vpaddd_avx(auVar18,auVar13);
          auVar13 = vpinsrb_avx(ZEXT116(*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x22)),
                                (uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x26),1);
          auVar13 = vpinsrb_avx(auVar13,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x2a),2);
          auVar13 = vpinsrb_avx(auVar13,(uint)*(byte *)((longlong)puVar2 + uVar8 * 4 + 0x2e),3);
          auVar13 = vpmovzxbd_avx(auVar13);
          auVar13 = vpmulld_avx(auVar15,auVar13);
          auVar18 = vpaddd_avx(auVar18,auVar13);
          auVar18 = vpaddd_avx(auVar18,auVar17);
          auVar18 = vpsrad_avx(auVar18,0xf);
          auVar18 = vpshufb_avx(auVar18,auVar14);
          *(int *)(uVar8 + (longlong)param_2) = auVar18._0_4_;
          uVar8 = uVar8 + 4;
        } while (uVar8 < uVar7);
        for (; uVar7 < uVar11; uVar7 = uVar7 + 1) {
          *(char *)(uVar7 + (longlong)param_2) =
               (char)(*(byte *)((longlong)param_1 + uVar7 * 4) * uVar4 +
                      *(byte *)((longlong)puVar2 + uVar7 * 4 + 0x21) * uVar5 + 0x4000 +
                      *(byte *)((longlong)puVar2 + uVar7 * 4 + 0x22) * uVar1 >> 0xf);
        }
      }
    }
  }
  return;
}

