#include"interface.h"
#include"customer.h"
extern Inventory* Inv_head;
extern client* L;
extern ProductSource* Sou_head;
extern Gift* Gift_head;
extern char* code[12][10]; 
extern double total_cost;
extern double total_income;
extern double current_money;
extern int total_brand;
extern double total_cost;
extern double total_income;
extern double current_money;
extern client* L;                         //客户节点 没有哨位节点 
extern LogNode* log_head;  
void LoginInterface(int position){
	system("cls");
    system("color 1F"); // B天蓝色   4：红色字 
    printf("\n\n\n\n\n"); 
    //printf("\t\t\t\t\t --------------------------------------- \n");
//    printf("\t\t\t\t\t           欢迎使用酒水管理系统！          \n");
//    Sleep(1000);
    //printf("\t\t\t\t\t --------------------------------------- \n");
    system("cls");
    printf("\n\n\n\n\n"); 
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t                登录界面                 \n");
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t|                                       |\n");
    if(position==0)printf("\033[1;46m\t\t\t\t\t|         -->(1). 客户登录              |\033[0m\n\033[1;44m");
    else printf("\t\t\t\t\t|            (1). 客户登录              |\n");
    if(position==1)printf("\033[1;46m\t\t\t\t\t|         -->(2).管理员登录             |\033[0m\n\033[1;44m"); 
    else printf("\t\t\t\t\t|            (2).管理员登录             |\n"); 
    if(position==2)printf("\033[1;46m\t\t\t\t\t|         -->(3).新客户注册             |\033[0m\n\033[1;44m");
    else printf("\t\t\t\t\t|            (3).新客户注册             |\n");
    if(position==3)printf("\033[1;46m\t\t\t\t\t|         -->(4). 退出系统              |\033[0m\n\033[1;44m");
    else printf("\t\t\t\t\t|            (4). 退出系统              |\n");
    printf("\t\t\t\t\t|                                       |\n");
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t    请选择你要进行的服务(按下w或s可进行上下选择)");
}

void ClientLogin(){
	system("cls");
	
	printf("\n\n\n\n\n"); 
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t               用户登录界面              \n");
    printf("\t\t\t\t\t    (在账号输入处输入0可以返回上一个界面)\n");
    printf("\t\t\t\t\t --------------------------------------- \n");
	printf("\n"); 

    printf("\t\t\t\t\t 请输入您的账号：");
}

void ManagerLogin(){
	system("cls");
	printf("\n\n\n\n\n"); 
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t              管理员登录界面             \n");
    printf("\t\t\t\t\t         (输入0可以返回上一个界面)       \n");
    printf("\t\t\t\t\t --------------------------------------- \n");
	printf("\n"); 
    printf("\t\t\t\t\t 请输入管理者密钥：");
} 

void PasswordOutput(){
	printf("\t\t\t\t\t 请输入您的密码：");
} 

 

void NewClientInterface(){
	system("cls");
	printf("\n\n\n\n\n"); 
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t              新用户注册界面             \n");
    printf("\t\t\t\t\t         (输入0可以返回上一个界面)       \n");
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t    您的账号是：");
}
 
/*-------------------------------管理者界面---------------------*/ 
void ManInferface(int i){
	system("cls");
		printf("\n\n\n\n\n"); 
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t               店铺管理界面              \n");
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t|                                       |\n");
    	if(i == 1) printf("\033[1;46m\t\t\t\t\t|   -->  (1).     仓库管理              |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (1).     仓库管理              |\n");
    	if(i == 2) printf("\033[1;46m\t\t\t\t\t|   -->  (2).   客户信息管理            |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (2).   客户信息管理            |\n");
    	if(i == 3) printf("\033[1;46m\t\t\t\t\t|   -->  (3).     进货模式              |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (3).     进货模式              |\n");
		if(i == 4) printf("\033[1;46m\t\t\t\t\t|   -->  (4).   销售订单管理            |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (4).   销售订单管理            |\n");  
    	if(i == 5) printf("\033[1;46m\t\t\t\t\t|   -->  (5).   用户售后处理            |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (5).   用户售后处理            |\n"); 
    	if(i == 6) printf("\033[1;46m\t\t\t\t\t|   -->  (6).   成本与利润              |\033[0m\n\033[1;44m");
		else printf("\t\t\t\t\t|        (6).   成本与利润              |\n"); 
    	if(i == 0) printf("\033[1;46m\t\t\t\t\t|   -->  (0).  返回上一个界面           |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|        (0).  返回上一个界面           |\n");
		printf("\t\t\t\t\t|                                       |\n");
		printf("\t\t\t\t\t --------------------------------------- \n");
		printf("\t\t\t\t    请选择你要进行的服务(按下w或s可进行上下选择)");
}

