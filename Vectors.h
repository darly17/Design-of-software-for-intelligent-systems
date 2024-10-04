#pragma once
#include <string>
using namespace std;

class Vectors
{
private:
    double coordinates_of_vector_begin[3];
    double coordinates_of_vector_end[3];
public:

    Vectors(const double& coordinate_beg1 = 0, const double& coordinate_beg2 = 0, const double& coordinate_beg3 = 0, const double& coordinate_end1 = 0, const double& coordinate_end2 = 0, const  double& coordinate_end3 = 0);

    ~Vectors();


    double* get_Coordinates();


    double length_of_vector();

    Vectors operator+(const Vectors& vector_2);

    void operator += (const Vectors& vector_2);


    Vectors operator - (const Vectors& vector_2);

    void operator -= (const Vectors& vector_2);


    double operator * (const Vectors& vector_2);



    void operator *= (const double& number);
    Vectors operator *(const double& number);


    double operator / (Vectors& vector_2);
    


    double operator ^(Vectors& vector_2);

    bool operator == (Vectors& vector_2);

    bool operator != (Vectors& vector_2);


    bool operator > (Vectors& vector_2);

    bool operator < (Vectors& vector_2);

    bool operator >= (Vectors& vector_2);

    bool operator <= (Vectors& vector_2);

    friend std::ostream& operator <<(std::ostream& output, Vectors& vector);
    friend std::istream& operator >>(std::istream& input, Vectors& vector);




};