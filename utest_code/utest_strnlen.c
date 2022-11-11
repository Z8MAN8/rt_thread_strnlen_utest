/*
 * Copyright (c) 2006-2019, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-11-11     csc          the first version
 */

#include <rtthread.h>
#include "utest.h"


static void test_strnlen_all_num(void)
{
    char *a="1234567";
    char *b="123456789";

    uassert_not_null(rt_strnlen(a, 8));
    uassert_not_null(rt_strnlen(b, 8));
    uassert_int_equal(rt_strnlen(a, 8),7);
    uassert_int_equal(rt_strnlen(b, 8),8);
}

static void test_strnlen_all_alphabet(void)
{
    char *a="abcdefg";
    char *b="abcdefghi";

    uassert_not_null(rt_strnlen(a, 8));
    uassert_not_null(rt_strnlen(b, 8));
    uassert_int_equal(rt_strnlen(a, 8),7);
    uassert_int_equal(rt_strnlen(b, 8),8);
}

static void test_strnlen_mix(void)
{
    char *a="1234ab,";
    char *b="1234abcd,.";

    uassert_not_null(rt_strnlen(a, 8));
    uassert_not_null(rt_strnlen(b, 8));
    uassert_int_equal(rt_strnlen(a, 8),7);
    uassert_int_equal(rt_strnlen(b, 8),8);
}

static rt_err_t utest_tc_init(void)
{
    return RT_EOK;
}

static rt_err_t utest_tc_cleanup(void)
{
    return RT_EOK;
}

static void testcase(void)
{
    UTEST_UNIT_RUN(test_strnlen_all_num);
    UTEST_UNIT_RUN(test_strnlen_all_alphabet);
    UTEST_UNIT_RUN(test_strnlen_mix);
}
UTEST_TC_EXPORT(testcase, "components.utilities.utest.sample.sample_tc", utest_tc_init, utest_tc_cleanup, 10);
