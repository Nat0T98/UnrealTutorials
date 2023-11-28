// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
//void UMyUserWidget::TestButtonClick()
//{
//    GLog->Log("It works!");
//}
void UMyUserWidget::TestButtonClick()
{
    //MyCustomTextProperty = TEXT("This is a test");
    OnCustomFire.Broadcast();

}

