#pragma once 

#include <vector> 
#include <iostream>

namespace star{
    namespace common{
        class Shader{
            public:
                Shader(){
                    std::cout << "test" << std::endl; 
                }
                void LoadFromFile(){
                    std::cout << "loading" << std::endl; 
                }
            protected: 
                std::vector<uint32_t> compiledCode; 
                
            private: 

        }; 
    }

}
