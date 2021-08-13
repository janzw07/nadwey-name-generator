#include <iostream>
#include <time.h>
#include <random>

int random(int min, int max)
{
    return rand()%(max-min + 1) + min;
}

void generate()
{
    char literki[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
    char literki2[] = { 'a', 'e', 'i', 'o', 'u'};

    
    int losowanko = random(0, 20);
    int losowanko2 = random(0, 4);
    int losowanko3 = random(0, 20);
    

    std::cout << literki[losowanko];
    std::cout << literki2[losowanko2];
    std::cout << literki[losowanko3];
  
    std::cout << (random(0, 1) ? "wey" : "way") << std::endl;
}

int main()
{
    srand(time(0));
    std::cout << "Generator nazw dla nadweya" << std::endl;
        
    std::cout << "Wygenerowana nazwa: " << std::endl;
    generate();

    
    return 0;
}
