#include <iostream>
#include <cstdlib>

using namespace std;

int BUSCAR(int Matriz[4][3])
{
   int i, j;
   int Valor1,Valor2;

    cout<<"--------------------------------------------- Introduzca unicamente 0 & 1 ---------------------------------------------"<<endl;
		cout<<"Ingresa el Valor 1:"<<endl;
		cin>>Valor1;
		cout<<endl;
		cout<<"Ingresa el Valor 2:"<<endl;
		cin>>Valor2;
		cout<<endl;

        if (Valor1 == 0 || Valor1 == 1 && Valor2 == 0 || Valor2 == 1)
        {
            for (i=0; i<=3; i++)
            {
                if (Valor1 == Matriz[i][0] && Valor2 == Matriz [i][1])
                {
                    for (j=0; j<=2; j++)
                    {
                        cout<<Matriz [i][j]<<"|";
                    }
                    cout<<"<<<<";
                }
                else
                {
                    for (j=0; j<=2; j++)
                    {
                        cout<<Matriz [i][j]<<"|";
                    }
                }
                cout<<endl;
            }
                cout<<"El resultado es: " << Matriz[Valor2*2 + Valor1][2]<<endl;
        }
        else
        {
            cout << "\t\t\t\t 같같같같� I N T E N T E    D E    N U E V O 같같같같�"<< endl << endl;
        }
    return 0;
}

int main()
{

  int Opcion;

   while(Opcion != 7)
   {
	   cout<<"***************************************************Elija una opcion***************************************************"<<endl;
	   cout<<"\t\t\t1. AND\n"<<"\t\t\t2. OR\n"<<"\t\t\t3. NAND\n"<<"\t\t\t4. NOR\n"<<"\t\t\t5. XOR\n"<<"\t\t\t6. XNOR\n"<<"\t\t\t7. SALIR\n"<<endl;
	   cin>>Opcion;

		   switch(Opcion)
		   {
				case 1: cout<<"\t\t\t\tHaz elejido la Tabla AND"<<endl;
					break;

				case 2: cout<<"\t\t\t\tHaz elejido la Tabla OR"<<endl;
					break;

				case 3: cout<<"\t\t\t\tHaz elejido la Tabla NAND"<<endl;
					break;

				case 4: cout<<"\t\t\t\tHaz elejido la Tabla NOR"<<endl;
					break;

				case 5: cout<<"\t\t\t\tHaz elejido la Tabla XOR"<<endl;
					break;

				case 6: cout<<"\t\t\t\tHaz elejido la Tabla XNOR"<<endl;
					break;

				case 7: exit(0);
					break;

				default: cout<<"\t\t O P C I O N    E R R O N E A"<<endl;
		   }
			cout<<endl;

			int Tabla_AND[4][3]={
			{0,0,0},
			{0,1,0},
			{1,0,0},
			{1,1,1},
								};
			int Tabla_OR[4][3]={
			{0,0,0},
			{0,1,1},
			{1,0,1},
			{1,1,1},
							  };
		   int Tabla_NAND[4][3]={
			{0,0,1},
			{0,1,1},
			{1,0,1},
			{1,1,0},
								};
		   int Tabla_NOR[4][3]={
			{0,0,1},
			{0,1,0},
			{1,0,0},
			{1,1,0},
								};

			int Tabla_XOR[4][3]={
			{0,0,0},
			{0,1,1},
			{1,0,1},
			{1,1,0},
								};

			int Tabla_XNOR[4][3]={
			{0,0,1},
			{0,1,0},
			{1,0,0},
			{1,1,1},
							   };
        switch(Opcion)
        {
            case 1: BUSCAR(Tabla_AND);
                break;

            case 2: BUSCAR(Tabla_OR);
                break;

            case 3: BUSCAR(Tabla_NAND);
                break;

            case 4: BUSCAR(Tabla_NOR);
                break;

            case 5: BUSCAR(Tabla_XOR);
                break;

            case 6: BUSCAR(Tabla_XNOR);
                break;
        }
   }
    return 0;
}
