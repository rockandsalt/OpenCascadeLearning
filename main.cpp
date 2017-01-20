#include <STEPControl_Reader.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepTools.hxx>


Standard_Integer main()
{
    STEPControl_Reader reader;

    char StepAddress = "/home/marc/Documents/Code/StepSample/Sample.step";
    reader.ReadFile(StepAddress);

    bool failsonly = false;
    IFSelect_PrintCount mode = IFSelect_ListByItem;

    reader.PrintCheckLoad(failsonly, mode);

    TopoDS_Shape shape = reader.shape();



    
    
}




