//
// Created by creeper on 22-11-14.
//
#include "Object.h"

void Object::intersect(const Ray &ray, Intersection *intsct) const
{
    Ray local_ray(World2Local(ray.orig), World2Local(ray.dir));
    shape->intersect(local_ray, intsct);
    intsct->P = Local2World(intsct->P);
    intsct->P = Local2World.rot * intsct->normal;
    intsct->mat = mat;
}

Vec3 Object::getCoordMax()
{
    return Local2World.translate + shape->getLocalCoordMax();
}

Vec3 Object::getCoordMin()
{
    return Local2World.translate + shape->getLocalCoordMin();
}

