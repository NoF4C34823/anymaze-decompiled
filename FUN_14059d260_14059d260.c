
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14059d260(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3,
                  longlong param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  ushort uVar32;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 (*pauVar36) [64];
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  uint uVar33;
  
  auVar45 = _DAT_14308b180;
  uVar34 = param_3 & 0xffffffffffffffc0;
  lVar39 = (longlong)param_5;
  lVar38 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar34) {
      do {
        lVar38 = lVar38 + 0x40;
        auVar45 = vminps_avx512f(*param_1,*(undefined1 (*) [64])(*param_1 + lVar39 * 4));
        auVar44 = vminps_avx512f(param_1[1],*(undefined1 (*) [64])(param_1[1] + lVar39 * 4));
        auVar43 = vminps_avx512f(param_1[2],*(undefined1 (*) [64])(param_1[2] + lVar39 * 4));
        auVar42 = vminps_avx512f(param_1[3],*(undefined1 (*) [64])(param_1[3] + lVar39 * 4));
        auVar45 = vminps_avx512f(auVar45,*(undefined1 (*) [64])(*param_1 + lVar39 * 8));
        auVar44 = vminps_avx512f(auVar44,*(undefined1 (*) [64])(param_1[1] + lVar39 * 8));
        auVar43 = vminps_avx512f(auVar43,*(undefined1 (*) [64])(param_1[2] + lVar39 * 8));
        auVar42 = vminps_avx512f(auVar42,*(undefined1 (*) [64])(param_1[3] + lVar39 * 8));
        *param_2 = auVar45;
        param_2[1] = auVar44;
        param_2[2] = auVar43;
        param_2[3] = auVar42;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar38 < (longlong)uVar34);
    }
    auVar45 = _DAT_14308b180;
    while (_DAT_14308b180 = auVar45, lVar38 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      lVar38 = lVar38 + 0x20;
      auVar45 = vminps_avx512f(*param_1,*(undefined1 (*) [64])(*param_1 + lVar39 * 4));
      auVar44 = vminps_avx512f(param_1[1],*(undefined1 (*) [64])(param_1[1] + lVar39 * 4));
      auVar45 = vminps_avx512f(auVar45,*(undefined1 (*) [64])(*param_1 + lVar39 * 8));
      auVar44 = vminps_avx512f(auVar44,*(undefined1 (*) [64])(param_1[1] + lVar39 * 8));
      *param_2 = auVar45;
      param_2[1] = auVar44;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      auVar45 = _DAT_14308b180;
    }
    if (lVar38 < (longlong)(param_3 & 0xfffffffffffffff0)) {
      lVar37 = 0;
      lVar35 = ((param_3 & 0xfffffffffffffff0) - 1) - lVar38;
      lVar40 = 0;
      do {
        auVar44 = vminps_avx512f(auVar45,*(undefined1 (*) [64])(*param_1 + lVar40));
        lVar37 = lVar37 + 1;
        auVar44 = vminps_avx512f(auVar44,*(undefined1 (*) [64])(*param_1 + lVar40 + lVar39 * 4));
        auVar44 = vminps_avx512f(auVar44,*(undefined1 (*) [64])(*param_1 + lVar40 + lVar39 * 8));
        *(undefined1 (*) [64])(*param_2 + lVar40) = auVar44;
        lVar40 = lVar40 + 0x40;
      } while (lVar37 < (longlong)(lVar35 + 0x10 + ((ulonglong)(lVar35 + 0x10 >> 3) >> 0x3c)) >> 4);
      param_1 = param_1 + lVar37;
      param_2 = param_2 + lVar37;
      lVar38 = lVar38 + lVar37 * 0x10;
    }
    if ((longlong)param_3 <= lVar38) {
      return;
    }
    uVar33 = 0xffff >> (((int)lVar38 - (int)param_3) + 0x10U & 0x1f);
  }
  else {
    if (0 < (longlong)uVar34) {
      do {
        lVar35 = 0;
        pauVar36 = param_1;
        auVar44 = auVar45;
        auVar43 = auVar45;
        auVar42 = auVar45;
        auVar41 = auVar45;
        if (0 < param_4) {
          do {
            lVar35 = lVar35 + 1;
            auVar41 = vminps_avx512f(auVar41,*pauVar36);
            auVar42 = vminps_avx512f(auVar42,pauVar36[1]);
            auVar43 = vminps_avx512f(auVar43,pauVar36[2]);
            auVar44 = vminps_avx512f(auVar44,pauVar36[3]);
            pauVar36 = (undefined1 (*) [64])(*pauVar36 + lVar39 * 4);
          } while (lVar35 < param_4);
        }
        lVar38 = lVar38 + 0x40;
        param_1 = param_1 + 4;
        *param_2 = auVar41;
        param_2[1] = auVar42;
        param_2[2] = auVar43;
        param_2[3] = auVar44;
        param_2 = param_2 + 4;
      } while (lVar38 < (longlong)uVar34);
    }
    auVar44 = _DAT_14308b180;
    auVar45 = _DAT_14308b180;
    for (; lVar38 < (longlong)(param_3 & 0xffffffffffffffe0); lVar38 = lVar38 + 0x20) {
      lVar35 = 0;
      pauVar36 = param_1;
      auVar43 = auVar44;
      auVar42 = auVar44;
      if (0 < param_4) {
        do {
          lVar35 = lVar35 + 1;
          auVar42 = vminps_avx512f(auVar42,*pauVar36);
          auVar43 = vminps_avx512f(auVar43,pauVar36[1]);
          pauVar36 = (undefined1 (*) [64])(*pauVar36 + lVar39 * 4);
        } while (lVar35 < param_4);
      }
      param_1 = param_1 + 2;
      _DAT_14308b180 = auVar45;
      *param_2 = auVar42;
      param_2[1] = auVar43;
      param_2 = param_2 + 2;
      auVar45 = _DAT_14308b180;
    }
    auVar44 = auVar45;
    for (; _DAT_14308b180 = auVar44, lVar38 < (longlong)(param_3 & 0xfffffffffffffff0);
        lVar38 = lVar38 + 0x10) {
      lVar35 = 0;
      lVar37 = 0;
      auVar44 = auVar45;
      if (0 < param_4) {
        do {
          lVar35 = lVar35 + 1;
          auVar44 = vminps_avx512f(auVar44,*(undefined1 (*) [64])(*param_1 + lVar37 * 4));
          lVar37 = lVar37 + lVar39;
        } while (lVar35 < param_4);
      }
      param_1 = param_1 + 1;
      *param_2 = auVar44;
      param_2 = param_2 + 1;
      auVar44 = _DAT_14308b180;
    }
    if ((longlong)param_3 <= lVar38) {
      return;
    }
    uVar33 = 0xffff >> (((int)lVar38 - (int)param_3) + 0x10U & 0x1f);
    uVar32 = (ushort)uVar33;
    if (param_4 < 1) goto LAB_14059d47d;
  }
  uVar32 = (ushort)uVar33;
  lVar35 = 0;
  lVar38 = 0;
  auVar44 = _DAT_14308b180;
  do {
    lVar35 = lVar35 + 1;
    piVar1 = (int *)(*param_1 + lVar38);
    auVar45._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * piVar1[1];
    auVar45._0_4_ = (uint)((byte)uVar33 & 1) * *piVar1;
    auVar45._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * piVar1[2];
    auVar45._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * piVar1[3];
    auVar45._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * piVar1[4];
    auVar45._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * piVar1[5];
    auVar45._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * piVar1[6];
    auVar45._28_4_ = (uint)((byte)(uVar32 >> 7) & 1) * piVar1[7];
    bVar10 = (byte)(uVar33 >> 8);
    auVar45._32_4_ = (uint)(bVar10 & 1) * piVar1[8];
    auVar45._36_4_ = (uint)(bVar10 >> 1 & 1) * piVar1[9];
    auVar45._40_4_ = (uint)(bVar10 >> 2 & 1) * piVar1[10];
    auVar45._44_4_ = (uint)(bVar10 >> 3 & 1) * piVar1[0xb];
    auVar45._48_4_ = (uint)(bVar10 >> 4 & 1) * piVar1[0xc];
    auVar45._52_4_ = (uint)(bVar10 >> 5 & 1) * piVar1[0xd];
    auVar45._56_4_ = (uint)(bVar10 >> 6 & 1) * piVar1[0xe];
    auVar45._60_4_ = (uVar33 >> 0xf & 1) * piVar1[0xf];
    lVar38 = lVar38 + lVar39 * 4;
    auVar44 = vminps_avx512f(auVar44,auVar45);
  } while (lVar35 < param_4);
