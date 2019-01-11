#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>


int getRandomValue(size_t size){
	unsigned long long int randomValue = 0;
    std::ifstream urandom("/dev/urandom", std::ios::in|std::ios::binary);
    if(urandom) {
        urandom.read(reinterpret_cast<char*>(&randomValue), size);
        urandom.close();
    } else std::cerr << "Failed to open /dev/urandom" << std::endl;
    return abs(randomValue);
    
}

int 
main(int argc, char const *argv[]){
	if(argc > 1){
		std::string rawText = argv[1];											
		std::transform(rawText.begin(), rawText.end(), rawText.begin(), ::tolower);
		std::string randomValue = std::to_string(getRandomValue(rawText.size()));
		int asciiValue = 0;
		for(int i = 0;i < rawText.size();i++){
			rawText[i]^=randomValue[i];
		}
		std::cout<<rawText;
	}
	std::cout<<"\n";
	return 0;
}