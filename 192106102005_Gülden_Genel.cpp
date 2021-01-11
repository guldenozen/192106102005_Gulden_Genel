#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <conio.h>
#include<iomanip>
#include<math.h>
using namespace std;

float determinant2(float [][25], float);
void cofactor(float [][25], float);
void transpose(float [][25], float [][25], float);
void determinant();
float determinant_hesapla(float (*T1)[50], int);
void Soru2();
void Soru3();
void Soru4();
void Soru5();
void Soru6();
void Soru7();
void Soru9();
void Soru10();
void Soru12();
void Soru18();
void Soru17();

int main(){
	int secim = 0;
	cout<< "Asagidaki menuden islem numarasina gore secim yapiniz : \n";
	cout<< "1. A matrisinin determinantini hesaplayiniz.\n";
	cout<< "2. ATA matrisinin izini hesaplayiniz.\n";
	cout<< "3. A matrisinin satir normlarini hesaplayiniz.\n";
	cout<< "4. A matrisinin sutun normlarini hesaplayiniz.\n";
	cout<< "5. A matrisinin Oklid normunu (N(A)) hesaplayiniz.\n";
	cout<< "6. N(A)=(iz(ATA))^(1/2) oldugunun saglamasini gerceklestiriniz.\n";
	cout<< "7. A matrisini Öklid normuna göre normlastiriniz.\n";
	
	cout<< "9. A matrisinin Spektral (Todd) sart sayisinin hesabi ve kararsizliginin yorumu\n";	
	cout<< "10. A matrisinin Hadamard sart sayisini hesaplayarak kararsizligini yorumlayiniz.\n";
	cout<< "12. Pivotlama ile A matrisinin tersini hesaplayiniz.\n";	
	cout<< "18. Modernlestirilmis Gauss algoritmasi ile ATA matrisinin tersini hesaplayiniz.\n";
	cout<< "17. Cholesky yöntemi ile x bilinmeyenler vektorunu hesaplayiniz.\n 19. Cholesky yontemi ile ATA matrisinin tersini hesaplayiniz.\n ";
	
	cout<< "Islemi seciniz : ";
	cin >>
	 secim;
	
	if(secim == 1){
		 determinant();
	}
	if(secim == 2){
		Soru2();
	}
	if(secim == 3){
		Soru3();
	}
	if(secim == 4){
		Soru4();
	}
	if(secim == 5){
		Soru5();
	}
	if(secim == 6){
		Soru6();
	}
	if(secim == 7){
		Soru7();
	}
	if(secim == 9){
		Soru9();
	}
	if(secim == 10){
		Soru10();
	}
	if(secim == 12){
		Soru12();
	}
	if(secim == 18){
		Soru18();
	}
	if(secim == 17){
		cout<< "17 ve 19.Sorular bu metotda birlikte cozulmustur!";
		Soru17();
	}
	
	return 0;
}

