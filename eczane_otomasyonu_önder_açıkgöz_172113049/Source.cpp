#include<iostream> 
#include<fstream> 
#include<string>


using namespace std;

 struct eczane{                         
                          string ilacadi;
                           string ilacturu;
                           string firma;
                           int serino;
                           int adet;
                           string sonkullanimtarihi;
                           int tablet;
                           int mg;
                           int fiyat;
                           }ilac;
 struct recete{
	char isim[100];            
   char soyisim[100];
    string kangrubu;
    char ilac[100];
    string kimlikno;
    int adet,ay,yil,gun;
    }rct;

 int main(){
	 system("color 17");
	 int secim;
	 char cevap='e';
	 char devam;
	 do{
		
		 system("cls");
	    cout<<"| \n \t \t \t * * * * * * MENU * * * * * *\n";
		
        cout<<"\t \t 1.ILAC KAYDI:        \n";
        cout<<"\t \t 2.ILAC SORGU:        \n";
        cout<<"\t \t 3.ILAC LISTESI:      \n";
        cout<<"\t \t 4.ILAC KAYIT SILME:  \n";
        cout<<"\t \t 5.DEPO(STOK) SAYIM:  \n";
        cout<<"\t \t 6.RECETE KAYIT:      \n";
        cout<<"\t \t 7.RECETE KAYIT SORGU:\n";
		cout<<"\t \t 8.RECETE SILME:      \n";
        cout<<"\t \t 0.OTOMASYONDAN CIKIS:\n";
		
		cout<<"\n\t \t Lutfen Seciminizi Giriniz.........::";cin>>secim;

		if (secim==1)
		{
			system("cls");
			cout<<"\n-------------------------------------------------ILAC KAYIT----------------------------------------------------"<<endl;
			ofstream DosyaYaz;
			DosyaYaz.open("eczane.txt", ios::app);
			
			do
			{

			cout<<"Ilac Adi giriniz::";cin>>ilac.ilacadi;
			cout<<endl;
			cout<<"Firma Adi giriniz::";cin>>ilac.firma;
			cout<<endl;
			cout<<"Ilac Turu giriniz::";cin>>ilac.ilacturu;
			cout<<endl;
			cout<<"Seri Numarasi giriniz::";cin>>ilac.serino;
			cout<<endl;
			cout<<"Kac Tane Oldugunu giriniz::";cin>>ilac.adet;
			cout<<endl;
			cout<<"Son Kullanma Tarihini giriniz::";cin>>ilac.sonkullanimtarihi;
			cout<<endl;
			cout<<"Tablet sayisi giriniz::";cin>>ilac.tablet;
			cout<<endl;
			cout<<"Kac Miligram giriniz::";cin>>ilac.mg;
			cout<<endl;
			cout<<"Ilacin Fiyatini giriniz::";cin>>ilac.fiyat;
			cout<<endl;
			DosyaYaz << "\n" << ilac.ilacadi << "\t" << ilac.firma << "\t " << ilac.ilacturu << " \t" << ilac.serino << " \t" << ilac.adet << " \t" << ilac.sonkullanimtarihi<<" \t"<<ilac.tablet<<"\t "<<ilac.mg<<" \t"<<ilac.fiyat; 
			cout<<"--Kayit Basari Ile Gerceklestirilmistir--"<<endl;
			cout << "Kayit Yapma Devam Edecek Misiniz.....?(e/h) " << endl; cin >> cevap;
			system("cls");
			} while (cevap == 'e'); 
			system("cls");

			if (cevap == 'h')

				
			DosyaYaz.close();
}

	if (secim==2)
		{
		    system("cls");
			cout<<"\n-------------------------------------------------ILAC SORGULAMA----------------------------------------------------"<<endl;
			string sorgu_ilacadi;
			cout<<"Aranicak ilacin adini giriniz::";cin>>sorgu_ilacadi ;
			int gecici1=0;
			ifstream DosyaOku("eczane.txt");
			while (!DosyaOku.eof())
			{
				DosyaOku>>ilac.ilacadi >> ilac.firma  >>ilac.ilacturu  >> ilac.serino >>ilac.adet>> ilac.sonkullanimtarihi>>ilac.tablet>>ilac.mg>>ilac.fiyat; 
				if (sorgu_ilacadi==ilac.ilacadi)
				{
			cout<<"\t \t-*-*-*-*-*-\t"<<ilac.ilacadi<<"\t Ilacinin Ilac Bilgileri\t-*-*-*-*-*-"<<endl;
			cout<<"Ilac Adi ::"<<sorgu_ilacadi<<endl;
			cout<<"Firma Adi ::"<<ilac.firma<<endl;
			cout<<"Ilac Turu ::"<<ilac.ilacturu<<endl;
			cout<<"Seri Numarasi ::"<<ilac.serino<<endl;
			cout<<"Adet Sayisi ::"<<ilac.adet<<endl;
			cout<<"Son Kullanma Tarihi ::"<<ilac.sonkullanimtarihi<<endl;
			cout<<"Tablet sayisi ::"<<ilac.tablet<<endl;
			cout<<" Miligram ::"<<ilac.mg<<endl;
			cout<<"Ilacin Fiyati ::"<<ilac.fiyat<<endl;
			
			DosyaOku.close();
			gecici1=1;
			break;
				}
}
			if (gecici1==0){
			cout<<"BULUNAMADI...."<<endl;
			}
}
	
 if (secim==3)
{
	system("cls");
	cout<<"\n-------------------------------------------------ILAC LISTESI----------------------------------------------------"<<endl<<endl;
	ifstream DosyaOku("eczane.txt");
	while (!DosyaOku.eof()){
		DosyaOku>>ilac.ilacadi >> ilac.firma  >>ilac.ilacturu  >> ilac.serino >>ilac.adet>> ilac.sonkullanimtarihi>>ilac.tablet>>ilac.mg>>ilac.fiyat; 
		  cout<<"\t \t-*-*-*-*-*-\t"<<ilac.ilacadi<<"\t Ilacinin Ilac Bilgileri\t-*-*-*-*-*-"<<endl;
		  cout<<"Ilac Adi ::"<<ilac.ilacadi<<endl;
			cout<<"Firma Adi ::"<<ilac.firma<<endl;
			cout<<"Ilac Turu ::"<<ilac.ilacturu<<endl;
			cout<<"Seri Numarasi ::"<<ilac.serino<<endl;
			cout<<"Adet Sayisi ::"<<ilac.adet<<endl;
			cout<<"Son Kullanma Tarihi ::"<<ilac.sonkullanimtarihi<<endl;
			cout<<"Tablet sayisi ::"<<ilac.tablet<<endl;
			cout<<" Miligram ::"<<ilac.mg<<endl;
			cout<<"Ilacin Fiyati ::"<<ilac.fiyat<<endl;
			cout<<endl;
			
	}
	
	DosyaOku.close();
}

 if (secim==4)
 {
	 system("cls");
	 cout<<"\n-------------------------------------------------ILAC KAYIT SILME----------------------------------------------------"<<endl;
	 string sil_ilackayit;
	 cout<<"Silinecek ilacin adini giriniz::";cin>>sil_ilackayit;
	 cout<<endl;
	 ifstream DosyaOku("eczane.txt");
	 ofstream DosyaYaz("gecici.tmp");
	 while (!DosyaOku.eof()){
		DosyaOku>>ilac.ilacadi >> ilac.firma  >>ilac.ilacturu  >> ilac.serino >>ilac.adet>> ilac.sonkullanimtarihi>>ilac.tablet>>ilac.mg>>ilac.fiyat; 
		if (sil_ilackayit==ilac.ilacadi)
		{
			cout<<"\t \t-*-*-*-*-*-\t"<<ilac.ilacadi<<"\t Ilacinin Ilac Bilgileri\t-*-*-*-*-*-"<<endl;
			cout<<"Ilac Adi ::"<<sil_ilackayit<<endl;
			cout<<"Firma Adi ::"<<ilac.firma<<endl;
			cout<<"Ilac Turu ::"<<ilac.ilacturu<<endl;
			cout<<"Seri Numarasi ::"<<ilac.serino<<endl;
			cout<<"Adet Sayisi ::"<<ilac.adet<<endl;
			cout<<"Son Kullanma Tarihi ::"<<ilac.sonkullanimtarihi<<endl;
			cout<<"Tablet sayisi ::"<<ilac.tablet<<endl;
			cout<<" Miligram ::"<<ilac.mg<<endl;
			cout<<"Ilacin Fiyati ::"<<ilac.fiyat<<endl;
			cout << "Kaydi Silme Gerceklesti..." << endl;
	   }
		else
			DosyaYaz << "\n" << ilac.ilacadi << "\t" << ilac.firma << "\t " << ilac.ilacturu << " \t" << ilac.serino << " \t" << ilac.adet << " \t" << ilac.sonkullanimtarihi<<" \t"<<ilac.tablet<<"\t "<<ilac.mg<<" \t"<<ilac.fiyat; 
	 }
	 DosyaYaz.close();
	 DosyaOku.close();
	 remove("eczane.txt");
	 rename("gecici.tmp", "eczane.txt");
}

    if (secim==5)
	{
		system("cls");
		cout<<"\n-------------------------------------------------ILAC STOK----------------------------------------------------"<<endl;
		string ilacad;
		cout<<"depoda sayilacak ilac::";cin>>ilacad;cout<<endl;
		ifstream DosyaOku("eczane.txt");
		while (!DosyaOku.eof()){
		DosyaOku>>ilac.ilacadi >> ilac.firma  >>ilac.ilacturu  >> ilac.serino >>ilac.adet>> ilac.sonkullanimtarihi>>ilac.tablet>>ilac.mg>>ilac.fiyat; 
		if(ilacad==ilac.ilacadi){
			if(ilac.adet>=40)
			{
				cout<<"Stok Durumu Iyi ";
				cout<<"->>>>>>>>"<<ilac.adet<<" "<<"tane kaldi"<<endl;
				break;
			}
			else	if (ilac.adet>=25)
			{
				cout<<"Stok Girisi Yapilabilir ";
				cout<<"->>>>>>>>"<<ilac.adet<<" "<<"tane kaldi"<<endl;
				break;
			}
			else		if (ilac.adet>=10)
			{
				cout<<"Stok Durumu Kritik";
				cout<<"->>>>>>>>"<<ilac.adet<<" "<<"tane kaldi"<<endl;
				break;
			}
			else if (ilac.adet==0)
			{
				cout<<"Stok Tukenmis Durumda ";
				cout<<"->>>>>>>>"<<ilac.adet<<" "<<"tane kaldi"<<endl;
			}
					DosyaOku.close();
		}
		}
	}

	if (secim==6)
	{
		system("cls");
		cout<<"\n-------------------------------------------------RECETE KAYIT----------------------------------------------------"<<endl;
		
		ofstream DosyaYaz;
		DosyaYaz.open("recete.txt", ios::app);

		do{

		cout<<"\t\tRECETE KAYDI"<<endl;
		cout<<"Hastanin;";cout<<endl;cout<<"Adi::";cin>>rct.isim;cout<<endl;cout<<"Soyadi::";cin>>rct.soyisim;cout<<endl;
		cout<<"Kan Gurubu::";cin>>rct.kangrubu;cout<<endl;
		cout<<"Kimlik Numarasi::";cin>>rct.kimlikno;cout<<endl;
		cout<<"Dogum Tarihin;"<<endl;cout<<"Gunu::";cin>>rct.gun;cout<<endl;cout<<"Ayi::";cin>>rct.ay;cout<<endl;cout<<"Yili::";cin>>rct.yil;cout<<endl;
		cout<<"Aldigi Ilacin ;"<<endl;cout<<"Adi::";cin>>rct.ilac;cout<<endl;cout<<"Adedi::";cin>>rct.adet;cout<<endl;
		DosyaYaz << "\n" << rct.isim << "\t" << rct.soyisim << "\t " << rct.kangrubu << " \t" << rct.kimlikno << " \t" << rct.gun << " \t" << rct.ay<<" \t"<<rct.yil<<"\t "<<rct.ilac<<" \t"<<rct.adet; 
		cout<<"--Kayit Basari Ile Gerceklestirilmistir--"<<endl;
		cout << "Kayit Yapma Devam Edecek Misiniz.....?(e/h) " << endl; cin >> cevap;
		system("cls");
		} while (cevap == 'e'); 
		system("cls");

		if (cevap == 'h')

		DosyaYaz.close();
	}

	if (secim==7)
	{
		    system("cls");
			cout<<"\n-------------------------------------------------RECETE SORGU----------------------------------------------------"<<endl;
			string sorgu_tc;
			cout<<"Aranan recete icin TC giriniz::";cin>>sorgu_tc ;
			int gecici1=0;
			ifstream DosyaOku("recete.txt");
			while (!DosyaOku.eof())
			{
				DosyaOku>>rct.isim >> rct.soyisim  >>rct.kangrubu  >> rct.kimlikno >>rct.gun>> rct.ay>>rct.yil>>rct.ilac>>rct.adet; 
				if (sorgu_tc==rct.kimlikno)
				{
					cout<<"\t \t-*-*-*-*-*-\t"<<rct.isim<<" "<<rct.soyisim<<"\t Kisisinin Recete Bilgileri\t-*-*-*-*-*-"<<endl;
					cout<<" Adi ::"<<rct.isim<<endl;
					cout<<"SoyAdi ::"<<rct.soyisim<<endl;
					cout<<"Kan Grubu ::"<<rct.kangrubu<<endl;
					cout<<"TC'si ::"<<sorgu_tc<<endl;
					cout<<"Dogum Tarihi::"<<rct.gun<<" "<<rct.ay<<" "<<rct.yil<<endl;
					cout<<"Ilacin;"<<endl;
					cout<<"Adi::"<<rct.ilac<<" "<<"Adedi::"<<rct.adet<<endl;
					
		
			DosyaOku.close();
			gecici1=1;
			break;

            }
			}
			if (gecici1==0){
			cout<<"BULUNAMADI...."<<endl;
			}
	}

	if (secim==8)
 {
	 system("cls");
	 cout<<"\n-------------------------------------------------RECETE KAYIT SILME----------------------------------------------------"<<endl;
	 string sil_recetekayit;
	 cout<<"Recetesi silinecek kisinin TC'sini giriniz::";cin>>sil_recetekayit;
	 cout<<endl;
	 ifstream DosyaOku("recete.txt");
	 ofstream DosyaYaz("Gecicirecete.txt");
	 
	 while (!DosyaOku.eof()){
		DosyaOku>>rct.isim >> rct.soyisim  >>rct.kangrubu  >> rct.kimlikno >>rct.gun>> rct.ay>>rct.yil>>rct.ilac>>rct.adet; 
		if (sil_recetekayit==rct.kimlikno)
		{
			cout<<"\t \t-*-*-*-*-*-\t"<<rct.isim<<" "<<rct.soyisim<<"\t Kisisinin Recete Bilgileri\t-*-*-*-*-*-"<<endl;
					cout<<" Adi ::"<<rct.isim<<endl;
					cout<<"SoyAdi ::"<<rct.soyisim<<endl;
					cout<<"Kan Grubu ::"<<rct.kangrubu<<endl;
					cout<<"TC'si ::"<<sil_recetekayit<<endl;
					cout<<"Dogum Tarihi::"<<rct.gun<<" "<<rct.ay<<" "<<rct.yil<<endl;
					cout<<"Ilacin;"<<endl;
					cout<<"Adi::"<<rct.ilac<<" "<<"Adedi::"<<rct.adet<<endl;
			cout << "Kaydi Silme Gerceklesti..." << endl;
			
	}
		else
			
				DosyaYaz << "\n" << rct.isim << "\t" << rct.soyisim << "\t " << rct.kangrubu << " \t" << rct.kimlikno << " \t" << rct.gun << " \t" << rct.ay<<" \t"<<rct.yil<<"\t "<<rct.ilac<<" \t"<<rct.adet; 
		
	}
	 DosyaYaz.close();
	 DosyaOku.close();
	 remove("recete.txt");
	 rename("Gecicirecete.txt", "recete.txt");

	}
	
	if (secim==0)
	{
		cout<<"\n-------------------------------------------OTOMASYONDAN CIKIS YAPTINIZ------------------------------------------------"<<endl;
		break;
	}
	cout << "\t\t\t Menuye Geri Donmek Istermisiniz ?-------(e-h)" << endl;
	cin >> devam;
		
	 }while (devam == 'e' || devam == 'E');
	system("pause");
	return 0;
}
	















 

























































































































 


			
			

		