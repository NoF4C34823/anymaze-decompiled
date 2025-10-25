
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001136d(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar16 [16];
  
  auVar5 = _DAT_1430865b0;
  auVar4 = _DAT_1430865a0;
  uVar9 = param_3 & 7;
  if (uVar9 != 0) {
    auVar15 = in_ZMM2._0_16_;
    uVar7 = vpextrw_avx(auVar15,0);
    uVar8 = vpextrw_avx(auVar15,1);
    uVar6 = vpextrw_avx(auVar15,2);
    if (uVar9 != 0) {
      uVar14 = (ulonglong)uVar9;
      if ((param_2 - param_1 < (longlong)(uVar14 * 4 + -1)) &&
         (-(param_2 - param_1) < (longlong)uVar14)) {
        iVar12 = 1;
        uVar14 = 0;
        if (uVar9 >> 1 != 0) {
          do {
            uVar10 = uVar14;
            *(char *)(param_2 + uVar10 * 2) =
                 (char)(*(byte *)(param_1 + uVar10 * 8) * uVar7 +
                        *(byte *)(param_1 + 1 + uVar10 * 8) * uVar8 + 0x4000 +
                        *(byte *)(param_1 + 2 + uVar10 * 8) * uVar6 >> 0xf);
            *(char *)(param_2 + 1 + uVar10 * 2) =
                 (char)(*(byte *)(param_1 + 4 + uVar10 * 8) * uVar7 +
                        *(byte *)(param_1 + 5 + uVar10 * 8) * uVar8 + 0x4000 +
                        *(byte *)(param_1 + 6 + uVar10 * 8) * uVar6 >> 0xf);
            uVar14 = uVar10 + 1;
          } while (uVar14 < uVar9 >> 1);
          iVar12 = (int)uVar10 + 2 + (int)uVar14;
        }
        if (iVar12 - 1U < uVar9) {
          lVar13 = (longlong)iVar12;
          *(char *)(lVar13 + -1 + param_2) =
               (char)(uVar7 * *(byte *)(param_1 + -4 + lVar13 * 4) +
                      uVar8 * *(byte *)(param_1 + -3 + lVar13 * 4) + 0x4000 +
                      uVar6 * *(byte *)(param_1 + -2 + lVar13 * 4) >> 0xf);
        }
      }
      else {
        if (uVar14 < 4) {
          FUN_1400114b8(param_1,param_2,0);
          return;
        }
        uVar10 = (ulonglong)(param_3 & 4);
        auVar15 = vpshufd_avx(ZEXT416(uVar7),0);
        uVar11 = 0;
        auVar2 = vpshufd_avx(ZEXT416(uVar8),0);
        auVar3 = vpshufd_avx(ZEXT416(uVar6),0);
        do {
          auVar16 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + uVar11 * 4)),
                                (uint)*(byte *)(param_1 + 4 + uVar11 * 4),1);
          auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)(param_1 + 8 + uVar11 * 4),2);
          auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)(param_1 + 0xc + uVar11 * 4),3);
          auVar1 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + 1 + uVar11 * 4)),
                               (uint)*(byte *)(param_1 + 5 + uVar11 * 4),1);
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 9 + uVar11 * 4),2);
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 0xd + uVar11 * 4),3);
          auVar16 = vpmovzxbd_avx(auVar16);
          auVar1 = vpmovzxbd_avx(auVar1);
          auVar16 = vpmulld_avx(auVar15,auVar16);
          auVar1 = vpmulld_avx(auVar2,auVar1);
          auVar16 = vpaddd_avx(auVar16,auVar1);
          auVar1 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + 2 + uVar11 * 4)),
                               (uint)*(byte *)(param_1 + 6 + uVar11 * 4),1);
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 10 + uVar11 * 4),2);
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 0xe + uVar11 * 4),3);
          auVar1 = vpmovzxbd_avx(auVar1);
          auVar1 = vpmulld_avx(auVar3,auVar1);
          auVar16 = vpaddd_avx(auVar16,auVar1);
          auVar16 = vpaddd_avx(auVar16,auVar4);
          auVar16 = vpsrad_avx(auVar16,0xf);
          auVar16 = vpshufb_avx(auVar16,auVar5);
          *(int *)(uVar11 + param_2) = auVar16._0_4_;
          uVar11 = uVar11 + 4;
        } while (uVar11 < uVar10);
        for (; uVar10 < uVar14; uVar10 = uVar10 + 1) {
          *(char *)(uVar10 + param_2) =
               (char)(*(byte *)(param_1 + uVar10 * 4) * uVar7 +
                      *(byte *)(param_1 + 1 + uVar10 * 4) * uVar8 + 0x4000 +
                      *(byte *)(param_1 + 2 + uVar10 * 4) * uVar6 >> 0xf);
        }
      }
    }
  }
  return;
}

