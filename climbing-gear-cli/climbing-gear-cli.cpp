// climbing-gear-cli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Gear.h"
#include "Rope.h"
#include "BelayDevice.h"
#include "Carabiner.h"
#include "Cam.h"
#include "Nut.h"
#include "Shoes.h"
#include "Sling.h"
#include "Quickdraw.h"

int main()
{

    std::vector<std::unique_ptr<Gear>> gearInventory;

    auto rope1 = std::make_unique<Rope>("Petzl", "Arial Rope", 70, 9.5);
    auto rope2 = std::make_unique<Rope>("Mammut", "Infinity Dry Rope", 70, 9.5);
    auto belayDevice1 = std::make_unique<BelayDevice>("Black Diamond", "ATC Guide", true);
    auto belayDevice2 = std::make_unique<BelayDevice>("Black Diamond", "ATC", false);
    auto carabiner1 = std::make_unique<Carabiner>("Black Diamond", "Pear Carabiner", true);
    auto cam1 = std::make_unique<Cam>("Black Diamond", "C4 Cam", 0.5);
    auto nut1 = std::make_unique<Nut>("Black Diamond", "Nut", 4);
    auto shoes1 = std::make_unique<Shoes>("La Sportiva", "Miura Shoes", 40.5);
    auto helmet1 = std::make_unique<Gear>("Black Diamond", "Vector Helmet", ":: size : M");
    auto sling1 = std::make_unique<Sling>("Black Diamond", "Dyneema Sling", 60);
    auto quickdraw1 = std::make_unique<Quickdraw>("Petzl", "Spirit Quickdraw", QuickdrawType::sport);

    std::cout << "The type of rope1 is: " << typeid(*rope1).name() << std::endl;
    std::cout << "The type of belayDevice1 is: " << typeid(*belayDevice1).name() << std::endl;


    gearInventory.push_back(std::move(rope1));
    gearInventory.push_back(std::move(rope2));
    gearInventory.push_back(std::move(belayDevice1));
    gearInventory.push_back(std::move(belayDevice2));
    gearInventory.push_back(std::move(carabiner1));
    gearInventory.push_back(std::move(cam1));
    gearInventory.push_back(std::move(nut1));
    gearInventory.push_back(std::move(shoes1));
    gearInventory.push_back(std::move(helmet1));
    gearInventory.push_back(std::move(sling1));
    gearInventory.push_back(std::move(quickdraw1));

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
