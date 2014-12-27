//
//  Menu.h
//  Potent Calculator
//
//  Created by Austin Jackson,
//  Last modified on November 2, 2013.
//
//

#include <iostream>
#include <cstdlib>
#include <math.h>
#include "MathFunctions.h"


using namespace std;

void menuAddition();
void menuSubtraction();
void menuMultiplication();
void menuDivision();
void menuExponents();
void menuSquareroot();
void menuFactorials();
void menuDistance();
void menuMidpoint();
void menuSlope();
void menuCircumference();
void menuRadius();

void menuAddition()
{
	cout<<"Addition selected."<<endl;
	cout<<"Example: \'2 4\' for 2 + 4."<<endl;
	cout<<"Enter what you would like to add, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<add(inA,inB)<<endl;
	clearIns();
}

void menuSubtraction()
{
	cout<<"Subtraction selected."<<endl;
	cout<<"Example: \'2 4\' for 2 - 4."<<endl;
	cout<<"Enter what you would like to subtract, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<subtract(inA,inB)<<endl;
	clearIns();
}

void menuMultiplication()
{
	cout<<"Multiplication selected."<<endl;
	cout<<"Example: \'2 4\' for 2 * 4."<<endl;
	cout<<"Enter what you would like to multiply, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<multiply(inA,inB)<<endl;
	clearIns();
}

void menuDivision()
{
	cout<<"Division selected."<<endl;
	cout<<"Example: \'2 4\' for 2 / 4."<<endl;
	cout<<"Enter what you would like to divide, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<divide(inA,inB)<<endl;
	clearIns();
}

void menuExponents()
{
	cout<<"Exponents selected."<<endl;
	cout<<"Example: \'2 4\' for 2 to the power of 4, or 2^4."<<endl;
	cout<<"Enter what you would like to have exponentially multiplied, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<exponents(inA,inB)<<endl;
	clearIns();
}

void menuSquareroot()
{
	cout<<"Squareroot selected."<<endl;
	cout<<"Example: \'5\' for the Squareroot of 5."<<endl;
	cout<<"Enter what you would like to find the Squareroot of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<squareroot(inA)<<endl;
	clearIns();
}
void menuFactorials()
{
	cout<<"Factorials selected."<<endl;
	cout<<"Example: \'5\' for the Factorial of 5."<<endl;
	cout<<"Enter what you would like to find the Factorial of:"<<endl;
	cin>>inA;
	inB = 1;
	cout<<"\nAnswer: "<<factorials(inA,inB)<<endl;
	clearIns();
}
void menuDistance()
{
	cout<<"Distance (XY) selected."<<endl;
	cout<<"Example: \'-6 5 3 4\' = (-6,5) and (3,4)"<<endl;
	cout<<"Enter point coordinates below with spaces:"<<endl;
	cout<<"Point A, X value (X1): ";
	cin>>inA;
	cout<<"\nPoint A, Y value (Y1): ";
	cin>>inB;
	cout<<"\nPoint B, X value (X2): ";
	cin>>inC;
	cout<<"\nPoint B, Y value (Y2): ";
	cin>>inD;
	cout<<"\nDecimal form: "<<Distance(inA,inB,inC,inD)<<endl;
	cout<<"Squareroot form: "<<DistanceSquareroot(inA,inB,inC,inD)<<endl;
	cout<<"Radical form: "<<"(coming soon!)"<<endl;
	clearIns();
}
void menuMidpoint()
{
	cout<<"Midpoint (XY) selected."<<endl;
	cout<<"Example: \'-6 5 3 4\' = (-6,5) and (3,4)"<<endl;
	cout<<"Enter point coordinates below with spaces:"<<endl;
	cout<<"Point A, X value (X1): ";
	cin>>inA;
	cout<<"\nPoint A, Y value (Y1): ";
	cin>>inB;
	cout<<"\nPoint B, X value (X2): ";
	cin>>inC;
	cout<<"\nPoint B, Y value (Y2): ";
	cin>>inD;
	cout<<"\nAnswer: "<<"("<<Midpoint(inA,inC)<<","<<Midpoint(inB,inD)<<")"<<endl;
}
void menuSlope()
{
	cout<<"Slope (XY) selected."<<endl;
	cout<<"Example: \'-6 5 3 4\' = (-6,5) and (3,4)"<<endl;
	cout<<"Enter point coordinates below with spaces:"<<endl;
	cout<<"Point A, X value (X1): ";
	cin>>inA;
	cout<<"\nPoint A, Y value (Y1): ";
	cin>>inB;
	cout<<"\nPoint B, X value (X2): ";
	cin>>inC;
	cout<<"\nPoint B, Y value (Y2): ";
	cin>>inD;
	if(isinf(SlopeDecimal(inA,inB,inC,inD)))
	{
        cout<<"\nDecimal form: undefined slope"<<endl;
    }
    else
    {
        cout<<"\nDecimal form: "<<"y = "<<SlopeDecimal(inA,inB,inC,inD)<<"x"<<endl;
    }
	cout<<"Fractional form: "<<"y = "<<SlopeFraction(inB,inD)<<"/"<<SlopeFraction(inA,inC)<<"x"<<endl;
	
	clearIns();
}
void menuCircumference()
{
	cout<<"Circumference (circular) selected."<<endl;
	cout<<"Example: \'5\' = [radius]."<<endl;
	cout<<"Enter what you would like to find the Circumference of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<Circumference(inA)<<endl;
	clearIns();
}
void menuRadius()
{
	cout<<"Radius (circular) selected."<<endl;
	cout<<"Example: \'5\' = [circumference]."<<endl;
	cout<<"Enter what you would like to find the Radius of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<Radius(inA)<<endl;
	clearIns();
}


