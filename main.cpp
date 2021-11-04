#include <iostream>
#include <fstream>
#include <sstream>
#include "string.h"
#include "Pila.h"
#include <vector>
#include <list>

using namespace std;

/**
 * printArr Imprime el arreglo en pantalla.
 * @tparam *arr Arreglo que se desea imprimir.
 * @tparam size Tamaño del arreglo que se desea imprimir.
 */
void printArr(int *arr, int size)
{
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}


/**
 * Provincias_identado Se compara la provincia según el nombre y se le asigna un valor int que corresponde a la ID.
 * @tparam dato Nombre de la provincia.
 */
int Provincias_identado(string dato)
{
    switch (dato.size())
    {
                case 5:
                    if(dato=="Chaco"){     
                            return 1;
                        }
                    else if(dato=="Jujuy"){ 
                            return 2;
                        }
                    else{ 
                        return 3;
                        }
                break;

                case 7:
                    if(dato=="Córdoba"){
                            return 15 ;
                        }
                    else if(dato=="Formosa"){
                            return 5 ;
                        }
                    else if(dato=="Mendoza"){
                            return 0 ;
                        }
                    else{ 
                            return  7 ;
                        }   
                break;
                
                case 8:
                    if (dato=="La Pampa"){
                            return 8 ;
                            }
                    else if(dato=="La Rioja"){
                            return 9 ;
                            }
                    else if(dato=="Misiones"){
                            return 10 ;
                            }
                    else if(dato=="San Juan"){
                            return 11 ;
                            }
                    else if("San Luis"){
                            return 21 ;
                            }
                    else{
                            return 13 ;
                        }
                break;

                case 9:
                    if (dato=="Catamarca"){
                            return 14 ;
                            }
                    else{
                            return 22 ;
                        }
                break;

                case 10:
                    if(dato=="Corrientes"){
                            return 16;
                            }
                    else if (dato=="Entre Ríos"){
                            return 17 ;
                            }
                    else{
                            return  18 ;
                        }
                break;
                        
                case 16:
                    if(dato=="Tierra del Fuego"){
                            return 24 ;
                            }
                    else{
                            return 20 ;
                        }
                break;    
                    
            default:
                return dato.size();
                break;
    }              
    
}

/**
 * Provincias_nombre Se pasa el nombre de la provincia según la ID (está no corresponde al archivo .csv).
 * @tparam dato ID de la provincia (la ID no corresponde al archivo .csv).
 */
string Provincias_nombre(int dato){
    switch (dato)
            {
                case 1:     
                    return "Chaco";//3
                    break;
                case 2:        
                    return "Jujuy";//9
                    break;
                case 3:  
                    return "Salta";//16
                    break;
                case 15:
                    return "Córdoba";//5
                    break;
                case 5:
                    return "Formosa";//8
                    break;
                case 0:
                    return "Mendoza";//13
                    break;
                case 7:
                    return "Neuquén";//14
                    break;   
                case 8:
                    return "La Pampa";//10
                    break;
                case 9:
                    return "La Rioja";//11
                    break;
                case 10:
                    return "Misiones";//12
                    break;
                case 11:
                    return "San Juan";//17
                    break;
                case 21:
                    return "San Luis";//18
                    break;
                case 13:
                    return "Santa Fe";//20
                    break;
                case 14:
                    return "Catamarca";//2
                    break;
                case 22:
                    return "Río Negro";//15
                    break;
                case 16:
                    return "Corrientes";//6
                    break;
                case 17:
                    return "Entre Ríos";//7
                    break;
                case 18:
                    return "Santa Cruz";//19
                    break;      
                case 24:
                    return "Tierra del Fuego";//22
                    break;
                case 20:
                    return "Tucumán"; //23
                    break;    
                case 4:
                    return "CABA";//1
                    break;
                case 6:
                    return "Chubut";//4
                    break;
                case 12:
                    return "Buenos Aires"; //0
                    break;
                case 19:
                    return "Santiago del Estero";//21
                    break;
        }      
        
    return "404 - CODIGO DE PROVINCIA NO VALIDO";
}



/**
 * Alfabetico: Ordena alfabeticamente las provincias
 * @tparam dato ID de la provincia (id propia no corresponde al archivo .csv).
 */
