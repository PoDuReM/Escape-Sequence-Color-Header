// Copyright (c) 2015, Uduse - Aedi Wang, All rights reserved.
// This file is licensed under The BSD 2-Clause License, see LICENSE.md for details

#include <iostream>

#include "Escape_Sequences_Colors.h"

using namespace std;

#define COLOR_ /\*
#define _COLOREND */

int main( int argc, char* argv[] )
{

  // Block Bold
  cout << endl;
  cout << endl;
  cout << endl;
  cout << COLOR_BOLD;
  cout << COLOR_RED_CYAN << "COLOR_RED_CYAN";
  cout << COLOR_WHITE_MAGENTA << "COLOR_WHITE_MAGENTA";
  cout << COLOR_CYAN_YELLOW << "COLOR_CYAN_YELLOW";
  cout << COLOR_NORMAL;
  cout << endl;
  cout << endl;
  cout << endl;

  // Block Red
  cout << endl;
  cout << endl;
  cout << endl;
  cout << COLOR_RED_NORMAL;
  cout << COLOR_BOLD << "COLOR_BOLD";
  cout << COLOR_UNDERSCORE << "COLOR_UNDERSCORE";
  cout << COLOR_NORMAL;
  cout << endl;
  cout << endl;
  cout << endl;


  //// Tag
  //cout << endl;
  //cout << endl;
  //cout << endl;
  //cout << COLOR_RED_CYAN_COLOREND << "COLOR_RED_CYAN";
  //cout << COLOR_WHITE_MAGENTA_COLOREND << "COLOR_WHITE_MAGENTA";
  //cout << COLOR_CYAN_YELLOW_COLOREND << "COLOR_CYAN_YELLOW";
  //cout << COLOR_NORMAL_COLOREND;
  //cout << endl;
  //cout << endl;
  //cout << endl;

}
