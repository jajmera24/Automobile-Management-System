#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>
void menu();
void submenu_add();
void submenu_search();
void submenu_edit();
void submenu_booking();
void searchcompany();
void searchmodelno();
void searchcar();
void searchprice();
void modify();
void del();
   class car
    {
      public:
	 char cname[30],modelno[20],company[30];
	 long double price;
	   void in()
	      {
		textbackground(14);
		textcolor(1);
		clrscr();
		gotoxy(14,7);
		cout<<"Enter the company of the car ";
		gets(company);
		gotoxy(14,9);
		cout<<"Enter the car name ";
		gets(cname);
		gotoxy(14,11);
		cout<<"Enter the model no. of the car ";
		gets(modelno);
		gotoxy(14,13);
		cout<<"Enter the price of the car ";
		cin>>price;
	      }
	   void out()
	      {
		 textbackground(14);
		 textcolor(1);
		 clrscr();
		 gotoxy(14,7);
		 cout<<"The company of the car is ";
		 gotoxy(50,7);
		 cout<<company;
		 gotoxy(14,9);
		 cout<<"The name of the car is ";
		 gotoxy(50,9);
		 cout<<cname;
		 gotoxy(14,11);
		 cout<<"The model no. of the car is ";
		 gotoxy(50,11);
		 cout<<modelno<<endl;
		 gotoxy(14,13);
		 cout<<"The price of the car is ";
		 gotoxy(50,13);
		 cout<<price<<endl;
	      }
	   char *getcompany()
	      {
		 return(company);
	      }
	   char *getcarname()
	      {
		 return(cname);
	      }
	   char *getmodelno()
	      {
		 return(modelno);
	      }
	   long double getprice()
	      {
		 return(price);
	      }
    }c1;        //class completed  with its object c1


void addcar()
    {
      fstream f;
      f.open("car.dat",ios::out|ios::app);
      c1.in();
      f.write((char *)&c1,sizeof(c1));
      f.close();
    }
void retrievecar()
    {
      fstream f;
      f.open("car.dat",ios::in);
      f.read((char *)&c1,sizeof(c1));
      while(!f.eof())
	 {
	     c1.out();
	     f.read((char *)&c1,sizeof(c1));
	 }
      f.close();
    }


class customer            //new class:- customer
  {
     char name[30],address[30];
     long double phno;
	public:
	  void in1()
	      {
		textbackground(14);
		textcolor(1);
		clrscr();
		gotoxy(14,7);
		cout<<"Enter the name of the customer ";
		gets(name);
		gotoxy(14,9);
		cout<<"Enter the address of the customer ";
		gets(address);
		gotoxy(14,11);
		cout<<"Enter the phone no. of the customer ";
		cin>>phno;
	      }
	  void out1()
	      {
		textbackground(14);
		textcolor(1);
		clrscr();
		gotoxy(14,7);
		cout<<"The name of the customer is ";
		gotoxy(50,7);
		cout<<name;
		gotoxy(14,9);
		cout<<"The address of the customer is ";
		gotoxy(50,9);
		cout<<address;
		gotoxy(14,11);
		cout<<"The phone no. of the customer is ";
		gotoxy(50,11);
		cout<<phno;
	      }
  };    //class customer completed


void addcustomer()
    {
	customer cu;                  // object creatd for class customer
	fstream f;
	f.open("customer.dat",ios::out|ios::app);
	cu.in1();
	f.write((char *)&cu,sizeof(cu));
	f.close();
    }
void retrievecustomer()
    {
	customer cu;         // object created for class customer
	fstream f;
	f.open("customer.dat",ios::in);
	f.read((char *)&cu,sizeof(cu));
	while(!f.eof())
	   {
	      f.read((char *)&cu,sizeof(cu));
	      cu.out1();
	   }
	f.close();
    }


