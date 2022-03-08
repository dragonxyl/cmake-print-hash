This is an implementation of this article [print git branch and hash when using cmake](http://192.168.8.250:30080/zhaoxin/wiki/-/wikis/cmake%E4%B8%AD%E8%8E%B7%E5%8F%96git%E4%BF%A1%E6%81%AF)
1. add cmake directory to your project root 
2. add add_subdirectory(cmake) to your root CMakefile.txt
3. include "cmake/git_version.h" and use function:  PrintGitVersion() to print git info
