
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14000aa80(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar14 = (uint)param_5 & 0xfffffffc;
  lVar16 = (longlong)(int)uVar14;
  iVar11 = 0;
  lVar7 = -param_2 + param_1;
  lVar21 = -param_4 + param_3;
  lVar19 = 0;
  do {
    lVar21 = lVar21 + param_4;
    lVar7 = lVar7 + param_2;
    iVar11 = iVar11 + 1;
    FUN_14000f600(lVar7,lVar21,uVar14);
    if ((int)uVar14 < (int)(uint)param_5) {
      lVar20 = lVar19 * param_4 + param_3 + lVar16 * 3;
      uVar13 = param_2 * lVar19 + param_1 + lVar16;
      lVar8 = (int)(uint)param_5 - lVar16;
      if (((longlong)(lVar20 - uVar13) < lVar8) && ((longlong)-(lVar20 - uVar13) < lVar8 * 3)) {
        iVar17 = 1;
        lVar8 = 0;
        uVar15 = (uint)param_5 - uVar14 >> 1;
        uVar10 = 0;
        if (uVar15 != 0) {
          do {
            uVar9 = uVar10;
            uVar2 = *(undefined1 *)(uVar13 + uVar9 * 2);
            *(undefined1 *)(lVar8 + 2 + lVar20) = uVar2;
            *(undefined1 *)(lVar8 + 1 + lVar20) = uVar2;
            *(undefined1 *)(lVar8 + lVar20) = uVar2;
            uVar2 = *(undefined1 *)(uVar13 + 1 + uVar9 * 2);
            uVar10 = uVar9 + 1;
            *(undefined1 *)(lVar8 + 5 + lVar20) = uVar2;
            *(undefined1 *)(lVar8 + 4 + lVar20) = uVar2;
            *(undefined1 *)(lVar8 + 3 + lVar20) = uVar2;
            lVar8 = lVar8 + 6;
          } while (uVar10 < uVar15);
          iVar17 = (int)uVar9 + 2 + (int)uVar10;
        }
        if (iVar17 - 1U < (uint)param_5 - uVar14) {
          uVar2 = *(undefined1 *)((longlong)iVar17 + -1 + uVar13);
          lVar8 = (longlong)iVar17 * 3;
          *(undefined1 *)(lVar8 + -1 + lVar20) = uVar2;
          *(undefined1 *)(lVar8 + -2 + lVar20) = uVar2;
          *(undefined1 *)(lVar8 + -3 + lVar20) = uVar2;
        }
      }
      else {
        uVar10 = ((longlong)(int)(uint)param_5 - (lVar16 + 1)) + 1;
        if ((longlong)uVar10 < 0x10) {
LAB_14000adaf:
          uVar12 = 0;
        }
        else {
          uVar9 = uVar13 & 0xf;
          if (uVar9 != 0) {
            uVar9 = 0x10 - uVar9;
          }
          if ((longlong)uVar10 < (longlong)(uVar9 + 0x10)) goto LAB_14000adaf;
          uVar18 = 0;
          uVar12 = (ulonglong)(int)((int)uVar10 - ((int)uVar10 - (int)uVar9 & 0xfU));
          lVar8 = 0;
          if (uVar9 != 0) {
            do {
              uVar2 = *(undefined1 *)(uVar18 + uVar13);
              uVar18 = uVar18 + 1;
              *(undefined1 *)(lVar8 + 2 + lVar20) = uVar2;
              *(undefined1 *)(lVar8 + 1 + lVar20) = uVar2;
              *(undefined1 *)(lVar8 + lVar20) = uVar2;
              lVar8 = lVar8 + 3;
            } while (uVar18 < uVar9);
          }
          lVar8 = uVar9 * 3;
          do {
            auVar1 = *(undefined1 (*) [16])(uVar9 + uVar13);
            uVar9 = uVar9 + 0x10;
            auVar6 = vpunpcklbw_avx(auVar1,auVar1);
            auVar6 = vpshufb_avx(auVar6,_DAT_143085c20);
            auVar3 = vpshufb_avx(auVar1,_DAT_143085c30);
            auVar4 = vpshufb_avx(auVar1,_DAT_143085c40);
            auVar5 = vpshufb_avx(auVar1,_DAT_143085c50);
            auVar6 = vpor_avx(auVar6,auVar3);
            auVar3 = vpor_avx(auVar4,auVar5);
            auVar4 = vpshufb_avx(auVar1,_DAT_143085c60);
            *(undefined1 (*) [16])(lVar8 + lVar20) = auVar6;
            auVar5 = vpunpckhbw_avx(auVar1,auVar1);
            auVar6 = vpor_avx(auVar3,auVar4);
            auVar3 = vpshufb_avx(auVar5,_DAT_143085c70);
            *(undefined1 (*) [16])(lVar8 + 0x10 + lVar20) = auVar6;
            auVar1 = vpshufb_avx(auVar1,_DAT_143085c80);
            auVar1 = vpor_avx(auVar3,auVar1);
            *(undefined1 (*) [16])(lVar8 + 0x20 + lVar20) = auVar1;
            lVar8 = lVar8 + 0x30;
          } while (uVar9 < uVar12);
        }
        lVar8 = uVar12 * 3;
        for (; uVar12 < uVar10; uVar12 = uVar12 + 1) {
          uVar2 = *(undefined1 *)(uVar12 + uVar13);
          *(undefined1 *)(lVar8 + 2 + lVar20) = uVar2;
          *(undefined1 *)(lVar8 + 1 + lVar20) = uVar2;
          *(undefined1 *)(lVar8 + lVar20) = uVar2;
          lVar8 = lVar8 + 3;
        }
      }
    }
    lVar19 = lVar19 + 1;
    if (param_5._4_4_ <= iVar11) {
      return 0;
    }
  } while( true );
}