void ManagerChooseMode(){
	while(1){
	
	int i = 1;
	char temp;
	int Mana_mode;
	while(1)
	{
		ManInferface(i);
		temp = getch();
		if(temp == 'w'||temp=='W') i = (i-1+7)%7;
		else if(temp == 's'||temp=='S') i = (i+1)%7;
		else if(temp == '\r'){
			Mana_mode = i;break;
		}
		else continue;
	}
		
	if(Mana_mode == 0) return;

	switch(Mana_mode){ // 信息查询模式 
		case(1):{
			Inventory_Mode();       // 库存管理
			break;
		}
		case(2):{
			Clinet_Mode();       // 客户管理 
			break;
		}
		case(3):{
			restock_mode();                     // 进货流程 
			break;
		}
		case(4):{                         //销售订单管理 
			Bill_Mode();
			break;
		} 
		case(5):{
			aftersercive_check();                // 用户订单处理 
			break;
		}
		case(6):{
			costAndprofit();
			break;
		}
	
	}
}
	
	
}

void restock_mode(){
	while(1)
	{
		int i = 1;
		char temp;
		int choice_mode;
		while(1)
		{
			system("cls");
			printf("\n\n\n\n\n"); 
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t                 进货界面                \n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t|                                        |\n");
	    	if(i==1) printf("\033[1;46m\t\t\t\t\t|    -->   (1).   开始进货               |\033[0m\n\033[1;44m"); 
	    	else printf("\t\t\t\t\t|          (1).   开始进货               |\n");
	    	if(i==2) printf("\033[1;46m\t\t\t\t\t|    -->   (2). 订单信息管理             |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (2). 订单信息管理             |\n");
	    	if(i==0) printf("\033[1;46m\t\t\t\t\t|    -->   (0). 返回上一个界面           |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (0). 返回上一个界面           |\n");
	    	printf("\t\t\t\t\t|                                        |\n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t    请选择你要进行的服务(按下w或s可进行上下选择)");
			temp = getch();
			if(temp == 'w'||temp=='W') i = (i-1+3)%3;
			else if(temp == 's'||temp=='S') i = (i+1)%3;
			else if(temp == '\r'){
				choice_mode = i;break;
			}
			else continue;
		}
		if(choice_mode == 0) return;
		else if(choice_mode == 1){
			Restock();
		}
		else if(choice_mode == 2){
			createsupplylist();
			productin_interface();
		}
	}
	
	
} 




void Inventory_Mode(){	
	while(1)
	{
		int i = 1;
		char temp;
		int ManagerOp;
		
		while(1)
		{
			system("cls");
			printf("\n\n\n\n\n"); 
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t              库存管理界面               \n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t|                                       |\n");
	    	if(i==1) printf("\033[1;46m\t\t\t\t\t|   -->  (1). 查看仓库货品清单          |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (1). 查看仓库货品清单          |\n");
	    	if(i==2) printf("\033[1;46m\t\t\t\t\t|   -->  (2). 修改仓库货品信息          |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (2). 修改仓库货品信息          |\n");
	    	if(i==3) printf("\033[1;46m\t\t\t\t\t|   -->  (3).   查看赠品库存            |\033[0m\n\033[1;44m"); 
	    	else printf("\t\t\t\t\t|        (3).   查看赠品库存            |\n"); 
	    	if(i==4) printf("\033[1;46m\t\t\t\t\t|   -->  (4).     赠品删除              |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (4).     赠品删除              |\n");
			if(i==5) printf("\033[1;46m\t\t\t\t\t|   -->  (5).     商品查询              |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (5).     商品查询              |\n");
	    	if(i==0) printf("\033[1;46m\t\t\t\t\t|   -->  (0).  返回上一个界面           |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (0).  返回上一个界面           |\n");
			printf("\t\t\t\t\t|                                       |\n");
			printf("\t\t\t\t\t --------------------------------------- \n");
			printf("\t\t\t\t    请选择你要进行的服务(输入w或s可进行上下选择)");
			
			temp = getch();	
			if(temp == 'w'||temp=='W') i = (i-1+6)%6;
			else if(temp == 's'||temp=='S') i = (i+1)%6;
			else if(temp == '\r'){
				ManagerOp = i;break;
			}
			else continue;
		}
	
		switch(ManagerOp){
			case(0): return;
			case(1):{//查看仓库货品清单
				system("cls");
				InventorySortMode();
				break;
			}
			case(2):{//修改仓库货品信息
				ChangeInventory(); 
				break;
			} 
			case(3):{ //查看赠品库存
				system("cls"); 
				printf("\n\n\n\n"); 
				printf("\t\t\t\t\t --------------------------------------- \n");
				printf("\t\t\t\t\t               查看赠品信息              \n");
				printf("\t\t\t\t\t --------------------------------------- \n");
				PrintGift();
				pau;
				break; 
			

			}
			case(4):{//  赠品删除
			    
				
				deltegift(); 
		
				break;
			}
			case(5):{//商品查询
			    queryinventory();
		
				break;
			}

			default:{
				RefreshPage();
				break;
			}
		}
	}
} 

