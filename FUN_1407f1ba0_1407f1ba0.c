
ulonglong FUN_1407f1ba0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [32];
  undefined4 uVar18;
  undefined1 auVar19 [32];
  ulonglong uStack_78;
  ulonglong uStack_70;
  
  if ((param_7 & 0xf0) == 0xf0) {
    uVar10 = (*(code *)(&PTR_FUN_14308c620)[param_6])
                       (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return uVar10;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1407f1cd0;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x10;
      goto joined_r0x0001407f2184;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1407f1cd0;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1407f1cd0;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x20;
joined_r0x0001407f2184:
      if (uVar5 == 0) {
        lVar12 = *param_5 * 3;
        if (lVar12 < 1) {
          return *param_5;
        }
        uVar15 = lVar12 + 2;
        uVar10 = (longlong)uVar15 / 3;
        if (6 < (longlong)uVar10) {
          lVar12 = (longlong)param_8 + (4 - (longlong)param_4);
          if ((((longlong)(uVar10 * 0xc) <= lVar12) || (7 < -lVar12)) &&
             ((3 < (longlong)param_4 - (longlong)param_8 ||
              ((longlong)(uVar10 * 0xc) <= -((longlong)param_4 - (longlong)param_8))))) {
            uVar5 = *param_8;
            uVar1 = param_8[1];
            uVar2 = param_8[2];
            if ((longlong)uVar10 < 0x10) {
              uVar15 = 0;
            }
            else {
              auVar6 = vshufps_avx(ZEXT416(uVar5),ZEXT416(uVar5),0);
              auVar7 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
              uVar15 = uVar10 & 0xfffffffffffffff0;
              auVar8 = vshufps_avx(ZEXT416(uVar2),ZEXT416(uVar2),0);
              uVar14 = 0;
              auVar17._16_16_ = auVar6;
              auVar17._0_16_ = auVar6;
              auVar19._16_16_ = auVar7;
              auVar19._0_16_ = auVar7;
              auVar9 = vunpcklps_avx(auVar17,auVar19);
              auVar17 = vunpckhps_avx(auVar17,auVar19);
              puVar11 = param_4;
              do {
                uVar14 = uVar14 + 0x10;
                *(int *)(puVar11 + 0xc) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar11 + 0x6c) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar11 + 0xf) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar11 + 0x84) = uVar4;
                *(int *)(puVar11 + 0x12) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar11 + 0x9c) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar11 + 0x15) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar11 + 0xb4) = uVar4;
                *(int *)((longlong)puVar11 + 100) = auVar7._0_4_;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar11 + 0xe) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar11 + 0x11) = uVar4;
                *(int *)((longlong)puVar11 + 0x94) = auVar7._0_4_;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar11 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar11 + 0xac) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar11 + 0x17) = uVar4;
                uVar3 = vmovlpd_avx(auVar9._0_16_);
                *puVar11 = uVar3;
                uVar3 = vmovhpd_avx(auVar9._0_16_);
                *(undefined8 *)((longlong)puVar11 + 0xc) = uVar3;
                uVar3 = vmovlpd_avx(auVar17._0_16_);
                puVar11[3] = uVar3;
                uVar3 = vmovhpd_avx(auVar17._0_16_);
                *(undefined8 *)((longlong)puVar11 + 0x24) = uVar3;
                uVar3 = vmovlpd_avx(auVar9._16_16_);
                puVar11[6] = uVar3;
                uVar3 = vmovhpd_avx(auVar9._16_16_);
                *(undefined8 *)((longlong)puVar11 + 0x3c) = uVar3;
                uVar3 = vmovlpd_avx(auVar17._16_16_);
                puVar11[9] = uVar3;
                uVar3 = vmovhpd_avx(auVar17._16_16_);
                *(undefined8 *)((longlong)puVar11 + 0x54) = uVar3;
                uVar18 = auVar8._0_4_;
                *(undefined4 *)(puVar11 + 1) = uVar18;
                uVar4 = vextractps_avx(auVar8,1);
                *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar8,2);
                *(undefined4 *)(puVar11 + 4) = uVar4;
                uVar4 = vextractps_avx(auVar8,3);
                *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar4;
                *(undefined4 *)(puVar11 + 7) = uVar18;
                uVar4 = vextractps_avx(auVar8,1);
                *(undefined4 *)((longlong)puVar11 + 0x44) = uVar4;
                uVar4 = vextractps_avx(auVar8,2);
                *(undefined4 *)(puVar11 + 10) = uVar4;
                uVar4 = vextractps_avx(auVar8,3);
                *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar4;
                *(undefined4 *)(puVar11 + 0xd) = uVar18;
                uVar4 = vextractps_avx(auVar8,1);
                *(undefined4 *)((longlong)puVar11 + 0x74) = uVar4;
                uVar4 = vextractps_avx(auVar8,2);
                *(undefined4 *)(puVar11 + 0x10) = uVar4;
                uVar4 = vextractps_avx(auVar8,3);
                *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar4;
                *(undefined4 *)(puVar11 + 0x13) = uVar18;
                uVar4 = vextractps_avx(auVar8,1);
                *(undefined4 *)((longlong)puVar11 + 0xa4) = uVar4;
                uVar4 = vextractps_avx(auVar8,2);
                *(undefined4 *)(puVar11 + 0x16) = uVar4;
                uVar4 = vextractps_avx(auVar8,3);
                *(undefined4 *)((longlong)puVar11 + 0xbc) = uVar4;
                puVar11 = puVar11 + 0x18;
              } while (uVar14 < uVar15);
            }
            if (uVar10 < uVar15 + 1) {
              return uVar15 + 1;
            }
            uVar10 = uVar10 - uVar15;
            if ((longlong)uVar10 < 2) {
              uVar14 = 0;
            }
            else {
              uVar16 = 0;
              uVar14 = uVar10 & 0xfffffffffffffffe;
              lVar12 = 0;
              do {
                uVar16 = uVar16 + 2;
                *(uint *)((longlong)param_4 + lVar12 + 8 + uVar15 * 0xc) = uVar2;
                *(uint *)((longlong)param_4 + lVar12 + 0x14 + uVar15 * 0xc) = uVar2;
                *(uint *)((longlong)param_4 + lVar12 + 4 + uVar15 * 0xc) = uVar1;
                *(uint *)((longlong)param_4 + lVar12 + 0x10 + uVar15 * 0xc) = uVar1;
                *(uint *)((longlong)param_4 + lVar12 + uVar15 * 0xc) = uVar5;
                *(uint *)((longlong)param_4 + lVar12 + 0xc + uVar15 * 0xc) = uVar5;
                lVar12 = lVar12 + 0x18;
              } while (uVar16 < uVar14);
            }
            lVar12 = uVar14 * 0xc;
            for (; uVar14 < uVar10; uVar14 = uVar14 + 1) {
              *(uint *)((longlong)param_4 + lVar12 + uVar15 * 0xc) = uVar5;
              *(uint *)((longlong)param_4 + lVar12 + 4 + uVar15 * 0xc) = uVar1;
              *(uint *)((longlong)param_4 + lVar12 + 8 + uVar15 * 0xc) = uVar2;
              lVar12 = lVar12 + 0xc;
            }
            return uVar14;
          }
        }
        lVar12 = 1;
        lVar13 = 0;
        uVar10 = 0;
        if (uVar15 / 6 != 0) {
          do {
            uVar14 = uVar10;
            uVar10 = uVar14 + 1;
            *(uint *)(lVar13 + (longlong)param_4) = *param_8;
            *(uint *)(lVar13 + 4 + (longlong)param_4) = param_8[1];
            *(uint *)(lVar13 + 8 + (longlong)param_4) = param_8[2];
            *(uint *)(lVar13 + 0xc + (longlong)param_4) = *param_8;
            *(uint *)(lVar13 + 0x10 + (longlong)param_4) = param_8[1];
            *(uint *)(lVar13 + 0x14 + (longlong)param_4) = param_8[2];
            lVar13 = lVar13 + 0x18;
          } while (uVar10 < uVar15 / 6);
          lVar12 = uVar14 + 2 + uVar10;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar15;
        if (uVar15 / 3 <= lVar12 - 1U) {
          return SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
        }
        uVar5 = *param_8;
        lVar12 = lVar12 * 3 + -3;
        *(uint *)((longlong)param_4 + lVar12 * 4) = uVar5;
        *(uint *)((longlong)param_4 + lVar12 * 4 + 4) = param_8[1];
        *(uint *)((longlong)param_4 + lVar12 * 4 + 8) = param_8[2];
        return (ulonglong)uVar5;
      }
      goto LAB_1407f1cd0;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1407f1cd0;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar10 = param_5[1];
    if ((longlong)uVar10 < 2) {
      if (param_3 < 0) {
        if ((param_7 & 0x10) == 0) {
          param_3 = -param_3;
          if ((param_7 & 0x20) == 0) {
            param_3 = 0;
          }
        }
      }
      else if ((0 < param_3) && ((param_7 & 0x20) == 0)) {
        param_3 = -param_3;
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
      }
    }
    else {
      if (param_3 < 0) goto LAB_1407f2100;
      while (((longlong)uVar10 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar10 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1407f2100:
          if ((param_7 & 0x10) != 0) goto LAB_1407f1cd0;
        }
      }
    }
  }
LAB_1407f1cd0:
  uStack_78 = *param_5;
  uStack_70 = param_5[1];
  uVar10 = FUN_1407f5a60(uStack_78,param_2,param_3,param_4,&uStack_78,param_6,param_7,param_8,
                         param_9,param_10,param_11);
  return uVar10;
}

