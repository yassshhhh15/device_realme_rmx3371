/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t RMX3371_IN_info = {
    .prjversion_value = "21732",

    .device = "RE54E4L1",
    .model = "RMX3371",
    .name = "RMX3371",
};

static const std::vector<variant_info_t> variants = {
    RMX3371_IN_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
