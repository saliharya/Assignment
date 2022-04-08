using namespace std;

class Input {
	public :
		void menu(){
			cout << "----------------------------------------------------" << endl;
    		cout << "|             WELCOME TO R.M. PADANG               |" << endl;
    		cout << "----------------------------------------------------" << endl;
    		cout << "----------------------------------------------------" << endl;
    		cout << "|DAFTAR MENU   :              HARGA :              |" << endl;
    		cout << "|1. Ayam Geprek               21000                |" << endl;
    		cout << "|2. Ayam Goreng               17000                |" << endl;
    		cout << "|3. Udang Goreng              19000                |" << endl;
    		cout << "|4. Cumi Goreng               20000                |" << endl;
    		cout << "|5. Ayam Bakar                25000                |" << endl;
    		cout << "----------------------------------------------------" << endl << endl;
		}
		
		void cetak(){
			cout << " Jarak Rumah                 : "; cin >> jarak;
			cout << " Jumlah Pesanan Ayam Geprek  : "; cin >> bnyk_aymGp;
			cout << " Jumlah Pesanan Ayam Goreng  : "; cin >> bnyk_aymGr;
			cout << " Jumlah Pesanan Udang Goreng : "; cin >> bnyk_udgGr;
			cout << " Jumlah Pesanan Cumi Goreng  : "; cin >> bnyk_cmiGr;
			cout << " Jumlah Pesanan Ayam Bakar   : "; cin >> bnyk_aymBk;
		}
		
		void toFile(){
			tulis_data.open("struk.txt");
			tulis_data << jarak << endl;
			tulis_data << bnyk_aymGp << endl;
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_udgGr << endl;
			tulis_data << bnyk_cmiGr << endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close();
		}
	
	private :
		ofstream tulis_data;
		int jarak, bnyk_aymGp, bnyk_aymGr, bnyk_udgGr, bnyk_cmiGr, bnyk_aymBk;
		char nama[50];
};
