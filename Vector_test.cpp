#include "pch.h"
#include "C:\Users\User\Desktop\Vectors\Vector.h"
#include "C:\Users\User\Desktop\Vectors\Vectors_source.cpp"

TEST(Test_deault_CONSTRUCTOR)
{
    Vector a1;
    EXPECT_TRUE((a1.get_Coordinates()[0] == 0) && (a1.get_Coordinates()[1] == 0)
        && (a1.get_Coordinates()[2] == 0) && (a1.get_Coordinates()[3] == 0) &&
        (a1.get_Coordinates()[4] == 0) && (a1.get_Coordinates()[5] == 0));
}

TEST(Test_CONSTRUCTOR_with_int_coordinates)
{
    Vector a1(1, 2, 3, 4, 5, 6);
    EXPECT_TRUE((a1.get_Coordinates()[0] == 1) && (a1.get_Coordinates()[1] == 2)
        && (a1.get_Coordinates()[2] == 3) && (a1.get_Coordinates()[3] == 4) &&
        (a1.get_Coordinates()[4] == 5) && (a1.get_Coordinates()[5] == 6));
}

TEST(Test_CONSTRUCTOR_with_int)
{
    Vector a1(1, 2, 3, 4, 5, 6);
    EXPECT_TRUE((a1.get_Coordinates()[0] == 1) && (a1.get_Coordinates()[1] == 2)
        && (a1.get_Coordinates()[2] == 3) && (a1.get_Coordinates()[3] == 4) &&
        (a1.get_Coordinates()[4] == 5) && (a1.get_Coordinates()[5] == 6));
}
TEST(Test_CONSTRUCTOR_with_double_and_negative_coordinates)
{
    Vector a1(1, -2, 3, 4.98, -5, 6.09);
    EXPECT_TRUE((a1.get_Coordinates()[0] == 1) && (a1.get_Coordinates()[1] == -2)
        && (a1.get_Coordinates()[2] == 3) && (a1.get_Coordinates()[3] == 4.98) &&
        (a1.get_Coordinates()[4] == -5) && (a1.get_Coordinates()[5] == 6.09));



}



TEST(Test_method_length_with_double_and_negative_coordinates)
{
    Vector a1(1, -2, 3, 4.98, -5, 6.09);
    EXPECT_EQ(a1.length_of_vector(), 5.864170870634655);
}

TEST(Test_method_length_with_int)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    EXPECT_EQ(a1.length_of_vector(),2);

}


TEST(Test_method_summ_with_positiv)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    Vector c1 = a1 + b1;
    EXPECT_TRUE((c1.get_Coordinates()[0] == 3) && (c1.get_Coordinates()[1] == 4)
        && (c1.get_Coordinates()[2] == 4) && (c1.get_Coordinates()[3] == 5)
        && (c1.get_Coordinates()[4] == 6) && (c1.get_Coordinates()[5] == 8));
}

TEST(Test_method_summ_with_3)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    Vector c1(1, 1, 1, 1, 1, 1);
    Vector d1;
    d1 = a1 + b1 + c1;
    EXPECT_TRUE((d1.get_Coordinates()[0] == 4) && (d1.get_Coordinates()[1] == 5)
        && (d1.get_Coordinates()[2] == 5) && (d1.get_Coordinates()[3] == 6)
        && (d1.get_Coordinates()[4] == 7) && (d1.get_Coordinates()[5] == 9));
}

TEST(Test_method_summ_ravn)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    a1 += b1;
    EXPECT_TRUE((a1.get_Coordinates()[0] == 3) && (a1.get_Coordinates()[1] == 4)
        && (a1.get_Coordinates()[2] == 4) && (a1.get_Coordinates()[3] == 5)
        && (a1.get_Coordinates()[4] == 6) && (a1.get_Coordinates()[5] == 8));
}

TEST(Test_method_summ_ravn_with_3)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    Vector c1(1, 1, 1, 1, 1, 1);
    c1 += a1 + b1;
    EXPECT_TRUE((c1.get_Coordinates()[0] == 4) && (c1.get_Coordinates()[1] == 5)
        && (c1.get_Coordinates()[2] == 5) && (c1.get_Coordinates()[3] == 6)
        && (c1.get_Coordinates()[4] == 7) && (c1.get_Coordinates()[5] == 9));
}

