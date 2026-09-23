#include<iostream>
#include<cstring>
#include<conio.h>
#include"OOPproject.h"
using namespace std;
int main(){
	introduction();
	string name;
	cout<<"-------------------------------------------"<<endl;
	cout<<"               OOP Learning App            "<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\tHELLO, "<<name<<"...!"<<endl;
	cout<<"Welcome to the OOP Learning App!\n";
	cout<<"-------------------------------------------"<<endl;
	Lesson lessons[5];
    lessons[0].setLesson("Inheritance", "Inheritance allows one class to use the properties of another class.");
    lessons[1].setLesson("Polymorphism", "Polymorphism allows methods to have different implementations in derived classes.");
    lessons[2].setLesson("Encapsulation", "Encapsulation restricts access to data and provides controlled access through methods.");
    lessons[3].setLesson("Abstraction", "Abstraction hides implementation details and only shows relevant information.");
    lessons[4].setLesson("Constructors & Destructors", "Constructors initialize objects, and destructors clean up when an object goes out of scope.");
    Quiz quizzes[25];
    quizzes[0].setQuestion("What is inheritance?", "A way to hide data", "A way to reuse code", "A way to copy objects", "None of the above", "B");
    quizzes[1].setQuestion("Which keyword is used for inheritance?", "extends", "inherits", "public", "None", "A");
    quizzes[2].setQuestion("What type of inheritance does C++ support?", "Single", "Multiple", "Multilevel", "All of the above", "D");
    quizzes[3].setQuestion("What is the base class?", "Parent class", "Derived class", "Abstract class", "None", "A");
    quizzes[4].setQuestion("Which access modifier allows inheritance?", "Private", "Protected", "Public", "None", "C");
    quizzes[5].setQuestion("What is polymorphism?", "A type of constructor", "Allowing functions to have different behaviors", "Making classes private", "None", "B");
    quizzes[6].setQuestion("Which of these is an example of polymorphism?", "Function overloading", "Using 'new' keyword", "Declaring a variable", "None", "A");
    quizzes[7].setQuestion("Which keyword is used for runtime polymorphism?", "virtual", "override", "inherit", "None", "A");
    quizzes[8].setQuestion("Which function can be overloaded?", "Constructor", "Destructor", "Friend function", "None", "A");
    quizzes[9].setQuestion("Which type of polymorphism occurs at runtime?", "Function overloading", "Operator overloading", "Method overriding", "None", "C");
    quizzes[10].setQuestion("What is encapsulation?", "Hiding implementation details", "Inheriting properties", "Using multiple classes", "None of the above", "A");
	quizzes[11].setQuestion("Which keyword is used to define encapsulation in C++?", "private", "public", "protected", "None", "A");
	quizzes[12].setQuestion("What does encapsulation improve?", "Code readability", "Data security", "Performance", "None", "B");
	quizzes[13].setQuestion("Which of the following is an example of encapsulation?", "Using a class to bundle data and methods", "Using global variables", "Using public functions only", "None", "A");
	quizzes[14].setQuestion("What is the purpose of getter and setter methods?", "To control access to private data", "To overload operators", "To manage memory", "None", "A");
	quizzes[15].setQuestion("What is abstraction in OOP?", "Hiding unnecessary details", "Creating multiple instances", "Reusing code", "None of the above", "A");
	quizzes[16].setQuestion("Which of these is a way to achieve abstraction?", "Using interfaces", "Using constructors", "Using destructors", "None", "A");
	quizzes[17].setQuestion("What is the primary benefit of abstraction?", "Simplified code", "Faster execution", "Less memory usage", "None", "A");
	quizzes[18].setQuestion("Which keyword is used to create an abstract class?", "abstract", "interface", "virtual", "None", "A");
	quizzes[19].setQuestion("In C++, which is a feature of abstraction?", "Hiding complex implementation", "Multiple inheritance", "Access specifiers", "None", "A");
	quizzes[20].setQuestion("What is a constructor?", "A special member function that initializes objects", "A function to destroy objects", "A function to allocate memory", "None of the above", "A");
	quizzes[21].setQuestion("Which of these is true about destructors?", "They have the same name as the class", "They cannot be overloaded", "They are called automatically", "All of the above", "D");
	quizzes[22].setQuestion("When is a constructor called?", "When an object is created", "When an object is destroyed", "When a variable is declared", "None", "A");
	quizzes[23].setQuestion("What is a default constructor?", "A constructor with no parameters", "A constructor with parameters", "A copy constructor", "None", "A");
	quizzes[24].setQuestion("What happens if no destructor is defined?", "The compiler provides a default destructor", "The program crashes", "Memory leaks occur", "None", "A");   
	getch();
	system("cls");
	int e=0,score=0,i;
	for(i=0;i<5;i++){
		lessons[i].showLesson();
		getch();
		system("cls");
		cout<<"---------------------------------------------------------------------------------------------------------";
        cout<<"\nTime for a quiz on "<<lessons[i].topic<<"!\n";
		cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		for(int j=0;j<5;j++){
    		        if(quizzes[j+(5*i)].askQuestion())
    		        	score++;
    	}
    	cout<<"Quiz Completed!\nYour Score: "<<score<<"/"<<5*(i+1)<<endl;
    	getch();
		system("cls");
		if(i<4){
			cout<<"\n\n\nTo exit lessons (enter 1): ";
			cin>>e;
			system("cls");
				if(e==1)
					break;
		}
	}
	CodeQuiz codeQuiz[5];
	codeQuiz[0].setCodeQuiz("int a = 5;\nint b = 3;\ncout << a + b;","53","8","a + b","Error","B");
	codeQuiz[1].setCodeQuiz("for(int i = 0; i < 3; i++)\n    cout << i << \" \";","123","012","0 1 2","1 2 3","C");
	codeQuiz[2].setCodeQuiz("int x = 10;\nif(x > 5)\n    cout << \"High\";\nelse\n    cout << \"Low\";","Low","Error","Nothing","High","D");
	codeQuiz[3].setCodeQuiz("int x = 7;\nwhile(x > 5){\n  cout << x-- << \" \";\n}","7 6 5","7 6","Infinite loop","7 6 5 4","A");
	codeQuiz[4].setCodeQuiz("int sum = 0;\nfor(int i = 1; i <= 3; i++){\n  sum += i;\n}\ncout << sum;","6","3","0","9","A");
	int cscore=0,a=0,k;
	cout<<"\n-------------------------------------------\n";
	cout<<"           OUTPUT FINDING QUIZ             \n";
    cout<<"-------------------------------------------\n";
	for(k=0;k<5;k++){
        if(codeQuiz[k].askCodeQuestion())
    		cscore++;
    		cout<<"\nTo exit output finding section (enter 1): ";
        	cin>>a;
        	system("cls");
        	if(a==1)
        		break;
    	}
    cout<<"\n\nQuiz Completed!\nYour Score: "<<cscore<<"/"<<(k+1)<<endl;
	getch();
	system("cls");		
	cout<<"\n\n\n---------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Exiting the application. Thank you!\n";
    cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
    getch();
	system("cls");
	system("color FD");
	Certificate(name,score,i,cscore,k);
	getch();
	system("cls");
	system("color 07");
	Feedback();
	return 0;
}