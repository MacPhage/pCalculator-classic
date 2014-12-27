//
//  MathFunctions.h
//  Potent Calculator
//
//  Created by Austin Jackson,
//  Last modified on November 2, 2013.
//
//

#include "Core.h"

using namespace std;

double add(double A,double B)
{
    return A+B;
}

double subtract(double A,double B)
{
    return A-B;
}

double multiply(double A,double B)
{
    return A*B;
}

double divide(double A,double B)
{
    return A/B;
}

double exponents(double A,double B)
{
    return pow(A,B);
}
double squareroot(double A)
{
    return sqrt(A);
}
double factorials(double A,double B)
{
	while(A > 1)
    {
        B = B * A;
        A--;
    }
    return B;
}

//GEOMETRIC FUNCTIONS

double Distance(double X1,double Y1,double X2,double Y2)
{
	return sqrt( pow(X2-X1,2) + pow(Y2-Y1, 2) );
}
double DistanceSquareroot(double X1,double Y1,double X2,double Y2)
{
	return ( pow(X2-X1,2) + pow(Y2-Y1, 2) );
}

double Midpoint(double X1,double X2)
{
	return ( (X1+X2)/2 );
}
double SlopeDecimal(double X1,double Y1,double X2,double Y2)
{
	return ( (Y2-Y1)/(X2-X1) );
}
double SlopeFraction(double X1,double X2)
{
	return (X2-X1);
}
double Circumference(double radius)
{
	return ( 2*pi*radius );
}
double Radius(double circumference)
{
	return ( circumference/2/pi );
}

//AREA GEOMETRIC FUNCTIONS

double AreaTriangle(double base,double height)
{
    return ( (base*height)/2 );
}
double AreaParallelogram(double base,double height)
{
	return (base*height);
}
double AreaRhombus(double base,double height)
{
	return (base*height);
}
double AreaTrapezoid(double base1,double base2,double height)
{
    return ( ((base1+base2)*height)/2 );
}
double AreaCircle(double radius)
{
	return ( pi*pow(radius,2) );
}

//SURFACE AREA GEOMETRIC FUNCTIONS

double SaCube(double edgeLength)
{
	return (6*pow(edgeLength,2));
}
double SaRectPrism(double edgeA, double edgeB, double edgeC)
{
	return ( (2*edgeA*edgeB)+(2*edgeB*edgeC)+(2*edgeA*edgeC) );
}
double SaSphere(double radius)
{
	return (4*pi*pow(radius,2));
}
double SaCylinder(double radius, double height)
{
	return ( (2*pi*pow(radius,2))+(2*pi*radius*height) );
}

//VOLUME GEOMETRIC FUNCTIONS

double VolumeCube(double edgeLength)
{
	return pow(edgeLength,3);
}
double VolumeRectPrism(double edgeA, double edgeB, double edgeC)
{
	return (edgeA*edgeB*edgeC);
}
double VolumeCylinder(double radius, double height)
{
	return ( pi*pow(radius,2)*height );
}
double VolumeCone(double radius, double height)
{
	return ( 0.333*pi*pow(radius,2)*height );
}
double VolumeSphere(double radius)
{
	return ( (4/3)*pi*pow(radius,3) );
}

//COMMON GEOMETRIC FUNCTIONS

double PythagoreanTheorem(double a, double b, char solveFor)
{
    //solveFor.toUpperCase(); would be really nice to have.
    if(solveFor == 'C')
    {
        return sqrt(pow(a,2)+pow(b,2));
    }
    else if(solveFor == 'B')
    {
        return sqrt(pow(b,2)-pow(a,2));
    }
    else if(solveFor == 'c')
    {
        return sqrt(pow(a,2)+pow(b,2));
    }
    else if(solveFor == 'b')
    {
        return sqrt(pow(b,2)-pow(a,2));
    }
    else
    {
        return 0;
    }
}

string ClassifyTriangle(double a, double b, double c)
{
    //ANGLES
    string result;
    double abResult = sqrt(pow(a,2)+pow(b,2));
    if(abResult == c)
    {
        result += "RIGHT";
    }
    else if(abResult > c)
    {
        result += "ACUTE";
    }
    else if(abResult < c)
    {
        result += "OBTUSE";
    }
    //BUFFER
    result += " ";
    //SIDES
    if(a != b && a != c)
    {
        result += "SCALENE";
    }
    else if(a == b && a != c)
    {
        result += "ISOSCELES";
    }
    else if(a != b && a == c)
    {
        result += "ISOSCELES";
    }
    else if(a == b && a == c)
    {
        result += "EQUILATERAL";
    }
    return result;
}

