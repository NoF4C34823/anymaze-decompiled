
undefined8
FUN_140a97500(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar11 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      uVar11 = 1;
      break;
    case 2:
      uVar11 = 2;
      break;
    case 3:
      uVar11 = 3;
      break;
    case 4:
      uVar11 = 4;
    }
    (*(code *)(&PTR_FUN_14308f2c0)[uVar11])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar7 = FUN_140a97a1e();
    return uVar7;
  }
  if (0 < param_6._4_4_) {
    uVar15 = (int)param_6 - 4;
    do {
      iVar6 = FUN_140a94a60(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar20 = 0;
      uVar17 = 0;
      if (0 < (int)param_6) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + uVar17 * 2) =
               ((ushort)*(byte *)(uVar17 + param_3) - (ushort)*(byte *)(uVar17 + 4 + param_3)) +
               ((ushort)*(byte *)(uVar17 + 1 + param_3) - (ushort)*(byte *)(uVar17 + 3 + param_3)) *
               2;
          uVar13 = uVar17 + 1;
          iVar20 = (int)uVar17 + 1;
          if ((ulonglong)(longlong)(int)param_6 <= uVar13) break;
          uVar17 = uVar13;
        } while ((longlong)uVar13 < 2);
      }
      lVar19 = (longlong)iVar20;
      if (-1 < (int)param_6 + -5) {
        if ((int)uVar15 < 0x10) {
LAB_140a97a31:
          iVar18 = 0;
          if (uVar15 != 0) {
            uVar12 = 0;
            uVar17 = (longlong)(int)uVar15;
            iVar21 = iVar20;
LAB_140a97913:
            uVar13 = (ulonglong)(int)uVar12;
            if (uVar17 <= uVar13) goto LAB_140a97985;
            lVar10 = (longlong)iVar18;
            do {
              *(ushort *)
               (*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + lVar10 * 2 + uVar13 * 2) =
                   ((ushort)param_1[uVar13 + lVar10] - (ushort)param_1[uVar13 + 4 + lVar10]) +
                   ((ushort)param_1[uVar13 + 1 + lVar10] - (ushort)param_1[uVar13 + 3 + lVar10]) * 2
              ;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar17);
            lVar19 = (longlong)((int)uVar13 + iVar20 + iVar18);
          }
        }
        else {
          uVar12 = (int)*(undefined8 *)(param_2 + uVar11 * 8) + iVar20 * 2;
          uVar16 = uVar12 & 0xf;
          if (uVar16 != 0) {
            if ((uVar12 & 1) != 0) goto LAB_140a97a31;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          uVar17 = (ulonglong)uVar16;
          if ((int)uVar15 < (int)(uVar16 + 0x10)) goto LAB_140a97a31;
          uVar13 = 0;
          iVar18 = uVar15 - (uVar15 - uVar16 & 0xf);
          pbVar8 = param_1;
          if (uVar16 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + uVar13 * 2) =
                   ((ushort)*pbVar8 - (ushort)pbVar8[4]) +
                   ((ushort)pbVar8[1] - (ushort)pbVar8[3]) * 2;
              uVar13 = uVar13 + 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar13 < uVar17);
          }
          uVar13 = (ulonglong)iVar18;
          puVar14 = (ulonglong *)(param_1 + uVar17);
          do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)((longlong)puVar14 + 1);
            auVar1 = vpmovzxbw_avx(auVar1);
            auVar25 = vpsllw_avx(auVar1,1);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *puVar14;
            auVar1 = vpmovzxbw_avx(auVar2);
            auVar23._8_8_ = 0;
            auVar23._0_8_ = *(ulonglong *)((longlong)puVar14 + 3);
            auVar2 = vpmovzxbw_avx(auVar23);
            auVar1 = vpaddw_avx(auVar1,auVar25);
            auVar23 = vpsllw_avx(auVar2,1);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = *(ulonglong *)((longlong)puVar14 + 4);
            auVar2 = vpmovzxbw_avx(auVar25);
            auVar23 = vpsubw_avx(auVar1,auVar23);
            auVar24._8_8_ = 0;
            auVar24._0_8_ = puVar14[1];
            auVar1 = vpmovzxbw_avx(auVar24);
            auVar25 = vpsubw_avx(auVar23,auVar2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)((longlong)puVar14 + 9);
            auVar2 = vpmovzxbw_avx(auVar3);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(ulonglong *)((longlong)puVar14 + 0xb);
            auVar23 = vpmovzxbw_avx(auVar4);
            auVar24 = vpsllw_avx(auVar2,1);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(ulonglong *)((longlong)puVar14 + 0xc);
            auVar2 = vpmovzxbw_avx(auVar5);
            auVar1 = vpaddw_avx(auVar1,auVar24);
            *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + uVar17 * 2) =
                 auVar25;
            auVar23 = vpsllw_avx(auVar23,1);
            auVar1 = vpsubw_avx(auVar1,auVar23);
            auVar1 = vpsubw_avx(auVar1,auVar2);
            puVar14 = puVar14 + 2;
            *(undefined1 (*) [16])
             (*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + 0x10 + uVar17 * 2) = auVar1;
            uVar17 = uVar17 + 0x10;
          } while (uVar17 < uVar13);
          iVar21 = iVar20 + iVar18;
          if (iVar18 + 1U <= uVar15) {
            uVar17 = (longlong)(int)uVar15 - uVar13;
            if ((longlong)uVar17 < 4) {
              uVar12 = 0;
            }
            else {
              uVar22 = 0;
              uVar12 = (uint)uVar17 & 0xfffffffc;
              puVar9 = (uint *)(param_1 + uVar13);
              do {
                auVar1 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar9 + 1)));
                auVar23 = vpsllw_avx(auVar1,1);
                auVar1 = vpmovzxbw_avx(ZEXT416(*puVar9));
                auVar2 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar9 + 3)));
                auVar1 = vpaddw_avx(auVar1,auVar23);
                auVar23 = vpsllw_avx(auVar2,1);
                auVar2 = vpmovzxbw_avx(ZEXT416(puVar9[1]));
                auVar1 = vpsubw_avx(auVar1,auVar23);
                auVar1 = vpsubw_avx(auVar1,auVar2);
                puVar9 = puVar9 + 1;
                *(longlong *)
                 (*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + uVar13 * 2 + uVar22 * 2) =
                     auVar1._0_8_;
                uVar22 = uVar22 + 4;
              } while (uVar22 < (ulonglong)(longlong)(int)uVar12);
              iVar21 = uVar12 + iVar20 + iVar18;
            }
            goto LAB_140a97913;
          }
LAB_140a97985:
          lVar19 = (longlong)iVar21;
        }
      }
      uVar17 = 0;
      lVar10 = iVar6 + param_3;
      do {
        if ((longlong)((longlong)(int)param_6 - 2U) <= (longlong)uVar17) break;
        *(ushort *)(*(longlong *)(param_2 + uVar11 * 8) + lVar19 * 2 + uVar17 * 2) =
             ((ushort)*(byte *)(uVar17 + lVar10) - (ushort)*(byte *)(uVar17 + 4 + lVar10)) +
             ((ushort)*(byte *)(uVar17 + 1 + lVar10) - (ushort)*(byte *)(uVar17 + 3 + lVar10)) * 2;
        uVar17 = uVar17 + 1;
      } while (uVar17 < 2);
      uVar11 = uVar11 + 1;
      param_1 = param_1 + param_4;
    } while (uVar11 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

