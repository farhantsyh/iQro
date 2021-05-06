#include <iostream>
using namespace std;

const int size = 10;

struct items{
	string name;
	int price;
	int stok;
};

// database 
   void db_items(items data[],int size);

// UI
   void farhan();
   void tampilan(items data[],int size);

// void searching

	void searchItem(items data[],int size);
	void searchName(items data[],int size);
	void searchPrice(items data[],int size);
	void searchStok(items data[],int size);
	
// void sorting
	void sortItem(items data[],int size);
	void sortPrice(items data[],int size);
	void sortStok(items data[],int size);
	void mergeSort(items data[],int size);
	

int main()
{
	
	items data[size];
	tampilan(data,size);

	
	cin.get();
	return 0;
}

void farhan()
{
	cout<<"|========= Ujian Akhir Semester =========|"<<endl;
	cout<<"|              Prak Alpro II             |"<<endl;
	cout<<"|----------------------------------------|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| Nama : A FARHAN AGUSTIANSYAH           |"<<endl;
	cout<<"| NIM  : 09031282025102                  |"<<endl;
	cout<<"| Kelas: SIREG 2C                        |"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|========================================|"<<endl;
}

void tampilan(items data[],int siz)
{
	
	farhan();
	int choose;
	
					system("pause");
				     system("cls");
	
	cout << "Welcome to our store!" << endl << endl;
	cout << "What will you do ? " << endl;
	cout << "1. Find Items " << endl;
	cout << "2. Sort Item  " << endl << endl << "Your option (1-2) : ";
	
	cin >> choose;
	
	switch(choose)
	{
		case 1:
			searchItem(data,size);
		break;
		case 2:
			sortItem(data,size);
		break;
	}
}

void db_items(items data[],int size)
{
	data[0].name = "Obeng";
	data[0].price = 13500;
	data[0].stok = 45;
	
	data[1].name = "Gembok";
	data[1].price = 18900;
	data[1].stok = 29;
	
	data[2].name = "Tang";
	data[2].price = 12500;
	data[2].stok = 14;
	
	data[3].name = "Kabel";
	data[3].price = 5500;
	data[3].stok = 31;
	
	data[4].name = "Sabun";
	data[4].price = 2000;
	data[4].stok = 50;
	
	data[5].name = "Odol";
	data[5].price = 3100;
	data[5].stok = 22;
	
	data[6].name = "Pel";
	data[6].price = 9000;
	data[6].stok = 65;
	
	data[7].name = "Sapu";
	data[7].price = 13800;
	data[7].stok = 11;
	
	data[8].name = "Pisau";
	data[8].price = 22000;
	data[8].stok = 5;
	
	data[9].name = "Piring";
	data[9].price = 3300;
	data[9].stok = 42;
	
	data[0].name = "Obeng";
	data[0].price = 13500;
	data[0].stok = 45;
}

void searchItem(items data[],int size)
{
	db_items(data,size);
	int choose;
	
	cout << "What You want to find based on  " << endl;
	cout << "1. Name " << endl;
	cout << "2. Price" << endl; 
	cout << "3. Stoks" << endl << endl << "Your option (1-3) : ";
	
	cin >> choose;
	
	switch(choose)
	{
		case 1:
			searchName(data,size);
		break;
		case 2:
			searchPrice(data,size);
		break;
		case 3:
			searchStok(data,size);
		break;
	}
	
}

void searchName(items data[],int size)
{
							system("pause");
					         system("cls");
	
	db_items(data,size);
	
	int i = 0;
	bool found = false;
	string name;
	
	cout << "Find based on name (start with capitalize) : " ;
	cin  >> name;
	
	while ((i<size) && (!found))
	{
		if(name == data[i].name){
			found=true;
		} else {
			i++;
		}
	}
	
	if(found){
		cout << "\nName           : " << data[i].name <<endl;
		cout << "Price per Item : Rp. " << data[i].price <<endl;
		cout << "Stok           : " << data[i].stok << " items" <<endl;
		cout << "___________________________"<<endl;
			
	}	
	else{
		cout << "___________________________"          <<endl;
		cout << "\nBarang tidak ada di dalam data!!! " <<endl;
		cout << "___________________________"          <<endl;
	}
	
}