void Clinet_Mode(){	
	while(1)
	{
		int i = 1;
		char temp;
		int ManagerOp;
		while(1)
		{
			system("cls");
			printf("\n\n\n\n\n"); 
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t            用户信息管理界面             \n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t|                                       |\n");
	    	if(i==1) printf("\033[1;46m\t\t\t\t\t|          (1). 查看客户信息            |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (1). 查看客户信息            |\n");
	    	if(i==2) printf("\033[1;46m\t\t\t\t\t|          (2). 修改客户信息            |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (2). 修改客户信息            |\n");
	    	if(i==3) printf("\033[1;46m\t\t\t\t\t|          (3).   客户充值              |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (3).   客户充值              |\n");
	    	if(i==4) printf("\033[1;46m\t\t\t\t\t|          (4).   删除客户              |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (4).   删除客户              |\n");
	    	if(i==0) printf("\033[1;46m\t\t\t\t\t|          (0).  返回上一个界面         |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|          (0).  返回上一个界面         |\n");
			printf("\t\t\t\t\t|                                       |\n");
			printf("\t\t\t\t\t --------------------------------------- \n");
			printf("\t\t\t\t    请选择你要进行的服务(输入w或s可进行上下选择)");	
			temp = getch();	
			if(temp == 'w'||temp=='W') i = (i-1+5)%5;
			else if(temp == 's'||temp=='S') i = (i+1)%5;
			else if(temp == '\r'){
				ManagerOp = i;break;
			}
			else continue;
		}
		
		switch(ManagerOp){
			case(0): return;
			case(1):{//查看客户信息		
				printCustomer(L);
				pau; 
				break;

			} 
			case(2):{//修改客户信息 
				system("cls");
				char tempid_s[5];
				int tempid;
				printf("\t\t\t\t\t --------------------------------------- \n");
			    printf("\t\t\t\t\t                修改用户信息                 \n");
			    printf("\t\t\t\t\t --------------------------------------- \n");
				printf("\t\t\t\t\t请输入您的id:");
				tempid = checkNum();
				if(tempid == -1){
					RefreshPage();
					continue;
				}
				else if(tempid==0)return;	
				changeInfo(&L, tempid);
				writeClientInfo(L);
				pau;
				break;
			}
			case(3):{// 用户充值
				int tempid;
				double tempmoney;
				while(1)
				{
					system("cls");
					printf("\n\n\n\n\n"); 
			    	printf("\t\t\t\t\t --------------------------------------- \n");
			    	printf("\t\t\t\t\t                充值界面                 \n");
			    	printf("\t\t\t\t\t     (在账号处输入0可以返回上一个界面)   \n");
			    	printf("\t\t\t\t\t --------------------------------------- \n");
					char tempid_s[6];
					printf("\t\t\t\t 请输入您的id: ");
					tempid = checkNum();
					if(tempid == -1){
						RefreshPage();
						continue;
					}	
					if(tempid == 0)	break;
					client* p=findClient(&L, tempid); 
					if(!p){
						printf("\t\t\t\t\t您输入的用户不存在!\n");
						pau;
						return; 
					}
					printf("\t\t\t\t 请输充值金额：");
					tempmoney=checkDouble();
					if(!recharge(&L, &log_head, tempid, tempmoney)){
						RefreshPage();continue;
					}
					else{
					printf("\t\t\t\t充值成功！本次充值金额：%.2lf",tempmoney);
					writeClientInfo(L);
					pau;
					break;
					} 
					pau;
					
				}
				break;
			}
			case(4):{
				int cus_id;
				while(1){
					system("cls");
					printf("\n\n\n\n\n"); 
			    	printf("\t\t\t\t\t --------------------------------------- \n");
			    	printf("\t\t\t\t\t                删除用户                 \n");
			    	printf("\t\t\t\t\t     (在账号处输入0可以返回上一个界面)   \n");
			    	printf("\t\t\t\t\t --------------------------------------- \n");
			    	printf("\t\t\t\t请输入要删除的用户id:");
					cus_id=checkNum();
					if(cus_id==0)break;
					if(cus_id!=-1){
						delClient(&L,cus_id);
						writeClientInfo(L);
						break;
					}
					else{
						printf("\t\t\t\t输入的用户id不正确！请重新输入！");
					}
				}
				pau;
				break;
			} 
			default:{
				ErrorHappens();
				break;
			}
		}
	}		
}

