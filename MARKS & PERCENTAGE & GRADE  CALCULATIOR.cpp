#include<iostream>
#include<conio.h>
#include<string>
#include<ctime>
using namespace std;
int main()
{
	float firstlanguage, secondlanguage, mathematics, physicalscience, lifescience, history, geography, optional, marks, perc, rating ;
	std::string fullname ;
	std::cout << "THANKS FOR DOWNLOADING THIS ANDROID IDE APP, THIS APP IS TOTALY SAFE AS IT IS EXPORTED FORM C4DROID APP WHICH IS GOOGLE PLAY PROTECTED ITS' TOTALLY SAFE FOR YOUR ANDROID DEVICE" << "\n" ;
	std::cout << "MARKS AND PERCENTAGE CALCULATOR APP FOR WBBSE 10TH / MADHYAMIK APPEARING STUDENTS " << "\n" ;
	std::cout << "THIS MARKS CALCULATION APP IS WRITTEN IN C++ LANGUAGE AND IS EXPORTED FROM C4DROID APPS, THIS APP IS ONLY FOR ANDROID USERS, CODE WRITTEN AND EXPORTED INTO ANDROID APPS BY ARGHYADIP KARMAKAR" << "\n" ;
	std::cout << "Privacy Policy : WE ARE JUST ASKING YOUR FULL NAME FOR OUTPUT RESULT PURPOSE ONLY, WE WILL NOT LEAKE ANYTHING OF YOUR PRIVACY TO ANYWHERE IN ANY SITUATIONS!! WE RESPECT USERS PRIVACY POLICY...." << "\n";
	time_t now = time(0);
	char* dt = ctime(&now);
	std::cout << "WBBSE MADHYAMIK RESULT 2022 : " << dt << endl << "\n" ;
	std::cout << "Enter marks obtained in seven subjects out of 100 one by one as directed below" << "\n" ;
	std::cout << "Enter the marks obtained in First Language (Bengali/Hindi/English/Urdu/Nepali) :" << "\n" ;
	std::cin >> firstlanguage;
	std::cout << "Enter the marks obtained in Second Language (English) :" << "\n" ;
	std::cin >> secondlanguage;
	std::cout << "Enter the marks obtained in mathematics :" << "\n" ;
	std::cin >> mathematics;
	std::cout << "Enter the marks obtained in physical science :" << "\n" ;
	std::cin >> physicalscience;
	std::cout << "Enter the marks obtained in life science :" << "\n" ;
	std::cin >> lifescience ;
	std::cout << "Enter the marks obtained in history :" << "\n" ;
	std::cin >> history;
	std::cout << "Enter the marks obtained in geography :" << "\n" ;
	std::cin >> geography;
	std::cout << "Enter the marks obtained in optional elective if any, (if there is no please give 00 as input to avoid error) :" << "\n" ;
	std::cin >> optional;
	marks = firstlanguage + secondlanguage + mathematics + physicalscience + lifescience + history + geography ;
	perc = (marks/700) * 100 ;
	std::cout << "\n" << "WARNING" << "\n" << "PLEASE CROSSCHECK THE MARKS & PERCENTAGE WITH YOUR ORIGINAL MARKSHEET ISSUED BY THE RESPECTIVE BOARD, WE WILL NOT RESPONSIBLE FOR ANY TYPES OF ERROR OR MISMATCH" <<"\n" ;
	std::cout << "ENTER YOUR FULL NAME :" << "\n" ;
	std::cin >> fullname;
	std::cout << "CONGRATULATION" << "\n" << fullname << "\n" ;
	if (perc >= 90){
        std::cout<<"Your Grade is AA";
    }
    else if (perc >= 80){
        std::cout<<"Your Grade is A+";
    }
    else if (perc >= 60){
        std::cout<<"Your Grade is A";
    }
    else if (perc >= 45){
        std::cout<<"Your Grade is B+";
    }
    else if (perc >= 35){
        std::cout<<"Your Grade is B";
    }
    else if (perc >= 25){
        std::cout<<"Your Grade is C";
    }
    else if (perc <= 25){
        std::cout<<"Your Grade is D" <<"\n"<< "DISQUALIFIED";
    }
    else{
        std::cout<<"Enter Valid Marks";
    }
	std::cout << "\n" << "Total marks obtained out of 700 is:" << marks ;
	std::cout << "\n" << "The percentage marks are : " << perc << "%" << "\n";
	std::cout << "For the source code OR any queries please visit https://www.codewitharghya.epizy.com," << "\n" ;
	std::cout << "Mail for any copyright issue  - arghyadipkarmakar4u@gmail.com" << "\n"  ;
	std::cout << "THANK YOU.................." << "\n" ;
	return 0;
}