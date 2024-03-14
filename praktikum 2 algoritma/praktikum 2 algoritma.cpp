#include <iostream>
using namespace std;

void insertionSort() {
    int i, j, n, temp;
    int arr[20];
   
    for (i = 1; i <= n - 1; i++) {//step 1
        temp = arr[i]; // step 2

        j = i - 1;//step 3
        
        while (j >= 0 && arr[j] > temp)// step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
    
        arr[j + 1] = temp;//step 5
    }
}



void display() {
	cout << endl;
	cout << "===================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
	}
	cout << "jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
	cout << endl;
}


int main()
{
	input(); //memanggil prosedur untuk menginput data
	bublesortArray();//memanggil prosedur bubblesort untuk proses mengurutkan data
	display();//memanggil prosedur untuk menampilkan data yang telah urut
	system("pause");

	return 0;
}

int main()
{
    std::cout << "Hello World!\n";
}

