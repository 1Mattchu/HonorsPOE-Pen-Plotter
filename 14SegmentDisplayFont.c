
//Variables for the Letter creation toolset






/*
14 segment display font

making the alphabet with 14segment display charicteristics
		A
	------------
  F |  H I J  | B
	|   \|/   |
    >-G1-|-G2-<
  E |   /|\   | C
	|  M L K  |
	------------
		D



bool charicterArray = A,B,C,D,E,F,H,I,J,M,L,K,G1,G2

charicterArray[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0}


	case ?:
		charicterArray[]= A,B,C,D,E,F,H,I,J,M,L,K,G1,G2
		charicterArray[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0}
		break;

*/


char the_char;

	
switch(The_char){
	case A:
		charicterArray[]={1,1,1,0,1,1,0,0,0,0,0,0,1,1}
		break;
	case B:
		charicterArray[]={1,1,1,1,0,0,0,1,0,0,1,0,0,1}
		break;
	case C:
		charicterArray[]={1,0,0,1,1,1,0,0,0,0,0,0,0,0}
		break;
	case D:
		charicterArray[]={1,1,1,1,0,0,0,1,0,0,1,0,0,0}
		break;
	case E:
		charicterArray[]={1,0,0,1,1,1,0,0,0,0,0,0,1,0}
		break;
	case F:
		charicterArray[]={1,0,0,0,1,1,0,0,0,0,0,0,1,0}
		break;
	case G:
		charicterArray[]={1,0,1,1,1,1,0,0,0,0,0,0,0,1}
		break;
	case H:
		charicterArray[]={0,1,1,0,1,1,0,0,0,0,0,0,1,1}
		break;
	case I:
		charicterArray[]={0,1,1,0,1,1,0,1,0,0,1,0,0,0}
		break;
	case J:
		charicterArray[]={0,1,1,1,1,0,0,0,0,0,0,0,0,0}
		break;
	case K:
		charicterArray[]={0,0,0,0,1,1,0,0,1,0,0,1,1,0}
		break;
	case L:
		charicterArray[]={0,0,0,1,1,1,0,0,0,0,0,0,0,0}
		break;
	case M:
		charicterArray[]={0,1,1,0,1,1,1,0,1,0,0,0,0,0}
		break;
	case N:
		charicterArray[]={0,1,1,0,1,1,1,0,0,0,0,1,0,0}
		break;
	case O:
		charicterArray[]={1,1,1,1,1,1,0,0,0,0,0,0,0,0}
		break;
	case P:
		charicterArray[]={1,1,0,0,1,1,0,0,0,0,0,0,1,1}
		break;
	case Q:
		charicterArray[]={1,1,1,1,1,1,0,0,0,0,0,1,0,0}
		break;
	case R:
		charicterArray[]={1,1,0,0,1,1,0,0,0,0,0,1,1,1}
		break;
	case S:
		charicterArray[]={1,0,1,1,0,1,0,0,0,0,0,0,1,1}
		break;
	case T:
		charicterArray[]={1,0,0,0,0,0,0,1,0,0,1,0,0,0}
		break;
	case U:
		charicterArray[]={0,1,1,1,1,1,0,0,0,0,0,0,0,0}
		break;
	case V:
		charicterArray[]={0,0,0,0,1,1,0,0,1,1,0,0,0,0}
		break;
	case W:
		charicterArray[]={0,1,1,0,1,1,0,0,0,1,0,1,0,0}
		break;
	case X:
		charicterArray[]={0,0,0,0,0,0,1,0,1,1,0,1,0,0}
		break;
	case Y:
		charicterArray[]={0,0,0,0,0,0,1,0,1,0,1,0,0,0}
		break;
	case Z:
		charicterArray[]={1,0,0,1,0,0,0,0,1,1,0,0,0,0}
		break;
	default:
		error
		break;