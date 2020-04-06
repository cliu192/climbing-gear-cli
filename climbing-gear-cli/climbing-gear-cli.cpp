// climbing-gear-cli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Gear.h"
#include "Rope.h"

int main()
{
    std::vector<std::unique_ptr<Gear>> gearInventory;

    auto rope1 = std::make_unique<Rope>("Petzl", "Arial Rope", 70);
    auto rope2 = std::make_unique<Rope>("Mammut", "Infinity Dry Rope", 70);

    gearInventory.push_back(std::move(rope1));
    gearInventory.push_back(std::move(rope2));

    for (auto const& gear : gearInventory)
    {
        std::cout << gear->getDescription() << std::endl;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
