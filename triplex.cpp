#include <iostream>
#include <ctime>

void LogoImage() {
std::cout << "                     .;+itIYIIYIIYItt+" << std::endl;                      
std::cout << "                  =tXVVXItt+;=;;=+itIYVVXIi:" << std::endl;                  
std::cout << "               ;YVXXt=:               .;tYXXX+" << std::endl;                
std::cout << "            .tVXVt;                       .iXXVI:" << std::endl;             
std::cout << "           tRXX;                        .;;  ;YVVY:" << std::endl;           
std::cout << "         ;RXV;                            +RR+..YVRt" << std::endl;          
std::cout << "       .XXR;                           :;.  ;BBY.:VXR;" << std::endl;        
std::cout << "      ;RYX                              :XBY; tBBi tVR+" << std::endl;       
std::cout << "     ;RV+                             :;  :RMB+;BMB.;RXt" << std::endl;      
std::cout << "    ;RR;                               ;RR+.tBMBiBMB::RXt" << std::endl;     
std::cout << "   :RV;                             .+;. iBBY;BMMBMMB.:RXi" << std::endl;    
std::cout << "   RYt                                =BBi:BMBXBMMMBY. ;RR;" << std::endl;   
std::cout << "  YtV                               +Y+:tMBIBMMBMR=     iIR" << std::endl;   
std::cout << " :RR.                        .::.    .tBXtMMBMBY:        RIi" << std::endl;  
std::cout << " XIt                     ;IRBRXVRBY;   ;BBBMR=           ;VR" << std::endl;  
std::cout << ".RR                    ;RBt:     .+RB;  :BI:              VY;" << std::endl; 
std::cout << "+tX                   iBt           =BX                   itY" << std::endl; 
std::cout << "Yt=                  ;Bi             :Bt                  :XR" << std::endl; 
std::cout << "RX:                  RX               =B:                  RX." << std::endl;
std::cout << "RR                  :B:                Ri                  YX:" << std::endl;
std::cout << "RR                  ;B                 YY                  YY;" << std::endl;
std::cout << "RR                  :B;                Ri                  YX:" << std::endl;
std::cout << "RX:                  RX               +B:                  RX." << std::endl;
std::cout << "YI;                  +Ri             :Bt                  :XR" << std::endl; 
std::cout << "+tX              .i:  iBI           iBX                   itY" << std::endl; 
std::cout << ".RR            ;VBBB.  ;RBt:     :+RR+                    VY;" << std::endl; 
std::cout << " XIt        .tBMMMRBB;   ;tRBVXVBRY;                     ;VR" << std::endl;  
std::cout << " :RR.     ;RBMMBVBB;;RR;     .::.                        RIi" << std::endl;  
std::cout << "  IIR  .tBMMMBMMB;RMX:                                  tIR" << std::endl;   
std::cout << "   RII BMMBMMBiBMB;:+Vi:                               ;RR:" << std::endl;   
std::cout << "   :RV;:BMBXBMB;;VBY.                                 :RX+" << std::endl;    
std::cout << "    ;RV+:BMB;RBMY  ;t;                               ;RXt" << std::endl;     
std::cout << "     ;RXt.RMB;:tBB=                                 ;RVi" << std::endl;      
std::cout << "      :RYR.;BBY. :+t;                              IXR;" << std::endl;       
std::cout << "        XXR+ ;RBY:                               ;RYR:" << std::endl;        
std::cout << "         ;RYR; .;Yi:                           :XXVt" << std::endl;          
std::cout << "           +VXV=                             ;YVVt." << std::endl;           
std::cout << "             +VXVI;                       ;tVXVt." << std::endl;             
std::cout << "               ;tVXXYi;.              ;+IXXVY;" << std::endl;                
std::cout << "                  ;tIVVXXYti=====iiIXXVVYt;" << std::endl;                   
std::cout << "                      :;iitItttttItt+;:" << std::endl;

}

void PrintIntro(int Difficulty) {
    LogoImage();
    std::cout << "\nYou are a secret agent trying to steal the crown jewels from the top level of the Cooper Hewitt Museum in New York.\n";
    std::cout << "\nUnfortunately, you are currently at level " << Difficulty;
    std::cout << " of the museum.\n";
    std::cout << std::endl << "Enter the correct code on each floor to advance...\n\n"; 
}

bool PlayGame(int Difficulty) {
    
    PrintIntro(Difficulty);
  
   // Declare 3 numbers and calculate prod & sum
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProd = CodeA  * CodeB * CodeC;

    //Print sum and product to terminal
    std::cout << "+ There are 3 numbers in the code.";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The product of the codes is: " << CodeProd << std::endl;

    // Store player guesses
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    // Check if guess matches code
    if (GuessSum == CodeSum && GuessProd == CodeProd) {
        std::cout << "\nYou're correct! Advance to the next level!";
        return true;
    } else {
        std::cout << "\nIncorrect! Try again";
        return false;
    }
}

// Secret agent needs to guess 3 numbers based on certain attributes

    int main() {
        // Creates new random sequence based on time of day
        srand(time(NULL));

        int LevelDifficulty = 1;
        int const maxLevel = 10; 
        
        // Loops game until all levels complete
        while (LevelDifficulty <= maxLevel) {
            bool bLevelComplete = PlayGame(LevelDifficulty);

            std::cin.clear(); // Clears any errors
            std::cin.ignore(); // Discards the buffer

            if (bLevelComplete) {
                // Increase level difficulty
                ++LevelDifficulty;
            }
            
        }
    std::cout << "\n\nCongratulations! You made it to the top level and stole the crown jewels! Now hurry and get out of here!";
    return 0;
}
