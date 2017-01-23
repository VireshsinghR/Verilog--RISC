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
static const char *ng0 = "F:/Verilog Projects/DSP_Proj/DSP_Proj/Control_Unit.v";
static const char *ng1 = "in reset always block";
static unsigned int ng2[] = {15U, 0U};
static const char *ng3 = "in no reset always block";
static const char *ng4 = "in nx_state";
static const char *ng5 = "in reset";
static int ng6[] = {0, 0};
static int ng7[] = {0, 0, 0, 0};
static unsigned int ng8[] = {0U, 0U};
static const char *ng9 = "I am in !run_write";
static int ng10[] = {1, 0};
static unsigned int ng11[] = {1U, 0U};
static const char *ng12 = "in run_write";
static const char *ng13 = "fetch 1";
static unsigned int ng14[] = {2U, 0U};
static const char *ng15 = "fetch 2";
static unsigned int ng16[] = {13U, 0U};
static const char *ng17 = "fetch 3";
static unsigned int ng18[] = {3U, 0U};
static const char *ng19 = "in decode";
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {128U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {255U, 0U};
static unsigned int ng26[] = {6U, 0U};
static unsigned int ng27[] = {4U, 0U};
static unsigned int ng28[] = {5U, 0U};
static unsigned int ng29[] = {12U, 0U};
static const char *ng30 = " in memory operation";
static unsigned int ng31[] = {33U, 0U};
static const char *ng32 = "working on it. . . .1";
static unsigned int ng33[] = {64U, 0U};
static const char *ng34 = "working on it. . . .2";
static unsigned int ng35[] = {65U, 0U};
static const char *ng36 = "working on it. . . .3";
static unsigned int ng37[] = {66U, 0U};
static const char *ng38 = "working on it. . . .4";
static unsigned int ng39[] = {8U, 0U};



static void Always_54_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 9776);
    *((int *)t2) = 1;
    t3 = (t0 + 9240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3728U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(62, ng0);

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_68_1(char *t0)
{
    char t14[8];
    char t20[16];
    char t23[8];
    char t26[8];
    char t27[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t33[16];
    char t34[8];
    char t35[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    int t28;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t1 = (t0 + 9456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 9792);
    *((int *)t2) = 1;
    t3 = (t0 + 9488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);

LAB32:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 3728U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(92, ng0);

LAB37:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB35:    goto LAB31;

LAB9:    xsi_set_current_line(96, ng0);

LAB38:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3408U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t3) == 0)
        goto LAB39;

LAB41:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;

LAB42:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB45:    goto LAB31;

LAB11:    xsi_set_current_line(111, ng0);

LAB51:    xsi_set_current_line(111, ng0);
    t3 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB31;

LAB13:    xsi_set_current_line(117, ng0);

LAB52:    xsi_set_current_line(117, ng0);
    t3 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(123, ng0);

LAB53:    xsi_set_current_line(123, ng0);
    t3 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB31;

LAB17:    xsi_set_current_line(128, ng0);

LAB54:    xsi_set_current_line(128, ng0);
    t3 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);

LAB55:    t8 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 8, t8, 8);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 8, t2, 8);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 8, t2, 8);
    if (t6 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 8, t2, 8);
    if (t6 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 8, t2, 8);
    if (t6 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB31;

LAB19:    xsi_set_current_line(138, ng0);

LAB67:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 5568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 24);
    *((unsigned int *)t23) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t13 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t8 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t8, t23, 0, 0, 8, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 13);
    *((unsigned int *)t23) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 13);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB68:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t8, 3);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t23, 3, t2, 3);
    if (t6 == 1)
        goto LAB83;

LAB84:
LAB85:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 10);
    *((unsigned int *)t26) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB86:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t8, 3);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 3, t2, 3);
    if (t6 == 1)
        goto LAB101;

LAB102:
LAB103:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(165, ng0);

LAB104:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    memset(t27, 0, 8);
    t3 = (t27 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 7);
    *((unsigned int *)t27) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 7);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t13 & 7U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 7U);

LAB105:    t21 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t21, 3);
    if (t28 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t6 == 1)
        goto LAB120;

LAB121:
LAB122:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB23:    xsi_set_current_line(182, ng0);

LAB123:    xsi_set_current_line(182, ng0);
    t3 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 24);
    *((unsigned int *)t29) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t13 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);

