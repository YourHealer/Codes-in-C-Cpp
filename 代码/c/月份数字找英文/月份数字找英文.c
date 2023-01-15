#include <stdio.h>
#include <stdlib.h>

void find_answer(int* pointer); 
int main() 
{
	int month_number;
	
	printf("请输入你想求的月份！\n");
	scanf("%d",&month_number);
	
	find_answer(&month_number);
	 
	return 0;
}

void find_answer(int* pointer)
{
switch(*pointer)	
{
	case 1: printf("January"); break;
		case 2: printf("February"); break;
			case 3: printf("March"); break;
				case 4: printf("April"); break;
					case 5: printf("May"); break;
						case 6: printf("June"); break;
							case 7: printf("July"); break;
								case 8:  printf("August"); break;
									case 9: printf("September"); break;
										case 10: printf("October"); break;
											case 11: printf("November"); break;
												case 12: printf("December"); break;
	}
}


