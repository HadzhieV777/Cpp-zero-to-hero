#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { // in this case this is the base class
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
public:
    YouTubeChannel(string name, string ownerName) { // this is the constructor of our class
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
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
};

class CookingYouTubeChanel : public YouTubeChannel {
public:
    CookingYouTubeChanel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is practicing how to get materials, how to be the one who knocks, how to scale your business" << endl;
    }// this method will be available only for this class
};

int main()
{
    CookingYouTubeChanel cookingYtChanel("Cooking 101", "Heisenberg");
    cookingYtChanel.PublishVideo("Cooking Blue");
    cookingYtChanel.PublishVideo("Selling made easy");
    cookingYtChanel.Subscribe();
    cookingYtChanel.Subscribe();
    cookingYtChanel.Subscribe();
    cookingYtChanel.GetInfo();
    cookingYtChanel.Practice();

    system("pause>0");
}