void Bill_Mode(){	
	while(1)
	{
		int i = 1;
		char temp;
		int ManagerOp;
		while(1)
		{
			system("cls");
			printf("\n\n\n\n\n"); 
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t            销售订单管理界面             \n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t|                                       |\n");
	    	if(i==1) printf("\033[1;46m\t\t\t\t\t|   -->  (1).   查看订单信息            |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (1).   查看订单信息            |\n");
//	    	if(i==2) printf("\033[1;46m\t\t\t\t\t|        (2).   修改客户信息            |\033[0m\n\033[1;44m");
//	    	else printf("\t\t\t\t\t|        (2).   修改客户信息            |\n");
	    	if(i==2) printf("\033[1;46m\t\t\t\t\t|   -->  (2).     订单查询              |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (2).     订单查询              |\n");
	    	if(i==3) printf("\033[1;46m\t\t\t\t\t|   -->  (3).   删除销售订单            |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (3).   删除销售订单            |\n");
	    	if(i==0) printf("\033[1;46m\t\t\t\t\t|   -->  (0).  返回上一个界面           |\033[0m\n\033[1;44m");
	    	else printf("\t\t\t\t\t|        (0).  返回上一个界面           |\n");
			printf("\t\t\t\t\t|                                       |\n");
			printf("\t\t\t\t\t --------------------------------------- \n");
			printf("\t\t\t\t    请选择你要进行的服务(按下w或s可进行上下选择)");	
			temp = getch();	
			if(temp == 'w'||temp=='W') i = (i-1+4)%4;
			else if(temp == 's'||temp=='S') i = (i+1)%4;
			else if(temp == '\r'){
				ManagerOp = i;break;
			}
			else continue;
		}
		
		switch(ManagerOp){
			case(0): return;
			case(1):{//查看客户信息		
			system("cls");
				printf("\n\n\n\n\n"); 
		    	printf("\t\t\t\t\t\t\t\t\t\t ------------------------------------------------------------------ \n");
		    	printf("\t\t\t\t\t\t\t\t\t\t                        查询所有订单的界面                 \n");
		    	printf("\t\t\t\t\t\t\t\t\t\t ------------------------------------------------------------------ \n");			
				Check_Bills();
				pau;
				break;

			} 
			case(2):{// 订单查询
				Search_For_The_Bills_Of_Given_Data();
				break;
			}
			case(3):{//删除订单 
				system("cls");
				int num;
				num=Delete_Bill();
				if(num==1)pau;
				break;
			}
			default:{
				ErrorHappens();
				break;
			}
		}
	}		
}


/*------------------------------------------客户界面------------------------------------*/ 
void ClientChooseMode(client* cur_cus){

	while(1){
		int position=0,row=8,Cli_mode; 
	while(1)
	{	
		
		system("cls");
		printf("\n\n\n\n\n"); 
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t                客户界面                 \n");
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t|                                       |\n");
    	if(position==0)printf("\033[1;46m\t\t\t\t\t|     -->        批发                   |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|                批发                   |\n");
    	if(position==1)printf("\033[1;46m\t\t\t\t\t|     -->    查询历史订单               |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|            查询历史订单               |\n");
    	if(position==2)printf("\033[1;46m\t\t\t\t\t|     -->      商品换货                 |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|              商品换货                 |\n");
    	if(position==3)printf("\033[1;46m\t\t\t\t\t|     -->      商品退货                 |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|              商品退货                 |\n");
    	if(position==4)printf("\033[1;46m\t\t\t\t\t|     -->       购物车                  |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|               购物车                  |\n");
    	if(position==5)printf("\033[1;46m\t\t\t\t\t|     -->      个人信息                 |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|              个人信息                 |\n"); 
    	if(position==6)printf("\033[1;46m\t\t\t\t\t|     -->   临期商品大促销              |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|           临期商品大促销              |\n");
    	if(position==7)printf("\033[1;46m\t\t\t\t\t|     -->   返回上一个界面              |\033[0m\n\033[1;44m");
    	else printf("\t\t\t\t\t|           返回上一个界面              |\n");
		printf("\t\t\t\t\t|                                       |\n");
		printf("\t\t\t\t\t --------------------------------------- \n");
		printf("\t\t\t\t    请选择你要进行的服务(按下w或s可进行上下选择)");
		
//		int Cli_mode;
//		char Cli_mode_s[5];
//		scanf("%s", Cli_mode_s);
//		Cli_mode = inputcheck(Cli_mode_s);
		int op=getchoice(&position,row,&Cli_mode);
		if(op<0)break;
	}
//		if(Cli_mode == -1){
//			RefreshPage();
//			continue;
//		}
		if(Cli_mode == 8)
			return;
		switch(Cli_mode){
			case(1):{
				PurchaseInterface(cur_cus);
				break;
			}
			case(2):{
				//查询历史订单 
				system("cls");
				printf("\n\n\n\n\n"); 
		    	printf("\t\t\t\t\t\t\t\t\t\t ------------------------------------------------------------------ \n");
		    	printf("\t\t\t\t\t\t\t\t\t\t                        您的历史订单界面                 \n");
		    	printf("\t\t\t\t\t\t\t\t\t\t ------------------------------------------------------------------ \n");
				Print_Bills_Of_Given_Id(cur_cus->id);
				pau;
				break;
			}
			case(3):{
				Exchange(cur_cus);
				break;
			}
			case(4):{  // 商品退货 
				Return(cur_cus);
				break;
			}
			case(6):{
				showCusInfo(cur_cus,log_head);
				break;
			}
			case(5):{  // 购物车界面
				ShoppintcartInterface(cur_cus);
				break;
			}
			case(7):{ // 临期商品促销 
				SalePromotion(cur_cus);
				break;
			}
			
		
		}
	}
}
	
