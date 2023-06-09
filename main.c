#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>
#include<conio.h>
#include"interface.h"
#include"warehouse.h" 
#include"client.h"
#include"manager.h"
#include"customer.h"
#include"sellbill.h"
#include"supplier.h" 

//全局变量区
char Exchange_reason[Exchange_Reason_num][50]={"不喜欢","商品与描述不符","产品过期","商品少件","商品破损","发错货物"};
char Return_reason[Return_Reason_num][50]={"不想要了","不喜欢","商品与描述不符","产品过期","质量问题","商品少件","商品破损","发错货物"};
char* code[12][10];
char* BillType[6];
Inventory* Inv_head;                // 库存商品 
Gift* Gift_head;                     // 赠品管理 
ProductSource* Sou_head;            // 货源结构体 
client* L;                         //客户节点 没有哨位节点 
LogNode* log_head;              
int cus_cnt;  
int log_cnt;
//client *cus_head;
struct sell_bill* bill_pre;            //有哨位节点 
struct sell_bill* bill_with_problem;  // 有哨位节点 
int total_brand;    // 产品的品牌总数 
char passwordans[20] = "123456";
double total_cost;
double total_income;
double current_money;
supplierlist L2;
char *stringsm[] = {"firstsupplier", "secondsupplier", "thirdsupplier"};
int rt[3] = {100,200,300};
productlistin L1;//进货单
int max_ = 0x3f3f3f3f;
//end 全局变量 

int main(int argc, char *argv[]) {
	readprofit();
	encode_product();
	Inv_head = InitInventory();
	Gift_head = InitGift();
	Giftsort(Gift_head);
	readClient(&L);
	initproductinlist();
	createproductinlist();
	createsupplylist();
	InitLog(&log_head,&L);
	Sou_head = ReadSource();
	bill_pre = Initiate_Bill(); 
	total_brand = 10; 
	readShoppingCart(&L);	
	JudgeNearexpiry();
	bill_with_problem=Initiate_Bill_with_problem();
//	pau;
	while(1)                //用作返回上一级 
	{
        system("cls"); 
	    char ChooseLogin_s[10];
		int ChooseLogin;
	    int position=0;int row=4;
		while(1){
			system("cls");
			LoginInterface(position);
			int op=getchoice(&position,row,&ChooseLogin);
			if(op<0)break;
		}
        switch(ChooseLogin){
            case(1) : {
                ClientInput();
                break;
            }
            case(2) : {
                ManagerInput();
                break;
            }
            case(3) : { //新用户添加 
                addClient(&L,NULL); 
                writeClientInfo(L);
                break;
            }
            case(4):{ // 退出程序 
            	return 0;
				break;
			}
            default:{
            	RefreshPage();
				break;
			}
            	
        }
	}
	return 0;
}

