RayTracing
==========

Ray tracing Computer Graphics implementation - C++

****************************Recursive ray tracing - READ ME*****************************************

The project is completed with the following requirements fulfilled:

1. The scene is rendered with the following objects
- Silver sphere
- matte pink sphere
- cylinder
- board

2. All the objects are rendered using Ray tracing technique only.

The description of the work done is given below:

Before getting into details of drawing each particular object, I have followed these steps:
1. Identify the point of intersection on the screen for a ray emanating from the viewer's eye to the screen.
2. Specifying each pixel using a loop, have recursively called the function "Raytrace" to display objects.
3. Set the values of each objects dimensions such as position, radius, lighting,etc. using "setvalues" function.
4. Find the minimum intersection point for each object.

As the principle of Ray tracing goes, the ray stars from the viewer's eye and goes on hitting objects undergoing consecutive reflections or refractions.
Therefore, the function 'raytrace' takes 3 arguments: initial point, intersecting point and the bounce count.
So, after the ray hits the 1st point on screen, here is the series of things that happen in the function:
1. Check the bounce count. I have set the BOUNCE COUNT to 3. If count exceeds, it doesnt ray trace anymore.
2. Find values of dx,dy,dz that are the values to find points of intersections of objects later in the program.
3. Then it checks for each object in series like Sphere, Board and Cylinder.

for sphere:
Parametric form t=(-b+sqrt(b^2-4a*c))/2*a is used to determine the point of intersection.
i.e, x=x0+tdx, y=y0+tdy, z=z0+tdz
Then, array t[] is initialised to store all the points of intersection and each element is indexed by 'mindex' variable.
After each shape's points of intersection are found, they are written onto t[] and minex is updated accordingly. 

for board:
I have used a different approach for drawing board. Instead of calling a plane intersection, I have called triangle intersection.
So, logically, I have used normals from two triangles that are adjacent to form a plane. As this is a simle plane, the unit normal is just defined along y-axis.
the t[] is updated with points of intersection on the board if it exists. The visible function is used to determine the visible side or normal side of the polygon.

for cylinder:
Cylinder has a different approach to find points of inersection.
I find the points of intersection using cylinder formulas and then store the minimal intersection point.
Later on the conditions for top and bottom surface of cylinder are checked.
P.S: The cylnder is actually visible, but is of the same color of the board. Please observe carefully and consider.

Once all the points are sorted and stored,
The normals are also found accordingly for each object using respective formulas.
The different factors needed to find the final light intensity.i.e,
Ambient property, diffuse property, specular property, 
Normal, reflection vector, viwving vector, etc. are calculated accordingly and applied as per the formula.

I = Ia*Ka + Id*Kd(N*L)+ Is*Ks(r*v)^n + R + T;

For R, new point is calcuated and further ray tracing is done by calling ray tracing function recursively.
The final colors to be displaye per pixel is assigned all these values at the end of the function and is returned.

FINAL NOTE:
1. I have used different header files to implement properties of each shape.
2. Please observe the cylinder towards the left bottom part of the scene. It may not be rendered properly, but all functions necessary to render it are written.
***********************************READ ME ENDS********************************************************************
