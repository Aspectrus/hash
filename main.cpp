#include "header.h"

int main(int argc, char *argv[]) {
    std::string choice;





        if (std::string(argv[1])=="f")
        {
            myhash = filehashing( std::string(argv[2]));
            cout << timer<< "s \n";
            cout<<myhash;
        }
        else
        {
            myhash = inputhashing(std::string(argv[1]));
            cout<<myhash;
        }
    return 0;
}