class booking   // new class for booking
    {
       char bname[30],baddress[30],pan[30],mode[30],cr[30];
       char phone[10];
	 public:
	    void in2()
	       {
		  clrscr();
		  gotoxy(14,4);
		  cout<<"Enter the car you are booking ";
		  gets(cr);
		  gotoxy(14,6);
		  cout<<"Enter the name of the customer ";
		  gets(bname);
		  gotoxy(14,8);
		  cout<<"Enter the address of the customer ";
		  gets(baddress);
		  gotoxy(14,10);
		  cout<<"Enter the pan no. of the customer ";
		  gets(pan);
		  gotoxy(14,12);
		  cout<<"Enter the phone no. of the customer ";
		  cin>>phone;
		  gotoxy(14,14);
		  cout<<"Enter the mode of payment ";
		  gets(mode);
	       }
	    void out2()
	       {
		  gotoxy(14,6);
		  cout<<"The name of the customer is";
		  gotoxy(50,6);
		  cout<<bname;
		  gotoxy(14,8);
		  cout<<"The address of the customer is";
		  gotoxy(50,8);
		  cout<<baddress;
		  gotoxy(14,10);
		  cout<<"The car customer has booked ";
		  gotoxy(50,10);
		  cout<<cr;
		  gotoxy(14,12);
		  cout<<"The pan no. of the customer is ";
		  gotoxy(50,12);
		  cout<<pan;
		  gotoxy(14,14);
		  cout<<"The phone no. of the customer is ";
		  gotoxy(50,14);
		  cout<<phone;
		  gotoxy(14,16);
		  cout<<"The mode of the payment is ";
		  gotoxy(50,16);
		  cout<<mode;
	       }
    }b;               // class terminated and object fot it is also created



void addbooking()
   {
      fstream f;
      f.open("booking.dat",ios::out);
      b.in2();
      f.write((char *)&b,sizeof(b));
      f.close();
   }
void retrievebooking()
   {
      clrscr();
      fstream f;
      f.open("booking.dat",ios::in);
      f.read((char *)&b,sizeof(b));
      while(!f.eof())
	{
	   b.out2();
	   f.read((char *)&b,sizeof(b));
	}
      f.close();
   }
void intro()
   {
      textbackground(14);
      textcolor(1);
      clrscr();
      gotoxy(25,4);
      cout<<"INTRODUCTION ";
      gotoxy(20,5);
      cout<<"______________________";
      gotoxy(12,8);
      cout<<"This project has been prepared by jaya";
      gotoxy(12,10);
      cout<<"It is designed for an automobile company";
      gotoxy(12,12);
      cout<<"For the booking of cars and its details ";
      gotoxy(50,18);
      cout<<"Press any key to cont. ";
      getch();
      for(int i=0;i<8;i++)
	 {
	    gotoxy(14,14);
	    cout<<"Please Wait while loading ";
	    gotoxy(18,20);
	    cout<<"Loading";
	    gotoxy(28,20);
	    cout<<"(";
	    delay(200);
	    clrscr();
	    gotoxy(14,14);
	    cout<<"Please Wait while loading ";
	    gotoxy(18,20);
	    cout<<"Loading";
	    gotoxy(29,20);
	    cout<<"~";
	    delay(200);
	    clrscr();
	    gotoxy(14,14);
	    cout<<"Please Wait while loading ";
	    gotoxy(18,20);
	    cout<<"Loading";
	    gotoxy(30,20);
	    cout<<")";
	    delay(200);
	    clrscr();
	    gotoxy(14,14);
	    cout<<"Please Wait while loading ";
	    gotoxy(18,20);
	    cout<<"Loading";
	    gotoxy(29,20);
	    cout<<"_";
	    delay(200);
	    clrscr();
	 }
   }