void menuAreaTriangle()
{
	cout<<"Area (Triangle) selected."<<endl;
	cout<<"Example: \'2 4\' = [base] [height]."<<endl;
	cout<<"Enter what you would like to find the area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<AreaTriangle(inA,inB)<<endl;
	clearIns();
}
void menuAreaParallelogram()
{
	cout<<"Area (Parallelogram) selected."<<endl;
	cout<<"Example: \'2 4\' = [base] [height]."<<endl;
	cout<<"Enter what you would like to find the area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<AreaParallelogram(inA,inB)<<endl;
	clearIns();
}
void menuAreaRhombus()
{
	cout<<"Area (Rhombus) selected."<<endl;
	cout<<"Example: \'2 4\' = [base] [height]."<<endl;
	cout<<"Enter what you would like to find the area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<AreaRhombus(inA,inB)<<endl;
	clearIns();
}
void menuAreaTrapezoid()
{
	cout<<"Area (Trapezoid) selected."<<endl;
	cout<<"Example: \'2 4 6\' = [base1] [base2] [height]."<<endl;
	cout<<"Enter what you would like to find the area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"Received.\n";
	cin>>inC;
	cout<<"\nAnswer: "<<AreaTrapezoid(inA,inB,inC)<<endl;
	clearIns();
}
void menuAreaCircle()
{
	cout<<"Area (Circle) selected."<<endl;
	cout<<"Example: \'5\' = [radius]."<<endl;
	cout<<"Enter what you would like to find the Area of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<AreaCircle(inA)<<endl;
	clearIns();
}
void menuSaCube()
{
	cout<<"Surface Area (Cube) selected."<<endl;
	cout<<"Example: \'7\' = [edge length]."<<endl;
	cout<<"Enter what you would like to find the Surface Area of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<SaCube(inA)<<endl;
	clearIns();
}
void menuSaRectPrism()
{
	cout<<"Surface Area (Rectangular Prism) selected."<<endl;
	cout<<"Example: \'2 4 6\' = [edgelength1] [edgelength2] [edgelength3]."<<endl;
	cout<<"Enter what you would like to find the Surface Area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"Received.\n";
	cin>>inC;
	cout<<"\nAnswer: "<<SaRectPrism(inA,inB,inC)<<endl;
	clearIns();
}
void menuSaSphere()
{
	cout<<"Surface Area (Sphere) selected."<<endl;
	cout<<"Example: \'7\' = [circular radius]."<<endl;
	cout<<"Enter what you would like to find the Surface Area of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<SaSphere(inA)<<endl;
	clearIns();
}
void menuSaCylinder()
{
	cout<<"Surface Area (Cylinder) selected."<<endl;
	cout<<"Example: \'2 4\' = [radius] [height]."<<endl;
	cout<<"Enter what you would like to find the Surface Area of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<SaCylinder(inA,inB)<<endl;
	clearIns();
}
void menuVolumeCube()
{
	cout<<"Volume (Cube) selected."<<endl;
	cout<<"Example: \'7\' = [edge length]."<<endl;
	cout<<"Enter what you would like to find the Volume of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<VolumeCube(inA)<<endl;
	clearIns();
}
void menuVolumeRectPrism()
{
	cout<<"Volume (Rectangular Prism) selected."<<endl;
	cout<<"Example: \'2 4 6\' = [edgelength1] [edgelength2] [edgelength3]."<<endl;
	cout<<"Enter what you would like to find the Volume of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"Received.\n";
	cin>>inC;
	cout<<"\nAnswer: "<<VolumeRectPrism(inA,inB,inC)<<endl;
	clearIns();
}
void menuVolumeCylinder()
{
	cout<<"Volume (Cylinder) selected."<<endl;
	cout<<"Example: \'2 4\' = [radius] [height]."<<endl;
	cout<<"Enter what you would like to find the Volume of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<VolumeCylinder(inA,inB)<<endl;
	clearIns();
}
void menuVolumeCone()
{
	cout<<"Volume (Cone) selected."<<endl;
	cout<<"Example: \'2 4\' = [circular radius] [height]."<<endl;
	cout<<"Enter what you would like to find the Volume of, seperated by spaces:"<<endl;
	cin>>inA;
	cout<<"Received.\n";
	cin>>inB;
	cout<<"\nAnswer: "<<VolumeCone(inA,inB)<<endl;
	clearIns();
}
void menuVolumeSphere()
{
	cout<<"Volume (Sphere) selected."<<endl;
	cout<<"Example: \'7\' = [circular radius]."<<endl;
	cout<<"Enter what you would like to find the Volume of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<VolumeSphere(inA)<<endl;
	clearIns();
}
void menuClassifyTriangleLengths()
{
    cout<<"Classification (Triangle) selected."<<endl;
    cout<<"Example: \'8 15 16\' = [leg] [leg] [hypotenuse]"<<endl;
    cout<<"Enter the legs and hypotenuse of the Triangle seperated by spaces:"<<endl;
    cout<<"Leg A: ";
    cin>>inA;
    cout<<"Leg B: ";
    cin>>inB;
    cout<<"Leg C: ";
    cin>>inC;
    cout<<"\nTriangle Classified as: "<<ClassifyTriangle(inA,inB,inC)<<endl;
    clearIns();
}
void menuClassifyTrianglePoints()
{
    cout<<"Classification (Triangle) selected."<<endl;
    cout<<"Example: \'2 5 3 6 4 8\' = (2,5) (3,6) (4,8)"<<endl;
    cout<<"Enter the coordinate points of the Triangle seperated by spaces:"<<endl;
    cout<<"Point A, X value (X1): ";
	cin>>inA;
	cout<<"\nPoint A, Y value (Y1): ";
	cin>>inB;
	cout<<"\nPoint B, X value (X2): ";
	cin>>inC;
	cout<<"\nPoint B, Y value (Y2): ";
	cin>>inD;
    cout<<"\nPoint C, X value (X3): ";
	cin>>inE;
	cout<<"\nPoint C, Y value (Y3): ";
	cin>>inF;
	double side1 = Distance(inA,inB,inC,inD);
	double side2 = Distance(inC,inD,inE,inF);
	double side3 = Distance(inE,inF,inA,inB);
	double hypotenuse;
	if(side1 > side2 && side1 > side3)
	{
		hypotenuse = side1;
		cout<<"\nTriangle Classified as: "<<ClassifyTriangle(side2,side3,side1)<<endl;
	}
	else if(side2 > side1 && side2 > side3)
	{
		hypotenuse = side2;
		cout<<"\nTriangle Classified as: "<<ClassifyTriangle(side1,side3,side2)<<endl;
	}
	else if(side3 > side1 && side3 > side2)
	{
		hypotenuse = side3;
		cout<<"\nTriangle Classified as: "<<ClassifyTriangle(side1,side2,side3)<<endl;
	}
	else
	{
		cout<<"Something was invalid."<<endl;
	}
    clearIns();
}
void menuPythagoreanTheorem()
{
    cout<<"Pythagorean Theorem operation selected."<<endl;
    cout<<"Example: \'C 3 4\' = [solveFor] [leg] [leg]"<<endl;
    cout<<"Example: \'B 3 5\' = [solveFor] [leg] [hypotenuse]"<<endl;
    cout<<"Enter what you are solving for (B or C): ";
    cin>>chA;
    cout<<"Enter A: ";
    cin>>inA;
    cout<<"Enter B or C: ";
    cin>>inB;
    cout<<"\nMissing leg/hypotenuse calculated as: "<<PythagoreanTheorem(inA,inB,chA)<<endl;
    
}

