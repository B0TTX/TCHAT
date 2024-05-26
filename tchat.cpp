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

class someone
{
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

void page1()
{
    int flag=0,choice;

cout<<"\n\t\t\tWELCOME TO THE V-MESSENGER\n";




    while(1)
{

cout<<"\nPlease Enter your choice\n  1-Sign_up\n  2-Sign_in\n  3-Exit \n \n"<<endl;
cin>>choice;

switch(choice)
{
case 1:
    {

        string username,pwd;
        cout<<"\nchoose a username\n";
        cin>>username;
        cout<<"\nchoose a password\n";
        cin>>pwd;
map<string,string>::iterator iuser;
        if(user.empty())
        {
        user[username]=pwd;
        }
        else
        {

        for(iuser=user.begin();iuser!=user.end();iuser++)
        {
            if(iuser->first==username)
            {
                cout<<"\nSorry! username not available..please try with some other name\n";
                break;
            }
            else
              {user[username]=pwd;
              break;}
        }
        }
    break;
    }


 case 2:
    {

        string lusername,lpwd;
        cout<<"\nenter your username\n";
        cin>>lusername;
        cout<<"\nenter your password\n";
        cin>>lpwd;
        map<string,string>::iterator iuser;
        for(iuser=user.begin();iuser!=user.end();iuser++)
        {
            if(iuser->first==lusername && iuser->second==lpwd)
            {
                    cout<<"\nWELCOME "<<lusername<<"!!  You have successfully logged in \n";

                    flag=1;
                    page2(lusername);
                    break;

            }}


            if(flag==0)
                {
                    cout<<"\nusername or password incorrect\n\t!!Please try again\n";
                    break;
                }

break;
        }


case 3:
    {

        cout<<"\ndisplay\n";
        map<string,string>::iterator iuser;
        cout<<"\nall users\n";
for(iuser=user.begin();iuser!=user.end();iuser++)
{
    cout<<iuser->first<<"\t"<<iuser->second;
}
        break;
    }

}
if(flag==1)
                {
                    break;
                }
}
}

map<string, someone> f;

void page2(string uname)
{
   
int choice2,choice3;
main_menu:
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t     WELCOME    "<<uname<<endl<<endl;
   
    cout<<"\n\t    ***********Choose from following menu**********\n";
    cout<<"\n1-Inbox\n2-Chat\n3-Friend_list\n4-Add friend\n5-Unfriend\n6-Group chat\n7-Log out\n";
    cin>>choice2;
    switch(choice2)
    {
    case 1:
      {

            f[uname].inbox(uname);
 cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
        if(choice3)
        goto main_menu;

break;
        }
    case 2:
        {
            string reciepient;
            cout<<"\nPlease enter the reciepient's name:\n";
            cin>>reciepient;
            char message[100];
        cout<<"\nPlease Type Your message :"<<endl;
        cin.ignore();
        cin.getline(message,100);
            f[reciepient].chat_on(uname,reciepient,message);
            cout<<"\nYour message has been sent\n";
            cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
        if(choice3)
        goto main_menu;

break;

        }
    case 3:
        {
           f[uname].show_friend(uname);
           cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
        if(choice3)
        goto main_menu;
      break;
       }
    case 4:
        {
        f[uname].new_friend(uname);
        cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
if(choice3)
        goto main_menu;
        break;
        }
    case 5:
        {
        f[uname].delete_friend(uname);
        cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
if(choice3)
        goto main_menu;
        break;}


    case 6:
        {

    char ch;

    vector<string>rec;
    map<string,string>::iterator iuser;
    vector<string>::iterator irec;
group:
    int flag=0;
        string reciepient;
    cout<<"Enter reciepient";
    cin>>reciepient;

    for(iuser=user.begin();iuser!=user.end();iuser++)
        {
            if(iuser->first==reciepient)
            {
                flag++;
            }
        }
        if(!flag)
        {
            cout<<"\nSorry!! No such user exist\a\a\n";
            goto group;
        }

    rec.push_back(reciepient);
    cout<<"Do you want to add more reciepients (y/n)?\n";
    cin>>ch;

    if(ch=='y')
        goto group;

    else if(ch=='n')
    {
         char message[100];
        cout<<"\nPlease Type Your message :"<<endl;
        cin.ignore();
        cin.getline(message,100);
         for(irec=rec.begin();irec!=rec.end();irec++)
        {
            f[*irec].chat_on(uname,*irec,message);
        }
    }
    cout<<"\nYour message has been sent\n";
    cout<<"\npress any number except '0' to go back to main menu\n";
        cin>>choice3;
if(choice3)
        goto main_menu;
        break;
        }

case 7:
    {
        system("cls");
        cout<<"\nyou have been successfully logged out\n";

        page1();


        break;

    }
}
}

