#include "Base.h"

TString UpCase(TString name) {
  name.ToUpper();
  return name;
}

bool FileExists(TString fname, TString ext) {
  if (ext!="") fname += ext;
  // Remove spaces
  fname.ReplaceAll(" ", "");
  return (!gSystem->AccessPathName(fname));
}

int NSubString(TString s, TString subStr) {
  int len = subStr.Length();

  int n=0, i=0;
  while ( s.Index(subStr, i) >= 0 ) { n++; i = s.Index(subStr, i) + len; }

  return n;
}

//######################################################################
// endline
