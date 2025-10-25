
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000aac3(longlong param_1,int param_2,longlong param_3,uint param_4)

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
  longlong lVar15;
  int iVar16;
  longlong in_R10;
  ulonglong uVar17;
  undefined1 in_R11B;
  undefined7 in_register_00000099;
  longlong lVar18;
  longlong lVar19;
  int unaff_R15D;
  longlong lVar20;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  longlong lStack0000000000000060;
  int iStack00000000000000b0;
  int iStack00000000000000b4;
  
  param_4 = param_4 & 0xfffffffc;
  lVar15 = (longlong)(int)param_4;
  iVar11 = 0;
  lVar7 = -param_2 + param_1;
  lVar20 = -unaff_R15D + param_3;
  lStack0000000000000028 = param_1 + lVar15;
  lStack0000000000000060 = lVar15 + 1;
  lStack0000000000000030 = param_3 + lVar15 * 3;
  lVar18 = 0;
  do {
    lVar20 = lVar20 + in_R10;
    lVar7 = lVar7 + CONCAT71(in_register_00000099,in_R11B);
    iVar11 = iVar11 + 1;
    FUN_14000f600(lVar7,lVar20,param_4);
    if ((int)param_4 < iStack00000000000000b0) {
      lVar19 = lVar18 * in_R10 + lStack0000000000000030;
      uVar13 = CONCAT71(in_register_00000099,in_R11B) * lVar18 + lStack0000000000000028;
      lVar8 = iStack00000000000000b0 - lVar15;
      if (((longlong)(lVar19 - uVar13) < lVar8) && ((longlong)-(lVar19 - uVar13) < lVar8 * 3)) {
        iVar16 = 1;
        lVar8 = 0;
        uVar14 = iStack00000000000000b0 - param_4 >> 1;
        uVar10 = 0;
        if (uVar14 != 0) {
          do {
            uVar9 = uVar10;
            uVar2 = *(undefined1 *)(uVar13 + uVar9 * 2);
            *(undefined1 *)(lVar8 + 2 + lVar19) = uVar2;
            *(undefined1 *)(lVar8 + 1 + lVar19) = uVar2;
            *(undefined1 *)(lVar8 + lVar19) = uVar2;
            uVar2 = *(undefined1 *)(uVar13 + 1 + uVar9 * 2);
            uVar10 = uVar9 + 1;
            *(undefined1 *)(lVar8 + 5 + lVar19) = uVar2;
            *(undefined1 *)(lVar8 + 4 + lVar19) = uVar2;
            *(undefined1 *)(lVar8 + 3 + lVar19) = uVar2;
            lVar8 = lVar8 + 6;
          } while (uVar10 < uVar14);
          iVar16 = (int)uVar9 + 2 + (int)uVar10;
        }
        if (iVar16 - 1U < iStack00000000000000b0 - param_4) {
          uVar2 = *(undefined1 *)((longlong)iVar16 + -1 + uVar13);
          lVar8 = (longlong)iVar16 * 3;
          *(undefined1 *)(lVar8 + -1 + lVar19) = uVar2;
          *(undefined1 *)(lVar8 + -2 + lVar19) = uVar2;
          *(undefined1 *)(lVar8 + -3 + lVar19) = uVar2;
        }
      }
      else {
        uVar10 = (iStack00000000000000b0 - lStack0000000000000060) + 1;
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
          uVar17 = 0;
          uVar12 = (ulonglong)(int)((int)uVar10 - ((int)uVar10 - (int)uVar9 & 0xfU));
          lVar8 = 0;
          if (uVar9 != 0) {
            do {
              uVar2 = *(undefined1 *)(uVar17 + uVar13);
              uVar17 = uVar17 + 1;
              *(undefined1 *)(lVar8 + 2 + lVar19) = uVar2;
              *(undefined1 *)(lVar8 + 1 + lVar19) = uVar2;
              *(undefined1 *)(lVar8 + lVar19) = uVar2;
              lVar8 = lVar8 + 3;
            } while (uVar17 < uVar9);
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
            *(undefined1 (*) [16])(lVar8 + lVar19) = auVar6;
            auVar5 = vpunpckhbw_avx(auVar1,auVar1);
            auVar6 = vpor_avx(auVar3,auVar4);
            auVar3 = vpshufb_avx(auVar5,_DAT_143085c70);
            *(undefined1 (*) [16])(lVar8 + 0x10 + lVar19) = auVar6;
            auVar1 = vpshufb_avx(auVar1,_DAT_143085c80);
            auVar1 = vpor_avx(auVar3,auVar1);
            *(undefined1 (*) [16])(lVar8 + 0x20 + lVar19) = auVar1;
            lVar8 = lVar8 + 0x30;
          } while (uVar9 < uVar12);
        }
        lVar8 = uVar12 * 3;
        for (; uVar12 < uVar10; uVar12 = uVar12 + 1) {
          uVar2 = *(undefined1 *)(uVar12 + uVar13);
          *(undefined1 *)(lVar8 + 2 + lVar19) = uVar2;
          *(undefined1 *)(lVar8 + 1 + lVar19) = uVar2;
          *(undefined1 *)(lVar8 + lVar19) = uVar2;
          lVar8 = lVar8 + 3;
        }
      }
    }
    lVar18 = lVar18 + 1;
    if (iStack00000000000000b4 <= iVar11) {
      return 0;
    }
  } while( true );
}

