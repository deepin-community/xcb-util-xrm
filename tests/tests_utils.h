/*
 * vim:ts=4:sw=4:expandtab
 *
 * Copyright © 2016 Ingo Bürk
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the names of the authors or their
 * institutions shall not be used in advertising or otherwise to promote the
 * sale, use or other dealings in this Software without prior written
 * authorization from the authors.
 *
 */
#ifndef __TESTS_UTILS_H__
#define __TESTS_UTILS_H__

#include "xcb_xrm.h"

#if defined(__GNUC__) && ((__GNUC__ * 100 + __GNUC_MINOR__) >= 203)
#define ATTRIBUTE_PRINTF(x,y) __attribute__((__format__(__printf__,x,y)))
#else
#define ATTRIBUTE_PRINTF(x,y)
#endif

#define SKIP 77

bool check_strings(const char *expected, const char *actual, const char *format, ...) ATTRIBUTE_PRINTF(3, 4);

bool check_ints(const int expected, const int actual, const char *format, ...) ATTRIBUTE_PRINTF(3, 4);

bool check_longs(const long expected, const long actual, const char *format, ...) ATTRIBUTE_PRINTF(3, 4);

int check_database(xcb_xrm_database_t *database, const char *expected);

#endif /* __TESTS_UTILS_H__ */
