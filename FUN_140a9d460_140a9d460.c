
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140a9d460(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  
  uVar14 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      uVar14 = 1;
      break;
    case 2:
      uVar14 = 2;
      break;
    case 3:
      uVar14 = 3;
      break;
    case 4:
      uVar14 = 4;
    }
    (*(code *)(&PTR_FUN_14308f330)[uVar14])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar10 = FUN_140a9da6b();
    return uVar10;
  }
  if (0 < param_6._4_4_) {
    lVar13 = (longlong)param_5;
    uVar24 = (int)param_6 - 4;
    auVar31 = ZEXT1664(_DAT_14308f320);
    uVar15 = uVar14;
    do {
      lVar16 = param_1 + uVar14;
      iVar7 = FUN_140a9a9c0(lVar16,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar8 = 0;
      uVar20 = 0;
      if (0 < (int)param_6) {
        do {
          if (lVar13 <= (longlong)uVar20) break;
          bVar6 = *(byte *)(uVar20 + 2 + param_3);
          iVar8 = (int)uVar20 + 1;
          *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + uVar20 * 2) =
               (ushort)*(byte *)(uVar20 + param_3) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
               (ushort)*(byte *)(uVar20 + 4 + param_3) +
               ((ushort)*(byte *)(uVar20 + 1 + param_3) + (ushort)*(byte *)(uVar20 + 3 + param_3)) *
               4;
          uVar20 = uVar20 + 1;
        } while (uVar20 < (ulonglong)(longlong)(int)param_6);
      }
      lVar23 = (longlong)iVar8;
      if (-1 < (int)param_6 + -5) {
        if ((int)uVar24 < 0x10) {
LAB_140a9da80:
          iVar22 = 0;
          if (uVar24 != 0) {
            uVar17 = 0;
            uVar20 = (longlong)(int)uVar24;
            iVar9 = iVar8;
LAB_140a9d924:
            uVar18 = (ulonglong)(int)uVar17;
            if (uVar20 <= uVar18) goto LAB_140a9d992;
            lVar16 = lVar16 + iVar22;
            do {
              bVar6 = *(byte *)(uVar18 + 2 + lVar16);
              *(ushort *)
               (*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + (longlong)iVar22 * 2 + uVar18 * 2
               ) = (ushort)*(byte *)(uVar18 + lVar16) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
                   (ushort)*(byte *)(uVar18 + 4 + lVar16) +
                   ((ushort)*(byte *)(uVar18 + 1 + lVar16) + (ushort)*(byte *)(uVar18 + 3 + lVar16))
                   * 4;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar20);
            lVar23 = (longlong)((int)uVar18 + iVar8 + iVar22);
          }
        }
        else {
          uVar17 = (int)*(undefined8 *)(param_2 + uVar15 * 8) + iVar8 * 2;
          uVar21 = uVar17 & 0xf;
          if (uVar21 != 0) {
            if ((uVar17 & 1) != 0) goto LAB_140a9da80;
            uVar21 = 0x10 - uVar21 >> 1;
          }
          uVar20 = (ulonglong)uVar21;
          if ((int)uVar24 < (int)(uVar21 + 0x10)) goto LAB_140a9da80;
          uVar18 = 0;
          iVar22 = uVar24 - (uVar24 - uVar21 & 0xf);
          if (uVar21 != 0) {
            do {
              bVar6 = *(byte *)(uVar18 + 2 + lVar16);
              *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + uVar18 * 2) =
                   (ushort)*(byte *)(uVar18 + lVar16) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
                   (ushort)*(byte *)(uVar18 + 4 + lVar16) +
                   ((ushort)*(byte *)(uVar18 + 1 + lVar16) + (ushort)*(byte *)(uVar18 + 3 + lVar16))
                   * 4;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar20);
          }
          uVar18 = (ulonglong)iVar22;
          lVar19 = uVar20 + uVar14;
          do {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = *(ulonglong *)(lVar19 + 2 + param_1);
            auVar25 = vpmovzxbw_avx(auVar25);
            auVar30 = auVar31._0_16_;
            auVar27 = vpmullw_avx(auVar30,auVar25);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(lVar19 + 1 + param_1);
            auVar25 = vpmovzxbw_avx(auVar29);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(lVar19 + param_1);
            auVar29 = vpmovzxbw_avx(auVar26);
            auVar25 = vpsllw_avx(auVar25,2);
            auVar25 = vpaddw_avx(auVar29,auVar25);
            auVar25 = vpaddw_avx(auVar25,auVar27);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = *(ulonglong *)(lVar19 + 9 + param_1);
            auVar29 = vpmovzxbw_avx(auVar27);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)(lVar19 + 3 + param_1);
            auVar26 = vpmovzxbw_avx(auVar1);
            auVar28 = vpsllw_avx(auVar29,2);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(lVar19 + 10 + param_1);
            auVar29 = vpmovzxbw_avx(auVar2);
            auVar27 = vpsllw_avx(auVar26,2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)(lVar19 + 8 + param_1);
            auVar26 = vpmovzxbw_avx(auVar3);
            auVar25 = vpaddw_avx(auVar25,auVar27);
            auVar1 = vpmullw_avx(auVar30,auVar29);
            auVar29 = vpaddw_avx(auVar26,auVar28);
            auVar28._8_8_ = 0;
            auVar28._0_8_ = *(ulonglong *)(lVar19 + 4 + param_1);
            auVar26 = vpmovzxbw_avx(auVar28);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(ulonglong *)(lVar19 + 0xb + param_1);
            auVar27 = vpmovzxbw_avx(auVar4);
            auVar25 = vpaddw_avx(auVar25,auVar26);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulonglong *)(lVar19 + 0xc + param_1);
            auVar26 = vpmovzxbw_avx(auVar5);
            auVar29 = vpaddw_avx(auVar29,auVar1);
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + uVar20 * 2) =
                 auVar25;
            auVar25 = vpsllw_avx(auVar27,2);
            auVar25 = vpaddw_avx(auVar29,auVar25);
            auVar25 = vpaddw_avx(auVar25,auVar26);
            lVar19 = lVar19 + 0x10;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + 0x10 + uVar20 * 2) = auVar25;
            uVar20 = uVar20 + 0x10;
          } while (uVar20 < uVar18);
          iVar9 = iVar8 + iVar22;
          if (iVar22 + 1U <= uVar24) {
            uVar20 = (longlong)(int)uVar24 - uVar18;
            if ((longlong)uVar20 < 4) {
              uVar17 = 0;
            }
            else {
              uVar11 = 0;
              uVar17 = (uint)uVar20 & 0xfffffffc;
              puVar12 = (uint *)(lVar16 + uVar18);
              do {
                auVar25 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar12 + 2)));
                auVar26 = vpmullw_avx(auVar30,auVar25);
                auVar25 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar12 + 1)));
                auVar29 = vpsllw_avx(auVar25,2);
                auVar25 = vpmovzxbw_avx(ZEXT416(*puVar12));
                auVar25 = vpaddw_avx(auVar25,auVar29);
                auVar29 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar12 + 3)));
                auVar25 = vpaddw_avx(auVar25,auVar26);
                auVar26 = vpsllw_avx(auVar29,2);
                auVar29 = vpmovzxbw_avx(ZEXT416(puVar12[1]));
                auVar25 = vpaddw_avx(auVar25,auVar26);
                auVar25 = vpaddw_avx(auVar25,auVar29);
                puVar12 = puVar12 + 1;
                *(longlong *)
                 (*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + uVar18 * 2 + uVar11 * 2) =
                     auVar25._0_8_;
                uVar11 = uVar11 + 4;
              } while (uVar11 < (ulonglong)(longlong)(int)uVar17);
              iVar9 = uVar17 + iVar8 + iVar22;
            }
            goto LAB_140a9d924;
          }
LAB_140a9d992:
          lVar23 = (longlong)iVar9;
        }
      }
      uVar20 = 0;
      if (0 < 5 - (param_5 + 1)) {
        lVar16 = iVar7 + param_3;
        do {
          if ((int)param_6 - lVar13 <= (longlong)uVar20) break;
          bVar6 = *(byte *)(uVar20 + 2 + lVar16);
          *(ushort *)(*(longlong *)(param_2 + uVar15 * 8) + lVar23 * 2 + uVar20 * 2) =
               (ushort)*(byte *)(uVar20 + lVar16) + ((ushort)bVar6 + (ushort)bVar6 * 2) * 2 +
               (ushort)*(byte *)(uVar20 + 4 + lVar16) +
               ((ushort)*(byte *)(uVar20 + 1 + lVar16) + (ushort)*(byte *)(uVar20 + 3 + lVar16)) * 4
          ;
          uVar20 = uVar20 + 1;
        } while (uVar20 < 4U - lVar13);
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 + (longlong)param_4;
    } while (uVar15 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

