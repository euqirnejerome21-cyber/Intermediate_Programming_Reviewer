#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

struct Question
{
    string question;
    string choice[4];
    char answer;
};

vector<Question> quiz;

void addQuestions();

int main()
{
    srand(time(NULL));

    addQuestions();

    random_shuffle(quiz.begin(), quiz.end());

    int score = 0;
    char ans;

    for(int i=0;i<(int)quiz.size();i++)
    {
        while(true)
        {
            system("cls");

            cout<<"=========================================="<<endl;
            cout<<"         CC103 QUIZ REVIEWER"<<endl;
            cout<<"=========================================="<<endl;
            cout<<"Question "<<i+1<<" of "<<quiz.size()<<endl<<endl;

            cout<<quiz[i].question<<endl<<endl;

            cout<<"A. "<<quiz[i].choice[0]<<endl;
            cout<<"B. "<<quiz[i].choice[1]<<endl;
            cout<<"C. "<<quiz[i].choice[2]<<endl;
            cout<<"D. "<<quiz[i].choice[3]<<endl;

            cout<<"\nAnswer : ";
            cin>>ans;

            ans=toupper(ans);

            if(ans==quiz[i].answer)
            {
                score++;
                cout<<"\nCorrect!"<<endl;
                system("pause");
                break;
            }
            else
            {
                cout<<"\nWrong Answer!"<<endl;
                cout<<"Try Again..."<<endl;
                system("pause");
            }
        }
    }

    system("cls");

    cout<<"======================================"<<endl;
    cout<<"         QUIZ FINISHED"<<endl;
    cout<<"======================================"<<endl;

    cout<<"\nScore : "<<score<<" / "<<quiz.size()<<endl;

    double percent=(double)score/quiz.size()*100.0;

    cout<<"Percentage : "<<percent<<"%"<<endl;

    if(percent==100)
        cout<<"\nExcellent!"<<endl;
    else if(percent>=75)
        cout<<"\nVery Good!"<<endl;
    else
        cout<<"\nKeep Studying!"<<endl;

    system("pause");
}

