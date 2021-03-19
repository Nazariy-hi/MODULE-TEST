#include <iostream>
using namespace std;
// Variant ¹5 , Nazariy Hrytsyk
//Task number 1
 (tan (pow(x,4)-6)-pow(cos(2+xy),3) / pow (cos, pow (x,3)*pow(c,2),4)
    //Task number 3
int main() {
	int a, b, c;
	int arr[700];
	for(int j=0; j<=700; j++){
		arr[j]=j;
	}
	for (int i = 1; i <=700 ; i++){
		if(arr[i] > 99){
			if((arr[i] - (arr[i] % 100)) % 200 != 0){
				cout << arr[i] << endl;
			}
		}
	}
	//Task number 4
	int n = 9;
	int arrays[n];
	
	for (int i = 0; i < n; i++){
		cout << i+1 << ". massive number ";
		cin  >> arrays[i];
	}
	
	for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arrays[j]>arrays[j+1])
            {
                int temp=arrays[j];
                arrays[j]=arrays[j+1];
                arrays[j+1]=temp;
            }
        }
    }
    cout<<"After Bubble sort the array is" << endl;
    for(int i = 0;i<n;i++)
    cout << arrays[i] << " ";
    int change = arrays[0];
	arrays[0] = arrays[n-1];
	arrays[n-1] = change;
	cout << endl << "Array after change first - last and last -first: " <<  endl;
	for(int i = 0;i<n;i++)
    cout << arrays[i] << " ";
	
	
	return 0;
}
