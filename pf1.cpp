//=============================================================================
// Name: Christian Glover
// E-mail: cglover@usc.edu
// Description: provide a 1-2 sentence description of your program:
// This program is meant to help undergraduate students select their dorm for the 2024-2025 school year!
// In it students will be asked a few questions in which the program gets to know them and their preferences for their new housing!
// Good Luck and Have Fun!
// ------------------------ Test case Inputs ----------------------------------
//  Test 1 input (positive): 
//   cin 1: Your Name (Literally type in your name)
//   cin 2: 1
//   cin 3: undergraduate
//   cin 4: freshman
//   cin 5: 1

//  Test 1 output:
//    out 1: "Greetings (your name)!" (welcoming message in the couts below)
//    out 2: "Are you an undergraduate or graduate student" prompt (follow up questions)
//    out 3: "What year will you be in progression to your degree next fall?"(follow up questions)
//    out 4: "Welcome to Campus! You may proceed to the preference section!"
//    out 5: Randomized prompt will come up, to which the user can agree, or dissagree and wait for another prompt
//    out 6: Recommended housing in relation to that prompt will be shown to the user, the user will be thanked, 
//           and the program will end. 
// 
//  Test 2 input (positive):
//   cin 1: Your Name (Literally type in your name)
//   cin 2: 1
//   cin 3: undergraduate
//   cin 4: sophmore (or whatever your current year is if you are an undergraduate TA)
//   cin 5: 0
//   cin 6: 1
//   
//  Test 2 output:
//   out 1: "Greetings (your name)!" (welcoming message in the couts below)
//   out 2: "Are you an undergraduate or graduate student" prompt (follow up questions)
//   out 3: "What year will you be in progression to your degree next fall?"(follow up questions)
//   out 4: "Welcome Back! You may proceed to the preference section!"
//   out 5: Randomized prompt will come up, to which the user can agree, or dissagree and wait for another prompt
//   out 6: Another prompt will appear, to which the user can agree, or dissagree and wait for another prompt
//   out 7: Recommended housing in relation to that prompt will be shown to the user, the user will be thanked, 
//          and the program will end. 
//
//  Test 3 input (negative):
//   cin 1: Your Name (Literally type in your name)
//   cin 2: 0
//
//  Test 3 output:
//   out 1: "Greetings (your name)!" (welcoming message in the couts below)
//   out 2: "This form is for Undergraduate students only, but
//          if the need persists, then please visit: https://nup.och101.com for other housing options
//          Thank you, and have a great day!"
//
//  Test 4 input (negative):
//   cin 1: Your Name (Literally type in your name)
//   cin 2: 1
//   cin 3: undergraduate
//   cin 4: s
//
//  Test 4 output:
//   out 1: "Greetings (your name)!" (welcoming message in the couts below)
//   out 2: "Are you an undergraduate or graduate student" prompt (follow up questions)
//   out 3: "What year will you be in progression to your degree next fall?"(follow up questions)
//   out 4: "ill input detected, please start over!"
//  ...
//
//=============================================================================

// ------------ Add #includes and other statements here ----------


#include <bits/stdc++.h>
using namespace std;

//g++ -o pf1 pf1.cpp && ./pf1

// ------------ Add your main() function below ----------

int i;

void selector()
{

  if (i == 1)
  {
    cout << "\n" << "Do you enjoy a nice gentrified enviornment that is reletively new to campus" << endl << "and is surrounded by folliage, slaves of starbucks and cava, and valley girl dialects?" << "\n" << "\n";
  }
  else if(i == 2)
  {
    cout << "\n" << "Are you in the schools of design or engineering, and do you enjoy a calm enviornment" << endl << "with constant police presence and a red light camera waking you up at 3AM every night?" << "\n" << "\n";
  }
  else if(i == 3)
  {
    cout << "\n" << "Do you just wanna get away from it all, while being closer and closer to the enviornment" << endl << "that you'll be working in soon, with people digging in your trash for" << endl << "that sandwich you threw away yesterday?" << "\n" << "\n";
  }
  else if(i == 4)
  {
    cout << "\n" << "Are you the life of the party, and are you willing to" << endl << "sacrifice your future that you've worked so hard for" << "\n" << "to the greek org of your dreams?" << "\n" << "\n";
  }

}

