
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000c2e0(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [16],int param_4,
                  ulonglong param_5,float *param_6)

{
  ushort *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  int iVar8;
  undefined1 (*pauVar9) [32];
  int iVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  byte *pbVar23;
  longlong lVar24;
  undefined2 uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [64];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [32];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  
  auVar7 = _DAT_143085f00;
  auVar6 = _DAT_143085ee0;
  if (param_6 == (float *)0x0) {
    iVar10 = 0x2646;
    iVar12 = 0x4b23;
    iVar8 = 0xe98;
  }
  else {
    auVar29._0_8_ = (double)*param_6;
    auVar29._8_8_ = 0;
    auVar49._0_8_ = (double)param_6[1];
    auVar49._8_8_ = 0;
    auVar34._0_8_ = (double)param_6[2];
    auVar34._8_8_ = 0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = _DAT_143085f90;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = _DAT_143085f98;
    auVar29 = vfmadd213sd_fma(auVar29,auVar31,auVar27);
    auVar49 = vfmadd213sd_fma(auVar49,auVar31,auVar27);
    auVar31 = vfmadd213sd_fma(auVar34,auVar31,auVar27);
    iVar10 = (int)auVar29._0_8_;
    iVar12 = (int)auVar49._0_8_;
    iVar8 = (int)auVar31._0_8_;
  }
  uVar17 = 0;
  uVar25 = (undefined2)iVar10;
  auVar33 = ZEXT3264(CONCAT230(uVar25,CONCAT228(uVar25,CONCAT226(uVar25,CONCAT224(uVar25,CONCAT222(
                                                  uVar25,CONCAT220(uVar25,CONCAT218(uVar25,CONCAT216
                                                  (uVar25,CONCAT214(uVar25,CONCAT212(uVar25,
                                                  CONCAT210(uVar25,CONCAT28(uVar25,CONCAT26(uVar25,
                                                  CONCAT24(uVar25,CONCAT22(uVar25,uVar25))))))))))))
                                                  ))));
  uVar25 = (undefined2)iVar12;
  auVar37 = ZEXT3264(CONCAT230(uVar25,CONCAT228(uVar25,CONCAT226(uVar25,CONCAT224(uVar25,CONCAT222(
                                                  uVar25,CONCAT220(uVar25,CONCAT218(uVar25,CONCAT216
                                                  (uVar25,CONCAT214(uVar25,CONCAT212(uVar25,
                                                  CONCAT210(uVar25,CONCAT28(uVar25,CONCAT26(uVar25,
                                                  CONCAT24(uVar25,CONCAT22(uVar25,uVar25))))))))))))
                                                  ))));
  uVar25 = (undefined2)iVar8;
  auVar28 = ZEXT3264(CONCAT230(uVar25,CONCAT228(uVar25,CONCAT226(uVar25,CONCAT224(uVar25,CONCAT222(
                                                  uVar25,CONCAT220(uVar25,CONCAT218(uVar25,CONCAT216
                                                  (uVar25,CONCAT214(uVar25,CONCAT212(uVar25,
                                                  CONCAT210(uVar25,CONCAT28(uVar25,CONCAT26(uVar25,
                                                  CONCAT24(uVar25,CONCAT22(uVar25,uVar25))))))))))))
                                                  ))));
  if (0 < (int)param_5._4_4_) {
    auVar30._4_4_ = iVar10;
    auVar30._0_4_ = iVar10;
    auVar30._8_4_ = iVar10;
    auVar30._12_4_ = iVar10;
    auVar30._16_4_ = iVar10;
    auVar30._20_4_ = iVar10;
    auVar30._24_4_ = iVar10;
    auVar30._28_4_ = iVar10;
    auVar38._4_4_ = iVar12;
    auVar38._0_4_ = iVar12;
    auVar38._8_4_ = iVar12;
    auVar38._12_4_ = iVar12;
    auVar38._16_4_ = iVar12;
    auVar38._20_4_ = iVar12;
    auVar38._24_4_ = iVar12;
    auVar38._28_4_ = iVar12;
    auVar26._4_4_ = iVar8;
    auVar26._0_4_ = iVar8;
    auVar26._8_4_ = iVar8;
    auVar26._12_4_ = iVar8;
    auVar26._16_4_ = iVar8;
    auVar26._20_4_ = iVar8;
    auVar26._24_4_ = iVar8;
    auVar26._28_4_ = iVar8;
    auVar44 = ZEXT3264(_DAT_143085ec0);
    auVar47 = ZEXT3264(_DAT_143085ea0);
    auVar46 = ZEXT3264(_DAT_143085e80);
    do {
      uVar22 = 0;
      iVar13 = 0;
      lVar19 = 0;
      auVar42 = auVar28._0_32_;
      auVar32 = auVar33._0_32_;
      auVar36 = auVar37._0_32_;
      auVar41 = auVar47._0_32_;
      auVar52 = auVar44._0_32_;
      auVar45 = auVar46._0_32_;
      pauVar9 = param_1;
      pauVar11 = param_3;
      if (0 < (int)((uint)param_5 & 0xffffffe0)) {
        do {
          uVar22 = uVar22 + 1;
          auVar51 = vpshufb_avx2(*pauVar9,auVar41);
          auVar50 = vpshufb_avx2(pauVar9[1],auVar41);
          auVar3 = vpermd_avx2(auVar52,auVar51);
          auVar51 = vpshufb_avx2(pauVar9[2],auVar41);
          auVar39 = vpermd_avx2(auVar52,auVar50);
          auVar4 = vpermd_avx2(auVar52,auVar51);
          auVar51 = vpshufb_avx2(pauVar9[3],auVar41);
          auVar50 = vperm2i128_avx2(auVar3,auVar39,0x20);
          auVar3 = vperm2i128_avx2(auVar3,auVar39,0x31);
          auVar39 = vpermq_avx2(auVar3,0xd8);
          auVar3 = vpermd_avx2(auVar52,auVar51);
          auVar5 = vpermq_avx2(auVar50,0xd8);
          auVar51 = vpmovzxbw_avx2(auVar39._0_16_);
          auVar51 = vpsllw_avx2(auVar51,8);
          auVar50 = vpmulhuw_avx2(auVar51,auVar42);
          auVar51 = vperm2i128_avx2(auVar4,auVar3,0x20);
          auVar3 = vperm2i128_avx2(auVar4,auVar3,0x31);
          auVar4 = vpermq_avx2(auVar51,0xd8);
          auVar51 = vpermq_avx2(auVar3,0xd8);
          auVar51 = vpmovzxbw_avx2(auVar51._0_16_);
          auVar51 = vpsllw_avx2(auVar51,8);
          auVar3 = vpmulhuw_avx2(auVar51,auVar42);
          auVar51 = vpmovzxbw_avx2(auVar5._0_16_);
          auVar5 = vpermq_avx2(auVar5,0xee);
          auVar51 = vpsllw_avx2(auVar51,8);
          auVar39 = vpmulhuw_avx2(auVar51,auVar32);
          auVar51 = vpmovzxbw_avx2(auVar5._0_16_);
          auVar51 = vpsllw_avx2(auVar51,8);
          auVar51 = vpmulhuw_avx2(auVar51,auVar36);
          auVar51 = vpaddusw_avx2(auVar39,auVar51);
          auVar51 = vpaddusw_avx2(auVar51,auVar50);
          auVar51 = vpaddusw_avx2(auVar51,auVar45);
          auVar39 = vpsrlw_avx2(auVar51,7);
          auVar51 = vpmovzxbw_avx2(auVar4._0_16_);
          auVar50 = vpsllw_avx2(auVar51,8);
          auVar51 = vpermq_avx2(auVar4,0xee);
          auVar50 = vpmulhuw_avx2(auVar50,auVar32);
          auVar51 = vpmovzxbw_avx2(auVar51._0_16_);
          auVar51 = vpsllw_avx2(auVar51,8);
          auVar51 = vpmulhuw_avx2(auVar51,auVar36);
          auVar51 = vpaddusw_avx2(auVar50,auVar51);
          auVar51 = vpaddusw_avx2(auVar51,auVar3);
          auVar51 = vpaddusw_avx2(auVar51,auVar45);
          auVar51 = vpsrlw_avx2(auVar51,7);
          auVar51 = vpackuswb_avx2(auVar39,auVar51);
          auVar51 = vpermq_avx2(auVar51,0xd8);
          *(undefined1 (*) [32])(*param_3 + lVar19) = auVar51;
          lVar19 = lVar19 + 0x20;
          pauVar9 = pauVar9 + 4;
        } while (uVar22 < ((uint)param_5 & 0xffffffe0) + 0x1f >> 5);
        pauVar11 = param_3 + uVar22 * 2;
        iVar13 = (int)uVar22 << 5;
        pauVar9 = param_1 + uVar22 * 4;
      }
      if ((param_5 & 0x10) != 0) {
        iVar13 = iVar13 + 0x10;
        auVar51 = vpshufb_avx2(*pauVar9,auVar41);
        auVar41 = vpshufb_avx2(pauVar9[1],auVar41);
        auVar51 = vpermd_avx2(auVar52,auVar51);
        pauVar9 = pauVar9 + 2;
        auVar41 = vpermd_avx2(auVar52,auVar41);
        auVar52 = vperm2i128_avx2(auVar51,auVar41,0x31);
        auVar50 = vpermq_avx2(auVar52,0xd8);
        auVar52 = vperm2i128_avx2(auVar51,auVar41,0x20);
        auVar51 = vpermq_avx2(auVar52,0xd8);
        auVar52 = vpmovzxbw_avx2(auVar50._0_16_);
        auVar52 = vpsllw_avx2(auVar52,8);
        auVar41 = vpmulhuw_avx2(auVar52,auVar42);
        auVar52 = vpmovzxbw_avx2(auVar51._0_16_);
        auVar50 = vpermq_avx2(auVar51,0xee);
        auVar52 = vpsllw_avx2(auVar52,8);
        auVar51 = vpmulhuw_avx2(auVar52,auVar32);
        auVar52 = vpmovzxbw_avx2(auVar50._0_16_);
        auVar52 = vpsllw_avx2(auVar52,8);
        auVar52 = vpmulhuw_avx2(auVar52,auVar36);
        auVar52 = vpaddusw_avx2(auVar51,auVar52);
        auVar52 = vpaddusw_avx2(auVar52,auVar41);
        auVar52 = vpaddusw_avx2(auVar52,auVar45);
        auVar52 = vpsrlw_avx2(auVar52,7);
        auVar52 = vpackuswb_avx2(auVar52,auVar52);
        auVar52 = vpermq_avx2(auVar52,0xd8);
        *pauVar11 = auVar52._0_16_;
        pauVar11 = pauVar11 + 1;
      }
      if (iVar13 < (int)(uint)param_5) {
        if (((longlong)pauVar11 - (longlong)pauVar9 <
             ((longlong)(int)(uint)param_5 - (longlong)iVar13) * 4 + -1) &&
           (-((longlong)pauVar11 - (longlong)pauVar9) <
            (longlong)(int)(uint)param_5 - (longlong)iVar13)) {
          iVar21 = 1;
          uVar14 = (uint)param_5 - iVar13 >> 1;
          uVar22 = 0;
          if (uVar14 != 0) {
            do {
              uVar16 = uVar22;
              (*pauVar11)[uVar16 * 2] =
                   (char)((uint)(byte)(*pauVar9)[uVar16 * 8] * iVar10 +
                          (uint)(byte)(*pauVar9)[uVar16 * 8 + 1] * iVar12 + 0x4000 +
                          (uint)(byte)(*pauVar9)[uVar16 * 8 + 2] * iVar8 >> 0xf);
              (*pauVar11)[uVar16 * 2 + 1] =
                   (char)((uint)(byte)(*pauVar9)[uVar16 * 8 + 4] * iVar10 +
                          (uint)(byte)(*pauVar9)[uVar16 * 8 + 5] * iVar12 + 0x4000 +
                          (uint)(byte)(*pauVar9)[uVar16 * 8 + 6] * iVar8 >> 0xf);
              uVar22 = uVar16 + 1;
            } while (uVar22 < uVar14);
            iVar21 = (int)uVar16 + 2 + (int)uVar22;
          }
          if (iVar21 - 1U < (uint)param_5 - iVar13) {
            lVar19 = (longlong)iVar21;
            pauVar11[-1][lVar19 + 0xf] =
                 (char)((uint)(byte)pauVar9[-1][lVar19 * 4 + 0x1c] * iVar10 +
                        (uint)(byte)pauVar9[-1][lVar19 * 4 + 0x1d] * iVar12 + 0x4000 +
                        (uint)(byte)pauVar9[-1][lVar19 * 4 + 0x1e] * iVar8 >> 0xf);
          }
        }
        else {
          uVar14 = ((uint)param_5 - (iVar13 + 1)) + 1;
          if ((int)uVar14 < 0x20) {
LAB_14000cf68:
            uVar20 = 0;
          }
          else {
            if ((int)uVar14 < 0x12c0) {
              uVar22 = 0;
              uVar20 = uVar14 & 0xffffffe0;
            }
            else {
              uVar22 = (ulonglong)pauVar11 & 0x1f;
              if ((int)uVar22 != 0) {
                uVar22 = (ulonglong)(0x20 - (int)uVar22);
              }
              iVar13 = (int)uVar22;
              if ((int)uVar14 < iVar13 + 0x20) goto LAB_14000cf68;
              uVar16 = 0;
              uVar20 = uVar14 - (uVar14 - iVar13 & 0x1f);
              if (iVar13 != 0) {
                do {
                  (*pauVar11)[uVar16] =
                       (char)((uint)(byte)(*pauVar9)[uVar16 * 4] * iVar10 +
                              (uint)(byte)(*pauVar9)[uVar16 * 4 + 1] * iVar12 + 0x4000 +
                              (uint)(byte)(*pauVar9)[uVar16 * 4 + 2] * iVar8 >> 0xf);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar22);
              }
            }
            auVar29 = _DAT_143085f80;
            auVar45 = _DAT_143085f60;
            auVar52 = _DAT_143085f20;
            lVar19 = uVar22 * 4;
            do {
              puVar1 = (ushort *)(*pauVar9 + lVar19);
              auVar49 = vpinsrw_avx(ZEXT216(*puVar1),(uint)puVar1[2],1);
              auVar49 = vpinsrw_avx(auVar49,(uint)puVar1[4],2);
              auVar31 = vpinsrw_avx(ZEXT216(puVar1[0x10]),(uint)puVar1[0x12],1);
              auVar49 = vpinsrw_avx(auVar49,(uint)puVar1[6],3);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x14],2);
              auVar49 = vpinsrw_avx(auVar49,(uint)puVar1[8],4);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x16],3);
              auVar27 = vpinsrw_avx(ZEXT216(puVar1[0x20]),(uint)puVar1[0x22],1);
              auVar49 = vpinsrw_avx(auVar49,(uint)puVar1[10],5);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x18],4);
              auVar27 = vpinsrw_avx(auVar27,(uint)puVar1[0x24],2);
              auVar49 = vpinsrw_avx(auVar49,(uint)puVar1[0xc],6);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x1a],5);
              auVar27 = vpinsrw_avx(auVar27,(uint)puVar1[0x26],3);
              auVar34 = vpinsrw_avx(auVar49,(uint)puVar1[0xe],7);
              auVar49 = vpinsrw_avx(auVar31,(uint)puVar1[0x1c],6);
              auVar31 = vpinsrw_avx(auVar27,(uint)puVar1[0x28],4);
              auVar27 = vpinsrw_avx(ZEXT216(puVar1[0x30]),(uint)puVar1[0x32],1);
              auVar35 = vpinsrw_avx(auVar49,(uint)puVar1[0x1e],7);
              auVar49 = vpinsrw_avx(auVar31,(uint)puVar1[0x2a],5);
              auVar31 = vpinsrw_avx(auVar27,(uint)puVar1[0x34],2);
              auVar27 = vpinsrw_avx(auVar49,(uint)puVar1[0x2c],6);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x36],3);
              auVar49 = vpand_avx(auVar29,auVar34);
              auVar27 = vpinsrw_avx(auVar27,(uint)puVar1[0x2e],7);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x38],4);
              auVar31 = vpinsrw_avx(auVar31,(uint)puVar1[0x3a],5);
              auVar40 = vpsrlw_avx(auVar34,8);
              auVar34 = vpinsrw_avx(auVar31,(uint)puVar1[0x3c],6);
              auVar31 = vpand_avx(auVar29,auVar35);
              auVar48 = vpinsrw_avx(auVar34,(uint)puVar1[0x3e],7);
              auVar43 = vpsrlw_avx(auVar35,8);
              auVar35 = vpsrlw_avx(auVar27,8);
              auVar49 = vpackuswb_avx(auVar49,auVar31);
              auVar27 = vpand_avx(auVar29,auVar27);
              auVar34 = vpand_avx(auVar29,auVar48);
              auVar48 = vpsrlw_avx(auVar48,8);
              auVar31 = vpackuswb_avx(auVar40,auVar43);
              auVar27 = vpackuswb_avx(auVar27,auVar34);
              auVar34 = vpackuswb_avx(auVar35,auVar48);
              auVar35 = vpinsrb_avx(ZEXT116((byte)puVar1[1]),(uint)(byte)(*pauVar9)[lVar19 + 6],1);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 10],2);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 0xe],3);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 0x12],4);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 0x16],5);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 0x1a],6);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)(*pauVar9)[lVar19 + 0x1e],7);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 2],8);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 6],9);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 10],10);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 0xe],0xb);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 0x12],0xc);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 0x16],0xd);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 0x1a],0xe);
              auVar48 = vpinsrb_avx(ZEXT116((byte)pauVar9[2][lVar19 + 2]),
                                    (uint)(byte)pauVar9[2][lVar19 + 6],0x11);
              auVar35 = vpinsrb_avx(auVar35,(uint)(byte)pauVar9[1][lVar19 + 0x1e],0xf);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 10],0x12);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 0xe],0x13);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 0x12],0x14);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 0x16],0x15);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 0x1a],0x16);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[2][lVar19 + 0x1e],0x17);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 2],0x18);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 6],0x19);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 10],0x1a);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 0xe],0x1b);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 0x12],0x1c);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 0x16],0x1d);
              auVar48 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 0x1a],0x1e);
              auVar41 = vpmovzxbd_avx2(auVar49);
              auVar40 = vpsrldq_avx(auVar49,8);
              auVar49 = vpinsrb_avx(auVar48,(uint)(byte)pauVar9[3][lVar19 + 0x1e],0x1f);
              lVar19 = lVar19 + 0x80;
              auVar50 = vpmulld_avx2(auVar30,auVar41);
              auVar51 = vpmovzxbd_avx2(auVar40);
              auVar41 = vpmovzxbd_avx2(auVar31);
              auVar41 = vpmulld_avx2(auVar38,auVar41);
              auVar31 = vpsrldq_avx(auVar31,8);
              auVar41 = vpaddd_avx2(auVar50,auVar41);
              auVar50 = vpmovzxbd_avx2(auVar31);
              auVar51 = vpmulld_avx2(auVar30,auVar51);
              auVar3 = vpmulld_avx2(auVar38,auVar50);
              auVar50 = vpmovzxbd_avx2(auVar35);
              auVar51 = vpaddd_avx2(auVar51,auVar3);
              auVar31 = vpsrldq_avx(auVar35,8);
              auVar50 = vpmulld_avx2(auVar26,auVar50);
              auVar41 = vpaddd_avx2(auVar41,auVar50);
              auVar41 = vpaddd_avx2(auVar41,auVar6);
              auVar50 = vpsrad_avx2(auVar41,0xf);
              auVar41 = vpmovzxbd_avx2(auVar31);
              auVar39 = vpshufb_avx2(auVar50,auVar7);
              auVar41 = vpmulld_avx2(auVar26,auVar41);
              auVar41 = vpaddd_avx2(auVar51,auVar41);
              auVar41 = vpaddd_avx2(auVar41,auVar6);
              auVar51 = vpsrad_avx2(auVar41,0xf);
              auVar41 = vpmovzxbd_avx2(auVar27);
              auVar31 = vpsrldq_avx(auVar27,8);
              auVar4 = vpshufb_avx2(auVar51,auVar52);
              auVar51 = vpmovzxbd_avx2(auVar31);
              auVar50 = vpmovzxbd_avx2(auVar34);
              auVar41 = vpmulld_avx2(auVar30,auVar41);
              auVar3 = vpmulld_avx2(auVar30,auVar51);
              auVar51 = vpmulld_avx2(auVar38,auVar50);
              auVar31 = vpsrldq_avx(auVar34,8);
              auVar41 = vpaddd_avx2(auVar41,auVar51);
              auVar51 = vpmovzxbd_avx2(auVar31);
              auVar51 = vpmulld_avx2(auVar38,auVar51);
              auVar50 = vpmovzxbd_avx2(auVar49);
              auVar51 = vpaddd_avx2(auVar3,auVar51);
              auVar49 = vpsrldq_avx(auVar49,8);
              auVar50 = vpmulld_avx2(auVar26,auVar50);
              auVar41 = vpaddd_avx2(auVar41,auVar50);
              auVar41 = vpaddd_avx2(auVar41,auVar6);
              auVar50 = vpsrad_avx2(auVar41,0xf);
              auVar41 = vpmovzxbd_avx2(auVar49);
              auVar50 = vpshufb_avx2(auVar50,auVar7);
              auVar41 = vpmulld_avx2(auVar26,auVar41);
              auVar41 = vpaddd_avx2(auVar51,auVar41);
              auVar41 = vpaddd_avx2(auVar41,auVar6);
              auVar41 = vpsrad_avx2(auVar41,0xf);
              auVar51 = vperm2i128_avx2(auVar39,auVar39,0x81);
              auVar5 = vperm2i128_avx2(auVar4,auVar4,0x81);
              auVar3 = vpshufb_avx2(auVar41,auVar52);
              auVar2 = vperm2i128_avx2(auVar50,auVar50,0x28);
              auVar41 = vpand_avx2(auVar50,auVar45);
              auVar51 = vpor_avx2(auVar51,ZEXT1632(auVar39._0_16_));
              auVar50 = vpor_avx2(auVar5,ZEXT1632(auVar4._0_16_));
              auVar51 = vpor_avx2(auVar51,auVar50);
              auVar50 = vpor_avx2(auVar41,auVar2);
              auVar39 = vperm2i128_avx2(auVar3,auVar3,0x28);
              auVar41 = vpand_avx2(auVar45,auVar3);
              auVar51 = vpor_avx2(auVar51,auVar50);
              auVar41 = vpor_avx2(auVar41,auVar39);
              auVar41 = vpor_avx2(auVar51,auVar41);
              *(undefined1 (*) [32])(*pauVar11 + uVar22) = auVar41;
              uVar22 = uVar22 + 0x20;
            } while (uVar22 < (ulonglong)(longlong)(int)uVar20);
            auVar44 = ZEXT3264(_DAT_143085ec0);
            auVar47 = ZEXT3264(_DAT_143085ea0);
            auVar46 = ZEXT3264(_DAT_143085e80);
            auVar28 = ZEXT3264(auVar42);
            auVar37 = ZEXT3264(auVar36);
            auVar33 = ZEXT3264(auVar32);
          }
          if (uVar20 + 1 <= uVar14) {
            uVar14 = uVar14 - uVar20;
            if ((int)uVar14 < 8) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar14 & 0xfffffff8;
              uVar18 = 0;
              lVar19 = 0;
              pbVar23 = *pauVar9 + (longlong)(int)uVar20 * 4;
              do {
                uVar18 = uVar18 + 8;
                auVar29 = vpinsrb_avx(ZEXT116(pbVar23[1]),(uint)pbVar23[5],1);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[9],2);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0xd],3);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x11],4);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x15],5);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x19],6);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x1d],7);
                auVar49 = vpinsrb_avx(ZEXT116(*pbVar23),(uint)pbVar23[4],1);
                auVar42 = vpmovzxbd_avx2(auVar29);
                auVar29 = vpinsrb_avx(auVar49,(uint)pbVar23[8],2);
                auVar32 = vpmulld_avx2(auVar38,auVar42);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0xc],3);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x10],4);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x14],5);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x18],6);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x1c],7);
                auVar42 = vpmovzxbd_avx2(auVar29);
                auVar42 = vpmulld_avx2(auVar30,auVar42);
                auVar42 = vpaddd_avx2(auVar42,auVar32);
                auVar29 = vpinsrb_avx(ZEXT116(pbVar23[2]),(uint)pbVar23[6],1);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[10],2);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0xe],3);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x12],4);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x16],5);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x1a],6);
                auVar29 = vpinsrb_avx(auVar29,(uint)pbVar23[0x1e],7);
                pbVar23 = pbVar23 + 0x20;
                auVar32 = vpmovzxbd_avx2(auVar29);
                auVar32 = vpmulld_avx2(auVar26,auVar32);
                auVar42 = vpaddd_avx2(auVar42,auVar32);
                auVar42 = vpaddd_avx2(auVar42,auVar6);
                auVar42 = vpsrad_avx2(auVar42,0xf);
                auVar42 = vpshufb_avx2(auVar42,auVar7);
                auVar32 = vperm2i128_avx2(auVar42,auVar42,0x81);
                auVar42 = vpor_avx2(auVar32,ZEXT1632(auVar42._0_16_));
                *(longlong *)(*pauVar11 + lVar19 + (int)uVar20) = auVar42._0_8_;
                lVar19 = lVar19 + 8;
              } while (uVar18 < uVar15);
            }
            lVar19 = (longlong)(int)uVar15;
            if (uVar15 < uVar14) {
              do {
                iVar13 = uVar15 * 4;
                uVar15 = uVar15 + 1;
                lVar24 = (longlong)(int)(iVar13 + uVar20 * 4);
                (*pauVar11)[lVar19 + (int)uVar20] =
                     (char)((uint)(byte)(*pauVar9)[lVar24] * iVar10 +
                            (uint)(byte)(*pauVar9)[lVar24 + 1] * iVar12 + 0x4000 +
                            (uint)(byte)(*pauVar9)[lVar24 + 2] * iVar8 >> 0xf);
                lVar19 = lVar19 + 1;
              } while (uVar15 < uVar14);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (uVar17 < param_5._4_4_);
  }
  return;
}

