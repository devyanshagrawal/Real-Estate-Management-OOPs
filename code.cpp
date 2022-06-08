#include<iostream>
using namespace std;

class Property{
private:
    string type;
    string p_no;
    int price;
    int status=0;
public:
    static int P_no;
    
    Property(string type="Lands",string p_no="9000000000",int price=5789000,int status=0)
    {
        this->type=type;
        this->p_no=p_no;
        this->price=price;
        this->status=status;
        P_no++;
    }
    
    void addProperty(string type,string p_no,int price)
    {
        this->type=type;
        this->p_no=p_no;
        this->price=price;
        P_no++;
    }
    
    void setstatus(int status)
    {
        this->status=status;
        P_no--;
    }
    
    
    void display()
    {
        cout<<"Property type: "<<type<<endl;
        cout<<"Contact No.: "<<p_no<<endl;
        cout<<"Price: Rs  "<<price<<endl;
        if(status==0)
            cout<<"This Property is available now!"<<endl;
        else
            cout<<"This Property is not available now!"<<endl;
    }
    
    void Propertynumber()
    {
        cout<<"Total number of available properties = "<<P_no<<endl;
    }
    
};

int Property::P_no=0;

class Buildings:public Property{
private:
    int b_no;
    string b_name;
public:
    Buildings(int b_no=1,string b_name="",string type="Buildings",string p_no="9000000000",int price=5789000,int status=0):Property(type,p_no,price,status)
    {
        this->b_no=b_no;
        this->b_name=b_name;
    }
    
    void setBuildings(int b_no,string b_name,string type,string p_no,int price)
    {
        this->b_no=b_no;
        this->b_name=b_name;
        Property::addProperty(type, p_no, price);
    }
    
    void display()
    {
        cout<<"Building name is: "<<b_name<<endl;
        cout<<"Building number is: "<<b_no<<endl;
        Property::display();
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
};

class Flats:public Property{
private:
    int f_no;
    string f_name;
public:
    Flats(int f_no=1,string f_name="",string type="Flats",string p_no="9000000000",int price=5789000,int status=0):Property(type,p_no,price,status)
    {
        this->f_no=f_no;
        this->f_name=f_name;
    }
    
    void setFlats(int f_no,string f_name,string type,string p_no,int price)
    {
        this->f_no=f_no;
        this->f_name=f_name;
        Property::addProperty(type, p_no, price);

    }
    
    void display()
    {
        cout<<"Flat name is: "<<f_name<<endl;
        cout<<"Flat number is: "<<f_no<<endl;
        Property::display();
    }
};

class Villas:public Property{
private:
    int v_no;
    string v_name;
public:
    Villas(int v_no=1,string v_name="",string type="Villas",string p_no="9000000000",int price=5789000,int status=0):Property(type,p_no,price,status)
    {
        this->v_no=v_no;
        this->v_name=v_name;
    }
    
    void setVillas(int v_no,string v_name,string type,string p_no,int price)
    {
        this->v_no=v_no;
        this->v_name=v_name;
        Property::addProperty(type, p_no, price);

    }
    
    void display()
    {
        cout<<"Villa name is: "<<v_name<<endl;
        cout<<"Villa number is: "<<v_no<<endl;
        Property::display();
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
};

class Lands:public Property{
private:
    int l_no;
    string l_name;
public:
    Lands(int l_no=1,string l_name="",string type="Lands",string p_no="9000000000",int price=5789000,int status=0):Property(type,p_no,price,status)
    {
        this->l_no=l_no;
        this->l_name=l_name;
    }
    
    void setLand(int l_no,string l_name,string type,string p_no,int price)
    {
        this->l_no=l_no;
        this->l_name=l_name;
        Property::addProperty(type, p_no, price);

    }
    
    void display()
    {
        cout<<"Land name is: "<<l_name<<endl;
        cout<<"Land number is: "<<l_no<<endl;
        Property::display();
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
};

class twoBHK:public Flats{
private:
    string owner_name;
    string desc;
public:
    twoBHK(string owner_name="AAA",string desc="...",int f_no=1,string f_name="",string type="Flats:2bhk",string p_no="9000000000",int price=5789000,int status=0):Flats(f_no,f_name,type,p_no,price,status)
    {
        this->owner_name=owner_name;
        this->desc=desc;
    }
    