void addQuestions()
{
    Question q;

    // ==== QUESTION 1 ====
    q.question="What is recursion?";
    q.choice[0]="Repeating a loop forever";
    q.choice[1]="A function that calls itself";
    q.choice[2]="A function with many parameters";
    q.choice[3]="A function without a return value";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 2 ====
    q.question="Which condition stops a recursive function from calling itself?";
    q.choice[0]="Loop condition";
    q.choice[1]="Base case";
    q.choice[2]="Constructor";
    q.choice[3]="Destructor";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 3 ====
    q.question="What does the recursive function series(n) compute?";
    q.choice[0]="Product of numbers from 1 to n";
    q.choice[1]="Sum of numbers from 1 to n";
    q.choice[2]="Square of n";
    q.choice[3]="Factorial of n";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 4 ====
    q.question="A structure is best described as:";
    q.choice[0]="A collection of functions";
    q.choice[1]="A collection of variables of different data types";
    q.choice[2]="A class with constructors";
    q.choice[3]="A pointer variable";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 5 ====
    q.question="Which keyword is used to declare a structure?";
    q.choice[0]="class";
    q.choice[1]="typedef";
    q.choice[2]="struct";
    q.choice[3]="object";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 6 ====
    q.question="Which operator is used to access members of a structure variable?";
    q.choice[0]="->";
    q.choice[1]="::";
    q.choice[2]=".";
    q.choice[3]="*";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 7 ====
    q.question="What is the purpose of malloc()?";
    q.choice[0]="To free memory";
    q.choice[1]="To allocate dynamic memory";
    q.choice[2]="To sort students";
    q.choice[3]="To open files";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 8 ====
    q.question="Which function releases dynamically allocated memory?";
    q.choice[0]="realloc()";
    q.choice[1]="fclose()";
    q.choice[2]="free()";
    q.choice[3]="fread()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 9 ====
    q.question="Which data structure stores both quotient and remainder?";
    q.choice[0]="Array";
    q.choice[1]="Pointer";
    q.choice[2]="Structure";
    q.choice[3]="Class";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 10 ====
    q.question="What is the return type of intDiv()?";
    q.choice[0]="int";
    q.choice[1]="float";
    q.choice[2]="div";
    q.choice[3]="student";
    q.answer='C';
    quiz.push_back(q);

    // DITO NATIN IDADAGDAG ANG QUESTIONS 11-180
    
        // ==== QUESTION 11 ====
    q.question="Binary files are commonly used to store:";
    q.choice[0]="Only text";
    q.choice[1]="Arrays and structures";
    q.choice[2]="Images only";
    q.choice[3]="Characters only";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 12 ====
    q.question="Which function opens a file?";
    q.choice[0]="fread()";
    q.choice[1]="fwrite()";
    q.choice[2]="fopen()";
    q.choice[3]="fclose()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 13 ====
    q.question="Which file mode is used for writing binary files?";
    q.choice[0]="r";
    q.choice[1]="w";
    q.choice[2]="rb";
    q.choice[3]="wb";
    q.answer='D';
    quiz.push_back(q);

    // ==== QUESTION 14 ====
    q.question="Which file mode is used for reading binary files?";
    q.choice[0]="rb";
    q.choice[1]="wb";
    q.choice[2]="r+";
    q.choice[3]="a";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 15 ====
    q.question="Which function writes data into a binary file?";
    q.choice[0]="fread()";
    q.choice[1]="fwrite()";
    q.choice[2]="fopen()";
    q.choice[3]="scanf()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 16 ====
    q.question="Which function reads data from a binary file?";
    q.choice[0]="fwrite()";
    q.choice[1]="fclose()";
    q.choice[2]="fread()";
    q.choice[3]="printf()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 17 ====
    q.question="Which header file provides the FILE data type?";
    q.choice[0]="iostream";
    q.choice[1]="cstdlib";
    q.choice[2]="stdio.h";
    q.choice[3]="string";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 18 ====
    q.question="Which function changes the size of previously allocated memory?";
    q.choice[0]="malloc()";
    q.choice[1]="realloc()";
    q.choice[2]="calloc()";
    q.choice[3]="free()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 19 ====
    q.question="Which memory allocation function initializes allocated memory to zero?";
    q.choice[0]="malloc()";
    q.choice[1]="realloc()";
    q.choice[2]="calloc()";
    q.choice[3]="free()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 20 ====
    q.question="A class is best defined as:";
    q.choice[0]="A function";
    q.choice[1]="A blueprint for creating objects";
    q.choice[2]="A structure with arrays";
    q.choice[3]="A recursive algorithm";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 21 ====
    q.question="An object is:";
    q.choice[0]="A loop";
    q.choice[1]="A pointer";
    q.choice[2]="An instance of a class";
    q.choice[3]="A function";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 22 ====
    q.question="Which access specifier allows members to be accessed outside the class?";
    q.choice[0]="private";
    q.choice[1]="protected";
    q.choice[2]="public";
    q.choice[3]="hidden";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 23 ====
    q.question="Which access specifier allows access only within the class?";
    q.choice[0]="public";
    q.choice[1]="private";
    q.choice[2]="protected";
    q.choice[3]="external";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 24 ====
    q.question="Which operator is used when implementing class methods outside the class?";
    q.choice[0]=".";
    q.choice[1]="->";
    q.choice[2]="::";
    q.choice[3]="*";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 25 ====
    q.question="What is the purpose of a constructor?";
    q.choice[0]="Deletes objects";
    q.choice[1]="Initializes an object during creation";
    q.choice[2]="Reads files";
    q.choice[3]="Sorts arrays";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 26 ====
    q.question="Which method is automatically called when an object is destroyed?";
    q.choice[0]="Constructor";
    q.choice[1]="Destructor";
    q.choice[2]="Main function";
    q.choice[3]="Friend function";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 27 ====
    q.question="Which symbol appears before the destructor's name?";
    q.choice[0]="@";
    q.choice[1]="#";
    q.choice[2]="~";
    q.choice[3]="%";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 28 ====
    q.question="In the cArray class, which method displays the contents of the array?";
    q.choice[0]="getData()";
    q.choice[1]="sortData()";
    q.choice[2]="showData()";
    q.choice[3]="swapData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 29 ====
    q.question="In the sortData(int mode) method, what does mode = 0 represent?";
    q.choice[0]="Descending order";
    q.choice[1]="Ascending order";
    q.choice[2]="Random order";
    q.choice[3]="Reverse order";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 30 ====
    q.question="Which function swaps two integer values in the cArray class?";
    q.choice[0]="getData()";
    q.choice[1]="showData()";
    q.choice[2]="swapData()";
    q.choice[3]="sortData()";
    q.answer='C';
    quiz.push_back(q);
    
        // ==== QUESTION 31 ====
    q.question="Which function closes an opened file after processing?";
    q.choice[0]="fopen()";
    q.choice[1]="fread()";
    q.choice[2]="fclose()";
    q.choice[3]="fwrite()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 32 ====
    q.question="What is the primary purpose of fwrite()?";
    q.choice[0]="Read data from a file";
    q.choice[1]="Write data to a binary file";
    q.choice[2]="Delete a file";
    q.choice[3]="Rename a file";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 33 ====
    q.question="Before writing an array to a binary file, the program first stores:";
    q.choice[0]="The file name";
    q.choice[1]="The size of the array in bytes";
    q.choice[2]="The number of elements in the array";
    q.choice[3]="The memory address of the array";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 34 ====
    q.question="Which statement correctly writes the number of elements (N) into a binary file?";
    q.choice[0]="fwrite(arx, sizeof(float), N, fp);";
    q.choice[1]="fwrite(&N, sizeof(int), 1, fp);";
    q.choice[2]="fread(&N, sizeof(int), 1, fp);";
    q.choice[3]="fclose(fp);";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 35 ====
    q.question="Which function copies data from a binary file into memory?";
    q.choice[0]="fwrite()";
    q.choice[1]="fread()";
    q.choice[2]="fopen()";
    q.choice[3]="malloc()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 36 ====
    q.question="If fopen(\"scores.dat\",\"rb\") returns NULL, it means:";
    q.choice[0]="The file was successfully opened";
    q.choice[1]="The file contains no data";
    q.choice[2]="The file could not be opened";
    q.choice[3]="The file is corrupted";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 37 ====
    q.question="Which header file provides malloc(), calloc(), and realloc()?";
    q.choice[0]="stdio.h";
    q.choice[1]="iostream";
    q.choice[2]="cstdlib";
    q.choice[3]="string";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 38 ====
    q.question="Which function allocates memory but does NOT initialize its contents?";
    q.choice[0]="calloc()";
    q.choice[1]="realloc()";
    q.choice[2]="malloc()";
    q.choice[3]="free()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 39 ====
    q.question="Which function allocates memory and initializes all bytes to zero?";
    q.choice[0]="realloc()";
    q.choice[1]="malloc()";
    q.choice[2]="calloc()";
    q.choice[3]="fclose()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 40 ====
    q.question="Which function changes the size of an existing dynamic memory allocation?";
    q.choice[0]="malloc()";
    q.choice[1]="realloc()";
    q.choice[2]="calloc()";
    q.choice[3]="free()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 41 ====
    q.question="In object-oriented programming, data and methods are combined through:";
    q.choice[0]="Recursion";
    q.choice[1]="Encapsulation";
    q.choice[2]="Iteration";
    q.choice[3]="Compilation";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 42 ====
    q.question="Which access specifier is accessible only within the class?";
    q.choice[0]="public";
    q.choice[1]="protected";
    q.choice[2]="private";
    q.choice[3]="global";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 43 ====
    q.question="Which access specifier allows access from derived (child) classes?";
    q.choice[0]="public";
    q.choice[1]="protected";
    q.choice[2]="private";
    q.choice[3]="static";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 44 ====
    q.question="Which section of a class usually contains the methods that users of the class can call?";
    q.choice[0]="private";
    q.choice[1]="protected";
    q.choice[2]="public";
    q.choice[3]="hidden";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 45 ====
    q.question="Which special member function is automatically executed when an object is created?";
    q.choice[0]="Destructor";
    q.choice[1]="Constructor";
    q.choice[2]="Main";
    q.choice[3]="Friend function";
    q.answer='B';
    quiz.push_back(q);
    
        // ==== QUESTION 46 ====
    q.question="Which special member function is automatically executed when the program terminates or an object is destroyed?";
    q.choice[0]="Constructor";
    q.choice[1]="Destructor";
    q.choice[2]="sortData()";
    q.choice[3]="getData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 47 ====
    q.question="What operator is used to define a class method outside the class definition?";
    q.choice[0]=".";
    q.choice[1]="->";
    q.choice[2]="::";
    q.choice[3]="*";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 48 ====
    q.question="In the cArray example, what is the data type of arx?";
    q.choice[0]="float pointer";
    q.choice[1]="int pointer";
    q.choice[2]="char pointer";
    q.choice[3]="double pointer";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 49 ====
    q.question="Which method in the cArray class exchanges the values of two integers?";
    q.choice[0]="showData()";
    q.choice[1]="swapData()";
    q.choice[2]="sortData()";
    q.choice[3]="getData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 50 ====
    q.question="Which method is responsible for entering values into the dynamic array?";
    q.choice[0]="getData()";
    q.choice[1]="showData()";
    q.choice[2]="swapData()";
    q.choice[3]="sortAsc()";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 51 ====
    q.question="Which method sorts the array in ascending order?";
    q.choice[0]="showData()";
    q.choice[1]="sortDesc()";
    q.choice[2]="sortAsc()";
    q.choice[3]="swapData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 52 ====
    q.question="Which method sorts the array in descending order?";
    q.choice[0]="sortData()";
    q.choice[1]="sortDesc()";
    q.choice[2]="showData()";
    q.choice[3]="getData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 53 ====
    q.question="In the sortData() method, what happens when mode is not equal to 0?";
    q.choice[0]="No sorting occurs.";
    q.choice[1]="The array is sorted in ascending order.";
    q.choice[2]="The array is sorted in descending order.";
    q.choice[3]="The array is deleted.";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 54 ====
    q.question="Which keyword is used to refer to the current object inside a class?";
    q.choice[0]="self";
    q.choice[1]="object";
    q.choice[2]="this";
    q.choice[3]="current";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 55 ====
    q.question="What is the main purpose of the showData() method?";
    q.choice[0]="Read data from a file.";
    q.choice[1]="Display the contents of the array.";
    q.choice[2]="Allocate memory.";
    q.choice[3]="Delete an array.";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 56 ====
    q.question="Which function is used to release dynamically allocated memory in the destructor?";
    q.choice[0]="delete";
    q.choice[1]="realloc()";
    q.choice[2]="free()";
    q.choice[3]="fclose()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 57 ====
    q.question="What is the default sorting order in the sortData() method?";
    q.choice[0]="Descending";
    q.choice[1]="Ascending";
    q.choice[2]="Random";
    q.choice[3]="Alphabetical";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 58 ====
    q.question="In the example program, cArray array; creates:";
    q.choice[0]="A structure";
    q.choice[1]="A function";
    q.choice[2]="An object of class cArray";
    q.choice[3]="A pointer";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 59 ====
    q.question="Which of the following is NOT an example of a public method in the cArray class?";
    q.choice[0]="getData()";
    q.choice[1]="showData()";
    q.choice[2]="swapData()";
    q.choice[3]="sortData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 60 ====
    q.question="Which of the following best describes a class?";
    q.choice[0]="A file pointer";
    q.choice[1]="A blueprint used to create objects";
    q.choice[2]="A recursive function";
    q.choice[3]="A binary file";
    q.answer='B';
    quiz.push_back(q);
    
        // ==== QUESTION 61 ====
    q.question="Which of the following best describes a binary file?";
    q.choice[0]="A file containing only text characters";
    q.choice[1]="A file containing blocks of data";
    q.choice[2]="A file containing source code only";
    q.choice[3]="A file containing images only";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 62 ====
    q.question="Which function is used to create or open a binary file?";
    q.choice[0]="fopen()";
    q.choice[1]="fread()";
    q.choice[2]="fwrite()";
    q.choice[3]="fclose()";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 63 ====
    q.question="Which file mode is used to read a binary file?";
    q.choice[0]="w";
    q.choice[1]="wb";
    q.choice[2]="rb";
    q.choice[3]="r+";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 64 ====
    q.question="Which file mode is used to write a binary file?";
    q.choice[0]="rb";
    q.choice[1]="wb";
    q.choice[2]="w";
    q.choice[3]="a";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 65 ====
    q.question="Which function is responsible for saving data into a binary file?";
    q.choice[0]="fread()";
    q.choice[1]="fopen()";
    q.choice[2]="fwrite()";
    q.choice[3]="fclose()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 66 ====
    q.question="Which function is used to retrieve data from a binary file?";
    q.choice[0]="fwrite()";
    q.choice[1]="fread()";
    q.choice[2]="fclose()";
    q.choice[3]="printf()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 67 ====
    q.question="Which data type is required for a file pointer in C/C++?";
    q.choice[0]="int";
    q.choice[1]="FILE";
    q.choice[2]="char";
    q.choice[3]="float";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 68 ====
    q.question="Which header file must be included to use the FILE data type?";
    q.choice[0]="string";
    q.choice[1]="cstdlib";
    q.choice[2]="stdio.h";
    q.choice[3]="iomanip";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 69 ====
    q.question="Why is the value of N written first into the binary file?";
    q.choice[0]="To store the file name";
    q.choice[1]="To determine how many elements should be read later";
    q.choice[2]="To initialize memory";
    q.choice[3]="To sort the array";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 70 ====
    q.question="Which function permanently saves the file and releases the file pointer?";
    q.choice[0]="free()";
    q.choice[1]="fclose()";
    q.choice[2]="fopen()";
    q.choice[3]="realloc()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 71 ====
    q.question="Which memory allocation function accepts only one argument?";
    q.choice[0]="calloc()";
    q.choice[1]="realloc()";
    q.choice[2]="malloc()";
    q.choice[3]="free()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 72 ====
    q.question="Which memory allocation function accepts two arguments?";
    q.choice[0]="malloc()";
    q.choice[1]="calloc()";
    q.choice[2]="realloc()";
    q.choice[3]="free()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 73 ====
    q.question="What is the main advantage of using sizeof()?";
    q.choice[0]="It deletes memory.";
    q.choice[1]="It calculates the size of a data type or object.";
    q.choice[2]="It opens files.";
    q.choice[3]="It sorts arrays.";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 74 ====
    q.question="Which statement correctly allocates memory for N floating-point numbers?";
    q.choice[0]="malloc(sizeof(int) * N)";
    q.choice[1]="malloc(sizeof(float) * N)";
    q.choice[2]="calloc(sizeof(float), N)";
    q.choice[3]="free(N)";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 75 ====
    q.question="What value ends the data entry loop in the binary file example?";
    q.choice[0]="-1";
    q.choice[1]="100";
    q.choice[2]="1";
    q.choice[3]="0";
    q.answer='D';
    quiz.push_back(q);
    
        // ==== QUESTION 76 ====
    q.question="In Object-Oriented Programming, attributes are also called:";
    q.choice[0]="Methods";
    q.choice[1]="Objects";
    q.choice[2]="Properties";
    q.choice[3]="Constructors";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 77 ====
    q.question="Methods in a class are:";
    q.choice[0]="Variables";
    q.choice[1]="Functions that the object can perform";
    q.choice[2]="Memory addresses";
    q.choice[3]="File pointers";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 78 ====
    q.question="Which access specifier makes members available both inside and outside the class?";
    q.choice[0]="private";
    q.choice[1]="protected";
    q.choice[2]="public";
    q.choice[3]="static";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 79 ====
    q.question="Which access specifier allows access within the class and its derived classes?";
    q.choice[0]="private";
    q.choice[1]="protected";
    q.choice[2]="public";
    q.choice[3]="global";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 80 ====
    q.question="What is another name for a class in the module?";
    q.choice[0]="Dynamic Variable";
    q.choice[1]="Abstract Data Type";
    q.choice[2]="Binary Object";
    q.choice[3]="File Structure";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 81 ====
    q.question="Which method in the cArray class is declared as private?";
    q.choice[0]="getData()";
    q.choice[1]="showData()";
    q.choice[2]="swapData()";
    q.choice[3]="sortData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 82 ====
    q.question="Which private method performs ascending sorting?";
    q.choice[0]="showData()";
    q.choice[1]="sortAsc()";
    q.choice[2]="getData()";
    q.choice[3]="sortData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 83 ====
    q.question="Which private method performs descending sorting?";
    q.choice[0]="sortDesc()";
    q.choice[1]="swapData()";
    q.choice[2]="getData()";
    q.choice[3]="showData()";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 84 ====
    q.question="Which method decides whether to call sortAsc() or sortDesc()?";
    q.choice[0]="swapData()";
    q.choice[1]="showData()";
    q.choice[2]="sortData()";
    q.choice[3]="getData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 85 ====
    q.question="Which keyword refers to the current object inside a class?";
    q.choice[0]="self";
    q.choice[1]="object";
    q.choice[2]="this";
    q.choice[3]="current";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 86 ====
    q.question="What symbol is used before the destructor name?";
    q.choice[0]="&";
    q.choice[1]="$";
    q.choice[2]="~";
    q.choice[3]="@";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 87 ====
    q.question="Which statement correctly creates an object of class cArray?";
    q.choice[0]="class cArray;";
    q.choice[1]="cArray array;";
    q.choice[2]="new class cArray;";
    q.choice[3]="object cArray;";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 88 ====
    q.question="Which method displays all values stored in the array?";
    q.choice[0]="sortData()";
    q.choice[1]="swapData()";
    q.choice[2]="showData()";
    q.choice[3]="getData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 89 ====
    q.question="Which concept combines data and methods into a single unit?";
    q.choice[0]="Inheritance";
    q.choice[1]="Encapsulation";
    q.choice[2]="Compilation";
    q.choice[3]="Iteration";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 90 ====
    q.question="Which of the following is NOT a special member function of a class?";
    q.choice[0]="Constructor";
    q.choice[1]="Destructor";
    q.choice[2]="Main";
    q.choice[3]="Both constructor and destructor";
    q.answer='C';
    quiz.push_back(q);
    
    // ==== QUESTION 91 ====
q.question="What is the default access specifier for members of a C++ class?";
q.choice[0]="public";
q.choice[1]="protected";
q.choice[2]="private";
q.choice[3]="internal";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 92 ====
q.question="Which keyword is used to define a class?";
q.choice[0]="object";
q.choice[1]="class";
q.choice[2]="struct";
q.choice[3]="define";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 93 ====
q.question="A constructor is automatically called when:";
q.choice[0]="a function is declared";
q.choice[1]="an object is created";
q.choice[2]="a class is destroyed";
q.choice[3]="a variable is deleted";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 94 ====
q.question="Which of the following is true about constructors?";
q.choice[0]="They have a return type.";
q.choice[1]="They have the same name as the class.";
q.choice[2]="They must return an integer.";
q.choice[3]="They cannot accept parameters.";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 95 ====
q.question="Which function is automatically called when an object is destroyed?";
q.choice[0]="delete()";
q.choice[1]="destroy()";
q.choice[2]="destructor";
q.choice[3]="remove()";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 96 ====
q.question="A destructor name begins with:";
q.choice[0]="&";
q.choice[1]="*";
q.choice[2]="~";
q.choice[3]="#";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 97 ====
q.question="Which access specifier allows members to be accessed anywhere?";
q.choice[0]="private";
q.choice[1]="protected";
q.choice[2]="public";
q.choice[3]="local";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 98 ====
q.question="Data hiding is achieved by making data members:";
q.choice[0]="static";
q.choice[1]="public";
q.choice[2]="private";
q.choice[3]="global";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 99 ====
q.question="Which operator is used to access members of an object?";
q.choice[0]=":";
q.choice[1]=".";
q.choice[2]="->";
q.choice[3]="::";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 100 ====
q.question="Which of the following is an example of encapsulation?";
q.choice[0]="Storing data and methods inside one class";
q.choice[1]="Creating multiple functions";
q.choice[2]="Using arrays";
q.choice[3]="Using recursion";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 101 ====
q.question="Which keyword dynamically allocates memory for an object?";
q.choice[0]="malloc";
q.choice[1]="new";
q.choice[2]="alloc";
q.choice[3]="create";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 102 ====
q.question="Which keyword releases dynamically allocated memory?";
q.choice[0]="free";
q.choice[1]="release";
q.choice[2]="delete";
q.choice[3]="remove";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 103 ====
q.question="Which member function is responsible for displaying object data?";
q.choice[0]="getData()";
q.choice[1]="showData()";
q.choice[2]="putData()";
q.choice[3]="readData()";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 104 ====
q.question="Which member function usually accepts user input?";
q.choice[0]="getData()";
q.choice[1]="showData()";
q.choice[2]="printData()";
q.choice[3]="outputData()";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 105 ====
q.question="Which of the following is NOT a characteristic of a class?";
q.choice[0]="Attributes";
q.choice[1]="Methods";
q.choice[2]="Objects";
q.choice[3]="Compiler";
q.answer='D';
quiz.push_back(q);

// ==== QUESTION 106 ====
q.question="An object is:";
q.choice[0]="a data type";
q.choice[1]="an instance of a class";
q.choice[2]="a function";
q.choice[3]="a compiler";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 107 ====
q.question="Which keyword refers to the current object inside a class?";
q.choice[0]="self";
q.choice[1]="current";
q.choice[2]="this";
q.choice[3]="object";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 108 ====
q.question="Which member function adds data to the array in the exercise?";
q.choice[0]="pushData()";
q.choice[1]="appendData()";
q.choice[2]="insertData()";
q.choice[3]="addItem()";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 109 ====
q.question="Which member function removes the last element of the array?";
q.choice[0]="removeData()";
q.choice[1]="deleteData()";
q.choice[2]="popData()";
q.choice[3]="eraseData()";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 110 ====
q.question="The variable N in the Array class represents:";
q.choice[0]="file size";
q.choice[1]="array size";
q.choice[2]="object size";
q.choice[3]="recursion depth";
q.answer='B';
quiz.push_back(q);

// ==== QUESTION 111 ====
q.question="Which data type is used for arData in the exercise?";
q.choice[0]="int";
q.choice[1]="char";
q.choice[2]="float";
q.choice[3]="double";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 112 ====
q.question="Dynamic arrays are useful because:";
q.choice[0]="their size can change during execution";
q.choice[1]="they are always faster";
q.choice[2]="they cannot be modified";
q.choice[3]="they use less memory than variables";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 113 ====
q.question="Which concept combines data and functions into one unit?";
q.choice[0]="Encapsulation";
q.choice[1]="Iteration";
q.choice[2]="Sorting";
q.choice[3]="Searching";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 114 ====
q.question="Which statement creates an object named array?";
q.choice[0]="class array;";
q.choice[1]="Array object;";
q.choice[2]="Array array;";
q.choice[3]="new Array;";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 115 ====
q.question="Which function in the sample sorts data?";
q.choice[0]="appendData()";
q.choice[1]="showData()";
q.choice[2]="sortData()";
q.choice[3]="getData()";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 116 ====
q.question="In the sample program, what parameter sorts data in ascending order?";
q.choice[0]="1";
q.choice[1]="-1";
q.choice[2]="0";
q.choice[3]="true";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 117 ====
q.question="Which programming paradigm does C++ support?";
q.choice[0]="Procedural only";
q.choice[1]="Object-Oriented only";
q.choice[2]="Both Procedural and Object-Oriented";
q.choice[3]="Functional only";
q.answer='C';
quiz.push_back(q);

// ==== QUESTION 118 ====
q.question="Which statement best describes abstraction?";
q.choice[0]="Showing only essential features while hiding implementation details";
q.choice[1]="Creating arrays";
q.choice[2]="Opening files";
q.choice[3]="Calling recursive functions";
q.answer='A';
quiz.push_back(q);

// ==== QUESTION 119 ====
q.question="Which of the following is NOT one of the four basic OOP principles?";
q.choice[0]="Encapsulation";
q.choice[1]="Inheritance";
q.choice[2]="Polymorphism";
q.choice[3]="Compilation";
q.answer='D';
quiz.push_back(q);

// ==== QUESTION 120 ====
q.question="Which feature allows one class to acquire the properties of another?";
q.choice[0]="Encapsulation";
q.choice[1]="Inheritance";
q.choice[2]="Abstraction";
q.choice[3]="Overloading";
q.answer='B';
quiz.push_back(q);

    // ==== QUESTION 121 ====
    q.question="What is a class in C++?";
    q.choice[0]="A variable";
    q.choice[1]="A blueprint for creating objects";
    q.choice[2]="A function";
    q.choice[3]="A loop";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 122 ====
    q.question="An object is best described as a(n):";
    q.choice[0]="Array of classes";
    q.choice[1]="Function of a class";
    q.choice[2]="Instance of a class";
    q.choice[3]="Pointer to a class";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 123 ====
    q.question="Which keyword is used to define a class?";
    q.choice[0]="object";
    q.choice[1]="class";
    q.choice[2]="struct";
    q.choice[3]="define";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 124 ====
    q.question="Which access specifier makes class members accessible only within the class?";
    q.choice[0]="public";
    q.choice[1]="protected";
    q.choice[2]="private";
    q.choice[3]="friend";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 125 ====
    q.question="Which access specifier allows members to be accessed outside the class?";
    q.choice[0]="private";
    q.choice[1]="hidden";
    q.choice[2]="protected";
    q.choice[3]="public";
    q.answer='D';
    quiz.push_back(q);

    // ==== QUESTION 126 ====
    q.question="Which access specifier allows access within the class and its derived classes?";
    q.choice[0]="public";
    q.choice[1]="private";
    q.choice[2]="protected";
    q.choice[3]="static";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 127 ====
    q.question="Which section of a class usually contains the attributes that should not be directly accessed?";
    q.choice[0]="public";
    q.choice[1]="private";
    q.choice[2]="global";
    q.choice[3]="external";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 128 ====
    q.question="What operator is used to define a class method outside the class?";
    q.choice[0]=".";
    q.choice[1]="->";
    q.choice[2]="::";
    q.choice[3]=":";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 129 ====
    q.question="In ClassName::methodName(), the :: operator is called the:";
    q.choice[0]="Pointer operator";
    q.choice[1]="Scope resolution operator";
    q.choice[2]="Address operator";
    q.choice[3]="Member operator";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 130 ====
    q.question="Which special method is automatically executed when an object is created?";
    q.choice[0]="Destructor";
    q.choice[1]="Constructor";
    q.choice[2]="Getter";
    q.choice[3]="Setter";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 131 ====
    q.question="A constructor has the same name as the:";
    q.choice[0]="Object";
    q.choice[1]="Variable";
    q.choice[2]="Class";
    q.choice[3]="Method";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 132 ====
    q.question="Which method is automatically executed when a program terminates or an object is destroyed?";
    q.choice[0]="Constructor";
    q.choice[1]="Destructor";
    q.choice[2]="Main";
    q.choice[3]="Allocator";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 133 ====
    q.question="What symbol is placed before a destructor's name?";
    q.choice[0]="!";
    q.choice[1]="@";
    q.choice[2]="~";
    q.choice[3]="#";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 134 ====
    q.question="Which method is commonly used to release dynamically allocated memory?";
    q.choice[0]="Constructor";
    q.choice[1]="Destructor";
    q.choice[2]="Getter";
    q.choice[3]="Main";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 135 ====
    q.question="In the cArray example, what is the type of arx?";
    q.choice[0]="float pointer";
    q.choice[1]="char pointer";
    q.choice[2]="int pointer";
    q.choice[3]="double pointer";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 136 ====
    q.question="In the cArray class, what does N represent?";
    q.choice[0]="Maximum value";
    q.choice[1]="Total number of data items";
    q.choice[2]="Number of methods";
    q.choice[3]="Memory size";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 137 ====
    q.question="Which method is responsible for accepting user input into the array?";
    q.choice[0]="showData()";
    q.choice[1]="getData()";
    q.choice[2]="sortData()";
    q.choice[3]="swapData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 138 ====
    q.question="Which method displays the contents of the array?";
    q.choice[0]="showData()";
    q.choice[1]="getData()";
    q.choice[2]="sortData()";
    q.choice[3]="popData()";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 139 ====
    q.question="Which method allows sorting in ascending or descending order?";
    q.choice[0]="swapData()";
    q.choice[1]="sortData()";
    q.choice[2]="showData()";
    q.choice[3]="appendData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 140 ====
    q.question="In the example, passing 0 to sortData() performs:";
    q.choice[0]="Descending sort";
    q.choice[1]="Random sort";
    q.choice[2]="Ascending sort";
    q.choice[3]="No sorting";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 141 ====
    q.question="Which of the following methods in cArray is declared private?";
    q.choice[0]="getData()";
    q.choice[1]="showData()";
    q.choice[2]="swapData()";
    q.choice[3]="sortData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 142 ====
    q.question="Which method in the exercise adds an element to a dynamic array?";
    q.choice[0]="popData()";
    q.choice[1]="appendData()";
    q.choice[2]="showData()";
    q.choice[3]="sortData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 143 ====
    q.question="Which method removes the last element of the array?";
    q.choice[0]="appendData()";
    q.choice[1]="sortData()";
    q.choice[2]="popData()";
    q.choice[3]="insertData()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 144 ====
    q.question="In the exercise, the arData attribute should be declared as:";
    q.choice[0]="Public";
    q.choice[1]="Global";
    q.choice[2]="Private";
    q.choice[3]="Static";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 145 ====
    q.question="What programming concept is demonstrated by hiding data inside a class?";
    q.choice[0]="Inheritance";
    q.choice[1]="Polymorphism";
    q.choice[2]="Encapsulation";
    q.choice[3]="Compilation";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 146 ====
    q.question="Which of the following is NOT typically considered a class member?";
    q.choice[0]="Attribute";
    q.choice[1]="Method";
    q.choice[2]="Local variable in main()";
    q.choice[3]="Constructor";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 147 ====
    q.question="Which file commonly contains the declaration of a class?";
    q.choice[0]="Header file (.h)";
    q.choice[1]="Executable file";
    q.choice[2]="Binary file";
    q.choice[3]="Text file";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 148 ====
    q.question="Which method is mainly used for preprocessing and initialization?";
    q.choice[0]="Destructor";
    q.choice[1]="Constructor";
    q.choice[2]="showData()";
    q.choice[3]="swapData()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 149 ====
    q.question="What is the primary purpose of methods in a class?";
    q.choice[0]="Store object properties only";
    q.choice[1]="Perform operations on objects";
    q.choice[2]="Reserve memory only";
    q.choice[3]="Define variables outside the class";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 150 ====
    q.question="Which OOP feature restricts direct access to object data and exposes only necessary operations?";
    q.choice[0]="Looping";
    q.choice[1]="Recursion";
    q.choice[2]="Encapsulation";
    q.choice[3]="Iteration";
    q.answer='C';
    quiz.push_back(q);
    
        // ==== QUESTION 151 ====
    q.question="Which keyword is used to declare a structure in C/C++?";
    q.choice[0]="class";
    q.choice[1]="struct";
    q.choice[2]="object";
    q.choice[3]="record";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 152 ====
    q.question="A structure is primarily used to:";
    q.choice[0]="Store multiple related data items under one name";
    q.choice[1]="Execute recursive functions";
    q.choice[2]="Sort arrays automatically";
    q.choice[3]="Open binary files";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 153 ====
    q.question="In the student structure example, which field stores the student's course?";
    q.choice[0]="sno";
    q.choice[1]="lastname";
    q.choice[2]="firstname";
    q.choice[3]="course";
    q.answer='D';
    quiz.push_back(q);

    // ==== QUESTION 154 ====
    q.question="In the example, student *s; means that s is:";
    q.choice[0]="A single student object";
    q.choice[1]="A pointer to a student structure";
    q.choice[2]="A character array";
    q.choice[3]="A file pointer";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 155 ====
    q.question="Which function is used to allocate memory for the array of structures?";
    q.choice[0]="calloc()";
    q.choice[1]="realloc()";
    q.choice[2]="malloc()";
    q.choice[3]="fopen()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 156 ====
    q.question="Which function is used to release the allocated memory for the student structure array?";
    q.choice[0]="fclose()";
    q.choice[1]="delete()";
    q.choice[2]="free()";
    q.choice[3]="remove()";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 157 ====
    q.question="Which operator is used to access a member of a structure variable?";
    q.choice[0]="->";
    q.choice[1]=".";
    q.choice[2]="::";
    q.choice[3]="*";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 158 ====
    q.question="In the example, s[a].lastname refers to:";
    q.choice[0]="The last structure in memory";
    q.choice[1]="The lastname field of the ath student";
    q.choice[2]="A function named lastname";
    q.choice[3]="A pointer variable";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 159 ====
    q.question="A structure can be used as what type of function return value?";
    q.choice[0]="Only integer";
    q.choice[1]="Only float";
    q.choice[2]="Function return type";
    q.choice[3]="Loop variable";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 160 ====
    q.question="In the integer division example, the function returns both the:";
    q.choice[0]="Sum and difference";
    q.choice[1]="Quotient and remainder";
    q.choice[2]="Product and quotient";
    q.choice[3]="Dividend and divisor";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 161 ====
    q.question="Which field stores the quotient in the div structure?";
    q.choice[0]="q";
    q.choice[1]="r";
    q.choice[2]="d";
    q.choice[3]="quotient";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 162 ====
    q.question="Which operator computes the remainder of integer division?";
    q.choice[0]="/";
    q.choice[1]="%";
    q.choice[2]="*";
    q.choice[3]="//";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 163 ====
    q.question="Binary files are commonly used to store:";
    q.choice[0]="Images only";
    q.choice[1]="Arrays and structures";
    q.choice[2]="HTML pages";
    q.choice[3]="Source code";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 164 ====
    q.question="Which function is used to open a binary file?";
    q.choice[0]="open()";
    q.choice[1]="fopen()";
    q.choice[2]="fread()";
    q.choice[3]="fwrite()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 165 ====
    q.question="Which file mode is used to write a binary file?";
    q.choice[0]="wt";
    q.choice[1]="rb";
    q.choice[2]="wb";
    q.choice[3]="rw";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 166 ====
    q.question="Which file mode is used to read a binary file?";
    q.choice[0]="wb";
    q.choice[1]="rb";
    q.choice[2]="wt";
    q.choice[3]="rt";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 167 ====
    q.question="Which data type is used for a file pointer?";
    q.choice[0]="FILE";
    q.choice[1]="file";
    q.choice[2]="stream";
    q.choice[3]="pointer";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 168 ====
    q.question="Which function reads data from a binary file?";
    q.choice[0]="fwrite()";
    q.choice[1]="fread()";
    q.choice[2]="fprintf()";
    q.choice[3]="scanf()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 169 ====
    q.question="Which function closes an opened file?";
    q.choice[0]="free()";
    q.choice[1]="fclose()";
    q.choice[2]="fopen()";
    q.choice[3]="close()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 170 ====
    q.question="If fopen() fails to open a file, it returns:";
    q.choice[0]="0";
    q.choice[1]="EOF";
    q.choice[2]="NULL";
    q.choice[3]="-1";
    q.answer='C';
    quiz.push_back(q);

    // ==== QUESTION 171 ====
    q.question="In the binary file example, what is read first from the file?";
    q.choice[0]="Array values";
    q.choice[1]="Number of elements (N)";
    q.choice[2]="File name";
    q.choice[3]="Floating-point average";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 172 ====
    q.question="Which function allocates memory after reading the value of N?";
    q.choice[0]="realloc()";
    q.choice[1]="malloc()";
    q.choice[2]="calloc()";
    q.choice[3]="fopen()";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 173 ====
    q.question="Why is free(arx) called before program termination?";
    q.choice[0]="To sort the array";
    q.choice[1]="To avoid memory leaks";
    q.choice[2]="To open another file";
    q.choice[3]="To create another array";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 174 ====
    q.question="Which function is used to write binary data into a file?";
    q.choice[0]="fwrite()";
    q.choice[1]="fprintf()";
    q.choice[2]="scanf()";
    q.choice[3]="puts()";
    q.answer='A';
    quiz.push_back(q);

    // ==== QUESTION 175 ====
    q.question="Which chapter discusses recursion?";
    q.choice[0]="Chapter 2";
    q.choice[1]="Chapter 3";
    q.choice[2]="Chapter 5";
    q.choice[3]="Chapter 6";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 176 ====
    q.question="According to the module, recursion is a method where a function:";
    q.choice[0]="Calls another unrelated function";
    q.choice[1]="Calls itself";
    q.choice[2]="Uses only loops";
    q.choice[3]="Uses binary files";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 177 ====
    q.question="Which mathematical problem is used as an example of recursion in the module?";
    q.choice[0]="Fibonacci search";
    q.choice[1]="Factorial";
    q.choice[2]="Bubble sort";
    q.choice[3]="Binary search";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 178 ====
    q.question="Which statement correctly describes a recursive function?";
    q.choice[0]="It never terminates.";
    q.choice[1]="It repeatedly calls itself until a stopping condition is met.";
    q.choice[2]="It only works with arrays.";
    q.choice[3]="It replaces all loops.";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 179 ====
    q.question="Which of the following is necessary to stop recursion?";
    q.choice[0]="Infinite loop";
    q.choice[1]="Base case (termination condition)";
    q.choice[2]="Pointer arithmetic";
    q.choice[3]="Dynamic allocation";
    q.answer='B';
    quiz.push_back(q);

    // ==== QUESTION 180 ====
    q.question="Which topic is emphasized throughout the final chapter of the module?";
    q.choice[0]="Binary Trees";
    q.choice[1]="Object-Oriented Programming using Classes";
    q.choice[2]="Networking";
    q.choice[3]="Operating Systems";
    q.answer='B';
    quiz.push_back(q);
}
