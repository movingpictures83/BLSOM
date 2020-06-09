#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BLSOMPlugin.h"

void BLSOMPlugin::input(std::string file) {
 inputfile = file;
}

void BLSOMPlugin::run() {
   std::string myCommand = "";
   myCommand += "cd "+inputfile+"; ./run.csh input.dat 1";
 system(myCommand.c_str());
}

void BLSOMPlugin::output(std::string file) {
}

PluginProxy<BLSOMPlugin> BLSOMPluginProxy = PluginProxy<BLSOMPlugin>("BLSOM", PluginManager::getInstance());