string Alfabetico(int dato){
    switch (dato)
            {
                case 3:     
                     return"Chaco";//3
                    break;
                case 9:        
                     return "Jujuy";//9
                    break;
                case 16:  
                     return "Salta";//16
                    break;
                case 5:
                     return "Córdoba";//5
                    break;
                case 8:
                     return "Formosa";//8
                    break;
                case 13:
                     return "Mendoza";//13
                    break;
                case 14:
                     return "Neuquén";//14
                    break;   
                case 10:
                     return "La Pampa";//10
                    break;
                case 11:
                     return "La Rioja";//11
                    break;
                case 12:
                     return "Misiones";//12
                    break;
                case 17:
                     return "San Juan";//17
                    break;
                case 18:
                     return "San Luis";//18
                    break;
                case 20:
                     return "Santa Fe";//20
                    break;
                case 2:
                     return "Catamarca";//2
                    break;
                case 15:
                     return "Río Negro";//15
                    break;
                case 6:
                     return "Corrientes";//6
                    break;
                case 7:
                     return "Entre Ríos";//7
                    break;
                case 19:
                     return "Santa Cruz";//19
                    break;      
                case 22:
                     return "Tierra del Fuego";//22
                    break;
                case 23:
                     return "Tucumán"; //23
                    break;    
                case 1:
                     return "CABA";//1
                    break;
                case 4:
                     return "Chubut";//4
                    break;
                case 0:
                     return "Buenos Aires"; //0
                    break;
                case 21:
                    return "Santiago del Estero";//21
                    break;
        }      
        
    return "404 - CODIGO DE PROVINCIA NO VALIDO";
}

/**
 * fechas. Convierte la fecha string a un valor int.
 * @tparam fecha Fecha pasada en valor string formato XXXX-XX-XX.
 */
int  fechas(string fecha){

    int año,mes,dia;

    stringstream intaño(fecha.substr (0,4));
    stringstream intmes(fecha.substr (5,2));
    stringstream intdia(fecha.substr (8,2));
	intaño >> año;
    intmes >> mes;
    intdia >> dia;
    int valormes=0;
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    /*if(año%400==0)
    {
    meses[1]=29;

    }
    else{
        meses[1]=28;
    }*/
    for(int i=0; i<12; i++){
        valormes+=meses[i];
    }
    return año*365 +  valormes +  dia;
}


/**
 * quickSort
 * @tparam arr Arreglo a ordenar.
 * @tparam arr2 Arreglo auxiliar donde se mueve junto con el dato la posicion del nombre respectivo .
 * @tparam inicio Donde inicia el arreglo.
 * @tparam fin Donde termina el arreglo.
 */
void quickSort(int *arr, string *arr2, int inicio, int fin)
{
 
  int i, j, medio;
  int pivot, aux;
  string aux2;
  medio = (inicio + fin) / 2;
  pivot = arr[medio];
  i = inicio;
  j = fin;

  do
  {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;

    if (i <= j)
    {
      aux = arr[i];
      aux2 = arr2[i];
      arr[i] = arr[j];
      arr2[i] = arr2[j];
      arr[j] = aux;
      arr2[j] = aux2;
      i++;
      j--;
    }
  } while (i <= j);

  if (j > inicio){
    quickSort(arr,arr2, inicio, j);}
  if (i < fin){
    quickSort(arr,arr2, i, fin);}
}

/**
 * quickSort2
 * @tparam arr Arreglo a ordenar.
 * @tparam arr2 Arreglo auxiliar donde se guarda referencia numerica del cambio realizado en el arreglo arr.
 * @tparam inicio Donde inicia el arreglo.
 * @tparam fin Donde termina el arreglo.
 */
void quickSort2(int *arr, int *arr2, int inicio, int fin)
{
 
  int i, j, medio;
  int pivot, aux;
  int aux2;
  medio = (inicio + fin) / 2;
  pivot = arr[medio];
  i = inicio;
  j = fin;

  do
  {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;

    if (i <= j)
    {
      aux = arr[i];
      aux2 = arr2[i];
      arr[i] = arr[j];
      arr2[i] = arr2[j];
      arr[j] = aux;
      arr2[j] = aux2;
      i++;
      j--;
    }
  } while (i <= j);

  if (j > inicio){
    quickSort2(arr,arr2, inicio, j);}
  if (i < fin){
    quickSort2(arr,arr2, i, fin);}
}


/**
 * identadora: Clasifica las provincias.
 * @tparam dato Nombre de la Provincia.
 */
int identadora(string dato){
    
    int valor;
    stringstream valorr(dato);
    valorr>>valor;
    for (int i = 1; i < 11; i++)
    {
        if ((valor<=(i*10)) && ((i-1)*10<valor))
        {
            return i; 
        }  
    }
    return 0;  
}

