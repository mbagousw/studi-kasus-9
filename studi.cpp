#include <iostream>
using namespace std;	
class Studi{
  public:  
  void input(){
    for(int i=0; i<20; i++){
      cout << "data ke-" << i+1 << " = " ;
      cin >> data[i];
    }
    cout << endl;
  }
  void proses(){
    //urutkan
    for(x=0; x<19; x++){
      for(y=x+1; y<20; y++){
        if(data[x]>data[y]){
          temp = data[x];
          data[x] = data[y];
          data[y] = temp;
        }
      }
    }
    
    //konversi jadi 2 dimensi
    int i = 0;
    while(i<20){
      for(x=0; x<5; x++){
        for(y=0; y<4; y++){
          bil[x][y] = data[i];
          i++;
        }
      }
    }
    
  }
  void output(){
  	cout << "Bilangan setelah diurutkan : ";
    for (int i=0; i<20; i++){
      cout << data[i] << " ";
    }
    cout << "\nBilangan setelah di konversi : " << endl;
    for(int i=0; i<5; i++){
      for (int j=0; j<4; j++){
        cout << bil[i][j] << " ";
      }
      cout << endl;
    }
    
  }
  private:
  int data[20]; int bil[5][4];
  int x,y,temp;
};
int main(){
  Studi a;
  a.input();
  a.proses();
  a.output();
  return 0;
}
