#include <stdio.h>
#include <stdlib.h>
/*定义变量*/
 typedef struct Day{
	int year;
	int month;
	int date;
}Day; 

int main() 
{
// 系统提示
	Day a;
	int num;
	printf("请输入一个日期的年、月、日。\n"); 
	scanf("%d %d %d",&a.year,&a.month,&a.date);
	switch(a.month)
	{
		case 1:
			{
				num=a.date;
				break;
			}
			
				case 2:
					{
					num=31+a.date;
					break;
					}
					
						case 3:
							{
							num=31+28+a.date;
								if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
								{
								num++;
								}
							break;
							}
							
								case 4:
									{
									num=31+28+31+a.date;
										if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
										{
										num++;
										}	
									break;
									}
									
										case 5:
											{
											num=31+28+31+30+a.date;
												if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
												{
												num++;
												}	
											break;
											}
											
												case 6:
													{
													num=31+28+31+30+31+a.date;
														if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
														{
														num++;
														}
													break;	
													}
													
														case 7:
															{
															num=31+28+31+30+31+30+a.date;
																if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																{
																num++;
																}		
															break;
															}
																case 8:
																	{
																	num=31+28+31+30+31+30+31+a.date;
																		if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																		{
																		num++;
																		}	
																	break;
																	}
																		case 9:
																			{
																			num=31+28+31+30+31+30+31+31+a.date;
																				if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																				{
																				num++;
																				}	
																			break;
																			}
																				case 10:
																					{
																					num=31+28+31+30+31+30+31+31+30+a.date;
																						if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																						{
																						num++;
																						}
																					break;		
																					}
																						case 11:
																							{
																							num=31+28+31+30+31+30+31+31+30+31+a.date;
																								if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																								{
																								num++;
																								}	
																							break;		
																							}
																							case 12:
																									{
																									num=31+28+31+30+31+30+31+31+30+31+30+a.date;
																										if((a.year%4==0&&a.year%100!=0)||(a.year%400==0))
																										{
																										num++;
																										}
																									break;			
																									}
	 } 
	 printf("%d",num);
	return 0;
}
