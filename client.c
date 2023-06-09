#include"client.h"
extern double total_cost;
extern double total_income;
extern double current_money;

extern Inventory* Inv_head;
extern int total_brand;
extern client* L;
extern char* code[12][10];
extern double total_cost;
extern double total_income;
extern double current_money;

void PurchaseInterface(client* cur_cus){
	int position=0,row=8,ChooseBrand=0;
	Inventory* p = Inv_head->next;
	int tag[11] = {0};
	int hash[11] = {0};
	int num = 0;
	while(p)
	{
		if(tag[p->BrandNumber] == 0){
			num++;
			tag[p->BrandNumber] = 1;
			hash[num] = p->BrandNumber;
		}
		p = p->next;
	}
	row=num+1;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n\n"); 
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t               商品批发界面              \n");
//    	printf("\t\t\t\t\t         (输入0可以返回上一个界面)       \n");
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	
		for(int i = 1; i <= num; i++)
		{
		if(position==i-1)printf("\t\t\t\t\t|        --->   %-14s            |\n",code[hash[i]][0]);
		else printf("\t\t\t\t\t|               %-14s            |\n",  code[hash[i]][0]);
		}
		if(position==num)printf("\t\t\t\t\t|        --->   %-14s            |\n","退出"); 
		else printf("\t\t\t\t\t|               %-14s            |\n","退出"); 
		printf("\t\t\t\t\t --------------------------------------- \n");
		printf("\n\t\t\t\t\t请选择你需要选购的品牌：");
//		int ChooseBrand;
//		char ChooseBrand_s[5];
//		scanf("%s", ChooseBrand_s);
//		ChooseBrand = inputcheck(ChooseBrand_s);
//		if(ChooseBrand == -1 || ChooseBrand > total_brand){
//			RefreshPage();
//			continue;
//		}
		int op=getchoice(&position,row,&ChooseBrand);
		if(op<0)break;
	} 
	if(ChooseBrand == row) return ;
		else{
			struct sell_bill* newbill = Sell_select_brand(hash[ChooseBrand]);
			PurchaseProduct(cur_cus, hash[ChooseBrand], newbill);
	}
}

void PurchaseProduct(client* cur_cus, int ChooseBrand, struct sell_bill* newbill){
	while(1)
	{
		system("cls");
		printf("\n\n\n\n\n"); 
    	printf("\t\t\t\t\t --------------------------------------- \n");
    	printf("\t\t\t\t\t               商品批发界面              \n");
    	printf("\t\t\t\t\t         (输入0可以返回上一个界面)       \n");
    	printf("\t\t\t\t\t --------------------------------------- \n");

		
		printf("\t\t\t\t\t      当前选择的品牌是: %s       ",code[ChooseBrand][0]);
		printf("\n\n\n");
		printf("\t\t 产品名称  |  产品编号  |  酒水容量(/瓶) | 仓库库存 | 包装大小(/箱) |  售价(/箱) \n"); 
		int max=-0x3f3f3f3f;
		Inventory* p = Inv_head->next;
		while(p)
		{
			if(p->BrandNumber == ChooseBrand)
			{
				printf("\t\t  %-14s", code[p->BrandNumber][p->ProductNumber]);
				printf(" %-12d %-14d%-14d%-13d", p->SpecificationNumber, p->volume, p->Reserve, p->packagingsize);
				printf("%-10.2f\n", p->Price);
				if(max<p->SpecificationNumber)
				{
					max=p->SpecificationNumber;
				}
			} 
			p = p->next;
		}
		int ChooseProduct;
		printf("\t\t------------------------------------------------------------------------------------- \n");
		printf("\t\t\t\t\t请选择你要批发的产品编号：");
		char ChooseProduct_s[5];
		ChooseProduct = checkNum();
		if(ChooseProduct == -1 || ChooseProduct > max){
			RefreshPage();
			continue;
		}
		Inventory* pointer = Inv_head->next;
		while(pointer!=NULL)
		{
			if(pointer->BrandNumber == ChooseBrand&&pointer->SpecificationNumber==ChooseProduct)
			{
				break;
			} 
			pointer = pointer->next;
		}
		if(ChooseProduct == 0) return; 
		else if(pointer->Reserve==0)
		{
			printf("\t\t\t\t\t您想要批发的商品已售罄");
			pau;
			continue;
		}
		else{
			Sell_select_ProductNumber(ChooseProduct, newbill);
			Sell_select_Number_of_goods(newbill,cur_cus);
			int i = Sell_confirm(newbill, cur_cus);
			if(i!=3) {
				sell_save(newbill);
				if(i!=4) UpdateInventory();
			}
//			printf("\n\t\t\t\t您已成功选择  ,容量为  ,包装为  "); 
		}
		system("pause"); 
	}
}

void ClientInput(){
    int ClientId;
	char ClientPassword[12];    
    while(1)
    {
        ClientLogin();
        ClientId=checkNum();
        if(ClientId==-1){
        	ErrorHappens();
        	puts("");
        	pau;
        	continue;
		}
        if(ClientId == 0) return;
        PasswordOutput();
		char ClientPassword[20];
		char temp;
		int i = 0;
		while(1)
		{
			temp = _getch();
			if(temp == '\r' || temp == '\n') break;
			else if (temp == '\b') {             // 退格符特判 
				if(i!=0){
					printf("\b \b");
					i--;
				}
			}
			else{
				printf("*");
				ClientPassword[i++] = temp;
			}
		}
		ClientPassword[i] = '\0';
//		if(i == 1 && ClientPassword[i-1] == '0') return;
//		else if(strcmp(ClientPasswordPassword, passwordans) == 0)
//        	ManagerChooseMode();
//		else {
//			printf("您输入的密码有误，请在界面刷新后重新输入！");
//			continue; 
//		}
        
        if(!checkPassword(L, ClientId, ClientPassword)){
        	printf("\n\t\t\t\t 您输入的账号或密码有误, 请重新输入！\n");
			Sleep(1000);
		}
		else{
			client* cur_cus=findClient(&L,ClientId);
			ClientChooseMode(cur_cus); 
		}  
    }
}


