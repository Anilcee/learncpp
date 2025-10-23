#include <iostream>
#include <thread>   
#include <chrono>  

int main()
{
    std::cout << "Birinci satır (\\n ile)" << '\n';
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "İkinci satır (std::endl ile)" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Üçüncü satır (program bitmeden flush edilmez)";
}
