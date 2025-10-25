
void FUN_140518320(ushort *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    vpinsrb_avx(ZEXT816(0),(uint)(byte)*param_1,0);
    break;
  case 2:
    vpinsrw_avx(ZEXT816(0),(uint)*param_1,0);
    break;
  case 3:
    auVar1 = vpinsrw_avx(ZEXT816(0),(uint)*param_1,0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[1],2);
    break;
  case 4:
    vpinsrd_avx(ZEXT816(0),*(undefined4 *)param_1,0);
    break;
  case 5:
    auVar1 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)param_1,0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[2],4);
    break;
  case 6:
    auVar1 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)param_1,0);
    vpinsrw_avx(auVar1,(uint)param_1[2],2);
    break;
  case 7:
    auVar1 = vpinsrd_avx(ZEXT816(0),*(undefined4 *)param_1,0);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[2],2);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[3],6);
    break;
  case 8:
    vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    break;
  case 9:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[4],8);
    break;
  case 10:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    vpinsrw_avx(auVar1,(uint)param_1[4],4);
    break;
  case 0xb:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[4],4);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[5],10);
    break;
  case 0xc:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 4),2);
    break;
  case 0xd:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 4),2);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[6],0xc);
    break;
  case 0xe:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 4),2);
    vpinsrw_avx(auVar1,(uint)param_1[6],6);
    break;
  case 0xf:
    auVar1 = vpinsrq_avx(ZEXT816(0),*(undefined8 *)param_1,0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 4),2);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[6],6);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[7],0xe);
    break;
  case 0x10:
    break;
  case 0x11:
    vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)param_1[8],0);
    break;
  case 0x12:
    vpinsrw_avx((undefined1  [16])0x0,(uint)param_1[8],0);
    break;
  case 0x13:
    auVar1 = vpinsrw_avx((undefined1  [16])0x0,(uint)param_1[8],0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[9],2);
    break;
  case 0x14:
    vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(param_1 + 8),0);
    break;
  case 0x15:
    auVar1 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(param_1 + 8),0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[10],4);
    break;
  case 0x16:
    auVar1 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(param_1 + 8),0);
    vpinsrw_avx(auVar1,(uint)param_1[10],2);
    break;
  case 0x17:
    auVar1 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(param_1 + 8),0);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[10],2);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[0xb],6);
    break;
  case 0x18:
    vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    break;
  case 0x19:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[0xc],8);
    break;
  case 0x1a:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    vpinsrw_avx(auVar1,(uint)param_1[0xc],4);
    break;
  case 0x1b:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[0xc],4);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[0xd],10);
    break;
  case 0x1c:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 0xc),2);
    break;
  case 0x1d:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 0xc),2);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[0xe],0xc);
    break;
  case 0x1e:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 0xc),2);
    vpinsrw_avx(auVar1,(uint)param_1[0xe],6);
    break;
  case 0x1f:
    auVar1 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(param_1 + 8),0);
    auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(param_1 + 0xc),2);
    auVar1 = vpinsrw_avx(auVar1,(uint)param_1[0xe],6);
    vpinsrb_avx(auVar1,(uint)(byte)param_1[0xf],0xe);
    break;
  default:
  }
  return;
}