/*------------------------------以下为购物车模块-----------------*/
void showShoppingCart(client*cus){
    if(!cus)return ;
    shopping_cart*p=cus->cart; 
    if(!p){
    	printf("\t\t\t\t\t\t啊哦,购物车里没有任何东西！\n");
    	return;
	}
    int cnt=0;
    double total_price=0;
    printf("\t订单编号 |    品牌名称    |   商品名称   | 酒水容量 |  包装大小  |  购买数量  |   单价   |  总金额\n");
    while(p) 
	{
        p->id=++cnt;
        Inventory* q = Inv_head->next;
        while(q)
        {
        	if(q->BrandNumber == p->x&& q->SpecificationNumber == p->z) break;
        	q = q->next;
		}
		if(q == NULL ) printf("\t\t\t\t\t 您曾选择的商品已下架删除！\n");
		else if(q->Reserve==0) 
		{
			printf("\t  %-9d%-20s%-15s", p->id, q->DrinksBrand, code[p->x][p->y]);
			printf("\t\t该商品已售罄！请删除该条记录后购买！"); 
//			printf("%-12d%-12d%-12d%-9.2lf%-10.2lf\n", q->volume, q->packagingsize, p->cnt,p->single_cost,p->total_cost);
		}
        else{

			printf("\t  %-9d%-20s%-15s", p->id, q->DrinksBrand, code[p->x][p->y]);
			printf("%-12d%-12d%-12d%-9.2lf%-10.2lf\n", q->volume, q->packagingsize, p->cnt,p->single_cost,p->total_cost);
			total_price += p->total_cost;
		}
        p=p->next;
    }
    printf("\t\t\t\t\t --------------------------------------- \n");
    float t;
    if (cus->level == 1) {
			t = 0.98;
		}
	else if (cus->level == 2) {
			 t = 0.95;
		}
	else if (cus->level == 3) {
		   t = 0.90;
	}
    printf("\t\t\t\t\t  您已享受%d级优惠，当前购物车总金额为%.2f元！\n",cus->level,total_price*t);
}
void addShoppingCart(shopping_cart**p,int cnt,int cus_id,double money,int x,int y,int z){
    
    if(!(*p)){
        shopping_cart *tmp=(shopping_cart*)malloc(sizeof(shopping_cart));
        tmp->single_cost=money;
        tmp->cnt=cnt;
        tmp->cus_id=cus_id;
        tmp->total_cost=(double)money*cnt;
        tmp->x=x,tmp->y=y,tmp->z=z;
        strcpy(tmp->goods_name,"tempname");
        tmp->next=NULL;
        *p=tmp;
    }
    else if((*p)&&(*p)->x==x&&(*p)->y==y&&(*p)->z==z){
            (*p)->cnt+=cnt;
            return;
    }
    else addShoppingCart(&(*p)->next,cnt,cus_id,money,x,y,z);
}
void readShoppingCart(client**L){
    FILE *fp=fopen("shoppingcart.txt", "r");
    if(!fp){
        printf("文件打开失败！\n");
        exit(0);
    }
    char buffer[1000];
    fgets(buffer,sizeof buffer,fp);
    char ch;
    int id,cus_id;double money;int cnt,x,y,z;
    while (fscanf(fp, "%d%d%d%lf%d%d%d",&id,&cus_id,&cnt,&money,&x,&y,&z)!=EOF){
        client *p= findClient(L,cus_id);
        if(!p)continue;
        addShoppingCart(&(p->cart),cnt,cus_id,money,x,y,z);
    }
    fclose(fp);
}


void writeShoppingCart(client**L){
    client *p=*L;
    FILE *fp= fopen("shoppingcart.txt", "w");
    fprintf(fp,"id\t客户id\t商品个数\t商品单价\t编号x\t编号y\t编号z\n");
    if(!p)return ;
    while(p){
        shopping_cart *tmp=p->cart;
        while(tmp){
            fprintf(fp,"%d\t%d\t%d\t%lf\t%d\t%d\t%d\n",tmp->id,tmp->cus_id,tmp->cnt,tmp->single_cost,tmp->x,tmp->y,tmp->z);
            tmp=tmp->next;
        }
        p=p->ne;
    }
    fclose(fp);
}

void delShoppingCart(client*L,int id){
    shopping_cart *p=L->cart;
    shopping_cart *dummy= malloc(sizeof(shopping_cart));
    dummy->next=p;
    p=dummy;
    while(p&&p->next){
        if(p->next->id==id)break;
        p=p->next;
    }
    if(p->next!=NULL)p->next=p->next->next;
    L->cart=dummy->next;
}


void ChangeNumber(client*cur_cus, int tarid){
	shopping_cart *p = cur_cus->cart;
	while(p)
	{
		if(p->id == tarid) break;
		p = p->next;
	}
	if(p==NULL) printf("\t\t\t\t 未找到该订单,请刷新后重新输入！");
	printf("\t\t\t\t 请输入您想要修改的数量(单次不得超过300箱)：");
	int  change_num;
	char change_num_s[10];

	change_num = checkNum();
	if(change_num == -1 || change_num == 0 || change_num>300){
		RefreshPage();
		return;
	} 
	else {
		p->cnt = change_num;
		p->total_cost = change_num * p->single_cost;
	}
	
} 
