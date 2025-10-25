
undefined8
FUN_140aa4360(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             ulonglong param_6,uint param_7,undefined1 param_8)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  
  lVar25 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar25 = 1;
      break;
    case 2:
      lVar25 = 2;
      break;
    case 3:
      lVar25 = 3;
      break;
    case 4:
      lVar25 = 4;
    }
    (*(code *)(&PTR_FUN_14308f398)[lVar25])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar15 = FUN_140aa47b8();
    return uVar15;
  }
  lVar25 = 0;
  if (0 < param_6._4_4_) {
    uVar26 = (ulonglong)(int)param_6;
    uVar1 = uVar26 - 4;
    uVar17 = 0;
    uVar19 = uVar26;
    do {
      lVar18 = param_1 + lVar25;
      iVar12 = FUN_140aa18c0(lVar18,param_3,uVar19 & 0xffffffff,5,param_5,param_7,param_8);
      iVar13 = 0;
      uVar24 = 0;
      if (0 < (int)uVar19) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + uVar24 * 2) =
               (ushort)*(byte *)(uVar24 + param_3) + (ushort)*(byte *)(uVar24 + 1 + param_3) +
               (ushort)*(byte *)(uVar24 + 2 + param_3) +
               (ushort)*(byte *)(uVar24 + 3 + param_3) + (ushort)*(byte *)(uVar24 + 4 + param_3);
          uVar23 = uVar24 + 1;
          iVar13 = (int)uVar24 + 1;
          if (uVar26 <= uVar23) break;
          uVar24 = uVar23;
        } while ((longlong)uVar23 < 2);
      }
      lVar22 = (longlong)iVar13;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar1 < 0x10) {
LAB_140aa47cf:
          iVar21 = 0;
          iVar14 = iVar13;
        }
        else {
          uVar24 = *(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2;
          uVar16 = (uint)uVar24 & 0xf;
          if ((uVar24 & 0xf) != 0) {
            if ((uVar24 & 1) != 0) goto LAB_140aa47cf;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          uVar24 = (ulonglong)uVar16;
          if ((longlong)uVar1 < (longlong)(uVar24 + 0x10)) goto LAB_140aa47cf;
          uVar19 = 0;
          iVar21 = (int)uVar1 - ((int)uVar1 - uVar16 & 0xf);
          if (uVar16 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2 + uVar19 * 2) =
                   (ushort)*(byte *)(uVar19 + lVar18) + (ushort)*(byte *)(uVar19 + 1 + lVar18) +
                   (ushort)*(byte *)(uVar19 + 2 + lVar18) +
                   (ushort)*(byte *)(uVar19 + 3 + lVar18) + (ushort)*(byte *)(uVar19 + 4 + lVar18);
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar24);
          }
          lVar20 = uVar24 + lVar25;
          do {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(lVar20 + param_1);
            auVar2 = vpmovzxbw_avx(auVar2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)(lVar20 + 1 + param_1);
            auVar3 = vpmovzxbw_avx(auVar3);
            auVar2 = vpaddw_avx(auVar2,auVar3);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(ulonglong *)(lVar20 + 2 + param_1);
            auVar3 = vpmovzxbw_avx(auVar4);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulonglong *)(lVar20 + 3 + param_1);
            auVar4 = vpmovzxbw_avx(auVar5);
            auVar2 = vpaddw_avx(auVar2,auVar3);
            auVar2 = vpaddw_avx(auVar2,auVar4);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = *(ulonglong *)(lVar20 + 4 + param_1);
            auVar3 = vpmovzxbw_avx(auVar6);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = *(ulonglong *)(lVar20 + 8 + param_1);
            auVar4 = vpmovzxbw_avx(auVar7);
            auVar2 = vpaddw_avx(auVar2,auVar3);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *(ulonglong *)(lVar20 + 9 + param_1);
            auVar3 = vpmovzxbw_avx(auVar8);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *(ulonglong *)(lVar20 + 10 + param_1);
            auVar5 = vpmovzxbw_avx(auVar9);
            auVar3 = vpaddw_avx(auVar4,auVar3);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *(ulonglong *)(lVar20 + 0xb + param_1);
            auVar4 = vpmovzxbw_avx(auVar10);
            auVar3 = vpaddw_avx(auVar3,auVar5);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = *(ulonglong *)(lVar20 + 0xc + param_1);
            auVar5 = vpmovzxbw_avx(auVar11);
            auVar3 = vpaddw_avx(auVar3,auVar4);
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2 + uVar24 * 2) =
                 auVar2;
            auVar2 = vpaddw_avx(auVar3,auVar5);
            lVar20 = lVar20 + 0x10;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2 + 0x10 + uVar24 * 2) = auVar2;
            uVar24 = uVar24 + 0x10;
          } while (uVar24 < (ulonglong)(longlong)iVar21);
          uVar19 = param_6 & 0xffffffff;
          iVar14 = iVar13 + iVar21;
        }
        uVar24 = (ulonglong)iVar21;
        if (uVar24 < uVar1) {
          do {
            *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2 + uVar24 * 2) =
                 (ushort)*(byte *)(uVar24 + lVar18) + (ushort)*(byte *)(uVar24 + 1 + lVar18) +
                 (ushort)*(byte *)(uVar24 + 2 + lVar18) +
                 (ushort)*(byte *)(uVar24 + 3 + lVar18) + (ushort)*(byte *)(uVar24 + 4 + lVar18);
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar1);
          lVar22 = (longlong)((int)uVar24 + iVar13);
        }
        else {
          lVar22 = (longlong)iVar14;
        }
      }
      uVar24 = 0;
      lVar18 = iVar12 + param_3;
      do {
        if ((longlong)(uVar26 - 2) <= (longlong)uVar24) break;
        *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + lVar22 * 2 + uVar24 * 2) =
             (ushort)*(byte *)(uVar24 + lVar18) + (ushort)*(byte *)(uVar24 + 1 + lVar18) +
             (ushort)*(byte *)(uVar24 + 2 + lVar18) +
             (ushort)*(byte *)(uVar24 + 3 + lVar18) + (ushort)*(byte *)(uVar24 + 4 + lVar18);
        uVar24 = uVar24 + 1;
      } while (uVar24 < 2);
      uVar17 = uVar17 + 1;
      lVar25 = lVar25 + param_4;
    } while (uVar17 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

