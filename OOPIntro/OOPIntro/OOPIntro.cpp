#include <iostream>
#include <list>
using namespace std;

class YouTubeChanel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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
};

int main()
{
    YouTubeChanel ytChanel("JustPesho", "Pesho");
    ytChanel.PublishedVideoTitles.push_back("Pesho goes on holiday");
    ytChanel.PublishedVideoTitles.push_back("Pesho is Angry");
    ytChanel.PublishedVideoTitles.push_back("Pesho reviews a fancy bar");

    YouTubeChanel ytChanel2("GoshoSings", "Gosho");

    ytChanel.GetInfo();
    ytChanel2.GetInfo();

    system("pause>0");
} 