// ONE WORD ADD ON A STORY GAME
// Demonstration of arrays and string class

#include <iostream>
#include <string>

using namespace std;

int main( ){

const int WORD_MAX = 250;

string s;
string story[WORD_MAX]; //this makes an array of the string type

cout <<"\n WELCOME TO STORY BUILDER!\n" <<
"\n Each person adds one word (and accompanying punctuation) to the story." <<
"\n When someone wishes to end the story, he or she types END in all caps.\n" <<
"\n Your story has a 250 word maximum!" <<
"\n Have fun!!!\n\n"<< endl;

int count = 0;
while ((s!="END") && (count<WORD_MAX)){
      cout << " new word " << count+1 << ": ";
      cin >> s;
      story[count]=s; //Adds the string to the array
      count++;
}

cout << endl;

for (int i=0; i<count-1; i++){ //Prints out the entire story omitting "END".
    cout << story[i] << " ";
}

cout <<"\n\nThanks for your great story!!\n"<<endl;

char endit;
cin >> endit;

return 0;
}

