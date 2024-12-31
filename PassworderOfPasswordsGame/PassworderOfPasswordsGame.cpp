// im actually crashing out making this stupid program askjlbfhdsfk vufjhegshvkfiuhdffkyigopjhtrbd xiolj

//you decompiling rat!! how'd you get in here!! ...what? the source code was available?
//and it was freely available on the github repository for this??? your joking!
//surely, it isn't available by https://github.com/users/SudoNotNoted2007?!?

//ok funny joke over, thanks for downloading this thingy that was intended
//to be just a stupid test

#include <cstdlib>
#include <iostream>
#include <fstream>
//#include <cmath>
#include <cstdio>
#include <string>
//#include <assert.h>
//#include <time.h>
//#include <mciapi.h>

#include <shlobj.h>
#include <stdio.h>
#include <filesystem>
#include <Windows.h>   //where the compile errors happen on wandbox
#pragma comment(lib, "Winmm.lib")
#include <mmsystem.h>

namespace boring = std;

//std::string OutputFolder = "C:\\Users\\...\\Documents\\PASSWORDS";
std::string password{};     //waits for user input

int main()
{

    //PlaySound(TEXT("RooftopRun.mp3"), NULL, SND_FILENAME | SND_ASYNC);
    mciSendString("open \"RooftopRun.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3 repeat", NULL, 0, NULL);



    char documentsPath[MAX_PATH];

    //CreateDirectory (L"...\\Documents\\PASSWORDS", NULL);
    if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_PERSONAL, NULL, 0, documentsPath))) {
        // Append the folder name to the path
        std::string dirPath = std::string(documentsPath) + "\\PASSWORDSER";

        // Attempt to create the directory
        if (CreateDirectory(dirPath.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
            std::cout << "FILES CREATED!!!!" << std::endl;

            // Create and write to the first file
            std::ofstream file1(dirPath + "\\HEH.txt");
            if (file1.is_open()) {
                file1 << "HEH! YOU THOUGHT THIS WAS THE PASSWORD?? FRICKIN STUPID!! HEH!";
                file1.close();
            }
            else {
                std::cerr << "YO, A MAJOR FILE [[HEH.txt]] FAILED TO OPEN. MAYBE REOPEN THE PROGRAM?!?!?!?" << std::endl;
            }

            // Create and write to the second file
            std::ofstream file2(dirPath + "\\STUPIDBIGSTUPID.txt");
            if (file2.is_open()) {
                file2 << "HEH HEH HEH. SUPER BIG STUPID.";
                file2.close();
            }
            else {
                std::cerr << "YO, A MAJOR FILE [[STUPIDBIGSTUPID.txt]] FAILED TO OPEN. MAYBE REOPEN THE PROGRAM?!?!?!?" << std::endl;
            }
            std::ofstream file3(dirPath + "\\THEPASSWORD.txt");
            if (file3.is_open()) {
                file3 << "BRO. YOU IDIOT. YOU ACTUALLY THOUGHT THIS WAS IT??? DIG THROUGH MORE OF THE TEXT FILES YOU DING DONG!!!";
                file3.close();
            }
            else {
                std::cerr << "YO, A MAJOR FILE [[THEPASSWORD.txt]] FAILED TO OPEN. MAYBE REOPEN THE PROGRAM?!?!?!?" << std::endl;
            }
            std::ofstream file4(dirPath + "\\HEHMAYBETHISISIT.txt");
            if (file4.is_open()) {
                file4 << "TOP 10 EPIC FAILS: THIS IDIOT THINKING THE PASSWORD IS IN THIS!!!! HEH!!!";
                file4.close();
            }
            else {
                std::cerr << "YO, A MAJOR FILE [[HEHMAYBETHISISIT.txt]] FAILED TO OPEN. MAYBE REOPEN THE PROGRAM?!?!?!?" << std::endl;
            }
            std::ofstream file5(dirPath + "\\HEHMOREFILES.txt");
            if (file5.is_open()) {
                file5 << "I HATE CODING THIS STUPID FILE CREATION THING SO MUCH BUT WHATEVER ITS STILL PRETTY AWESOME SAUCEOME\n" << "HEH! YOU SEEM PRETTY COOL FOR LISTENING, THE PASSWORD IS 'supercoolwords'";
                file5.close();
            }
            else {
                std::cerr << "YO, A MAJOR FILE [[HEHMAYBETHISISIT.txt]] FAILED TO OPEN. MAYBE REOPEN THE PROGRAM?!?!?!?" << std::endl;
            }
        }
        else {
            std::cerr << "Failed to create directory." << std::endl;
        }
    }
    else {
        std::cerr << "Failed to get the Documents folder path." << std::endl;
    }

    SetConsoleTitle("PASSWORDEROFPASSWORDS");
    using namespace boring;

    std::cout << "PLEASE ENETER IN THE PASSWORD ASSOCIATED WITHIN THE FILES." << std::endl;

    boring::cin >> password;

    if (password == "supercoolwords")   //if the user input equals 
    {
        std::cout << "String Worked Successfully!" << std::endl;
        std::cout << "Find the folder and text files to continue on." << std::endl;
        system("pause");         //thank you forums for some code snippets!!
        mciSendString("close mp3", NULL, 0, NULL);
        return EXIT_SUCCESS;
    }
    if (password == "kevin" || password == "KEVIN")
    {
        std::cout << "Impossible. You found the secret kevin reference." << std::endl;
        system("pause");
        return EXIT_SUCCESS;
    }
    else
    {
        std::cout << "String Failed" << std::endl;
        std::cout << "start actually searching through your computer for the file dimwit or im actually going to go insane" << std::endl;
        system("pause");   //system("pause") but better
        return EXIT_FAILURE;
    };
}