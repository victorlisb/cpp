#include<iostream>
#include<stdio.h>

class coordinates{

	public:
	int x;
	int y;

	coordinates(int x, int y){

	this -> x = x;
        this -> y = y;
        	
	}
};
void get_user(coordinates& point);
int main(int argc,char *argv[]){

	int x, y;
        coordinates point(0,0);

	while(1){
	printf("(%d,%d)\n",point.x,point.y);
	get_user(point);
	system("clear");

	}
}

void get_user(coordinates& point){

	char ch = getchar();
        
	switch(ch){
       		case'w': point.y++;break;
		case'a': point.x--;break;
		case's': point.y--;break;
		case'd': point.x++;break;
        }

}


