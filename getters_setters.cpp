#include <iostream>

using namespace std;

class Movie {
	private: 
		string rating;
	public: 
		string title;
		string director;
		Movie(string argTitle, string argDirector, string argRating){
			title = argTitle;
			director = argDirector;
			setRating(argRating);
		}
		void setRating(string argRating){
			if (argRating == "G" 
					|| argRating == "PG-13" 
					|| argRating == "R" 
					|| argRating == "NR")
			{
				rating = argRating;
			} else {
				rating = "NR";
			}
		}
		string getRating(){
			return rating;
		}
};

int main(){
	Movie avengers("The Avengers", "Joss Wheden", "NG-13");
	cout << avengers.getRating();
	return 0;
}
