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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {100, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t67[8];
    char t68[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

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

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB19;

LAB18:    t28 = (t8 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t21) < *((unsigned int *)t8))
        goto LAB20;

LAB21:    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t30);
    t25 = (t23 & t24);
    *((unsigned int *)t31) = t25;
    t32 = (t6 + 4);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t33);
    t35 = (t26 | t27);
    *((unsigned int *)t34) = t35;
    t36 = *((unsigned int *)t34);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB23;

LAB24:
LAB25:    t58 = (t31 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);

LAB13:    xsi_set_current_line(28, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 7);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB19:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB23:    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t31) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t30 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t30);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t56 & t52);
    t57 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t57 & t53);
    goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);

LAB29:    xsi_set_current_line(32, ng0);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    t64 = (t0 + 1048U);
    t66 = *((char **)t64);
    t64 = ((char*)((ng2)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t66, 7, t64, 32);
    memset(t68, 0, 8);
    t69 = (t65 + 4);
    if (*((unsigned int *)t69) != 0)
        goto LAB31;

LAB30:    t70 = (t67 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t65) < *((unsigned int *)t67))
        goto LAB32;

LAB33:    t72 = (t68 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB28;

LAB31:    t71 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t68) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(32, ng0);

LAB38:    xsi_set_current_line(33, ng0);
    t78 = (t0 + 1528U);
    t79 = *((char **)t78);
    t78 = (t0 + 1928);
    xsi_vlogvar_assign_value(t78, t79, 0, 0, 7);
    goto LAB37;

}


extern void work_m_00000000003609019293_1823954397_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003609019293_1823954397", "isim/bcd_count_tb_example_isim_beh.exe.sim/work/m_00000000003609019293_1823954397.didat");
	xsi_register_executes(pe);
}
