%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void yyerror(char *s);


void installid(char s[],int n);
int getid(char s[]);
void dis();
int relop(int a, int b, int c);
int val, val1, val2, inc;

char reg[7][10]={"t1","t2","t3","t4","t5","t6"};

extern FILE *yyout;
extern char *yylex();
char buffer[30];

struct table{
char name[10];
int val;
}symbol[53];
%}

%union{
int no;
char var[10];
char code[50];
}

%token <var> id
%token <no> num 
%token print EXIT IF ELSE ptable FOR WHILE DO FACT
%type <no>  start exp assignment term condn for_statement while_statement do_statement factorial
%start start
%left and or 
%left '>' '<' eq ne ge le 
%left '+' '-' '%'
%left '*' '/'

%%


start	: EXIT ';'		{exit(0);}
	| print exp ';'		{ printf("Printing: %d\n",$2); fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],$2,reg[0]); }
	| assignment ';'		{;}
	| start print exp ';'  { {printf("Printing: %d \n",$3);} fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],$3,reg[0]); ; }
	| start assignment ';'	{;}
	| start EXIT ';'	{exit(EXIT_SUCCESS);}
	| ptable ';' 		{ dis();}
	| start ptable ';'	{ dis();}
	| for_statement 	{ ;	}
	| start for_statement { ; }
	| while_statement	{ ; }
	| start while_statement	{ ; }
	| do_statement	{ ; }
	| start do_statement	{ ; }
	| condn			{;}
	| start condn		{;}
	| start factorial	{;}
	| factorial	{;}
	        ;


  for_statement : FOR '(' id '=' exp  ';' id '<' num ';' id '=' id '+' num ')' '{' print num ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=$19; inc=$15; 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val2);  
                          }
		fprintf(yyout,"%s := %d;\ni := %s;\n\nL1: Check %s := %s < %d\n if(%s) goto L2;\n goto L3;\nL2: %s := %s + %d;\n print %d\n goto L1;\n L3: ",reg[0],$5,reg[0],reg[1],reg[0],$9,reg[1],reg[0],reg[0],$15,$19);
		          }
     | FOR '(' id '=' exp  ';' id le num ';' id '=' id '+' num ')' '{' print num ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=$19; inc=$15; 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val2);  
                          }
		fprintf(yyout,"%s := %d;\ni := %s;\n\nL1: Check %s := %s le %d\n if(%s) goto L2;\n goto L3;\nL2: %s := %s + %d;\n print %d\n goto L1;\n L3: ",reg[0],$5,reg[0],reg[1],reg[0],$9,reg[1],reg[0],reg[0],$15,$19);
		          }
      | FOR '(' id '=' exp  ';' id '>' num ';' id '=' id '-' num ')' '{' print num ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=$19; inc=$15; 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           			printf("Printing %d\n",val2);  
                          }
		fprintf(yyout,"%s := %d;\ni := %s;\n\nL1: Check %s := %s > %d\n if(%s) goto L2;\n goto L3;\nL2: %s := %s - %d;\n print %d\n goto L1;\n L3: ",reg[0],$5,reg[0],reg[1],reg[0],$9,reg[1],reg[0],reg[0],$15,$19);
		          }
     | FOR '(' id '=' exp  ';' id ge num ';' id '=' id '-' num ')' '{' print num ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=$19; inc=$15; 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
	           			printf("Printing %d\n",val2);  
                          }
		fprintf(yyout,"%s := %d;\ni := %s;\n\nL1: Check %s := %s ge %d\n if(%s) goto L2;\n goto L3;\nL2: %s := %s - %d;\n print %d\n goto L1;\n L3: ",reg[0],$5,reg[0],reg[1],reg[0],$9,reg[1],reg[0],reg[0],$15,$19);
		          }
     | FOR '(' id '=' exp  ';' id '<' num ';' id '=' id '+' num ')' '{' print id ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=getid($19); inc=$15; 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val); 
                          }
		          }
     | FOR '(' id '=' exp  ';' id le num ';' id '=' id '+' num ')' '{' print id ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=getid($19); inc=$15; 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val);  
                          }
		          }
      | FOR '(' id '=' exp  ';' id '>' num ';' id '=' id '-' num ')' '{' print id ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=getid($19); inc=$15; 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           		    printf("Printing %d\n",val); 
                          }
		          }
     | FOR '(' id '=' exp  ';' id ge num ';' id '=' id '-' num ')' '{' print id ';' '}' 
        {  {installid($3,$5);} val=getid($3);val1=$9;val2=getid($19); inc=$15; 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
						printf("Printing %d\n",val);                           }
		          }
      ;

