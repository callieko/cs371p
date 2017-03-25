// ---------------------------------
// projects/c++/darwin/RunDarwin.c++
// Copyright (C) 2017
// Glenn P. Downing
// ---------------------------------

// --------
// includes
// --------

#include <cassert>  // assert
#include <cstdlib>  // rand, srand
#include <fstream>  // ifstream
#include <iostream> // cout, endl, getline

#include "Darwin.h"

// ----
// main
// ----

int main () {
    using namespace std;

    // ----
    // food
    // ----

    /*
     0: left
     1: go 0
    */

    // ------
    // hopper
    // ------

    /*
     0: hop
     1: go 0
    */

    // -----
    // rover
    // -----

    /*
     0: if_enemy 9
     1: if_empty 7
     2: if_random 5
     3: left
     4: go 0
     5: right
     6: go 0
     7: hop
     8: go 0
     9: infect
    10: go 0
    */

    // ----
    // trap
    // ----

    /*
     0: if_enemy 3
     1: left
     2: go 0
     3: infect
     4: go 0
    */

    // read  RunDarwin.in
    // write RunDarwin.out

    ifstream fin("RunDarwin.out");
    char a[80];
    while (fin.getline(a, 80))
        cout << a << endl;

    return 0;}
