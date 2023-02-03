#include "gmock/gmock.h"
#include "gtest/gtest.h"


int main(int argc, char *argv[])
{
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    ::testing::InitGoogleMock(&argc, argv);
    RUN_ALL_TESTS();
    system("pause");
    return 0;
}
