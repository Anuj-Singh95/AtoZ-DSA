#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
	int a[n], b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	int min=5000;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
        int count=0;
        int flag=0;
			if(a[i]>min){
			while(a[i]!=min){
				a[i]=a[i]-b[i];
				count++;
				if(a[i]<0){
				cout<<-1;
				return 0;
				}
				if(a[i]<min){
				min=a[i];
				i=-1;
				flag=1;
				break;
				}
			}
            if(flag){
                ans=count;
            }else{
                ans+=count;
            }
			
		}
	}
	cout<<ans;
	return 0;
}