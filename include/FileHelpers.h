#pragma once 

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

namespace star{
    namespace common{
        static struct FileHelpers{
            std::string ReadFile(std::string pathToFile){
                std::string line, text;
                std::ifstream fileReader(pathToFile);

                while (std::getline(fileReader, line)) {
                    text += line + "\n";
                }

	            return(text); 
            }
        }; 
    }
}