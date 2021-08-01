#include <iostream>
using namespace std;
int main()
{
    int bil[6], n, i, j, temp;
    float rata, total=0, nilai, median, jumlah;
    
    for (n=1; n<=5; n++){
        cout << "Bilangan ke [ "<< n <<" ] : ";
        cin >> bil[n];
    }
    cout << "Hasil pengurutan bilangan kecil ke besar : " <<endl;
    for (i=1; i<=5; i++){
        for (j=1; j<=5; j++){
            if (bil[i] < bil[j]){
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
    for (i=1; i<=5; i++){
        cout << bil[i] << ", " <<endl ;
        total = total + bil[i];
        jumlah = i*n;
        
    }
    if (n%2==0){
    	nilai = (bil [(n/2)] + bil [(n/2)]);
    	median = nilai/2;
    	cout << "Nilai median adalah : " << median <<endl;
	}
	else{
		median = bil[(n/2)];
		cout << "Nilai median adalah : " << median <<endl;
	}
    
  	rata = total/n;
  	cout << "Hasil nilai total adalah : " << total << endl;
  	cout << "Hasil rata-rata adalah : " << rata << endl;
  	cout << "Hasil perkalian semua bilangan adalah : " << jumlah << endl;
    
    return 0;
}
