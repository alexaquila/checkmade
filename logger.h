#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>
#include "console.h"


// Singleton Go4 127
class Logger
{
public:
    static Logger * getInstance();
    void putTxt(std::string text);
private:
    static Logger * logger;
    Logger();
};

#endif // CONSOLE_H
