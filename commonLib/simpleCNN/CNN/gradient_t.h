/*
 * Copyright (c) 2020 Georgios Damaskinos
 * All rights reserved.
 * @author Georgios Damaskinos <georgios.damaskinos@gmail.com>
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */


#pragma once


struct gradient_t {
    float grad;
    float oldgrad;

    gradient_t() {
        grad = 0;
        oldgrad = 0;
    }
};