LAB124:    t8 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t29, 8, t8, 8);
    if (t6 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t29, 8, t2, 8);
    if (t6 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t29, 8, t2, 8);
    if (t6 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t29, 8, t2, 8);
    if (t6 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t29, 8, t2, 4);
    if (t6 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB31;

LAB25:    xsi_set_current_line(275, ng0);

LAB231:    xsi_set_current_line(280, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(283, ng0);

LAB232:    xsi_set_current_line(283, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(284, ng0);

LAB233:    xsi_set_current_line(284, ng0);
    t3 = (t0 + 3408U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t37 = (~(t19));
    t38 = (t16 & t37);
    if (t38 != 0)
        goto LAB237;

LAB234:    if (t19 != 0)
        goto LAB236;

LAB235:    *((unsigned int *)t36) = 1;

LAB237:    t22 = (t36 + 4);
    t39 = *((unsigned int *)t22);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB238;

LAB239:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    memset(t36, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB244;

LAB242:    if (*((unsigned int *)t2) == 0)
        goto LAB241;

LAB243:    t5 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t5) = 1;

LAB244:    t7 = (t36 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t36);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB245;

LAB246:
LAB247:
LAB240:    goto LAB31;

LAB33:    xsi_set_current_line(75, ng0);

LAB36:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB35;

LAB39:    *((unsigned int *)t14) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(98, ng0);

LAB46:    xsi_set_current_line(99, ng0);
    t21 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t20, 64);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB45;

LAB47:    xsi_set_current_line(106, ng0);

LAB50:    xsi_set_current_line(107, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t20, 64);
    goto LAB49;

LAB56:    xsi_set_current_line(130, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    goto LAB66;

LAB58:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB66;

LAB60:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB66;

LAB62:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB66;

LAB64:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB66;

LAB69:    xsi_set_current_line(142, ng0);
    t21 = (t0 + 6688);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 64, 0LL);
    goto LAB85;

LAB71:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 6848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB73:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 7008);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB75:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 7168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB77:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 7328);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB79:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 7488);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB81:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 7648);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB83:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 7808);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB85;

LAB87:    xsi_set_current_line(153, ng0);
    t21 = (t0 + 6688);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 64, 0LL);
    goto LAB103;

LAB89:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 6848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB91:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 7008);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB93:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 7168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB95:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 7328);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB97:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 7488);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB99:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 7648);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB101:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 7808);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB103;

LAB106:    xsi_set_current_line(167, ng0);
    t22 = (t0 + 3888U);
    t24 = *((char **)t22);
    t22 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t22, t24, 0, 0, 64, 0LL);
    goto LAB122;

LAB108:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB110:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB112:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB114:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB116:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB118:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB120:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 3888U);
    t5 = *((char **)t3);
    t3 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB122;

LAB125:    xsi_set_current_line(184, ng0);

LAB136:    xsi_set_current_line(185, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB137:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t8, 3);
    if (t6 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB140;

LAB141:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB144;

LAB145:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB146;

LAB147:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB148;

LAB149:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB150;

LAB151:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t6 == 1)
        goto LAB152;

LAB153:
LAB154:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB135;

LAB127:    xsi_set_current_line(203, ng0);

LAB155:    xsi_set_current_line(204, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 13);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 13);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB156:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t8, 3);
    if (t6 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB161;

LAB162:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB163;

LAB164:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB165;

LAB166:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB167;

LAB168:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB169;

LAB170:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t6 == 1)
        goto LAB171;

LAB172:
LAB173:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB135;

LAB129:    xsi_set_current_line(223, ng0);

LAB174:    xsi_set_current_line(224, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 13);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 13);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB175:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t8, 3);
    if (t6 == 1)
        goto LAB176;

LAB177:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB178;

LAB179:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB180;

LAB181:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB182;

LAB183:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB184;

LAB185:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB186;

LAB187:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB188;

LAB189:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t6 == 1)
        goto LAB190;

LAB191:
LAB192:    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB135;

LAB131:    xsi_set_current_line(240, ng0);

LAB193:    xsi_set_current_line(241, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t34, 0, 8);
    t2 = (t34 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 10);
    *((unsigned int *)t34) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB194:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t8, 3);
    if (t6 == 1)
        goto LAB195;

LAB196:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB197;

LAB198:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB199;

LAB200:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB201;

LAB202:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB203;

LAB204:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB205;

LAB206:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB207;