TEST(Test_method_razn)
{
  Vector a1(2, 2, 2, 2, 2, 4);
  Vector b1(1, 2, 2, 3, 4, 4);
  Vector c1 = a1-b1;
  EXPECT_TRUE((c1.get_Coordinates()[0] == 1) && (c1.get_Coordinates()[1] == 0)
    && (c1.get_Coordinates()[2] == 0) && (c1.get_Coordinates()[3] == -1)
    && (c1.get_Coordinates()[4] == -2) && (c1.get_Coordinates()[5] == 0));
}

TEST(Test_method_razn_with_3)
{
  Vector a1(5, 8, 9, 0, 2, 4);
  Vector b1(1, 2, 2, 3, 4, 4);
  Vector c1(1, 1, 1, 1, 1, 1);
  Vector d1;
  d1 = a1 - b1 - c1;
  EXPECT_TRUE((d1.get_Coordinates()[0] == 3) && (d1.get_Coordinates()[1] == 5)
    && (d1.get_Coordinates()[2] == 6) && (d1.get_Coordinates()[3] == -4)
    && (d1.get_Coordinates()[4] == -3) && (d1.get_Coordinates()[5] == -1));
}


TEST(Test_method_razn_ravn)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    a1 -= b1;
    EXPECT_TRUE((a1.get_Coordinates()[0] == 1) && (a1.get_Coordinates()[1] == 0)
        && (a1.get_Coordinates()[2] == 0) && (a1.get_Coordinates()[3] == -1)
        && (a1.get_Coordinates()[4] == -2) && (a1.get_Coordinates()[5] == 0));
}

TEST(Test_method_scalar_prod)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 2, 3, 4, 4);
    double a;
    a = a1 * b1;
    EXPECT_EQ(a,4);
}
TEST(Test_method_scalar_prod_with_negative)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector b1(1, 2, 8, 3, 4, 4);
    double a;
    a = a1 * b1;
    EXPECT_EQ(a, -8);
}
TEST(Test_method_prod_with_negative_number)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    Vector d1;
    double a=-8;
    d1 = a1 * a;
    
    EXPECT_TRUE((d1.get_Coordinates()[0] == -16) && (d1.get_Coordinates()[1] == -16)
        && (d1.get_Coordinates()[2] == -16) && (d1.get_Coordinates()[3] == -16)
        && (d1.get_Coordinates()[4] == -16) && (d1.get_Coordinates()[5] == -32));
}
TEST(Test_method_prod_with_number)
{
    Vector a1(2, 2, 2, 2, 2, 4);
    double a=5;
    a1 *= a;
    EXPECT_TRUE((a1.get_Coordinates()[0] == 10) && (a1.get_Coordinates()[1] == 10)
        && (a1.get_Coordinates()[2] == 10) && (a1.get_Coordinates()[3] == 10)
        && (a1.get_Coordinates()[4] == 10) && (a1.get_Coordinates()[5] == 20));
    
}

TEST(Test_method_div)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
    double a,b;
    b = 72.0 / 108;
    a = a1/b1;
    
    EXPECT_TRUE(a==b);
}

TEST(Test_method_cos_between)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
    double a;
    
    a = a1^b1;

    EXPECT_TRUE(a == 1);
}

TEST(Test_method_more)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
    

    EXPECT_TRUE(b1>a1);
}

TEST(Test_method_less)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
    

    EXPECT_TRUE(a1<b1);
}
TEST(Test_method_less_or_eq)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
    

    EXPECT_TRUE(a1 <= b1);
}
TEST(Test_method_not_eq)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
   

    EXPECT_TRUE(a1 != b1);
}
TEST(Test_method_more_or_eq)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 6, 6, 6);
   
    EXPECT_TRUE(b1>=a1);
}
TEST(Test_method_eq)
{
    Vector a1(0, 0, 0, 4, 4, 4);
    Vector b1(0, 0, 0, 4, 4, 4);

    EXPECT_TRUE(b1 == a1);
}