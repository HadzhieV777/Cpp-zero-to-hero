#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int contentQuality;
public:
    YouTubeChannel(string name, string ownerName) { // this is the constructor of our class
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        contentQuality = 0;
    }
    void GetInfo() {// this is a method for our class
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers: " << SubscribersCount << endl;

        cout << "Videos: " << endl;
        for (string VideoTitle : PublishedVideoTitles) {
            cout << VideoTitle << endl;
        }
    }
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if (SubscribersCount > 0) {
            SubscribersCount--;
        }
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
    void checkAnalytics() {
        if (contentQuality < 5) 
            cout << Name << " has a bad quality content!" << endl;
        else 
            cout << Name << " has a great quality content!" << endl;
    }
};

class CookingYouTubeChanel : public YouTubeChannel {
public:
    CookingYouTubeChanel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is practicing how to get materials, how to be the one who knocks, how to scale your business" << endl;
        contentQuality++;
    }
};

class SingersYouTubeChanel : public YouTubeChannel {
public:
    SingersYouTubeChanel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is singing daily, learning new songs" << endl;
        contentQuality++;
    }
};

int main()
{
    //using polymorphysm to implement the Practice method to both classes

    CookingYouTubeChanel cookingYtChanel("Cooking 101", "Heisenberg");
    SingersYouTubeChanel singersYtChanel("GoshoSings", "Gosho");

    cookingYtChanel.Practice();
    singersYtChanel.Practice();
    singersYtChanel.Practice();
    singersYtChanel.Practice();
    singersYtChanel.Practice();
    singersYtChanel.Practice();

    //using pointers to invoke methods
    YouTubeChannel* yt1 = &cookingYtChanel;
    YouTubeChannel* yt2 = &singersYtChanel;

    yt1->checkAnalytics();

    system("pause>0");
}