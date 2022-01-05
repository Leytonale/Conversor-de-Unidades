#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

 
main(void)
{  int resp=0;
    while(resp==0){
 	int opc,numero;
 	    printf("Programa de conversion de multiples unidades\n\n");
 	    printf("A continuacion digite la opcion que desee y presione ENTER\n\n");
 		printf("Indique la magnitud la cual desea convertir su unidad\n\n");
 		printf("1.Longitud\n");
 		printf("2.Temperatura\n");
        printf("3.Presion\n");
        printf("4.Volumen\n");
        printf("5.Peso\n");
 		printf("6.Trabajo\n");
 		scanf("%d",&opc);
 		system("cls"); 
 		switch (opc){
 case 1:
      
 int num,num2,num3,num4,num5,num6,c,c2,c3,c4,c5;
 float cm,km,m,dm,yd;
 

 	printf("Conversor de Longitud\n");
 
 	printf("Seleccione la unidad inicial del valor que desea convertir. \n\n1.-Metros\n2.-Centimetros \n3.-Decimetros \n4.-Kilometros \n5.-Yarda \n\n");
 	scanf("%d",&num);
 	system("cls"); 
 	switch (num){ 
 	case 1: 
 		printf("Ha seleccionado la opcion de Metros\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Metros-->Centimetros \n2.-Metros-->Decimetros \n3.-Metros-->Kilometros\n4.-Metros-->Yarda\n");
		 	scanf("%d",&num2);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c);
		 	 system("cls"); 
			 switch (num2){
                    case 1:
			 	cm=c*100;
			 	printf("%dm son: %.3fcm",c,cm);
			 	break; 
			        case 2:
			  
			    dm=c*10;
			  	printf("%dm son: %.3fdm",c,dm);
			  	break; 
			        case 3:
			  	km=c*0.001;
			  	printf("%dm son: %.3fkm",c,km);
			  	break; 
			  	case 4:
			  	yd=c4*1.093;
			  	printf("%dm son: %.3fyd",c,yd);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
			 
	 break; 
	case 2:
		 	printf("Ha seleccionado la opcion de Centimetros\n");
		 	printf("A que unidad lo quiere convertir. \n\n1.-Centimetros-->Metros\n2.-Centimetros-->Decimetros \n3.-Centimetros--Kilometros\n4.-Centimetros-->Yarda\n\n ");  /*corregir*/
		 	scanf("%d",&num3);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
		 	 system("cls"); 
			 switch (num3){
                    case 1:
			 	m=c2*0.01;
			 	printf("%dcm son: %.3fm",c2,m);
			 	break; 
			        case 2:
			  
			     dm=c2*0.1;
			  	printf("%dcm son: %.3fdm",c2,dm);
			  	break; 
			        case 3:
			  	km=c2*0.00001;
			  	printf("%dcm son: %.3fkm",c2,km);
			  	break; 
			  	 case 4:
			  	yd=c4*0.010936;
			  	printf("%dcm son: %.3fyd",c2,yd);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
    
   break; 
	case 3:
			  printf("Ha seleccionado la opcion de Decimetros\n");
		 	printf("A que unidad lo quiere convertir. \n\n1.-Decimetros-->Metros\n2.-Decimetros-->Centimetros \n3.-Decimetros--->Kilometros\n4.-Decimetros-->Yarda\n\n");
		 	scanf("%d",&num4);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
		 	 system("cls"); 
			 switch (num4){
                    case 1:
			 	m=c3*0.1;
			 	printf("%ddm son: %.3fm",c3,m);
			 	break; 
			        case 2:
			  
			    cm=c3*10;
			  	printf("%ddm son: %.3fcm",c3,cm);
			  	break; 
			        case 3:
			  	km=c3*0.001;
			  	printf("%ddm son: %.3fkm",c3,km);
			  	break; 
			  	  case 4:
			  	yd=c4*0.109361;
			  	printf("%ddm son: %.3fyd",c3,yd);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
              

     break; 
	case 4:
			  printf("Ha seleccionado la opcion de Kilometros\n");
		 	printf("A que unidad lo quiere convertir. \n\n1.-Kilometros-->Metros\n2.-Kilometros-->Centimetros \n3.-Kilometros--->Decimetros\n4.-Kilometros-->Yarda\n\n");
		 	scanf("%d",&num5);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c4);
		 	 system("cls"); 
			 switch (num5){
                    case 1:
			 	m=c4*1000;
			 	printf("%dkm son: %.3fm",c4,m);
			 	break; 
			        case 2:
			  
			    cm=c4*100000;
			  	printf("%dkm son: %.3fcm",c4,cm);
			  	break; 
			        case 3:
			  	dm=c4*10000;
			  	printf("%dkm son: %.3fdm",c4,dm);
			  	break;  
                  case 4:
			  	yd=c4*1093.61;
			  	printf("%dkm son: %.3fyd",c4,yd);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
              
     break;
	case 5:
			  printf("Ha seleccionado la opcion de Yardas\n");
		 	printf("A que unidad lo quiere convertir. \n\n1.-Yardas-->Metros\n2.-Yardas-->Centimetros \n3.-Yardas--->Decimetros\n4.-Yardas-->Kilometros\n\n");
		 	scanf("%d",&num5);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c4);
		 	 system("cls"); 
			 switch (num5){
                    case 1:
			 	m=c4*0.9144;
			 	printf("%dyd son: %.3fm",c4,m);
			 	break; 
			        case 2:
			  
			    cm=c4*91.44;
			  	printf("%dyd son: %.3fcm",c4,cm);
			  	break; 
			        case 3:
			  	dm=c4*9.144;
			  	printf("%dyd son: %.3fdm",c4,dm);
			  	break;  
                  case 4:
			  	km=c4*0.000914;
			  	printf("%dyd son: %.3fkm",c4,km);
			  	break; 
			  	   default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break; 
               }
               break;
     default: 
system("CLS"); 
printf("Opcion invalida"); 
break; 
		
	}

      break;
 case 2:
 float F,K,C;
 

 	printf("Conversor de Temperatura\n");
 
 	printf("Seleccione la unidad inicial del valor que desea convertir. \n\n1.-Grados Centigrados\n2.-Grados Kelvin \n3.-Grados Fahrenheit \n\n");
 	scanf("%d",&num);
 	system("cls"); 
 	switch (num){ 
 	case 1: 
 		printf("Ha seleccionado la opcion de Centigrados\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Centigrados-->Kelvin \n2.-Centigrados-->Fahrenheit\n\n");
		 	scanf("%d",&num2);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c);
		 	 system("cls"); 
			 switch (num2){
                    case 1:
			 	K=c+273.15;
			 	printf("%dC son: %.3fK",c,K);
			 	break; 
			        case 2:
			  
			    F=c+32;
			  	printf("%dC son: %.3fF",c,F);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break; 
               }
			  
	 break; 
	case 2:
		 	printf("Ha seleccionado la opcion de Kelvin\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Kelvin-->Centigrados \n2.-Kelvin-->Fahrenheit\n\n");
		 	scanf("%d",&num2);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
		 	 system("cls"); 
			 switch (num2){
                    case 1:
			 	C=c2-273.15;
			 	printf("%dK son: %.3fC",c2,C);
			 	break; 
			        case 2:
			  
			    F=c2-459.67;
			  	printf("%dK son: %.3fF",c2,F);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break; 
               }
             
   break; 
	case 3:
			 printf("Ha seleccionado la opcion de Fahrenheit\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Fahrenheit-->Centigrados \n2.-Fahrenheit-->Kelvin\n\n");
		 	scanf("%d",&num4);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
		 	 system("cls"); 
			 switch (num4){
                    case 1:
			 	C=c3-17.7;
			 	printf("%dF son: %.3fC",c3,C);
			 	break; 
			        case 2:
			  
			    K=c3+255.92;
			  	printf("%dF son: %.3fF",c3,K);
			  	break; 
               }
      break;
         default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;        
		
	}


      break;
 case 3:
      
      float atm,mmHg,pa,bar;
 

 	printf("Conversor de Presion\n");
 
 	printf("Seleccione la unidad inicial del valor que desea convertir. \n\n1.-Milimetros de Mercurio (mmHg)\n2.-Atmosferas (atm) \n3.-Bares (bar) \n4.-Pascales (pa)\n\n");
 	scanf("%d",&num);
 	system("cls"); 
 	switch (num){ 
 	case 1: 
 		printf("Ha seleccionado la opcion de Milimetros de Mercurio (mmHg)\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Milimetros de Mercurio (mmHg)-->Atmosferas (atm) \n2.-Milimetros de Mercurio (mmHg)-->Pascales \n3.-Milimetros de Mercurio (mmHg)-->Bares\n\n");
		 	scanf("%d",&num2);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c);
		 	 system("cls"); 
			 switch (num2){
                    case 1:
			 	atm=c*0.001316;
			 	printf("%dmmHg son: %.3fatm",c,atm);
			 	break; 
			        case 2:
			  
			    pa=c*133.3223;
			  	printf("%dmmHg son: %.3fpa",c,pa);
			  	break; 
			        case 3:
			  	bar=c*0.001333;
			  	printf("%dmmHg son: %.6fbar",c,pa);
			  	break; 
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
			   
               }
		

	 break; 
	case 2:
		 	printf("Ha seleccionado la opcion de Atmosferas\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Atmosferas (atm) -->Milimetros de Mercurio (mmHg) \n2.-Atmosferas (atm) -->Pascales \n3.-Atmosferas (atm) -->Bares\n\n");
		 	scanf("%d",&num3);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
		 	 system("cls"); 
			 switch (num3){
                    case 1:
			 	mmHg=c2*760;
			 	printf("%datm son: %.3fmmHg",c2,mmHg);
			 	break; 
			        case 2:
			  
			    pa=c2*101325;
			  	printf("%datm son: %.3fpa",c2,pa);
			  	break; 
			        case 3:
			  	bar=c2*1.01325;
			  	printf("%datm son: %.3fbar",c2,bar);
			  	break;
                   default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
               }
        

   break; 
	case 3:
			  printf("Ha seleccionado la opcion de Bares\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Bares -->Milimetros de Mercurio (mmHg) \n2.-Bares -->Pascales \n3.-Bares -->Atmosferas (atm)\n\n");
		 	scanf("%d",&num4);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
		 	 system("cls"); 
			 switch (num4){
                    case 1:
			 	mmHg=c3*750.06;
			 	printf("%dbar son: %.3fmmHg",c3,mmHg);
			 	break; 
			        case 2:
			  
			    pa=c3*1;
			  	printf("%dbar son: %.3fpa",c3,pa);
			  	break; 
			        case 3:
			  	atm=c3*0.986923;
			  	printf("%dbar son: %.3fatm",c3,atm);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;   
               }
       
     break; 
	case 4:
			  printf("Ha seleccionado la opcion de Pascales\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Pascales -->Milimetros de Mercurio (mmHg) \n2.-Pascales -->Bares \n3.-Pascales -->Atmosferas (atm)\n\n");
		 	scanf("%d",&num5);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c4);
		 	 system("cls"); 
			 switch (num5){
                    case 1:
			 	mmHg=c4*0.007501;
			 	printf("%dpa son: %.6fmmHg",c4,mmHg);
			 	break; 
			        case 2:
			  
			    bar=c4*1;
			  	printf("%dpa son: %.3fbar",c4,bar);
			  	break; 
			        case 3:
			  	atm=c4*0.00001;
			  	printf("%dpa son: %.8fatm",c4,atm);
			  	break; 
			  	 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;   
               }
        break;       
        default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;   
			
		
	}
      break;
 case 4:
 
 float cm3,ml,l,m3;
 

     printf("Conversor de Volumen\n");
 
     printf("Seleccione la unidad inicial del valor que desea convertir. \n\n1.-Litros\n2.-Mililitros \n3.-Centimetro Cubico \n4.-Metro Cubico\n\n");
     scanf("%d",&num);
     system("cls"); 
     switch (num){ 
     case 1: 
         printf("Ha seleccionado la opcion de Litros\n");
            printf("¿A que unidad lo quiere convertir? \n\n1.-Litros-->Mililitros \n2.-Litros-->Centimetros Cubico \n3.-Litro-->Metro Cubico\n\n");
            scanf("%d",&num2);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c);
            system("cls"); 
            switch (num2){
                    case 1:
                ml=c*1000;
                printf("%dl son: %.3fml",c,ml);
                break; 
                   case 2:
             
               cm3=c*1000;
                 printf("%dl son: %.3fcm3",c,cm3);
                 break; 
                   case 3:
                 m3=c*0.001;
                 printf("%di son: %.3m3",c,m3);
                 break; 
                 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
               }
             
    break; 
    case 2:
            printf("Ha seleccionado la opcion de Mililitros\n");
            printf("A que unidad lo quiere convertir. \n\n1.-Mililitros-->Litros\n2.-Mililitros-->Centimetro Cubico \n3.-Mililitros--Metro Cubico\n\n");  /*corregir*/
            scanf("%d",&num3);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c2);
            system("cls"); 
            switch (num3){
                    case 1:
                l=c2*0.001;
                printf("%dml son: %.3fl",c2,l);
                break; 
                   case 2:
             
                cm3=c2*1;
                 printf("%dml son: %.3fcm3",c2,cm3);
                 break; 
                   case 3:
                 m3=c2*0.000001;
                 printf("%dml son: %.3fm3",c2,m3);
                 break; 
                 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
               }
           
   break; 
    case 3:
             printf("Ha seleccionado la opcion de Centimetro Cubico\n");
            printf("A que unidad lo quiere convertir. \n\n1.-Centimetro Cubico-->Litros\n2.-Centimetro Cubico-->Mililitros \n3.-Centimetro Cubico--->Metro Cubico\n\n");
            scanf("%d",&num4);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c3);
            system("cls"); 
            switch (num4){
                    case 1:
                l=c3*0.001;
                printf("%dcm3 son: %.3l",c3,l);
                break; 
                   case 2:
             
               ml=c3*1;
                 printf("%dcm3 son: %.3ml",c3,ml);
                 break; 
                   case 3:
                 m3=c3*0.000001;
                 printf("%dcm3 son: %.8fm3",c3,m3);
                 break; 
                 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
               }
      
     break; 
    case 4:
             printf("Ha seleccionado la opcion de Metro Cubico\n");
            printf("A que unidad lo quiere convertir. \n\n1.-Metro Cubico-->Litros\n2.-Metro Cubico-->Mililitros \n3.-Metro Cubico--->Centimetro Cubico\n\n");
            scanf("%d",&num5);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c4);
            system("cls"); 
            switch (num5){
                    case 1:
                l=c4*1000;
                printf("%dm3 son: %.6fl",c4,l);
                break; 
                   case 2:
             
               ml=c4*0.1000000;
                 printf("%dm3 son: %.8fml",c4,ml);
                 break; 
                   case 3:
                 cm3=c4*1;
                 printf("%dm3 son: %.8fcm3",c4,cm3);
                 break; 
                 default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
               }
    break;
            default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;    
        
    }
  
      break;
 case 5:
 float mg,g,kg,ton,lib;
 

 	printf("Conversor de Peso\n");
 
 	printf("Seleccione la unidad inicial del valor que desea convertir. \n\n1.-Miligramo (mg) \n2.-Gramo \n3.-Kilogramo (bar) \n4.-Tonelada (pa)\n5.-Libra\n\n");
 	scanf("%d",&num);
 	system("cls"); 
 	switch (num){ 
 	case 1: 
 		printf("Ha seleccionado la opcion de Miligramo (mg)\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Miligramo (mg)-->Gramo (atm) \n2.-Miligramo (mg)-->Kilogramo \n3.-Miligramo (mg)-->Tonelada\n4.-Miligramo (mg)-->Libra\n\n");
		 	scanf("%d",&num2);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c);
		 	 system("cls");
			 switch (num2){
                    case 1:
			 	g=c*0.001;
			 	printf("%dmg son: %.3fg",c,g);
			 	break; 
			        case 2:			  
			    kg=c*0.000001;
			  	printf("%dmg son: %.3fkg",c,kg);
			  	break; 
			        case 3:
			  	ton=c*0.0000001;
			  	printf("%dmg son: %.8fton",c,ton);
			  	break; 
			  	case 4:
			  	lib=c*0.000002;
			  	printf("%dmg son: %.6flib",c,lib);
			  	break; 
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
		
	 break; 
	case 2:
		 	printf("Ha seleccionado la opcion de Gramo\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Gramo-->Miligramo (mg) \n2.-Gramo-->Kilogramo \n3.-Gramo-->Tonelada\n4.-Gramo-->Libra\n\n");
		 	scanf("%d",&num3);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
		 	 system("cls");
			 switch (num3){
                    case 1:
			 	mg=c2*1000;
			 	printf("%dg son: %.3fmg",c2,mg);
			 	break; 
			        case 2:			  
			   kg=c2*0.001;
			  	printf("%dg son: %.3fkg",c2,kg);
			  	break; 
			        case 3:
			  	ton=c2*0.000001;
			  	printf("%dg son: %.6fton",c2,ton);
			  	break; 
			  	case 4:
			  	lib=c2*0.002205;
			  	printf("%dg son: %.6flib",c2,lib);
			  	break;
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
         
    
   break; 
	case 3:
			  printf("Ha seleccionado la opcion de Kilogramos\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Kilogramos -->Miligramo (mmHg) \n2.-Kilogramos -->Gramo \n3.-Kilogramos -->Tonelada\n4.-Kilogramo-->Libra\n\n");
		 	scanf("%d",&num4);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
		 	 system("cls"); 
			 switch (num4){
                    case 1:
			 	mg=c3*1000000;
			 	printf("%dkg son: %.3fmg",c3,mg);
			 	break; 
			        case 2:
			  
			    g=c3*1000;
			  	printf("%dkg son: %.3fg",c3,g);
			  	break; 
			        case 3:
			  	ton=c3*0.001;
			  	printf("%dkg son: %.3fkg",c3,ton);
			  	break; 
			  	   case 4:
			  	lib=c3*2.204623;
			  	printf("%dkg son: %.3flib",c3,lib);
			  	break; 
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
        

     break; 
	case 4:
			  printf("Ha seleccionado la opcion de Tonelada\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Tonelada -->Miligramo (mmHg) \n2.-Tonelada -->Gramo \n3.-Tonelada -->Kilogramo\n4.-Tonelada-->Libra\n\n");
		 	scanf("%d",&num5);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c4);
		 	 system("cls"); 
			 switch (num5){
                    case 1:
			 	mg=c4*1000000000;
			 	printf("%dton son: %.3fmg",c4,mg);
			 	break; 
			        case 2:
			  
			    g=c4*1000000;
			  	printf("%dton son: %.3fg",c4,g);
			  	break; 
			        case 3:
			  	kg=c4*1000;
			  	printf("%ton son: %.3fkg",c4,kg);
			  	break; 
			  	   case 4:
			  	lib=c4*2204.62;
			  	printf("%dton son: %.3flib",c4,lib);
			  	break; 
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
			  	
               }

     
      break;
     case 5:
			  printf("Ha seleccionado la opcion de Libra\n");
		 	printf("¿A que unidad lo quiere convertir? \n\n1.-Libra -->Miligramo (mmHg) \n2.-Libra -->Gramo \n3.-Libra -->Kilogramo\n4.-Libra-->Tonelada\n\n");
		 	scanf("%d",&num6);
		 	system("cls"); 
		 	 printf("Ingrese el numero a convertir\n");
		 	 scanf("%d",&c5);
		 	 system("cls"); 
			 switch (num6){
                    case 1:
			 	mg=c5*453592.37;
			 	printf("%dlib son: %.3fmg",c5,mg);
			 	break; 
			        case 2:
			  
			    g=c5*453.59;
			  	printf("%dlib son: %.3fg",c5,g);
			  	break; 
			        case 3:
			  	kg=c5*0.453592;
			  	printf("%dlib son: %.8fkg",c5,kg);
			  	break; 
			  	   case 4:
			  	ton=c5*0.000446;
			  	printf("%dlib son: %.8fton",c5,ton);
			  	break; 
			  	default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
      break;
			default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
		
	}

    
      break;
 case 6:
     float j,kj,cal,kcal,klv,klc;
 

     printf("Conversor de Trabajo\n");
 
     printf("Seleccione la unidad inicial del valor que desea convertir. \n1.-Joule\n2.-Kilo Joule \n3.-Caloria \n4.-Kilo Caloria\n5.-kilovatio\n\n");
     scanf("%d",&num);
     system("cls"); 
     switch (num){ 
     case 1: 
         printf("Ha seleccionado la opcion de Joule\n");
            printf("¿A que unidad lo quiere convertir? \n\n1.-Joule-->Kilo Joule \n2.-Joule--> Caloria \n3.-Joule-->Kilo Caloria\n4.-Joule-->kilovatio\n\n");
            scanf("%d",&num2);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c);
            system("cls"); 
            switch (num2){
                    case 1:
                kj=c*0.001;
                printf("%dJ son: %.3fkJ",c,kj);
                break; 
                   case 2:
             
               cal=c*0.239006;
                 printf("%dJ son: %.8fcal",c,cal);
                 break; 
                   case 3:
                 kcal=c*0.000239;
                 printf("%dJ son: %.8fkcal",c,kcal);
                 
                 break;
                 case 4: 
                 klv=c*0,00000027;
                printf("%dJ son: %.8fkWh",c,klv);
                 break; 
                  default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
       
   
    break; 
    case 2:
            printf("Ha seleccionado la opcion de Kilo Joule\n");
            printf("A que unidad lo quiere convertir. \n\n1.-kilo Joule-->Joule\n2.-Kilo Joule-->Caloria \n3.-Kilo Joule-->Kilocalorias \n4.-kilo Joule-->Kilo Vatios \n\n");  /*corregir*/
            scanf("%d",&num3);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c2);
            system("cls"); 
            switch (num3){
                    case 1:
                j=c2*1000;
                printf("%dkJ son: %.3f",c2,j);
                break; 
                   case 2:
             
                cal=c2*239.005736;
                 printf("%dkJ son: %.8f",c2,cal);
                 break; 
                   case 3:
                 kcal=c2*0.239006;
                 printf("%dkJ son: %.8f",c2,kcal);
                 break; 
                     case 4:
             
               klv=c*0.000278;
                 printf("%dkJ son: %.8f",c2,cal);
                 break; 
                  default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
           
     
   break; 
    case 3:
             printf("Ha seleccionado la opcion de Caloria\n");
            printf("A que unidad lo quiere convertir. \n\n1.Caloria--->Joule\n2.-Caloria-->Kilo Joule \n3.-Caloria--->Kilocalorias\n4.-Caloria--->Kilo Vatios \n\n");
            scanf("%d",&num4);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c3);
            system("cls"); 
            switch (num4){
                    case 1:
                j=c3*4.184;
                printf("%dKcal son: %.4cal",c3,cal);
                break; 
                   case 2:
             
               kj=c3*0.004184;
                 printf("%dKcal son: %.3kj",c3,kj);
                 break; 
             
                   case 3:
                 kcal=c3*0.001;
                 printf("%dKcal son: %.8fkcal",c3,kcal);
                 break ;
                     case 4:
             
               klv=c3*0.000001;
                 printf("%dKcal son: %.8fkWh",c3,klv);
                 break; 
                  default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
               }
        
      
     break; 
    case 4:
             printf("Ha seleccionado la opcion de Kilocalorias\n");
            printf("A que unidad lo quiere convertir. \n\n1.-Kilocalorias-->Joule\n2.-Kilocalorias-->Kilo Joule \n3.-Kilocalorias--->Caloria\n4.-Kilocalorias-->kilovatios\n\n");
            scanf("%d",&num5);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c4);
            system("cls"); 
            switch (num5){
                    case 1:
                j=c4*4.184;
                printf("%dkcal son: %.6fJ",c4,j);
                break; 
                   case 2:
             
               kj=c4*4.184;
                 printf("%dkcal son: %.8fkJ",c4,kj);
                 break; 
                   case 3:
                 cal=c4*1000;
                 printf("%dkcal son: %.8fcal",c4,cal);
                 break; 
               
                case 4:
             
               klv=c*0.0001162;
                 printf("%kcal son: %.8fkWh",c4,klv);
                 break; 
                  default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
                 }
           
      break;
        case 5:
                         printf("Ha seleccionado la opcion de Kilovatios\n");
            printf("A que unidad lo quiere convertir. \n\n1.-Kilovatios-->Joule\n2.-Kilovatios-->Kilo Joule \n3.-Kilovatios--->Caloria\n4.-Kilovatios-->kilocalorias\n\n");
            scanf("%d",&num6);
            system("cls"); 
            printf("Ingrese el numero a convertir\n");
            scanf("%d",&c5);
            system("cls"); 
            switch (num6){
                    case 1:
                j=c5*36000000;
                printf("%dkWh son: %.8fj",c5,j);
                break; 
                   case 2:
             
               kj=c5*3600;
                 printf("%dkWh son: %.8fkj",c5,kj);
                 break; 
                   case 3:
                 cal=c5*860420.65;
                 printf("%dkWh son: %.8fcal",c5,cal);
                 break; 
               
                case 4:
             
                klv=c5*860.42065;
                 printf("%dkWh son: %.8fklc",c5,klv);
                 break; 
                 
                  default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
                 }
   
      }
 break;
              default: 
                system("CLS"); 
                printf("Opcion invalida"); 
                break;
      }
      printf("\n\nDesea realizar otra conversion? \n\n'Si' (Presione 0 'cero') \n'No' (Presione otro numero)\n");
     scanf("%d",&resp);    
     system("CLS");
     printf("\nSebastian Galvan                                           Informatica I - 1R1\n");
     printf("\nFrancisco Gonzalez\n");
     printf("\nAlejandro Leyton\n");
      }
 getch();
  return 0;	

}
  

