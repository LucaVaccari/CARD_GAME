#ifndef GABRY_H
#define GABRY_H

    #include <iostream>
    #include <conio.h>
    #include <windows.h>
    #include <time.h>
    #include <fstream>

    using std::cin;
    using std::cout;
    using std::__cxx11::string;

    enum msgType{
        msgType_default,
        msgType_info, msgType_warning, msgType_error,
        msgType_INFO, msgType_WARNING, msgType_ERROR,
        msgType_debug, msgType_system,
        msgType_fatalError,
    };
    enum msgSpeed{ msgSpeed_fast, msgSpeed_user, msgSpeed_auto, msgSpeed_default };

    void ConsoleMessage( msgType lhs, msgSpeed rhs, string message );

    void clearConsole();

    void setRFullScreen();

    void indent();

    void indent( string message );

    void indent( int value );

    void loadingBar(int completamento, int lunghezza);

    void aspettaSecondi(int secondi);

    void aspettaMilliSecondi(int milliSecondi);

    int limit(int value, int lower, int higher);

    void wait(string* message);

    void ask(char question);

    int charToInt(char uno);

    int charToInt(char uno, char due);

    int charToInt(char uno, char due, char tre);

    int charToInt(char uno, char due, char tre, char quattro);

#endif // GABRY_H
