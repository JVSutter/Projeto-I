// AUTORES: João Vitor Curcio Sutter e Davi Ludvig Longen Machado

#include <iostream>
#include <string>

#include "solutions.h"

int main()
{
    std::string xmlPath{};
    std::cin >> xmlPath;  // Arquivo de entrada

    computeCleanupAreaXML(xmlPath);

    return 0;
}