void menu()
   {
	 clrscr();
	 int ch;
	 textbackground(14);
	 textcolor(1);
	 clrscr();
	 gotoxy(16,8);
	 cout<<"MAIN MENU";
	 gotoxy(16,10);
	 cout<<"1.Add";
	 gotoxy(16,12);
	 cout<<"2.Search";
	 gotoxy(16,14);
	 cout<<"3.Edit";
	 gotoxy(16,16);
	 cout<<"4.Booking";
	 gotoxy(16,18);
	 cout<<"5.Exit";
	 gotoxy(16,20);
	 cout<<"Enter your choice ";
	 cin>>ch;
	 if(ch==1)
	       submenu_add();
	 else if(ch==2)
	       submenu_search();
	 else if(ch==3)
	       submenu_edit();
	 else if(ch==4)
	       submenu_booking();
	 else if(ch==5)
	       {
		   clrscr();
		   for(int i=1;i<=55;i++)
		      {
			  gotoxy(i,12);
			  cout<<"Thank you for visiting! ";
			  delay(160);
			  clrscr();
		      }
		   exit(0);
	       }
   }
void submenu_add()
   {
       int ch;
       clrscr();
       textbackground(14);
       textcolor(1);
       clrscr();
       gotoxy(14,7);
       cout<<"1.Car";
       gotoxy(14,9);
       cout<<"2.Customer";
       gotoxy(14,11);
       cout<<"3.Back";
       gotoxy(14,13);
       cout<<"Enter your choice ";
       cin>>ch;
       if(ch==1)
	   {
	       addcar();
	       retrievecar();
	       getch();
	       menu();
	   }
       else if(ch==2)
	   {
	       customer c;
	       addcustomer();
	       submenu_search();
	       menu();
	   }
       else if(ch==3)
	   menu();
   }

void submenu_search()
   {
       clrscr();
       int ch;
       textbackground(14);
       textcolor(1);
       clrscr();
       gotoxy(26,4);
       cout<<"SEARCH CAR";
       gotoxy(14,6);
       cout<<"1.Company";
       gotoxy(14,8);
       cout<<"2.Car name ";
       gotoxy(14,10);
       cout<<"3.Model no. ";
       gotoxy(14,12);
       cout<<"4.Price(Range) ";
       gotoxy(14,14);
       cout<<"5.Return to menu ";
       gotoxy(14,16);
       cout<<"Enter your choice ";
       cin>>ch;
       if(ch==1)
	     searchcompany();
       else if(ch==2)
	     searchcar();
       else if(ch==3)
	     searchmodelno();
       else if(ch==4)
	     searchprice();
       else if(ch==5)
	     menu();
   }

void searchcompany()
   {
       clrscr();
       car c1;
       fstream f;
       char cmp[30];
       gotoxy(14,6);
       cout<<"Enter company to be searched ";
       gets(cmp);
       f.open("car.dat",ios::in);
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	   {
	       if(strcmpi(c1.getcompany(),cmp)==0)
		   {
		       gotoxy(14,8);
		       c1.out();
		       getch();
		       menu();
		   }
	       else
		   {
		       gotoxy(14,14);
		       cout<<"Company not found ";
		       getch();
		       menu();
		   }
	   }
       f.close();
   }

void searchcar()
   {
       clrscr();
       car c1;
       fstream f;
       char cr[30];
       gotoxy(14,6);
       cout<<"Enter car to be searched ";
       gets(cr);
       f.open("car.dat",ios::in);
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	  {
	       if(strcmpi(c1.getcarname(),cr)==0)
		   {
		       gotoxy(14,8);
		       c1.out();
		       getch();
		       menu();
		   }
	       else
		   {
		       gotoxy(14,14);
		       cout<<"Car not found ";
		       getch();
		       menu();
		   }
	  }
       f.close();
   }

void searchmodelno()
   {
      clrscr();
      car c1;
      fstream f;
      char m[30];
      gotoxy(14,6);
      cout<<"Enter model no. to be searched ";
      gets(m);
      f.open("car.dat",ios::in);
      f.read((char *)&c1,sizeof(c1));
      while(!f.eof())
	  {
	       if(strcmpi(c1.getmodelno(),m)==0)
		   {
		       gotoxy(14,8);
		       c1.out();
		       getch();
		       menu();
		   }
	       else
		   {
		       gotoxy(14,14);
		       cout<<"Car model not found ";
		       getch();
		       menu();
		   }
	  }
      f.close();
   }

