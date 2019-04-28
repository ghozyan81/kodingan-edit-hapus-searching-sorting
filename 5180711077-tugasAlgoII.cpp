#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 10
using namespace::std;
int  c[10],i,j,d,jumlah,ganti,hps;
int array[5];
int length=5;
int tmp, flag;
int jml,indeks=-1,hasil[10];
bool status=false;
string a,b,nama[10],cari;

void input(){

cout<<"nama : ";cin>>a;
cout<<"nim  : ";cin>>b;
};

void hapus(){
    cout << "Masukkan jumlah data : ";
	cin >> jumlah;
		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : ";
			cin >> c[i];
		}
		cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\nB[" << j << "]= " << c[j];
		}

 	cout << "\n\nMasukkan nilai data yang akan dihapus = ";
	cin >> hps;
	for (int j = 0; j < jumlah; j++)
	{
		if (hps == c[j])
		{
			for (int k = j ; k < jumlah; k++)
			{
				c[k]= c[k + 1];
			}
			jumlah -= 1;
			break;
		}
	}
	cout << "\n\nData Baru :";
	for (int p = 0; p<jumlah; p++)
	{
		cout << "\nB[" << p << "]= " << c[p];
	}

   };

void edit(){
     cout << "Masukkan jumlah data : ";
	cin >> jumlah;
		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : ";
			cin >> c[i];
		}
		cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\nB[" << j << "]= " << c[j];
		}

    	cout << "\n\nMasukkan nilai data yang akan diubah = "; cin >> ganti;
	for (int g = 0; g<jumlah; g++)
	{
		if (c[g] == ganti)
		{
			cout << "Masukka nilai baru = "; cin >> c[g];
		}
	}
	cout << "\n\nData setelah diubah";
	for (int h = 0; h<jumlah; h++)
	{
		cout << "\nB[" << h << "]= " << c[h];
	}
};
void sorting(){
    for(i=0;i<length;i++)
    {
        cout<<"masukan nomor :";cin>>array[i];
    }
    d=length;
    flag=1;
    while(flag||(d>1))
    {
        flag=0;
        d=(d+1)/2;
        for(i=0;i<(length-d);i++)
        {
            if(array[i+d]>array[i])
            {
                tmp=array[i+d];
                array[i+d]=array[i];
                array[i]=tmp;
                flag=1;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
};

void searching(){
string nama[10],cari;
int jml,indeks=-1,hasil[10];
bool status=false;
cout<<"masukan jumlah orang : ";cin>>jml;
for(int i=0;i<jml;i++){
    cout<<"nama indeks ke "<<i<<" : ";cin>>nama[i];
}
cout<<"masukan nama yang di cari : ";cin>>cari;
for(int i=0;i<jml;i++){
        if(cari==nama[i]){
            status=true;
            indeks++;
            hasil[indeks]=i;
        }
}
if(status){
        cout<<"nama ditemukan di indeks ke ";
        for(int i=0;i<=indeks;i++){
            cout<<hasil[i]<<" ";
        }
}
else
    cout<<"nama tidak ditemukan";

};



main(){
int pil;
do
{
system("CLS");
cout<<"====Daftar Menu====\n1. Input\n2. sorting\n3. searching\n4. edit\n5. hapus\n6. keluar\nMasukkan pilihan :";
cin>>pil;
switch(pil)
 {case 1:input();
        break;
    case 2:sorting();
        break;
    case 3:searching();
        break;
    case 4:edit();
        break;
    case 5:hapus();
        break;
    case 6:cout<<"terima kasih";
    }
system("pause");     }
while(pil!=6);}

