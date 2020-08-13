#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int hypotnuseSquared = 0;
    unsigned int sidesSquared = 0;
    
    cout << "Side 1|Side 2|Hypotnuse" << endl;
    cout << "-------------------------" << endl;
    
    for (unsigned int side1 = 1; side1 <= 500; ++side1)
    {
        for (unsigned int side2 = side1; side2 <= 500; ++side2)
        {
            for (unsigned int hypotnuse = 1; hypotnuse <= 500; ++hypotnuse)
            {
                hypotnuseSquared = hypotnuse * hypotnuse;

                sidesSquared = (side1 * side1) + (side2 * side2);
                
                if ((hypotnuse == sqrt(sidesSquared)) && hypotnuse <= 500)
                    {
                        cout << '\t' << side1 << "² + " << side2 << "² = " << hypotnuse << "²" << endl;
                    }
            }
        }
    }
    return 0;
}
