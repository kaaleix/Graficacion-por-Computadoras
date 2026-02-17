#include <iostream>
#include "Vector2.h"

int main()
{
    Vector2 v1{1,1};
    Vector2 v2{2,2};
    Vector2 v3{3,3};
    for (int i = 0; i<=100; i++){
        float t = ((float)i)/((float)100);
        //std::cout<<i<<std::endl;
        Vector2 L0 = v1.lerp(v2,t);
        Vector2 L1 = v2.lerp(v3,t);
        Vector2 B = L0.lerp(L1,t);
        //dibuja(B)
        //std::cout<<L0<<std::endl;
        //std::cout<<L1<<std::endl;
        std::cout<<B<<std::endl;
    }
    return 0;
}