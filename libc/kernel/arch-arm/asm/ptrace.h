/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __ASM_ARM_PTRACE_H
#define __ASM_ARM_PTRACE_H
#define PTRACE_GETREGS 12
#define PTRACE_SETREGS 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_GETFPREGS 14
#define PTRACE_SETFPREGS 15
#define PTRACE_GETWMMXREGS 18
#define PTRACE_SETWMMXREGS 19
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_OLDSETOPTIONS 21
#define PTRACE_GET_THREAD_AREA 22
#define PTRACE_SET_SYSCALL 23
#define PTRACE_GETCRUNCHREGS 25
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_SETCRUNCHREGS 26
#define PTRACE_GETVFPREGS 27
#define PTRACE_SETVFPREGS 28
#define USR26_MODE 0x00000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIQ26_MODE 0x00000001
#define IRQ26_MODE 0x00000002
#define SVC26_MODE 0x00000003
#define USR_MODE 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIQ_MODE 0x00000011
#define IRQ_MODE 0x00000012
#define SVC_MODE 0x00000013
#define ABT_MODE 0x00000017
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UND_MODE 0x0000001b
#define SYSTEM_MODE 0x0000001f
#define MODE32_BIT 0x00000010
#define MODE_MASK 0x0000001f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSR_T_BIT 0x00000020
#define PSR_F_BIT 0x00000040
#define PSR_I_BIT 0x00000080
#define PSR_J_BIT 0x01000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSR_Q_BIT 0x08000000
#define PSR_V_BIT 0x10000000
#define PSR_C_BIT 0x20000000
#define PSR_Z_BIT 0x40000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSR_N_BIT 0x80000000
#define PCMASK 0
#define PSR_f 0xff000000  
#define PSR_s 0x00ff0000  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSR_x 0x0000ff00  
#define PSR_c 0x000000ff  
#ifndef __ASSEMBLY__
struct pt_regs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long uregs[18];
};
#define ARM_cpsr uregs[16]
#define ARM_pc uregs[15]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_lr uregs[14]
#define ARM_sp uregs[13]
#define ARM_ip uregs[12]
#define ARM_fp uregs[11]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_r10 uregs[10]
#define ARM_r9 uregs[9]
#define ARM_r8 uregs[8]
#define ARM_r7 uregs[7]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_r6 uregs[6]
#define ARM_r5 uregs[5]
#define ARM_r4 uregs[4]
#define ARM_r3 uregs[3]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_r2 uregs[2]
#define ARM_r1 uregs[1]
#define ARM_r0 uregs[0]
#define ARM_ORIG_r0 uregs[17]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pc_pointer(v)   ((v) & ~PCMASK)
#define instruction_pointer(regs)   (pc_pointer((regs)->ARM_pc))
#define profile_pc(regs) instruction_pointer(regs)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
