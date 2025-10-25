
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400022d4(undefined8 *param_1,ushort **param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  ushort **ppuStack_f0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  ushort *puStack_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1436b4680 ^ (ulonglong)auStack_118;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d8 = _DAT_142fec500;
  uStack_d4 = _UNK_142fec504;
  uStack_d0 = _UNK_142fec508;
  uStack_cc = _UNK_142fec50c;
  FUN_140002d64();
  psVar1 = (short *)*param_1;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    iVar12 = (uint)*(byte *)((longlong)param_1 + 0x1c) * 2;
    uVar5 = FUN_1400018f5(param_1,&uStack_d8,0,0);
  }
  else {
    iVar12 = *(byte *)((longlong)param_1 + 0x1c) + 1;
    uVar5 = FUN_1400012d3(psVar1,&uStack_d8);
  }
  uVar10 = (ulonglong)uVar5;
  if (uVar5 == 0) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar9 = FUN_1400030de(&uStack_d8);
    uStack_f8 = uVar3;
    ppuStack_f0 = param_2;
    uVar7 = FUN_140003e34(uVar9,1,iVar12,uVar2);
    uVar10 = (ulonglong)uVar7;
    if (-1 < (int)uVar7) goto LAB_1400025c7;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                0x10) < _DAT_1436e72b8) {
      FUN_142bb2214(&DAT_1436e72b8);
      if (_DAT_1436e72b8 == -1) {
        _DAT_1436e72b0 = LoadLibraryExW(&UNK_143084c0e,0,0x800);
        FUN_142bb21a8(&DAT_1436e72b8);
      }
    }
    if (_DAT_1436e72b0 != 0) {
      puVar11 = &UNK_143084c28;
      lVar8 = GetProcAddress(_DAT_1436e72b0,&UNK_143084c28);
      if (lVar8 != 0) {
        puStack_a8 = *(ushort **)(_DAT_143696008 + -8);
        uStack_a0 = *(uint *)(_DAT_143696008 + -4);
        uStack_9c = *(undefined4 *)(_DAT_143696008 + -2);
        if (_DAT_143696020 != 0) {
          pcVar4 = (code *)swi(0x29);
          uVar13 = (*pcVar4)(5);
          uVar10 = FUN_140002654(uVar13,0,puVar11);
          return uVar10;
        }
        _DAT_143696028 = 0;
        uRam0000000143696030 = 0;
        iVar6 = EventRegister(&puStack_a8,FUN_140002baf,&DAT_143696000,&DAT_143696020);
        if (iVar6 == 0) {
          EventSetInformation(_DAT_143696020,2,_DAT_143696008,*_DAT_143696008);
          if (((2 < _DAT_143696000) && ((DAT_143696015 & 0x40) != 0)) &&
             ((_DAT_143696018 & 0xffffbfffffffffff) == 0)) {
            puStack_58 = &uStack_b0;
            uStack_b0 = 0x1000000;
            puStack_68 = &uStack_b1;
            puStack_78 = &uStack_b2;
            puStack_88 = &uStack_b8;
            uStack_b8 = (undefined4)uVar10;
            uStack_50 = 8;
            uStack_60 = 1;
            uStack_70 = 1;
            uStack_80 = 4;
            uStack_48 = 0x20b000000;
            uStack_40 = 0x400000000000;
            puStack_a8 = _DAT_143696008;
            uStack_a0 = (uint)*_DAT_143696008;
            uStack_9c = 2;
            puStack_98 = &UNK_1433f261c;
            uStack_90 = 0x10000005f;
            uStack_dc = 0xc0;
            uStack_f8 = CONCAT44(uStack_f8._4_4_,6);
            ppuStack_f0 = &puStack_a8;
            uStack_b2 = uVar5 == 0;
            uStack_b1 = iVar12 == 0;
            EventWriteTransfer(_DAT_143696020,&uStack_48,0,0);
          }
          lVar8 = _DAT_143696020;
          _DAT_143696000 = 0;
          _DAT_143696020 = 0;
          EventUnregister(lVar8);
        }
      }
    }
  }
LAB_1400025c7:
  FUN_140002d76(&uStack_d8);
  if ((uStack_38 ^ (ulonglong)auStack_118) == _DAT_1436b4680) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

