
undefined8 FUN_140004860(byte *param_1,int param_2,byte *param_3,int param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  if ((param_1 == (byte *)0x0) || (param_3 == (byte *)0x0)) {
    return 0xfffffff8;
  }
  if ((0 < (int)(uint)param_5) && (0 < (int)param_5._4_4_)) {
    uVar10 = 0;
    uVar8 = (uint)param_5 & 0xfffffffe;
    uVar16 = (ulonglong)(uVar8 + 1 >> 1);
    iVar6 = (int)((1 - ((int)(uVar8 + 1) >> 0x1f)) + uVar8) >> 1;
    do {
      iVar7 = 0;
      pbVar9 = param_3;
      pbVar11 = param_1;
      if (0 < (int)uVar8) {
        lVar12 = (longlong)iVar6;
        if (((longlong)param_3 - (longlong)param_1 < lVar12 * 6) &&
           (-((longlong)param_3 - (longlong)param_1) < lVar12 * 4)) {
          if ((param_1 + lVar12 * 6 + -1 < param_3) || (param_3 + lVar12 * 4 + -1 < param_1)) {
            uVar13 = 0;
            do {
              uVar13 = uVar13 + 1;
              pbVar9[2] = (byte)((uint)pbVar11[3] * 0x41cb + (uint)pbVar11[4] * 0x8106 + 0x100000 +
                                 (uint)pbVar11[5] * 0x1917 >> 0x10);
              bVar3 = *pbVar11;
              bVar4 = pbVar11[1];
              bVar5 = pbVar11[2];
              *pbVar9 = (byte)((uint)bVar3 * 0x41cb + (uint)bVar4 * 0x8106 + 0x108000 +
                               (uint)bVar5 * 0x1917 >> 0x10);
              iVar15 = (uint)bVar3 + (uint)pbVar11[3];
              iVar7 = (uint)bVar4 + (uint)pbVar11[4];
              iVar14 = (uint)bVar5 + (uint)pbVar11[5];
              pbVar11 = pbVar11 + 6;
              pbVar9[3] = (byte)((uint)(iVar15 * -0x25e3 + iVar7 * -0x4a7f + -0xff0000 +
                                       iVar14 * 0x7062) >> 0x11);
              pbVar9[1] = (byte)((uint)(iVar15 * 0x7062 + iVar7 * -0x5e35 + -0xff0000 +
                                       iVar14 * -0x122d) >> 0x11);
              pbVar9 = pbVar9 + 4;
            } while (uVar13 < uVar16);
            pbVar9 = param_3 + uVar13 * 4;
            pbVar11 = param_1 + uVar13 * 6;
            iVar7 = (int)uVar13 * 2;
          }
          else {
            uVar13 = 0;
            pbVar9 = param_1;
            pbVar11 = param_3;
            do {
              bVar3 = *pbVar9;
              uVar13 = uVar13 + 1;
              bVar4 = pbVar9[1];
              bVar5 = pbVar9[2];
              *pbVar11 = (byte)((uint)bVar3 * 0x41cb + (uint)bVar4 * 0x8106 + 0x108000 +
                                (uint)bVar5 * 0x1917 >> 0x10);
              pbVar11[2] = (byte)((uint)pbVar9[3] * 0x41cb + (uint)pbVar9[4] * 0x8106 + 0x100000 +
                                  (uint)pbVar9[5] * 0x1917 >> 0x10);
              iVar7 = (uint)bVar3 + (uint)pbVar9[3];
              iVar14 = (uint)bVar4 + (uint)pbVar9[4];
              iVar15 = (uint)bVar5 + (uint)pbVar9[5];
              pbVar9 = pbVar9 + 6;
              pbVar11[3] = (byte)((uint)(iVar7 * -0x25e3 + iVar14 * -0x4a7f + -0xff0000 +
                                        iVar15 * 0x7062) >> 0x11);
              pbVar11[1] = (byte)((uint)(iVar7 * 0x7062 + iVar14 * -0x5e35 + -0xff0000 +
                                        iVar15 * -0x122d) >> 0x11);
              pbVar11 = pbVar11 + 4;
            } while (uVar13 < uVar16);
            pbVar9 = param_3 + uVar13 * 4;
            pbVar11 = param_1 + uVar13 * 6;
            iVar7 = (int)uVar13 * 2;
          }
        }
        else {
          uVar13 = 0;
          pbVar9 = param_1;
          pbVar11 = param_3;
          do {
            uVar13 = uVar13 + 1;
            bVar3 = pbVar9[4];
            bVar4 = pbVar9[5];
            bVar5 = *pbVar9;
            iVar7 = (uint)pbVar9[3] + (uint)bVar5;
            pbVar11[2] = (byte)((uint)pbVar9[3] * 0x41cb + (uint)bVar3 * 0x8106 + 0x100000 +
                                (uint)bVar4 * 0x1917 >> 0x10);
            pbVar1 = pbVar9 + 1;
            iVar14 = (uint)bVar3 + (uint)*pbVar1;
            pbVar2 = pbVar9 + 2;
            iVar15 = (uint)bVar4 + (uint)*pbVar2;
            pbVar9 = pbVar9 + 6;
            *pbVar11 = (byte)((uint)bVar5 * 0x41cb + (uint)*pbVar1 * 0x8106 + 0x108000 +
                              (uint)*pbVar2 * 0x1917 >> 0x10);
            pbVar11[3] = (byte)((uint)(iVar7 * -0x25e3 + iVar14 * -0x4a7f + -0xff0000 +
                                      iVar15 * 0x7062) >> 0x11);
            pbVar11[1] = (byte)((uint)(iVar7 * 0x7062 + iVar14 * -0x5e35 + -0xff0000 +
                                      iVar15 * -0x122d) >> 0x11);
            pbVar11 = pbVar11 + 4;
          } while (uVar13 < uVar16);
          pbVar9 = param_3 + uVar13 * 4;
          pbVar11 = param_1 + (longlong)(iVar6 + 1) * 6 + -6;
          iVar7 = (int)uVar13 * 2;
        }
      }
      if (iVar7 < (int)(uint)param_5) {
        bVar3 = *pbVar11;
        bVar4 = pbVar11[1];
        bVar5 = pbVar11[2];
        *pbVar9 = (byte)((uint)bVar3 * 0x41cb + (uint)bVar4 * 0x8106 + 0x108000 +
                         (uint)bVar5 * 0x1917 >> 0x10);
        pbVar9[1] = (byte)((uint)bVar3 * -0x25e3 + (uint)bVar4 * -0x4a7f + -0x7f8000 +
                           (uint)bVar5 * 0x7062 >> 0x10);
      }
      uVar10 = uVar10 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (uVar10 < param_5._4_4_);
    return 0;
  }
  return 0xfffffffa;
}

