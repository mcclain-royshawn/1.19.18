//Comment:
          
//Header:
         #include <iostream>
         using namespace std;
         
//GV
void menu();
int add(int,int);
int sub(int,int);
int mult(int ,int);
int divi(int,int);
//Main:
       int main()
       {
         //Local Variables:
                 int num1,num2,answer; 
                 short choice;       
          
           
         //Code:
                //Enter 2 integer numbers.
          do
          {
          system("cls");
                cout<<"\n \t\t Enter 2 integer numbers: ";
                cin>>num1>>num2;
                
                //Menu
                menu();
                
                cout<<"Enter choice HERE ==>: ";
                cin>>choice;
                
                switch(choice)
                {
                case 1:{ 
                int asnwer=add(num1,num2);
                cout<<"The answer is: "<<answer<<endl;
                system("pause");
                break;
                         }//End of case 1
                                   
                  case 2:{
                       
                       int asnwer=sub(num1,num2);
                      cout<<"The answer is: "<<answer<<endl;
                      system("pause");
                                   break;
                         }//End of case 2
                                   
                  case 3:{
                       
                       int asnwer=mult(num1,num2);
                      cout<<"The answer is: "<<answer<<endl;
                      system("pause");
                                   break;
                         }//End of case 3
                                  
                  case 4:{
                       
                       int asnwer=divi(num1,num2);
                      cout<<"The answer is: "<<answer<<endl;
                      system("pause");
                                   break;
                         }//End of case 4
                       
                  case 5:{
                       
                       
                                   break;
                         }//End of case 5
                           
                  default :
                          cout<<"ERROR. Please select 1, 2, 3, 4, or 5."<<endl;
                          system("pause");
                                          
                }//end of switch
                
          }while(choice!=5);
                 
      
        return 0;   
       }
       
       //++++++++++++++++
       void menu()
            {
            //local variable
            
            //code
            cout<<"\n \t\t\t Math Operations\n\n";
            cout<<"\t\t 1. Addition \n";
            cout<<"\t\t 2. Subtraction \n";
            cout<<"\t\t 3. Multiplication \n";
            cout<<"\t\t 4. Division \n";
            cout<<"\t\t 5. Exit \n";
            return;
            }
       //++++++++++++
       int add(int n1,int n2)
       {
       //local var
       
        //code
       return n1+n2;  
               }//add
       //++++++++++++++++
       int sub(int n1,int n2)
       {
                     return n1-n2;
                     }//sub
       int mult(int n1,int n2)
       {
                     return n1*n2;
                     }//multi
       
       int divi(int n1,int n2)
       {
                     return n1/n2;
                     }//divi

