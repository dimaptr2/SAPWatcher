#include "genparams.h"

int main(int argc, char** argv) {

    int rc = 0;
    std::string destinationPath = "dest.ini";
    
    std::cout << "Start SAP Watcher with the run control " << rc << std::endl;
    rc = read_destination(destinationPath);
    
    return rc;
}