    void settwoBHK(string owner_name,string desc,int f_no,string f_name,string type,string p_no,int price)
    {
        this->owner_name=owner_name;
        this->desc=desc;
        Flats::setFlats(f_no, f_name, type, p_no, price);
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
    
    void displaytwoBhk()
    {
        cout<<"Owner name is: "<<owner_name<<endl;
        cout<<"About: "<<desc<<endl;
        Flats::display();

    }
};

class threeBHK:public Flats{
private:
    string owner_name;
    string desc;
public:
    threeBHK(string owner_name="AAA",string desc="...",int f_no=1,string f_name="",string type="Flats:3bhk",string p_no="9000000000",int price=5789000,int status=0):Flats(f_no,f_name,type,p_no,price,status)
    {
        this->owner_name=owner_name;
        this->desc=desc;
    }
    
    void setthreeBHK(string owner_name,string desc,int f_no,string f_name,string type,string p_no,int price)
    {
        this->owner_name=owner_name;
        this->desc=desc;
        Flats::setFlats(f_no, f_name, type, p_no, price);
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
    
    void displaythreeBhk()
    {
        cout<<"Owner name is: "<<owner_name<<endl;
        cout<<"About: "<<desc<<endl;
        Flats::display();

    }
};

class fourBHK:public Flats{
private:
    string owner_name;
    string desc;
public:
    fourBHK(string owner_name="AAA",string desc="...",int f_no=1,string f_name="",string type="Flats:4bhk",string p_no="9000000000",int price=5789000,int status=0):Flats(f_no,f_name,type,p_no,price,status)
    {
        this->owner_name=owner_name;
        this->desc=desc;
    }
    
    void setfourBHK(string owner_name,string desc,int f_no,string f_name,string type,string p_no,int price)
    {
        this->owner_name=owner_name;
        this->desc=desc;
        Flats::setFlats(f_no, f_name, type, p_no, price);
    }
    
    void booking()
    {
        Property::setstatus(1);
    }
    
    void displayfourBhk()
    {
        cout<<"Owner name is: "<<owner_name<<endl;
        cout<<"About: "<<desc<<endl;
        Flats::display();
    }
};

class Buyer{
private:
    string buyername;
    int buyerid;
    string buyeradd;
    string buyerno;
public:
    static int buyers;
    
    void addbuyer(string na,int i,string add,string no)
    {
        buyername=na;
        buyerid=i;
        buyeradd=add;
        buyerno=no;
        buyers++;
    }
    
    void displayBuyer()
    {
        cout<<"Buyer name: "<<buyername<<endl;
        cout<<"Buyer id: "<<buyerid<<endl;
        cout<<"Buyer Address: "<<buyeradd<<endl;
        cout<<"Buyer Mobile No.: "<<buyerno<<endl;;
    }
    
    void Buyernumber()
    {
        cout<<"Total number of buyers = "<<buyers<<endl;
    }
};

int Buyer::buyers=0;

class priviledged:public Buyer{
private:
    int couponid;
    int discount=10;
public:
    int redeemdiscount()
    {
        return discount;
    }
};

class unpriviledged:public Buyer{
private:
    int couponid;
    int discount=0;
public:
    int redeemdiscount()
    {
        return discount;
    }
};

class Seller{
private:
    string sellername;
    int sellerid;
    string selleradd;
    string sellerno;
    int pr[100];
    int n;
public:
    void setSeller(string sellername,int sellerid,string selleradd,string sellerno)
    {
        this->sellername=sellername;
        this->sellerid=sellerid;
        this->selleradd=selleradd;
        this->sellerno=sellerno;
    }
    
    void setProperties()
    {
        int pp_id;
        cout<<"Number of Properties to add for this seller: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter property number for this seller: ";
            cin>>pp_id;
            pr[i] = pp_id;
        }
    }
    
    void displayProperties()
    {
        cout<<"Property Numbers that this seller have: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Property Numbers: "<<pr[i]<<endl;
        }
    }
    
