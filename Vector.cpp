#include "C:\Users\User\Desktop\Vectors\Vector.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>







Vector::Vector(const double& coordinate_beg1, const double& coordinate_beg2,
    const double& coordinate_beg3, const double& coordinate_end1,
    const double& coordinate_end2, const double& coordinate_end3) {

    coordinates_of_vector_begin[0] = coordinate_beg1;
    coordinates_of_vector_begin[1] = coordinate_beg2;
    coordinates_of_vector_begin[2] = coordinate_beg3;
    coordinates_of_vector_end[0] = coordinate_end1;
    coordinates_of_vector_end[1] = coordinate_end2;
    coordinates_of_vector_end[2] = coordinate_end3;

}

Vector::~Vector()
{
  

}


double* Vector::get_Coordinates()
{
    double* array_of_vector_coordinates = new double[6];
    array_of_vector_coordinates[0] = coordinates_of_vector_begin[0];
    array_of_vector_coordinates[1] = coordinates_of_vector_begin[1];
    array_of_vector_coordinates[2] = coordinates_of_vector_begin[2];
    array_of_vector_coordinates[3] = coordinates_of_vector_end[0];
    array_of_vector_coordinates[4] = coordinates_of_vector_end[1];
    array_of_vector_coordinates[5] = coordinates_of_vector_end[2];
    return array_of_vector_coordinates;

}

double Vector::length_of_vector()
{
    double length;
    length = sqrt(pow((coordinates_of_vector_end[0] - coordinates_of_vector_begin[0]), 2)
        + pow((coordinates_of_vector_end[1] - coordinates_of_vector_begin[1]), 2)
        + pow((coordinates_of_vector_end[2] - coordinates_of_vector_begin[2]), 2));
    return length;
}

Vector Vector::operator+(const Vector& vector_2)
{
    Vector sum(
        (coordinates_of_vector_begin[0] + vector_2.coordinates_of_vector_begin[0]),
        (coordinates_of_vector_begin[1] + vector_2.coordinates_of_vector_begin[1]),
        (coordinates_of_vector_begin[2] + vector_2.coordinates_of_vector_begin[2]),
        (coordinates_of_vector_end[0] + vector_2.coordinates_of_vector_end[0]),
        (coordinates_of_vector_end[1] + vector_2.coordinates_of_vector_end[1]),
        (coordinates_of_vector_end[2] + vector_2.coordinates_of_vector_end[2])

    );
    return sum;

}

void Vector::operator +=(const Vector& vector_2)
{
    *this = *this + vector_2;

}

Vector Vector::operator -(const Vector& vector_2)
{
    Vector differ(
        (coordinates_of_vector_begin[0] - vector_2.coordinates_of_vector_begin[0]),
        (coordinates_of_vector_begin[1] - vector_2.coordinates_of_vector_begin[1]),
        (coordinates_of_vector_begin[2] - vector_2.coordinates_of_vector_begin[2]),
        (coordinates_of_vector_end[0] - vector_2.coordinates_of_vector_end[0]),
        (coordinates_of_vector_end[1] - vector_2.coordinates_of_vector_end[1]),
        (coordinates_of_vector_end[2] - vector_2.coordinates_of_vector_end[2])

    );
    return differ;


}
void Vector::operator -=(const Vector& vector_2)
{
    *this = *this - vector_2;


}

double Vector::operator *(const Vector& vector_2)
{
    return
        (coordinates_of_vector_end[0] - coordinates_of_vector_begin[0]) *
        (vector_2.coordinates_of_vector_end[0] - vector_2.coordinates_of_vector_begin[0]) +
        (coordinates_of_vector_end[1] - coordinates_of_vector_begin[1]) *
        (vector_2.coordinates_of_vector_end[1] - vector_2.coordinates_of_vector_begin[1]) +
        (coordinates_of_vector_end[2] - coordinates_of_vector_begin[2]) *
        (vector_2.coordinates_of_vector_end[2] - vector_2.coordinates_of_vector_begin[2]);
}

void Vector::operator *=(const double& number)
{
    coordinates_of_vector_begin[0] *= number;
    coordinates_of_vector_begin[1] *= number;
    coordinates_of_vector_begin[2] *= number;
    coordinates_of_vector_end[0] *= number;
    coordinates_of_vector_end[1] *= number;
    coordinates_of_vector_end[2] *= number;

}
Vector  Vector::operator *(const double& number)
{
    Vector prod(coordinates_of_vector_begin[0] * number,
        coordinates_of_vector_begin[1] * number,
        coordinates_of_vector_begin[2] * number,
        coordinates_of_vector_end[0] * number,
        coordinates_of_vector_end[1] * number,
        coordinates_of_vector_end[2] * number

    );
    return prod;

}

double Vector::operator/(Vector& vector_2)
{
    return (*this * vector_2) / (vector_2.length_of_vector() * vector_2.length_of_vector());
}


double Vector:: operator ^(Vector& vector_2)
{
    return (*this * vector_2) / (length_of_vector() * vector_2.length_of_vector());
}


bool Vector::operator > (Vector& vector_2)
{
    return length_of_vector() > vector_2.length_of_vector();
}
bool Vector::operator < (Vector& vector_2)
{
    return length_of_vector() < vector_2.length_of_vector();
}
bool Vector::operator >= (Vector& vector_2)
{
    return length_of_vector() >= vector_2.length_of_vector();
}
bool Vector::operator <= (Vector& vector_2)
{
    return length_of_vector() <= vector_2.length_of_vector();
}
bool Vector::operator== (Vector& vector_2)
{
    double direction_1_x, direction_1_y, direction_1_z, direction_2_x, direction_2_y, direction_2_z;
    direction_1_x = get_Coordinates()[3] - get_Coordinates()[0];
    direction_1_y = get_Coordinates()[4] - get_Coordinates()[1];
    direction_1_z = get_Coordinates()[5] - get_Coordinates()[2];
    direction_2_x = vector_2.get_Coordinates()[3] - vector_2.get_Coordinates()[0];
    direction_2_y = vector_2.get_Coordinates()[4] - vector_2.get_Coordinates()[1];
    direction_2_z = vector_2.get_Coordinates()[5] - vector_2.get_Coordinates()[2];

    return ((direction_1_x == direction_2_x) && (direction_1_y == direction_2_y) &&
        (direction_1_z == direction_2_z) && (length_of_vector() == vector_2.length_of_vector()));
}
bool Vector::operator!= (Vector& vector_2)
{
    return !(*this == vector_2);
}
std::ostream& operator <<(std::ostream& output, Vector& vector) {
    return output <<'('<< vector.coordinates_of_vector_begin[0]<<','
        << vector.coordinates_of_vector_begin[1] << ','
        << vector.coordinates_of_vector_begin[2] << ','
        << vector.coordinates_of_vector_end[0] << ','
        << vector.coordinates_of_vector_end[1] << ','
        << vector.coordinates_of_vector_end[2] << ')';
}

std::istream& operator >>(std::istream& input, Vector& vector) {
    return input >> vector.coordinates_of_vector_begin[0]
        >> vector.coordinates_of_vector_begin[1]
        >> vector.coordinates_of_vector_begin[2]
        >> vector.coordinates_of_vector_end[0]
        >> vector.coordinates_of_vector_end[1]
        >> vector.coordinates_of_vector_end[2];
}