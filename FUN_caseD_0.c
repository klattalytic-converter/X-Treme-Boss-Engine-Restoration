void switchD_060098a4::caseD_0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r14;
  int unaff_gbr;
  
  if (unaff_r14 <= (uint)(int)*(short *)(unaff_gbr + 0x70)) {
                    /* WARNING: Could not recover jumptable at 0x0600a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_r9[1])(*(short *)(param_4 + 2) * 0x10 + unaff_r10,param_2,param_3,param_4 + 4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0600a582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_r9)();
  return;
}

