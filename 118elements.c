
#include <stdio.h>
#include <string.h>

struct Element {
    char name[20];
    int atomic_number;
    int radius;
    char config[30];
    char block[2];
    char state[30];
    char symbol[3];
};

void initializeElements(struct Element elements[]) {
    
    strcpy(elements[0].name, "Hydrogen");
    elements[0].atomic_number = 1;
    elements[0].radius = 25; 
    strcpy(elements[0].config, "1s^1");
    strcpy(elements[0].block, "s");
    strcpy(elements[0].state ,"Gas");
    strcpy(elements[0].symbol,"H");

    strcpy(elements[1].name, "Helium");
    elements[1].atomic_number = 2;
    elements[1].radius = 32; 
    strcpy(elements[1].config, "1s^2");
    strcpy(elements[1].block, "p");
    strcpy(elements[1].state ,"Gas");
    strcpy(elements[1].symbol,"He");

    strcpy(elements[2].name, "Lithium");
    elements[2].atomic_number = 3;
    elements[2].radius = 167; 
    strcpy(elements[2].config, "[He]2s^1");
    strcpy(elements[2].block, "s");
    strcpy(elements[2].state ,"Solid");
    strcpy(elements[2].symbol,"Li");

    strcpy(elements[3].name, "Beryllium");
    elements[3].atomic_number = 4;
    elements[3].radius = 112; 
    strcpy(elements[3].config, "[He]2s^2");
    strcpy(elements[3].block, "s");
    strcpy(elements[3].state ,"Solid");
    strcpy(elements[3].symbol,"Be");

    strcpy(elements[4].name, "Boron");
    elements[4].atomic_number = 5;
    elements[4].radius = 87; 
    strcpy(elements[4].config, "[He]2s^2 2p^1");
    strcpy(elements[4].block, "p");
    strcpy(elements[4].state ,"Solid");
    strcpy(elements[4].symbol,"B");

    strcpy(elements[5].name, "Carbon");
    elements[5].atomic_number = 6;
    elements[5].radius = 67; 
    strcpy(elements[5].config, "[He]2s^2 2p^2");
    strcpy(elements[5].block, "p");
    strcpy(elements[5].state ,"Solid");
    strcpy(elements[5].symbol,"C");

    strcpy(elements[6].name, "Nitrogen");
    elements[6].atomic_number = 7;
    elements[6].radius = 56; 
    strcpy(elements[6].config, "[He]2s^2 2p^3");
    strcpy(elements[6].block, "p");
    strcpy(elements[6].state ,"Gas");
    strcpy(elements[6].symbol,"N");

    strcpy(elements[7].name, "Oxygen");
    elements[7].atomic_number = 8;
    elements[7].radius = 48; 
    strcpy(elements[7].config, "[He]2s^2 2p^4");
    strcpy(elements[7].block, "p");
    strcpy(elements[7].state ,"Gas");
    strcpy(elements[7].symbol,"O");

    strcpy(elements[8].name, "Fluorine");
    elements[8].atomic_number = 9;
    elements[8].radius = 42; 
    strcpy(elements[8].config, "[He]2s^2 2p^5");
    strcpy(elements[8].block, "p");
    strcpy(elements[8].state ,"Gas");
    strcpy(elements[8].symbol,"F");

    strcpy(elements[9].name, "Neon");
    elements[9].atomic_number = 10;
    elements[9].radius = 38; 
    strcpy(elements[9].config, "[He]2s^2 2p^6");
    strcpy(elements[9].block, "p");
    strcpy(elements[9].state ,"Gas");
    strcpy(elements[9].symbol,"Ne");

    strcpy(elements[10].name, "Sodium");
    elements[10].atomic_number = 11;
    elements[10].radius = 190; 
    strcpy(elements[10].config, "[Ne]3s^1");
    strcpy(elements[10].block, "s");
    strcpy(elements[10].state ,"Solid");
    strcpy(elements[10].symbol,"Na");

    strcpy(elements[11].name, "Magnesium");
    elements[11].atomic_number = 12;
    elements[11].radius = 145; 
    strcpy(elements[11].config, "[Ne]3s^2");
    strcpy(elements[11].block, "s");
    strcpy(elements[11].state ,"Solid");
    strcpy(elements[11].symbol,"Mg");

    strcpy(elements[12].name, "Aluminium");
    elements[12].atomic_number = 13;
    elements[12].radius = 118; 
    strcpy(elements[12].config, "[Ne]3s^2 3p^1");
    strcpy(elements[12].block, "p");
    strcpy(elements[12].state ,"Solid");
    strcpy(elements[12].symbol,"Al");

    strcpy(elements[13].name, "Silicon");
    elements[13].atomic_number = 14;
    elements[13].radius = 111; 
    strcpy(elements[13].config, "[Ne]3s^2 3p^2");
    strcpy(elements[13].block, "p");
    strcpy(elements[13].state ,"Solid");
    strcpy(elements[13].symbol,"Si");

    strcpy(elements[14].name, "Phosphrous");
    elements[14].atomic_number = 15;
    elements[14].radius = 98; 
    strcpy(elements[14].config, "[Ne]3s^2 3p^3");
    strcpy(elements[14].block, "p");
    strcpy(elements[14].state ,"Solid");
    strcpy(elements[14].symbol,"P");

    strcpy(elements[15].name, "Sulphur");
    elements[15].atomic_number = 16;
    elements[15].radius = 87; 
    strcpy(elements[15].config, "[Ne]3s^2 3p^4");
    strcpy(elements[15].block, "p");
    strcpy(elements[15].state ,"Solid");
    strcpy(elements[15].symbol,"S");

    strcpy(elements[16].name, "Chlorine");
    elements[16].atomic_number = 17;
    elements[16].radius = 79; 
    strcpy(elements[16].config, "[Ne]3s^2 3p^5");
    strcpy(elements[16].block, "p");
    strcpy(elements[16].state ,"Solid");
    strcpy(elements[16].symbol,"Cl");

    strcpy(elements[17].name, "Argon");
    elements[17].atomic_number = 18;
    elements[17].radius = 71; 
    strcpy(elements[17].config, "[Ne]3s^2 3p^6");
    strcpy(elements[17].block, "p");
    strcpy(elements[17].state ,"Solid");
    strcpy(elements[17].symbol,"Ar");

    strcpy(elements[18].name, "Potassium");
    elements[18].atomic_number = 19;
    elements[18].radius = 243; 
    strcpy(elements[18].config, "[Ar]4s^1");
    strcpy(elements[18].block, "s");
    strcpy(elements[18].state ,"Solid");
    strcpy(elements[18].symbol,"K");

    strcpy(elements[19].name, "Calcium");
    elements[19].atomic_number = 20;
    elements[19].radius = 194; 
    strcpy(elements[19].config, "[Ar]4s^2");
    strcpy(elements[19].block, "s");
    strcpy(elements[19].state ,"Solid");
    strcpy(elements[19].symbol,"Ca");

    strcpy(elements[20].name, "Scandium");
    elements[20].atomic_number = 21;
    elements[20].radius = 160; 
    strcpy(elements[20].config, "[Ar]4s^2 3d^1");
    strcpy(elements[20].block, "d");
    strcpy(elements[20].state ,"Solid");
    strcpy(elements[20].symbol,"Sc");
    
    strcpy(elements[21].name, "Titanium");
    elements[21].atomic_number = 22;
    elements[21].radius = 145; 
    strcpy(elements[21].config, "[Ar]4s^2 3d^2");
    strcpy(elements[21].block, "d");
    strcpy(elements[21].state ,"Solid");
    strcpy(elements[21].symbol,"Ti");
    
    strcpy(elements[22].name, "Vanadium");
    elements[22].atomic_number = 23;
    elements[22].radius = 134; 
    strcpy(elements[22].config, "[Ar]4s^2 3d^3");
    strcpy(elements[22].block, "d");
    strcpy(elements[22].state ,"Solid");
    strcpy(elements[22].symbol,"V");
    
    strcpy(elements[23].name, "Chromium");
    elements[23].atomic_number = 24;
    elements[23].radius = 128; 
    strcpy(elements[23].config, "[Ar]4s^1 3d^5");
    strcpy(elements[23].block, "d");
    strcpy(elements[23].state ,"Solid");
    strcpy(elements[23].symbol,"Cr");
    
    strcpy(elements[24].name, "Manganese");
    elements[24].atomic_number = 25;
    elements[24].radius = 127; 
    strcpy(elements[24].config, "[Ar]4s^2 3d^5");
    strcpy(elements[24].block, "d");
    strcpy(elements[24].state ,"Solid");
    strcpy(elements[24].symbol,"Mn");
    
    strcpy(elements[25].name, "Iron");
    elements[25].atomic_number = 26;
    elements[25].radius = 126; 
    strcpy(elements[25].config, "[Ar]4s^2 3d^6");
    strcpy(elements[25].block, "d");
    strcpy(elements[25].state ,"Solid");
    strcpy(elements[25].symbol,"Fe");
    
    strcpy(elements[26].name, "Cobalt");
    elements[26].atomic_number = 27;
    elements[26].radius = 125; 
    strcpy(elements[26].config, "[Ar]4s^2 3d^7");
    strcpy(elements[26].block, "d");
    strcpy(elements[26].state ,"Solid");
    strcpy(elements[26].symbol,"Co");
    
    strcpy(elements[27].name, "Nickel");
    elements[27].atomic_number = 28;
    elements[27].radius = 124; 
    strcpy(elements[27].config, "[Ar]4s^2 3d^8");
    strcpy(elements[27].block, "d");
    strcpy(elements[27].state ,"Solid");
    strcpy(elements[27].symbol,"Ni");
    
    strcpy(elements[28].name, "Copper");
    elements[28].atomic_number = 29;
    elements[28].radius = 128; 
    strcpy(elements[28].config, "[Ar]4s^1 3d^10");
    strcpy(elements[28].block, "d");
    strcpy(elements[28].state ,"Solid");
    strcpy(elements[28].symbol,"Cu");
    
    strcpy(elements[29].name, "Zinc");
    elements[29].atomic_number = 30;
    elements[29].radius = 123; 
    strcpy(elements[29].config, "[Ar]4s^2 3d^10");
    strcpy(elements[29].block, "d");
    strcpy(elements[29].state ,"Solid");
    strcpy(elements[29].symbol,"Zn");
    
    strcpy(elements[30].name, "Gallium");
    elements[30].atomic_number = 31;
    elements[30].radius = 135; 
    strcpy(elements[30].config, "[Ar]4s^2 3d^10 4p^1");
    strcpy(elements[30].block, "p");
    strcpy(elements[30].state ,"Solid");
    strcpy(elements[30].symbol,"Ga");
    
    strcpy(elements[31].name, "Germanium");
    elements[31].atomic_number = 32;
    elements[31].radius = 125; 
    strcpy(elements[31].config, "[Ar]4s^2 3d^10 4p^2");
    strcpy(elements[31].block, "p");
    strcpy(elements[31].state ,"Solid");
    strcpy(elements[31].symbol,"Ge");
    
    strcpy(elements[32].name, "Arsenic");
    elements[32].atomic_number = 33;
    elements[32].radius = 114; 
    strcpy(elements[32].config, "[Ar]4s^2 3d^10 4p^3");
    strcpy(elements[32].block, "p");
    strcpy(elements[32].state ,"Solid");
    strcpy(elements[32].symbol,"As");
    
    strcpy(elements[33].name, "Selenium");
    elements[33].atomic_number = 34;
    elements[33].radius = 115; 
    strcpy(elements[33].config, "[Ar]4s^2 3d^10 4p^4");
    strcpy(elements[33].block, "p");
    strcpy(elements[33].state ,"Solid");
    strcpy(elements[33].symbol,"Se");
    
    strcpy(elements[34].name, "Bromine");
    elements[34].atomic_number = 35;
    elements[34].radius = 120; 
    strcpy(elements[34].config, "[Ar]4s^2 3d^10 4p^5");
    strcpy(elements[34].block, "p");
    strcpy(elements[34].state ,"Liquid");
    strcpy(elements[34].symbol,"Se");
    
    strcpy(elements[35].name, "Krypton");
    elements[35].atomic_number = 36;
    elements[35].radius = 116; 
    strcpy(elements[35].config, "[Ar]4s^2 3d^10 4p^6");
    strcpy(elements[35].block, "p");
    strcpy(elements[35].state ,"Gas");
    strcpy(elements[35].symbol,"Kr");
    
    strcpy(elements[36].name, "Rubidium");
    elements[36].atomic_number = 37;
    elements[36].radius = 265; 
    strcpy(elements[36].config, "[Kr]5s^1");
    strcpy(elements[36].block, "s");
    strcpy(elements[36].state ,"Solid");
    strcpy(elements[36].symbol,"Rb");
    
    strcpy(elements[37].name, "Strontium");
    elements[37].atomic_number = 38;
    elements[37].radius = 219; 
    strcpy(elements[37].config, "[Kr]5s^2");
    strcpy(elements[37].block, "s");
    strcpy(elements[37].state ,"Solid");
    strcpy(elements[37].symbol,"Sr");
    
    strcpy(elements[38].name, "Yttrium");
    elements[38].atomic_number = 38;
    elements[38].radius = 212; 
    strcpy(elements[38].config, "[Kr]5s^2 4d^1");
    strcpy(elements[38].block, "p");
    strcpy(elements[38].state ,"Solid");
    strcpy(elements[38].symbol,"Y");
    
    strcpy(elements[39].name, "Zirconium");
    elements[39].atomic_number = 40;
    elements[39].radius = 206; 
    strcpy(elements[39].config, "[Kr]5s^2 4d^2");
    strcpy(elements[39].block, "p");
    strcpy(elements[39].state ,"Solid");
    strcpy(elements[39].symbol,"Zr");


    strcpy(elements[40].name, "Niobium");
    elements[40].atomic_number = 41;
    elements[40].radius = 207; 
    strcpy(elements[40].config, "[kr]4d^3 5s^2");
    strcpy(elements[40].block, "d");
    strcpy(elements[40].state ,"Solid");
    strcpy(elements[40].symbol,"Nb");

    strcpy(elements[41].name, "Molybdenum");
    elements[41].atomic_number = 42;
    elements[41].radius = 209; 
    strcpy(elements[41].config, "[kr]4d^5 5s^1");
    strcpy(elements[41].block, "d");
    strcpy(elements[41].state ,"Solid");
    strcpy(elements[41].symbol,"Mo");

    strcpy(elements[42].name, "Technetium");
    elements[42].atomic_number = 43;
    elements[42].radius = 209; 
    strcpy(elements[42].config, "[kr]4d^5 5s^2");
    strcpy(elements[42].block, "d");
    strcpy(elements[42].state ,"Radio active");
    strcpy(elements[42].symbol,"Tc");

    strcpy(elements[43].name, "Ruthenium");
    elements[43].atomic_number = 44;
    elements[43].radius = 207; 
    strcpy(elements[43].config, "[kr]4d^7 5s^1");
    strcpy(elements[43].block, "d");
    strcpy(elements[43].state ,"Solid");
    strcpy(elements[43].symbol,"Ru");

    strcpy(elements[44].name, "Rhodium");
    elements[44].atomic_number = 45;
    elements[44].radius = 195; 
    strcpy(elements[44].config, "[kr]4d^8 5s^1");
    strcpy(elements[44].block, "d");
    strcpy(elements[44].state ,"Solid");
    strcpy(elements[44].symbol,"Rh");

    strcpy(elements[45].name, "Palladium");
    elements[45].atomic_number = 46;
    elements[45].radius = 202; 
    strcpy(elements[45].config, "[kr]4d^10 5s^0");
    strcpy(elements[45].block, "d");
    strcpy(elements[45].state ,"Solid");
    strcpy(elements[45].symbol,"Pd");

    strcpy(elements[46].name, "Silver");
    elements[46].atomic_number = 47;
    elements[46].radius = 172; 
    strcpy(elements[46].config, "[kr]4d^10 5s^1");
    strcpy(elements[46].block, "d");
    strcpy(elements[46].state ,"Solid");
    strcpy(elements[46].symbol,"Ag");

    strcpy(elements[47].name, "Cadmium");
    elements[47].atomic_number = 48;
    elements[47].radius = 158; 
    strcpy(elements[47].config, "[kr]4d^10 5s^2");
    strcpy(elements[47].block, "d");
    strcpy(elements[47].state ,"Solid");
    strcpy(elements[47].symbol,"Cd");

    strcpy(elements[48].name, "Indium");
    elements[48].atomic_number = 49;
    elements[48].radius = 193; 
    strcpy(elements[48].config, "[kr]5s^2 5p^1");
    strcpy(elements[48].block, "p");
    strcpy(elements[48].state ,"Solid");
    strcpy(elements[48].symbol,"In");

    strcpy(elements[49].name, "Tin");
    elements[49].atomic_number = 50;
    elements[49].radius = 217; 
    strcpy(elements[49].config, "[kr]5s^2 5p^2");
    strcpy(elements[49].block, "p");
    strcpy(elements[49].state ,"Solid");
    strcpy(elements[49].symbol,"Sn");

    strcpy(elements[50].name, "Antimony");
    elements[50].atomic_number = 51;
    elements[50].radius = 206; 
    strcpy(elements[50].config, "[kr]5s^2 5p^3");
    strcpy(elements[50].block, "p");
    strcpy(elements[50].state ,"Solid");
    strcpy(elements[50].symbol,"Sb");

    strcpy(elements[51].name, "Tellurium");
    elements[51].atomic_number = 52;
    elements[51].radius = 206; 
    strcpy(elements[51].config, "[kr]5s^2 5p^4");
    strcpy(elements[51].block, "p");
    strcpy(elements[51].state ,"Solid");
    strcpy(elements[51].symbol,"Te");

    strcpy(elements[52].name, "Iodine");
    elements[52].atomic_number = 53;
    elements[52].radius = 198; 
    strcpy(elements[52].config, "[kr]5s^2 5p^5");
    strcpy(elements[52].block, "p");
    strcpy(elements[52].state ,"Solid");
    strcpy(elements[52].symbol,"I");

    strcpy(elements[53].name, "Xenon");
    elements[53].atomic_number = 54;
    elements[53].radius = 216; 
    strcpy(elements[53].config, "[kr]5s^2 5p^6");
    strcpy(elements[53].block, "p");
    strcpy(elements[53].state ,"Gas");
    strcpy(elements[53].symbol,"Xe");

    strcpy(elements[54].name, "Cesium");
    elements[54].atomic_number = 55;
    elements[54].radius = 343; 
    strcpy(elements[54].config, "[Xe]6s^1");
    strcpy(elements[54].block, "s");
    strcpy(elements[54].state ,"Solid");
    strcpy(elements[54].symbol,"Cs");

    strcpy(elements[55].name, "Barium");
    elements[55].atomic_number = 56;
    elements[55].radius = 268; 
    strcpy(elements[55].config, "[Xe]6s^2");
    strcpy(elements[55].block, "s");
    strcpy(elements[55].state ,"Solid");
    strcpy(elements[55].symbol,"Ba");

    strcpy(elements[56].name, "Lanthanum");
    elements[56].atomic_number = 57;
    elements[56].radius = 240; 
    strcpy(elements[56].config, "[Xe]5d^1 6s^2");
    strcpy(elements[56].block, "f");
    strcpy(elements[56].state ,"Solid");
    strcpy(elements[56].symbol,"La");

    strcpy(elements[57].name, "Cerium");
    elements[57].atomic_number = 58;
    elements[57].radius = 235; 
    strcpy(elements[57].config, "[Xe]4f^1 5d^1 6s^2");
    strcpy(elements[57].block, "f");
    strcpy(elements[57].state ,"Solid");
    strcpy(elements[57].symbol,"Ce");

    strcpy(elements[58].name, "Praseodymium");
    elements[58].atomic_number = 59;
    elements[58].radius = 239; 
    strcpy(elements[58].config, "[Xe]4f^3 6s^2");
    strcpy(elements[58].block, "f");
    strcpy(elements[58].state ,"Solid");
    strcpy(elements[58].symbol,"Pr");

    strcpy(elements[59].name, "Lanthanum");
    elements[59].atomic_number = 60;
    elements[59].radius = 229; 
    strcpy(elements[59].config, "[Xe]4f^4 6s^2");
    strcpy(elements[59].block, "f");
    strcpy(elements[59].state ,"Solid");
    strcpy(elements[59].symbol,"Nd");

    strcpy(elements[60].name, "Promethium");
    elements[60].atomic_number = 61;
    elements[60].radius = 243; 
    strcpy(elements[60].config, "[Xe] 4f^5 6s^2");
    strcpy(elements[60].block, "f");
    strcpy(elements[60].state ,"Solid");
    strcpy(elements[60].symbol, "Pm");
    
    strcpy(elements[61].name, "Samarium");
    elements[61].atomic_number = 62;
    elements[61].radius = 242; 
    strcpy(elements[61].config, "[Xe] 4f^6 6s^2");
    strcpy(elements[61].block, "f");
    strcpy(elements[61].state ,"Solid");
    strcpy(elements[61].symbol, "Sm");
    
    strcpy(elements[62].name, "Europium");
    elements[62].atomic_number = 63;
    elements[62].radius = 240 ; 
    strcpy(elements[62].config, "[Xe] 4f^7 6s^2");
    strcpy(elements[62].block, "f");
    strcpy(elements[62].state ,"Solid");
    strcpy(elements[62].symbol, "Eu");
    
    strcpy(elements[63].name, "Gadolinium");
    elements[63].atomic_number = 64;
    elements[63].radius = 179; 
    strcpy(elements[63].config, "[Xe] 4f^7 5d^1 6s^2");
    strcpy(elements[63].block, "f");
    strcpy(elements[63].state ,"Solid");
    strcpy(elements[63].symbol, "Gd");
    
    strcpy(elements[64].name, "Terbium");
    elements[64].atomic_number = 65;
    elements[64].radius = 237 ; 
    strcpy(elements[64].config, "[Xe] 4f^9 6s^2");
    strcpy(elements[64].block, "f");
    strcpy(elements[64].state ,"Solid");
    strcpy(elements[64].symbol, "Tb");
    
    strcpy(elements[65].name, "Dysprosium");
    elements[65].atomic_number = 66;
    elements[65].radius = 235 ; 
    strcpy(elements[65].config, "[Xe] 4f^10 6s^2");
    strcpy(elements[65].block, "f");
    strcpy(elements[65].state ,"Solid");
    strcpy(elements[65].symbol, "Dy");
    
    strcpy(elements[66].name, "Holmium");
    elements[66].atomic_number = 67;
    elements[66].radius = 233 ; 
    strcpy(elements[66].config, "[Xe] 4f^11 6s^2");
    strcpy(elements[66].block, "f");
    strcpy(elements[66].state ,"Solid");
    strcpy(elements[66].symbol, "Ho");
    
    strcpy(elements[67].name, "Erbium");
    elements[67].atomic_number = 68;
    elements[67].radius = 232; 
    strcpy(elements[67].config, "[Xe] 4f^12 6s^2");
    strcpy(elements[67].block, "f");
    strcpy(elements[67].state ,"Solid");
    strcpy(elements[67].symbol, "Er");
    
    strcpy(elements[68].name, "Thulium");
    elements[68].atomic_number = 69;
    elements[68].radius = 230; 
    strcpy(elements[68].config, "[Xe] 4f^13 6s^2");
    strcpy(elements[68].block, "f");
    strcpy(elements[68].state ,"Solid");
    strcpy(elements[68].symbol, "Tm");
    
    strcpy(elements[69].name, "Ytterbium");
    elements[69].atomic_number = 70;
    elements[69].radius = 228; 
    strcpy(elements[69].config, "[Xe] 4f^14 6s^2");
    strcpy(elements[69].block, "f");
    strcpy(elements[69].state ,"Solid");
    strcpy(elements[69].symbol, "Yb");
    
    strcpy(elements[70].name, "Lutetium");
    elements[70].atomic_number = 71;
    elements[70].radius = 227 ; 
    strcpy(elements[70].config, "[Xe] 4f^14 5d^1 6s^2");
    strcpy(elements[70].block, "f");
    strcpy(elements[70].state ,"Solid");
    strcpy(elements[70].symbol, "Lu");
    
    strcpy(elements[71].name, "Hafnium");
    elements[71].atomic_number = 72;
    elements[71].radius = 225; 
    strcpy(elements[71].config, "[Xe] 4f^14 5d^2 6s^2");
    strcpy(elements[71].block, "f");
    strcpy(elements[71].state ,"Solid");
    strcpy(elements[71].symbol, "Hf");
    
    strcpy(elements[72].name, "Tantalum");
    elements[72].atomic_number = 73;
    elements[72].radius = 149 ; 
    strcpy(elements[72].config, "[Xe] 4f^14 5d^3 6s^2");
    strcpy(elements[72].block, "f");
    strcpy(elements[72].state ,"Solid");
    strcpy(elements[72].symbol, "Ta");
    
    strcpy(elements[73].name, "Tungsten");
    elements[73].atomic_number = 74;
    elements[73].radius = 141; 
    strcpy(elements[73].config, "[Xe] 6s^2 4f^14 5d^4");
    strcpy(elements[73].block, "f");
    strcpy(elements[73].state ,"Solid");
    strcpy(elements[73].symbol, "W");
    
    strcpy(elements[74].name, "Rhenium");
    elements[74].atomic_number = 75;
    elements[74].radius = 205 ; 
    strcpy(elements[74].config, "[Xe] 4f^14 5d^5 6s^2");
    strcpy(elements[74].block, "f");
    strcpy(elements[74].state ,"Solid");
    strcpy(elements[74].symbol, "Re");
    
    strcpy(elements[75].name, "Osmium");
    elements[75].atomic_number = 76;
    elements[75].radius = 200 ; 
    strcpy(elements[75].config, "[Xe] 4f^14 5d^6 6s^2");
    strcpy(elements[75].block, "f");
    strcpy(elements[75].state ,"Solid");
    strcpy(elements[75].symbol, "Os");
    
    strcpy(elements[76].name, "Iridium");
    elements[76].atomic_number = 77;
    elements[76].radius = 200 ; 
    strcpy(elements[76].config, "[Xe] 4f^14 5d^7 6s^2");
    strcpy(elements[76].block, "d");
    strcpy(elements[76].state ,"Solid");
    strcpy(elements[76].symbol, "Ir");
    
    strcpy(elements[77].name, "Platinum");
    elements[77].atomic_number = 78;
    elements[77].radius = 139 ; 
    strcpy(elements[77].config, "[Xe] 4f^14 5d^9 6s^1");
    strcpy(elements[77].block, "d");
    strcpy(elements[77].state ,"Solid");
    strcpy(elements[77].symbol, "Pt");
    
    strcpy(elements[78].name, "Gold");
    elements[78].atomic_number = 79;
    elements[78].radius = 166 ; 
    strcpy(elements[78].config, "[Xe] 4f^14 5d^10 6s^1");
    strcpy(elements[78].block, "d");
    strcpy(elements[78].state ,"Solid");
    strcpy(elements[78].symbol, "Au");
    
    strcpy(elements[79].name, "Mercury");
    elements[79].atomic_number = 80;
    elements[79].radius = 155; 
    strcpy(elements[79].config, "[Xe] 4f^14 5d^10 6s^2");
    strcpy(elements[79].block, "d");
    strcpy(elements[79].state ,"Solid");
    strcpy(elements[79].symbol, "Hg");

    strcpy(elements[80].name, "Thallium");
    elements[80].atomic_number = 81;
    elements[80].radius = 196;
    strcpy(elements[80].config, "[Xe] 4f^14 5d^10 6s^2 6p^1");
    strcpy(elements[80].block, "p");
    strcpy(elements[80].state ,"Solid");
    strcpy(elements[80].symbol,"Tl");


    strcpy(elements[81].name, "Lead");
    elements[81].atomic_number = 82;
    elements[81].radius = 202;
    strcpy(elements[81].config, "[Xe] 4f^14 5d^10 6s^2 6p^2");
    strcpy(elements[81].block, "p");
    strcpy(elements[81].state ,"Solid");
    strcpy(elements[81].symbol,"Pb");


    strcpy(elements[82].name, "Bismuth");
    elements[82].atomic_number = 83;
    elements[82].radius = 207;
    strcpy(elements[82].config, "[Xe] 4f^14 5d^10 6s^2 6p^3");
    strcpy(elements[82].block, "p");
    strcpy(elements[82].state ,"Solid");
    strcpy(elements[82].symbol,"Bi");


   strcpy(elements[83].name, "Polonium");
   elements[83].atomic_number = 84;
   elements[83].radius = 197;
   strcpy(elements[83].config, "[Xe ]4f^14 5d^10 6s^2 6p^4");
   strcpy(elements[83].block, "p");
   strcpy(elements[83].state ,"Solid");
   strcpy(elements[83].symbol,"Po");


   strcpy(elements[84].name, "Astatine");
   elements[84].atomic_number = 85;
   elements[84].radius = 202;
   strcpy(elements[84].config, "[Xe] 4f^14 5d^10 6s^2 6p^5");
   strcpy(elements[84].block, "p");
   strcpy(elements[84].state ,"Solid");
   strcpy(elements[84].symbol,"At");


   strcpy(elements[85].name, "Radon");
   elements[85].atomic_number = 86;
   elements[85].radius = 220;
   strcpy(elements[85].config, "[Xe] 4f^14 5d^10 6s^2 6p^6");
   strcpy(elements[85].block, "p");
   strcpy(elements[85].state ,"Gas");
   strcpy(elements[85].symbol,"Rn");


   strcpy(elements[86].name, "Francium");
   elements[86].atomic_number = 87;
   elements[86].radius = 348;
   strcpy(elements[86].config, "[Rn] 7s^1");
   strcpy(elements[86].block, "s");
   strcpy(elements[86].state ,"Solid");
   strcpy(elements[86].symbol,"Fr");


   strcpy(elements[87].name, "Radium");
   elements[87].atomic_number = 88;
   elements[87].radius = 283;
   strcpy(elements[87].config, "[Rn] 7s^2");
   strcpy(elements[87].block, "s");
   strcpy(elements[87].state ,"Solid");
   strcpy(elements[87].symbol,"Ra");


   strcpy(elements[88].name, "Actinium");
   elements[88].atomic_number = 89;
   elements[88].radius = 235;
   strcpy(elements[88].config, "[Rn] 6d^1 7s^2");
   strcpy(elements[88].block, "d");
   strcpy(elements[88].state ,"Solid");
   strcpy(elements[88].symbol,"Ac");


   strcpy(elements[89].name, "Thorium");
   elements[89].atomic_number = 90;
   elements[89].radius = 237;
   strcpy(elements[89].config, "[Rn] 6d^2 7s^2");
   strcpy(elements[89].block, "f");
   strcpy(elements[89].state ,"Solid");
   strcpy(elements[89].symbol,"Th");


   strcpy(elements[90].name, "Protactinium");
   elements[90].atomic_number = 91;
   elements[90].radius = 231;
   strcpy(elements[90].config, "[Rn] 5f^2 6d^1 7s^2");
   strcpy(elements[90].block, "f");
   strcpy(elements[90].state ,"Solid");
   strcpy(elements[90].symbol,"Pa");


   strcpy(elements[91].name, "Uranium");
   elements[91].atomic_number = 92;
   elements[91].radius = 186;
   strcpy(elements[91].config, "[Rn] 5f^3 6d^1 7s^2");
   strcpy(elements[91].block, "f");
   strcpy(elements[91].state ,"Solid");
   strcpy(elements[91].symbol,"U");


   strcpy(elements[92].name, "Neptunium");
   elements[92].atomic_number = 93;
   elements[92].radius = 186;
   strcpy(elements[92].config, "[Rn] 5f^4 6d^1 7s^2");
   strcpy(elements[92].block, "f");
   strcpy(elements[92].state ,"Synthetic");
   strcpy(elements[92].symbol,"Np");


   strcpy(elements[93].name, "Plutonium");
   elements[93].atomic_number = 94;
   elements[93].radius = 175;
   strcpy(elements[93].config, "[Rn] 5f^6 7s^2");
   strcpy(elements[93].block, "f");
   strcpy(elements[93].state ,"Synthetic");
   strcpy(elements[93].symbol,"Pu");


   strcpy(elements[94].name, "Americium");
   elements[94].atomic_number = 95;
   elements[94].radius = 186;
   strcpy(elements[94].config, "[Rn] 5f^7 7s^2");
   strcpy(elements[94].block, "f");
   strcpy(elements[94].symbol,"Am");


   strcpy(elements[95].name, "Curium");
   elements[95].atomic_number = 96;
   elements[95].radius = 186;
   strcpy(elements[95].config, "[Rn] 5f^7 6d^1 7s^2");
   strcpy(elements[95].block, "f");
   strcpy(elements[95].state ,"Synthetic");
   strcpy(elements[95].symbol,"Cm");


   strcpy(elements[96].name, "Berkelium");
   elements[96].atomic_number = 97;
   elements[96].radius = 186;
   strcpy(elements[96].config, "[Rn] 5f^9 7s^2");
   strcpy(elements[96].block, "f");
   strcpy(elements[96].state ,"Synthetic");
   strcpy(elements[96].symbol,"Bk");


   strcpy(elements[97].name, "Californium");
   elements[97].atomic_number = 98;
   elements[97].radius = 186;
   strcpy(elements[97].config, "[Rn] 5f^10 7s^2");
   strcpy(elements[97].block, "f");
   strcpy(elements[97].state ,"Synthetic");
   strcpy(elements[97].symbol,"Cf");


   strcpy(elements[98].name, "Einsteinium");
    elements[98].atomic_number = 99;
    elements[98].radius = 186;
    strcpy(elements[98].config, "[Rn] 5f^11 7s^2");
    strcpy(elements[98].block, "f");
    strcpy(elements[98].state ,"Synthetic");
    strcpy(elements[98].symbol,"Es");


    strcpy(elements[99].name, "Fermium");
    elements[99].atomic_number = 100;
    elements[99].radius = 186;
    strcpy(elements[99].config, "[Rn] 5f^12 7s^2");
    strcpy(elements[99].block, "f");
    strcpy(elements[99].state ,"Synthetic");
    strcpy(elements[99].symbol,"Fm");


    strcpy(elements[100].name, "Fermium");
    elements[100].atomic_number = 101;
    elements[100].radius = 0; 
    strcpy(elements[100].config, "[Rn] 5f^13 7s^2");
    strcpy(elements[100].block, "f");
    strcpy(elements[100].state ,"Radio active");
    strcpy(elements[100].symbol,"Md");

    strcpy(elements[101].name, "Nobelium");
    elements[101].atomic_number = 102;
    elements[101].radius = 0; 
    strcpy(elements[101].config, "[Rn] 5f^14 7s^2");
    strcpy(elements[101].block, "f");
    strcpy(elements[101].state ,"Radio active");
    strcpy(elements[101].symbol,"No");

    strcpy(elements[102].name, "Lawrencium");
    elements[102].atomic_number = 103;
    elements[102].radius = 0; 
    strcpy(elements[102].config, "[Rn] 5f^14 7s^2 7p^1");
    strcpy(elements[102].block, "f");
    strcpy(elements[102].state ,"Radio active");
    strcpy(elements[102].symbol,"Lr");

    strcpy(elements[103].name, "Rutherfordium");
    elements[103].atomic_number = 104;
    elements[103].radius = 0; 
    strcpy(elements[103].config, "[Rn] 5f^14 6d^2 7s^2");
    strcpy(elements[103].block, "d");
    strcpy(elements[103].state ,"Radio active");
    strcpy(elements[103].symbol,"Rf");

    strcpy(elements[104].name, "Dubium");
    elements[104].atomic_number = 105;
    elements[104].radius = 0; 
    strcpy(elements[104].config, "[Rn] 5f^14 6d^3 7s^2");
    strcpy(elements[104].block, "d");
    strcpy(elements[104].state ,"Radio active");
    strcpy(elements[104].symbol,"Db");

    strcpy(elements[105].name, "Seaborgium");
    elements[105].atomic_number = 106;
    elements[105].radius = 0; 
    strcpy(elements[105].config, "[Rn] 5f^14 6d^4 7s^2");
    strcpy(elements[105].block, "d");
    strcpy(elements[105].state ,"Radio active");
    strcpy(elements[105].symbol,"Sg");

    strcpy(elements[106].name, "Bhoeium");
    elements[106].atomic_number = 107;
    elements[106].radius = 0; 
    strcpy(elements[106].config, "[Rn] 5f^14 6d^5 7s^2");
    strcpy(elements[106].block, "d");
    strcpy(elements[106].state ,"Radio active");
    strcpy(elements[106].symbol,"Bh");

    strcpy(elements[107].name, "Hassium");
    elements[107].atomic_number = 108;
    elements[107].radius = 0; 
    strcpy(elements[107].config, "[Rn] 5f^14 6d^6 7s^2");
    strcpy(elements[107].block, "d");
    strcpy(elements[107].state ,"Radio active");
    strcpy(elements[107].symbol,"Hs");

    strcpy(elements[108].name, "Maitnerium");
    elements[108].atomic_number = 109;
    elements[108].radius = 0; 
    strcpy(elements[108].config, "[Rn] 5f^14 6d^7 7s^2");
    strcpy(elements[108].block, "d");
    strcpy(elements[108].state ,"Radio active");
    strcpy(elements[108].symbol,"Mt");

    strcpy(elements[109].name, "Damstadtium");
    elements[109].atomic_number = 110;
    elements[109].radius = 0; 
    strcpy(elements[109].config, "[Rn] 5f^14 6d^8 7s^2");
    strcpy(elements[109].block, "d");
    strcpy(elements[109].state ,"Radio active");
    strcpy(elements[109].symbol,"Ds");

    strcpy(elements[110].name, "Rontgenium");
    elements[110].atomic_number = 111;
    elements[110].radius = 0; 
    strcpy(elements[110].config, "[Rn] 5f^14 6d^9 7s^2");
    strcpy(elements[110].block, "d");
    strcpy(elements[110].state ,"Radio active");
    strcpy(elements[110].symbol,"Rg");

    strcpy(elements[111].name, "Copernicium");
    elements[111].atomic_number = 112;
    elements[111].radius = 0; 
    strcpy(elements[111].config, "[Rn] 5f^14 6d^10 7s^2");
    strcpy(elements[111].block, "d");
    strcpy(elements[111].state ,"Radio active");
    strcpy(elements[111].symbol,"Cn");

    strcpy(elements[112].name, "Unniltrium");
    elements[112].atomic_number = 113;
    elements[112].radius = 0; 
    strcpy(elements[112].config, "[Rn] 5f^14 6d^10 7s^2 7p^1");
    strcpy(elements[112].block, "p");
    strcpy(elements[112].state ,"---");
    strcpy(elements[112].symbol,"Nh");

    strcpy(elements[113].name, "Ununquadium");
    elements[113].atomic_number = 114;
    elements[113].radius = 0; 
    strcpy(elements[113].config, "[Rn] 5f^14 6d^10 7s^2 7p^2");
    strcpy(elements[113].block, "p");
    strcpy(elements[113].state ,"Radio active");
    strcpy(elements[113].symbol,"Fl");

    strcpy(elements[114].name, "Ununpentium");
    elements[114].atomic_number = 115;
    elements[114].radius = 0; 
    strcpy(elements[114].config, "[Rn] 5f^14 6d^10 7s^2 7p^3");
    strcpy(elements[114].block, "p");
    strcpy(elements[114].state ,"---");
    strcpy(elements[114].symbol,"Mc");

    strcpy(elements[115].name, "Ununhexium");
    elements[115].atomic_number = 116;
    elements[115].radius = 0; 
    strcpy(elements[115].config, "[Rn] 5f^14 6d^10 7s^2 7p^4");
    strcpy(elements[115].block, "p");
    strcpy(elements[115].state ,"---");
    strcpy(elements[115].symbol,"Lv");

    strcpy(elements[116].name, "Ununseptium");
    elements[116].atomic_number = 117;
    elements[116].radius = 0; 
    strcpy(elements[116].config, "[Rn] 5f^14 6d^10 7s^2 7p^5");
    strcpy(elements[116].block, "p");
    strcpy(elements[116].state ,"---");
    strcpy(elements[116].symbol,"Ts");

    strcpy(elements[117].name, "Ununoctium");
    elements[117].atomic_number = 118;
    elements[117].radius = 0; 
    strcpy(elements[117].config, "[Rn] 5f^14 6d^10 7s^2 7p^6");
    strcpy(elements[117].block, "p");
    strcpy(elements[117].state ,"---");
    strcpy(elements[117].symbol,"Og");
}


void displayElement(struct Element elements[], int atomic_number) {
    int i;
    for (i = 0; i < 118; i++) {
        if (elements[i].atomic_number == atomic_number) {
            printf("Element Name: %s\n", elements[i].name);
            printf("Symbol : %s\n",elements[i].symbol);
            printf("Atomic Number: %d\n", elements[i].atomic_number);
            printf("Atomic Radius: %d pm\n", elements[i].radius);
            printf("State of existance: %s\n",elements[i].state);
            printf("Element Block: %s\n", elements[i].block);
            printf("Electronic Configuration: %s\n", elements[i].config);  
            return;
        }
    }
    printf("Element with atomic number %d not found.\n", atomic_number);
}

