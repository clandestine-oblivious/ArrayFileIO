#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int size= 10000;

using namespace std;

void SortArray(int array[]);

int main(){

    int i =0;
    int numbers[size];
    string line;

    ifstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good()){
        getline(myfile, line);
        stringstream(line)>>numbers[i];
        if(i<size)
        i++;
 }
    SortArray(numbers);

    myfile.close();
    return 0;
}

    void SortArray(int Array[]){
    int arrangedArray[size];
    for(int i=0; i<size; i++){

        if(i<1){

        arrangedArray[i]=Array[i];}


    else if(Array[i] > arrangedArray[i-1]){
    arrangedArray[i]=Array[i];
    }
    else if(Array[i] < arrangedArray[i-1]){
            for(int n=0; n<i; n++){
                if(Array[i]<arrangedArray[n]){
                    for(int k=i; k>n; k--){
                        arrangedArray[k] = arrangedArray[k-1];
                    }
                    arrangedArray[n] = Array[i];
                    break;
                }
            }
        }
    }
    for(int b=0; b<size; b++){
    cout << arrangedArray[b] << endl;}

}



