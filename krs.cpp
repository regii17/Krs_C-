#include<iostream>
using namespace std;

int main(){
	int nim,opr=0,diskon,total=0;
	string nama,pil[10]={" Belum dipilih "," Belum dipilih "," Belum dipilih "," Belum dipilih ",
	" Belum dipilih "," Belum dipilih "," Belum dipilih "," Belum dipilih "," Belum dipilih "," Belum dipilih ",};
	cout<<"----------------------------------"<<endl;
	cout<<"PROGRAM INPUT SKS MAHASISWA"<<endl;
	cout<<"----------------------------------"<<endl;
	
	cout<<"Masukkan NIM anda : ";
	cin>>nim;
	cout<<"Masukkan nama anda : ";
	cin>>nama;
	cout<<endl;
	
	system("pause");
	system("cls");
	
	if(opr>1||opr<0){
		cout<<"Masukkan pilihan yang valid"<<endl;
		system("pause");
	}
	else{
		for(int a=0; a<9; a++){
			
		cout<<"Nim  : "<<nim<<endl;
		cout<<"Nama : "<<nama<<endl;
		
	
		cout<<"Mata Kuliah Beserta SKS Yang Ditawarkan : "<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"|  No | Mata Kuliah                 | Jumlah SKS |     Status    |"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"|  1  | Akhlak                      |     2      |"<<pil[0]<<"|"<<endl;
		cout<<"|  2  | Algoritma Pemrograman       |     3      |"<<pil[1]<<"|"<<endl;
		cout<<"|  3  | Aljabar Linear Matrix       |     2      |"<<pil[2]<<"|"<<endl;
		cout<<"|  4  | Arsitektur Komputer         |     3      |"<<pil[3]<<"|"<<endl;
		cout<<"|  5  | Bahasa Indonesia            |     2      |"<<pil[4]<<"|"<<endl;
		cout<<"|  6  | Pemrograman Web             |     3      |"<<pil[5]<<"|"<<endl;
		cout<<"|  7  | Pendidikan Kewarganegaraan  |     2      |"<<pil[6]<<"|"<<endl;
		cout<<"|  8  | Prak Algoritman Pemrograman |     1      |"<<pil[7]<<"|"<<endl;
		cout<<"|  9  | Matematika Diskrit          |     3      |"<<pil[8]<<"|"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl<<endl;
		
		cout<<"Apakah anda akan memilih mata kuliah "<<a+1<<" ?(1 pilih | 0 tidak)";
		cin>>opr;
		
			if(opr==1){
				pil[a]="    Dipilih    ";
			}
		system("cls");
		if(pil[1]=="    Dipilih    "||pil[3]=="    Dipilih    "||pil[5]=="    Dipilih    "||pil[7]=="    Dipilih    "){
			total=total+(125000*2);
		}
		else if(pil[2]=="    Dipilih    "||pil[4]=="    Dipilih    "||pil[6]=="    Dipilih    "||pil[9]=="    Dipilih    "){
			total=total+(125000*3);
		}
		else if(pil[8]=="    Dipilih    "){
			total=total+125000;
		}
		}
	}
	diskon=total*15/100;
	
	cout<<"Anda berhasil mengambil krs !!!"<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"Nim  : "<<nim<<endl;
	cout<<"Daftar mata kuliah : "<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"|  No | Mata Kuliah                 | Jumlah SKS |     Status    |"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"|  1  | Akhlak                      |     2      |"<<pil[0]<<"|"<<endl;
		cout<<"|  2  | Algoritma Pemrograman       |     3      |"<<pil[1]<<"|"<<endl;
		cout<<"|  3  | Aljabar Linear Matrix       |     2      |"<<pil[2]<<"|"<<endl;
		cout<<"|  4  | Arsitektur Komputer         |     3      |"<<pil[3]<<"|"<<endl;
		cout<<"|  5  | Bahasa Indonesia            |     2      |"<<pil[4]<<"|"<<endl;
		cout<<"|  6  | Pemrograman Web             |     3      |"<<pil[5]<<"|"<<endl;
		cout<<"|  7  | Pendidikan Kewarganegaraan  |     2      |"<<pil[6]<<"|"<<endl;
		cout<<"|  8  | Prak Algoritman Pemrograman |     1      |"<<pil[7]<<"|"<<endl;
		cout<<"|  9  | Matematika Diskrit          |     3      |"<<pil[8]<<"|"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl<<endl;
	cout<<"Total Pembayaran (diskon 15%): "<<total-diskon<<endl;
	
	

	
}