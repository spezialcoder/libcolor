#ifndef LIBCOLOR_H
#define LIBCOLOR_H
#include <string>
#include <iostream>
using namespace std;
class font_color
{

        public:
            font_color();
            inline static const string green = "\x1b[32m";
            inline static const string red = "\x1b[31m";
            inline static const string reset = "\x1b[39m";
            inline static const string gray = "\x1b[30m";
            inline static const string orange = "\x1b[33m";
            inline static const string darkBlue = "\x1b[34m";
            inline static const string purple = "\x1b[35m";
            inline static const string blue = "\x1b[36m";
            inline static const string white = "\x1b[37m";



};

class background
{
    public:
        background();
        inline static const string green = "\x1b[42m";
        inline static const string red = "\x1b[41m";
        inline static const string reset = "\x1b[49m";
        inline static const string gray = "\x1b[40m";
        inline static const string orange = "\x1b[43m";
        inline static const string darkBlue = "\x1b[44m";
        inline static const string purple = "\x1b[45m";
        inline static const string blue = "\x1b[46m";
        inline static const string white = "\x1b[47m";

};
#endif