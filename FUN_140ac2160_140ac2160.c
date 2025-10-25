
undefined8
FUN_140ac2160(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  
  uVar20 = 0;
  if ((int)param_6 - param_5 < 0x10) {
    lVar25 = 0;
    if (0 < param_6._4_4_) {
      uVar26 = (int)param_6 - 4;
      uVar28 = (longlong)(int)uVar26;
      do {
        lVar19 = param_1 + lVar25;
        iVar13 = FUN_140abe800(lVar19,param_3,(int)param_6,5,param_5,param_7,param_8);
        iVar16 = 0;
        uVar21 = 0;
        if (0 < (int)param_6) {
          do {
            iVar16 = (int)uVar21 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + uVar21 * 2) =
                 (ushort)*(byte *)(uVar21 + param_3) + (ushort)*(byte *)(uVar21 + 1 + param_3) +
                 (ushort)*(byte *)(uVar21 + 2 + param_3) +
                 (ushort)*(byte *)(uVar21 + 3 + param_3) + (ushort)*(byte *)(uVar21 + 4 + param_3);
            uVar21 = uVar21 + 1;
            if ((ulonglong)(longlong)(int)param_6 <= uVar21) break;
          } while ((longlong)uVar21 < 2);
        }
        lVar24 = (longlong)iVar16;
        if (-1 < (int)param_6 + -5) {
          uVar15 = (uint)uVar28;
          if ((int)uVar15 < 0x20) {
LAB_140ac26ea:
            uVar23 = 0;
            iVar17 = iVar16;
          }
          else {
            if ((int)uVar15 < 0x12c0) {
              uVar21 = 0;
              uVar23 = uVar26 & 0xffffffe0;
            }
            else {
              uVar23 = (int)*(undefined8 *)(param_2 + uVar20 * 8) + iVar16 * 2;
              uVar14 = uVar23 & 0x1f;
              if (uVar14 != 0) {
                if ((uVar23 & 1) != 0) goto LAB_140ac26ea;
                uVar14 = 0x20 - uVar14 >> 1;
              }
              uVar21 = (ulonglong)uVar14;
              if ((int)uVar15 < (int)(uVar14 + 0x20)) goto LAB_140ac26ea;
              uVar22 = 0;
              uVar23 = uVar15 - (uVar15 - uVar14 & 0x1f);
              if (uVar14 != 0) {
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + uVar22 * 2) =
                       (ushort)*(byte *)(uVar22 + lVar19) + (ushort)*(byte *)(uVar22 + 1 + lVar19) +
                       (ushort)*(byte *)(uVar22 + 2 + lVar19) +
                       (ushort)*(byte *)(uVar22 + 3 + lVar19) +
                       (ushort)*(byte *)(uVar22 + 4 + lVar19);
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar21);
              }
            }
            lVar29 = uVar21 + lVar25;
            do {
              auVar2 = *(undefined1 (*) [32])(lVar29 + 1 + param_1);
              pauVar1 = (undefined1 (*) [32])(lVar29 + param_1);
              auVar3 = *(undefined1 (*) [32])(lVar29 + 2 + param_1);
              auVar4 = *(undefined1 (*) [32])(lVar29 + 3 + param_1);
              auVar5 = *(undefined1 (*) [32])(lVar29 + 4 + param_1);
              lVar29 = lVar29 + 0x20;
              auVar11 = vpmovzxbw_avx2(SUB3216(*pauVar1,0));
              auVar12 = vpmovzxbw_avx2(auVar2._0_16_);
              auVar11 = vpaddw_avx2(auVar11,auVar12);
              auVar12 = vpmovzxbw_avx2(SUB3216(*pauVar1,0x10));
              auVar2 = vpmovzxbw_avx2(auVar2._16_16_);
              auVar2 = vpaddw_avx2(auVar12,auVar2);
              auVar12 = vpmovzxbw_avx2(auVar3._0_16_);
              auVar11 = vpaddw_avx2(auVar11,auVar12);
              auVar3 = vpmovzxbw_avx2(auVar3._16_16_);
              auVar2 = vpaddw_avx2(auVar2,auVar3);
              auVar3 = vpmovzxbw_avx2(auVar4._0_16_);
              auVar3 = vpaddw_avx2(auVar11,auVar3);
              auVar4 = vpmovzxbw_avx2(auVar4._16_16_);
              auVar2 = vpaddw_avx2(auVar2,auVar4);
              auVar4 = vpmovzxbw_avx2(auVar5._0_16_);
              auVar3 = vpaddw_avx2(auVar3,auVar4);
              *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + uVar21 * 2)
                   = auVar3;
              auVar3 = vpmovzxbw_avx2(auVar5._16_16_);
              auVar2 = vpaddw_avx2(auVar2,auVar3);
              *(undefined1 (*) [32])
               (*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + 0x20 + uVar21 * 2) = auVar2;
              uVar21 = uVar21 + 0x20;
            } while (uVar21 < (ulonglong)(longlong)(int)uVar23);
            iVar17 = iVar16 + uVar23;
          }
          if (uVar23 + 1 <= uVar15) {
            lVar29 = (longlong)(int)uVar23;
            uVar21 = (int)uVar26 - lVar29;
            if ((longlong)uVar21 < 8) {
              uVar15 = 0;
            }
            else {
              uVar22 = 0;
              uVar15 = (uint)uVar21 & 0xfffffff8;
              lVar18 = lVar25;
              do {
                lVar27 = (int)uVar23 + param_1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = *(ulonglong *)(lVar18 + lVar27);
                auVar6 = vpmovzxbw_avx(auVar6);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *(ulonglong *)(lVar18 + 1 + lVar27);
                auVar7 = vpmovzxbw_avx(auVar7);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = *(ulonglong *)(lVar18 + 2 + lVar27);
                auVar8 = vpmovzxbw_avx(auVar8);
                auVar6 = vpaddw_avx(auVar6,auVar7);
                auVar9._8_8_ = 0;
                auVar9._0_8_ = *(ulonglong *)(lVar18 + 3 + lVar27);
                auVar7 = vpmovzxbw_avx(auVar9);
                auVar6 = vpaddw_avx(auVar6,auVar8);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = *(ulonglong *)(lVar18 + 4 + lVar27);
                auVar8 = vpmovzxbw_avx(auVar10);
                auVar6 = vpaddw_avx(auVar6,auVar7);
                auVar6 = vpaddw_avx(auVar6,auVar8);
                lVar18 = lVar18 + 8;
                *(undefined1 (*) [16])
                 (*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + lVar29 * 2 + uVar22 * 2) =
                     auVar6;
                uVar22 = uVar22 + 8;
              } while (uVar22 < (ulonglong)(longlong)(int)uVar15);
              uVar28 = uVar28 & 0xffffffff;
              iVar17 = iVar16 + uVar23 + uVar15;
            }
            uVar22 = (ulonglong)(int)uVar15;
            if (uVar22 < uVar21) {
              lVar19 = lVar19 + lVar29;
              do {
                *(ushort *)
                 (*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + lVar29 * 2 + uVar22 * 2) =
                     (ushort)*(byte *)(uVar22 + lVar19) + (ushort)*(byte *)(uVar22 + 1 + lVar19) +
                     (ushort)*(byte *)(uVar22 + 2 + lVar19) +
                     (ushort)*(byte *)(uVar22 + 3 + lVar19) + (ushort)*(byte *)(uVar22 + 4 + lVar19)
                ;
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar21);
              lVar24 = (longlong)(int)((int)uVar22 + iVar16 + uVar23);
              goto LAB_140ac264b;
            }
          }
          lVar24 = (longlong)iVar17;
        }
LAB_140ac264b:
        uVar21 = 0;
        lVar19 = iVar13 + param_3;
        do {
          if ((longlong)((longlong)(int)param_6 - 2U) <= (longlong)uVar21) break;
          *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar24 * 2 + uVar21 * 2) =
               (ushort)*(byte *)(uVar21 + lVar19) + (ushort)*(byte *)(uVar21 + 1 + lVar19) +
               (ushort)*(byte *)(uVar21 + 2 + lVar19) +
               (ushort)*(byte *)(uVar21 + 3 + lVar19) + (ushort)*(byte *)(uVar21 + 4 + lVar19);
          uVar21 = uVar21 + 1;
        } while (uVar21 < 2);
        uVar20 = uVar20 + 1;
        lVar25 = lVar25 + param_4;
      } while (uVar20 < (ulonglong)(longlong)param_6._4_4_);
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      uVar20 = 1;
      break;
    case 2:
      uVar20 = 2;
      break;
    case 3:
      uVar20 = 3;
      break;
    case 4:
      uVar20 = 4;
    }
    (*(code *)(&PTR_FUN_14308f638)[uVar20])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
}

