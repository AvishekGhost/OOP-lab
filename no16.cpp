#include <iostream>

using namespace std;

void print_matrix(int arr[3][3]);
void print_vector(int v[3]);

int main(){

	int arr[3][3],v[3];
	cout<<"enter the matrix:\n";
	for(int i = 0;i<3;i++){
		for(int j=0;j<3;j++)
			cin >> arr[i][j];
	}
	cout<<"the matrix is--";
	print_matrix(arr);
	
	cout<<"enter 3 vectors:\n";
	for(int j=0;j<3;j++){
		cin >> v[j];
	}

//	print_matrix(arr);
	print_vector(v);

	return 0;	
}

void print_matrix(int arr[3][3]){
	for(int i = 0;i<3;i++){
                for(int j=0;j<3;j++){
                        cout << arr[i][j];
                        cout << " ";
                }
                cout << endl;
        }

}
void print_vector(int v[]){
	for(int i=0;i<3;i++){
		if(i==0) cout<<v[i]<<"i"<< endl;
		if(i==1) cout<<v[i]<<"j"<< endl;
		if(i==2) cout<<v[i]<<"k"<< endl;
	}
}