    void displaySeller()
    {
        cout<<"Seller name: "<<sellername<<endl;
        cout<<"Seller id: "<<sellerid<<endl;
        cout<<"Seller Address: "<<selleradd<<endl;
        cout<<"Seller Mobile No.: "<<sellerno<<endl;;
    }
};

class Agent{
private:
    string agentname;
    int agentid;
    int z=0,x=0,y=0;
    string agentadd;
    string agentno;
    Property p[1000];
    Buyer bu[1000];
    Seller sel[1000];
    int login_id;
    int pass;
public:
    Agent(string agentname="Abc",int agentid=1,string agentadd="India",string agentno="9878909876")
    {
        this->agentadd=agentadd;
        this->agentid=agentid;
        this->agentname=agentname;
        this->agentno=agentno;
    }
    void updateAgent(string agentname,int agentid,string agentadd,string agentno)
    {
        this->agentadd=agentadd;
        this->agentid=agentid;
        this->agentname=agentname;
        this->agentno=agentno;
    }
    
    void displayAgent()
    {
        cout<<"Agent name: "<<agentname<<endl;
        cout<<"Agent id: "<<agentid<<endl;
        cout<<"Agent Address: "<<agentadd<<endl;
        cout<<"Agent Mobile No.: "<<agentno<<endl;;
    }
    
    void addProperty(string type,string p_no,int price)
    {
        p[x].addProperty(type, p_no, price);
        p[x].setstatus(0);
        x++;
    }
    
    void addBuyer(string na,int i,string add,string no)
    {
        bu[y].addbuyer(na, i, add, no);
        y++;
    }
    
    void addSeller(string sellername,int sellerid,string selleradd,string sellerno)
    {
        sel[z].setSeller(sellername,sellerid,selleradd,sellerno);
        sel[z].setProperties();
        z++;
    }
    
    void displaysellersproperties()
    {
        int id;
        cout<<"enter the seller id: ";
        cin>>id;
        sel[id].displayProperties();
    }
    
    void sellProperty()
    {
        int pn;
        cout<<"Enter the property number index to be sold: ";
        cin>>pn;
        p[pn].setstatus(1);
    }
    
    void setAgents(int login_id,int pass)
    {
        this->login_id=login_id;
        this->pass=pass;
    }
    