do_statement	: DO '{' print exp ';' id '=' exp '+' exp ';' '}' WHILE '(' exp '<' exp ')' ';' 
						{ int n=$15;
						  do{printf("Printing: %d\n",n);
						  n=n+$10; 
						}while(n<=$17);
						installid($6,n); 
				fprintf(yyout,"L1: print %s;\n%s := %s + %d;\n%s := %s;\n%s = %s <= %d; \nif (%s) goto L1;\n\n",reg[0],reg[0],reg[0],$10,$6,reg[0],reg[1],$6,$17,reg[1]);}

				| DO '{' print exp ';' id '=' exp '-' exp ';' '}' WHILE '(' exp '>' exp ')' ';' 
						{ int n=$15;
						  do{printf("Printing: %d\n",n);
						  n=n-$10; 
						}while(n>=$17);
						installid($6,n); 
				fprintf(yyout,"L1: print %s;\n%s := %s - %d;\n%s := %s;\n%s = %s >= %d; \nif (%s) goto L1;\n\n",reg[0],reg[0],reg[0],$10,$6,reg[0],reg[1],$6,$17,reg[1]);}
;

while_statement : WHILE '(' id '>' num ')' '{' print exp ';' exp '=' exp '-' num ';' '}' 
				  {int loopvar=$11; 
				   while(loopvar>$5)
				   {if($9==$11)
				   		{printf("Printing: %d\n",loopvar); }
					else 
						{printf("Printing: %d\n",$9);} 
				    loopvar=loopvar-$15;
				   } 

fprintf(yyout,"L1: %s = %s > %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s - %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],$3,$5,reg[0],reg[0],reg[0],reg[0],$15,$3,reg[0]);
 }
	
				| WHILE '(' id '<' num ')' '{' print exp ';' exp '=' exp '+' num ';' '}' 
				  {int loopvar=$11; 		
				   while(loopvar<$5)
				   {if($9==$11)
				   		{printf("Printing: %d\n",loopvar);}
					else 
						{printf("Printing: %d\n",$9);} 
					loopvar=loopvar+$15;
				   }
fprintf(yyout,"L1: %s = %s < %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s + %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],$3,$5,reg[0],reg[0],reg[0],reg[0],$15,$3,reg[0]);
				  }

				| WHILE '(' id ne num ')' '{' print exp ';' exp '=' exp '+' num ';'  '}' 
				  {int loopvar=$11; 				
				   while(loopvar!=$5)
				   		{if($9==$11)
				   			{printf("Printing: %d\n",loopvar);}
						 else 
						 	{printf("Printing: %d\n",$9);}
						 loopvar=loopvar+$15;
						}
    	  fprintf(yyout,"L1: %s = %s ne %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s + %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],$3,$5,reg[0],reg[0],reg[0],reg[0],$15,$3,reg[0]);
				  }
	; 

assignment : id '=' exp  { {installid($1,$3);} fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[0],$3,$1,reg[0]); ; }
			;
 condn	: IF '(' exp ')' '{' id '=' exp ';' '}' ELSE '{' id '=' exp ';''}' 	{ if($3>0){installid($6,$8);}else{installid($13,$15);} 
	fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],$8,$6,reg[1],reg[2],$15,$13,reg[2]); ;}
	| IF '(' exp ')' '{' id '=' exp ';' '}' 				{ if($3>0){installid($6,$8);} 
fprintf(yyout,"if nz %s;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],$8,$6,reg[1]); ;} 

	| IF '(' exp ')' '{' id '=' exp ';' '}' ELSE '{' IF '(' exp ')' '{'id '=' exp ';''}' ELSE '{'id '=' exp ';''}' '}' 	{ if($3>0){installid($6,$8);}else{ if($15>0){installid($18,$20);}else{ installid($25,$27);} } 
fprintf(yyout, "if z %s goto _MAINELSE; \n%s := %d;\n%s := %s;\n\n _MAINELSE : else;\n if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n;",reg[0],reg[1],$8,$6,reg[1],reg[2],reg[3],$20,$18,reg[3],reg[4],$27,$25,reg[4]); ; }

	| IF '(' exp ')' '{' print exp ';' '}' ELSE '{' print exp ';' '}' 	{ if($3>0){printf("Printing: %d\n",$7);}else{printf("Printing: %d\n",$13);} 
fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\nprint %s;\n_LABEL : else;\n%s := %d;\nprint %s;\n\n",reg[0],reg[1],$7,reg[1],reg[2],$13,reg[2]);; }

	|IF '(' exp ')' '{' print exp ';' '}' 	{if($3>0){printf("Printing: %d\n",$7); }
fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],$7,reg[1]) ; } 

	;

factorial : id '=' FACT '(' num ')' ';' {int n = $5; int i; int f=1;
											for(i=1;i<=n;i++)
													{ f= f*i;
													}
											installid($1,f);
			fprintf(yyout,"%s := %d; \n%s := 1; \n\nL:%s := %s*%s; \n DEC %s \n if nz goto L; \n id := %s\n\n",reg[0],$5,reg[1],reg[1],reg[1],reg[0],reg[0],reg[1]);
										}
;


exp    	: term                 { {$$ = $1;} /*fprintf(yyout,"%s := %d;\n ",reg[0],$1);*/ ; } 
       	| exp '+' exp          { {$$ = $1 + $3;} /*fprintf(yyout,"%s := %d + %d;\n ",reg[0],$1,$3);*/ ; } 
       	| exp '-' exp          { {$$ = $1 - $3;} /*fprintf(yyout,"%s := %d - %d;\n ",reg[0],$1,$3);*/ ; }
		| exp '*' exp	       { {$$ = $1 * $3;} /*fprintf(yyout,"%s := %d * %d;\n ",reg[0],$1,$3);*/ ; }
		| exp '/' exp	       { {$$ = $1 / $3;} /*fprintf(yyout,"%s := %d / %d;\n ",reg[0],$1,$3);*/ ; }
		| exp '%'exp		{ {$$= $1 % $3;}}	
		| exp '>' exp		{ {$$ =relop($1,$3,1);} /*fprintf(yyout,"%s := %c > %d;\n ",reg[0],$1,$3); */;} 
		| exp '<' exp		{ {$$ =relop($1,$3,2);} /*fprintf(yyout,"%s := %c < %d;\n ",reg[0],$1,$3); */;}
		| exp eq exp		{ {$$ =relop($1,$3,3);} /*fprintf(yyout,"%s := %c eq %d;\n ",reg[0],$1,$3); */;}
		| exp ne exp		{ {$$ =relop($1,$3,4);} /*fprintf(yyout,"%s := %c neq %d;\n ",reg[0],$1,$3); */;}
		| exp ge exp		{ {$$ =relop($1,$3,5);} /*fprintf(yyout,"%s := %c ge %d;\n ",reg[0],$1,$3); */;}
		| exp le exp		{ {$$ =relop($1,$3,6);} /*fprintf(yyout,"%s := %c le %d;\n ",reg[0],$1,$3); */;}
		| '(' exp ')'		{ {$$ = $2;} /*fprintf(yyout,"%s := %d;\n ",reg[0],$2); */;}
		| exp and exp		{ {$$ =relop($1,$3,7);} /*fprintf(yyout,"%s := %c and %d;\n ",reg[0],$1,$3);*/ ;}
		| exp or exp		{ {$$ =relop($1,$3,8);} /*fprintf(yyout,"%s := %c or %d;\n ",reg[0],$1,$3);*/ ;}
	;

term   	: num                {$$ = $1;}
	|id			{$$=getid($1);}
;
%%
int relop(int a , int b ,int op)
{
switch(op){
case 1:if(a>b){return 1;} else{return 0;} break;
case 2:if(a<b){return 1;} else{return 0;} break;
case 3:if(a==b){return 1;} else{return 0;} break;
case 4:if(a!=b){return 1;} else{return 0;} break;
case 5:if(a>=b){return 1;} else{return 0;} break;
case 6:if(a<=b){return 1;} else{return 0;} break;
case 7:if(a>0 && b>0 ){return 1;}else{return 0;}break;
case 8:if(a>0 || b>0 ){return 1;}else{return 0;}break;
}
}

void dis()
{
int i;
printf("index\tvar\tval\n");
for(i=0;i<53;i++)
{
 if(symbol[i].val!=-101)
 printf("%d\t%s\t%d\n",i,symbol[i].name,symbol[i].val);
}
}

void installid(char str[],int n){
int index,i;
index=str[0]%53;
i=index;
if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
{
symbol[index].val=n;
strcpy(symbol[index].name,str);
}
else
{
i=(i+1)%53;
 	while(i!=index)
	{
		if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
		{
			symbol[i].val=n;
			strcpy(symbol[i].name,str);
			break;
		}
	i=(i+1)%53;
	}
}

}


int getid(char str[]){
int index,i;
index=str[0]%53;
i=index;
if(strcmp(str,symbol[index].name)==0)
{
return(symbol[index].val);
}
else
{i=(i+1)%53;
 	while(i!=index)
	{
		if(strcmp(str,symbol[i].name)==0)
		{
			return (symbol[i].val);
			break;
		}
	i=(i+1)%53;
	}
	if(i==index)
	{
		printf("not initialised.");
	}
}

}


void yyerror (char *s) {fprintf (stdout, "%s\n", s);} 

int main()
{

int i;

 for(i=0;i<53;i++)
{
symbol[i].val=-101;
}

yyout = fopen("output.txt","a");
/* if(yyout==NULL)
{
	printf("error!!");
}
else
{
	printf("file opened");
} */

//fprintf(yyout,"%s",reg[0]);
//fprintf("\n%s",ftell(yyout));

 return yyparse();

}
