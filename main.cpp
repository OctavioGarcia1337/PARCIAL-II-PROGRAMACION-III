#include <iostream>
#include <fstream>
#include <sstream>
#include "string.h"
//#include "/Arbol-master/ArbolBinarioAVL.h"
#include <vector>

using namespace std;

void printArr(int *arr, int size)
{
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
bool fecha(string fecha,string  base){           //0000-00-00
    int año,mes,dia,baño,bmes,bdia;

    stringstream intaño(fecha.substr (0,4));
    stringstream intmes(fecha.substr (5,2));
    stringstream intdia(fecha.substr (8,2));
	intaño >> año;
    intmes >> mes;
    intdia >> dia;

    stringstream intbaño(base.substr (0,4));
    stringstream intbmes(base.substr (5,2));
    stringstream intbdia(base.substr (8,2));
	intbaño >> baño;
    intbmes >> bmes;
    intbdia >> bdia;

    if(año<=baño){
        if(mes<=bmes){
            if(dia<=bdia){
                return true;
            }
        }
    }
    return false;

}
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

string Provincias_nombre(int dato)
{
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
string Alfabetico(int dato)
{
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

void quickSort(int *arr,int *arr2, int inicio, int fin)
{
  int i, j, medio,orden[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int pivot, aux,aux2;

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



int identadora(string dato){
    int valor;
    for (int i = 0; i < 100; i++){
            if(dato==to_string(i))
            {
                valor=i;
                break;
            }
        }
        for (int i = 1; i < 11; i++)
        {
            if ((valor<=(i*10)) && ((i-1)*10<valor))
            {
                return i; 
            }  
        }
    return 0;  
}

void chopCSV(string fileName, int lines){
    
    string newName = fileName.substr(0, fileName.find(".csv"));
    newName += to_string(lines) + ".csv";

    fstream fin, fout;
    fin.open("./" + fileName, ios::in);
    fout.open("./" + newName, ios::out);

    string line, word;
    for (int i = 0; i < lines; i++)
    {
        getline(fin, line);
        fout << line << "\n";
    }
}

/* ESTADISTICA
*       [R]     Cantidad total de muestras.
*       [R]     Cantidad total de infectados.
*       [R]     Cantidad total de fallecidos.
*       [R]     % de infectados sobre muestras.
*       [R]     % de fallecidos sobre infectados.
*       [R]     Cantidad de infectados ( rango de 10 años ).
*       [R]     Fallecidos de muertes ( rango de 10 años ).
*/

void exploreCSV(string fileName)
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
            /*for (int i = 0; i < nColumns; i++)
            {
                cout << row[colsOfInterest[i]] << " ";
            }*/
            confirmed++;
            Infectados_Rango_Etario[identadora(row[2])]++;
            if (row[14].compare("SI") == 0 || total==0)
            { 
                Fallecidos_Rango_Etario[identadora(row[2])]++;
                ddd++;
                fallecidos++;
            }
            //cout << endl;
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
             
            //arregloprovinciascopio[Provincias_identado(dato)]++;    
        }
    }
    int valor=0;
    for (int i = 0; i < 100; i++){
            if(prov==to_string(i))
            {
                valor=i;
                
                break;
            }
        }
    
    ;
    quickSort(arregloprovincias,arregloprovinciascopio, 0, 23);
    
    cout <<endl<<"Provincias ordenadas por Fallecidos: " <<endl<<endl;
    for (int i = 23; i > 23-valor; i--){ //signos re-invertidos
        cout <<Provincias_nombre(arregloprovinciascopio[i])<< " Cantidad de Fallecidos: "<<arregloprovincias[i]<<endl;
    }
}

void p_casos(string fileName, string prov){
    
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
        
            arregloprovincias[Provincias_identado(dato)]++; 
            //arregloprovinciascopio[Provincias_identado(dato)]++;    
        }
    }
    int valor=0;
    for (int i = 0; i < 100; i++){
            if(prov==to_string(i))
            {
                valor=i;
                
                break;
            }
        }
    
    quickSort(arregloprovincias,arregloprovinciascopio, 0, 23);
    
    cout <<endl<<"Provincias ordenadas por casos: " <<endl<<endl;
    for (int i = 23; i > 23-valor; i--){ //signos re-invertidos
        cout <<Provincias_nombre(arregloprovinciascopio[i])<< " Cantidad de casos: "<<arregloprovincias[i]<<endl;
        
    }
}

