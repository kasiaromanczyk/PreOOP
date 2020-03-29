// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Implementację i działanie metody poszczególnych klas proszę wywnioskować
// z treści main().

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz Makefile lub CMakeLists.txt)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

#ifdef MAPCALC              // defined by the CMakeLists
    #include "MapPoint.h"
#endif

int main() {

  //========== KRK ========================
  MapPoint krk("KRK",19.938333,50.061389);
  krk.Print();

  //========== NYC ========================
  const double nyc_latitude = 40.7127;
  const double nyc_longitude = -74.0059;
  MapPoint nyc("NYC");
  nyc.Longitude(nyc_latitude);
  nyc.Latitude(nyc_longitude);
  nyc.Print();

  //========== PORTO ======================
  MapPoint porto;
  porto.SetId("PRT");
  porto.Coordinates(41.162142, -8.621953);
  porto.Print();

  //========== IRKUTSK ====================
  MapPoint irkutsk("IRK");
  irkutsk.Coordinates(52.283333, 104.283333);
  irkutsk.Print();

  //========== DISTANCE ===================
  MapDistance nyc_porto;
  nyc_porto.Print();
  nyc_porto = nyc.Distance(porto);
  nyc_porto.Print();

  //========== FARTHEST ===================
  krk.Farthest(porto, irkutsk).Print();

  return 0;
}

/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./map 
Point: KRK (19.9383, 50.0614)
Point: NYC (-74.0059, 40.7127)
Point: PRT (41.1621, -8.62195)
Point: IRK (52.2833, 104.283)
Distance : None (0, 0)
Distance : NYC-PRT (115.168, -49.3347)
Point: IRK (52.2833, 104.283)
*/
