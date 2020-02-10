/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* hello world example: calling functions from a static library */


#include <stdio.h>
#include <zephyr.h>
#include <arch/cpu.h>
#include <sys/printk.h>

//#include <zmq.hpp>
#include <zmq.h>

void main(void)
{
    void *context = zmq_ctx_new ();
//    zmq::context_t context(1);
	printk("Hello World!\n");
}
