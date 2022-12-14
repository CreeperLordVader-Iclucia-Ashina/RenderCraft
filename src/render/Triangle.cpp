//
// Created by creeper on 22-11-20.
//
#include "Triangle.h"
Intersection Triangle::intersect(const Ray& ray, const Vec3& p) const
{

}

Vec3 Triangle::getLocalCoordMin() const
{
    return { std::min(std::min(v[0][0], v[1][0]), v[2][0]),
            std::min(std::min(v[0][1], v[1][1]), v[2][1]),
            std::min(std::min(v[0][2], v[1][2]), v[2][2]) };
}

Vec3 Triangle::sampleVisiblePoint(const Vec3 &ref, const Vec3 &p, Real &pdf) const
{

}

Vec3 Triangle::getLocalCoordMax() const
{
    return { std::max(std::max(v[0][0], v[1][0]), v[2][0]),
            std::max(std::max(v[0][1], v[1][1]), v[2][1]),
            std::max(std::max(v[0][2], v[1][2]), v[2][2]) };
}

Real Triangle::calcVisibleArea(const Vec3 &, const Vec3 &) const
{
    return 0;
}

Real Triangle::calcArea() const
{
    return 0;
}

Vec3 Triangle::sample() const
{
    return ext::Vec3();
}