    int confirmAgent(int l,int pas)
    {
        if(login_id==l && pass==pas)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Agent a;
    a.updateAgent("Dev", 1, "India", "8987678098");
    a.setAgents(123, 123);
    
    Buildings b[100];
    Flats f[300];
    Villas v[100];
    Lands l[100];
    twoBHK tb[100];
    threeBHK thb[100];
    fourBHK fb[100];
    priviledged p;
    unpriviledged up;
    int login_id=123;
    int pass=123;
    int alid;
    int apass;
    
    cout<<"Enter your login_id: ";
    cin>>alid;
    cout<<"Enter your password: ";
    cin>>apass;
    if(login_id==alid && pass == apass)
    {
        int n,n1;
        int b1=1,v1=1,l1=1,tbb1=1,thbb1=1,fbb1=1;
        int b2,b3,b4;
        int v2,v3,v4;
        int l2,l3,l4;
        int f2,f3,f4,f5;
        while(1)
        {
            

            cout<<"Enter \n1->Add/Display/sell\n2->Agents/buyers/sellers\n";
            cin>>n;
            if(n==1)
            {
                cout<<"Enter if the property is:\n1->Buildings\n2->Villas\n3->Lands\n4->Flats\n"<<endl;
                cin>>n1;
                if(n1==1)
                {
                    cout<<"Enter: \n1->Add building\n2->Display Building\n3->Update Booking Buiding status.";
                    cin>>b2;
                    int b_no;
                    string b_name;
                    string type;
                    string p_no;
                    int price;
                    switch (b2) {
                        case 1:
                            cout<<"enter Buildings number: ";
                            cin>>b_no;
                            cout<<"enter Buildings name: ";
                            cin>>b_name;
                            cout<<"Enter Buildings phone number";
                            cin>>p_no;
                            cout<<"Enter price: ";
                            cin>>price;
                            type="Buildings";
                            b[b1].setBuildings(b_no,b_name,type,p_no,price);
                            b1++;
                            break;
                        case 2:
                            cout<<"Enter index of building to get its details.\n";
                            cin>>b3;
                            b[b3].display();
                            break;
                            
                        case 3:
                            cout<<"Enter building index to book it: ";
                            cin>>b4;
                            b[b4].booking();
                            
                        default: cout<<"Choose the correct option.";
                            break;
                    }
                }
                else if(n1==2)
                {
                    cout<<"Enter: \n1->Add Villas\n2->Display Villas\n3->Update Booking Villas status.";
                    cin>>v2;
                    int v_no;
                    string v_name;
                    string type;
                    string p_no;
                    int price;
                    switch (v2) {
                        case 1:
                            cout<<"enter Villas number: ";
                            cin>>v_no;
                            cout<<"enter Villas name: ";
                            cin>>v_name;
                            cout<<"Enter Villas phone number";
                            cin>>v_no;
                            cout<<"Enter price: ";
                            cin>>price;
                            type="Buildings";
                            v[v1].setVillas(v_no,v_name,type,p_no,price);
                            v1++;
                            break;
                        case 2:
                            cout<<"Enter index of Villas to get its details.\n";
                            cin>>v3;
                            v[v3].display();
                            break;
                            
                        case 3:
                            cout<<"Enter Villas index to book it: ";
                            cin>>v4;
                            v[v4].booking();
                            
                        default: cout<<"Choose the correct option.";
                            break;
                    }
                }
                
                else if(n1==3)
                {
                    cout<<"Enter: \n1->Add Lands\n2->Display Lands\n3->Update Booking Lands status.";
                    cin>>l2;
                    int l_no;
                    string l_name;
                    string type;
                    string p_no;
                    int price;
                    switch (l2) {
                        case 1:
                            cout<<"enter Lands number: ";
                            cin>>l_no;
                            cout<<"enter Lands name: ";
                            cin>>l_name;
                            cout<<"Enter Lands phone number";
                            cin>>l_no;
                            cout<<"Enter price: ";
                            cin>>price;
                            type="Lands";
                            l[l1].setLand(l_no,l_name,type,p_no,price);
                            l1++;
                            break;
                        case 2:
                            cout<<"Enter index of Lands to get its details.\n";
                            cin>>l3;
                            l[l3].display();
                            break;
                            
                        case 3:
                            cout<<"Enter Lands index to book it: ";
                            cin>>l4;
                            l[l4].booking();
                            
                        default: cout<<"Choose the correct option.";
                            break;
                    }
                }
                
                else if(n1==4)
                {
                    cout<<"Enter: \n1->Add 2bhk\n2->set 3bhk\n3->set 4bhk\n";
                    cin>>f2;
                    if(f2==1)
                    {
                        cout<<"Enter: \n1->Add 2bhk\n2->display 2bhk\n3->book 2bhk";
                        cin>>f3;
                        int f_no;
                        string owner_name;
                        string desc;
                        string f_name;
                        string type;
                        string p_no;
                        int price;
                        switch (f3) {
                            case 1:
                                cout<<"Enter owners name: ";
                                cin>>owner_name;
                                cout<<"Enter desc";
                                cin>>desc;
                                cout<<"enter Lands number: ";
                                cin>>f_no;
                                cout<<"enter Lands name: ";
                                cin>>f_name;
                                cout<<"Enter Lands phone number";
                                cin>>f_no;
                                cout<<"Enter price: ";
                                cin>>price;
                                type="Lands";
                                tb[tbb1].settwoBHK(owner_name,desc,f_no,f_name,type,p_no,price);
                                tbb1++;
                                break;
                            case 2:
                                cout<<"Enter index of 2bhk to get its details.\n";
                                cin>>f4;
                                tb[f4].displaytwoBhk();
                                break;
                                
                            case 3:
                                cout<<"Enter 2bhk index to book it: ";
                                cin>>f5;
                                tb[f5].booking();
                                
                            default: cout<<"Choose the correct option.";
                                break;
                        }
                    }
                    else if(f2==2)
                    {
                        cout<<"Enter: \n1->Set 3bhk\n2->display 3bhk\n3->book 3bhk";
                        cin>>f3;
                        int f_no;
                        string owner_name;
                        string desc;
                        string f_name;
                        string type;
                        string p_no;
                        int price;
                        switch (f3) {
                            case 1:
                                cout<<"Enter owners name: ";
                                cin>>owner_name;
                                cout<<"Enter desc";
                                cin>>desc;
                                cout<<"enter Lands number: ";
                                cin>>f_no;
                                cout<<"enter Lands name: ";
                                cin>>f_name;
                                cout<<"Enter Lands phone number";
                                cin>>f_no;
                                cout<<"Enter price: ";
                                cin>>price;
                                type="Lands";
                                thb[thbb1].setthreeBHK(owner_name,desc,f_no,f_name,type,p_no,price);
                                thbb1++;
                                break;
                            case 2:
                                cout<<"Enter index of 2bhk to get its details.\n";
                                cin>>f4;
                                thb[f4].displaythreeBhk();
                                break;
                                
                            case 3:
                                cout<<"Enter 2bhk index to book it: ";
                                cin>>f5;
                                thb[f5].booking();
                                
                            default: cout<<"Choose the correct option.";
                                break;
                        }
                    }
                    else if(f2==3)
                    {
                        cout<<"Enter: \n1->Set 4bhk\n2->display 4bhk\n3->book 4bhk";
                        cin>>f3;
                        int f_no;
                        string owner_name;
                        string desc;
                        string f_name;
                        string type;
                        string p_no;
                        int price;
                        switch (f3) {
                            case 1:
                                cout<<"Enter owners name: ";
                                cin>>owner_name;
                                cout<<"Enter desc";
                                cin>>desc;
                                cout<<"enter Lands number: ";
                                cin>>f_no;
                                cout<<"enter Lands name: ";
                                cin>>f_name;
                                cout<<"Enter Lands phone number";
                                cin>>f_no;
                                cout<<"Enter price: ";
                                cin>>price;
                                type="Lands";
                                fb[fbb1].setfourBHK(owner_name,desc,f_no,f_name,type,p_no,price);
                                fbb1++;
                                break;
                            case 2:
                                cout<<"Enter index of 2bhk to get its details.\n";
                                cin>>f4;
                                fb[f4].displayfourBhk();
                                break;
                                
                            case 3:
                                cout<<"Enter 2bhk index to book it: ";
                                cin>>f5;
                                fb[f5].booking();
                                
                            default: cout<<"Choose the correct option.";
                                break;
                        }
                    }
                    else
                        cout<<"Enter the correct choice.\n";
                }
            }
            else if (n==2)
            {
                int aaa;
                cout<<"Enter:\n1->Update Agent\n2->Display Agent\n3->addProperty\n4->addBuyer\n5->addSeller\n6->displaySellersProperties\n7->sellProperty\n8->setAgentCredentials\n";
                cin>>aaa;
                string agentname;
                int agentid;
                string agentadd;
                string agentno;
                string type;
                string p_no;
                int price;
                string na;
                int i;
                string add;
                string no;
                string sellername;
                int sellerid;
                string selleradd;
                string sellerno;
                switch (aaa) {
                    case 1:
                        cout<<"Enter Agent name: ";
                        cin>>agentname;
                        cout<<"Enter Agent ID: ";
                        cin>>agentid;
                        cout<<"Enter Agent Address: ";
                        cin>>agentadd;
                        cout<<"Enter Agent mobile number: ";
                        cin>>agentno;
                        a.updateAgent(agentname,agentid,agentadd,agentno);
                        break;
                    case 2:
                        a.displayAgent();
                        break;
                    case 3:
                        cout<<"Enter the property type(Buildings/Villas/Flats/Lands): ";
                        cin>>type;
                        cout<<"Enter phone number for property: ";
                        cin>>p_no;
                        cout<<"Enter property price: ";
                        cin>>price;
                        a.addProperty(type,p_no,price);
                        break;
                    case 4:
                        cout<<"Enter buyer's name: ";
                        cin>>na;
                        cout<<"Enter buyer id: ";
                        cin>>i;
                        cout<<"Enter Address: ";
                        cin>>add;
                        cout<<"Enter buyer Contact number: ";
                        cin>>no;
                        a.addBuyer(na,i,add,no);
                        break;
                    case 5:
                        cout<<"Enter seller name: ";
                        cin>>sellername;
                        cout<<"Enter seller id: ";
                        cin>>sellerid;
                        cout<<"Enter seller address: ";
                        cin>>selleradd;
                        cout<<"Enter seller contact number: ";
                        cin>>sellerno;
                        a.addSeller(sellername,sellerid,selleradd,sellerno);
                        break;
                    case 6:
                        a.displaysellersproperties();
                        break;
                    case 7:
                        a.sellProperty();
                        break;
                    case 8:
                        cout<<"Enter login id: ";
                        cin>>login_id;
                        cout<<"enter password: ";
                        cin>>pass;
                        a.setAgents(login_id,pass);
                        break;
                    
                    default: cout<<"Enter the correct choice!\n";
                        break;
                }
            }
            else
                cout<<"Choose the correct option."<<endl;
                
        }
    }
    else
        cout<<"Your username or password is wrong.\n";
}
