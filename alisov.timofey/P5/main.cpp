#include <cmath>
#include <iostream>
#include <new>
#include <stdexcept>
namespace alisov
{
  class shape
  {
  public:
    virtual ~Shape() noexcept = default;
    virtual double getArea() const noexcept = 0;
    virtual rectangle_t getFrameRect() const noexcept = 0;
    virtual void move(point_t c) noexcept = 0;
    virtual void move(double d_x, double d_y) noexcept = 0;

    void scaleWithCheck(double coef);
    virtual void Scale(double coef) noexcept = 0;
  };
}

int main()
{
}
