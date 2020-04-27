//Copyright 2020 Golovanova Elena

#include <gtest/gtest.h>
#include "include/quick_sort.h"

TEST(Golovanova_Elena_QuickSortTest, Create_Empty_Class) {
  // Arrange&Act&Assert
  ASSERT_NO_THROW(QuickSort ex1);
}

TEST(Golovanova_Elena_QuickSortTest, Create_Class_With_Negative_Parameters) {
  // Arrange&Act&Assert
  ASSERT_ANY_THROW(QuickSort ex1(-1));
}

