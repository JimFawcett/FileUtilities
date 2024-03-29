///////////////////////////////////////////////////////////////////////
// FileUtilities.cpp - facilities for interacting with files         //
//                                                                   //
// ver 1.1                                                           //
// Language:    C++, Visual Studio 2017                              //
// Application: Project #1 - F2018, CSE687 - Object Oriented Design  //
// Author:      Jim Fawcett, Syracuse University, CST 4-187          //
//              jfawcett@twcny.rr.com                                //
///////////////////////////////////////////////////////////////////////

#include "FileUtilities.h"

#ifdef TEST_FILEUTILITIES

using namespace Utilities;

int main()
{
  showDirContents(".", "test showDirContents");
  displayFileContents("test displayFileContents", "./FileUtilities.h");
  showFileLines("fileUtilities.h", 0, 10, "test showFileLines");
  return 0;
}

#endif
