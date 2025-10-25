
undefined8
FUN_140ab5840(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  
  uVar17 = 0;
  if ((int)param_6 - param_5 < 0x10) {
    lVar20 = 0;
    if (0 < param_6._4_4_) {
      lVar14 = (longlong)param_5;
      uVar21 = (int)param_6 - 4;
      uVar23 = (longlong)(int)uVar21;
      do {
        lVar16 = param_1 + lVar20;
        iVar7 = FUN_140ab1ee0(lVar16,param_3,(int)param_6,5,param_5,param_7,param_8);
        iVar12 = 0;
        uVar11 = 0;
        if (0 < (int)param_6) {
          do {
            if (lVar14 <= (longlong)uVar11) break;
            *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + uVar11 * 2) =
                 (ushort)*(byte *)(uVar11 + param_3) + (ushort)*(byte *)(uVar11 + 2 + param_3) * -2
                 + (ushort)*(byte *)(uVar11 + 4 + param_3);
            uVar10 = uVar11 + 1;
            iVar12 = (int)uVar11 + 1;
            uVar11 = uVar10;
          } while (uVar10 < (ulonglong)(longlong)(int)param_6);
        }
        lVar19 = (longlong)iVar12;
        if (-1 < (int)param_6 + -5) {
          uVar9 = (uint)uVar23;
          if ((int)uVar9 < 0x20) {
LAB_140ab5d75:
            uVar18 = 0;
            iVar13 = iVar12;
          }
          else {
            if ((int)uVar9 < 0x1039) {
              uVar11 = 0;
              uVar18 = uVar21 & 0xffffffe0;
            }
            else {
              uVar18 = (int)*(undefined8 *)(param_2 + uVar17 * 8) + iVar12 * 2;
              uVar8 = uVar18 & 0x1f;
              if (uVar8 != 0) {
                if ((uVar18 & 1) != 0) goto LAB_140ab5d75;
                uVar8 = 0x20 - uVar8 >> 1;
              }
              uVar11 = (ulonglong)uVar8;
              if ((int)uVar9 < (int)(uVar8 + 0x20)) goto LAB_140ab5d75;
              uVar10 = 0;
              uVar18 = uVar9 - (uVar9 - uVar8 & 0x1f);
              if (uVar8 != 0) {
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + uVar10 * 2) =
                       (ushort)*(byte *)(uVar10 + lVar16) +
                       (ushort)*(byte *)(uVar10 + 2 + lVar16) * -2 +
                       (ushort)*(byte *)(uVar10 + 4 + lVar16);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
            }
            lVar24 = uVar11 + lVar20;
            do {
              pauVar1 = (undefined1 (*) [32])(lVar24 + param_1);
              auVar2 = *(undefined1 (*) [32])(lVar24 + 2 + param_1);
              auVar3 = *(undefined1 (*) [32])(lVar24 + 4 + param_1);
              lVar24 = lVar24 + 0x20;
              auVar25 = vpmovzxbw_avx2(SUB3216(*pauVar1,0));
              auVar6 = vpmovzxbw_avx2(SUB3216(*pauVar1,0x10));
              auVar27 = vpmovzxbw_avx2(auVar2._0_16_);
              auVar27 = vpsllw_avx2(auVar27,1);
              auVar27 = vpsubw_avx2(auVar25,auVar27);
              auVar25 = vpmovzxbw_avx2(auVar2._16_16_);
              auVar2 = vpmovzxbw_avx2(auVar3._0_16_);
              auVar2 = vpaddw_avx2(auVar27,auVar2);
              auVar25 = vpsllw_avx2(auVar25,1);
              *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + uVar11 * 2)
                   = auVar2;
              auVar25 = vpsubw_avx2(auVar6,auVar25);
              auVar2 = vpmovzxbw_avx2(auVar3._16_16_);
              auVar2 = vpaddw_avx2(auVar25,auVar2);
              *(undefined1 (*) [32])
               (*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + 0x20 + uVar11 * 2) = auVar2;
              uVar11 = uVar11 + 0x20;
            } while (uVar11 < (ulonglong)(longlong)(int)uVar18);
            iVar13 = iVar12 + uVar18;
          }
          if (uVar18 + 1 <= uVar9) {
            lVar24 = (longlong)(int)uVar18;
            uVar11 = (int)uVar21 - lVar24;
            if ((longlong)uVar11 < 8) {
              uVar9 = 0;
            }
            else {
              uVar10 = 0;
              uVar9 = (uint)uVar11 & 0xfffffff8;
              lVar15 = lVar20;
              do {
                lVar22 = (int)uVar18 + param_1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = *(ulonglong *)(lVar15 + lVar22);
                auVar4 = vpmovzxbw_avx(auVar4);
                auVar26._8_8_ = 0;
                auVar26._0_8_ = *(ulonglong *)(lVar15 + 2 + lVar22);
                auVar26 = vpmovzxbw_avx(auVar26);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = *(ulonglong *)(lVar15 + 4 + lVar22);
                auVar5 = vpmovzxbw_avx(auVar5);
                auVar26 = vpsllw_avx(auVar26,1);
                auVar4 = vpsubw_avx(auVar4,auVar26);
                auVar4 = vpaddw_avx(auVar4,auVar5);
                lVar15 = lVar15 + 8;
                *(undefined1 (*) [16])
                 (*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + lVar24 * 2 + uVar10 * 2) =
                     auVar4;
                uVar10 = uVar10 + 8;
              } while (uVar10 < (ulonglong)(longlong)(int)uVar9);
              uVar23 = uVar23 & 0xffffffff;
              iVar13 = iVar12 + uVar18 + uVar9;
            }
            uVar10 = (ulonglong)(int)uVar9;
            if (uVar10 < uVar11) {
              lVar16 = lVar16 + lVar24;
              do {
                *(ushort *)
                 (*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + lVar24 * 2 + uVar10 * 2) =
                     (ushort)*(byte *)(uVar10 + lVar16) +
                     (ushort)*(byte *)(uVar10 + 2 + lVar16) * -2 +
                     (ushort)*(byte *)(uVar10 + 4 + lVar16);
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
              lVar19 = (longlong)(int)((int)uVar10 + iVar12 + uVar18);
              goto LAB_140ab5cbe;
            }
          }
          lVar19 = (longlong)iVar13;
        }
LAB_140ab5cbe:
        uVar11 = 0;
        if (0 < 5 - (param_5 + 1)) {
          lVar16 = iVar7 + param_3;
          do {
            if ((int)param_6 - lVar14 <= (longlong)uVar11) break;
            *(ushort *)(*(longlong *)(param_2 + uVar17 * 8) + lVar19 * 2 + uVar11 * 2) =
                 (ushort)*(byte *)(uVar11 + lVar16) + (ushort)*(byte *)(uVar11 + 2 + lVar16) * -2 +
                 (ushort)*(byte *)(uVar11 + 4 + lVar16);
            uVar11 = uVar11 + 1;
          } while (uVar11 < 4U - lVar14);
        }
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + param_4;
      } while (uVar17 < (ulonglong)(longlong)param_6._4_4_);
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      uVar17 = 1;
      break;
    case 2:
      uVar17 = 2;
      break;
    case 3:
      uVar17 = 3;
      break;
    case 4:
      uVar17 = 4;
    }
    (*(code *)(&PTR_FUN_14308f570)[uVar17])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
}

