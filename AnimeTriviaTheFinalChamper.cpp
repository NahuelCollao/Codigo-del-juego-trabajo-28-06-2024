#include <iostream>

using namespace std;

int main (){
    int score = 0;  //Puntos bases al iniciar la trivia
    char R;
    
    cout <<"Bienvenido a AnimeTrivia, espero que disfrutes de estas preguntas de anime diversos" << endl; 

    //Primera tanda de preguntas, Dragon Ball Z
    cout <<"\n (1) ¿Quien es el protagonista del anime Dragon Ball Z"<< endl;
    cout <<"a) Goku"<< endl;
    cout <<"b) Luffy"<< endl;
    cout <<"c) Naruto"<< endl;
    cout <<"d) Komi-san"<< endl;
    cout <<"\n ingrese tu respuesta: ";
    cin >> R;
    while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='a'){
        score= score+1;
    }
    else{
        cout << "\n la respuesta correcta es, a) Goku, heroe de la infanca de muchos" <<endl;
    }
    

    cout <<"\n (2) ¿Quien es el villano de la saga de namek en dragon ball Z?"<< endl;
    cout <<"a) Freezer"<< endl; 
    cout <<"b) Broly"<< endl;
    cout <<"c) Cell"<< endl; 
    cout <<"d) Janemba"<< endl; 
    cout <<"\n ingresa tu respuesta: ";
    cin >> R; 

    if (R=='a'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es, a) Freezer, el hijo de King Cold " << endl; 
    }
     
    cout <<"\n (3)¿Cómo se llama la ultima transformación de Goku"<< endl; 
    cout <<"a) super sayayin 1"<< endl; 
    cout <<"b) Kaioh-ken aumentado 20 veces"<< endl; 
    cout <<"c) super sayayin blue" << endl; 
    cout <<"d) Ultra instinto" << endl;
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R;  
   while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='d'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: d) Ultra instinto, transformacion y tecnica conseguida en el torneo multiversal"<< endl;
    }
    
    cout <<"\n (4) ¿Como se llama la fusion creada por la danza metamuru en Dragon Ball Z?" << endl;
    cout <<"a) Vegeku" << endl; 
    cout <<"b) Vegetto" << endl;
    cout <<"c) Gogeta" << endl;
    cout <<"d) Gotrenk" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }


    if (R=='c'){
        score= score+1;

    }
    else{
        cout <<"\n la respuesta correcta es: c) Gogeta, Vegetto y Vegeku son los nombres dados a la fusion por los aretes potaras, siendo vegeku el dado en una traduccion española"<< endl;
    }

    cout <<"\n (5) ¿Cuantos hijos tiene Goku en realidad?" << endl; 
    cout <<"a) tres hijos" << endl;
    cout <<"b) dos hijos y una hija" << endl; 
    cout <<"c) dos hijos" << endl; 
    cout <<"d) no tiene hijos, es esteril" << endl;
    cout <<"\n ingresa tu respuesta: " << endl; 
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='c'){
        score= score+1;
    
    }
    else{
        cout <<"\n la respuesta correcta es: c) dos hijos, Goku tiene dos hijos que son Goten y Gohan" << endl; 

    }

    cout <<"\n bien hecho, ahora pasaremos a la segunda ronda de preguntas, que seran del anime Jujutsu Kaisen" << endl; 

    //Ronda de preguntas, Jujutsu Kaisen
    cout <<"\n (1) ¿Cómo se llama la maldicion del cuerpo de Itadori?" << endl; 
    cout <<"a) Mahoraga" << endl; 
    cout <<"b) Kurama" << endl; 
    cout <<"c) Mogera" << endl; 
    cout <<"d) Ryomen Sukuna" << endl;
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='d'){
        score= score+1; 
    } 
    else{
        cout <<"\n la respuesta correcta es: d) Ryomen Sukuna, el rey de las maldiciones y alguíen con una gran conexion con el protagonista" << endl; 
    }

    cout <<"\n (2) ¿Cómo se llama el protagnista del anime Jujutsu Kaisen?" << endl; 
    cout <<"a) Masaru Daimon" << endl;
    cout <<"b) Denji" << endl; 
    cout <<"c) Yuji Itadori" << endl; 
    cout <<"d) Mohamet avdol" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='c'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: c) Yuji Itadori, un joven con muchos traumas que se crean con el avance de la serie" << endl; 

    }

    cout <<"\n (3) ¿Cómo se llama la energía usan en Jujutsu Kaisen" << endl;
    cout <<"a) Nenm" << endl; 
    cout <<"b) Energia maldita" << endl;
    cout <<"c) Energia de alma" << endl; 
    cout <<"d) Reiki" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='b'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: b) Energia maldita, energia usada para ataques y tecnicas en la serie" << endl; 

    }

    cout <<"\n (4) ¿Quien es el enemigo de Itadori y villano principal de la serie?" << endl; 
    cout <<"a) Ryomen Sukuna" << endl; 
    cout <<"b) Kenjaku" << endl; 
    cout <<"c) Mahoraga" << endl; 
    cout <<"d) Toji Fushiguro" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='a'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: a), Ryomen Sukuna el rey de las maldicones y hechizero mas fuerte" << endl;  
    }

    cout <<"\n (5) ¿Como se llama la barrera que tiene el maestro de Itadori?" << endl; 
    cout <<"a) Polvo de estrellas" << endl; 
    cout <<"b) Vacio Purpura" << endl; 
    cout <<"c) Infinito" << endl; 
    cout <<"d) Zera Flame" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='c'){
        score= score+1;
    }
    else{ 
        cout <<"\n la respuesta correcta es: c), infito, así se llama la barrera del maestro de Itadori, Satoru Gojo" << endl; 
    }
    

    cout <<"\n Bien hecho!, ahora pasaremos a un anime más viejito" << endl; 

    //Ahora pasaremos a la ronda de preguntas del siguente anime, Pokemon
    cout <<"\n (1) ¿Cual es el pokemon 151 de la pokedex?" << endl; 
    cout <<"a) Agumon" << endl; 
    cout <<"b) Charizard" << endl; 
    cout <<"c) Mew" << endl; 
    cout <<"d) Mewtwo" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='c'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: c) Mew, el pokemon numero 151 y el primer FakeMon del mundo" << endl; 
    }

    cout <<"\n (2) ¿Cuantos tipos hay en pokemon?" << endl; 
    cout <<"a) 18 tipos" << endl; 
    cout <<"b) 24 tipos" << endl; 
    cout <<"c) 15 tipos" << endl; 
    cout <<"d) 10 tipos" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R;   
     while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='a'){
        score= score+1;
    }
    else{
        cout <<"\n la respuesta correcta es: a) 18 tipos, hay 18 tipos en todo pokemon entre ellos fuego, dragon, hada y acero" << endl; 
    }

    cout <<"\n (3) ¿cual es el primer pokemon que obtuvo Ash?" << endl; 
    cout <<"a) Zaptos" << endl; 
    cout <<"b) Pikachu" << endl; 
    cout <<"c) Charizard" << endl; 
    cout <<"d) Celebi" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='b'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: b) Pikachu, la rata electrica favorita de muchos" << endl; 
    }

    cout <<"\n (4) ¿Cómo se llama el equipo que intenta robar siempre a Pikachu?" << endl; 
    cout <<"a) Equipo Plasma" << endl; 
    cout <<"b) Equipo Flame" << endl; 
    cout <<"c) Equipo Rocket" << endl; 
    cout <<"d) El america" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl;
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='c'){
        score= score+1;
    }
    else{
        cout <<"\n la respuesta correcta es: c) Equipo Rocket, esta respuesta salio disparada a la velocidad de la luz" << endl; 
    }

    cout <<"\n (5) en el episodio 4 de la primera temporada de pokemon, el reto del samurai ¿quien gana la pelea de los metapod?" << endl;
    cout <<"a) Pikacu" << endl; 
    cout <<"b) el metapod de ash" << endl;
    cout <<"c) el metapod del samura" << endl; 
    cout <<"d) es un empate de los dos metapod" << endl; 
    cout <<"\n ingresa tu respuesta: " << endl; 
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='d'){
        score= score+1;
    }
    else{
        cout <<"\n la respuesta correcta es: d) es un empate de los dos metapod, en la batalla los dos no pueden hacer nada más que endurecer lo que llevo a un empate" << endl;
    }

    cout <<"\n Bien hecho!, ahora pasaremos por otro anime antiguo" << endl; 

    //Tanda de preguntas referente a Digimon
    cout <<"\n (1) ¿Cómo se llama la primera serie de digimon?" << endl; 
    cout <<"a) Digimon Frontier" << endl; 
    cout <<"b) digimon Adventure" << endl;
    cout <<"c) digimon Adventure 02" << endl;
    cout <<"d) Digimon Xross Wars" << endl; 
    cout <<"\n ingresa tu respuesta" << endl; 
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='b'){
        score= score+1;
    }
    else{
        cout <<"\n la respuesta correcta es: b) digimon Adventure, la primera serie de digimon en transmitirse" << endl; 
    }

    cout <<"\n (2) ¿Cómo se llama la fusion entre WarGreymon y MetalGarurumon?" << endl; 
    cout <<"a) Omnimon" << endl;
    cout <<"b) Magnamon" << endl;
    cout <<"c) Alphamon" << endl; 
    cout <<"d) Examon" << endl;
    cout <<"\n ingresa tu respuesta" << endl;
    cin >>R;
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='a'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: a) Omnimon, tambien conocido como Omegamon en su idioma original" << endl; 
    }

    cout <<"\n (3) ¿Como se llama la ultima etapa evolutiva en digimon?" << endl; 
    cout <<"a) campeon" << endl; 
    cout <<"b) Ultimate" << endl; 
    cout <<"c) Mega" << endl; 
    cout <<"d) Super ultimate" << endl; 
    cout <<"\n ingresa tu respuesta" << endl; 
    cin >>R; 
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='b'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: b) Ultimate, esta forma en america se le conoce cómo Mega" << endl; 
    }

    cout <<"\n (4) ¿como se llama el metodo de evolucion de digimon en que es a base de un digi mental?" << endl; 
    cout <<"a) evolucion armor" << endl; 
    cout <<"b) evolucion Joggress" << endl; 
    cout <<"c) evolucion Matrix" << endl;
    cout <<"d) DigiXross" << endl; 
    cout <<"\n ingresa tu respuesta" << endl; 
    cin >>R;
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='a'){
        score= score+1;
    }
    else {
        cout <<"\n la respuesta correcta es: a) evolucion armor, una evolución que es a base de un digiMental con algun enblema de los niños elegidos" << endl; 
    }

    cout <<"\n (5) ¿que son los digimon?" << endl; 
    cout <<"a) Monstruos digitales" << endl; 
    cout <<"b) seres digitales" << endl;
    cout <<"c) Criaturas digitales" << endl;
    cout <<"d) todas las anteriores" << endl;
    cout <<"\n ingresa tu respuesta" << endl; 
    cin >>R;
       while (R!= 'a'&& R!= 'b'&& R!= 'c'&& R!= 'd'){
        cout <<"\n ingresa porfavor una de las alternativas dadas: a, b, c, d";
        cout <<"\n ingresa tu respuesta" << endl; 
        cin >> R;
    }

    if (R=='d'){
        score= score+1; 
    }
    else{
        cout <<"\n la respuesta correcta es: d) todas las anteriores, los digimon son entes digitales" << endl; 
    }

    cout <<"\n Felicidades! completaste la trivia estimado amigo fanatico del anime, este es el fin del juego!" << endl; 


    cout <<"\n Tu puntaje final es: " <<score; 
    cout <<"\n ¿No sacaste el puntaje esperado?, Reinicia y intenta de nuevo!" << endl; 
    
    return 0;
}