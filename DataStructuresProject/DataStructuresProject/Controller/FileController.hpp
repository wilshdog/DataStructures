//
//  FileController.hpp
//  DataStructuresProject
//
//  Created by Wilsher, Ethan on 1/31/18.
//  Copyright © 2018 Wilsher, Ethan. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

#include "../Data/CrimeData.hpp"
#include "Array.hpp"

using namespace std;

class FileController
{

public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
