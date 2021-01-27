#include <iostream>

using namespace std;

class Book {
	public: 
		string title;
		string author;
		int pages;
		Book(){
			title = "No title";
			author = "No author";
			pages = 0;
		}
		Book(string argTitle, string argAuthor, int argPages){
			title = argTitle;
			author = argAuthor;
			pages = argPages;
		}
};

int main() {	
	Book book1("Harry Potter", "JK Rowling", 500);
	cout << book1.title
		<< endl
		<< book1.author
		<< endl
		<< book1.pages 
		<< endl;
	return 0;
}
