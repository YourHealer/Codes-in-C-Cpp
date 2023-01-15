#include <stdio.h>
#include <stdlib.h>

 typedef struct Day{
	int year;
	int month;
	int date;
}Day; 

int days(int num1,int num2,int num3);

int main() 
{
	Day a;
	int result;
	
	printf("请输入一个日期的年、月、日。\n"); 
	scanf("%d %d %d",&a.year,&a.month,&a.date);
	
	result=days(a.year,a.month,a.date);
	
	printf("%d",result);
	
	return 0;
}

int days(int num1,int num2,int num3)
{
	int num;
	switch(num2)
	{
		case 1:
			{
				num=num3;
				break;
			}
			
				case 2:
					{
					num=31+num3;
					break;
					}
					
						case 3:
							{
							num=31+28+num3;
								if((num1%4==0&&num1%100!=0)||(num1%400==0))
								{
								num++;
								}
							break;
							}
							
								case 4:
									{
									num=31+28+31+num3;
										if((num1%4==0&&num1%100!=0)||(num1%400==0))
										{
										num++;
										}	
									break;
									}
									
										case 5:
											{
											num=31+28+31+30+num3;
												if((num1%4==0&&num1%100!=0)||(num1%400==0))
												{
												num++;
												}	
											break;
											}
											
												case 6:
													{
													num=31+28+31+30+31+num3;
														if((num1%4==0&&num1%100!=0)||(num1%400==0))
														{
														num++;
														}
													break;	
													}
													
														case 7:
															{
															num=31+28+31+30+31+30+num3;
																if((num1%4==0&&num1%100!=0)||(num1%400==0))
																{
																num++;
																}		
															break;
															}
																case 8:
																	{
																	num=31+28+31+30+31+30+31+num3;
																		if((num1%4==0&&num1%100!=0)||(num1%400==0))
																		{
																		num++;
																		}	
																	break;
																	}
																		case 9:
																			{
																			num=31+28+31+30+31+30+31+31+num3;
																				if((num1%4==0&&num1%100!=0)||(num1%400==0))
																				{
																				num++;
																				}	
																			break;
																			}
																				case 10:
																					{
																					num=31+28+31+30+31+30+31+31+30+num3;
																						if((num1%4==0&&num1%100!=0)||(num1%400==0))
																						{
																						num++;
																						}
																					break;		
																					}
																						case 11:
																							{
																							num=31+28+31+30+31+30+31+31+30+31+num3;
																								if((num1%4==0&&num1%100!=0)||(num1%400==0))
																								{
																								num++;
																								}	
																							break;		
																							}
																							case 12:
																									{
																									num=31+28+31+30+31+30+31+31+30+31+30+num3;
																										if((num1%4==0&&num1%100!=0)||(num1%400==0))
																										{
																										num++;
																										}
																									break;			
																									}
		return(num);
	}
}

