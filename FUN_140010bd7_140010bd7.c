
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010bd7(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ushort in_XMM2_Wa;
  ushort in_XMM2_Wb;
  ushort in_XMM2_Wc;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  auVar8 = _DAT_143086520;
  iVar7 = _UNK_14308651c;
  iVar6 = _UNK_143086518;
  iVar5 = _UNK_143086514;
  iVar15 = _DAT_143086510;
  auVar4 = _DAT_143086500;
  uVar13 = param_3 & 7;
  if ((uVar13 != 0) && (uVar13 != 0)) {
    uVar17 = (ulonglong)uVar13;
    uVar10 = (uint)in_XMM2_Wa;
    uVar11 = (uint)in_XMM2_Wb;
    uVar9 = (uint)in_XMM2_Wc;
    if ((param_2 - param_1 < (longlong)(uVar17 * 4 + -1)) &&
       (-(param_2 - param_1) < (longlong)uVar17)) {
      iVar15 = 1;
      uVar17 = 0;
      if (uVar13 >> 1 != 0) {
        do {
          uVar14 = uVar17;
          *(char *)(param_2 + uVar14 * 2) =
               (char)(*(byte *)(param_1 + uVar14 * 8) * uVar10 +
                      *(byte *)(param_1 + 1 + uVar14 * 8) * uVar11 + 0x4000 +
                      *(byte *)(param_1 + 2 + uVar14 * 8) * uVar9 >> 0xf);
          *(char *)(param_2 + 1 + uVar14 * 2) =
               (char)(*(byte *)(param_1 + 4 + uVar14 * 8) * uVar10 +
                      *(byte *)(param_1 + 5 + uVar14 * 8) * uVar11 + 0x4000 +
                      *(byte *)(param_1 + 6 + uVar14 * 8) * uVar9 >> 0xf);
          uVar17 = uVar14 + 1;
        } while (uVar17 < uVar13 >> 1);
        iVar15 = (int)uVar14 + 2 + (int)uVar17;
      }
      if (iVar15 - 1U < uVar13) {
        lVar16 = (longlong)iVar15;
        *(char *)(lVar16 + -1 + param_2) =
             (char)(uVar10 * *(byte *)(param_1 + -4 + lVar16 * 4) +
                    uVar11 * *(byte *)(param_1 + -3 + lVar16 * 4) + 0x4000 +
                    uVar9 * *(byte *)(param_1 + -2 + lVar16 * 4) >> 0xf);
      }
    }
    else {
      if (uVar17 < 4) {
        FUN_140010e2c(param_1,param_2,0);
        return;
      }
      uVar14 = (ulonglong)(param_3 & 4);
      uVar12 = 0;
      auVar1._12_2_ = in_XMM2_Wa;
      auVar1._0_12_ = ZEXT212(in_XMM2_Wa) << 0x40;
      auVar2._12_2_ = in_XMM2_Wb;
      auVar2._0_12_ = ZEXT212(in_XMM2_Wb) << 0x40;
      auVar3._12_2_ = in_XMM2_Wc;
      auVar3._0_12_ = ZEXT212(in_XMM2_Wc) << 0x40;
      do {
        auVar19 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xc + uVar12 * 4),
                                   CONCAT12(*(undefined1 *)(param_1 + 8 + uVar12 * 4),
                                            CONCAT11(*(undefined1 *)(param_1 + 4 + uVar12 * 4),
                                                     *(undefined1 *)(param_1 + uVar12 * 4)))));
        auVar18 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xd + uVar12 * 4),
                                   CONCAT12(*(undefined1 *)(param_1 + 9 + uVar12 * 4),
                                            CONCAT11(*(undefined1 *)(param_1 + 5 + uVar12 * 4),
                                                     *(undefined1 *)(param_1 + 1 + uVar12 * 4)))));
        auVar19 = pmovzxbd(auVar19,auVar19);
        auVar18 = pmovzxbd(auVar18,auVar18);
        auVar21._0_8_ = (ulonglong)uVar10 * (ulonglong)auVar19._0_4_;
        auVar21._8_8_ = ((ulonglong)auVar1._8_6_ & 0xffffffff) * (ulonglong)auVar19._8_4_;
        auVar22 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xe + uVar12 * 4),
                                   CONCAT12(*(undefined1 *)(param_1 + 10 + uVar12 * 4),
                                            CONCAT11(*(undefined1 *)(param_1 + 6 + uVar12 * 4),
                                                     *(undefined1 *)(param_1 + 2 + uVar12 * 4)))));
        auVar20 = pmovzxbd(auVar22,auVar22);
        auVar23._0_8_ = (ulonglong)uVar11 * (ulonglong)auVar18._0_4_;
        auVar23._8_8_ = ((ulonglong)auVar2._8_6_ & 0xffffffff) * (ulonglong)auVar18._8_4_;
        auVar24._0_8_ = (ulonglong)uVar9 * (ulonglong)auVar20._0_4_;
        auVar24._8_8_ = ((ulonglong)auVar3._8_6_ & 0xffffffff) * (ulonglong)auVar20._8_4_;
        auVar22._0_8_ = (auVar19._0_8_ >> 0x20) * (ulonglong)uVar10 << 0x20;
        auVar22._8_8_ = (auVar19._8_8_ >> 0x20) * (ulonglong)(auVar1._8_6_ >> 0x20) << 0x20;
        auVar19._0_8_ = (auVar18._0_8_ >> 0x20) * (ulonglong)uVar11 << 0x20;
        auVar19._8_8_ = (auVar18._8_8_ >> 0x20) * (ulonglong)(auVar2._8_6_ >> 0x20) << 0x20;
        auVar18._0_8_ = (auVar20._0_8_ >> 0x20) * (ulonglong)uVar9 << 0x20;
        auVar18._8_8_ = (auVar20._8_8_ >> 0x20) * (ulonglong)(auVar3._8_6_ >> 0x20) << 0x20;
        auVar22 = auVar21 & auVar4 | auVar22;
        auVar19 = auVar23 & auVar4 | auVar19;
        auVar18 = auVar24 & auVar4 | auVar18;
        auVar20._0_4_ = auVar22._0_4_ + auVar19._0_4_ + auVar18._0_4_ + iVar15 >> 0xf;
        auVar20._4_4_ = auVar22._4_4_ + auVar19._4_4_ + auVar18._4_4_ + iVar5 >> 0xf;
        auVar20._8_4_ = auVar22._8_4_ + auVar19._8_4_ + auVar18._8_4_ + iVar6 >> 0xf;
        auVar20._12_4_ = auVar22._12_4_ + auVar19._12_4_ + auVar18._12_4_ + iVar7 >> 0xf;
        auVar18 = pshufb(auVar20,auVar8);
        *(int *)(uVar12 + param_2) = auVar18._0_4_;
        uVar12 = uVar12 + 4;
      } while (uVar12 < uVar14);
      for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
        *(char *)(uVar14 + param_2) =
             (char)(*(byte *)(param_1 + uVar14 * 4) * uVar10 +
                    *(byte *)(param_1 + 1 + uVar14 * 4) * uVar11 + 0x4000 +
                    *(byte *)(param_1 + 2 + uVar14 * 4) * uVar9 >> 0xf);
      }
    }
  }
  return;
}

