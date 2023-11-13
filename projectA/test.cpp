#include <iostream>
#include <vector>

//write a function that returns the minimum value of the vector of doubles
double findsmallest(const std::vector<double>& v)
{
    double min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}

void showNumbers(const std::vector<double>& v)
{
    for(int i=0; i < v.size() ; i++)
    {
        std::cout<<v[i]<<",";
    }   
    std::cout<<std::endl;
} 
 

int main()
{
   std::vector<double> numbers = {100, 56, 67, 3, 99, 101};
   showNumbers(numbers);
   std::cout<<" the smallest value of above is "<<findsmallest(numbers)<< " Seungho "<<std::endl;
   return 0;
}

