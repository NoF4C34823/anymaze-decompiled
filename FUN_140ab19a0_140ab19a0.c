
undefined8
FUN_140ab19a0(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [32];
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  
  lVar17 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar17 = 1;
      break;
    case 2:
      lVar17 = 2;
      break;
    case 3:
      lVar17 = 3;
      break;
    case 4:
      lVar17 = 4;
    }
    (*(code *)(&PTR_FUN_14308f540)[lVar17])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar9 = FUN_140ab1ea4();
    return uVar9;
  }
  if (0 < param_6._4_4_) {
    uVar20 = (int)param_6 - 4;
    uVar11 = 0;
    do {
      iVar7 = FUN_140aae040(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar18 = 0;
      uVar10 = 0;
      if (0 < (int)param_6) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + uVar10 * 2) =
               ((ushort)*(byte *)(uVar10 + param_3) - (ushort)*(byte *)(uVar10 + 4 + param_3)) +
               ((ushort)*(byte *)(uVar10 + 1 + param_3) - (ushort)*(byte *)(uVar10 + 3 + param_3)) *
               2;
          uVar12 = uVar10 + 1;
          iVar18 = (int)uVar10 + 1;
          if ((ulonglong)(longlong)(int)param_6 <= uVar12) break;
          uVar10 = uVar12;
        } while ((longlong)uVar12 < 2);
      }
      lVar17 = (longlong)iVar18;
      if (-1 < (int)param_6 + -5) {
        if ((int)uVar20 < 0x20) {
LAB_140ab1ebf:
          uVar16 = 0;
          iVar19 = iVar18;
        }
        else {
          if ((int)uVar20 < 0x12c0) {
            uVar10 = 0;
            uVar16 = uVar20 & 0xffffffe0;
          }
          else {
            uVar16 = (int)*(undefined8 *)(param_2 + uVar11 * 8) + iVar18 * 2;
            uVar8 = uVar16 & 0x1f;
            if (uVar8 != 0) {
              if ((uVar16 & 1) != 0) goto LAB_140ab1ebf;
              uVar8 = 0x20 - uVar8 >> 1;
            }
            uVar10 = (ulonglong)uVar8;
            if ((int)uVar20 < (int)(uVar8 + 0x20)) goto LAB_140ab1ebf;
            uVar12 = 0;
            uVar16 = uVar20 - (uVar20 - uVar8 & 0x1f);
            pbVar13 = param_1;
            if (uVar8 != 0) {
              do {
                *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + uVar12 * 2) =
                     ((ushort)*pbVar13 - (ushort)pbVar13[4]) +
                     ((ushort)pbVar13[1] - (ushort)pbVar13[3]) * 2;
                uVar12 = uVar12 + 1;
                pbVar13 = pbVar13 + 1;
              } while (uVar12 < uVar10);
            }
          }
          pauVar15 = (undefined1 (*) [32])(param_1 + uVar10);
          do {
            auVar3 = vpmovzxbw_avx2(SUB3216(*pauVar15,0));
            puVar6 = *pauVar15;
            auVar4 = vpmovzxbw_avx2(SUB3216(*pauVar15,0x10));
            auVar22 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(*pauVar15 + 1),0));
            auVar22 = vpsllw_avx2(auVar22,1);
            auVar24 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(*pauVar15 + 1),0x10));
            auVar22 = vpaddw_avx2(auVar3,auVar22);
            auVar24 = vpsllw_avx2(auVar24,1);
            auVar3 = *(undefined1 (*) [32])(*pauVar15 + 4);
            auVar4 = vpaddw_avx2(auVar4,auVar24);
            pauVar15 = pauVar15 + 1;
            auVar24 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(puVar6 + 3),0));
            auVar24 = vpsllw_avx2(auVar24,1);
            auVar5 = vpsubw_avx2(auVar22,auVar24);
            auVar22 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(puVar6 + 3),0x10));
            auVar24 = vpmovzxbw_avx2(auVar3._0_16_);
            auVar24 = vpsubw_avx2(auVar5,auVar24);
            auVar22 = vpsllw_avx2(auVar22,1);
            *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + uVar10 * 2) =
                 auVar24;
            auVar22 = vpsubw_avx2(auVar4,auVar22);
            auVar3 = vpmovzxbw_avx2(auVar3._16_16_);
            auVar3 = vpsubw_avx2(auVar22,auVar3);
            *(undefined1 (*) [32])
             (*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + 0x20 + uVar10 * 2) = auVar3;
            uVar10 = uVar10 + 0x20;
          } while (uVar10 < (ulonglong)(longlong)(int)uVar16);
          iVar19 = iVar18 + uVar16;
        }
        if (uVar16 + 1 <= uVar20) {
          lVar14 = (longlong)(int)uVar16;
          uVar10 = (int)uVar20 - lVar14;
          if ((longlong)uVar10 < 8) {
            uVar8 = 0;
          }
          else {
            uVar12 = 0;
            uVar8 = (uint)uVar10 & 0xfffffff8;
            do {
              auVar1._8_8_ = 0;
              auVar1._0_8_ = *(ulonglong *)(param_1 + uVar12 + lVar14 + 1);
              auVar1 = vpmovzxbw_avx(auVar1);
              auVar23 = vpsllw_avx(auVar1,1);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = *(ulonglong *)(param_1 + uVar12 + lVar14);
              auVar1 = vpmovzxbw_avx(auVar2);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *(ulonglong *)(param_1 + uVar12 + lVar14 + 3);
              auVar2 = vpmovzxbw_avx(auVar21);
              auVar1 = vpaddw_avx(auVar1,auVar23);
              auVar21 = vpsllw_avx(auVar2,1);
              auVar23._8_8_ = 0;
              auVar23._0_8_ = *(ulonglong *)(param_1 + uVar12 + lVar14 + 4);
              auVar2 = vpmovzxbw_avx(auVar23);
              auVar1 = vpsubw_avx(auVar1,auVar21);
              auVar1 = vpsubw_avx(auVar1,auVar2);
              *(undefined1 (*) [16])
               (*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + lVar14 * 2 + uVar12 * 2) = auVar1
              ;
              uVar12 = uVar12 + 8;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar8);
            iVar19 = iVar18 + uVar16 + uVar8;
          }
          uVar12 = (ulonglong)(int)uVar8;
          if (uVar12 < uVar10) {
            do {
              *(ushort *)
               (*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + lVar14 * 2 + uVar12 * 2) =
                   ((ushort)param_1[uVar12 + lVar14] - (ushort)param_1[uVar12 + 4 + lVar14]) +
                   ((ushort)param_1[uVar12 + 1 + lVar14] - (ushort)param_1[uVar12 + 3 + lVar14]) * 2
              ;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
            lVar17 = (longlong)(int)((int)uVar12 + iVar18 + uVar16);
            goto LAB_140ab1e2e;
          }
        }
        lVar17 = (longlong)iVar19;
      }
LAB_140ab1e2e:
      uVar10 = 0;
      lVar14 = iVar7 + param_3;
      do {
        if ((longlong)((longlong)(int)param_6 - 2U) <= (longlong)uVar10) break;
        *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + lVar17 * 2 + uVar10 * 2) =
             ((ushort)*(byte *)(uVar10 + lVar14) - (ushort)*(byte *)(uVar10 + 4 + lVar14)) +
             ((ushort)*(byte *)(uVar10 + 1 + lVar14) - (ushort)*(byte *)(uVar10 + 3 + lVar14)) * 2;
        uVar10 = uVar10 + 1;
      } while (uVar10 < 2);
      uVar11 = uVar11 + 1;
      param_1 = param_1 + param_4;
    } while (uVar11 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

