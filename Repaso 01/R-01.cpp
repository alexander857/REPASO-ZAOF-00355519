//ENTRADAS Y SALIDAS EN CONSOLA
#include<iostream>
using namespace std;

bool hasLetter(char letter, char array1[9], char array2[9]);
void printArray(char array[9]);
bool compareArray(char array1[9], char array2[9]);

int main(void){
    char word[9] = {'c','o','d','i','f','i','c','a','r'};
    char aux[9];
    char letter;
    int a = 13;

    for(int i = 0; i < 9; i++){
        aux[9] = '_';
    }

    cout << "La palabra contiene 9 letras" << endl;
    do{
        cout << "Digite una letra: "; cin >> letter;
        if(hasLetter(letter,word,aux) == true){

            cout << "La palabra si contiene la letra: " << letter << endl;

        }
        else{
            a--;
            cout << "La palabra no contiene la letra: " << letter << endl;
        }

        printArray(aux);

         if(compareArray(word, aux) == true){

            cout << "Has adivinado la palabra" << endl;
            return 0;

        }

    }while(a > 0);



    return 0;
}

void printArray(char array[9]){

    for(int i = 0; i < 9; i++){
        cout << array[i] << "\t";
    }

}

bool hasLetter(char letter, char array1[9], char array2[9]){

    //bandera: es como un chekpoint para ir verificando algo
    bool flag = false;

    for(int i = 0; i < 9; i++){

        if(array1[i] == letter){
            flag = true;
            array2[i] = letter;
        }

    }
    return flag;
}

bool compareArray(char array1[9], char array2[9]){

    for(int i = 0; i < 9; i++){

        if(array1[i] != array2[i]){
            return false;
        }

    }
    return true;

}