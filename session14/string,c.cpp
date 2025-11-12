#include <stdio.h>
#include <string.h>

int main(){
	char name[10];
	printf("Nhap vao ten cua ban : ");
//	gets(name);
	

//	fgets(name,10,stdin); // h,u,n,g
//	name[strcspn(name,"\n")] = '\0';
//	
//	int i;
//	for(i=0;i<strlen(name);i++){
//		printf("%c,",name[i]);
//	}
//	
	
	// strcmp(str1, str2) - "1011" vs "1001" -> return 1
	
//	printf("Ten vua nhap : %s", name);
//	
//	fputs(name,stdout);
//	
//	char nameCopy[100];
//	fprintf(nameCopy,"hello ban : %s",name); // dinh dang lai 1 chuoi
	char ho[] = "nguyen";
	char ten[] = "an";
	strcat(ho, " ");
	strcat(ho, ten);
	
	// strchr, strstr : kiem tra ton tai cua 1 ki tu/ chuoi con trong chuoi cha
//	"rikkei" , 'k' => return ?
//	"rikkei" , "kei" => return ?
	printf("ki tu k co ton tai trong chuoi rikkei ko ? %d\n", strchr("rikkei",'k')!= NULL);
	printf("chuoi kei co ton tai trong chuoi rikkei ko ? %d\n", strstr("rikkei","kie")!= NULL);

	return 0;
}