/* ------------------------------------------- 促销界面-------------------------------------------*/
void SalePromotion(client* cur_cus){
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t                促销界面                 \n");
//    	printf("\t\t\t\t\t 购买金额超过999即有机会获得对应价格的赠品！  \n");
    	printf("\t\t\t\t\t  (在品牌编号出输入0可直接返回上一个界面)\n");
    	printf("\t\t\t\t\t --------------------------------------- \n");
		
		if(Gift_head->next != NULL)
		{
			printf("\n\t\t\t\t今日活动：购买金额超过999即有机会获得对应价格的赠品！\n\n");	
			printf("\t\t\t\t\t --------------------------------------- \n");	
		}		
		
		PrintSpecialInv(); 
		printf("\t\t\t\t\t --------------------------------------- \n");
		printf("\t\t\t\t\t输入你要选择的品牌编号：");
		int ChooseBrand, ChooseProduct;
		char ChooseBrand_s[5], ChooseProduct_s[5];
		ChooseBrand = checkNum();
		Inventory* q = Inv_head->next;
		while(q)
		{
			if(q->BrandNumber == ChooseBrand && q->nearexpiry == 1) break;
			q = q->next;
		}
		if(ChooseBrand == 0) return ;
		if(ChooseBrand == -1){
			RefreshPage();
			continue;
		}
		else if(q == NULL){
			printf("\t\t\t未找到该促销商品，您的输入有误，请在页面刷新后重新输入！\n"); 
			pau;
			continue;
		}	
		printf("\t\t\t\t\t请选择正在促销中的产品编号：");
		ChooseProduct = checkNum();
		if(ChooseProduct == -1){
			RefreshPage();
			continue;
		}
		Inventory* tar = Inv_head->next;
		while(tar)
		{
			if(tar->BrandNumber == ChooseBrand && tar->SpecificationNumber == ChooseProduct && tar->nearexpiry == 1)
				break;
			tar = tar->next;
		}
		if(tar == NULL)
		{
			printf("\t\t\t\t未找到该促销商品，您的输入有误，请在页面刷新后重新输入！\n"); 
			pau;
			continue;
		}
		int  buy_amount;
		char buy_amount_s[5]; 
		printf("\t\t\t\t\t请选择你要批发的数量(单次不得超过100箱)：");
		buy_amount = checkNum();
		if(buy_amount == -1  || buy_amount == 0 ){
			RefreshPage();
			continue;
		}
		if( buy_amount > 100 || tar->Reserve < buy_amount)
		{
			printf("\t\t\t您输入的商品数量不符合规范，请按任意键刷新后重新输入！\n"); 
			pau;
			continue;
		}
		double buy_money;
		buy_money = buy_amount * tar->Price;
		if (cur_cus->level == 1) {
			    buy_money = buy_money*0.98;
		}
		else if (cur_cus->level == 2) {
		    buy_money = buy_money*0.95; 
		}
		else if (cur_cus->level == 3) {
			buy_money = buy_money*0.90;
	    }
		printf("\t\t\t\t          本次购买享受%d级优惠,共计%.2f元！\n",cur_cus->level,buy_money);
		printf("\t\t\t\t\t --------------------------------------- \n");
		printf("\t\t\t\t\t                支付选择                 \n");
		printf("\t\t\t\t\t\t     1. 现金支付\n");
		printf("\t\t\t\t\t\t     2. 余额支付\n");
		printf("\t\t\t\t\t\t     3. 加入购物车\n");
		printf("\t\t\t\t\t\t     4. 取消本次购买\n"); 
		printf("\t\t\t\t\t\t    请选择您支付方式: ");
		int paychoice;
		char paychoice_s[5];
		paychoice = checkNum();
		if(paychoice == -1){
			RefreshPage();
			continue;
		}
		switch(paychoice){
			case(1):{
				struct sell_bill *newbill = (struct sell_bill *) malloc(sizeof(struct sell_bill));
				newbill->next = NULL;
    			newbill->pre = NULL;
    			// 找到对应库存 
    			Inventory* tar = Inv_head->next;
				while(tar)
				{
					if(tar->BrandNumber == ChooseBrand && tar->SpecificationNumber == ChooseProduct && tar->nearexpiry == 1)
						break;
					tar = tar->next;
				}
				strcpy(newbill->brand,tar->DrinksBrand);
				newbill->number_of_brand = tar->BrandNumber;
				newbill->ProductNumber = tar->ProductNumber;
				newbill->SpecificationNumber = tar->SpecificationNumber;			
				newbill->packagingsize = tar->packagingsize;
				newbill->number_of_packagingzise = buy_amount;
				newbill->Unit_Price = tar->Price;
				newbill->volume = tar->volume;
				newbill->number_of_packagingzise = tar->packagingsize;
				newbill->total_number = newbill->packagingsize * newbill->number_of_packagingzise;
				newbill->total_price = buy_money;
				if (cur_cus->level == 1) {
			        newbill->discount_for_client = 0.98;
			    }
			    else if (cur_cus->level == 2) {
			        newbill->discount_for_client = 0.95;
			    }
			    else if (cur_cus->level == 3) {
			        newbill->discount_for_client = 0.90;
			    }
			    newbill->buyer = cur_cus;
			    newbill->status = 1;
				sell_save(newbill);
			    newbill->related = NULL;
			    //struct Inventory* product; 这要连接啥 
			    printf("\t\t\t\t\t --------------------------------------- \n");
				printf("\t\t\t\t\t              现金支付成功！                 \n");
				//这里要修改库存 
				update(&cur_cus,buy_money);
				writeClientInfo(L);
				//更新成功
				printf("\t\t\t\t\t您已成功购买%s品牌的%s%d箱,",code[tar->BrandNumber][0], code[tar->BrandNumber][tar->ProductNumber], buy_amount);
				printf("每箱%d瓶, 每瓶%d毫升！\n", tar->packagingsize, tar->volume);
				printf("\t\t\t\t\t\t共计%.2f元!\n", buy_money);
				reduceinventory(tar, buy_amount);
				UpdateInventory();	
				total_income+=buy_money;
				current_money+=buy_money;
				writeprofit();
//				system("pause");
				if(buy_money > 999 && Gift_head->next) choosegift(buy_money);
				//库存减少 
				break;
			}
			case(2):{
				if(!checkBalance(&cur_cus,buy_money)){
					printf("\t\t\t\t您的余额不足！请按任意键刷新后重新选择购买！\n");
					pau; 
					continue;
				}
				struct sell_bill *newbill = (struct sell_bill *) malloc(sizeof(struct sell_bill));
				newbill->next = NULL;
    			newbill->pre = NULL;
    			// 找到对应库存 
    			Inventory* tar = Inv_head->next;
				while(tar)
				{
					if(tar->BrandNumber == ChooseBrand && tar->SpecificationNumber == ChooseProduct && tar->nearexpiry == 1)
						break;
					tar = tar->next;
				}
				writeClientInfo(L);
				strcpy(newbill->brand,tar->DrinksBrand);
				newbill->number_of_brand = tar->BrandNumber;
				newbill->ProductNumber = tar->ProductNumber;
				newbill->SpecificationNumber = tar->SpecificationNumber;
				newbill->packagingsize = tar->packagingsize;
				newbill->Unit_Price = tar->Price;
				newbill->volume = tar->volume;
				newbill->number_of_packagingzise = tar->packagingsize;
				newbill->total_number = buy_amount;
				newbill->total_price = buy_money;
				newbill->related = NULL;
				if (cur_cus->level == 1) {
			        newbill->discount_for_client = 0.98;
			    }
			    else if (cur_cus->level == 2) {
			        newbill->discount_for_client = 0.95;
			    }
			    else if (cur_cus->level == 3) {
			        newbill->discount_for_client = 0.90;
			    }
			    newbill->buyer = cur_cus;
			    newbill->status = 1;
			    sell_save(newbill);
				printf("\t\t\t\t\t              余额支付成功！\n");
				printf("\t\t\t\t\t您已成功购买%s品牌的%s%d箱,",code[tar->BrandNumber][0], code[tar->BrandNumber][tar->ProductNumber], buy_amount);
				printf(" 每箱%d瓶, 每瓶%d毫升！\n", tar->packagingsize, tar->volume);
				printf("\t\t\t\t\t\t     共计%.2f元!\n", buy_money);
				//这里还差余额成功操作！ 
				reduceinventory(tar, buy_amount);
				UpdateInventory();	
				total_income+=buy_money;
				current_money+=buy_money;
				writeprofit();
				if(buy_money > 999 && Gift_head->next) choosegift(buy_money);
				//库存减少
				system("pause");
				break;
			}
			case(3):{// 加入购物车 
				addShoppingCart(&cur_cus->cart,buy_amount,cur_cus->id,tar->Price,tar->BrandNumber, tar->ProductNumber, tar->SpecificationNumber); 
				writeShoppingCart(&L);
				printf("\n\t\t\t已成功加入购物车!"); 
				break;
			} 
			case(4):{
				printf("\n\t\t\t\t\t   您已成功取消本次购买！");
				printf("\n\t\t\t\t\t   按任意键可刷新本次界面!");
				pau;
				continue;
				break;
			}
			default:{
				RefreshPage();
				pau;
				break;
			}
		}
		
	}
} 

