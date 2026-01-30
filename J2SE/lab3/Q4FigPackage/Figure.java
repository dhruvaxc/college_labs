package Q4FigPackage;

abstract class Figure 
{
    double r, a, v;
    final double pi = 3.1428;
    public abstract void calcArea();
    public abstract void calcVolume();
    public abstract void dispArea();
    public abstract void dispVolume();
}
