#include <iostream>
#include<list>
using namespace std;

class youTubeChannel {
public:
      string Name;
      string OwnerName;
      int SubscribersCount;
      list<string> PublishedVideoTitles;
      youTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
      }

};

int main() {
  youTubeChannel ytChannel("CodeBeauty", "saldina" );
  ytChannel.PublishedVideoTitles.push_back("c++ for beginners");
  ytChannel.PublishedVideoTitles.push_back("HTML && CCS");
  ytChannel.PublishedVideoTitles.push_back("C++ OOP 1");

  cout << ytChannel.Name<<endl;
  cout << ytChannel.OwnerName<<endl;
  cout << ytChannel.SubscribersCount <<endl;
  for(string videoTitle: ytChannel.PublishedVideoTitles ) {
    cout<<videoTitle<<endl;
  }
} 