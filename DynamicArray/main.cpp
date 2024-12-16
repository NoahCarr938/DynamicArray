#include <iostream>
#include "DynamicArray.h"

int main()
{
    class Actor {};
    class Component {};

    DynamicArray<int> x;
    DynamicArray<int> y = x;

    


    DynamicArray<Actor*>* actorArray = new DynamicArray<Actor*>();
    DynamicArray<Component*>* componentArray = new DynamicArray<Component*>();
    actorArray->Add(new Actor());
    delete actorArray;

    //DynamicArray<int> intArray;
    //intArray.Add(1);
    //intArray.Add(109);
    //intArray.Add(1090);

    //for (int i = 0; i < intArray.Length(); i++)
    //{
    //    // Do stuff
    //}

    //intArray.RemoveIndex(2);
    //intArray.Remove(1090);
    //std::cout << std::endl;

    //for (int element : intArray)
    //{
    //    std::cout << element << std::endl;
    //}

    return 0;
}