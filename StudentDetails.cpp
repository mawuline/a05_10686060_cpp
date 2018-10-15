#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using std::setw;
using namespace std;

	// Record of Student
	struct StudentRecord {
		string idNumber;
		string name;
		int age;
		char gender;
		float score;
		char grade;
		} stud1[5];
		
	//main()
int main(int argc, char ***argv) {
	double averageAge, averageScore;
	int femaleCount = 0, maleCount = 0;
	 
		 ofstream os;
		os.open("gh.txt");
		 os << "ID Number" << setw(11) << "Name" << setw(11) << "Age" << setw(11) << "Gender" << setw(11) << "Score" << setw(11) << "Grade" <<endl;
		 os << "*******************************************************************" << endl;
			  
		for(int i = 0; i < 5; i++) {
				cout <<"Enter id :" <<  setw(7);
			cin >> stud1[i].idNumber ;
				cout <<"Enter name :" ;
				cin >> stud1[i].name;
				cout <<"Enter age :" ;
						cin >> stud1[i].age;
						cout <<"Enter gender :" ;
						
						cin >> stud1[i].gender;	
							if (stud1[i].gender == 'M')
							   maleCount++;
							else if (stud1[i].gender == 'F')
							femaleCount++;
							else cout << "invalid Gender";
										 
						cout <<"Enter score :" ;
						   cin >> stud1[i].score;
						   
			if (stud1[i].score >= 80)
			   stud1[i].grade = 'A';
			else if (stud1[i].score >= 79)
			  stud1[i].grade = 'B';
			else if (stud1[i].score >= 69)
			   stud1[i].grade = 'C';
			else if (stud1[i].score >= 59)
			  stud1[i].grade = 'D';
			else if (stud1[i].score >= 49)
		       stud1[i].grade = 'E';
			else
			   stud1[i].grade = 'F';
			   
			   			   
				 averageAge += stud1[i].age;
			     averageScore += stud1[i].score;
						                             	             
			os << stud1[i].idNumber  << setw(15) << stud1[i].name << setw(11) << stud1[i].age  << setw(11) << stud1[i].gender  << setw(11) << stud1[i].score  << setw(11)  << stud1[i].grade  << endl;
			} 
			 
			os << "*****************************************************************************" << endl;
			
			os << "Average Score: "  <<   averageScore/5  << endl;
			
			  os << "Average Age: "  <<   averageAge/5 << endl ;
			 			
				os << "Male Count: "  <<  maleCount << endl;  
				os << "Female Count: " << femaleCount << endl;
			   //*/
	return 0;
}
