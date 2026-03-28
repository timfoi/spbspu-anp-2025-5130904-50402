#include <cmath>
#include <iostream>
#include <new>
#include <stdexcept>
namespace alisov
{
  struct point_t
  {
    double x;
    double y;
  };

  struct rectangle_t
  {
    double width;
    double height;
    point_t pos;
  };

  class Shape
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

  class Rectangle : public Shape
  {
  public:
    explicit Rectangle(point_t pos, double width, double height);
    double getArea() const noexcept override;
    rectangle_t getFrameRect() const noexcept override;
    void move(point_t c) noexcept override;
    void move(double d_x, double d_y) noexcept override;

    void Scale(double coef) noexcept override;

  private:
    point_t pos_;
    double width_, height_;
  };
}

int main()
{
}
