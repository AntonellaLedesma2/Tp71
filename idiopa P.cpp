#include <bits/stdc++.h>
using namespace std;
string HablarEnP(string frase);
int main(){
	string frase;
	cout<<"ingrese una frase"<<endl;
	getline(cin,frase);
	
	cout<<HablarEnP(frase)<<endl;

return 0;
}
string HablarEnP(string frase){
	string F;
	for(int i=0 ; i<frase.size() ; i++){
		F+=frase[i];
		if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
			F+='p';
			F+=frase[i];
		}
	}
	return F;
}