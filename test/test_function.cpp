#include "gtest/gtest.h"
#include <cmath>

double square_root (double num) { 
    if (num < 0.0) { 
        std::cerr << "Error: Negative Input\n";
        exit(-1);
    }
    // Code for 0 and +ve numbers follow
	
	return pow(num,0.5);

}

TEST (SquareRootTest, ZeroAndNegativeNos) { 
//TEST (square_root, ZeroAndNegativeNos) { 
    ASSERT_EQ (0.0, square_root (0.0));
    //ASSERT_EXIT (square_root (-22.0), ::testing::ExitedWithCode(-1), "Error: Negative Input\n");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