void determinant(){
    int m;
    std::cout << "m (mxm): ";
    std::cin >> m;
    float matris[50][50];

    float determinant;
    
    for(int i=0; i < m; i++){
        for(int j=0; j < m; j++){
            std::cout << "matris[" << i+1 << "][" << j+1 << "] = ";
            std::cin >> matris[i][j];
        }
    }
    std::cout << " A Matrisin Determinanti= ";

    determinant = determinant_hesapla(matris, m);
    std::cout << determinant << std::endl;
}
float determinant_hesapla(float matris[50][50], int boyut){
    if(boyut == 1){
        return matris[0][0];
    }

    float yeni_matris[50][50];

    float determinant = 0; // 0'da baþlatýldý
    int m, n, sutun;
    float isaret = 1;

    for (int sutun = 0; sutun < boyut; sutun++)
    { 
        m = 0;
        n = 0;
        for(int i = 0; i < boyut; i++){
            for (int j = 0; j < boyut; j++)
            {
                yeni_matris[i][j] = 0;
                if(i!=0 && j!=sutun){

                    yeni_matris[m][n] = matris[i][j];
                    if(n < (boyut-2)){ // satýr sonunda deðilse sütunu arttýr
                        n++;
                    } 
                    else{
                        m++; // 1. sütuna dön ve satýr satýr ilerle
                        n = 0;
                    }
                }
            }  
        }
        determinant = determinant + isaret * (matris[0][sutun] * determinant_hesapla(yeni_matris, boyut-1));
        isaret = isaret * (-1);
    }
    return determinant;
}
void Soru2(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "A11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "A12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "A13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "A14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "A15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "A21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "A22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "A23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "A24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "A25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "A31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "A32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "A33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "A34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "A35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "A41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "A42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "A43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "A44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "A45 matrisin sayisini giriniz: " <<"\n";
	cin >> a45;
	cout << "A51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "A52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "A53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "A54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "A55 matrisin sayisini giriniz: " << "\n";
	cin >> a55;
	{
	double diz;
	 diz=pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2);
	cout << "A matrisinin izinin hesabi= " << diz <<  "\n";
	}
}
void Soru3(){
	
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "A11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "A12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "A13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "A14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "A15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "A21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "A22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "A23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "A24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "A25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "A31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "A32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "A33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "A34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "A35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "A41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "A42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "A43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "A44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "A45 matrisin sayisini giriniz: " << "\n";
	cin >> a45;
	cout << "A51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "A52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "A53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "A54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "A55 matrisin sayisini giriniz " << "\n";
	cin >> a55;
	{
	double norm_a1;
	double norm_a2;
	double norm_a3;
	double norm_a4;
	double norm_a5;
	 norm_a1=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2));
	 norm_a2=sqrt(pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2));
	 norm_a3=sqrt(pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2));
	 norm_a4=sqrt(pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2));
	 norm_a5=sqrt(pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));
	cout << "A matrisin satir normlari= "  <<  "\n";
	cout << "N(A1)= " << norm_a1 <<  "\n";
	cout << "N(A2)= " << norm_a2 <<  "\n";
	cout << "N(A3)= " << norm_a3 <<  "\n";
	cout << "N(A4)= " << norm_a4 <<  "\n";
	cout << "N(A5)= " << norm_a5 <<  "\n";
	}
}
void Soru4(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "A11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "A12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "A13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "A14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "A15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "A21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "A22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "A23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "A24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "A25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "A31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "A32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "A33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "A34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "A35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "A41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "A42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "A43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "A44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "A45 matrisin sayisini giriniz: " << "\n";
	cin >> a45;
	cout << "A51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "A52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "A53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "A54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "A55 matrisin sayisini giriniz: " << "\n";
	cin >> a55;
	{
	double norm_a1;
	double norm_a2;
	double norm_a3;
	double norm_a4;
	double norm_a5;
	 norm_a1=sqrt(pow(a11,2)+pow(a21,2)+pow(a31,2)+pow(a41,2)+pow(a51,2));
	 norm_a2=sqrt(pow(a12,2)+pow(a22,2)+pow(a32,2)+pow(a42,2)+pow(a52,2));
	 norm_a3=sqrt(pow(a13,2)+pow(a23,2)+pow(a33,2)+pow(a43,2)+pow(a53,2));
	 norm_a4=sqrt(pow(a14,2)+pow(a24,2)+pow(a34,2)+pow(a44,2)+pow(a54,2));
	 norm_a5=sqrt(pow(a15,2)+pow(a25,2)+pow(a35,2)+pow(a45,2)+pow(a55,2));
	cout << "A matrisin satir normlari= "  <<  "\n";
	cout << "N(A1)= " << norm_a1 <<  "\n";
	cout << "N(A2)= " << norm_a2 <<  "\n";
	cout << "N(A3)= " << norm_a3 <<  "\n";
	cout << "N(A4)= " << norm_a4 <<  "\n";
	cout << "N(A5)= " << norm_a5 <<  "\n";
	}
}
void Soru5(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "a11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "a12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "a13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "a14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "a15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "a21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "a22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "a23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "a24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "a25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "a31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "a32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "a33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "a34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "a35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "a41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "a42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "a43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "a44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "a45 matrisin sayisini giriniz: " << "\n";
	cin >> a45;
	cout << "a51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "a52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "a53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "a54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "a55 matrisin sayisini giriniz: " << "\n";
	cin >> a55;
	{
	double diz;
	 diz=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));
	cout << "A matrisinin oklid normunun hesabi= " << diz <<  "\n";
	}
}
void Soru6(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "a11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "a12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "a13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "a14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "a15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "a21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "a22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "a23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "a24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "a25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "a31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "a32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "a33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "a34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "a35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "a41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "a42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "a43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "a44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "a45 matrisin sayisini giriniz: " << "\n";
	cin >> a45;
	cout << "a51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "a52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "a53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "a54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "a55 matrisin sayisini giriniz: " << "\n";
	cin >> a55;
	{
	double diz, norm, a;
	 diz=pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2);
	 norm=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));
	a=sqrt(diz);
	cout << "A matrisinin normunun saglamasi= " << a << "=" <<norm << "\n";}
}
void Soru7(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "a11 matrisin sayisini giriniz: " << "\n";
	cin >> a11;
	cout << "a12 matrisin sayisini giriniz: " << "\n";
	cin >> a12;
	cout << "a13 matrisin sayisini giriniz: " << "\n";
	cin >> a13;
	cout << "a14 matrisin sayisini giriniz: " << "\n";
	cin >> a14;
	cout << "a15 matrisin sayisini giriniz: " << "\n";
	cin >> a15;
	cout << "a21 matrisin sayisini giriniz: " << "\n";
	cin >> a21;
	cout << "a22 matrisin sayisini giriniz: " << "\n";
	cin >> a22;
	cout << "a23 matrisin sayisini giriniz: " << "\n";
	cin >> a23;
	cout << "a24 matrisin sayisini giriniz: " << "\n";
	cin >> a24;
	cout << "a25 matrisin sayisini giriniz: " << "\n";
	cin >> a25;
	cout << "a31 matrisin sayisini giriniz: " << "\n";
	cin >> a31;
	cout << "a32 matrisin sayisini giriniz: " << "\n";
	cin >> a32;
	cout << "a33 matrisin sayisini giriniz: " << "\n";
	cin >> a33;
	cout << "a34 matrisin sayisini giriniz: " << "\n";
	cin >> a34;
	cout << "a35 matrisin sayisini giriniz: " << "\n";
	cin >> a35;
	cout << "a41 matrisin sayisini giriniz: " << "\n";
	cin >> a41;
	cout << "a42 matrisin sayisini giriniz: " << "\n";
	cin >> a42;
	cout << "a43 matrisin sayisini giriniz: " << "\n";
	cin >> a43;
	cout << "a44 matrisin sayisini giriniz: " << "\n";
	cin >> a44;
	cout << "a45 matrisin sayisini giriniz: " << "\n";
	cin >> a45;
	cout << "a51 matrisin sayisini giriniz: " << "\n";
	cin >> a51;
	cout << "a52 matrisin sayisini giriniz: " << "\n";
	cin >> a52;
	cout << "a53 matrisin sayisini giriniz: " << "\n";
	cin >> a53;
	cout << "a54 matrisin sayisini giriniz: " << "\n";
	cin >> a54;
	cout << "a55 matrisin sayisini giriniz: " << "\n";
	cin >> a55;
	{
	double diz;
	 diz=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));
	
	cout << "A matrisin oklid normuna gore normlanmisi= " << a11/diz <<   a12/diz  <<   a13/diz  <<   a14/diz  <<  a15/diz   <<  "\n";
	cout << "A matrisin oklid normuna gore normlanmisi= " << a21/diz <<   a22/diz  <<   a23/diz  <<   a24/diz  <<  a25/diz   <<  "\n";
	cout << "A matrisin oklid normuna gore normlanmisi= " << a31/diz <<   a32/diz  <<   a33/diz  <<   a34/diz  <<  a35/diz   <<  "\n";
	cout << "A matrisin oklid normuna gore normlanmisi= " << a41/diz <<   a42/diz  <<   a43/diz  <<   a44/diz  <<  a45/diz   <<  "\n";
	cout << "A matrisin oklid normuna gore normlanmisi= " << a51/diz <<   a52/diz  <<   a53/diz  <<   a54/diz  <<  a55/diz   <<  "\n";
	}
}
void Soru9(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
	double diz;
	cout << "A11 degerini giriniz: ";
	cin >> a11;
	cout << "A12 degerini giriniz: ";
	cin >> a12;
	cout << "A13 degerini giriniz: ";
	cin >> a13;
	cout << "A14 degerini giriniz: ";
	cin >> a14;
	cout << "A15 degerini giriniz: ";
	cin >> a15;
	cout << "A21 degerini giriniz: ";
	cin >> a21;
	cout << "A22 degerini giriniz: ";
	cin >> a22;
	cout << "A23 degerini giriniz: ";
	cin >> a23;
	cout << "A24 degerini giriniz: ";
	cin >> a24;
	cout << "A25 degerini giriniz: ";
	cin >> a25;
	cout << "A31 degerini giriniz: ";
	cin >> a31;
	cout << "A32 degerini giriniz: ";
	cin >> a32;
	cout << "A33 degerini giriniz: ";
	cin >> a33;
	cout << "A34 degerini giriniz: ";
	cin >> a34;
	cout << "A35 degerini giriniz: ";
	cin >> a35;
	cout << "A41 degerini giriniz: ";
	cin >> a41;
	cout << "A42 degerini giriniz: ";
	cin >> a42;
	cout << "A43 degerini giriniz: ";
	cin >> a43;
	cout << "A44 degerini giriniz: ";
	cin >> a44;
	cout << "A45 degerini giriniz: ";
	cin >> a45;
	cout << "A51 degerini giriniz: ";
	cin >> a51;
	cout << "A52 degerini giriniz: ";
	cin >> a52;
	cout << "A53 degerini giriniz: ";
	cin >> a53;
	cout << "A54 degerini giriniz: ";
	cin >> a54;
	cout << "A55 degerini giriniz: ";
	cin >> a55;
	{
	
	double diz;
	double aa11,aa12,aa13,aa14,aa15,aa21,aa22,aa23,aa24,aa25,aa31,aa32,aa33,aa34,aa35,aa41,aa42,aa43,aa44,aa45,aa51,aa52,aa53,aa54,aa55;
	double aaa31, aaa32,aaa33,aaa34,aaa35,aaa41,aaa42,aaa43,aaa44,aaa45,aaa53,aaa54,aaa55,aaa52, aaaa43,aaaa44,aaaa45,aaaa53,aaaa54,aaaa55,aaaaa54,aaaaa55;
	double h12,h13,h14,h15,h23,h24,h25,h34,h35,h45;
	double det;
	h12=a21/-a11;
	aa21=(a11*h12)+a21;
	aa22=(a12*h12)+a22;
	aa23=(a13*h12)+a23;
	aa24=(a14*h12)+a24;
	aa25=(a15*h12)+a25;
	h13=a31/-a11;
	aa31=(a11*h13)+a31;
	aa32=(a12*h13)+a32;
	aa33=(a13*h13)+a33;
	aa34=(a14*h13)+a34;
	aa35=(a15*h13)+a35;
	h14=a41/-a11;
	aa41=(a11*h14)+a41;
	aa42=(a12*h14)+a42;
	aa43=(a13*h14)+a43;
	aa44=(a14*h14)+a44;
	aa45=(a15*h14)+a45;
	h15=a51/-a11;
	aa51=(a11*h15)+a51;
	aa52=(a12*h15)+a52;
	aa53=(a13*h15)+a53;
	aa54=(a14*h15)+a54;
	aa55=(a15*h15)+a55;
	h23=aa32/-aa22;
	aaa32=(h23*aa22)+aa32;
	aaa33=(h23*aa23)+aa33;
	aaa34=(h23*aa24)+aa34;
	aaa35=(h23*aa25)+aa35;
	h24=aa42/-aa22;
	aaa42=(h24*aa22)+aa42;
	aaa43=(h24*aa23)+aa43;
	aaa44=(h24*aa24)+aa44;
	aaa45=(h24*aa25)+aa45;
	h25=aa52/-aa22;
	aaa52=(h25*aa22)+aa52;
	aaa53=(h25*aa23)+aa53;
	aaa54=(h25*aa24)+aa54;
	aaa55=(h25*aa25)+aa55;
	h34=aaa43/-aaa33;
	aaaa43=(h34*aaa33)+aaa43;
	aaaa44=(h34*aaa34)+aaa44;
	aaaa45=(h34*aaa35)+aaa45;
	h35=aaa53/-(aaa33);
	aaaa53=(h35*aaa33)+aaa53;
	aaaa54=(h35*aaa34)+aaa54;
	aaaa55=(h35*aaa35)+aaa55;
	h45=aaaa54/-(aaaa44);
	aaaaa54=(h45*aaaa44)+aaaa54;
	aaaaa55=(h45*aaaa45)+aaaa55;
	
	det=a11*aa22*aaa33*aaaa44*aaaaa55;
	{
	int count=8;
	    double  numbers[count]={a11,aa22,aaa33,aaaa44,aaaaa55};
	    double max=numbers[0];
	    double min=numbers[0];
	    double kont;
	    for(int i = 0; i < count; i++)
	    {
	        if(numbers[i]<min)
	        {
	            min=numbers[i];
	        }
	        if(numbers[i]>max)
	        {
	            max=numbers[i];
	        }
	    }   
	    kont= max/min;
	    if (kont<1.10)
	    
	    cout<<"kont. sayisi kararlidir :  "<<kont<<"\n";
	  else  
	 cout << "kont. sayisi kararsizdir :  "<<kont<<"\n";
	}
}
}
void Soru10(){
	double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
double diz;
cout << "A11 degerini giriniz: ";
cin >> a11;
cout << "A12 degerini giriniz: ";
cin >> a12;
cout << "A13 degerini giriniz: ";
cin >> a13;
cout << "A14 degerini giriniz: ";
cin >> a14;
cout << "A15 degerini giriniz: ";
cin >> a15;
cout << "A21 degerini giriniz: ";
cin >> a21;
cout << "A22 degerini giriniz: ";
cin >> a22;
cout << "A23 degerini giriniz: ";
cin >> a23;
cout << "A24 degerini giriniz: ";
cin >> a24;
cout << "A25 degerini giriniz: ";
cin >> a25;
cout << "A31 degerini giriniz: ";
cin >> a31;
cout << "A32 degerini giriniz: ";
cin >> a32;
cout << "A33 degerini giriniz: ";
cin >> a33;
cout << "A34 degerini giriniz: ";
cin >> a34;
cout << "A35 degerini giriniz: ";
cin >> a35;
cout << "A41 degerini giriniz: ";
cin >> a41;
cout << "A42 degerini giriniz: ";
cin >> a42;
cout << "A43 degerini giriniz: ";
cin >> a43;
cout << "A44 degerini giriniz: ";
cin >> a44;
cout << "A45 degerini giriniz: ";
cin >> a45;
cout << "A51 degerini giriniz: ";
cin >> a51;
cout << "A52 degerini giriniz: ";
cin >> a52;
cout << "A53 degerini giriniz: ";
cin >> a53;
cout << "A54 degerini giriniz: ";
cin >> a54;
cout << "A55 degerini giriniz: ";
cin >> a55;
{

double diz;
double aa11,aa12,aa13,aa14,aa15,aa21,aa22,aa23,aa24,aa25,aa31,aa32,aa33,aa34,aa35,aa41,aa42,aa43,aa44,aa45,aa51,aa52,aa53,aa54,aa55;
double aaa31, aaa32,aaa33,aaa34,aaa35,aaa41,aaa42,aaa43,aaa44,aaa45,aaa53,aaa54,aaa55,aaa52, aaaa43,aaaa44,aaaa45,aaaa53,aaaa54,aaaa55,aaaaa54,aaaaa55;
double h12,h13,h14,h15,h23,h24,h25,h34,h35,h45;
double det;
h12=a21/-a11;
aa21=(a11*h12)+a21;
aa22=(a12*h12)+a22;
aa23=(a13*h12)+a23;
aa24=(a14*h12)+a24;
aa25=(a15*h12)+a25;
h13=a31/-a11;
aa31=(a11*h13)+a31;
aa32=(a12*h13)+a32;
aa33=(a13*h13)+a33;
aa34=(a14*h13)+a34;
aa35=(a15*h13)+a35;
h14=a41/-a11;
aa41=(a11*h14)+a41;
aa42=(a12*h14)+a42;
aa43=(a13*h14)+a43;
aa44=(a14*h14)+a44;
aa45=(a15*h14)+a45;
h15=a51/-a11;
aa51=(a11*h15)+a51;
aa52=(a12*h15)+a52;
aa53=(a13*h15)+a53;
aa54=(a14*h15)+a54;
aa55=(a15*h15)+a55;
h23=aa32/-aa22;
aaa32=(h23*aa22)+aa32;
aaa33=(h23*aa23)+aa33;
aaa34=(h23*aa24)+aa34;
aaa35=(h23*aa25)+aa35;
h24=aa42/-aa22;
aaa42=(h24*aa22)+aa42;
aaa43=(h24*aa23)+aa43;
aaa44=(h24*aa24)+aa44;
aaa45=(h24*aa25)+aa45;
h25=aa52/-aa22;
aaa52=(h25*aa22)+aa52;
aaa53=(h25*aa23)+aa53;
aaa54=(h25*aa24)+aa54;
aaa55=(h25*aa25)+aa55;
h34=aaa43/-aaa33;
aaaa43=(h34*aaa33)+aaa43;
aaaa44=(h34*aaa34)+aaa44;
aaaa45=(h34*aaa35)+aaa45;
h35=aaa53/-(aaa33);
aaaa53=(h35*aaa33)+aaa53;
aaaa54=(h35*aaa34)+aaa54;
aaaa55=(h35*aaa35)+aaa55;
h45=aaaa54/-(aaaa44);
aaaaa54=(h45*aaaa44)+aaaa54;
aaaaa55=(h45*aaaa45)+aaaa55;

det=a11*aa22*aaa33*aaaa44*aaaaa55;


{

double na1;
double na2;
double na3;
double na4;
double na5;
double as, kh;
 
 na1=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2));
 na2=sqrt(pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2));
 na3=sqrt(pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2));
 na4=sqrt(pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2));
 na5=sqrt(pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));