LAB_14059d47d:
  iVar17 = *(int *)(*param_2 + 4);
  iVar18 = *(int *)(*param_2 + 8);
  iVar19 = *(int *)(*param_2 + 0xc);
  iVar20 = *(int *)(*param_2 + 0x10);
  iVar21 = *(int *)(*param_2 + 0x14);
  iVar22 = *(int *)(*param_2 + 0x18);
  iVar23 = *(int *)(*param_2 + 0x1c);
  iVar24 = *(int *)(*param_2 + 0x20);
  iVar25 = *(int *)(*param_2 + 0x24);
  iVar26 = *(int *)(*param_2 + 0x28);
  iVar27 = *(int *)(*param_2 + 0x2c);
  iVar28 = *(int *)(*param_2 + 0x30);
  iVar29 = *(int *)(*param_2 + 0x34);
  iVar30 = *(int *)(*param_2 + 0x38);
  iVar31 = *(int *)(*param_2 + 0x3c);
  bVar2 = (bool)((byte)uVar32 & 1);
  bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
  bVar4 = (bool)((byte)(uVar32 >> 2) & 1);
  bVar5 = (bool)((byte)(uVar32 >> 3) & 1);
  bVar6 = (bool)((byte)(uVar32 >> 4) & 1);
  bVar7 = (bool)((byte)(uVar32 >> 5) & 1);
  bVar8 = (bool)((byte)(uVar32 >> 6) & 1);
  bVar9 = (bool)((byte)(uVar32 >> 7) & 1);
  bVar10 = (byte)(uVar32 >> 8);
  bVar11 = (bool)(bVar10 >> 1 & 1);
  bVar12 = (bool)(bVar10 >> 2 & 1);
  bVar13 = (bool)(bVar10 >> 3 & 1);
  bVar14 = (bool)(bVar10 >> 4 & 1);
  bVar15 = (bool)(bVar10 >> 5 & 1);
  bVar16 = (bool)(bVar10 >> 6 & 1);
  *(uint *)*param_2 = (uint)bVar2 * auVar44._0_4_ | (uint)!bVar2 * *(int *)*param_2;
  *(uint *)(*param_2 + 4) = (uint)bVar3 * auVar44._4_4_ | (uint)!bVar3 * iVar17;
  *(uint *)(*param_2 + 8) = (uint)bVar4 * auVar44._8_4_ | (uint)!bVar4 * iVar18;
  *(uint *)(*param_2 + 0xc) = (uint)bVar5 * auVar44._12_4_ | (uint)!bVar5 * iVar19;
  *(uint *)(*param_2 + 0x10) = (uint)bVar6 * auVar44._16_4_ | (uint)!bVar6 * iVar20;
  *(uint *)(*param_2 + 0x14) = (uint)bVar7 * auVar44._20_4_ | (uint)!bVar7 * iVar21;
  *(uint *)(*param_2 + 0x18) = (uint)bVar8 * auVar44._24_4_ | (uint)!bVar8 * iVar22;
  *(uint *)(*param_2 + 0x1c) = (uint)bVar9 * auVar44._28_4_ | (uint)!bVar9 * iVar23;
  *(uint *)(*param_2 + 0x20) =
       (uint)(bVar10 & 1) * auVar44._32_4_ | (uint)!(bool)(bVar10 & 1) * iVar24;
  *(uint *)(*param_2 + 0x24) = (uint)bVar11 * auVar44._36_4_ | (uint)!bVar11 * iVar25;
  *(uint *)(*param_2 + 0x28) = (uint)bVar12 * auVar44._40_4_ | (uint)!bVar12 * iVar26;
  *(uint *)(*param_2 + 0x2c) = (uint)bVar13 * auVar44._44_4_ | (uint)!bVar13 * iVar27;
  *(uint *)(*param_2 + 0x30) = (uint)bVar14 * auVar44._48_4_ | (uint)!bVar14 * iVar28;
  *(uint *)(*param_2 + 0x34) = (uint)bVar15 * auVar44._52_4_ | (uint)!bVar15 * iVar29;
  *(uint *)(*param_2 + 0x38) = (uint)bVar16 * auVar44._56_4_ | (uint)!bVar16 * iVar30;
  *(uint *)(*param_2 + 0x3c) =
       (uint)(bVar10 >> 7) * auVar44._60_4_ | (uint)!(bool)(bVar10 >> 7) * iVar31;
  return;
}

