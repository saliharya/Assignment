using namespace std;

class Proses{
	public :
		void getData(){
			ambil_data.open("struk.txt");
			while(!ambil_data.eof()){
    			ambil_data >> data_file[index];
        		index += 1;
			}
    		ambil_data.close();
    	}
    	void toFile(){
    		int total = (data_file[2]*hrg1) + (data_file[3]*hrg2) + (data_file[4]*hrg3) + (data_file[5]*hrg4) + (data_file[6]*hrg5);
    		int batasjarak = 3;
    		int ongkir = 15000;
    		int total2 = total + ongkir;
    		
			if (data_file[1] > batasjarak)
				ongkir += 10000;
				
			tulis_data.open("struk.txt");
			tulis_data << data_file[0] << endl;
			tulis_data << data_file[1] << endl;
			tulis_data << data_file[2] << endl;
			tulis_data << data_file[3] << endl;
			tulis_data << data_file[4] << endl;
			tulis_data << data_file[5] << endl;
			tulis_data << ongkir << endl;
			tulis_data << total << endl;
			tulis_data << total2;
			tulis_data.close();
		}
	private :
		ofstream tulis_data;
		ifstream ambil_data;
		int hrg1 = 21000;
		int hrg2 = 17000;
		int hrg3 = 19000;
		int hrg4 = 20000;
		int hrg5 = 25000;
		int data_file[10];
    	int index = 0;
};
