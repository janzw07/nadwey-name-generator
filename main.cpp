#include <iostream>
#include <time.h>
#include <random>

std::string input;


int random(int min, int max)
{
  return rand()%(max-min + 1) + min;
}

void generate() {

    std::string literki[21] = { "b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z" };
    
    std::string literki2[5] = { "a", "e", "i", "o", "u"};

    
    srand(time(0));
    int losowanko = random(0, 20);
    int losowanko2 = random(0, 4);
    int losowanko3 = random(0, 20);
    int losowanko4 = random(0, 4);
    
    

    std::cout << literki[losowanko];

    std::cout << literki2[losowanko2];

    std::cout << literki[losowanko3];

    std::cout << literki2[losowanko4];

    std::string way_czy_wey[2] = { "way", "wey" };

    int losowanko5 = random(0, 1);
    std::cout << way_czy_wey[losowanko5] << std::endl;
    

}


int main()
{
    std::cout << "Generator nazw dla nadweya" << std::endl;
    std::cout << "Wpisz 'generate' aby wygenerowac nazwe dla midwaya"
    << std::endl;

        
    std::cin >> input;
        
    if (input == "generate") {
            
        std::cout << "Wygenerowana nazwa: " << std::endl;
        generate();
        
    }

    
    return 0;
}