as=na1*na2*na3*na4*na5;
kh=det/as;

if (kh<0.01)
    
    cout<<"kont. sayisi kararsizdir :  "<<kh<<"\n";
  else  
 cout << "kont. sayisi kararlidir :  "<<kh<<"\n";

}

}
}
void Soru12(){
	int uzunluk;
		cout<<" Matris Uzunlugu Giriniz =";
	cin>>uzunluk;
	float ilkmat[uzunluk][uzunluk];
	float ikimat[uzunluk][uzunluk];
	cout<<endl;
	for(int i=0;i<uzunluk;i++){
		for(int l=0;l<uzunluk;l++){
			cout<<" ["<<i<<","<<l<<"] = ";
			cin>>ilkmat[i][l];
		}
	}	
	system("cls");
		for(int pivotno=0;pivotno<uzunluk;pivotno++){
		if(pivotno%2==0){
			for(int x=0;x<uzunluk;x++){
				for(int y=0;y<uzunluk;y++){
					if(x==pivotno&&y==pivotno) continue;
					if(x==pivotno&&y!=pivotno){
						ikimat[x][y]=ilkmat[x][y]/ilkmat[pivotno][pivotno];
					}
					if(x!=pivotno&&y==pivotno){
						ikimat[x][y]=ilkmat[x][y]/(-1*ilkmat[pivotno][pivotno]);
					}
					if(x!=pivotno&&y!=pivotno){
						ikimat[x][y]=ilkmat[x][y]-( (ilkmat[pivotno][y]*ilkmat[x][pivotno])/ilkmat[pivotno][pivotno] );
					}	
				}
			}
			ikimat[pivotno][pivotno]=1/ilkmat[pivotno][pivotno];
			
			cout<<pivotno+1<<"- ADIM"<<endl<<endl;
			for(int i=0;i<uzunluk;i++){
				for(int j=0;j<uzunluk;j++){
					cout<<ikimat[i][j]<<" ";
				}
			cout<<endl;
			}
			cout<<endl;
			
		}
		if(pivotno%2==1){
			for(int x=0;x<uzunluk;x++){
				for(int y=0;y<uzunluk;y++){
					if(x==pivotno&&y==pivotno) continue;
					if(x==pivotno&&y!=pivotno){
						ilkmat[x][y]=ikimat[x][y]/ikimat[pivotno][pivotno];
					}
					if(x!=pivotno&&y==pivotno){
						ilkmat[x][y]=ikimat[x][y]/(-1*ikimat[pivotno][pivotno]);
					}
					if(x!=pivotno&&y!=pivotno){
						ilkmat[x][y]=ikimat[x][y]-( (ikimat[pivotno][y]*ikimat[x][pivotno])/ikimat[pivotno][pivotno] );
					}	
				}
			}
			ilkmat[pivotno][pivotno]=1/ikimat[pivotno][pivotno];
			
			cout<<pivotno+1<<"- ADIM"<<endl<<endl;
			for(int i=0;i<uzunluk;i++){
				for(int j=0;j<uzunluk;j++){
					cout<<ilkmat[i][j]<<" ";
				}
			cout<<endl;
			}
			cout<<endl;
		}	
	}
	
	getch();
}
void Soru18(){
	int n,i,j,k;
    cout.precision(4);        //set precision
    cout.setf(ios::fixed);
    cout<<"\nEnter the no. of equations\n";        
    cin>>n;                //input the no. of equations
    float a[n][n+1],x[n];        //declare an array to store the elements of augmented-matrix    
    cout<<"\nEnter the elements of the augmented-matrix row-wise:\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)    
            cin>>a[i][j];    //input the elements of array
    for (i=0;i<n;i++)                    //Pivotisation
        for (k=i+1;k<n;k++)
            if (
			(a[i][i])<(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"\nThe matrix after Pivotisation is:\n";
    for (i=0;i<n;i++)            //print the new matrix
    {
        for (j=0;j<=n;j++)
            cout<<a[i][j]<<setw(16);
        cout<<"\n";
    }    
    for (i=0;i<n-1;i++)            //loop to perform the gauss elimination
        for (k=i+1;k<n;k++)
            {
                double t=a[k][i]/a[i][i];
                for (j=0;j<=n;j++)
                    a[k][j]=a[k][j]-t*a[i][j];    //make the elements below the pivot elements equal to zero or elimnate the variables
            }
     
    cout<<"\n\nThe matrix after gauss-elimination is as follows:\n";
    for (i=0;i<n;i++)            //print the new matrix
    {
        for (j=0;j<=n;j++)
            cout<<a[i][j]<<setw(16);
        cout<<"\n";
    }
    for (i=n-1;i>=0;i--)                //back-substitution
    {                        //x is an array whose values correspond to the values of x,y,z..
        x[i]=a[i][n];                //make the variable to be calculated equal to the rhs of the last equation
        for (j=i+1;j<n;j++)
            if (j!=i)            //then subtract all the lhs values except the coefficient of the variable whose value                                   is being calculated
                x[i]=x[i]-a[i][j]*x[j];
        x[i]=x[i]/a[i][i];            //now finally divide the rhs by the coefficient of the variable to be calculated
    }
    cout<<"\nThe values of the variables are as follows:\n";
    for (i=0;i<n;i++)
        cout<<x[i]<<endl;            // Print the values of x, y,z,....    
}
void Soru17(){
	 float a[25][25], k, d;
 int i, j;
 printf("Enter the order of the Matrix : ");
 scanf("%f", &k);
 printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
 for (i = 0;i < k; i++)
 {
 for (j = 0;j < k; j++)
 {
 scanf("%f", &a[i][j]);
 }
 }
 d = determinant2(a, k);
 if (d == 0)
 printf("\nInverse of Entered Matrix is not possible\n");
 else
 cofactor(a, k);
}
float determinant2(float a[25][25], float k)
{
 float s = 1, det = 0, b[25][25];
 int i, j, m, n, c;
 if (k == 1)
 {
 return (a[0][0]);
 }
 else
 {
 det = 0;
 for (c = 0; c < k; c++)
 {
 m = 0;
 n = 0;
 for (i = 0;i < k; i++)
 {
 for (j = 0 ;j < k; j++)
 {
 b[i][j] = 0;
 if (i != 0 && j != c)
 {
 b[m][n] = a[i][j];
 if (n < (k - 2))
 n++;
 else
 {
 n = 0;
 m++;
 }
 }
 }
 }
 det = det + s * (a[0][c] * determinant2(b, k - 1));
 s = -1 * s;
 }
 }

 return (det);
}

void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
 for (p = 0;p < f; p++)
 {
 m = 0;
 n = 0;
 for (i = 0;i < f; i++)
 {
 for (j = 0;j < f; j++)
 {
 if (i != q && j != p)
 {
 b[m][n] = num[i][j];
 if (n < (f - 2))
 n++;
 else
 {
 n = 0;
 m++;
 }
 }
 }
 }
 fac[q][p] = pow(-1, q + p) * determinant2(b, f - 1);
 }
 }
 transpose(num, fac, f);
}
/*Finding transpose of matrix*/ 
void transpose(float num[25][25], float fac[25][25], float r)
{
 int i, j;
 float b[25][25], inverse[25][25], d;

 for (i = 0;i < r; i++)
 {
 for (j = 0;j < r; j++)
 {
 b[i][j] = fac[j][i];
 }
 }
 d = determinant2(num, r);
 for (i = 0;i < r; i++)
 {
 for (j = 0;j < r; j++)
 {
 inverse[i][j] = b[i][j] / d;
 }
 }
 printf("\n\n\nThe inverse of matrix is : \n");

 for (i = 0;i < r; i++)
 {
 for (j = 0;j < r; j++)
 {
 printf("\t%f", inverse[i][j]);
 }
 printf("\n");
 }
}












