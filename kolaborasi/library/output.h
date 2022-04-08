using namespace std;

class Output{
	public :
		void cetak(){
			cout << "----------------------------------------------------" << endl;
    		cout << "|           STRUK PEMBELIAN R.M. PADANG            |" << endl;
    		cout << "----------------------------------------------------" << endl << endl;
    		cout << " Jarak Ongkir   : "<< data_file[0] << endl;
    		cout << "----------------------------------------------------" << endl;
    		cout << "|DAFTAR PESANAN :             JUMLAH :             |" << endl;
    		cout << "|1. Ayam Geprek                 "<< data_file[1] <<"                  |" << endl;
    		cout << "|2. Ayam Goreng                 "<< data_file[2] <<"                  |" << endl;
    		cout << "|3. Udang Goreng                "<< data_file[3] <<"                  |" << endl;
    		cout << "|4. Cumi Goreng                 "<< data_file[4] <<"                  |" << endl;
    		cout << "|5. Ayam Bakar                  "<< data_file[5] <<"                  |" << endl;
    		cout << "----------------------------------------------------" << endl;
		}
		void cetak2(){
			cout << "----------------------------------------------------" << endl;
    		cout << "|ONGKIR           : Rp. "<< data_file[6] <<"                      |" << endl;
    		cout << "|TOTAL TAGIHAN    : Rp. "<< data_file[7] <<"                     |" << endl;
    		cout << "|TOTAL PEMBAYARAN : Rp. "<< data_file[8] <<"                     |" << endl;
    		cout << "----------------------------------------------------" << endl;
		}

    void getData(){
		ambil_data.open("struk.txt");
		while(!ambil_data.eof())
		{
    		ambil_data >> data_file[index];
        	index += 1;
		}
    	ambil_data.close();
    }
	
	private :
    ifstream ambil_data;
    string data_file[10];
    int index = 0;
};
