#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1	// SUCCESS ���� ������ �������� �ʰ� #define �� ���� 
#define FAIL 2		// ���� ������ �߰��Ͽ� �ڵ带 ��� ���� �ʰ� �ܼ�ȭ��Ű�� ����
#define LIMIT 3		// Java �� final ���� ���

int check(int id, int password);

int main(){
	
	int id, password, result;
	
	while(1){
		printf("Id : ");	scanf(" %d", &id);
		printf("Password : ");	scanf(" %d", &password);
		result = check(id, password);
		if( result == SUCCESS ) break;
	}
	printf("�α��� ����\n");
	
	return 0;
}

int check(int id, int password){
	
	static int super_id = 1234;			//static�� �����ν� while���� check �Լ��� ���� �� ���� 
	static int super_password = 5678;	//���̵�� ��й�ȣ�� �������� �ʰ� ���α׷���
	static int try_count = 0;			//��ĥ ������ ���� ������Ű�� ����
	try_count++;
	
	if( id == super_id && password == super_password){
		return SUCCESS;
	}
	else{
		if( try_count == LIMIT){
			printf("Ƚ�� �ʰ�\n");
			exit(1);
		}
		return FAIL;
	}
	
} 