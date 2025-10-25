
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010c22(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  uint in_EAX;
  uint unaff_EBP;
  uint unaff_ESI;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar6 = _DAT_143086520;
  iVar5 = _UNK_14308651c;
  iVar4 = _UNK_143086518;
  iVar3 = _UNK_143086514;
  iVar2 = _DAT_143086510;
  auVar1 = _DAT_143086500;
  uVar8 = (ulonglong)(param_3 & 0xfffffffc);
  uVar7 = 0;
  auVar11._4_4_ = unaff_EBP;
  auVar11._0_4_ = unaff_EBP;
  auVar11._8_4_ = unaff_EBP;
  auVar11._12_4_ = unaff_EBP;
  auVar9._4_4_ = unaff_ESI;
  auVar9._0_4_ = unaff_ESI;
  auVar9._8_4_ = unaff_ESI;
  auVar9._12_4_ = unaff_ESI;
  auVar13._4_4_ = in_EAX;
  auVar13._0_4_ = in_EAX;
  auVar13._8_4_ = in_EAX;
  auVar13._12_4_ = in_EAX;
  do {
    auVar12 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xc + uVar7 * 4),
                               CONCAT12(*(undefined1 *)(param_1 + 8 + uVar7 * 4),
                                        CONCAT11(*(undefined1 *)(param_1 + 4 + uVar7 * 4),
                                                 *(undefined1 *)(param_1 + uVar7 * 4)))));
    auVar10 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xd + uVar7 * 4),
                               CONCAT12(*(undefined1 *)(param_1 + 9 + uVar7 * 4),
                                        CONCAT11(*(undefined1 *)(param_1 + 5 + uVar7 * 4),
                                                 *(undefined1 *)(param_1 + 1 + uVar7 * 4)))));
    auVar12 = pmovzxbd(auVar12,auVar12);
    auVar10 = pmovzxbd(auVar10,auVar10);
    auVar15._0_8_ = (ulonglong)unaff_EBP * (ulonglong)auVar12._0_4_;
    auVar15._8_8_ = (auVar11._8_8_ & 0xffffffff) * (ulonglong)auVar12._8_4_;
    auVar16 = ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0xe + uVar7 * 4),
                               CONCAT12(*(undefined1 *)(param_1 + 10 + uVar7 * 4),
                                        CONCAT11(*(undefined1 *)(param_1 + 6 + uVar7 * 4),
                                                 *(undefined1 *)(param_1 + 2 + uVar7 * 4)))));
    auVar14 = pmovzxbd(auVar16,auVar16);
    auVar17._0_8_ = (ulonglong)unaff_ESI * (ulonglong)auVar10._0_4_;
    auVar17._8_8_ = (auVar9._8_8_ & 0xffffffff) * (ulonglong)auVar10._8_4_;
    auVar18._0_8_ = (ulonglong)in_EAX * (ulonglong)auVar14._0_4_;
    auVar18._8_8_ = (auVar13._8_8_ & 0xffffffff) * (ulonglong)auVar14._8_4_;
    auVar16._0_8_ = (auVar12._0_8_ >> 0x20) * (ulonglong)unaff_EBP << 0x20;
    auVar16._8_8_ = (auVar12._8_8_ >> 0x20) * (auVar11._8_8_ >> 0x20) << 0x20;
    auVar12._0_8_ = (auVar10._0_8_ >> 0x20) * (ulonglong)unaff_ESI << 0x20;
    auVar12._8_8_ = (auVar10._8_8_ >> 0x20) * (auVar9._8_8_ >> 0x20) << 0x20;
    auVar10._0_8_ = (auVar14._0_8_ >> 0x20) * (ulonglong)in_EAX << 0x20;
    auVar10._8_8_ = (auVar14._8_8_ >> 0x20) * (auVar13._8_8_ >> 0x20) << 0x20;
    auVar16 = auVar15 & auVar1 | auVar16;
    auVar12 = auVar17 & auVar1 | auVar12;
    auVar10 = auVar18 & auVar1 | auVar10;
    auVar14._0_4_ = auVar16._0_4_ + auVar12._0_4_ + auVar10._0_4_ + iVar2 >> 0xf;
    auVar14._4_4_ = auVar16._4_4_ + auVar12._4_4_ + auVar10._4_4_ + iVar3 >> 0xf;
    auVar14._8_4_ = auVar16._8_4_ + auVar12._8_4_ + auVar10._8_4_ + iVar4 >> 0xf;
    auVar14._12_4_ = auVar16._12_4_ + auVar12._12_4_ + auVar10._12_4_ + iVar5 >> 0xf;
    auVar10 = pshufb(auVar14,auVar6);
    *(int *)(uVar7 + param_2) = auVar10._0_4_;
    uVar7 = uVar7 + 4;
  } while (uVar7 < uVar8);
  for (; uVar8 < param_4; uVar8 = uVar8 + 1) {
    *(char *)(uVar8 + param_2) =
         (char)(*(byte *)(param_1 + uVar8 * 4) * unaff_EBP +
                *(byte *)(param_1 + 1 + uVar8 * 4) * unaff_ESI + 0x4000 +
                *(byte *)(param_1 + 2 + uVar8 * 4) * in_EAX >> 0xf);
  }
  return;
}

