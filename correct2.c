//Line 119: line comment: -- factory functions
#include <stdio.h> 
 #include "cgen.h"
 #include <string.h> 
	#include "thetalib.h"
  #undef SELF 
 
 #define SELF struct Address *self 
  typedef struct Address
 {char* street;
 int number;
 char* city;
 void (*setAddress)(SELF, char* s,int n,char* c);
 void (*printAddress)(SELF);

}Address;
 
 void setAddress(SELF, char* s,int n,char* c)
{
self->street = s;
self->number = n;
self->city = c;

 return;
}
void printAddress(SELF)
{
write("Address: %s %d, %s\n",self->street,self->number,self->city);

 return;
}
 
#undef SELF 
 
 #define SELF struct Person *self 
  typedef struct Person
 {char* firstName ,lastName;
 char* email;
 int phone;
 Address address;
 void (*setPerson)(SELF, char* fn,char* ln,char* email,int phone,Address addr);
 void (*printPersonInfo)(SELF);

}Person;
 
 void setPerson(SELF, char* fn,char* ln,char* email,int phone,Address addr)
{
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;

 return;
}
void printPersonInfo(SELF)
{
write("%s %s, email: %s phone: %d\n",self->firstName,self->lastName,self->email,self->phone);
self->address.printAddress(&self->address);

 return;
}
 
#undef SELF 
 
 #define SELF struct Book *self 
  typedef struct Book
 {char* title ,isbn;
 Person author;
 int numOfCopies;
 double price;
 void (*setBook)(SELF, char* t,Person a,int numOfCopies,double price);
 void (*printBook)(SELF);

}Book;
 
 void setBook(SELF, char* t,Person a,int numOfCopies,double price)
{
self->title = t;
self->author = a;
self->numOfCopies = numOfCopies;
self->price = price;

 return;
}
void printBook(SELF)
{
write("Title: %s\n",self->title);
writeStr("Author:");
self->author.printPersonInfo(&self->author);
write("Price:%f\n",self->price);
write("Number of available copies: %d\n",self->numOfCopies);

 return;
}
 
#undef SELF 
 
 #define SELF struct Order *self 
  typedef struct Order
 {int orderNum;
 Book book;
 int quantity;
 Address shippingAddress;
 int delivered;
 void (*setOrder)(SELF, int orNum,Book b,int q,Address sh,int del);

}Order;
 
 void setOrder(SELF, int orNum,Book b,int q,Address sh,int del)
{
self->orderNum = orNum;
self->book = b;
self->quantity = q;
self->shippingAddress = sh;
self->delivered = del;

 return;
}
 
#undef SELF 
 
 #define SELF struct Bookstore *self 
  typedef struct Bookstore
 {char* name;
 Book listOfBooks[100];
 int numOfBooks;
 Order listOfOrders[100];
 int numOfOrders;
 void (*putOrder)(SELF, Order o);
 void (*addBook)(SELF, Book b);
 void (*printBookStoreBooks)(SELF);
 double (*calculateTotalOrdersIncome)(SELF);

}Bookstore;
 
 void putOrder(SELF, Order o)
{
self->listOfOrders[self->numOfOrders] = o;
self->numOfOrders += 1;

 return;
}
void addBook(SELF, Book b)
{
self->listOfBooks[self->numOfBooks] = b;
self->numOfBooks += 1;

 return;
}
void printBookStoreBooks(SELF)
{
int i;
for(i=0;i<self->numOfBooks;i+=1){
 self->listOfBooks[i].printBook(&self->listOfBooks[i]);
 
 }

 return;
}
double calculateTotalOrdersIncome(SELF)
{
double total;
total = 0;
int i;
for(i=0;i<self->numOfOrders;i+=1){
 if(self->listOfOrders[i].delivered){
 total = total + self->listOfOrders[i].quantity * self->listOfOrders[i].book.price;
 
 }
 
 }

 return total;
}
 
int orderId;
Address createAddress(char* s,int n,char* c)
{
Address a;

a.setAddress(&a,s,n,c);

 return a;
}
Person createPerson(char* fn,char* ln,char* email,int phone,Address addr)
{
Person p;

p.setPerson(&p,fn,ln,email,phone,addr);

 return p;
}
Book createBook(char* t,Person a,int numOfCopies,double price)
{
Book b;

b.setBook(&b,t,a,numOfCopies,price);

 return b;
}
Order createOrder(int orNum,Book b,int q,Address sh,int del)
{
Order ord;

ord.setOrder(&ord,orNum,b,q,sh,del);

 return ord;
}
Bookstore createBookstore(char* n)
{
Bookstore bs;

bs.name = n;
bs.numOfBooks = 0;
bs.numOfOrders = 0;

 return bs;
}
int main(int argc, char *argv[])
{
orderId = 0;
 Address a ,a1;
 a = createAddress("Stadiou",10,"Stadiou");
 Person author;
 author = createPerson("Christos","Papadimitriou","cpap@gmail.com",12345,a);
 Book b;
 b = createBook("Computation Theory",author,34.3,100);
 Bookstore bs;
 bs = createBookstore("Papasotiriou");
 bs.addBook(&bs,b);
 a = createAddress("Wall Street",10,"NY");
 author = createPerson("Dennis","Richie","richie@gmail.com",54321,a);
 b = createBook("C Programming",author,10.3,100);
 bs.addBook(&bs,b);
 bs.printBookStoreBooks(&bs);
 Order ord;
 ord = createOrder(orderId,b,2,a,0);
 orderId += 1;
 bs.putOrder(&bs,ord);
 write("Bookstore orders income: %.2f\n",bs.calculateTotalOrdersIncome(&bs));
}

//Accepted!
