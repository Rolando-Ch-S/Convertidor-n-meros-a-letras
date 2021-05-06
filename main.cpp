/* 
* Programa que convierte números en letras
* Hecho por: 
Mario Mesen Murillo
Rolando Alonso Chavarría Seas 
* Fecha límite de entrega 09 mayo 2021
*/
#include <iostream>
using namespace std;
int numero, n1=0, n2=0, n3=0;
 
int main() {
   cout<<"Escribe un número de cero a 999 (en números): "; 
   cin>>numero;
   n1 = (numero / 100) % 10;//extraigo centenas 
   n2 = (numero / 10) % 10;//extraigo decenas 
   n3 = (numero % 10);//extraigo unidades  
   if(numero < 0 || numero >= 1000){
      cout<<"El número ingresado excede el rango de valores"; 
   }// orienta al usuario en cuanto al ingreso de datos
   else{
      // Sentencia para determinar los cientos
      if(n1 == 1 && n2 == 0 && n3 == 0){
         cout<<"CIEN";//para el caso donde no hay decenas ni unidades
      }
      else if(n1 == 1){
         cout<<"CIENTO ";//para el caso donde hay decenas y/o unidades
      }
      else if(n1 == 2){
         cout<<"DOSCIENTOS ";// línea 29-51 el uso es general
      }
      else if(n1 == 3){
         cout<<"TRESCIENTOS ";
      }
      else if(n1 == 4){
         cout<<"CUATROCIENTOS ";
      }
      else if(n1 == 5){
         cout<<"QUINIENTOS ";
      }
      else if(n1 == 6){
         cout<<"SEISCIENTOS ";
      }
      else if(n1 == 7){
         cout<<"SETECIENTOS ";
      }
      else if(n1 == 8){
         cout<<"OCHOCIENTOS ";
      }
      else if(n1 == 9){
         cout<<"NOVECIENTOS ";
      }
      // Sentencia para determinar las decenas
      if(n2 == 1 && n3 == 0){
         cout<<"Diez";//línea 54 al 71  son casos particulares (11-15)
      }
      else if(n2 == 1 && n3 == 1){
         cout<<"ONCE";
      }
      else if(n2 == 1 && n3 == 2){
         cout<<"DOCE";
      }
      else if(n2 == 1 && n3 == 3){
         cout<<"TRECE";
      }
      else if(n2 == 1 && n3 == 4){
         cout<<"CATORCE";
      }
      else if(n2 == 1 && n3 == 5){
         cout<<"QUINCE";
      }
      else if(n2 == 1){
         cout<<"DIECI";// esta sirve para (16-19)
      }
      if(n2 == 2 && n3 == 0){
         cout<<"VEINTE";// decena sin unidades
      }
      else if(n2 == 2){
         cout<<"VEINTI";// decena con unidades
      }
      else if(n2 == 3 && n3 == 0){
         cout<<"TREINTA";// decena sin unidades
      }
      else if(n2 == 3){
         cout<<"TREINTA Y ";//decena con unidades
      }
      else if(n2 == 4 && n3 == 0){
         cout<<"CUARENTA";// decena sin unidades
      }
      else if(n2 == 4){
         cout<<"CUARENTA Y ";//decena con unidades
      }
      else if(n2 == 5 && n3 == 0){
         cout<<"CINCUENTA";// decena sin unidades
      }
      else if(n2 == 5){
         cout<<"CINCUENTA Y ";//decena con unidades
      }
      else if(n2 == 6 && n3 == 0){
         cout<<"SESENTA";// decena sin unidades
      }
      else if(n2 == 6){
         cout<<"SESENTA Y ";//decena con unidades
      }
      else if(n2 == 7 && n3 == 0){
         cout<<"SETENTA";// decena sin unidades
      }
      else if(n2 == 7){
         cout<<"SETENTA Y ";//decena con unidades
      }
      else if(n2 == 8 && n3 == 0){
         cout<<"OCHENTA";// decena sin unidades
      }
      else if(n2 == 8){
         cout<<"OCHENTA Y ";//decena con unidades
      }
      else if(n2 == 9 && n3 == 0){
         cout<<"NOVENTA";// decena sin unidades
      }
      else if(n2 == 9){
         cout<<"NOVENTA Y ";//decena con unidades
      }
      //Sentencia para determinar las unidades 
      if (n1==0 && n2==0 && n3==0  ) {
      cout<<"cero";// cuando todo es cero
      }
      else if(n3 == 1 && n2 > 1){
         cout<<"UNO";//cuando no es 11
      }
      else if(n3 == 1 && n2 == 0){
         cout<<"UNO"; // cuando las decenas son cero
      }
      else if(n3 == 2 && n2 > 1){
         cout<<"DOS";//cuando no es 12
      }
      else if(n3 == 2 && n2 == 0){
         cout<<"DOS";// cuando las decenas son cero
      }
      else if(n3 == 3 && n2 > 1){
         cout<<"TRES";//cuando no es 13
      }
      else if(n3 == 3 && n2 == 0){
         cout<<"TRES"; // cuando las decenas son cero
      }
      else if(n3 == 4 && n2 > 1){
         cout<<"CUATRO";//cuando no es 14
      }
      else if(n3 == 4 && n2 == 0){
         cout<<"CUATRO"; // cuando las decenas son cero
      }
      else if(n3 == 5 && n2 > 1){
         cout<<"CINCO";//cuando no es 15
      }
      else if(n3 == 5 && n2 == 0){
         cout<<"CINCO";// cuando las decenas son cero
      }
      else if(n3 == 6){
         cout<<"SEIS";// línea 157-167 para casos generales
      }
      else if(n3 == 7){
         cout<<"SIETE";
      }
      else if(n3 == 8){
         cout<<"OCHO";
      }
      else if(n3 == 9){
         cout<<"NUEVE";
      }
   }
   return 0;
}