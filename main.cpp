#include <iostream>
#include "cmake/git_version.h"//include this file to use the function

int main(int argc, const char* argv[])
{
    std::cout << "Print git info to exe_path_log_file and screen." << std::endl;
    PrintGitVersion(argv[0]); //pass the arg[0] to get the exe path or leave it empty to use default path by OS

    return 0;
}