/**
 * estad: Mostrará la información estadística.
 * @tparam fileName Nombre del Archivo .csv (debe estar en la misma carpeta que el .exe)
 */
void estad(string fileName)
{
    int Infectados_Rango_Etario[] ={0,0,0,0,0,0,0,0,0,0,0,0}; // 11
    int  Fallecidos_Rango_Etario[] ={0,0,0,0,0,0,0,0,0,0,0,0}; // 11
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [00] ID - [02] EDAD - [03] AÑOS.MESES - //
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);

    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    string line, word;
    int confirmed = 0,fallecidos=0;
    int total = -1,valor,ddd=0;

    while (getline(fin, line))
    {
        total++;
        row.clear();
        stringstream s(line);
        while (getline(s, word, ','))
        {
            if (word.size() > 0)
            {
                word = word.substr(1, word.size() - 2);
            }
            else
            {
                word = "NA";
            }
            row.push_back(word);
        }


        if (row[20].compare("Confirmado") == 0 || total==0)
        {

            confirmed++;
            Infectados_Rango_Etario[identadora(row[2])]++;
            if (row[14].compare("SI") == 0 || total==0)
            { 
                Fallecidos_Rango_Etario[identadora(row[2])]++;
                ddd++;
                fallecidos++;
            }
        }
    }
    float porcInfectadosMuestras = ((confirmed+0.0 )/ (total+0.0)) * 100;
    float porcFallecidosInfectados = ((fallecidos+0.0) / (confirmed+0.0)) * 100; 

    cout << "\n\t - Cantidad total de muestras        : "<< total;
    cout << "\n\t - Cantitad total de infectados      : " << confirmed << " de " << total << " casos registrados.";
    cout << "\n\t - Cantitad total de fallecidos      : " << fallecidos << " de " << total << " casos registrados.";
    cout << "\n\t - % de infectados sobre muestras    : " << porcInfectadosMuestras << " % ";
    cout << "\n\t - % de fallecidos sobre infectados  : " << porcFallecidosInfectados << " % ";
    
    for (int i = 1; i < 11; i++)
    {   cout<<"\n\t\tRango etario de ( "<< (i-1)*10 <<" - "<< i*10 <<" )";
        cout<<"\n\t - Infectados  : "<<Infectados_Rango_Etario[i];
        cout<<"\n\t - Fallecidos  : " <<Fallecidos_Rango_Etario[i];
    }
        cout<<"\n\t\t Rango etario No contemplado ";
        cout<<"\n\t - Infectados  : " <<Infectados_Rango_Etario[0];
        cout<<"\n\t - Fallecidos  : "<<Fallecidos_Rango_Etario[0];
   //// cout << "\n\t - Fallecidos por rango etario       : " << "NO ANDA CULINI";

}


/**
 * p_muertes: Mostrará las n provincias con más muertes ordenadas de más a menos. Si n no es pasado, se mostrarán todas las provincias.
 * @tparam fileName Nombre del Archivo .csv (debe estar en la misma carpeta que el .exe)
 * @tparam prov Valor que de ser introducido por el usuario equivale a la cantidad de provincias que se van a mostrar, si no fue introducido se muestran todas las provincias que tengan muertes. [Provincias con 0 muertes no se muestran para que sea mas facil leer los datos.]
 */
void p_muertes(string fileName, string prov){
    
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [17] PROV.ID - [20] CASOS.CONFIRM - //   0, 2, 3, 12, 13, 14
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);
    int      arregloprovincias[]={0,0,0,0,0,0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //25
    int arregloprovinciascopio[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22}; //25

    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    string line, word;
    int total=-1;
    while (getline(fin, line))
    {
        total++;
        row.clear();
        stringstream s(line);
        while (getline(s, word, ','))
        {
            if (word.size() > 0)
            {
                word = word.substr(1, word.size() - 2);
            }
            else
            {
                word = "NA";
            }
            row.push_back(word);
        }

        
        if (row[20].compare("Confirmado") == 0 || total==0)
        {   
            string dato=row[5];                         //Columna de Provincias
            if (row[14].compare("SI") == 0 || total==0){
                arregloprovincias[Provincias_identado(dato)]++;
            }
             
        }
    }

    int valor;
    stringstream valorr(prov);
    valorr>>valor;
    ;
    quickSort2(arregloprovincias,arregloprovinciascopio, 0, 23);
    
    cout <<endl<<"Provincias ordenadas por Fallecidos: " <<endl<<endl;
    for (int i = 23; i > 23-valor; i--){ 
        cout <<Provincias_nombre(arregloprovinciascopio[i])<< " Cantidad de Fallecidos: "<<arregloprovincias[i]<<endl;
    }
}