void searchPrice(items data[],int size)
{
						   system("pause");
					        system("cls");
	
	db_items(data,size);
	
	int i = 0;
	bool found = false;
	int choose;
	
	cout << "Find based on price" << endl;
	cout << "1. > Rp.5000" << endl;
	cout << "2. < Rp.5000" << endl << endl << "Your option (1-3) : ";
	
	cin  >> choose;
	
//	while ((i<size) && (!found))
//	{
//		if(choose == 1){
//			if(data[i].price > 5000){
//				found = true;
//			}
//	    }
//	    else if(choose == 2){
//	    	if(data[i].price < 5000){
//				found = true;
//			}
//		} else {
//			i++;
//		}
//	}
//	
//	if(found){
//		for(int j = 0; j < size; j++){
//			if(data[j].price > 5000){
//				cout << "\n" << j+1 << "." << "Name           : " << data[j].name << endl;
//				cout << "  Price per Item : Rp. " << data[j].price << endl;
//				cout << "  Stok           : " << data[j].stok << " items" << endl;
//				cout << "___________________________" << endl;
//
//			}
//			else if (data[j].price < 5000){
//				cout << "\n" << j+1 << "." << "Name           : " << data[j].name << endl;
//				cout << "  Price per Item : Rp. " << data[j].price << endl;
//				cout << "  Stok           : " << data[j].stok << " items" << endl;
//				cout << "___________________________" << endl;
//			}	
//		}
//	}
//	else{
//		cout << "___________________________"          <<endl;
//		cout << "\nBarang tidak ada di dalam data!!! " <<endl;
//		cout << "___________________________"          <<endl;
//	}
	
}

void searchStok(items data[],int size)
{
							system("pause");
					         system("cls");
	
	db_items(data,size);
	
	int i = 0;
	bool found = false;
	string name;
	
	cout << "Find based on name (start with capitalize) : " ;
	cin  >> name;
	
	while ((i<size) && (!found))
	{
		if(name == data[i].name){
			found=true;
		} else {
			i++;
		}
	}
	
	if(found){
		cout << "\nName           : " << data[i].name <<endl;
		cout << "Price per Item : Rp. " << data[i].price <<endl;
		cout << "Stok           : " << data[i].stok << " items" <<endl;
		cout << "___________________________"<<endl;
			
	}	
	else{
		cout << "___________________________"          <<endl;
		cout << "\nBarang tidak ada di dalam data!!! " <<endl;
		cout << "___________________________"          <<endl;
	}
	
}

void sortItem(items data[],int size)
{
	
							system("pause");
					         system("cls");
	
	db_items(data,size);
	int choose;
	
	cout << "What You want to sort based on  " << endl;
	cout << "1. Name " << endl; 
	cout << "2. Stoks" << endl << endl << "Your option (1-2) : ";
	
	cin >> choose;
	
	switch(choose)
	{
		case 1:
			sortPrice(data,size);
		break;

	}
}

void sortPrice(items data[],int size)
{
   db_items(data,size);
   
   int choose;
   string temp_name;
   int temp_price;
   int temp_stok;
   
    cout<< "Following is the Ordering of Goods by Price "<<endl;
	cout<<endl;
	cout<< "1. List of Items from the Lowest Price (bubble sort)"<<endl;
	cout<< "2. List of Items from the Highest Price (Merge sort)"<<endl;

	cout<<endl;
	cout<<"Input your option : "; cin >> choose;
	
	
	// List of Items from the Lowest Price (bubble sort)
	if (choose == 1){
							system("pause");
					         system("cls");
					         
		for (int i = 0; i < 10; i++){
			for (int j = i+1 ; j<10; j++){
				if ( data[i].price > data[j].price){
					
						temp_name= data[i].name;
						temp_price= data[i].price;
						temp_stok= data[i].stok;
						
						data[i].name = data[j].name;
						data[i].price = data[j].price;
						data[i].stok = data[j].stok;
						
						data[j].name = temp_name;
						data[j].price = temp_price;
						data[j].stok = temp_stok;	
								
				}
			}
		}
		
		cout <<"List of Items from the Lowest Price (bubble sort) " << endl;
		cout << endl;
		
		for (int i = 0; i < 10; i++){
			cout << "Name           : "  << data[i].name  << endl;
			cout << "Price per item : " << data[i].price << endl;
			cout << "Stok           : "  << data[i].stok  << endl;
			cout << endl;
		}	
	}
			
			
}