double polyConvexInt(double sides)
{
	return ((sides-2)*180);
}

double polyPerimeterReg(double sideLength, double sideAmount)
{
	return (sideLength*sideAmount);
}

double polyAreaReg(double apothem, double sideLength, double sideAmount)
{
	return (0.5*apothem*polyPerimeterReg(sideLength,sideAmount));
}

bool testedParallelogram = false;
bool testedRhombus = false;
bool testedRectangle = false;

bool isPerpendicular(double slope1,double slope2)
{
    if(slope1 == (-1)/slope2)
    {
        return true;
    }
    else if(slope2 == (-1)/slope1)
    {
        return true;
    }
    else if( (isinf(slope1) && slope2 == 0) || (isinf(slope2) && slope1 == 0) )
    {
        cout<<"|-> The compared slopes are perpendicular, but one is undefined."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool isParallelogram(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
	double slopeAB = SlopeDecimal(X1,Y1,X2,Y2);
	double slopeBC = SlopeDecimal(X2,Y2,X3,Y3);
	double slopeCD = SlopeDecimal(X3,Y3,X4,Y4);
	double slopeDA = SlopeDecimal(X4,Y4,X1,Y1);
	
	double slopeAC = SlopeDecimal(X1,Y1,X3,Y3);
	double slopeBD = SlopeDecimal(X2,Y2,X4,Y4);
	
	if( (slopeAB == slopeCD) && (slopeBC == slopeDA) && (slopeAB != slopeBC) && (slopeBC != slopeCD) && (slopeCD != slopeDA) && (slopeDA != slopeAB))
	{
        testedParallelogram = true;
		return true;
	}
	else if( (isinf(slopeAB) && isinf(slopeCD) && slopeBC == 0 && slopeDA == 0) || (isinf(slopeBC) && isinf(slopeDA) && slopeAB == 0 && slopeCD == 0) )
	{
        if(iA == 0)
        {
            cout<<"This parallelogram has an undefined slope (\'1.#INF\')."<<endl;
            iA++;
        }
        testedParallelogram = true;
        return true;
    }
	else
	{
        testedParallelogram = false;
		return false;
	}
}

bool isRhombus(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
    bool perpendicularDiagonals;
    bool congruentSides;
    bool bisectingDiagonals;
    bool willReturn;

	double slopeAC = SlopeDecimal(X1,Y1,X3,Y3);
	double slopeBD = SlopeDecimal(X2,Y2,X4,Y4);
	
	double distAB = DistanceSquareroot(X1,Y1,X2,Y2);
	double distBC = DistanceSquareroot(X2,Y2,X3,Y3);
	double distCD = DistanceSquareroot(X3,Y3,X4,Y4);
	double distDA = DistanceSquareroot(X4,Y4,X1,Y1);

	double distAC = DistanceSquareroot(X1,Y1,X3,Y3);
	double distBD = DistanceSquareroot(X2,Y2,X4,Y4);

    if(isPerpendicular(slopeAC,slopeBD))
    {
        perpendicularDiagonals = true;
    }
    else
    {
        perpendicularDiagonals = false;
    }
    
    if(distAB == distBC && distCD == distDA)
    {
        congruentSides = true;
    }
    else
    {
        congruentSides = false;
    }
    
    if(Midpoint(X1,X3) == Midpoint(X2,X4) && Midpoint(Y1,Y3) == Midpoint(Y2,Y4))
    {
        bisectingDiagonals = true;
    }
    else
    {
        bisectingDiagonals = false;
    }
    
    if(perpendicularDiagonals == true && congruentSides == true && bisectingDiagonals == true && isParallelogram(X1,Y1,X2,Y2,X3,Y3,X4,Y4) == true)
    {
        cout<<"\n|-> [rhombus] perpendicularDiagonals: "<<boolToString(perpendicularDiagonals)<<endl;
        cout<<"|-> [rhombus] congruentSides: "<<boolToString(congruentSides)<<endl;
        cout<<"|-> [rhombus] bisectingDiagonals: "<<boolToString(bisectingDiagonals)<<endl;
        testedRhombus = true;
        return true;
    }
    else
    {
        cout<<"\n|-> [rhombus] perpendicularDiagonals: "<<boolToString(perpendicularDiagonals)<<endl;
        cout<<"|-> [rhombus] congruentSides: "<<boolToString(congruentSides)<<endl;
        cout<<"|-> [rhombus] bisectingDiagonals: "<<boolToString(bisectingDiagonals)<<endl;
        testedRhombus = false;
        return false;
    }
}

bool isRectangle(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
    double slopeAB = SlopeDecimal(X1,Y1,X2,Y2);
	double slopeBC = SlopeDecimal(X2,Y2,X3,Y3);
	double slopeCD = SlopeDecimal(X3,Y3,X4,Y4);
	double slopeDA = SlopeDecimal(X4,Y4,X1,Y1);

    bool perpendicular_AB_BC = isPerpendicular(slopeAB,slopeBC);
    bool perpendicular_BC_CD = isPerpendicular(slopeBC,slopeCD);
    bool perpendicular_CD_DA = isPerpendicular(slopeCD,slopeDA);
    bool perpendicular_DA_AB = isPerpendicular(slopeDA,slopeAB);
    
    bool fourRightAngles;
    bool congruentDiagonals;
    
    double midpointX = Midpoint(X1,X3); //Estimated
    double midpointY = Midpoint(Y1,Y3); //Estimated
    
    if(perpendicular_AB_BC == true && perpendicular_BC_CD == true && perpendicular_CD_DA == true && perpendicular_DA_AB == true)
    {
        fourRightAngles = true;
    }
    else
    {
        fourRightAngles = false;
    }
    
    if(DistanceSquareroot(X1,Y1,midpointX,midpointY) == DistanceSquareroot(X2,Y2,midpointX,midpointY) && DistanceSquareroot(X3,Y3,midpointX,midpointY) == DistanceSquareroot(X4,Y4,midpointX,midpointY))
    {
        congruentDiagonals = true;
    }
    else
    {
        congruentDiagonals = false;
    }
    
    if(congruentDiagonals == true && fourRightAngles == true && isParallelogram(X1,Y1,X2,Y2,X3,Y3,X4,Y4) == true)
    {
        cout<<"\n|-> [rectangle] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        cout<<"|-> [rectangle] fourRightAngles: "<<boolToString(fourRightAngles)<<endl;
        testedRectangle = true;
        return true;
    }
    else
    {
        cout<<"\n|-> [rectangle] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        cout<<"|-> [rectangle] fourRightAngles: "<<boolToString(fourRightAngles)<<endl;
        testedRectangle = false;
        return false;
    }
}

bool isSquare(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
    if(testedRhombus == true && testedRectangle == true && testedParallelogram == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isTrapezoid(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
	double slopeAB = SlopeDecimal(X1,Y1,X2,Y2);
	double slopeBC = SlopeDecimal(X2,Y2,X3,Y3);
	double slopeCD = SlopeDecimal(X3,Y3,X4,Y4);
	double slopeDA = SlopeDecimal(X4,Y4,X1,Y1);
	
	if( (slopeAB == slopeCD) && (slopeBC != slopeDA) && (slopeAB != slopeBC) && (slopeAB != slopeDA) )
	{
        //AB and CD are parallel, but no other sides are
        return true;
    }
    else if( (slopeAB != slopeCD) && (slopeBC == slopeDA) && (slopeAB != slopeBC) && (slopeAB != slopeDA) )
    {
        //BC and DA are parallel, but no other sides are
        return true;
    }
    else
    {
        return false;
    }
}

bool isIsoscelesTrapezoid(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
	double slopeAB = SlopeDecimal(X1,Y1,X2,Y2);
	double slopeBC = SlopeDecimal(X2,Y2,X3,Y3);
	double slopeCD = SlopeDecimal(X3,Y3,X4,Y4);
	double slopeDA = SlopeDecimal(X4,Y4,X1,Y1);

	double slopeAC = SlopeDecimal(X1,Y1,X3,Y3);
	double slopeBD = SlopeDecimal(X2,Y2,X4,Y4);
	
	double distAB = DistanceSquareroot(X1,Y1,X2,Y2);
	double distBC = DistanceSquareroot(X2,Y2,X3,Y3);
	double distCD = DistanceSquareroot(X3,Y3,X4,Y4);
	double distDA = DistanceSquareroot(X4,Y4,X1,Y1);

	double distAC = DistanceSquareroot(X1,Y1,X3,Y3);
	double distBD = DistanceSquareroot(X2,Y2,X4,Y4);
	
	bool congruentLegs;
	bool congruentDiagonals;
	
	if( (slopeAB == slopeCD) && (slopeBC != slopeDA) && (slopeAB != slopeBC) && (slopeAB != slopeDA) )
	{
        //AB and CD are parallel, but no other sides are
        //Check if the legs (the sides that are supposed to be the legs) are congruent
        if(distBC == distDA)
        {
            congruentLegs = true;
            cout<<"\n|-> [isoscelesTrapezoid] congruentLegs: "<<boolToString(congruentLegs)<<endl;
        }
        else
        {
            congruentLegs = false;
            cout<<"\n|-> [isoscelesTrapezoid] congruentLegs: "<<boolToString(congruentLegs)<<endl;
        }
        
        //Checks for congruent diagonals
        if(distAC == distBD)
        {
            congruentDiagonals = true;
            cout<<"|-> [isoscelesTrapezoid] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        }
        else
        {
            congruentDiagonals = false;
            cout<<"|-> [isoscelesTrapezoid] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        }
    }
    else if( (slopeAB != slopeCD) && (slopeBC == slopeDA) && (slopeAB != slopeBC) && (slopeAB != slopeDA) )
    {
        //BC and DA are parallel, but no other sides are
        //Check if the legs (the sides that are supposed to be the legs) are congruent
        if(distAB == distCD)
        {
            congruentLegs = true;
            cout<<"\n|-> [isoscelesTrapezoid] congruentLegs: "<<boolToString(congruentLegs)<<endl;
        }
        else
        {
            congruentLegs = false;
            cout<<"\n|-> [isoscelesTrapezoid] congruentLegs: "<<boolToString(congruentLegs)<<endl;
        }
        
        //Checks for congruent diagonals
        if(distAC == distBD)
        {
            congruentDiagonals = true;
            cout<<"|-> [isoscelesTrapezoid] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        }
        else
        {
            congruentDiagonals = false;
            cout<<"|-> [isoscelesTrapezoid] congruentDiagonals: "<<boolToString(congruentDiagonals)<<endl;
        }
    }
    else
    {
        //The shape is not a trapezoid
        return false;
    }
    
    if(congruentLegs == true && congruentDiagonals == true && isTrapezoid(X1,Y1,X2,Y2,X3,Y3,X4,Y4))
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool isKite(double X1, double Y1,double X2, double Y2,double X3, double Y3,double X4, double Y4)
{
	double slopeAB = SlopeDecimal(X1,Y1,X2,Y2);
	double slopeBC = SlopeDecimal(X2,Y2,X3,Y3);
	double slopeCD = SlopeDecimal(X3,Y3,X4,Y4);
	double slopeDA = SlopeDecimal(X4,Y4,X1,Y1);

	double slopeAC = SlopeDecimal(X1,Y1,X3,Y3);
	double slopeBD = SlopeDecimal(X2,Y2,X4,Y4);
	
	double distAB = DistanceSquareroot(X1,Y1,X2,Y2);
	double distBC = DistanceSquareroot(X2,Y2,X3,Y3);
	double distCD = DistanceSquareroot(X3,Y3,X4,Y4);
	double distDA = DistanceSquareroot(X4,Y4,X1,Y1);

	double distAC = DistanceSquareroot(X1,Y1,X3,Y3);
	double distBD = DistanceSquareroot(X2,Y2,X4,Y4);
	
	bool consecutiveCongruentSides;
	bool perpendicularDiagonals;
	
    if( (distAB == distBC && distCD == distDA) || (distBC == distCD && distDA == distAB))
    {
        consecutiveCongruentSides = true;
        cout<<"\n|-> [kite] consecutiveCongruentSides: "<<boolToString(consecutiveCongruentSides)<<endl;
    }
    else
    {
        consecutiveCongruentSides = false;
        cout<<"\n|-> [kite] consecutiveCongruentSides: "<<boolToString(consecutiveCongruentSides)<<endl;
    }
    
    if(isPerpendicular(slopeAC,slopeBD))
    {
        perpendicularDiagonals = true;
        cout<<"|-> [kite] perpendicularDiagonals: "<<boolToString(perpendicularDiagonals)<<endl;
    }
    else
    {
        perpendicularDiagonals = false;
        cout<<"|-> [kite] perpendicularDiagonals: "<<boolToString(perpendicularDiagonals)<<endl;
    }
    
    if(perpendicularDiagonals == true && consecutiveCongruentSides == true)
    {
        return true;
    }
    else
    {
        return false;
    }

}
