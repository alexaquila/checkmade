#include "console.h"
#include <stddef.h>
#include <iostream>

using namespace std;

Logger * Logger::logger = NULL;

Logger * Logger::getInstance()
{
    if(!Logger::logger)
    {
        Logger::logger = new Logger;
        Logger::logger->putTxt("Creating new singleton");
    }
    else
    {
        Logger::logger->putTxt("Singleton already created");
    }
    return Logger::logger;
}

Logger::Logger()
{

}

void Logger::putTxt(string text)
{
    cout << text << endl;
}
