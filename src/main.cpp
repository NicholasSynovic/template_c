#include <iostream>
#include "CLI/CLI.hpp"


int main(int argc, char **argv)
{
    CLI::App app;
    CLI11_PARSE(app, argc, argv);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
