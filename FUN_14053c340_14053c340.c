
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14053c340(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  param_4 = param_4 & 7;
  auStack_140 = (undefined1  [32])0x0;
  uStack_120 = _DAT_14308aac0;
  uStack_118 = _UNK_14308aac8;
  uStack_110 = _UNK_14308aad0;
  uStack_108 = _UNK_14308aad8;
  auStack_100 = _DAT_14308aae0;
  uStack_e0 = _DAT_14308ab00;
  uStack_d8 = _UNK_14308ab08;
  uStack_d0 = _UNK_14308ab10;
  uStack_c8 = _UNK_14308ab18;
  uStack_c0 = _DAT_14308ab20;
  uStack_b8 = _UNK_14308ab28;
  uStack_b0 = _UNK_14308ab30;
  uStack_a8 = _UNK_14308ab38;
  uStack_a0 = _DAT_14308ab40;
  uStack_98 = _UNK_14308ab48;
  uStack_90 = _UNK_14308ab50;
  uStack_88 = _UNK_14308ab58;
  uStack_80 = _DAT_14308ab60;
  uStack_78 = _UNK_14308ab68;
  uStack_70 = _UNK_14308ab70;
  uStack_68 = _UNK_14308ab78;
  uStack_60 = _DAT_14308ab80;
  uStack_58 = _UNK_14308ab88;
  uStack_50 = _UNK_14308ab90;
  uStack_48 = _UNK_14308ab98;
  auStack_40 = vpcmpeqd_avx2(_DAT_14308aae0,_DAT_14308aae0);
  auVar2 = vmaskmovps_avx(auStack_40,*param_1);
  auVar1 = *(undefined1 (*) [32])(auStack_140 + param_4 * 0x20);
  auVar3 = vmaskmovps_avx(auStack_40,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar4 = vmaskmovps_avx(auStack_40,*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  auVar5 = vmaskmovps_avx(auVar1,param_1[1]);
  auVar6 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
  auVar2 = vmaxps_avx(auVar2,auVar3);
  auVar2 = vmaxps_avx(auVar2,auVar4);
  auVar3 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
  auVar1 = vmaxps_avx(auVar5,auVar6);
  auVar1 = vmaxps_avx(auVar1,auVar3);
  auVar3 = vperm2f128_avx(auVar2,auVar1,0x21);
  auVar2 = vmaxps_avx(auVar2,auVar3);
  auVar1 = vmaxps_avx(auVar2,auVar1);
  auVar7 = auVar1._0_16_;
  if (3 < param_4) {
    *param_3 = auVar7;
    auVar7 = auVar1._16_16_;
    param_3 = param_3 + 1;
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  if (1 < (longlong)param_4) {
    *(longlong *)*param_3 = auVar7._0_8_;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar7 = vpsrldq_avx(auVar7,8);
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(int *)*param_3 = auVar7._0_4_;
  }
  return;
}

