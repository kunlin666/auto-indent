#include<iostream>
#include<string>
using namespace std;

int main(){
  string str,comment;
  int indent=0;
  int front=0;
  int back=0;
  bool newline=false;
  string prestr="";
 
  cin >> str;
  while(!cin.eof()){
    if(newline && str!="}"){
      for(int i=0;i<indent;i++){
	    cout << " ";
      }
      if(str==";"){
        cout << ";" << endl;
        newline=true;
      }
      else if(str =="{"){
        cout << "{" << endl;
        indent++;
        newline=true;
        front++;
      }
      else if(str=="//"){
        newline=true;
        getline(cin,comment);
        cout << "//" << comment << endl;
     }
      else{
        cout << str << " ";
        newline=false;
        }
    }
    
    else if(str=="}"){ 
    back++;
    if(newline){
      for(int i=0;i<indent-1;i++){
	    cout << " ";
      }
      indent-=1;
      cout << "}" << endl;
      newline=true;
    }
    else if(prestr==""){
      cout << "}" << endl;
      }
    else{
      cout << endl << "}" << endl;
      newline=true;
    }
    }
    
    else if(str==";"){
      cout << ";" << endl;
      newline=true;
    }
    
    else if(str=="{"){
      cout << "{" << endl;
      indent++;
      newline=true;
    }
    
    else if(str=="//"){
      newline=true;
      getline(cin,comment);
      cout << "//" << comment << endl;
    }
    
    else{
      cout << str;
      }
      
      prestr=str;
      cin >> str;
      if(!cin.eof()){
      cout << " ";
      }
    }
    
  return 0;
}
