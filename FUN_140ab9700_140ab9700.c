
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140ab9700(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  
  uVar21 = 0;
  if ((int)param_6 - param_5 < 0x10) {
    lVar26 = 0;
    if (0 < param_6._4_4_) {
      lVar18 = (longlong)param_5;
      uVar27 = (int)param_6 - 4;
      uVar29 = (longlong)(int)uVar27;
      do {
        lVar20 = param_1 + lVar26;
        iVar13 = FUN_140ab5da0(lVar20,param_3,(int)param_6,5,param_5,param_7,param_8);
        iVar16 = 0;
        uVar22 = 0;
        if (0 < (int)param_6) {
          do {
            if (lVar18 <= (longlong)uVar22) break;
            bVar8 = *(byte *)(uVar22 + 2 + param_3);
            iVar16 = (int)uVar22 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar21 * 8) + uVar22 * 2) =
                 (ushort)*(byte *)(uVar22 + param_3) + ((ushort)bVar8 + (ushort)bVar8 * 2) * 2 +
                 (ushort)*(byte *)(uVar22 + 4 + param_3) +
                 ((ushort)*(byte *)(uVar22 + 1 + param_3) + (ushort)*(byte *)(uVar22 + 3 + param_3))
                 * 4;
            uVar22 = uVar22 + 1;
          } while (uVar22 < (ulonglong)(longlong)(int)param_6);
        }
        lVar25 = (longlong)iVar16;
        if (-1 < (int)param_6 + -5) {
          uVar15 = (uint)uVar29;
          if ((int)uVar15 < 0x20) {
LAB_140ab9ddf:
            uVar24 = 0;
            iVar17 = iVar16;
          }
          else {
            if ((int)uVar15 < 0x12c0) {
              uVar22 = 0;
              uVar24 = uVar27 & 0xffffffe0;
            }
            else {
              uVar24 = (int)*(undefined8 *)(param_2 + uVar21 * 8) + iVar16 * 2;
              uVar14 = uVar24 & 0x1f;
              if (uVar14 != 0) {
                if ((uVar24 & 1) != 0) goto LAB_140ab9ddf;
                uVar14 = 0x20 - uVar14 >> 1;
              }
              uVar22 = (ulonglong)uVar14;
              if ((int)uVar15 < (int)(uVar14 + 0x20)) goto LAB_140ab9ddf;
              uVar23 = 0;
              uVar24 = uVar15 - (uVar15 - uVar14 & 0x1f);
              if (uVar14 != 0) {
                do {
                  bVar8 = *(byte *)(uVar23 + 2 + lVar20);
                  *(ushort *)(*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + uVar23 * 2) =
                       (ushort)*(byte *)(uVar23 + lVar20) + ((ushort)bVar8 + (ushort)bVar8 * 2) * 2
                       + (ushort)*(byte *)(uVar23 + 4 + lVar20) +
                       ((ushort)*(byte *)(uVar23 + 1 + lVar20) +
                       (ushort)*(byte *)(uVar23 + 3 + lVar20)) * 4;
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar22);
              }
            }
            auVar11 = _DAT_14308f5a0;
            lVar30 = uVar22 + lVar26;
            do {
              auVar2 = *(undefined1 (*) [32])(lVar30 + 2 + param_1);
              auVar3 = *(undefined1 (*) [32])(lVar30 + 1 + param_1);
              pauVar1 = (undefined1 (*) [32])(lVar30 + param_1);
              auVar36 = *(undefined1 (*) [32])(lVar30 + 3 + param_1);
              auVar4 = *(undefined1 (*) [32])(lVar30 + 4 + param_1);
              lVar30 = lVar30 + 0x20;
              auVar34 = vpmovzxbw_avx2(auVar2._0_16_);
              auVar10 = vpmullw_avx2(auVar11,auVar34);
              auVar2 = vpmovzxbw_avx2(auVar2._16_16_);
              auVar34 = vpmovzxbw_avx2(auVar3._0_16_);
              auVar33 = vpsllw_avx2(auVar34,2);
              auVar34 = vpmullw_avx2(auVar11,auVar2);
              auVar2 = vpmovzxbw_avx2(auVar3._16_16_);
              auVar35 = vpsllw_avx2(auVar2,2);
              auVar2 = vpmovzxbw_avx2(SUB3216(*pauVar1,0));
              auVar2 = vpaddw_avx2(auVar2,auVar33);
              auVar2 = vpaddw_avx2(auVar2,auVar10);
              auVar3 = vpmovzxbw_avx2(SUB3216(*pauVar1,0x10));
              auVar3 = vpaddw_avx2(auVar3,auVar35);
              auVar3 = vpaddw_avx2(auVar3,auVar34);
              auVar34 = vpmovzxbw_avx2(auVar36._0_16_);
              auVar34 = vpsllw_avx2(auVar34,2);
              auVar2 = vpaddw_avx2(auVar2,auVar34);
              auVar36 = vpmovzxbw_avx2(auVar36._16_16_);
              auVar36 = vpsllw_avx2(auVar36,2);
              auVar3 = vpaddw_avx2(auVar3,auVar36);
              auVar36 = vpmovzxbw_avx2(auVar4._0_16_);
              auVar2 = vpaddw_avx2(auVar2,auVar36);
              *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + uVar22 * 2)
                   = auVar2;
              auVar2 = vpmovzxbw_avx2(auVar4._16_16_);
              auVar2 = vpaddw_avx2(auVar3,auVar2);
              *(undefined1 (*) [32])
               (*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + 0x20 + uVar22 * 2) = auVar2;
              uVar22 = uVar22 + 0x20;
            } while (uVar22 < (ulonglong)(longlong)(int)uVar24);
            iVar17 = iVar16 + uVar24;
          }
          auVar12 = _DAT_14308f5c0;
          if (uVar24 + 1 <= uVar15) {
            lVar30 = (longlong)(int)uVar24;
            uVar22 = (int)uVar27 - lVar30;
            if ((longlong)uVar22 < 8) {
              uVar15 = 0;
            }
            else {
              uVar23 = 0;
              uVar15 = (uint)uVar22 & 0xfffffff8;
              lVar19 = lVar26;
              do {
                lVar28 = (int)uVar24 + param_1;
                auVar31._8_8_ = 0;
                auVar31._0_8_ = *(ulonglong *)(lVar19 + 2 + lVar28);
                auVar31 = vpmovzxbw_avx(auVar31);
                auVar9 = vpmullw_avx(auVar12,auVar31);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = *(ulonglong *)(lVar19 + 1 + lVar28);
                auVar31 = vpmovzxbw_avx(auVar5);
                auVar32._8_8_ = 0;
                auVar32._0_8_ = *(ulonglong *)(lVar19 + lVar28);
                auVar5 = vpmovzxbw_avx(auVar32);
                auVar31 = vpsllw_avx(auVar31,2);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = *(ulonglong *)(lVar19 + 3 + lVar28);
                auVar32 = vpmovzxbw_avx(auVar6);
                auVar31 = vpaddw_avx(auVar5,auVar31);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *(ulonglong *)(lVar19 + 4 + lVar28);
                auVar5 = vpmovzxbw_avx(auVar7);
                auVar31 = vpaddw_avx(auVar31,auVar9);
                auVar32 = vpsllw_avx(auVar32,2);
                auVar31 = vpaddw_avx(auVar31,auVar32);
                lVar19 = lVar19 + 8;
                auVar31 = vpaddw_avx(auVar31,auVar5);
                *(undefined1 (*) [16])
                 (*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + lVar30 * 2 + uVar23 * 2) =
                     auVar31;
                uVar23 = uVar23 + 8;
              } while (uVar23 < (ulonglong)(longlong)(int)uVar15);
              uVar29 = uVar29 & 0xffffffff;
              iVar17 = iVar16 + uVar24 + uVar15;
            }
            uVar23 = (ulonglong)(int)uVar15;
            if (uVar23 < uVar22) {
              lVar20 = lVar20 + lVar30;
              do {
                bVar8 = *(byte *)(uVar23 + 2 + lVar20);
                *(ushort *)
                 (*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + lVar30 * 2 + uVar23 * 2) =
                     (ushort)*(byte *)(uVar23 + lVar20) + ((ushort)bVar8 + (ushort)bVar8 * 2) * 2 +
                     (ushort)*(byte *)(uVar23 + 4 + lVar20) +
                     ((ushort)*(byte *)(uVar23 + 1 + lVar20) +
                     (ushort)*(byte *)(uVar23 + 3 + lVar20)) * 4;
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar22);
              lVar25 = (longlong)(int)((int)uVar23 + iVar16 + uVar24);
              goto LAB_140ab9ccf;
            }
          }
          lVar25 = (longlong)iVar17;
        }
LAB_140ab9ccf:
        uVar22 = 0;
        if (0 < 5 - (param_5 + 1)) {
          lVar20 = iVar13 + param_3;
          do {
            if ((int)param_6 - lVar18 <= (longlong)uVar22) break;
            bVar8 = *(byte *)(uVar22 + 2 + lVar20);
            *(ushort *)(*(longlong *)(param_2 + uVar21 * 8) + lVar25 * 2 + uVar22 * 2) =
                 (ushort)*(byte *)(uVar22 + lVar20) + ((ushort)bVar8 + (ushort)bVar8 * 2) * 2 +
                 (ushort)*(byte *)(uVar22 + 4 + lVar20) +
                 ((ushort)*(byte *)(uVar22 + 1 + lVar20) + (ushort)*(byte *)(uVar22 + 3 + lVar20)) *
                 4;
            uVar22 = uVar22 + 1;
          } while (uVar22 < 4U - lVar18);
        }
        uVar21 = uVar21 + 1;
        lVar26 = lVar26 + param_4;
      } while (uVar21 < (ulonglong)(longlong)param_6._4_4_);
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      uVar21 = 1;
      break;
    case 2:
      uVar21 = 2;
      break;
    case 3:
      uVar21 = 3;
      break;
    case 4:
      uVar21 = 4;
    }
    (*(code *)(&PTR_FUN_14308f5d0)[uVar21])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
}

