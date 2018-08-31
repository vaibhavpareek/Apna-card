#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<unistd.h>
using namespace std;
class citizen
{  public:
	char father_name[80];
	char mother_name[80];
	char dob[90];
		    long int age;
			char house_no[50];
			char city_name[80];
			long int  pin_code;
			char state[80];
		char name[80];
		long long int apna_no;
		void menu();
		void add_update(long long int require)
		{
		long long int ch;  
				system("cls");
				cout<<"\n\t\t============================================= APNA CARD =====================================================";
				cout<<"\n\n\n\t\t\t\t\t========================== ENTER NEW DETAILS OF PERSON =============================\n\n";
				fflush(stdin);
				cout.flush();
				apna_no=require;
    	        cout<<"( Unique for every citizen ) Your unique apna number is :"<<apna_no<<endl;
		        cout<<"\n\n\t\t\t\t\t\t\tEnter your name : ";
			    fflush(stdin);
				cout.flush();
				gets(name);
				if(!(strcmp(name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your Father name : ";
				fflush(stdin);
				cout.flush();
				gets(father_name);
				if(!(strcmp(father_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your Father name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(father_name);
				}
			    cout<<"\n\n\t\t\t\t\t\t\t Enter your Mother name : ";
				fflush(stdin);
				cout.flush();
				gets(mother_name);
				if(!(strcmp(mother_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your Mother name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(mother_name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t(eg. dd/mm/yyyy) Enter your date of birth : ";
			    fflush(stdin);
				cout.flush();
				gets(dob);
				if(!(strcmp(dob,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\t(eg. dd/mm/yyyy) Enter your date of birth : ";
			     fflush(stdin);
				 cout.flush();
				 gets(dob);
				}
				
				cout<<"\n\n\t\t\t\t\t\t\t(optional) Enter your age : ";
			    fflush(stdin);
				cout.flush();
				cin>>age;
				cout<<"\n\n\t\t\t\t\t\t\t================= Enter your address ==================";
				fflush(stdin);
				cout.flush();
				cout<<"\n\n\t\t\t\t\t\t\t Enter your house number and street name : ";
				fflush(stdin);
				cout.flush();
				gets(house_no);
				if(!(strcmp(house_no,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your house number and street name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(house_no);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your city name or tehsil name : ";
				fflush(stdin);
				cout.flush();
				gets(city_name);
				if(!(strcmp(city_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your city name or tehsil name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(city_name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your state name : ";
				fflush(stdin);
				cout.flush();
				gets(state);
				if(!(strcmp(state,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your state name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(state);
				}
				cout<<"\n\n\t\t\t\t\t\t\t (optional) Enter pin code of your city : ";
				fflush(stdin);
				cout.flush();
				cin>>pin_code;
				fstream file1;
				file1.open("apna_no.txt",ios::out);
				ch++;
				file1<<ch;
				file1.close();
			}
		void add_apnano()
		{     
			long long int ch;  
				system("cls");
				cout<<"\n\t\t============================================= APNA CARD =====================================================";
				cout<<"\n\n\n\t\t\t\t\t========================== ENTER DETAILS OF PERSON =============================\n\n";
				fflush(stdin);
				cout.flush();
				fstream file;
            	file.open("apna_no.txt",ios::in);
    	        file>>ch;
    	        cout.flush();
    	        apna_no=ch;
    	        cout<<"Your unique apna number is :"<<ch<<endl;
		        file.close();
	            cout<<"\n\n\t\t\t\t\t\t\tEnter your name : ";
			    fflush(stdin);
				cout.flush();
				gets(name);
				if(!(strcmp(name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your Father name : ";
				fflush(stdin);
				cout.flush();
				gets(father_name);
				if(!(strcmp(father_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your Father name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(father_name);
				}
			    cout<<"\n\n\t\t\t\t\t\t\t Enter your Mother name : ";
				fflush(stdin);
				cout.flush();
				gets(mother_name);
				if(!(strcmp(mother_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your Mother name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(mother_name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t(eg. dd/mm/yyyy) Enter your date of birth : ";
			    fflush(stdin);
				cout.flush();
				gets(dob);
				if(!(strcmp(dob,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\t(eg. dd/mm/yyyy) Enter your date of birth : ";
			     fflush(stdin);
				 cout.flush();
				 gets(dob);
				}
				
				cout<<"\n\n\t\t\t\t\t\t\t(optional) Enter your age : ";
			    fflush(stdin);
				cout.flush();
				cin>>age;
				cout<<"\n\n\t\t\t\t\t\t\t================= Enter your address ==================";
				fflush(stdin);
				cout.flush();
				cout<<"\n\n\t\t\t\t\t\t\t Enter your house number and street name : ";
				fflush(stdin);
				cout.flush();
				gets(house_no);
				if(!(strcmp(house_no,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your house number and street name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(house_no);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your city name or tehsil name : ";
				fflush(stdin);
				cout.flush();
				gets(city_name);
				if(!(strcmp(city_name,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your city name or tehsil name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(city_name);
				}
				cout<<"\n\n\t\t\t\t\t\t\t Enter your state name : ";
				fflush(stdin);
				cout.flush();
				gets(state);
				if(!(strcmp(state,"")))
				{
				 cout<<"\n\n\t\t\t\t\t\tyou cannot leave this feild empty";
				 cout<<"\n\n\t\t\t\t\t\t\tEnter your state name : ";
			     fflush(stdin);
				 cout.flush();
				 gets(state);
				}
				cout<<"\n\n\t\t\t\t\t\t\t (optional) Enter pin code of your city : ";
				fflush(stdin);
				cout.flush();
				cin>>pin_code;
				fstream file1;
				file1.open("apna_no.txt",ios::out);
				ch++;
				file1<<ch;
				file1.close();
		}
		     void show_data()
		     {
			    cout.flush();
		        cout<<"\n\n\t\t\t\t===================================== MATCH FOUND ===================================";	
			    cout<<"\n\t\t============================================= APNA CARD =====================================================";
				cout<<"\n\n\n\t\t\t\t========================== HERE ARE THE DETAILS OF PERSON =============================\n\n";
				fflush(stdin);
				cout.flush();
				cout<<"Your unique apna number is ";
				cout<<apna_no;
				cout<<"\n\n\t\t\t\t\t\t\t Name of person: ";
			    fflush(stdin);
				cout.flush();
				cout<<name;
				cout<<"\n\n\t\t\t\t\t\t\t Father's name of person :";
				fflush(stdin);
				cout.flush();
				cout<<father_name;
				cout<<"\n\n\t\t\t\t\t\t\t Mother's name of person :";
				fflush(stdin);
				cout.flush();
				cout<<mother_name;
				cout<<"\n\n\t\t\t\t\t\t (eg: dd/mm/yyyy) Date of birth of person :";
				fflush(stdin); 
				cout.flush();
				cout<<dob;
				cout<<"\n\n\t\t\t\t\t\t\t Age : ";
			    fflush(stdin);
				cout.flush();
				cout<<age;
				cout<<"\n\n\t\t\t\t\t\t\t=============== Address ================= ";
				fflush(stdin);
				cout.flush();
				cout<<"\n\n\t\t\t\t\t\t\t  Your house number : ";
				fflush(stdin);
				cout.flush();
				cout<<house_no;
				cout<<"\n\n\t\t\t\t\t\t\t  City name or tehsil name : ";
				fflush(stdin);
				cout.flush();
				cout<<city_name;
				fflush(stdin);
				cout.flush();
				cout<<"\n\n\t\t\t\t\t\t\t  State name : ";
				fflush(stdin);
				cout.flush();
				cout<<state;
				cout<<"\n\n\t\t\t\t\t\t\t  Pin code of your city : ";
				fflush(stdin);
				cout.flush();
				cout<<pin_code;
	 	     } 
 	         };
 	int main();
class admin
{
	public:
		void add_apnacard();
	    void search_apnacard();
		void search_byname();
		void search_byparentsname();
		void search_bypincode();	
        void search_bystate();
        void update_apnacard();
        void delete_apnacard();
};
void again_1()
	{     int choice;
	     admin a;
		cout<<"\n\n\t\t\t\t\t\t1.Try with another name ";
		cout<<"\n\n\t\t\t\t\t\t2.Add the citizen with this name";
		cout<<"\n\n\t\t\t\t\t\t3.Go back to main menu";
		cout<<"\n\n\t\t\t\t\t\t4.Exit";
		cout<<"\n\nt\t\t\t\t\t\tyour choice = ";
		cin>>choice;
		switch(choice)
		{
			case 1: a.search_byname();
			break;
			case 2: a.add_apnacard();
			break;
			case 3: main();
			break;
			case 4:exit(0);
			break;
			default:main();
		}
	}
	void admin::search_byname()
	{	 char search[80];
    int ch,i,up=0;
    citizen e[800];
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
    system("cls");
	cout<<"\n\n\t\t\t\t========================= ENTER NAME OF RESPECTIVE CITIZEN =========================\n";
	fflush(stdin);
	cout.flush();
     gets(search);
     int k=1;
	    for(i=0;i<=ch;i++)
	    { 
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(search[0]==e[i].name[0])
    	{
    		cout<<"\n\n\t\t\t\t\t"<<k<<"."<<e[i].name;
    		k++;
		 up++;
		}}
		if(up>1)
		{ char ch;
		 for(i=0;i<=ch;i++)
	     {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!(strcmp(search,e[i].name))) 
		  	{
		   e[i].show_data();
			cout<<"\n\n\t\t\t\tThere are more than 1 citizen from this district "<<endl;
			cout<<"\t\t\t\tplease keep on pressing any key until you found your match";
			cout<<"\n\t\t\t\tpress y as you found your match"<<endl;
			ch=getch();
			if(ch=='y')
			{
				break;
			}
		}
		}}
	 else if(up==1)
	 {
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
			if(!(strcmp(search,e[i].name)))
    	{ system("cls");
		e[i].show_data();
        } 
	}}
	 else 
	 {
	 	cout<<"\n\n\t\t\t\t  No citizen found with this name either add it or try with another name";
	 	again_1();
	 }	
	 
	  file1.close();
}
	void admin::delete_apnacard()
	{
			system("cls");
	int ch,i;
	char confirm;
	citizen e[80];
	char line[90],search[90];
  cout <<"\n\n\t\t\t\t\t ENTER THE NAME OF CITIZEN WHOSE DETAILS YOU WANT TO DELETE";
  cout<<"\n\n\t\t\t\t\t NAME OF PERSON : ";
  fflush(stdin);
  cout.flush();
  gets(search);
  cout<<"\n\n\t\t\t\t\tARE YOUR SURE YOU WANT TO DELETE "<<search<<" PERSON INFORMATION ";
  fflush(stdin);
  cout.flush();
 cout<<"\n\n\t\t\t\t\t\t\t FOR YES : y \t\t FOR NO : n";
 fflush(stdin);
 cout.flush();
 cout<<"\n\t\t\t\t\t\t\t CHOICE: ";
 cin>>confirm;
 if(confirm=='y')
 {
  ifstream any;
  any.open("counting.txt");
  any>>ch;
  ifstream myfile;
  ofstream temp;
  myfile.open("citizen_add.txt");
  temp.open("temp_citizen.txt");
	for(i=0;i<=ch;i++)
	 {
	    myfile.read((char *)&e[i],sizeof(e[i]));
		if(strcmp(e[i].name,search))
    	{
		  temp.write((char *)&e[i],sizeof(e[i]));
        }
	 }
  cout << "\n\n\t\t\t\t\tWAIT................. DELETING INFORMATION FROM DATABASES ...............................";
  sleep(3);
  myfile.close();
  temp.close();
  remove("citizen_add.txt");
  rename("temp_citizen.txt", "citizen_add.txt");
	}}
	void admin::search_bypincode()
	{
		 long int search;
    int ch,i,up=0;
    citizen e[800];
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= ENTER PIN CODE OF RESPECTIVE DISTRICT =========================\n";
	fflush(stdin);
	cout.flush();
     cin>>search;
	    for(i=0;i<=ch;i++)
	    {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((e[i].pin_code)==search)
    	{
		 up++;
		}}
		if(up>1)
		{ char ch;
		 for(i=0;i<=ch;i++)
	     {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((e[i].pin_code)==search)
    	{
		e[i].show_data();
		
			cout<<"\n\n\t\t\t\tThere are more than 1 citizen from this district "<<endl;
			cout<<"\t\t\t\tplease keep on pressing any key until you found your match";
			cout<<"\n\t\t\t\tpress y as you found your match"<<endl;
			ch=getch();
			if(ch=='y')
			{
				break;
			}
		}
		}}
	 else if(up==1)
	 {
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((e[i].pin_code)==search)
    	{ system("cls");
		e[i].show_data();
        } 
		
	 }}
	 else 
	 {
	 	cout<<"\n\n\t\t\t\t  No citizen found with this name either add it or try with another name";
	 	again_1();
	 }	
	 
	  file1.close();
}
	void admin::search_bystate()
	{
		 char  search[80];
    int ch,i,up=0;
    citizen e[800];
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= ENTER STATE OF RESPECTIVE CITIZEN =========================\n";
	fflush(stdin);
	cout.flush();
     cin>>search;
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!(strcmp(e[i].state,search)))
    	{
		e[i].show_data();
		 up++;
		}
		if(up>1)
		{ char ch;
			cout<<"\n\n\t\t\t\tThere are more than 1  citizen from this state "<<endl;
			cout<<"\t\t\t\tplease keep on pressing any key until you found your match";
			cout<<"\n\t\t\t\tpress y as you found your match"<<endl;
			ch=getch();
			if(ch=='y')
			{
				break;
			}
		}
        i++;
	 }
	  file1.close();
	}
	void admin::search_byparentsname()
	{
		 char  father[80],mother[80];
    int ch,i,up=0;
    citizen e[800];
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= ENTER YOUR PARENTS NAME  OF RESPECTIVE CITIZEN =========================\n";
	fflush(stdin);
	cout.flush();
     cout<<"\n\n\t\t\t\t\tFATHER NAME : ";
	 cout.flush();
	 	 gets(father);
	 cout<<"\n\n\t\t\t\t\tMOTHER NAME ; ";
	  cout.flush();
	  fflush(stdin);
	  gets(mother);
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!((strcmp(e[i].father_name,father))||(strcmp(e[i].mother_name,mother))))
    	{
		e[i].show_data();
		 up++;
		}
		if(up>1)
		{ char ch;
			cout<<"\n\n\t\t\t\tThere are more than 1 citizen with same father and mother name "<<endl;
			cout<<"\t\t\t\tplease keep on pressing any key until you found your match";
			cout<<"\n\t\t\t\tpress y as you found your match"<<endl;
			ch=getch();
			if(ch=='y')
			{
				break;
			}
		}
        i++;
	 }
	  file1.close();
	}
  void admin::update_apnacard()
  {
  	system("cls");
     char search[80];
     int ch,up,i,k=0;
	long long int want;
    citizen e[80],a;
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	fstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\t\t\t\t\t\tENTER THE NAME OF CITIZEN WHOSE DETAILS YOU WANT TO EDIT";
	cout<<"\n\t\t\t\t\t\t\t\tNAME = ";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].name,search))
    	{ 	k=1;
		   want=e[i].apna_no;
           break;
        }
	 }
	 file1.close();
	 if(k==1)
	{
		fstream file;
		file.open("citizen_add.txt",ios::ate|ios::binary|ios::out);
	int location=(i)*sizeof(a);
file.seekp(location);
fflush(stdin);
cout.flush();
cout<<"\n\t\t\t\t\t PLEASE ENTER NEW DETAILS";
a.add_update(want);
file.write((char*)&a,sizeof(a));
file.seekg(0);
cout<<"\n\n\t\t\t\t\t\t WAIT.............UPDATING DATABASES.............................";
sleep(3);
file.close();
    }
else
{
	cout<<"\n\n\t\t\t\t\t=========================SORRY NO CITIZEN FOUND WITH THIS NAME============================";
}
  }
   void admin::add_apnacard()
{
	int ch;
    citizen e[800];
	fstream file;
	file.open("citizen_add.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	e[ch].add_apnano();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ofstream file1;
	file1.open("counting.txt");
	ch++;
	file1<<ch;
	file1.close();
}
int again()
{   int ch;
	cout<<"\n\n\t\t\t\t\t\t\t 1. go back";
	cout<<"\n\n\t\t\t\t\t\t\t 2. exit";
	cout<<"\n\n\t\t\t\t\t\t\t your choice: ";
    cin>>ch;
   return ch;    
}
void admin::search_apnacard()
{
	
	 long long int search;
    int ch,i;
    citizen e[800];
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("citizen_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= ENTER APNA CARD NUMBER OF RESPECTIVE CITIZEN =========================\n";
	fflush(stdin);
	cout.flush();
     cin>>search;
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((e[i].apna_no)==search)
    	{
		e[i].show_data();
        }
        i++;
	 }
	  file1.close();
}
void begin()
{
	
}
int search()
{       int ch;  
        cout<<"\t\t\t\t\t\twelcome in apna card registration \n\n";
		cout<<"\n\n\t\t\t\t\t\t1.Search details by apna card number";
		cout<<"\n\n\t\t\t\t\t\t2.Search details by name";
		cout<<"\n\n\t\t\t\t\t\t3.Search details by parents name";
		cout<<"\n\n\t\t\t\t\t\t4.Search details by state name or district name";
		cout<<"\n\n\t\t\t\t\t\t5.Search details by pin code";
		cout<<"\n\n\t\t\t\t\t\t\tyour choice = ";
		fflush(stdin);
		cout.flush();
			cin>>ch;
			return ch;
		}
	int main()
	{  	 while(1)
		 {  
		l: system("cls");
		int ch,ch1;
		admin a;  
		cout<<"\t\t\t\t\t\twelcome in apna card registration \n\n";
		cout<<"\n\n\t\t\t\t\t\t\t1.Create apna card";
		cout<<"\n\n\t\t\t\t\t\t\t2.Search apna card";
		cout<<"\n\n\t\t\t\t\t\t\t3.Update apna card";
		cout<<"\n\n\t\t\t\t\t\t\t4.Delete apna card";
		cout<<"\n\n\t\t\t\t\t\t\t5.Exit";
		k:cout<<"\n\n\t\t\t\t\t\t\tyour choice = ";
		fflush(stdin);
		cout.flush();
			cin>>ch;
		 	switch(ch)
		   {
		   	case 1:
		   		a.add_apnacard();
		   		 ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1: goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
					break;
		case 3: a.update_apnacard();
		 	     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
		 case 4: a.delete_apnacard();
                	     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
		 		 
         case 5:exit(0);
              break;
		   	
	     case 2:system("cls");
		     	int m=search();
		     	switch(m)
		   	    {
		   		case 1:a.search_apnacard();	
			     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
			    case 2: a.search_byname();
			     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
				case 3: a.search_byparentsname();
			     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
				case 4: a.search_bystate();
			     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
				case 5: a.search_bypincode();
			     ch1=again();
		   		 switch(ch1)
		   		{
		   		 	case 1:
						cout<<endl;
						 goto l;
					break;
					case 2:exit(0);
					break;
					default:cout<<"\n\t\t\t\t\t please choose valid option";
					goto k;
				}
				break;
				default: cout<<"\n\n\t\t\t\t\tPlease choose valid input"<<endl;
				   int r=main();
				}
		   	break;
					
		   }
		   
		 }
		 return 0;
		}
		
