/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Users/toro0/Spring 2021/CDA 4203/Xilinx files/Lab3/prog_counter.v";
static int ng1[] = {1, 0};
static int ng2[] = {100, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t24[8];
    char t28[8];
    char t69[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB11;

LAB10:    t26 = (t22 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t23) < *((unsigned int *)t22))
        goto LAB12;

LAB13:    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t24);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t6 + 4);
    t33 = (t24 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB15;

LAB16:
LAB17:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB11:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB15:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t6 + 4);
    t43 = (t24 + 4);
    t44 = *((unsigned int *)t6);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t24);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB17;

LAB18:    xsi_set_current_line(27, ng0);

LAB21:    xsi_set_current_line(28, ng0);
    t66 = (t0 + 1528U);
    t67 = *((char **)t66);
    t66 = (t0 + 1048U);
    t68 = *((char **)t66);
    t66 = ((char*)((ng1)));
    memset(t69, 0, 8);
    xsi_vlog_unsigned_add(t69, 32, t68, 7, t66, 32);
    memset(t70, 0, 8);
    t71 = (t67 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB23;

LAB22:    t72 = (t69 + 4);
    if (*((unsigned int *)t72) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t67) < *((unsigned int *)t69))
        goto LAB24;

LAB25:    t74 = (t70 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB20;

LAB23:    t73 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t70) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(28, ng0);

LAB30:    xsi_set_current_line(29, ng0);
    t80 = (t0 + 1528U);
    t81 = *((char **)t80);
    t80 = (t0 + 1928);
    xsi_vlogvar_assign_value(t80, t81, 0, 0, 7);
    goto LAB29;

}


extern void work_m_00000000003609019293_1823954397_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003609019293_1823954397", "isim/prog_count_7_isim_beh.exe.sim/work/m_00000000003609019293_1823954397.didat");
	xsi_register_executes(pe);
}
