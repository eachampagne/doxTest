/*! \file
    \brief
    Adds the firsst two elements of an array

    \mainpage

    \details
    Some really random array function

    \author E. Champagne

    \version 1.0

    \date November 15, 2021 Feast of St. Albertus Magnus

    \todo have to check if the array has at least twow elements

    @param a[] an array of doubles that will be changed

    \return sum a double with the sum of the first two array elements

*/

double addE1(double a[]) {
    double sum;

    a[0] = 2.0;
    sum=a[0]+a[1]

    return sum;
}

/*!
    \brief Main function

    \details Is main functin

    v1.0 First Attempt

    \author E. Champagne

    \version 2.0

    \date November 15, 2021 Feast of St. Albertus Magnus

*/

//Divide directory into source, bin, data, docs

int main(void) {
    double a[2] = {1.0,1.0};

    double sum=addE1(a);

    printf{"%f\n", sum};

    return 0;
}