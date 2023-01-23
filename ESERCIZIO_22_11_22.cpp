/*
	Name:ESERCIZIO 22/11/22
	Copyright: colamonico-chiarulli 
	Author: daddato domenico
	Date: 22/11/22 13:28
	Description:Creare un programma con il seguente menu:

Gentile Utente,

se premi 1, chiede all'utente il numero della lunghezza (es. 5) e fa un ciclo (es. 5 volte) per caricare i dati nel vettore.
se premi 2, stampa a video il vettore con un ciclo.
se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato
se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato
se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato
se premi 6, esca dal programma

	
*/
//1. includo le librerie
#include<iostream>
using namespace std;
//2.inizio il blocco main
int main ()
{
	//3.dichiaro e inizializzo le variabili
int N=0;
int cont=0;
int vettore[cont];
int num=0;
int L=0;
int np=0;
int nd=0;
int piacere=0;
int mag=0;
	//5. operazioni
do {
	cout<<endl<<"Gentile utente, "<<endl<<"se premi 1.inserisci il vettore"<<endl<<"se premi 2, stampa a video il vettore con un ciclo."<<endl<<"se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato"<<endl<<"se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato"<<endl<<"se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato"<<endl<<"se premi 6, esci dal programma"<<endl<<"inserisci l\'indice del menu\': ";
	cin>>N;
switch(N) {
	case 1:
		cout<<"inserisci quanti numeri vuoi prendere in considerazione ";
		cin>>L;
		for(cont=0;cont<L;cont++) {
			cout<<"inserisci il numero ";
			cin>> vettore[cont];			
}
    break;
    case 2:			


		for(cont=0;cont<L;cont++) {
    		cout<<"il numero e\': "<<vettore[cont]<<endl;
}
    break;
    case 3:
       
	for(cont=0;cont<L;cont++) {
    		if(vettore[cont]%2==0) {
    			np=np+1;
}
}
cout<<"i numeri pari sono: "<<np<<endl;
    break;
    case 4:
    	for(cont=0;cont<L;cont++) {
    		if(vettore[cont]%2==1) {
    			nd=nd+1;
}
}
cout<<"i numeri dispari sono: "<<nd<<endl;
    break;
	case 5:
		cout<<"inserisci un numero a tuo piacere: ";
		cin>>piacere;
		for(cont=0;cont<L;cont++) {
		if(piacere>vettore[L]) {
			mag=mag+1;
}
}cout<<"ci sono "<<mag<<" numeri maggiori di "<<piacere<<endl;
	break;
	case 6:
    	cout<<"arrivederci!!";
    break;	
	default:
		cout<<"hai spinto il numero sbagliato riprova";
	break;
}

} while(N!=6);
//7.ritorno al sistema operativo
return 0;
//8.fine del programma
}
