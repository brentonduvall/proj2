
#include <string>
#include <vector>
#include "constants.h"
#ifndef FILEIO_H_
#define FILEIO_H_

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, std::vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
