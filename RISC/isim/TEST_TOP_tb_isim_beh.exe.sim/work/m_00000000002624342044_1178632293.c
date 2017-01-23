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
static const char *ng0 = "F:/Verilog Projects/DSP_Proj/DSP_Proj/MEMORY.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static int ng3[] = {0, 0};



static void Always_11_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t43[8];
    char t68[16];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
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

LAB11:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB16:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 64, 0LL);
    goto LAB12;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(16, ng0);

LAB20:    xsi_set_current_line(17, ng0);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t21 = (t8 + 4);
    t22 = (t7 + 4);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    t23 = (t19 ^ t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t31 = *((unsigned int *)t21);
    t32 = *((unsigned int *)t22);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t27 & t34);
    if (t35 != 0)
        goto LAB24;

LAB21:    if (t33 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t30) = 1;

LAB24:    t29 = (t30 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB27:    goto LAB19;

LAB23:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(18, ng0);

LAB28:    xsi_set_current_line(19, ng0);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng1)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t41 + 4);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t41);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB32;

LAB29:    if (t55 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t43) = 1;

LAB32:    t59 = (t43 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t6) = 1;

LAB40:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB35:    goto LAB27;

LAB31:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(20, ng0);

LAB36:    xsi_set_current_line(21, ng0);
    t65 = (t0 + 2408);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t69 = (t0 + 2408);
    t70 = (t69 + 72U);
    t71 = *((char **)t70);
    t72 = (t0 + 2408);
    t73 = (t72 + 64U);
    t74 = *((char **)t73);
    t75 = (t0 + 1848U);
    t76 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t68, 64, t67, t71, t74, 2, 1, t76, 6, 2);
    t75 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t75, t68, 0, 0, 64, 0LL);
    goto LAB35;

LAB39:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(24, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 2408);
    t28 = (t0 + 2408);
    t29 = (t28 + 72U);
    t41 = *((char **)t29);
    t42 = (t0 + 2408);
    t44 = (t42 + 64U);
    t45 = *((char **)t44);
    t58 = (t0 + 1848U);
    t59 = *((char **)t58);
    xsi_vlog_generic_convert_array_indices(t30, t43, t41, t45, 2, 1, t59, 6, 2);
    t58 = (t30 + 4);
    t31 = *((unsigned int *)t58);
    t77 = (!(t31));
    t65 = (t43 + 4);
    t32 = *((unsigned int *)t65);
    t78 = (!(t32));
    t79 = (t77 && t78);
    if (t79 == 1)
        goto LAB44;

LAB45:    goto LAB43;

LAB44:    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t43);
    t80 = (t33 - t34);
    t81 = (t80 + 1);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, *((unsigned int *)t43), t81, 0LL);
    goto LAB45;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(26, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 64, 0LL);
    goto LAB52;

}


extern void work_m_00000000002624342044_1178632293_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000002624342044_1178632293", "isim/TEST_TOP_tb_isim_beh.exe.sim/work/m_00000000002624342044_1178632293.didat");
	xsi_register_executes(pe);
}
