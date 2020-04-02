// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Pliku Main.cpp, nie wolno modyfikowac
// (w ostatecznej wersji programu nie może być zmodyfikowany)

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow. 

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

#include <iostream>
#include "BContainer.h"
#include "Volume.h"


int main() {

    Box* box = new Box(9.,4.,6.);

    BContainer boxes;
    boxes.Insert(box);

    for(size_t i=1; i < 5; ++i)
        boxes.Insert( new Box{i,i,i} );

    std::cout << boxes << std::endl;

    Box* ptrBox = boxes[1];

    double x{ptrBox->GetWidth()},
           y{ptrBox->GetLength()},
           z{ptrBox->GetHeight()};

    Volume volume;
    double boxVolume1 {volume(x,y,z)};
    double boxVolume2 {volume(*boxes[2])};


    std::cout<< "Box 1 volume: " << boxVolume1 << std::endl;
    std::cout<< "Box 2 volume: " << boxVolume2 << std::endl;

    std::cout<< "The largest box: " << *find_box_optimum(boxes,larger) << std::endl;
}

/* Wynik działania programu:
Box Container:
  [0] Box(length:9, width:4, height:6)
  [1] Box(length:1, width:1, height:1)
  [2] Box(length:2, width:2, height:2)
  [3] Box(length:3, width:3, height:3)
  [4] Box(length:4, width:4, height:4)

Box 1 volume: 1
Box 2 volume: 8
The largest box: Box(length:9, width:4, height:6)
*/

