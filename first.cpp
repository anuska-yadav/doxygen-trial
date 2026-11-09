#include<iostream>
#include<stdexcept>
using namespace std;

/**
 * @defgroup Arithmetic Arithmetic Operations
 */
 
 /**
 * @brief Adds two integers.
 * 
 * Adds two integers and returns their sum .
 * @ingroup Arithmetic 
 * @param a First integer
 * @param b Second integer
 * @return Sum value
 */
int sum(int a,int b){
return a+b;
}

/**
  * @brief Calculates the square of a number.
  * @ingroup Arithmetic
  * @param n Input number.
  * @return Square of n.
  */
 int square(int n){
    return n*n;
 }


/**
  * \brief Calculates the average of three numbers.
  * 
  * Adds three numbers and divide result by 3 , product answer in decimals.
  * \ingroup Arithmetic
  * \param a First integer
  * \param b Second integer
  * \param c Third integer
  * \return Average value
  */
 float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

/**
 * \brief Perform division of two numbers.
 * 
 * Divide dividend(first number) by divisor(second number) and return its quotient value.
 * 
 * \ingroup Arithmetic
 * \param a Dividend 
 * \param b Divisor 
 * \return Result of division.
 * \pre Divisor should not be equal to zero.
 * \post Returns the quotient of a divided by b.
 */
double divide(double a, double b)
{
    return a / b;
}

/**
 * \brief Find the maximum out of 2 numbers.
 * 
 * Compare two integers and return the one which is greater than the other.
 * If both same, return that same number.
 * 
 * \ingroup Arithmetic
 * \param a First integer
 * \param b Second integer 
 * \return Maximum out of 2 integers.
 */
int findMaximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}


/**
 * \defgroup Array Array operations
 */
  
 /**
  * @addtogroup Array
  * @{
  */

 /**
 * \brief Calculates sum of all the elements in an array.
 * 
 * Iterates through the array and sum up all the elements of it.
 * 
 * \param arr Array of integers
 * \param n Number of integers in array
 * \return Sum of all elements of array.
 */
int calculateSum(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

/**
 * \brief Get the element from an array which is at given index.
 * 
 * If a valid index is given then return the value which is at that index 
 * otherwise throw an error.
 * 
 * \param arr Array of integers
 * \param n Number of integers in array 
 * \param index Index from where element should be returned.
 * \return Value of the asked index from array if index is valid.
 * \pre  0 <= index < n and n must be positive.
 * \throw std::out_of_range If the index is invalid.
 */
int getElement(int arr[], int n, int index)
{
    if(index < 0 || index >= n)
        throw out_of_range("Invalid index");

    return arr[index];
}

 /** @} */


 /**
  * \class Car
  * \brief Represents a Car object.
  * 
  * This will create a car object , provide fns to start a engine.
  */
 class Car{
 public:
 /**
  * \brief Start the engine.
  * \return True if successful.
  */

 bool startEngine(){
    return true;
 }
 };

/**
 * \class Rectangle 
 * \brief Represents a rectangle object 
 * 
 *  A rectangle having length and breadth and a function to provide area.
 */
class Rectangle
{
    double length;
    double breadth;

public:
   /**
    * \brief Creates a rectangle object.
    * 
    * Initialize a rectangle with provided length and breadth.
    * 
    * \param l Length of the rectangle 
    * \param b Breadth of the rectangle
    */
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
    
    /**
     * \brief Calculates area of the rectangle
     * 
     * Multiply length and breadth and thus return area of the rectangle.
     * 
     * \return Area of the rectangle 
     */
    double area()
    {
        return length * breadth;
    }
};

/**
 * @dot
 * digraph G{
 * main->calc;
 * calc->display;
 * }
 * @enddot
 */

void display(){
    cout<<"Hello";
}
void calc(){
    display();
}
int main(){
calc();
    return 0;
}