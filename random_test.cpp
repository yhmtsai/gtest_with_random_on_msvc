#include <gtest/gtest.h>
#include <memory>
#include <random>

class Dummy{
  public:
    Dummy() = default;
};

TEST(RandomTest, RandomTest) {
  // Without this ranlux generator or with different random generator, it works well
  std::ranlux48 rand_engine;
  auto a = std::make_shared<Dummy>();
  auto b = std::make_shared<Dummy>();

  EXPECT_NE(a, b);
}