void searchprice()
   {
      clrscr();
      car c1;
      fstream f;
      long double p1,p2;
      gotoxy(14,6);
      cout<<"Enter your lowest price range ";
      cin>>p1;
      gotoxy(14,8);
      cout<<"Enter your highest price range ";
      cin>>p2;
      f.open("car.dat",ios::in);
      f.read((char *)&c1,sizeof(c1));
      while(!f.eof())
	  {
	      if(c1.getprice()>=p1 && c1.getprice()<=p2)
		   {
		       gotoxy(14,10);
		       c1.out();
		       getch();
		       menu();
		   }
	      else
		   {
		       gotoxy(14,16);
		       cout<<"Car under your budget not found ";
		       getch();
		       clrscr();
		       menu();
		   }
	  }
      f.close();
   }

void submenu_edit()
   {
       clrscr();
       int ch;
       textbackground(14);
       textcolor(1);
       clrscr();
       gotoxy(14,8);
       cout<<"1.Modify";
       gotoxy(14,10);
       cout<<"2.Delete";
       gotoxy(14,12);
       cout<<"3.Return to menu ";
       gotoxy(14,14);
       cout<<"Enter your choice ";
       cin>>ch;
       if(ch==1)
	    {
		 modify();
		 retrievecar();
		 getch();
		 menu();
	     }
       else if(ch==2)
	     {
		 del();
		 getch();
		 clrscr();
		 retrievecar();
		 getch();
		 menu();
	     }
       else if(ch==3)
	     menu();
   }

void modify()
   {
       fstream f,f1;
       f.open("car.dat",ios::in);
       f1.open("temp.dat",ios::out);
       char c[30];
       clrscr();
       gotoxy(14,6);
       cout<<"Enter the name of the car to be edited ";
       cin>>c;
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	   {
	       if(strcmpi(c1.getcarname(),c)==0)
		    {
			 c1.in();
			 f1.write((char *)&c1,sizeof(c1));
		    }
	       else
		    f1.write((char *)&c1,sizeof(c1));
		    f.read((char *)&c1,sizeof(c1));
	   }
       f.close();
       f1.close();
       f.open("temp.dat",ios::in);
       f1.open("car.dat",ios::out);
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	   {
		 f1.write((char *)&c1,sizeof(c1));
		 f.read((char *)&c1,sizeof(c1));
	   }
       f.close();
       f1.close();
   }

void del()
   {
       fstream f,f1;
       f.open("car.dat",ios::in);
       f1.open("temp.dat",ios::out);
       clrscr();
       char c[30];
       int flag=0;
       gotoxy(14,6);
       cout<<"Enter the name of the car to be deleted ";
       gets(c);
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	    {
		if(strcmpi(c1.getcarname(),c)==0)
		     {
			 flag=1;
			 gotoxy(16,8);
			 cout<<"Car deleted ";
		     }
		else
		     f1.write((char *)&c1,sizeof(c1));
		     f.read((char *)&c1,sizeof(c1));
	    }
       if(flag==0)
	    {
		gotoxy(16,8);
		cout<<"Car not found ";
	    }
       f.close();
       f1.close();
       f.open("temp.dat",ios::in);
       f1.open("car.dat",ios::out);
       f.read((char *)&c1,sizeof(c1));
       while(!f.eof())
	    {
		f1.write((char *)&c1,sizeof(c1));
		f.read((char *)&c1,sizeof(c1));
	    }
       f.close();
       f1.close();
   }

void submenu_booking()
   {
       clrscr();
       int ch;
       textbackground(14);
       textcolor(1);
       clrscr();
       gotoxy(14,8);
       cout<<"1.Add booking ";
       gotoxy(14,10);
       cout<<"2.View booking ";
       gotoxy(14,12);
       cout<<"3.Retrurn ";
       gotoxy(14,14);
       cout<<"Enter your choice ";
       cin>>ch;
       if(ch==1)
	   {
	       addbooking();
	       menu();
	   }
       else if(ch==2)
	   {
	       retrievebooking();
	       getch();
	       menu();
	   }
       else if(ch==3)
	   menu();
   }

void main()
   {
      clrscr();
      intro();
      menu();
      getch();

   }

