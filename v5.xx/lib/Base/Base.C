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

//######################################################################
// endline
