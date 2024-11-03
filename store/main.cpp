/*This algorithm  calculates the item a customer buys and add coupon code for some of them

written date July/31/2021
written by Nathnael Terefe (section c) */

#include <iostream>
#include <stdlib.h>
#include <iomanip>


using namespace std;

int main()
{
double pg=6.25;// milk per gallon
double milk=1;
int bread =2;
int eggs=3;
int toiletpaper=4;
int exit=5;
double number;// for number of choice
double g=0;// amount for milk that we get from user
double b=0;// for bread amount
double lb=2.25;// Lb for loaf of bread with out discount
double r,R;// used for coupon code verification ( when they have one)
char n,N;// used for coupon code verification (when they don't have one)
char couponcode; // used to get the input from user if they have coupon or not for bread
double withcouponcode=1.50;// constant used when they have coupon code for bread
double dozen;// for amount of egg to (get from user)
double halfdozen=2;// egg for half dozen (6-egg)
double fulldozen=3.50;// egg for full dozen (12-egg)
double hd=0; // for amount of half dozen egg the customer wants
double fd=0; // for amount of full dozen egg the customer wants
double tp; // for amount of toilet paper rolls they want to buy
double tp15=1.99; // for toilet paper roles from 1-5
double tp610=1.49; // for toilet paper role from 6-10
double tp11above=0.99; // for toilet paper role above 10
double subtotalm;// subtotal for milk
double subtotalbc;// subtotal for milk with coupon
double subtotalb;// subtotal for milk without coupon
double subtotaltoiletpaper15;  // subtotal for toilet paper with 1-5 roles
double subtotaltoiletpaper610; // subtotal for toilet paper with 6-10 roles
double subtotaltoiletpaper11above; // subtotal for toilet paper with 11 and above
double subtotalehd; // subtotal for egg with half dozen
double subtotalefd; // subtotal for egg with full dozen
double total=0;
double milktotal=0;
double milkquantity=0;
double breadquantity=0;
double breadtotal=0;
double eggquantity=0;
double eggtotal=0;
double toiletpaperquantity=0;
double toiletpapertotal=0;
double totalwitheggdiscount=0;
double totalwithtoiletpaper=0;
double totalwitheggdiscount1=0;
double eggdiscount=0;
double net=0;



cout<<"                              welcome to snow 'R' Addis"<<endl;
cout<<"                                 Nathnael Terefe"<<endl;
do {cout<<"our Inventory is:"<<endl;

cout<<"1.milk"<<endl;
cout<<"2.bread"<<endl;
cout<<"3.eggs"<<endl;
cout<<"4.toilet paper"<<endl;
cout<<"5.exit"<<endl;
cout<<"choose what you want to buy from 1-5:"<<endl;
       cin>>number;

if(number<=0 ||number>5)
{
   cout<<"sorry we do have that in the menu only choose from positive 1-5 please re-enter your choice!"<<endl;}
if(number==1){
        do{cout<<"how much gallon do you want:"<<endl;
             cin >> g;
                         subtotalm=g*pg; // subtotal to calculate milk bought by the customer
        if (g>0)
            cout<<"                 The subtotal for milk is: $"<<subtotalm<<endl;

        if (g<=0)
            cout<<"gallon can not be negative or zero re-enter!"<<endl;}while(g<=0);
                          milkquantity+=g;
                          milktotal+=subtotalm;}

 if (number==2){
       do{cout<<"how many loaves of bread do you want:"<<endl;
               cin>>b;
      if(b>0){ cout<<"do you have a coupon code input (r) for yes and (n) for no"<<endl;
             cin>>couponcode;

      if(couponcode==110 || couponcode== 78){
                subtotalb=b*lb; // to calculate the subtotal of bread without coupon

            cout<<"                   The subtotal for bread without coupon code is: $"<<subtotalb<<endl;} // with out coupon
      else if(couponcode==114 || couponcode== 82){
              subtotalbc=b*withcouponcode; // to calculate the subtotal of bread with coupon

            cout<<"                    The subtotal for bread with the coupon code is: $"<<subtotalbc<<endl;} // with coupon
      else
            cout<<"The input is wrong please re-enter !"<<endl;}

      else if (b<=0)
         cout<<"Amount can not be zero or negative re-enter!"<<endl;} while(couponcode != 110 && couponcode !=78 && couponcode !=114 && couponcode !=82);
          breadquantity+=b;
          breadtotal+=subtotalb+subtotalbc; }
if(number==3){
        do{
        cout<<"Input 1.for (half dozen)(6) or 2. for (full dozen)(12)?:"<<endl;// to know amount of dozen they want
                 cin>>dozen;

        if(dozen==1){
            cout<<"how much of half dozens do you want?"<<endl;
                 cin>>hd;
            if (hd<=0)
                cout<<"Amount cant be zero or negative please re-enter!"<<endl;
            else if (hd>0)
                    subtotalehd=hd*halfdozen;// subtotal of half dozen egg
            cout<<"                         The price for the amount of half dozen you want to buy is: $"<<subtotalehd<<endl;}

        else if(dozen == 2){
             cout<<"how much of full dozen do you want?"<<endl;
                 cin>>fd;
            if (fd<=0)
                cout<<"Amount cant be zero or negative please input again!"<<endl;
            else if(fd>0)
                subtotalefd=fd*fulldozen; // subtotal of full dozen egg
            cout<<"                         The price for the amount of full dozen you want to buy is: $" <<subtotalefd<<endl;}
            else
              cout<<"please input your choice correctly choose from 1 or 2!"<<endl;} while(dozen > 2 || dozen < 1);
                eggquantity+=hd+fd;
                 eggtotal+=subtotalehd+subtotalefd;}
if(number==4){
            do{cout<<"how many rolls of toilet paper do you want to buy?"<<endl;
                cin>>tp;
            if(tp==1 || tp==2 || tp==3 || tp==4 ||tp==5){

                    subtotaltoiletpaper15=tp*tp15; // subtotal of toilet paper from 1-5 rolls

                cout<<"                          The price for amount of toilet paper roles you chose is: $"<<subtotaltoiletpaper15<<endl;
            }
            else if (tp==6 || tp==7 || tp==8 || tp==9 || tp==10){

                    subtotaltoiletpaper610=tp*tp610; // subtotal of toilet paper from 6-10 rolls

                cout<<"                          The price for amount of toilet paper roles you chose is: $"<<subtotaltoiletpaper610<<endl;}
            else if (tp>=11){

                    subtotaltoiletpaper11above=tp*tp11above; // subtotal of toilet paper 11 and above rolls

                cout<<"                          The price for the amount of toilet paper roles you chose is: $"<<subtotaltoiletpaper11above<<endl;}
            else if (tp<=0){
                cout<<"choice can't be negative or zero please re-enter!"<<endl;}}while (tp<=0);
                                       toiletpaperquantity+=tp;
                                        toiletpapertotal+=subtotaltoiletpaper15+subtotaltoiletpaper610+subtotaltoiletpaper11above; }



if(number==5){
        total=milktotal+breadtotal+breadtotal+eggtotal+toiletpapertotal;// the total purchase
        totalwitheggdiscount=milktotal+breadtotal+(eggtotal/2)+toiletpapertotal;// to calculate discount of egg
        totalwitheggdiscount1=(eggtotal/2);// to display the discount before applied
        totalwithtoiletpaper+=milktotal+breadtotal+eggtotal+(tp*1.49); // for the extra credit

      if(total>1){
         cout<<"              Your billing                    "<<endl;
        cout<<"- Description     "<<"Quantity"<< "     Subtotal"<<endl;}
     if (g>0){
        cout<<"- Milk"<<setw(15)<<milkquantity<<setw(15)<<"$"<<milktotal<<endl;} // quantity of milk
     if(b>0){
        cout<<"- Bread"<<setw(14)<<breadquantity<<setw(13)<<"$"<<breadtotal<<endl;} // quantity of bread
     if(hd>0||fd>0){
        cout<<"- eggs"<<setw(15)<<eggquantity<<setw(14)<<"$"<<eggtotal<<endl;} // quantity of egg
     if(tp>1){
        cout<<"- toilet paper       "<<setw(7)<<toiletpaperquantity<<setw(13)<<"$"<<toiletpapertotal<<endl;}// quantity of toilet paper
        cout<<endl;
     if(total>1 && milkquantity>=2 && eggquantity>=1){
        cout<<"-before discount:    "<<setw(15)<<"$"<<total<<endl;} //the net before discount (when we are about to add egg discount)
     if(total>1 && milkquantity>=2 && eggquantity>=1){
        cout<<"- discount         "<<setw(17)<<"$"<<totalwitheggdiscount1<<endl;}// the amount of discount given
     if(total>1&&toiletpaperquantity==10){
        cout<<"- Net $:                 "<<setw(7)<<"$"<<totalwithtoiletpaper<<endl;}// the extra credit one
       (milkquantity>2);{
        eggdiscount=eggtotal/2;
        net=total-eggdiscount;}
        cout<<"net: $                       "<<net<<endl;//net with the egg discount or without

    if(total<1){
        cout<<"you did not order anything today.maybe next time"<<endl;
        cout<<"           Thank you for visiting"<<endl;}
        cout<<endl;
    if(total>1){
        cout<<"Thank you for ordering from snow 'R' addis"<<endl;
    } system("pause");
        system("cls");}}while (number==1 || number ==2 || number==3 || number<=4 || number !=1 );














    return 0;
}
