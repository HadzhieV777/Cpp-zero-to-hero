#include <iostream>
#include <list>
using namespace std;

class YouTubeChanel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
    YouTubeChanel(string name, string ownerName) { // this is the constructor of our class
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

int main()
{
    YouTubeChanel ytChanel("JustPesho", "Pesho");
    ytChanel.PublishVideo("Pesho goes on holiday");
    ytChanel.PublishVideo("Pesho is Angry");
    ytChanel.PublishVideo("Pesho reviews a fancy bar");

    ytChanel.GetInfo();

    system("pause>0");
}