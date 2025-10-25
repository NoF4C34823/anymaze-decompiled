
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400018f5(longlong param_1,undefined **param_2,longlong param_3,longlong param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined *puVar7;
  ulonglong uVar8;
  undefined6 uVar9;
  undefined2 uVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined **unaff_R12;
  undefined **ppuVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 *puStack_100;
  undefined **ppuStack_f8;
  longlong lStack_f0;
  undefined *puStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined *puStack_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined *puStack_90;
  undefined *puStack_88;
  ulonglong uStack_80;
  
  uVar8 = _UNK_142fec508;
  puVar7 = _DAT_142fec500;
  uStack_80 = _DAT_1436b4680 ^ (ulonglong)auStack_138;
  uVar16 = 0;
  ppuStack_f8 = param_2;
  lStack_f0 = param_4;
  while( true ) {
    uVar2 = 4 - uVar16;
    if (*(int *)(param_1 + 0x18) != 1) {
      uVar2 = uVar16;
    }
    if ((*(char *)(param_1 + 0x1d) != '\x01') ||
       ((*(uint *)(param_1 + 0x20) >> (uVar2 & 0x1f) & 1) != 0)) break;
LAB_140001c42:
    uVar16 = uVar16 + 1;
    if (uVar16 == 5) {
      OutputDebugStringA(&UNK_143084894);
      uVar13 = 0x80070002;
LAB_140001f0d:
      if ((uStack_80 ^ (ulonglong)auStack_138) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
        FUN_142bb1d40();
      }
      return uVar13;
    }
  }
  unaff_R12 = (undefined **)
              CONCAT71((int7)((ulonglong)unaff_R12 >> 8),uVar2 == 0 & *(byte *)(param_1 + 0x1c));
  puStack_a8 = &UNK_143084976;
  uStack_a0 = 0x1430849d4;
  uStack_9a = 0;
  uStack_98 = 0x143084a2e;
  uStack_92 = 0;
  puStack_90 = &UNK_143084a86;
  puStack_88 = &UNK_143084ae4;
  puVar1 = (&puStack_a8)[uVar2];
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  puStack_e8 = puVar7;
  uStack_e0 = uVar8;
  FUN_140002d64(&puStack_e8);
  FUN_140001001(uVar2,(ulonglong)unaff_R12 & 0xffffffff,&puStack_e8);
  uVar13 = FUN_1400030de(&puStack_e8);
  ppuStack_118 = ppuStack_f8;
  cVar11 = FUN_140002951(uVar13,(ulonglong)unaff_R12 & 0xffffffff,0,param_3);
  if (cVar11 == '\0') {
    uVar13 = FUN_1400030de(&puStack_e8);
    ppuStack_118 = ppuStack_f8;
    cVar11 = FUN_140002951(uVar13,(ulonglong)unaff_R12 & 0xffffffff,1,param_3);
    if (cVar11 == '\0') {
      uStack_b8 = puVar7;
      uStack_b0 = uVar8;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 0x10) < _DAT_1436e7288) &&
         (FUN_142bb2214(&DAT_1436e7288), _DAT_1436e7288 == -1)) {
        uVar13 = GetModuleHandleW(&UNK_143084bc4);
        _DAT_1436e7280 = GetProcAddress(uVar13,&UNK_143084ba8);
        FUN_142bb21a8(&DAT_1436e7288);
      }
      if (_DAT_1436e7280 != 0) {
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) <
             _DAT_1436e7298) && (FUN_142bb2214(&DAT_1436e7298), _DAT_1436e7298 == -1)) {
          uVar13 = GetModuleHandleW(&UNK_143084bc4);
          _DAT_1436e7290 = GetProcAddress(uVar13,&UNK_143084be2);
          FUN_142bb21a8(&DAT_1436e7298);
        }
        if (_DAT_1436e7290 != 0) {
          uStack_c8 = 0;
          puStack_100 = &uStack_c8;
          uStack_108 = 0;
          uStack_110 = 0;
          ppuStack_118 = (undefined **)((ulonglong)ppuStack_118 & 0xffffffff00000000);
          iVar12 = (*(code *)PTR__guard_dispatch_icall_142febe98)(0,puVar1,0,0);
          if (-1 < iVar12) {
            puStack_a8 = (undefined *)0x0;
            ppuStack_118 = (undefined **)0x0;
            (*(code *)PTR__guard_dispatch_icall_142febe98)(uStack_c8,0,0,&puStack_a8);
            uVar13 = uStack_c8;
            uVar14 = GetProcessHeap();
            HeapFree(uVar14,0,uVar13);
            uStack_c8 = 0;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10)
               < _DAT_1436e72a8) && (FUN_142bb2214(&DAT_1436e72a8), _DAT_1436e72a8 == -1)) {
            uVar13 = GetModuleHandleW(&UNK_143084bc4);
            _DAT_1436e72a0 = (undefined **)GetProcAddress(uVar13,&UNK_143084bf7);
            FUN_142bb21a8(&DAT_1436e72a8);
          }
          unaff_R12 = &puStack_a8;
          if (_DAT_1436e72a0 != (undefined **)0x0) {
            uStack_bc = 0xaaaaaaaa;
            iStack_c0 = 0;
            iVar12 = (*(code *)PTR__guard_dispatch_icall_142febe98)
                               (0x180001,&iStack_c0,0,&uStack_bc);
            if ((iVar12 == 0x7a) && (iStack_c0 != 0)) {
              uStack_98 = 0xaaaaaaaaaaaa;
              uStack_92 = 0xaaaa;
              puStack_a8 = puVar7;
              uStack_a0 = (undefined6)uVar8;
              uVar9 = uStack_a0;
              uStack_9a = (undefined2)(uVar8 >> 0x30);
              uVar10 = uStack_9a;
              FUN_140002d64(unaff_R12);
              cVar11 = FUN_140003082(unaff_R12,iStack_c0);
              ppuVar18 = _DAT_1436e72a0;
              if (cVar11 != '\0') {
                uVar13 = FUN_1400030d8(&puStack_a8);
                iVar12 = (*(code *)PTR__guard_dispatch_icall_142febe98)
                                   (0x180001,&iStack_c0,uVar13,&uStack_bc);
                unaff_R12 = ppuVar18;
                if ((iVar12 == 0) && (lVar15 = FUN_1400030d8(&puStack_a8), uStack_bc != 0)) {
                  ppuVar18 = (undefined **)(lVar15 + 0x28);
                  uVar19 = 0;
                  do {
                    iVar12 = FUN_142c48440(ppuVar18[-2],puVar1);
                    unaff_R12 = ppuStack_f8;
                    if (iVar12 == 0) {
                      puVar1 = *ppuVar18;
                      auVar3._8_4_ = 0;
                      auVar3._0_8_ = puVar1;
                      auVar3._12_2_ = (short)((ulonglong)puVar1 >> 0x30);
                      auVar4._8_2_ = (short)((ulonglong)puVar1 >> 0x20);
                      auVar4._0_8_ = puVar1;
                      auVar4._10_4_ = auVar3._10_4_;
                      auVar6._6_8_ = 0;
                      auVar6._0_6_ = auVar4._8_6_;
                      auVar5._4_2_ = (short)((ulonglong)puVar1 >> 0x10);
                      auVar5._0_4_ = (int)puVar1;
                      auVar5._6_8_ = SUB148(auVar6 << 0x40,6);
                      uVar19 = auVar3._10_4_ >> 0x10;
                      uStack_b8 = (undefined *)CONCAT44(auVar4._8_4_,uVar19);
                      uStack_b0 = CONCAT44((int)puVar1,auVar5._4_4_) & 0xffffffffffff;
                      FUN_140002ebe(ppuStack_f8,ppuVar18[-4]);
                      FUN_140002d76(&puStack_a8);
                      cVar11 = FUN_140002b46(&uStack_b8,unaff_R12);
                      if (cVar11 != '\x01' || param_3 == 0) {
                        if (cVar11 != '\0') goto LAB_140001e8b;
                        goto LAB_140001c3a;
                      }
                      FUN_140002e0a(param_3,0xf);
                      uStack_98 = 0xaaaaaaaaaaaa;
                      puStack_a8 = puVar7;
                      uStack_a0 = uVar9;
                      uStack_9a = uVar10;
                      iVar12 = FUN_142c64810(uVar19,&puStack_a8,0xb,10);
                      if (iVar12 != 0) goto LAB_140001c3a;
                      FUN_140002ebe(param_3,&puStack_a8);
                      unaff_R12 = (undefined **)0x3;
                      goto LAB_140001d52;
                    }
                    uVar19 = uVar19 + 1;
                    ppuVar18 = ppuVar18 + 10;
                    unaff_R12 = ppuVar18;
                  } while (uVar19 < uStack_bc);
                }
              }
              FUN_140002d76(&puStack_a8);
            }
          }
        }
      }
LAB_140001c3a:
      FUN_140002d76(&puStack_e8);
      goto LAB_140001c42;
    }
  }
LAB_140001e8b:
  if (lStack_f0 != 0) {
    puStack_a8 = &UNK_143084756;
    uStack_a0 = 0x143084758;
    uStack_9a = 0;
    uStack_98 = 0x143084762;
    uStack_92 = 0;
    puStack_90 = &UNK_14308476a;
    puStack_88 = &UNK_143084778;
    FUN_140002ebe(lStack_f0,(&puStack_a8)[uVar2]);
  }
  FUN_140002d76(&puStack_e8);
  uVar13 = 0;
  goto LAB_140001f0d;
LAB_140001d52:
  iVar12 = FUN_142c64810(uVar19,&puStack_a8,0xb,10);
  if (iVar12 != 0) goto LAB_140001c3a;
  FUN_140002fc2(param_3,&UNK_143084ba4);
  FUN_140002fc2(param_3,&puStack_a8);
  uVar17 = (int)unaff_R12 - 1;
  unaff_R12 = (undefined **)(ulonglong)uVar17;
  if (uVar17 == 0) goto LAB_140001e8b;
  goto LAB_140001d52;
}

