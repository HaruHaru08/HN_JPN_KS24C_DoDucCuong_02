#include<stdio.h>

int main(){
	int arr[100];
	int currentLength,choice;
	int check=0;
	do{
		printf("\t\t---Menu---\n\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cua cac phan tu trong mang\n");
		printf("3.Dem so luong cac so hoan hao\n");
		printf("4.Tim gia tri lon thu 2 cua mang\n");
		printf("5.Them phan tu cho mang\n");
		printf("6.Xoa phan tu trong mang\n");
		printf("7.Sap xep mang theo thu tu tang dan\n");
		printf("8.Tim kiem phan tu trong mang\n");
		printf("9.Sap xep mang voi so chan dung truoc,so le dung sau\n");
		printf("10.Dao nguoc thu tu cua cac phan tu trong mang\n");
		printf("11.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cho mang: ");
				scanf("%d",&currentLength);
				if(currentLength<0 || currentLength>100){
					printf("So nhap khong hop le.Hay nhap lai nhe!");
					return 1;
				}
				printf("Nhap cac gia tri cho mang: \n");
				for(int i=0;i<currentLength;i++){
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				if(currentLength>0 || currentLength<100){
					printf("Cac phan tu cua mang la: \n");
						for(int i=0;i<currentLength;i++){
						printf("arr[%d]=%d\n",i,arr[i]);
					}
				}else{
					printf("Hay nhap so phan tu va gia tri cua mang di");
				}
				printf("\n");
				break;
			case 3:
				
				break;
			case 4:
				int max_2,max;
				if(currentLength>0 || currentLength<100){
				for(int i=0;i<currentLength;i++){
						 max=arr[i];
						if(arr[i+1]>max){
							max=arr[i+1];
							}			
						}
				for(int i=0;i<currentLength;i++){
					if(arr[i]<max_2&&max_2>max){
						max_2=arr[i];
					}
				}
						printf("Gia tri lon thu 2 cua mang la: ",max_2);
				}else{
					printf("Hay nhap so phan tu va gia tri cua mang di");
				}
				printf("\n");
				break;
			case 5:
				if(currentLength>0 || currentLength<100){
					int addlndex,newvalue;
					printf("Nhap vi tri muon them phan tu: ");
					scanf("%d",&addlndex);
					if(addlndex<0 || addlndex>currentLength-1){
						printf("Vi tri khong hop le");
						continue;
					}
					printf("Nhap phan tu muon them vao mang: ");
					scanf("%d",&newvalue);
					if(addlndex==currentLength){
						arr[addlndex]=newvalue;
						currentLength++;
					}else{
						for(int i=currentLength-1;i>addlndex;i--){
							arr[i]=arr[i-1];
							
						}
						arr[addlndex]=newvalue;
						currentLength++;
						printf("Mang sau khi them la: ");
						for(int i=0;i<currentLength;i++){
							printf("%d",arr[i]);
						}
					}
				}else{
					printf("Hay nhap so phan tu va gia tri cua mang di");	
				}
				printf("\n");
				break;
			case 6:
				if(currentLength>0 || currentLength<100){
					int addlndex,newvalue;
					printf("Nhap vi tri muon xoa phan tu: ");
					scanf("%d",&addlndex);
					if(addlndex<0 || addlndex>currentLength-1){
						printf("Vi tri khong hop le");
						continue;
					}
						for(int i=addlndex;i<currentLength;i++){
							arr[i]=arr[i+1];
							currentLength--;
						}
						printf("Mang sau khi xoa la: ");
						for(int i=0;i<currentLength;i++){
							printf("%d\t",arr[i]);
						}
				}else{
					printf("Hay nhap so phan tu va gia tri cua mang di");	
				}
				printf("\n");
				break;
			case 7:
				if(currentLength>0 || currentLength<100){
				for(int i=0;i<currentLength;i++){
					for(int j=i-1;j<currentLength;j++){
						if(arr[j]>arr[j+1]){
							int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
						}
					}
				}
				printf("Mang sau khi sap xep la: \n");
				for(int i=0;i<currentLength;i++){
					printf("%d\t",arr[i]);
				}
				}else{
					printf("Hay nhap so phan tu va gia tri cua mang di");	
				}
				printf("\n");
				break;
			case 8:
				int number;
				printf("Nhap so can tim: ");
				scanf("%d",number);
				for(int i=0;i<currentLength;i++){
					if(arr[i]=number){
						check=arr[i];
					}
				}
				if(check!=0){
					printf("So can tim nam o vi tri thu %d trong mang",check);
				}else{
					printf("So can tim khong co trong mang");
				}
				break;
			case 11:
				printf("Hen gap lai ban");
				break;
			default:
				printf("So khong hop le.Hay nhap lai di");
				break;
		}
	}while(choice!=11);
	return 0;
}