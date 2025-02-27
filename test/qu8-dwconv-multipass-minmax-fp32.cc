// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qu8-dwconv-multipass-minmax-fp32.yaml
//   Generator: tools/generate-dwconv-multipass-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/dwconv.h>
#include "dwconv-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEON_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neon_mul16, xnn_init_qu8_conv_minmax_fp32_neon_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_ARM_NEON_V8;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_div_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_div_32_with_qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_div_32_with_qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_gt_32_multipass) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_ARM_NEON_V8;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, multipixel_with_step) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__NEONV8_MUL16, input_offset) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__neonv8_mul16, xnn_init_qu8_conv_minmax_fp32_neonv8_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE2;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE2;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE2_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse2_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__SSE41_MUL16, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__sse41_mul16, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_SSE41;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_SSE41;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__SSE41_MUL32, input_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__sse41_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__AVX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__avx_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(4)
      .channel_round(4)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_XOP;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(4)
        .channel_round(4)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_XOP;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(4)
            .channel_round(4)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_XOP;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C4S4R__XOP_MUL32, input_offset) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(4)
          .channel_round(4)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c4s4r__xop_mul32, xnn_init_qu8_conv_minmax_fp32_sse2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L8C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(6)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(10)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L8C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(7)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(13)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(8)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(8)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(8)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_div_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_div_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_div_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_div_8_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_div_8_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_gt_8_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_gt_8_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 9; channels < 16; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(8)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, c_eq_8_multipass_multipixel) {
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(8)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 40; channels += 7) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(43)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L8C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 16; channels < 128; channels += 24) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(8)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(176)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l8c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(9)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(8)
      .channel_round(8)
      .kernel_size(17)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX2;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(8)
        .channel_round(8)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX2;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(32)
            .channel_subtile(8)
            .channel_round(8)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C8S8R__AVX2_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(8)
          .channel_round(8)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c8s8r__avx2_mul32, xnn_init_qu8_conv_minmax_fp32_avx2_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(6)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(10)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(16)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L16C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(6)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(5)
      .middle_pass_tile(5)
      .last_pass_tile(5)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(10)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(6)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(5)
        .middle_pass_tile(5)
        .last_pass_tile(5)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(10)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        for (size_t step = 2; step <= 5; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(5)
            .middle_pass_tile(5)
            .last_pass_tile(5)
            .channel_tile(32)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_5F5M5L32C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 15; kernel_size < 20; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(5)
          .middle_pass_tile(5)
          .last_pass_tile(5)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(7)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(13)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(16)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L16C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(7)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(6)
      .middle_pass_tile(6)
      .last_pass_tile(7)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(13)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(7)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(6)
        .middle_pass_tile(6)
        .last_pass_tile(7)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(13)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        for (size_t step = 2; step <= 6; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(6)
            .middle_pass_tile(6)
            .last_pass_tile(7)
            .channel_tile(32)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_6F6M7L32C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 19; kernel_size < 25; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(6)
          .middle_pass_tile(6)
          .last_pass_tile(7)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_6f6m7l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(9)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(16)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(17)
      .channels(16)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(16)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_div_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_div_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_div_16_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_gt_16_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_gt_16_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 17; channels < 32; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(16)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, c_eq_16_multipass_multipixel) {
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(16)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 80; channels += 15) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(83)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L16C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 32; channels < 256; channels += 48) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(16)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(304)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l16c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(9)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    DWConvMicrokernelTester()
      .first_pass_tile(8)
      .middle_pass_tile(8)
      .last_pass_tile(9)
      .channel_tile(32)
      .channel_subtile(16)
      .channel_round(1)
      .kernel_size(17)
      .channels(32)
      .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass) {
    for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
      TEST_REQUIRES_X86_AVX512SKX;
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(kernel_size)
        .channels(32)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_div_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_div_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .qmin(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_div_32_with_qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .qmax(128)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_plus_one) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_gt_32_first_pass_and_last_pass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_gt_32_multipass) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 33; channels < 64; channels++) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_plus_one_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(9)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_first_pass_and_last_pass_multipixel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      DWConvMicrokernelTester()
        .first_pass_tile(8)
        .middle_pass_tile(8)
        .last_pass_tile(9)
        .channel_tile(32)
        .channel_subtile(16)
        .channel_round(1)
        .kernel_size(17)
        .channels(channels)
        .width(3)
        .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, c_eq_32_multipass_multipixel) {
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        TEST_REQUIRES_X86_AVX512SKX;
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(3)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, multipixel_with_step) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        for (size_t step = 2; step <= 8; step++) {
          DWConvMicrokernelTester()
            .first_pass_tile(8)
            .middle_pass_tile(8)
            .last_pass_tile(9)
            .channel_tile(32)
            .channel_subtile(16)
            .channel_round(1)
            .kernel_size(kernel_size)
            .channels(channels)
            .width(3)
            .step(step)
            .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
        }
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, multipixel_with_output_stride) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t channels = 1; channels <= 160; channels += 31) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .width(5)
          .output_stride(163)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }

  TEST(QU8_DWCONV_MINMAX_FP32_8F8M9L32C16S1R__AVX512SKX_MUL32, input_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t channels = 64; channels < 512; channels += 96) {
      for (uint32_t kernel_size = 25; kernel_size < 33; kernel_size++) {
        DWConvMicrokernelTester()
          .first_pass_tile(8)
          .middle_pass_tile(8)
          .last_pass_tile(9)
          .channel_tile(32)
          .channel_subtile(16)
          .channel_round(1)
          .kernel_size(kernel_size)
          .channels(channels)
          .input_offset(592)
          .Test(xnn_qu8_dwconv_minmax_fp32_ukernel_8f8m9l32c16s1r__avx512skx_mul32, xnn_init_qu8_conv_minmax_fp32_avx512_params, xnn_qu8_requantize_fp32);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64
