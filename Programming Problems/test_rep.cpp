#include <iostream>
#include <string>

struct World_List_Type
{
  vector<string>;
};

int main(){
    
  Word_List_Type words, sequential_words;

  cout << "Enter words:" << endl;
  read_words(words);

  find_words_with_sequential_letters(words, sequential_words);

  cout << "Words containing sequential letters:" << endl;
  print(sequential_words);
  
  cout << "End of program.";

    return 0;
}