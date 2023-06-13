#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

bool isPerfect(int num){
    int sum = 0;
    for( int i = 1; i < sqrt(num); i++)
    {
        if (num % i == 0){
            sum += i;
        }
    }
    return sum == num;

}


int main(int argc, char **argv) {
    string path = "nums.txt";
    ofstream stream;
    stream.open(path);
    if (stream.is_open()){
        for (int i = 1; i < argc; i++){
            int num = stoi(argv[i]);
            if(isPerfect(num)){
                stream << num << endl;
            }
        }
    }
    stream.close();
    return 0;
}