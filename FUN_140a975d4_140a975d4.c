
undefined8 FUN_140a975d4(byte *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  longlong lVar9;
  int unaff_EBP;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong in_R10;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  ulonglong uStack0000000000000078;
  ulonglong uStack0000000000000088;
  longlong lStack0000000000000090;
  int iStack0000000000000098;
  longlong lStack00000000000000a0;
  longlong lStack00000000000000a8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  byte in_stack_000000f8;
  
  iStack0000000000000098 = unaff_EBP + -5;
  uStack0000000000000078 = (ulonglong)unaff_EBP;
  lStack0000000000000090 = uStack0000000000000078 - 2;
  uVar13 = unaff_EBP - 4;
  uStack0000000000000088 = (ulonglong)(int)uVar13;
  lStack00000000000000a0 = param_4;
  lStack00000000000000a8 = param_3;
  do {
    uStack0000000000000028 = in_stack_000000f0;
    uStack0000000000000030 = (uint)in_stack_000000f8;
    iVar6 = FUN_140a94a60(param_1,lStack00000000000000a8,unaff_EBP,5,in_stack_000000e0);
    iVar18 = 0;
    uVar15 = 0;
    if (0 < unaff_EBP) {
      do {
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + uVar15 * 2) =
             ((ushort)*(byte *)(uVar15 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar15 + 4 + lStack00000000000000a8)) +
             ((ushort)*(byte *)(uVar15 + 1 + lStack00000000000000a8) -
             (ushort)*(byte *)(uVar15 + 3 + lStack00000000000000a8)) * 2;
        uVar11 = uVar15 + 1;
        iVar18 = (int)uVar15 + 1;
        if (uStack0000000000000078 <= uVar11) break;
        uVar15 = uVar11;
      } while ((longlong)uVar11 < 2);
    }
    lVar17 = (longlong)iVar18;
    if (-1 < iStack0000000000000098) {
      if ((int)uVar13 < 0x10) {
LAB_140a97a31:
        iVar16 = 0;
        if (uVar13 != 0) {
          uVar10 = 0;
          uVar15 = uStack0000000000000088;
          iVar19 = iVar18;
LAB_140a97913:
          uVar11 = (ulonglong)(int)uVar10;
          if (uVar15 <= uVar11) goto LAB_140a97985;
          lVar9 = (longlong)iVar16;
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + lVar9 * 2 + uVar11 * 2) =
                 ((ushort)param_1[uVar11 + lVar9] - (ushort)param_1[uVar11 + 4 + lVar9]) +
                 ((ushort)param_1[uVar11 + 1 + lVar9] - (ushort)param_1[uVar11 + 3 + lVar9]) * 2;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar15);
          lVar17 = (longlong)((int)uVar11 + iVar18 + iVar16);
        }
      }
      else {
        uVar10 = (int)*(undefined8 *)(param_2 + in_R10 * 8) + iVar18 * 2;
        uVar14 = uVar10 & 0xf;
        if (uVar14 != 0) {
          if ((uVar10 & 1) != 0) goto LAB_140a97a31;
          uVar14 = 0x10 - uVar14 >> 1;
        }
        uVar15 = (ulonglong)uVar14;
        if ((int)uVar13 < (int)(uVar14 + 0x10)) goto LAB_140a97a31;
        uVar11 = 0;
        iVar16 = uVar13 - (uVar13 - uVar14 & 0xf);
        pbVar7 = param_1;
        if (uVar14 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + uVar11 * 2) =
                 ((ushort)*pbVar7 - (ushort)pbVar7[4]) + ((ushort)pbVar7[1] - (ushort)pbVar7[3]) * 2
            ;
            uVar11 = uVar11 + 1;
            pbVar7 = pbVar7 + 1;
          } while (uVar11 < uVar15);
        }
        uVar11 = (ulonglong)iVar16;
        puVar12 = (ulonglong *)(param_1 + uVar15);
        do {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = *(ulonglong *)((longlong)puVar12 + 1);
          auVar1 = vpmovzxbw_avx(auVar1);
          auVar23 = vpsllw_avx(auVar1,1);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *puVar12;
          auVar1 = vpmovzxbw_avx(auVar2);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)((longlong)puVar12 + 3);
          auVar2 = vpmovzxbw_avx(auVar21);
          auVar1 = vpaddw_avx(auVar1,auVar23);
          auVar21 = vpsllw_avx(auVar2,1);
          auVar23._8_8_ = 0;
          auVar23._0_8_ = *(ulonglong *)((longlong)puVar12 + 4);
          auVar2 = vpmovzxbw_avx(auVar23);
          auVar21 = vpsubw_avx(auVar1,auVar21);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = puVar12[1];
          auVar1 = vpmovzxbw_avx(auVar22);
          auVar23 = vpsubw_avx(auVar21,auVar2);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)((longlong)puVar12 + 9);
          auVar2 = vpmovzxbw_avx(auVar3);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)((longlong)puVar12 + 0xb);
          auVar21 = vpmovzxbw_avx(auVar4);
          auVar22 = vpsllw_avx(auVar2,1);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)((longlong)puVar12 + 0xc);
          auVar2 = vpmovzxbw_avx(auVar5);
          auVar1 = vpaddw_avx(auVar1,auVar22);
          *(undefined1 (*) [16])(*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + uVar15 * 2) =
               auVar23;
          auVar21 = vpsllw_avx(auVar21,1);
          auVar1 = vpsubw_avx(auVar1,auVar21);
          auVar1 = vpsubw_avx(auVar1,auVar2);
          puVar12 = puVar12 + 2;
          *(undefined1 (*) [16])
           (*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + 0x10 + uVar15 * 2) = auVar1;
          uVar15 = uVar15 + 0x10;
        } while (uVar15 < uVar11);
        iVar19 = iVar18 + iVar16;
        if (iVar16 + 1U <= uVar13) {
          uVar15 = uStack0000000000000088 - uVar11;
          if ((longlong)uVar15 < 4) {
            uVar10 = 0;
          }
          else {
            uVar20 = 0;
            uVar10 = (uint)uVar15 & 0xfffffffc;
            puVar8 = (uint *)(param_1 + uVar11);
            do {
              auVar1 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar8 + 1)));
              auVar21 = vpsllw_avx(auVar1,1);
              auVar1 = vpmovzxbw_avx(ZEXT416(*puVar8));
              auVar2 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar8 + 3)));
              auVar1 = vpaddw_avx(auVar1,auVar21);
              auVar21 = vpsllw_avx(auVar2,1);
              auVar2 = vpmovzxbw_avx(ZEXT416(puVar8[1]));
              auVar1 = vpsubw_avx(auVar1,auVar21);
              auVar1 = vpsubw_avx(auVar1,auVar2);
              puVar8 = puVar8 + 1;
              *(longlong *)
               (*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + uVar11 * 2 + uVar20 * 2) =
                   auVar1._0_8_;
              uVar20 = uVar20 + 4;
            } while (uVar20 < (ulonglong)(longlong)(int)uVar10);
            iVar19 = uVar10 + iVar18 + iVar16;
          }
          goto LAB_140a97913;
        }
LAB_140a97985:
        lVar17 = (longlong)iVar19;
      }
    }
    uVar15 = 0;
    lVar9 = iVar6 + lStack00000000000000a8;
    do {
      if (lStack0000000000000090 <= (longlong)uVar15) break;
      *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar17 * 2 + uVar15 * 2) =
           ((ushort)*(byte *)(uVar15 + lVar9) - (ushort)*(byte *)(uVar15 + 4 + lVar9)) +
           ((ushort)*(byte *)(uVar15 + 1 + lVar9) - (ushort)*(byte *)(uVar15 + 3 + lVar9)) * 2;
      uVar15 = uVar15 + 1;
    } while (uVar15 < 2);
    in_R10 = in_R10 + 1;
    param_1 = param_1 + lStack00000000000000a0;
    if ((ulonglong)(longlong)in_stack_000000e8._4_4_ <= in_R10) {
      return 0;
    }
  } while( true );
}