LAB208:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t34, 3, t2, 3);
    if (t6 == 1)
        goto LAB209;

LAB210:
LAB211:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 13);
    *((unsigned int *)t35) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 13);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t13 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);

LAB212:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t8, 3);
    if (t6 == 1)
        goto LAB213;

LAB214:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB215;

LAB216:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB217;

LAB218:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB219;

LAB220:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB221;

LAB222:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB223;

LAB224:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB225;

LAB226:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t35, 3, t2, 3);
    if (t6 == 1)
        goto LAB227;

LAB228:
LAB229:    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB135;

LAB133:    xsi_set_current_line(269, ng0);

LAB230:    xsi_set_current_line(269, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB135;

LAB138:    xsi_set_current_line(190, ng0);
    t21 = (t0 + 6688);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 64, 0LL);
    goto LAB154;

LAB140:    xsi_set_current_line(191, ng0);
    t3 = (t0 + 6848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB142:    xsi_set_current_line(192, ng0);
    t3 = (t0 + 7008);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB144:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 7168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB146:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 7328);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB148:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 7488);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB150:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 7648);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB152:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 7808);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB154;

LAB157:    xsi_set_current_line(209, ng0);
    t21 = (t0 + 3088U);
    t22 = *((char **)t21);
    t21 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 64, 0LL);
    goto LAB173;

LAB159:    xsi_set_current_line(210, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB161:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB163:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB165:    xsi_set_current_line(213, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB167:    xsi_set_current_line(214, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB169:    xsi_set_current_line(215, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB171:    xsi_set_current_line(216, ng0);
    t3 = (t0 + 3088U);
    t5 = *((char **)t3);
    t3 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 64, 0LL);
    goto LAB173;

LAB176:    xsi_set_current_line(228, ng0);
    t21 = (t0 + 3248U);
    t22 = *((char **)t21);
    xsi_vlog_get_part_select_value(t33, 45, t22, 44, 0);
    t21 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t21, 19, t33, 45);
    t24 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t24, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB178:    xsi_set_current_line(229, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB180:    xsi_set_current_line(230, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB182:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB184:    xsi_set_current_line(232, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB186:    xsi_set_current_line(233, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB188:    xsi_set_current_line(234, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB190:    xsi_set_current_line(235, ng0);
    t3 = (t0 + 3248U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 45, t5, 44, 0);
    t3 = ((char*)((ng8)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t3, 19, t33, 45);
    t7 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 64, 0LL);
    goto LAB192;

LAB195:    xsi_set_current_line(245, ng0);
    t21 = (t0 + 6688);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 64, 0LL);
    goto LAB211;

LAB197:    xsi_set_current_line(246, ng0);
    t3 = (t0 + 6848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB199:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 7008);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB201:    xsi_set_current_line(248, ng0);
    t3 = (t0 + 7168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB203:    xsi_set_current_line(249, ng0);
    t3 = (t0 + 7328);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB205:    xsi_set_current_line(250, ng0);
    t3 = (t0 + 7488);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB207:    xsi_set_current_line(251, ng0);
    t3 = (t0 + 7648);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB209:    xsi_set_current_line(252, ng0);
    t3 = (t0 + 7808);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB211;

LAB213:    xsi_set_current_line(255, ng0);
    t21 = (t0 + 7968);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 64, 0LL);
    goto LAB229;

LAB215:    xsi_set_current_line(256, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 6848);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB217:    xsi_set_current_line(257, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB219:    xsi_set_current_line(258, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB221:    xsi_set_current_line(259, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB223:    xsi_set_current_line(260, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB225:    xsi_set_current_line(261, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB227:    xsi_set_current_line(262, ng0);
    t3 = (t0 + 7968);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB229;

LAB236:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB237;

LAB238:    xsi_set_current_line(284, ng0);
    t24 = ((char*)((ng26)));
    t25 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 4, 0LL);
    goto LAB240;

LAB241:    *((unsigned int *)t36) = 1;
    goto LAB244;

LAB245:    xsi_set_current_line(286, ng0);
    t8 = ((char*)((ng8)));
    t21 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB247;

}


extern void work_m_00000000002940232339_3901337038_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)Always_68_1};
	xsi_register_didat("work_m_00000000002940232339_3901337038", "isim/TEST_TOP_tb_isim_beh.exe.sim/work/m_00000000002940232339_3901337038.didat");
	xsi_register_executes(pe);
}
