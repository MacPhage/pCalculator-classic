//
//  Director.h
//  Potent Calculator
//
//  Created by Austin Jackson,
//  Last modified on November 2, 2013.
//
//

#include "Menu.h"

using namespace std;

void menuArea();
void menuSurfaceArea();
void menuVolume();
void menuClassify();
void menuClassifyTriangle();
void menuTrig();
void menuPolygon();
void menuTrueFalse();

void switchOperation()
{
    cout<<"\nChoose Operation: "; 
	cin>>operation;
	if(operation == "+")
    {
        menuAddition();
    }
    else if(operation == "-")
    {
        menuSubtraction();
    }
    else if(operation == "*")
	{
		menuMultiplication();
	}
	else if(operation ==  "/")
	{
		menuDivision();
	}
	else if(operation ==  "pow")
	{
		menuExponents();
	}
	else if(operation ==  "sqrt")
	{
		menuSquareroot();
	}
	else if(operation ==  "factorial")
	{
		menuFactorials();
	}
	else if(operation ==  "distance")
	{
       	menuDistance();
	}
	else if(operation ==  "midpoint")
	{
		menuMidpoint();
	}
	else if(operation ==  "slope")
	{
		menuSlope();
	}
	else if(operation ==  "circum")
	{
		menuCircumference();
	}
	else if(operation ==  "radius")
	{
		menuRadius();
	}
	else if(operation ==  "area")
	{
        menuArea();
	}
	else if(operation ==  "surfacearea")
	{
        menuSurfaceArea();
	}
    else if(operation ==  "volume")
	{
        menuVolume();
	}
	else if(operation == "classify")
    {
        menuClassify();
    }
    else if(operation == "pythag")
    {
        menuPythagoreanTheorem();
    }
    else if(operation == "trig")
    {
        menuTrig();
    }
	else if(operation == "polygon")
	{
		menuPolygon();
	}
	else if(operation == "tf")
	{
        menuTrueFalse();
    }
	else if(operation ==  "X")
		{
			appstate = 1;
		}
	else if(operation ==  "@")
		{
			clearIns();
			about();
		}
    else if(operation == "?")
        {
            howToUse();
        }
    else if(operation == "help")
        {
            howToUse();
        }
    else if(operation == "derp")
        {
            derp();
        }
    else if(operation == "chartest")
    {
        cin>>iA;
        cin>>iB;
        cout<<"CHARTEST : "<<iA<<iB<<endl;
        chartest(iA,iB);
    }
    else if(operation == "color" && isWindows == true)
    {
        cout<<"Enter a color value: "<<endl;
        cout<<"1=blue, 2=green, 3=teal, 4=red,\n5=magenta, 6=yellow, 7=white, 8=grey"<<endl;
        cin>>strA;
        color(strA);
    }
    else if(operation == "disco" && isWindows == true)
    {
        cin>>iA;
        cin>>iB;
        cout<<"\nARE YOU READY TO GET FUNKY?"<<endl;
        disco(iA,iB);
    }
    else if(operation == "matrix" && isWindows == true)
    {
		matrix();
	}
    else if(operation == "infinitydemo")
    {
        double a = 8;
        double b = 0;
        double c = a/b;
        cout<<"double a="<<a<<endl;
        cout<<"double b="<<b<<endl;
        cout<<"double c="<<c<<endl;
        cout<<"c=a/b"<<endl;
        cout<<"c is being divided by 0, oh noes!"<<endl;
        cout<<"isinf(a)="<<isinf(a)<<endl;
        cout<<"isinf(b)="<<isinf(b)<<endl;
        cout<<"isinf(c)="<<isinf(c)<<endl;
        cout<<"isinf() checks for an \'infinite\' value and returns true if it is."<<endl;
    }
	else
	{
		cout<<"INVALID OPERATION GIVEN. RETURNING TO MENU."<<endl;
	}
}