void casos_cui(string fileName, string prov){
    
    int colsOfInterest[] = {0, 2, 3, 12, 13, 14, 17, 20}; // [17] PROV.ID - [20] CASOS.CONFIRM - //   0, 2, 3, 12, 13, 14
    int nColumns = sizeof(colsOfInterest) / sizeof(colsOfInterest[0]);
         

    fstream fin;
    fin.open("./" + fileName, ios::in);

    vector<string> row;
    string line, word;
    int total=-1;
    while (getline(fin, line))
    {
        string filaa="";
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

        
        if (fecha(prov,row[13]))
        {  
            for (int i = 0; i < 24; i++){    //Columna de Provincias
                filaa+=row[i]; 
            } 
            //acaa  se agrega  la piila 
                                      
        }
    }
    int valor=0;
    for (int i = 0; i < 100; i++){
            if(prov==to_string(i))
            {
                valor=i;
                
                break;
            }
        }
    
    quickSort(arregloprovincias,arregloprovinciascopio, 0, 23);
    
    cout <<endl<<"Provincias ordenadas por casos: " <<endl<<endl;
    for (int i = 23; i > 23-valor; i--){ //signos re-invertidos
        cout <<Provincias_nombre(arregloprovinciascopio[i])<< " Cantidad de casos: "<<arregloprovincias[i]<<endl;
        
    }
}

void casos_edad(string fileName, string prov){
    
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
            /*int dato,valor;                         //Columna de Provincias
            for (int i = 0; i < 100; i++){
                if(row[2]==to_string(i))
                {
                    valor=i;
                    break;
                }
            }
            for (int i = 0; i < 100; i++){
                if(prov==to_string(i))
                {
                    dato=i;
                    break;
                }
            }*/
            
            if (row[2] == prov)
            { 
                
                arregloprovincias[Provincias_identado(row[5])]++; 
                 
            }
               
        }
    }
    int valor=0;
    for (int i = 0; i < 100; i++){
            if(prov==to_string(i))
            {
                valor=i;
                
                break;
            }
        }
    cout <<endl<<"Provincias ordenadas por casos de edad igual a "<<prov<<" :"<<endl;
    for (int i = 0; i < 23; i++){ //signos re-invertidos
        string nombre=Alfabetico(i);
        if(arregloprovincias[ Provincias_identado(nombre) ]!=0){  
            cout << nombre  <<": "<<arregloprovincias[ Provincias_identado(nombre) ]<<endl;
        }
    }
}



void exploreHeaders(string fileName)
{
    
    fstream fin;
    
    fin.open("./" + fileName, ios::in);
    
    string headers, header;
    getline(fin, headers);

    stringstream s(headers);
    while (getline(s, header, ','))
    {
        cout << header << endl;
    }
    
}


int main(int argc, char **argv)
{
    cout << "Cantidad de argumentos: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argumento " << i << ": " << argv[i] << endl;
        
        

    /*
        if(strcmp(argv[i], "-file") == 0){
            cout << "Nombre del Archivo: " << argv[i+1] << endl;
            //exploreHeaders(argv[i]);
            exploreCSV(argv[i+1]);
            break;
        }
    */

        if(strcmp(argv[i], "-file") == 0){
            cout << "Nombre del Archivo: " << argv[i+1] << endl; 
            //exploreCSV(argv[i+1]);
            //break;
        }

        if(strcmp(argv[i+2], "-estad") == 0){   
            exploreCSV(argv[i+1]);                       
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
            casos_edad(argv[i+1], argv[i+3]);
            try{
                casos_edad(argv[i+1], argv[i+3]);
                break;
             }
             catch(...){                     // De esta forma el usuario al ingresar mal la cantidad de provincias, imprime todas las provincias.
                cout<<"\n\n\t\t No se a introducido una edad.";
                break;
             }
            }
        if(strcmp(argv[i+2], "-casos_cui") == 0){  
            casos_edad(argv[i+1], argv[i+3]);  
            
            break;
            }
    }
    return 0;
}

// g++ main.cpp -o covid19
// ./covid19.exe -file Covid19Casos1000.csv
