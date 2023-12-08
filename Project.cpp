#include <iostream>
#include <cmath>
using namespace std;
float add();
float subtract();
float division();
float multiply();
float sin();
float cos();
float tan();
float sin_inverse();
float cos_inverse();
float tan_inverse();
float log();
float power();
float square();
float cube();
float square_root();
double const PI =3.14;

int main() {
    int calc,choice,userinput;
    cout<<"\n**********Scientific Calculator************"<<endl;
	
    A:	
      cout<<"\nPress 1 For Arthematic operation : "<<endl;
      cout<<"Press 2 For Trignomatric : "<<endl;
      cout<<"Press 3 For Logarithm : "<<endl;
      cout<<"Press 4 For Power function :\n "<<endl;
      cout<<"Enter the operation you want : ";
      cin>>userinput;
	
 //Arthematic operation
	 
    if(userinput==1){
 	  cout<<"1 : Addition "<<endl;
          cout<<"2 : Subtraction "<<endl;
 	  cout<<"3 : Multiplication "<<endl;
          cout<<"4 : Division "<<endl;
          cout<<"5 : Main Menu \n"<<endl;
          cout<<"Enter your choice = ";
          cin>>choice; 
	    
	  if(choice==1)
	    {
		  calc=add();
	          goto A;
             }
          if(choice==2)
	    {
	         calc=subtract();	
		 goto A;
            }
           if(choice==3)
	    {
	        calc=multiply();
	        goto A;
            }  
           if(choice==4)
	    {
		  calc=division();
	          goto A;
            }
           if(choice==5)
	     {
		  goto A;
            
	     }   
	       } 
//Trignomatric operation
    if(userinput==2)
	{
    	cout<<"1 : Sin function "<<endl;
    	cout<<"2 : Cos function "<<endl;
    	cout<<"3 : Tan function "<<endl;
    	cout<<"4 : Sin_Invers "<<endl;
    	cout<<"5 : Cos_Invers "<<endl;
     	cout<<"6 : Tan_Invers "<<endl;
     	cout<<"7 : Main Menu"<<endl;
     	cout<<"Enter your choice = ";
     	cin>>choice;
     	
   	if(choice==1) 
         {
	      calc=sin();
	      goto A;  	
         }
        if(choice==2)
	{
	     calc=cos();
	     goto A;	
        }
        if(choice==3)
	 {
	     calc=tan();
	     goto A;
	 }  
        if(choice==4) 
	 {
             calc=sin_inverse();
             goto A;
	 } 
        if(choice==5)
	 {
	    calc=cos_inverse();
	    goto A;
	 } 
        if(choice==6)
         {
	   calc=tan_inverse();
	   goto A;
         }  
        if(choice==7)
         {
     	   goto A;
        }  	 
      }
  //Logarithm operation
  if(userinput==3)
  {
      cout<<"1 :  Natural log\n";
      cout<<"2 : Main Menu \n ";
      cout<<"Enter your choice = ";
      cin>>choice;
	  
      if(choice==1)
       {
	  calc=log();  
	  goto A;	
       }
      if(choice==2)
       {
        goto A;
       }
 }
//Power function operation      
if(userinput==4){ 		
     cout<<"1 : For power \n ";
     cout<<"2 : For square  \n ";
     cout<<"3 : For square_root  \n ";
     cout<<"4 : For Cube \n ";
     cout<<"5 : For Main Menu \n ";
     cout<<"Enter your choice = ";
     cin>>choice;
     if(choice==1)
      {
	  calc=power();
	  goto A;
      }
    if(choice==2)
     {
	  calc=square();
          goto A;
     }
    if(choice==3)
     {
          calc=square_root();
	  goto A;
     } 
    if(choice==4)
     {  	
  	  calc=cube();
  	  goto A;
     } 
    if(choice==5)
     {
	 goto A ;
     }	
}
	 
if(userinput==5)
 {
    return 0;
 }
    }

float add(){
    int x, y;
    cout<<"Enter the First number : "<<endl;
    cin>>x;
    cout<<"Enter the second number : "<<endl;
    cin>>y;
    cout<<"Addition = "<<x + y;
}
float subtract(){
    int x, y;
    cout<<"Enter the First number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Subtraction = "<<x - y;
}
float multiply(){
    int x, y;
    cout<<"Enter the First number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Multiplication = "<<x * y;
}
float division(){
   int x, y;
   cout<<"Enter the First number : ";
   cin>>x;
   cout<<"Enter the second number : ";
   cin>>y;
   int c=x/y;
   cout<<"Division = "<<c;
}
float sin(){
   double x;
   cout << "Enter angle (in radians) : ";
   cin >> x;
   double result = sin(x);
   cout << "Sin(" << x << ") : " << result << endl;
}
float cos(){
   double x;
   cout << "Enter angle (in radians) : ";
   cin >> x;
   double result = cos(x);
   cout << "Cos(" << x << ") : " << result << endl;
}
float tan(){
   double x;
   cout << "Enter angle (in radians) : ";
   cin >> x;
   double result = tan(x);
   cout << "Tan(" << x << ") : " << result << endl;
}
float sin_inverse(){
   double  x ;
   cout<<"Enter the value (radian) : ";
   cin>>x;
   double result ;
   result = asin(x) * (180/PI);
   cout << "asin("<<x<<")  = " << result << " degrees" << endl;
}
float cos_inverse(){
   double  x ;
   cout<<"Enter the value (radian) : ";
   cin>>x;
   double result ;
   result = acos(x) * (180/PI);   
   cout << "acos("<<x<<")  = " << result << " degrees" << endl;	
}
float tan_inverse(){
   double  x ;
   cout<<"Enter the value (radian) : ";
   cin>>x;
   double result ;
   result = asin(x) * (180/PI);    
   cout << "atan("<<x<<")  = " << result << " degrees" << endl;
  	
}
float log(){
   int x ;
   cout<<"Enter the value : ";
   cin>>x;
   float result = log (x);
   cout << "log(x) = " << result << endl;
}

float power(){
   int x, y;
   cout<<"Enter the number you want to power : ";
   cin>>x>>y;
   int res=pow(x,y);
   cout<<"Power = "<<res;
}
float square(){
   int x;
   cout<<"Enter the numner you want square : ";
   cin>>x;
   int res=pow(x,2);
   cout<<"Square = "<<res;
}
float cube(){
   int x;
   cout<<"Enter the number you want to cube : ";
   cin>>x;
   int res=pow(x,3);
   cout<<"Power = "<<res;
}
float square_root(){
   int x;
   cout<<"Enter the number you want to square_root : ";
   cin>>x;
   int res=sqrt(x);
   cout<<"square_root = "<<res;
}



