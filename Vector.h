#pragma once
#include <string>
using namespace std;

class Vector
{
private:
    double coordinates_of_vector_begin[3];
    double coordinates_of_vector_end[3];
public:

    Vector(const double& coordinate_beg1 = 0, const double& coordinate_beg2 = 0, const double& coordinate_beg3 = 0, const double& coordinate_end1 = 0, const double& coordinate_end2 = 0, const  double& coordinate_end3 = 0);

    ~Vector();


    double* get_Coordinates();


    double length_of_vector();

    Vector operator+(const Vector& vector_2);

    void operator += (const Vector& vector_2);


    Vector operator - (const Vector& vector_2);

    void operator -= (const Vector& vector_2);


    double operator * (const Vector& vector_2);



    void operator *= (const double& number);
    Vector operator *(const double& number);


    double operator / (Vector& vector_2);
    


    double operator ^(Vector& vector_2);

    bool operator == (Vector& vector_2);

    bool operator != (Vector& vector_2);


    bool operator > (Vector& vector_2);

    bool operator < (Vector& vector_2);

    bool operator >= (Vector& vector_2);

    bool operator <= (Vector& vector_2);

    friend std::ostream& operator <<(std::ostream& output, Vector& vector);
    friend std::istream& operator >>(std::istream& input, Vector& vector);




};