/**
 * p_casos: Mostrará las n primeras provincias con más contagios ordenadasde más a menos. Si n no es pasado, se mostrarán todas las provincias.
 * @tparam fileName Nombre del Archivo .csv (debe estar en la misma carpeta que el .exe)
 * @tparam prov Valor que de ser introducido por el usuario equivale a la cantidad de provincias que se van a mostrar, si no fue introducido se muestran todas las provincias
 */
void p_casos(string fileName, string prov){
    
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [17] PROV.ID - [20] CASOS.CONFIRM - //   0, 2, 3, 12, 13, 14
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);
    int      arregloprovincias[]={0,0,0,0,0,0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0}; //25
    string arregloprovinciascopio[]= { "Mendoza", "Chaco", "Jujuy", "Salta", "CABA", "Formosa", "Chubut", "Neuquén", "La Pampa", "La Rioja","Misiones","San Juan","Buenos Aires","Santa Fe","Catamarca","Córdoba","Corrientes","Entre Ríos","Santa Cruz","Santiago del Estero","Tucumán","San Luis", "Río Negro", "404 - CODIGO DE PROVINCIA NO VALIDO", "Tucumán"}; //25

    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    string line, word;
    int total=-1;
    while (getline(fin, line))
    {
        total++;
        row.clear();
        stringstream s(line);
        while (getline(s, word, ','))
        {
            if (word.size() > 0)
            {
                word = word.substr(1, word.size() - 2);
            }
            else
            {
                word = "NA";
            }
            row.push_back(word);
        }

        
        if (row[20].compare("Confirmado") == 0 || total==0)
        {   
            string dato=row[5];                         //Columna de Provincias
        
            arregloprovincias[Provincias_identado(dato)]++; 
        }
    }
    int valor;
    stringstream valorr(prov);
    valorr  >>valor;
    for (int i = 0; i < 24; i++){
        
            cout<<Provincias_nombre(i)<<endl;
        }
    quickSort(arregloprovincias,arregloprovinciascopio, 0, 23);
    
    cout <<endl<<"Provincias ordenadas por casos: " <<endl<<endl;
    for (int i = 23; i > 23-valor; i--){ //signos re-invertidos
        cout <<arregloprovinciascopio[i]<< " Cantidad de casos: "<<arregloprovincias[i]<<endl;
        
    }
}


/**
 * casos_cui: Mostrará los datos de los casos que estuvieron en cuidados intensivos ordenados por fecha de cuidados intensivos,si fecha está indicada, se mostrarán solo las fechas mayores a esta.
 * @tparam fileName Nombre del Archivo .csv (debe estar en la misma carpeta que el .exe)
 * @tparam prov Valor introducido por el usuario equivale a la fecha a partir de las cuales se van a mostrar los datos.
 */
void casos_cui(string fileName, string prov){
    
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [17] PROV.ID - [20] CASOS.CONFIRM - //   0, 2, 3, 12, 13, 14
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);
         
    int  fecha_base=fechas(prov);
    
    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    Pila<string> listadaatos;
    Pila<int> valor_fecha;
    string* miarray= new string[row.size()]; ////asd
    string line, word;
    int total=-1;
    
    while (getline(fin, line))
    {
        string filaa=" ";
        int  lafecha;
        
        row.clear();
        stringstream s(line);
        while (getline(s, word, ','))
        {
            
            if (word.size() > 0)
            {
                word = word.substr(1, word.size() - 2);
            }
            else
            {
                word = "NA";
            }
            row.push_back(word);
        }

        if(row[13]!="NA"){   
            try
            {
                lafecha=fechas(row[13]);

                if (fecha_base<lafecha )
                {  
                    
                    for (int i = 0; i < row.size(); i++){    //Columna de Provincias
                        filaa+=row[i]+" "; 
                    } 
                    total++;
                    listadaatos.push(filaa);
                    valor_fecha.push(lafecha);
                                         
                }
                
            }
            catch(...)
            {
                
            }   
        }
    }
   
    if (total==-1){
        cout<<"Ningun caso cui";
        return;
    }
    int* valor_fechaarr= new int[total];
    string* listadaatosarr= new string[total];
    for (int i = 0; i < total; i++){

        valor_fechaarr[i]=valor_fecha.pop();

        listadaatosarr[i]=listadaatos.pop();

    }
    
    quickSort(valor_fechaarr,listadaatosarr, 0, total-1);
    
    cout <<endl<<"Provincias ordenadas por casos: " <<endl<<endl;
    for (int i = total-1; i > 0; i--){ 

        cout <<listadaatosarr[i] <<endl<<endl;
        
    }
}