void menuClassifyTriangle()
{
    cout<<"Classification (Triangle) selected."<<endl;
    cout<<"Are you calculating with the coordinate points OR side lengths?"<<endl;
    cout<<"Enter \'points\' or \'lengths\':"<<endl;
    cin>>strA;
    if(strA == "lengths")
    {
		menuClassifyTriangleLengths();
    }
    else if(strA == "points")
    {
		menuClassifyTrianglePoints();
	}
	else
	{
		cout<<"That was an invalid answer. Returning to menu."<<endl;
	}
    clearIns();
}

void menuClassifyQuadrilateral()
{
    cout<<"\nClassification (Quadrilateral) selected."<<endl;
    cout<<"Example: \'0 3 2 6 4 3 2 0 \' = points A(0,3) B(2,6) C(4,3) D(2,0)"<<endl;
    cout<<"Enter the coordinate points of the Quadralateral seperated by spaces, as shown in the example, when prompted below."<<endl;
    cout<<"The points *NEED* to be in order around the figure. "<<endl;
    cout<<"Enter coordinate points now: ";
    
    iA = 0;
    
	cin>>inA;
	cout<<"Point A, X value (X1).";
	cin>>inB;
	cout<<"\nPoint A, Y value (Y1). ";
	cin>>inC;
	cout<<"\nPoint B, X value (X2). ";
	cin>>inD;
	cout<<"\nPoint B, Y value (Y2). ";
	cin>>inE;
	cout<<"\nPoint C, X value (X3). ";
	cin>>inF;
	cout<<"\nPoint C, Y value (Y3). ";
	cin>>inG;
	cout<<"\nPoint D, X value (X4). ";
	cin>>inH;
	cout<<"\nPoint D, Y value (Y4). ";
	
	double slopeAB = SlopeDecimal(inA,inB,inC,inD);
	double slopeBC = SlopeDecimal(inC,inD,inE,inF);
	double slopeCD = SlopeDecimal(inE,inF,inG,inH);
	double slopeDA = SlopeDecimal(inG,inH,inA,inB);

	cout<<"\n\nSlope of point A & B = "<<slopeAB<<endl;
	cout<<"Slope of point B & C = "<<slopeBC<<endl;
	cout<<"Slope of point C & D = "<<slopeCD<<endl;
	cout<<"Slope of point D & A = "<<slopeDA<<endl;
	
	cout<<"\nParallelogram: "<<boolToString(isParallelogram(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Rhombus: "<<boolToString(isRhombus(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Rectangle: "<<boolToString(isRectangle(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Square: "<<boolToString(isSquare(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Trapezoid: "<<boolToString(isTrapezoid(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Isosceles Trapezoid: "<<boolToString(isIsoscelesTrapezoid(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	cout<<"Kite: "<<boolToString(isKite(inA,inB,inC,inD,inE,inF,inG,inH))<<endl;
	
	testedParallelogram = false;
    testedRhombus = false;
    testedRectangle = false;
    clearIns();
}

void menuTrigTan()
{
	cout<<"Tangent (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Tangent of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<tan(inA)<<endl;
	clearIns();
}

void menuTrigCos()
{
    cout<<"Cosine (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Cosine of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<cos(inA)<<endl;
	clearIns();
}

void menuTrigSin()
{
    cout<<"Sine (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Sine of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<sin(inA)<<endl;
	clearIns();
}
void menuTrigATan()
{
	cout<<"Tangent^-1 (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Tangent of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<atan(inA)<<endl;
	clearIns();
}

void menuTrigACos()
{
    cout<<"Cosine^-1 (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Cosine of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<acos(inA)<<endl;
	clearIns();
}

void menuTrigASin()
{
    cout<<"Sine^-1 (Trigonometry) selected."<<endl;
	cout<<"Example: \'7\' = [theta/input]."<<endl;
	cout<<"Enter what you would like to find the Sine of:"<<endl;
	cin>>inA;
	cout<<"\nAnswer: "<<asin(inA)<<endl;
	clearIns();
}

void menuPolyConvexInt()
{
	cout<<"Convex Polygon Sum of Interior Angles operation selected."<<endl;
    cout<<"Example: \'6\' = 6-gon or Hexagon"<<endl;
    cout<<"Enter the amount of sides: ";
    cin>>inA;
    cout<<"\n\nSum of interior angles calculated as: "<<polyConvexInt(inA)<<endl;
    clearIns();
}

void menuPolyAreaReg()
{
	cout<<"Regular Polygon Area operation selected."<<endl;
    cout<<"Example: \'2 3 4\' = [apothem] [sideLength] [sideAmount]"<<endl;
    cout<<"Enter apothem: ";
    cin>>inA;
    cout<<"Enter side length: ";
    cin>>inB;
    cout<<"Enter side amount: ";
    cin>>inC;
    cout<<"\n\nPolygon area calculated as: "<<polyAreaReg(inA,inB,inC)<<endl;
}

void menuPolyPerimeterReg()
{
	cout<<"Regular Polygon Perimeter operation selected."<<endl;
    cout<<"Example: \'3 4\' = [sideLength] [sideAmount]"<<endl;
    cout<<"Enter side length: ";
    cin>>inA;
    cout<<"Enter side amount: ";
    cin>>inB;
    cout<<"\n\nPolygon perimeter calculated as: "<<polyPerimeterReg(inA,inB)<<endl;
}

void menuTFPerpendicular()
{
    cout<<"Perpendicular TrueFalse operation selected."<<endl;
    cout<<"Example: \'1 -1\' = [slope1] [slope2]"<<endl;
    cout<<"Enter both slopes seperated by spaces in decimal form: ";
    cin>>inA;
    cout<<"Received.";
    cin>>inB;
    cout<<"\n\nPerpendicular Slopes: "<<boolToString(isPerpendicular(inA,inB))<<endl;
}