int main(){
 
string name;
string status; 
vector <string> villageF {"Cale & Irani", "McCarthy Honors College"};
vector <string> villageU {"Cadinal Gardens", "UVE-NBC", "UVN-CRC"};
vector <string> upcSouthF {"Parkside Apartments", "Parkside International Residential College", "Parkside Arts and Humanities"};
vector <string> upcSouthU {"Parkside Apartments"};
vector <string> upcNorthF {"Webb Tower", "Cardinal Gardens"};
vector <string> upcNorthU {"Troy Hall", "Cardinal N Gold"};
vector <string> fratRowF {"Cardinal Gardens", "Cale & Irani"};
vector <string> fratRowU {"Cardinal N Gold", "Annenberg House"};
bool desire = false;
bool inquiry = false;



  cout << "Please enter your name here: " << endl << "\n";

  cin >> name; 

  cout << "------------------------------" << endl;
  cout << "Greetings " << name << "!" << endl;
  cout << "------------------------------" << endl;
  cout << "Welcome to Dorm Selector Simulator! Here after a few short questions, " << endl << "you will be recommended housing for the 2024-2025 School Year!" << "\n" << "(Questionaire is satire plz don't expell me XD)" << "\n" << "\n";
  cout << "If not specified, Answer 1 for yes and 0 for no for questions!" << endl;


  cout << "\n" << "Are you a USC student or faculty?" << "\n" << "\n";

  cin >> inquiry;

  if(inquiry == true)
  {

    cout << "\n" << "Are an Undergraduate or Graduate student?" << "\n" << "(here you can type in your answer! But only say Undergraduate or Graduate)" << "\n" << "\n";

    cin >> status;

    if((status == "undergraduate" ) || (status == "Undergraduate"))
    {

      cout << "\n" << "What year will you be in progression torwards your degreee next fall?" << "\n" << "(Enter Freshman, Sophmore, Junior, or Senior)" << "\n" << "\n";

      cin >> status; 

      if((status == "freshman") || (status == "Freshman"))
      {
        cout << "Welcome to campus! You may proceed to the preference section!" << "\n" << "(There will only be four random questions to choose from, so don't be picky!)" << "\n" << "\n";

        status = "freshman";
      }
      else if ((status == "sophmore") || (status == "Sophmore") || (status == "junior") || (status == "Junior") || (status == "senior") || (status == "Senior"))
      {
        cout << "Welcome back! You may proceed to the preference section!" << "\n" << "(There will only be four random questions to choose from, so don't be picky!)" << "\n" << "\n";

        status = "undergraduate";
      }
      else 
      {
        cout << "ill input detected, please start over!" << endl;

        exit(0);
      }
    }
    else 
    {
      cout << "\n" << "This form is for Undergraduate students only, but" << "\n" << "if the need persists, then please visit: https://nup.och101.com" << "\n" << "\n";

      cout << "Thank you, and have a great day!" << endl; 

      exit(0);
    }
  }
  else
  {
    cout << "This form is for Undergraduate students only, but" << "\n" << "if the need persists, then please visit: https://nup.och101.com for other housing options" << "\n" << "\n";

    cout << "Thank you, and have a great day!" << endl;

    exit(0);
  }



  while(desire != true)
  {
    srand (time(NULL));

    i = rand() % 4 + 1;

    if (desire != true)
    { 
       selector();
    }

    cin >> desire;
  }

  if((desire == true) && (i == 1))
  {
    if(status == "freshman")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < villageF.size(); j++)
      {
        cout << villageF[j] << "\n";
      }
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
    else if (status == "undergraduate")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < villageU.size(); j++)
      {
        cout << villageU[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
  }
  
  if((desire == true) && (i == 2))
  {
    if(status == "freshman")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < upcSouthF.size(); j++)
      {
        cout << upcSouthF[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;

    }
    else if (status == "undergraduate")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < upcSouthU.size(); j++)
      {
        cout << upcSouthU[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
  }

  if((desire == true) && (i == 3))
  {
    if(status == "freshman")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < upcNorthF.size(); j++)
      {
        cout << upcNorthF[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
    else if (status == "undergraduate")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < upcNorthU.size(); j++)
      {
        cout << upcNorthU[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
  }

  if((desire == true) && (i == 4))
  {
    if(status == "freshman")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < fratRowF.size(); j++)
      {
        cout << fratRowF[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
    else if (status == "undergraduate")
    {
      cout << "\n" << "We would recommend: " << "\n" << "\n";

      for(int j = 0; j < fratRowU.size(); j++)
      {
        cout << fratRowU[j] << "\n";
      }
      
      cout << "\n" << "Thank you for using our program " << name << ", and good luck!" << endl;
    }
  }

  return 0;
}