void menuArea()
{
    string shape;
    cout<<"Enter one of the following supported shapes:"<<endl;
    cout<<"   triangle, parallelogram, rhombus, trapezoid, circle"<<endl;
    cout<<"Shape: ";
    cin>>shape;

    if(shape == "triangle")
    {
        menuAreaTriangle();
    }
    else if(shape == "parallelogram")
    {
        menuAreaParallelogram();
    }
    else if(shape == "rhombus")
    {
        menuAreaRhombus();
    }
    else if(shape == "trapezoid")
    {
        menuAreaTrapezoid();
    }
    else if(shape == "circle")
    {
        menuAreaCircle();
    }
}

void menuSurfaceArea()
{
    string shape;
    cout<<"Enter one of the following supported shapes:"<<endl;
    cout<<"   cube, rectprism, sphere, cylinder"<<endl;
    cout<<"Shape: ";
    cin>>shape;

    if(shape == "cube")
    {
        menuSaCube();
    }
    else if(shape == "rectprism")
    {
        menuSaRectPrism();
    }
    else if(shape == "sphere")
    {
        menuSaSphere();
    }
    else if(shape == "cylinder")
    {
        menuSaCylinder();
    }
}

void menuVolume()
{
    string shape;
    cout<<"Enter one of the following supported shapes:"<<endl;
    cout<<"   cube, rectprism, cylinder, cone, sphere"<<endl;
    cout<<"Shape: ";
    cin>>shape;
    
    if(shape == "cube")
    {
        menuVolumeCube();
    }
    else if(shape == "rectprism")
    {
        menuVolumeRectPrism();
    }
    else if(shape == "cylinder")
    {
        menuVolumeCylinder();
    }
    else if(shape == "cone")
    {
        menuVolumeCone();
    }
    else if(shape == "sphere")
    {
        menuVolumeSphere();
    }
}

void menuClassify()
{
    string shape;
    cout<<"Enter one of the following supported shapes:"<<endl;
    cout<<"   triangle, quadrilateral, (nothing else)"<<endl;
    cout<<"Shape: ";
    cin>>shape;

    if(shape == "triangle")
    {
        menuClassifyTriangle();
    }
    else if(shape == "quadrilateral")
    {
        menuClassifyQuadrilateral();
    }
}

void menuTrig()
{
	cout<<"Trigonometry operation selected."<<endl;
	string command;
    cout<<"\nEnter one of the following supported operations:"<<endl;
    cout<<"   tan, cos, sin, aTan, aCos, aSin, (nothing else)"<<endl;
    cout<<"Operation: ";
    cin>>command;
    cout<<"\n";
    
    if(command == "tan")
    {
        menuTrigTan();
    }
    else if(command == "cos")
    {
        menuTrigCos();
    }
    else if(command == "sin")
    {
        menuTrigSin();
    }
    else if(command == "aTan")
    {
        menuTrigATan();
    }
    else if(command == "aCos")
    {
        menuTrigACos();
    }
    else if(command == "aSin")
    {
        menuTrigASin();
    }
    /*else if(command == "solveright")
    {
        menuTrigSolveRight();
    }*/
    /*else if(command == "")
    {
        menuTrig();
    }*/
}

void menuPolygon()
{
	cout<<"Polygon geometry operation selected."<<endl;
	string command;
    cout<<"\nEnter one of the following supported operations:"<<endl;
    cout<<"   convexInteriorAngles, areaRegular, perimeterRegular, (nothing else)"<<endl;
    cout<<"Operation: ";
    cin>>command;
    cout<<"\n";

    if(command == "convexInteriorAngles")
    {
        menuPolyConvexInt();
    }
    else if(command == "areaRegular")
    {
        menuPolyAreaReg();
    }
    else if(command == "perimeterRegular")
    {
        menuPolyPerimeterReg();
    }
}

void menuTrueFalse()
{
    cout<<"True-or-False operation selected."<<endl;
	string command;
	cout<<"This command allows you to test if different properties are true or false."<<endl;
    cout<<"\nEnter one of the following supported operations:"<<endl;
    cout<<"   perpendicular, (nothing else)"<<endl;
    cout<<"Operation: ";
    cin>>command;
    cout<<"\n";

    if(command == "perpendicular")
    {
        menuTFPerpendicular();
    }
    else if(command == "")
    {
        //
    }
}
