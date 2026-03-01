#include<iostream>

using namespace std;

int main() {
    
    int genre, director, movie;
    
    cout << "Select the genre: (1) Animation (2) Adventure\n";
    cin >> genre;
    
    switch(genre) {
        case 1:
            cout << "Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton\n";
            cin >> director;
            
            switch(director) {
                case 1:
                    cout << "Select the movie: (1) Monsters, Inc. (2) Inside Out\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: Monsters, Inc.";
                            break;
                        case 2:
                            cout << "You have reserved the movie: Inside Out";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                break;
                case 2:
                    cout << "Select the movie: (1) The Incredibles (2) Ratatouille\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: The Inredibles";
                            break;
                        case 2:
                            cout << "You have reserved the movie: Ratatouille";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                break;
                case 3:
                    cout << "Select the movie: (1) Finding Nemo (2) WALL-E\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: Finding Nemo";
                            break;
                        case 2:
                            cout << "You have reserved the movie: WALL-E";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                    break;
                default:
                    cout << "Please enter a valid input";
                    break;
            }
        break;
        case 2:
            cout << "Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis\n";
            cin >> director;
            
            switch(director) {
                case 1:
                    cout << "Select the movie: (1) E.T. the Extra-Terrestrial (2) The BFG\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: E.T. the Extra-Terrestrial";
                            break;
                        case 2:
                            cout << "You have reserved the movie: The BFG";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                break;
                case 2:
                    cout << "Select the movie: (1) The Jungle Book (2016) (2) Elf\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: The Jungle Book (2016)";
                            break;
                        case 2:
                            cout << "You have reserved the movie: Elf";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                break;
                case 3:
                    cout << "Select the movie: (1) Back to the Future (2) Who Framed Roger Rabbit\n";
                    cin >> movie;
                    switch(movie) {
                        case 1:
                            cout << "You have reserved the movie: Back to the Future";
                            break;
                        case 2:
                            cout << "You have reserved the movie: Who Framed Roger Rabbit";
                            break;
                        default:
                            cout << "Please enter a valid input";
                            break;
                    }
                    break;
                default:
                    cout << "Please enter a valid input";
                    break;
            }
        break;
        default:
            cout << "Please enter a valid input";
            break;
    }
}