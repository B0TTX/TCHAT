#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

void first_page();
void second_page(string);

map<string, string> user;

class someone(){
	vector<string> flist;

	struct chat{
		int msg_id = 0;
		string sender, receiver;
		char arr msg[50][100];
		int total_messages = 0;
	};
	
	public:
	map<string,chat> sms;
	void new_friend(string);
	void delete_friend(string);
	void show_friend(string);
	void on_chat(string, string, char*);
	void inbox(string);
};

void someone::on_chat(string uname, string reciepent, char *message){
	int flag = 0;
	sms[reciepent].sender = uname;
	sms[reciepent].receiver = reciepent;
	map<string,string>::iterator it;
	for(it = user.begin(); it != user.end(); it++)
	{
		if(it->first == reciepent)
		{
			flag++;
		}
	}
	if(!flag)
	{
		cout<<"\nUSER NOT FOUND\a\a\n";
		page2(uname);
	}

	int i;
	char suname[20];
	for(i = 0; uname[i] != '\0'; i++)
	{
		suname[i] = uname[i];
	}
			strcpy(sms[reciepent].msg[sms[reciepent].total_messages], cuname);
			strcat(sms[reciepent].msg[sms[recirpent].total_messages],":  ");
			strcat(sms[reciepent].msg[sms.reciepent].total_messages],message);


			sms[reciepent].total_messages++;
}

void someone::inbox(string name ){
	cout<<"\nWelcome "<<uname<<" to your inbox\n\n";
	cout<<"Messages in your inbox:\n\n";
	for(int 0; i<=sms[uname].total_messages; i++){
		puts(sms[uname].msg[i]);
		cout<<endl<<endl;
	}
}

void someone::new_friend(strinf name){
	vector<string>::iterator ib;
	map<string,stirng>::iterator iuser;
	int uflag=0; flag=0; flag3=0;
	string add_name;
	cout<<"\nEnter the name of your friend whome you want to add"<<endl;
	cin>>add_name;
	cout<<"\nPlease Holdon! Let me check for "<<add_name<<".......\n";
	for(int i=0;i<99999910;)
	{
		i++;
	}
	for(iuser=user.begin(); iuser != user.end(); iuser++)
	{
		for(ib=flist.begin(); ib != flist.end; ib++){
			if (*ib == add_name){
				flag3++;
			}
			}
			if(add_name == uname){
				uflag++;
				break;
			}
			else if(iuser->first == add_name){
				flag++;
			}
	}
		 if(uflag==1 && flag==0 && flag3==0){
			cout<<"\nDude you cant add yourself to your friendlist\n";
		}
		if(flag == 1 && uflag==0; flag3==0)
		{
			cout<<"\nFound\t"<<add_name<<endl;
			flist.push_back(add_name);
			cout<<"\n"<<add_name<<" is in your friendlist now";
		}
		else if (uflag==0 && flag==0)
		{
			cout<<"\nThis username doesnot exist\n";
		}
		else if(flag3)
		{
			cout<<"\n"<<add_name<<" already your friend\n";
		}
}

void someone::show_friend(string uname){
	int a = 0;
	vector<string>::iterator i;
	i = flist.begin();
	cout<<"\nHey, Whats up! " <<uname<<" your friends are:"<<endl;
	for(;i!-flist.end(); i++){
		cout<<"\n"<<*i<<endl;
		a++;
	}
	cout<<endl<<endl<<"\nTotal number of friends are: "<<a;
} 

void someone::delete_friend(string uname)
{
	if(flist.empty()){
		cout<<"\nYou have no friends :(\a\n";
	}
	else
	{
		int c=0, p=0,flag=0;
		string name;
		cout<<"\nTell me who is cringe we will just unfriend him/her\n";
		cin>>name;
		vector<string>::iterator i;
		i = flist.begin();
		for(;i!=flist.end();i++)
		{
			c++;
			if(*t==name)
			{
				flag++;
				pos = c-1;
				break;
			}
		}
		i = flist.begin();
		if(pos || flag)
		{
			cout<<"\nRemoving this cringe "<<name<<" from your friends\n";
			flist.erase(pos+i);
			cout<<name<<" cringe is removed from your friends\n";
		}
		if(flag==0 && pos==0)
		{
			cout<<"\nLuckily this cringe is not your friend";
		}
	}
}

