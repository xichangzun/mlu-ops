/*************************************************************************
 * Copyright (C) [2022] by Cambricon, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *************************************************************************/
#ifndef KERNELS_ABS_ABS_H
#define KERNELS_ABS_ABS_H

#include "mlu_op.h"

void MLUOP_WIN_API Kernel3StagePipelineAbs(cnrtDim3_t k_dim,
                                           cnrtFunctionType_t k_type,
                                           cnrtQueue_t queue,
                                           mluOpDataType_t d_type,
                                           const void *x, void *y, int num);

void MLUOP_WIN_API Kernel5StagePipelineAbs(cnrtDim3_t k_dim,
                                           cnrtFunctionType_t k_type,
                                           cnrtQueue_t queue,
                                           mluOpDataType_t d_type,
                                           const void *x, void *y, int num);

#endif  // KERNELS_ABS_ABS_H