/**
 * casos_edad: Mostrará los datos de los casos donde la edad sea ‘años’ (ordenados por nombre de provincia).
 * @tparam fileName Nombre del Archivo .csv (debe estar en la misma carpeta que el .exe)
 * @tparam prov Valor introducido por el usuario equivale a la edad a partir de las cuales se van a mostrar los datos ordenados por provincia.
 */
void casos_edad(string fileName, string prov){
    
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [17] PROV.ID - [20] CASOS.CONFIRM - //   0, 2, 3, 12, 13, 14
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);
    Pila<string> listadaatos;
    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    string line, word;
    int total=0;
    while (getline(fin, line))
    {
        
        row.clear();
        string filaa="";
        stringstream s(line);
        while (getline(s, word, ','))
        {
            if (word.size() > 0)
            {
                word = word.substr(1, word.size() - 2);
            }
            else
            {
                word = "NA";
            }
            row.push_back(word);
        }

        
        if (row[20].compare("Confirmado") == 0 || total==0)
        {      
            if (row[2] == prov)
            { 
                for (int i = 0; i < row.size(); i++){    //Columna de Provincias
                        filaa+=row[i]+" "; 
                    } 
                listadaatos.push(filaa);
                listadaatos.push(row[5]);
                total++;
                //arregloprovincias[Provincias_identado(row[5])]+="\n"+filaa; 
                 
            }
               
        }
    }
    if (total==-1){
        cout<<"Ningun caso cui";
        return;
    }
    
    string* listadaatospila= new string[total];
    string* listadaatosarr= new string[total];
    
    for (int i = 0; i < total; i++){
        
        listadaatospila[i]= listadaatos.pop();
        
        listadaatosarr[i]= listadaatos.pop();
    }
    int valor;
    stringstream valorr(prov);
    valorr  >>valor;
    cout <<endl<<"Datos de edad igual a "<<prov<< " ordenadas por Provincias:"<<endl;
    for (int i = 0; i < 23; i++){ 
        string nombre=Alfabetico(i);
        cout << nombre  <<": "<<endl;
        for(int j = 0; j < total; j++){ 
            if(listadaatospila[j]==nombre){  //evitaa  imprimir muertes =0
                cout << listadaatosarr[ j ]<<endl;
            }
        }
    }
}

int main(int argc, char **argv)
{
    cout << "Cantidad de argumentos: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argumento " << i << ": " << argv[i] << endl;
        

        if(strcmp(argv[i], "-file") == 0){
            cout << "Nombre del Archivo: " << argv[i+1] << endl; 

        }

        if(strcmp(argv[i+2], "-estad") == 0){   
            estad(argv[i+1]);                       
            break;
        }
        
        if(strcmp(argv[i+2], "-p_casos") == 0){  
            try{
                p_casos(argv[i+1], argv[i+3]);  
                break;
             }
             catch(...){                     // De esta forma el usuario al ingresar mal la cantidad de provincias, imprime todas las provincias.
                 p_casos(argv[i+1], "23");
                 break;
             }
        }

        if(strcmp(argv[i+2], "-p_muertes") == 0){  
            try{
                p_muertes(argv[i+1], argv[i+3]);
                break;
             }
             catch(...){                     // De esta forma el usuario al ingresar mal la cantidad de provincias, imprime todas las provincias.
                 p_muertes(argv[i+1], "23");
                 break;
             }
        }
        
        if(strcmp(argv[i+2], "-casos_edad") == 0){  
            try{
                casos_edad(argv[i+1], argv[i+3]);
                break;
             }
             catch(...){                     // De esta forma el usuario al ingresar mal la cantidad de años no se ejecuta nada.
                cout<<"\n\n\t\t No se a introducido una edad valida.\n\n";
                break;
             }
            }
        if(strcmp(argv[i+2], "-casos_cui") == 0){  
            
            try{
                casos_cui(argv[i+1], argv[i+3]);
                break;
             }
             catch(...){                     // De esta forma el usuario al ingresar mal la cantidad de años no se ejecuta nada.
                cout<<"\n\n\t\t No se a introducido una Fecha o la misma no pose un formato valido se utilizara 1001-03-02 como fecha.\n\n";
                casos_cui(argv[i+1], "1001-03-02");
                break;
             
            }
        }
    }
    return 0;
}

// g++ main.cpp -o covid19
// ./covid19.exe -file Covid19Casos1000.csv
