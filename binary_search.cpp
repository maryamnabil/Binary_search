#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
#include <iterator>

using namespace std;


void FindTraget(vector<int>x, int Target){
	sort(x.begin(),x.end());
	for (size_t i=0;i<x.size()-2;i++){
		int first_number=x[i];
		int nextTarget=Target-first_number;
		int next_firstElemment=x[i]+1;

		for(size_t j=next_firstElemment;j<x.size()-1;j++){
			int second_number=x[j];
			int third_number=nextTarget-second_number;
			bool isFound=binary_search(x.begin()+1+j,x.end(),third_number);
			if(isFound){
				cout<<first_number<<"+"<<second_number<<"+"<<third_number<<endl;
			}
			else
				cout<<"Not Found"<<endl;
		}
	}

}

int main() {
	//Variables Declerations
	int TotalNumber,number,Target;
	//Main Section 
	cout<<"Enter Total of numbers you will enter"<<endl;
	cin>>TotalNumber;
	vector <int> mainContainer;
	cout<<"Enter the numbers"<<endl;
	for (size_t i=0;i<TotalNumber;i++){
		cin>>number;
		mainContainer.push_back(number);
	}
	cout<<"Enter The Target"<<endl;
	cin>>Target;
	//Calling The Function responsible for all the work;
	FindTraget(mainContainer,Target);

}