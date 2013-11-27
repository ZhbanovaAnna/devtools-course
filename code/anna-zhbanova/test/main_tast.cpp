/* Copyright 2013 Anna Zhbanova */

#if defined(__GNUC__) || defined(__clang__)
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Weffc++"
#endif
#if defined(__clang__)
    #pragma GCC diagnostic ignored "-Wglobal-constructors"
    #pragma GCC diagnostic ignored "-Wpadded"
    #pragma GCC diagnostic ignored "-Wweak-vtables"
#elif defined(__GNUC__)
    #pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
#endif

#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// NOTE: we include tests, so noisy warnings disabling from above
// shouldn't be duplicated in the files below
#include "Application_test.h"

#if defined(__GNUC__) || defined(__clang__)
    #pragma GCC diagnostic pop
#endif