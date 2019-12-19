#include "gabry.h"

void clearConsole(){
    /**< used to clear the schreen */
    system("cls");
}

void setRFullScreen(){
    keybd_event(VK_F11, 0, 0, 0);
    keybd_event(VK_F11, 0, 2, 0);
}

void indent(){
    cout << "\n  ";
}

void indent( string message ){
    cout << "\n  " << message;
}

void indent( int value ){
    cout << "\n  " << value;
}

void loadingBar( int completamento, int lunghezza ){
    cout << "[";
    for(int puntatore=1; puntatore<lunghezza; puntatore++){
        if(puntatore<completamento){cout << "=";}
        if(puntatore>completamento){cout << "-";}
        if(puntatore==completamento){cout << "|";}
    }
    cout << "]";
}

void aspettaSecondi( int secondi ){
    Sleep(1000 * secondi);
}

void aspettaMilliSecondi( int milliSecondi ){
    Sleep(milliSecondi);
}

int limit( int value, int lower, int higher ){
    if ( lower > higher ) { return -1; }
    else if ( value > higher ) {return higher;}
    else if ( value < lower ) {return lower;}
    else return value;
}

void wait( string message ){
    indent( message );
	char bin=_getch();
}

void ask( string question ){
    indent();
    cout << question;
    cout << "\n  > ";
}

int charToInt(char uno){
    int ritorno=0;
    switch(uno){
    case '0': ritorno += 0; break;
    case '1': ritorno += 1; break;
    case '2': ritorno += 2; break;
    case '3': ritorno += 3; break;
    case '4': ritorno += 4; break;
    case '5': ritorno += 5; break;
    case '6': ritorno += 6; break;
    case '7': ritorno += 7; break;
    case '8': ritorno += 8; break;
    case '9': ritorno += 9; break;
    default: return -1; break;
    }
    if(ritorno==false)
        return -1;
    else
        return ritorno;
}

int charToInt(char uno, char due){
    int ritorno=0;
    switch(uno){
    case '0': ritorno += 0; break;
    case '1': ritorno += 1; break;
    case '2': ritorno += 2; break;
    case '3': ritorno += 3; break;
    case '4': ritorno += 4; break;
    case '5': ritorno += 5; break;
    case '6': ritorno += 6; break;
    case '7': ritorno += 7; break;
    case '8': ritorno += 8; break;
    case '9': ritorno += 9; break;
    default: return -1; break;
    }
    switch(due){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    if(ritorno==false)
        return -1;
    else
        return ritorno;
}

int charToInt(char uno, char due, char tre){
    int ritorno=0;
    switch(uno){
    case '0': ritorno += 0; break;
    case '1': ritorno += 1; break;
    case '2': ritorno += 2; break;
    case '3': ritorno += 3; break;
    case '4': ritorno += 4; break;
    case '5': ritorno += 5; break;
    case '6': ritorno += 6; break;
    case '7': ritorno += 7; break;
    case '8': ritorno += 8; break;
    case '9': ritorno += 9; break;
    default: return -1; break;
    }
    switch(due){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    switch(tre){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    if(ritorno==false)
        return -1;
    else
        return ritorno;
}

int charToInt(char uno, char due, char tre, char quattro){
    int ritorno=0;
    switch(uno){
    case '0': ritorno += 0; break;
    case '1': ritorno += 1; break;
    case '2': ritorno += 2; break;
    case '3': ritorno += 3; break;
    case '4': ritorno += 4; break;
    case '5': ritorno += 5; break;
    case '6': ritorno += 6; break;
    case '7': ritorno += 7; break;
    case '8': ritorno += 8; break;
    case '9': ritorno += 9; break;
    default: return -1; break;
    }
    switch(due){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    switch(tre){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    switch(quattro){
    case '0': ritorno = ritorno * 10 + 0; break;
    case '1': ritorno = ritorno * 10 + 1; break;
    case '2': ritorno = ritorno * 10 + 2; break;
    case '3': ritorno = ritorno * 10 + 3; break;
    case '4': ritorno = ritorno * 10 + 4; break;
    case '5': ritorno = ritorno * 10 + 5; break;
    case '6': ritorno = ritorno * 10 + 6; break;
    case '7': ritorno = ritorno * 10 + 7; break;
    case '8': ritorno = ritorno * 10 + 8; break;
    case '9': ritorno = ritorno * 10 + 9; break;
    default: return -1; break;
    }
    if(ritorno==false)
        return -1;
    else
        return ritorno;
}

void ConsoleMessage( msgType thisType, msgSpeed thisSpeed, string message ){

    indent();

    switch(thisType)
    {
        default:
        case msgType_default:
        case msgType_info:          cout << "Info: "; break;
        case msgType_warning:       cout << "Warning: "; break;
        case msgType_error:         cout << "Error: "; break;
        case msgType_INFO:          cout << "INFO: "; break;
        case msgType_WARNING:       cout << "WARNING: "; break;
        case msgType_ERROR:         cout << "ERROR: "; break;
        case msgType_debug:         cout << "Debug: "; break;
        case msgType_system:        cout << "System: "; break;
        case msgType_fatalError:    cout << "fatal error: "; break;
    }

    cout << message;

    switch(thisSpeed){
        default:
        case msgSpeed_default:
        case msgSpeed_auto:            aspettaMilliSecondi(600); break;
        case msgSpeed_fast:            break;
        case msgSpeed_user:            wait( "Press any key to continue." ); break;
    }
}
