#include<iostream>
#include<fstream>
using namespace std;
class states{
  public: virtual  void NO_OF_ACTIVE_CASES()=0;
	          virtual  void NO_OF_POSITIVE_CASES()=0;
	          virtual  void NO_OF_DECEASED_CASES()=0;
	          virtual  void NO_OF_CURED_PATIENTS()=0;
};

class karnataka:public states{
	
	public:
	
	 void NO_OF_ACTIVE_CASES(){
		cout<<"\nTotal no. of active cases at end of each month:\n";
		ifstream in("kar_test.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		}
		in.close();
	
	}
	 void NO_OF_POSITIVE_CASES(){
	 	cout<<"\nTotal number of confirmed cases at end of each month =\n";
	 	ifstream in("kar_pos.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		if(in) cout << str << endl;
		}
		in.close();
	 	
	 }
	 void NO_OF_DECEASED_CASES(){
	 	cout<<"\nTotal number of deceased at end of each month =\n";
	 	ifstream in("kar_de.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
	
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
	 }
	 void NO_OF_CURED_PATIENTS(){
	 	cout<<"\nTotal number of cured patient at end of each month =\n";
	 	ifstream in("kar_cur.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
		
	 }
};
class Andhra_pradesh:public states{
	
	
	public:
		void NO_OF_ACTIVE_CASES(){
		cout<<"\nTotal no. of active cases at end of each month:\n";
		ifstream in("ap_test.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		}
		in.close();
		
	}


	 void NO_OF_POSITIVE_CASES(){
	 	cout<<"\nTotal number of confirmed cases at end of each month =\n";
	 	ifstream in("ap_pos.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		if(in) cout << str << endl;
		}
		in.close();
	 	
	 }


	void NO_OF_DECEASED_CASES(){
	 	cout<<"\nTotal number of deceased at end of each month =\n";
	 	ifstream in("ap_de.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
	
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
	 }


	void NO_OF_CURED_PATIENTS(){
	 	cout<<"\nTotal number of cured patient at end of each month =\n";
	 	ifstream in("ap_cur.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
		
	 }
};

class Tamil_Nadu:public states{
	
	public:
	
	void NO_OF_ACTIVE_CASES(){
		cout<<"\nTotal no. of active cases at end of each month:\n";
		ifstream in("tn_test.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		}
		in.close();
		
	}
	
	 void NO_OF_POSITIVE_CASES(){
	 	cout<<"\nTotal number of confirmed cases at end of each month =\n";
	 	ifstream in("tn_pos.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		if(in) cout << str << endl;
		}
		in.close();
	 	
	 }

	void NO_OF_DECEASED_CASES(){
	 	cout<<"\nTotal number of deceased at end of each month =\n";
	 	ifstream in("tn_de.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
	
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
	 }

	void NO_OF_CURED_PATIENTS(){
	 	cout<<"\nTotal number of cured patient at end of each month =\n";
	 	ifstream in("tn_cur.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
		
	 }
};
class kerala:public states{
	
	public:
	
	void NO_OF_ACTIVE_CASES(){
		cout<<"\nTotal no. of active cases at end of each month:\n";
		ifstream in("kr_test.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		}
		in.close();
		
	}	


	void NO_OF_POSITIVE_CASES(){
	 	cout<<"\nTotal number of confirmed cases at end of each month =\n";
	 	ifstream in("kr_pos.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		if(in) cout << str << endl;
		}
		in.close();
	
	 }

	 void NO_OF_DECEASED_CASES(){
	 	cout<<"\nTotal number of deceased at end of each month =\n";
	 	ifstream in("kr_de.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
	
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	//attach file
	 	in.close();
	 }

	 void NO_OF_CURED_PATIENTS(){
	 	cout<<"\nTotal number of cured patient at end of each month =\n";
	 	ifstream in("kr_cur.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	 	
	 	in.close();
		
	 }
};	

class SOP_GUIDLINES{
	public: void sop(){
		
		
			ifstream in("SOP.txt"); // input
		if(!in) {
		cout << "Cannot open input file.\n";
		
		}
		char str[255];
		while(in) {
		in.getline(str, 255); // delim defaults to '\n'
		
		if(in) cout << str << endl;
		
		}
	
	 	in.close();

  }
};


int main(){
	states *sp;
	karnataka ka;
	Andhra_pradesh ap;
	Tamil_Nadu tn;
	kerala kl;
	int n;
	SOP_GUIDLINES g;
	cout<<"                        WELCOME TO COVID 19 INFORMATION PORTAL"<<endl;
	cout<<" we provide information related to the COVID 19 for various states and SOP guidlines"<<endl;
	while(1){
	
	cout<<"\n\n select state:\n1.karnataka\n2.Andhra pradesh\n3.Tamil nadu\n4.kerala\n5 exit"<<endl;
	cin>>n;
	switch(n){
		case 1: sp=&ka;
		        sp->NO_OF_ACTIVE_CASES();
		        sp->NO_OF_POSITIVE_CASES();
		        sp->NO_OF_DECEASED_CASES();
		        sp->NO_OF_CURED_PATIENTS();
		   break;
	    case 2: sp=&ap;
		        sp->NO_OF_ACTIVE_CASES();
		        sp->NO_OF_POSITIVE_CASES();
		        sp->NO_OF_DECEASED_CASES();
		        sp->NO_OF_CURED_PATIENTS();
		   break;  
	    case 3: sp=&tn;
		        sp->NO_OF_ACTIVE_CASES();
		        sp->NO_OF_POSITIVE_CASES();
		        sp->NO_OF_DECEASED_CASES();
		        sp->NO_OF_CURED_PATIENTS();
		   break; 
	    case 4: sp=&kl;
		        sp->NO_OF_ACTIVE_CASES();
		        sp->NO_OF_POSITIVE_CASES();
		        sp->NO_OF_DECEASED_CASES();
		        sp->NO_OF_CURED_PATIENTS();
		   break;   
		case 5:  cout<<"                 thank you! stay safe"<<endl;
		               exit(1);  
		break;			          
		default: cout<<"ENTER VALID STATE"<<endl;        
	}
	cout<<"\n\n             PLEASE REFER THE SOP GUIDLINES \n\n"<<endl;
	g.sop();
}
	return 0;
}
