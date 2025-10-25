
undefined8
FUN_140a9a500(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             ulonglong param_6,uint param_7,undefined1 param_8)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar12 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar12 = 1;
      break;
    case 2:
      lVar12 = 2;
      break;
    case 3:
      lVar12 = 3;
      break;
    case 4:
      lVar12 = 4;
    }
    (*(code *)(&PTR_FUN_14308f2f0)[lVar12])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar9 = FUN_140a9a988();
    return uVar9;
  }
  if (0 < param_6._4_4_) {
    uVar11 = (ulonglong)(int)param_6;
    lVar10 = (longlong)param_5;
    uVar1 = uVar11 - 4;
    uVar19 = 0;
    uVar13 = uVar11;
    do {
      lVar20 = param_1 + lVar12;
      iVar6 = FUN_140a97a60(lVar20,param_3,uVar13 & 0xffffffff,5,param_5,param_7,param_8);
      iVar7 = 0;
      uVar17 = 0;
      if (0 < (int)uVar13) {
        do {
          if (lVar10 <= (longlong)uVar17) break;
          *(ushort *)(*(longlong *)(param_2 + uVar19 * 8) + uVar17 * 2) =
               (ushort)*(byte *)(uVar17 + param_3) + (ushort)*(byte *)(uVar17 + 2 + param_3) * -2 +
               (ushort)*(byte *)(uVar17 + 4 + param_3);
          uVar16 = uVar17 + 1;
          iVar7 = (int)uVar17 + 1;
          uVar17 = uVar16;
        } while (uVar16 < uVar11);
      }
      lVar18 = (longlong)iVar7;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar1 < 0x10) {
LAB_140a9a99f:
          iVar15 = 0;
          iVar8 = iVar7;
        }
        else {
          uVar17 = *(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2;
          uVar16 = uVar17 & 0xf;
          if ((int)uVar16 != 0) {
            if ((uVar17 & 1) != 0) goto LAB_140a9a99f;
            uVar16 = (ulonglong)(0x10U - (int)uVar16 >> 1);
          }
          if ((longlong)uVar1 < (longlong)(uVar16 + 0x10)) goto LAB_140a9a99f;
          uVar13 = 0;
          iVar15 = (int)uVar1 - ((int)uVar1 - (int)uVar16 & 0xfU);
          if ((int)uVar16 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2 + uVar13 * 2) =
                   (ushort)*(byte *)(uVar13 + lVar20) + (ushort)*(byte *)(uVar13 + 2 + lVar20) * -2
                   + (ushort)*(byte *)(uVar13 + 4 + lVar20);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar16);
          }
          lVar14 = uVar16 + lVar12;
          do {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(lVar14 + 2 + param_1);
            auVar2 = vpmovzxbw_avx(auVar2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)(lVar14 + param_1);
            auVar3 = vpmovzxbw_avx(auVar3);
            auVar21 = vpsllw_avx(auVar2,1);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = *(ulonglong *)(lVar14 + 4 + param_1);
            auVar2 = vpmovzxbw_avx(auVar22);
            auVar5 = vpsubw_avx(auVar3,auVar21);
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)(lVar14 + 8 + param_1);
            auVar3 = vpmovzxbw_avx(auVar21);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(ulonglong *)(lVar14 + 10 + param_1);
            auVar22 = vpmovzxbw_avx(auVar4);
            auVar2 = vpaddw_avx(auVar5,auVar2);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulonglong *)(lVar14 + 0xc + param_1);
            auVar21 = vpmovzxbw_avx(auVar5);
            auVar22 = vpsllw_avx(auVar22,1);
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2 + uVar16 * 2) =
                 auVar2;
            auVar2 = vpsubw_avx(auVar3,auVar22);
            auVar2 = vpaddw_avx(auVar2,auVar21);
            lVar14 = lVar14 + 0x10;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2 + 0x10 + uVar16 * 2) = auVar2;
            uVar16 = uVar16 + 0x10;
          } while (uVar16 < (ulonglong)(longlong)iVar15);
          uVar13 = param_6 & 0xffffffff;
          iVar8 = iVar7 + iVar15;
        }
        uVar17 = (ulonglong)iVar15;
        if (uVar17 < uVar1) {
          do {
            *(ushort *)(*(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2 + uVar17 * 2) =
                 (ushort)*(byte *)(uVar17 + lVar20) + (ushort)*(byte *)(uVar17 + 2 + lVar20) * -2 +
                 (ushort)*(byte *)(uVar17 + 4 + lVar20);
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar1);
          lVar18 = (longlong)((int)uVar17 + iVar7);
        }
        else {
          lVar18 = (longlong)iVar8;
        }
      }
      uVar17 = 0;
      if (0 < 5 - (param_5 + 1)) {
        lVar20 = iVar6 + param_3;
        do {
          if ((longlong)(uVar11 - lVar10) <= (longlong)uVar17) break;
          *(ushort *)(*(longlong *)(param_2 + uVar19 * 8) + lVar18 * 2 + uVar17 * 2) =
               (ushort)*(byte *)(uVar17 + lVar20) + (ushort)*(byte *)(uVar17 + 2 + lVar20) * -2 +
               (ushort)*(byte *)(uVar17 + 4 + lVar20);
          uVar17 = uVar17 + 1;
        } while (uVar17 < 4U - lVar10);
      }
      uVar19 = uVar19 + 1;
      lVar12 = lVar12 + param_4;
    } while (uVar19 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