void choosegift(double buy_money){
	printf("\t\t\t\t\t --------------------------------------- \n");
	printf("\t\t\t       恭喜您达到对应金额 , 您可以按自己喜好选择自己喜欢的赠品！\n");
	Gift* p1,* p2, *p3;
	p1 = Gift_head->next;
	int n1, n2, n3;
	int n = 1;
	n1 = floor(buy_money * 0.1 / p1->value);
	n1 = min(n1, p1->bottle);
	printf("\t\t\t\t       %d. %s品牌的%s%d瓶\n",n,code[p1->brand][0],code[p1->brand][p1->product], n1);
	p2 = p1;
	while(p2)
	{
		if(p2->brand!=p1->brand) break;
		p2 = p2->next;
	}
	if(p2)
	{
		n2 = floor(buy_money * 0.1 / p2->value);
		n2 = min(n2, p2->bottle);
	}
	if(p2)
	{
		n++;
		printf("\t\t\t\t       %d. %s品牌的%s%d瓶\n",n,code[p2->brand][0],code[p2->brand][p2->product], n2);
		p3 = p2;
		while(p3)
		{
			if(p3->brand!=p2->brand && p3->brand!=p1->brand) break;
			p3 = p3->next;
		}
		if(p3)
		{
			n++;
			n3 = floor(buy_money * 0.1 / p3->value);
			n3 = min(n3, p3->bottle);
			printf("\t\t\t\t       %d. %s品牌的%s%d瓶\n",n,code[p3->brand][0],code[p3->brand][p3->product], n3);
		}
	}
	n++; 
	printf("\t\t\t\t       %d. 不需要赠品\n",n);
	while(1)
	{
		printf("\t\t\t\t\t    请输入您的选择:");
		int giftchoice;
		char giftchoice_s[5];
		giftchoice = checkNum();
		if(giftchoice > n || giftchoice <= 0){
			printf("\t\t\t\t 您的输入有误，请重新输入！\n");	
			pau;
			continue;
		}
		else if(giftchoice == n)
		{
			printf("\t\t\t\t  很遗憾没有您喜欢的赠品，期待您的下次光临！\n");
			pau;
			break;
		}
		else if(giftchoice == 1)
		{
			printf("\t\t\t\t您已成功选择赠品：%s品牌的%s%d瓶！\n",code[p1->brand][0],code[p1->brand][p1->product], min(p1->bottle, n1));
			//赠品处理操作 
			reducegift(p1, n1); 
			UpdateGift();
			pau; 
			//赠品处理end 
			break;
		}
		else if(giftchoice == 2)
		{
			printf("\t\t\t\t您已成功选择赠品：%s品牌的%s%d瓶！\n",code[p2->brand][0],code[p2->brand][p2->product], min(p2->bottle, n2));
			reducegift(p2, n2); 
			UpdateGift();
			pau;
			break;
		}
		else if(giftchoice == 3)
		{
			printf("\t\t\t\t您已成功选择赠品：%s品牌的%s%d瓶！\n",code[p3->brand][0],code[p3->brand][p3->product], min(p3->bottle, n3));
			reducegift(p3, n3); 
			UpdateGift();
			pau;
			break;
		}
	} 
} 




