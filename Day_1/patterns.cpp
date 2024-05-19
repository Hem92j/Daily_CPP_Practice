#include <iostream>


int main ()
{

    std::cout << "1. Square Pattern" << '\n';

    int n {};
    std:: cout << "Enter the square pattern param: ";
    std::cin >> n;

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*" ;
        }
        std::cout << std::endl;    
    }

    std::cout << "2. Right Triangle Pattern" << '\n';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*" ;
        }
         std::cout << std::endl;
    }
    
    std::cout << "3. Pyramid Pattern" << '\n';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i ; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k <=2 * i - 1; k++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
   
    std::cout << "4. Inverted Pyramid Pattern" << '\n';

    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1 ; k++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
     

    std::cout << "5. Number Pattern (Right Triangle)" << '\n';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j ++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    

    std::cout << "6. Number Pattern (Pyramid)" << '\n';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            std::cout << k;
        }
        std::cout << std::endl;
    }
    
    std::cout << "7. Number Pattern (Square)" << '\n';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {   
            std::cout << j;
        }

        std::cout << std::endl;
    }
    

    std::cout << "8. Diamond Pattern " << '\n';
    for (int i = 1 ; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1 ; k++)
        {
            std::cout << "*";
        }

        std:: cout << std::endl;
    }

    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            std::cout << " ";
        }
        for (int k = 1; k <= 2* i -1; k++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    std::cout << "9. Hollow Square with Stars Pattern " << '\n';

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 || i == n || j == 1 || j == n ) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
    */

    std::cout << "10. Zig zag pattern " << '\n';

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            for (int j = 1; j <= n; ++j) {
                std::cout << '*';
            }
        } else {
            for (int j = 1; j <= 2; ++j) {
                std::cout << ' ';
            }
            for (int j = 1; j <= n; ++j) {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}