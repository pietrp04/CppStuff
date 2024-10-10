#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

int  gen_num(int size) {
	return rand() % size;
}


int main(int argc, char* argv[])
{
	//std::cout << "ciao!" << "\n";
	std::ifstream inputFile;
	inputFile.open(argv[1]); //apro il file che viene passato da terminale
	srand(time(NULL));
	if (argc != 2) {
		std::cerr << "Usage: flashcard filename" << "\n";
		return 1;
	}

	if(inputFile.is_open() == false) { //verifico se il file si apre
		std::cerr << "There has been an error opening the file" << "\n";
		return 1;
	}

	std::string line; //per il file di input
	std::vector<std::string> output; //sto creando un vettore di stringhe, cioé righe
	
	//ora qui una prova per vedere se riesco a selezionare riga per riga
	while(std::getline(inputFile, line, '\n')) {
			//aggiungo ogni riga al vettore
			output.push_back(line);
	}

	/* for (const auto& i : output) { //i ":" dividono l'elemento dal contentitore,
				        //auto invece significa che il compilatore interpreta
				        //automaticamente il type in outputs
				        //e la & significa che lavora per referenza
				        //cioè senza copiare dati pesanti
        	
		std::cout << i << std::endl;
	} */

	int size = output.size();
	int printed_line = gen_num(size);
	//std::cout << size << "\n";
	
	 std::vector<std::string> leggo_tmp;
	std::string line_tmp;

	std::ifstream open_tmp;
	open_tmp.open("/tmp/flash.tmp"); //apro il file temporaneo per vedere se c'è e se ci sono già domande proposte
					 
	while(std::getline(open_tmp, line_tmp, '\n')) { //acquisisco le righe
                        //aggiungo ogni riga al vettore
                        leggo_tmp.push_back(line_tmp);
        }

	//sistema di decisione dell'output della stringa
	if(leggo_tmp.size() < 5) {
		for(int j = 0; j < 5 && j < leggo_tmp.size(); j++) {
			if (output[printed_line] == leggo_tmp[j]) {
				printed_line = (gen_num(size) + gen_num(size)) / 2 + 1;
			}
		} 
	}
	else {
		for(int k = leggo_tmp.size() - 5;  k <= leggo_tmp.size(); k++) {
			if (output[printed_line] == leggo_tmp[k]) {
				printed_line = (gen_num(size) + gen_num(size)) / 2 + 1;
			}
		}
	}

	
	std::cout << output[printed_line] << "\n";
	
	std::ofstream temp; //apro un file su cui scrivere le domande che vengono estratte
	temp.open("/tmp/flash.tmp", std::ios::app); //il secondo arg è per aprirlo in append mode
	temp << output[printed_line] << "\n"; //appendo la domanda al file
	temp.close();
	open_tmp.close();
	inputFile.close();
	return 0;

	
}       

