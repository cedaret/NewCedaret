#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int id[4];
	string name[4];
	int age[4];
	char gender[4];
	double score[4];
	char grade[4];	
	int males=0;
	int females=0;
	int totalScore=0;
	int totalAge=0;
	
	ofstream dout;
	dout.open("student.txt");
	
	for (int i=0; i<5; i++){
		cout <<"Please enter id of member "<< i+1 << endl;
		cin>> id[i];
		
		cout << "Please enter name of member "<< i+1 << endl;
		cin>> name[i];
		
		cout << "Please enter age of member "<< i+1 << endl;
		cin>> age[i];
		
		cout << "Please enter gender of member "<< i+1 << endl;
		cin>> gender[i];
		
		cout << "Please enter score of member "<< i+1 << endl;
		cin>> score[i];
		
		cout << "PLease enter grade of member "<< i+1<< endl;
		cin>> grade[i];
	}
	
	
	dout<<"ID"<<"\t"<<"NAME"<<"\t"<< "AGE"<< "\t"<< "GENDER"<< "\t"<< "SCORE" << "\t"<< "GRADE"<< endl;
	
	for (int i=0; i<5; i++){
		dout <<id[i]<< "\t"<< name[i]<< "\t"<< age[i]<< "\t"<< gender[i]<< "\t"<< score[i]<< "\t"<< grade[i]<< endl;
		totalScore=totalScore+score[i];
		
		totalAge=totalAge+age[i];
		if(gender[i]=='f'){
			females++;
		}
		else{
			males++;
		}
		
		
		
	}
	
	
	dout << "Average Score "<< totalScore/5<< endl;
	dout << "Average Age "<< totalAge/5<< endl;
	dout << "Male Count "<< males<< endl;
	dout << "Female Count "<< females<< endl;
	
	dout.close();
	return 0;
}