/*------------------------------------------其他功能----------------------------------------------*/
 
void ErrorHappens(){
	printf("\n\t\t\t\t 您的输入有误, 请重新输入!"); 
}


void RefreshPage(){
	printf("\n\t\t\t\t 您的输入不符合规范，按任意键可刷新界面！\n");
	system("pause");
} 

int inputcheck(char numstring[]){
	int n = strlen(numstring);
	if(n > 20) return -1;
	int ans = 0;
	if(n > 1 && numstring[0] == '0') return -1;
	for(int i = 0; i < n; i++)
	{
		if(numstring[i] > '9' || numstring[i] < '0') return -1;
		else ans = ans*10 + (int)(numstring[i] - '0');
	}
	return ans;
} 

/*-------------------------------购物车界面-----------------------------------*/
void ShoppintcartInterface(client* cur_cus){          // 当前客户信息 
	int position=0,row=4,ShoppingcartOp;
	while(1)
	{
		while(1)
		{
			system("cls");
			printf("\n\n\n\n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t               购物车界面                \n");
	    	printf("\t\t\t\t\t --------------------------------------- \n");
	    	
			showShoppingCart(cur_cus);
			printf("\t\t\t\t\t --------------------------------------- \n");
	    	printf("\t\t\t\t\t                                        \n");
	    	if(position==0)printf("\t\t\t\t\t         --->     删除订单              \n");
	    	else printf("\t\t\t\t\t                  删除订单              \n");
	    	if(position==1)printf("\t\t\t\t\t         --->   修改购买数量            \n");
	    	else printf("\t\t\t\t\t                修改购买数量            \n");
	    	if(position==2)printf("\t\t\t\t\t         --->     支付结算              \n");
	    	else printf("\t\t\t\t\t                  支付结算              \n");
	    	if(position==3)printf("\t\t\t\t\t         --->  返回上一个界面           \n");
	    	else printf("\t\t\t\t\t               返回上一个界面           \n");
			printf("\t\t\t\t\t                                        \n");
			printf("\t\t\t\t\t --------------------------------------- \n");
			printf("\t\t\t\t 请选择您要对你的购物车进行的操作(输入w或s可进行上下选择)");

			int op=getchoice(&position,row,&ShoppingcartOp);
			if(op<0)break;
			else continue;
		}	
		if(ShoppingcartOp==4)return;
		switch(ShoppingcartOp){
			case(1):{
				shopping_cart *p = cur_cus->cart;
				if(p == NULL){
					printf("\n\t\t\t\t\t 您的购物车为空，请先加入商品吧！");
					pau;
					continue;
				}
				int  delete_id;
				printf("\n\t\t\t\t  请输入你想要删除的订单号："); 
				delete_id = checkNum();
				if(delete_id == -1) {
					RefreshPage();
					break;
				}
				delShoppingCart(cur_cus, delete_id);
				printf("\n\t\t\t\t  您已成功删除购物车内容！");
				writeShoppingCart(&L);
				pau;
				break;
			}
			case(2):{
				shopping_cart *p = cur_cus->cart;
				if(p == NULL){
					printf("\n\t\t\t\t\t 您的购物车为空，请先加入商品吧！");
					pau;
					continue;
				}
				int  change_id;
				printf("\n\t\t\t\t  请输入你想要修改的订单号："); 
				change_id = checkNum();
				int l = 0;
				while(p)
				{
					l++;
					p = p->next;
				}
				if(change_id > l || change_id == -1){
					RefreshPage();
					break;
				}
				ChangeNumber(cur_cus, change_id);
				writeShoppingCart(&L);
				break;
			} 
			case(3):{//支付结算
				shopping_cart* p = cur_cus->cart;
				int flag = 0;
				if(p == NULL)
				{
					printf("\n\t\t\t\t\t 您的购物车为空，请去添加商品后再购买！");
					pau;
					continue;
				}
				while(p)
				{
					Inventory* tar = Inv_head->next;
					while(tar)
					{
						if(tar->BrandNumber == p->x&& tar->SpecificationNumber == p->z)
							break;
						tar = tar->next;
					}
					if(tar == NULL || tar->Reserve == 0)
					{
						printf("\n\t\t\t\t 您购买的商品已售罄或下架, 请删除后重新购买！\n");
						printf("\t\t\t\t 刷新页面后可重新选择购买！\n");
						flag = 1;
						pau;
						break;
					}
					else if(tar->Reserve < p->cnt)
					{
						printf("\n\t\t\t\t 您购买的数量已超过库存, 已为您自动修改为当前能够购买的最大值！\n");
						printf("\t\t\t\t 刷新页面后可重新选择购买！\n");
						p->cnt = tar->Reserve;
						flag = 1;
						pau;
						break;
					}
					p = p->next;
				}
				if(flag == 1) continue;
				p = cur_cus->cart;
				
				while(p)
				{
					struct sell_bill *newbill = (struct sell_bill *) malloc(sizeof(struct sell_bill));
					newbill->next = NULL;
		    		newbill->pre = NULL;
		    			// 找到对应库存 
		    		Inventory* tar = Inv_head->next;
					while(tar)
					{
						if(tar->BrandNumber == p->x&& tar->SpecificationNumber == p->z)
							break;
						tar = tar->next;
					}
					if(tar == NULL || tar->Reserve < p->cnt)
					{
						printf("\n\t\t\t\t 您购买的数量已超过库存, 已为您自动修改为当前能够购买的最大值！\n");
						printf("\t\t\t\t 刷新页面后可重新选择购买！\n");
						p->cnt = tar->Reserve;
						flag = 1;
						pau;
						break;
					}
					strcpy(newbill->brand,tar->DrinksBrand);
					newbill->number_of_brand = tar->BrandNumber;
					newbill->ProductNumber = tar->ProductNumber;
					newbill->SpecificationNumber = tar->SpecificationNumber;
					newbill->packagingsize = tar->packagingsize;
					newbill->Unit_Price = tar->Price;
					newbill->volume = tar->volume;
					newbill->number_of_packagingzise = tar->packagingsize;
					newbill->total_number = p->cnt;
					
					if (cur_cus->level == 1) {
				        newbill->discount_for_client = 0.98;
				    }
				    else if (cur_cus->level == 2) {
				        newbill->discount_for_client = 0.95;
				    }
				    else if (cur_cus->level == 3) {
				        newbill->discount_for_client = 0.90;
				    }
					newbill->total_price = p->total_cost*newbill->discount_for_client;
				    newbill->buyer = cur_cus;
				    newbill->status = 1;
				    newbill->related = NULL;
					sell_save(newbill);
					update(&cur_cus,newbill->total_price);
					total_income+=newbill->total_price;
					current_money+=newbill->total_price;
					writeprofit();
					reduceinventory(tar, p->cnt);
					UpdateInventory();	
					//加入订单  减少库存 
					p = p->next;
				}
//				printf("\t\t\t\t\t 您已成功购买所有商品！欢迎下次光临！");
				if(flag == 1) break;
				else {
					cur_cus->cart = NULL;
					writeShoppingCart(&L); 
					printf("\n\t\t\t\t\t      您已成功购买所有商品！\n");
					printf("\t\t\t\t\t         按任意键可刷新界面！");
					pau; 
				}
			} 
				break;
		} 
	}
}

void giftinterface(){
	system("cls");
	printf("\n"); 
    printf("\t\t\t\t\t --------------------------------------- \n");
    printf("\t\t\t\t\t                赠品信息                 \n");
    printf("\t\t\t\t\t     (在账号处输入0可以返回上一个界面)   \n");
    printf("\t\t\t\t\t --------------------------------------- \n");
    PrintGift(); 
}
