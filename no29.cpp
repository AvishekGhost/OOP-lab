#include <iostream>
#include <string>

using namespace std;

fn NoOfCopies();
fn TotalPrice();

class Book{
	int BookCount;
	string title;
	string ISBN;
	string *authors;
public:
	Book(string _title,string _ISBN): title(_title), ISBN(_ISBN) 
	{}
	void DisplayBook(){
	
	}
	int GetBookCount() { return BookCount; }
};

class BookStore{
	int TotalBookCount = 0;
	string NameOfBooks[];
public:
	void DisplayAllBooks(){	for(int i = 0; i<TotalBookCount ;i++) cout << NameOfBooks[i] << "," ; }
		
};

int main(){
	Book book[2];

	for(int i = 0;i<2;i++){
		if(book.GetBookCount > 1){
			//add only 1 book to store
		} else {
			//add book to store
		}
	return 0;
}
