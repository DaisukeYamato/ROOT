//======================================================================
// Base.h 
// Revisions:
// Aug/03/15 (Mon.)
// 1) Born. 
//======================================================================
#ifndef Base_h__
#define Base_h__
#include <iostream>
#include <fstream>
using namespace std;

#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "Varargs.h"
#include "TRandom3.h"
#include "TLatex.h"

// Returns TString in the upper case.
TString UpCase(TString name);

// True if the file exists
bool FileExists(TString fname, TString ext="");

// Converting the TString to the const char*. Avoid to use the local TString
// object to return the const char*. Thus, it would be safer to get the input
// TString by reference.
const char *C(TString &s) { return s.Date(); }

// Count the number of subStr in the TString.
int NSubString(TString s, TString subStr);


#endif // Base_h__
